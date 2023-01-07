#pragma once
#include <string>
//commenting unused .h files will speed up compilier and intellisense, i dont care to do this
#include "SDK.h"
#include "Menu.h"

using namespace std::string_literals;

extern void LoadConfig();

void InitCheat();

void MainThread();

void hkPostRender(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas);
HRESULT hkPresentFunc(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags); 

void HookInput();
void RemoveInput();
static LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
bool CreateView();
void LoadConfig();
void SaveConfig();

uintptr_t PatternScan(uintptr_t moduleAdress, const char* signature);
uintptr_t FindDMAAddy(uintptr_t ptr, std::vector<unsigned int> offsets);

struct
{
	HWND GameWindow;
	WNDPROC WndProcOriginal = nullptr;
	decltype(SetCursor)* SetCursorOriginal = nullptr;
	decltype(SetCursorPos)* SetCursorPosOriginal = nullptr;
	IDXGISwapChain* SwapChain;
	ID3D11Device* Device;
	ID3D11DeviceContext* Ctx;
	D3D_PRESENT_FUNCTION PresentFunc;
	HRESULT(*ResizeOriginal)(IDXGISwapChain* swapChain, UINT bufferCount, UINT width, UINT height, DXGI_FORMAT newFormat, UINT swapChainFlags) = nullptr;
	HRESULT(*OriginalPresent)(IDXGISwapChain* pThis, UINT SyncInterval, UINT Flags) = nullptr;
	ID3D11RenderTargetView* RenderTargetView = nullptr;
} D3D;

struct DrawTextData
{
	CG::UFont* RenderFont;
	CG::FString RenderText;
	CG::FVector2D ScreenPosition;
	CG::FLinearColor RenderColor;
	float Kerning;
	CG::FLinearColor ShadowColor;
	CG::FVector2D ShadowOffset;
	bool bCentreX;
	bool bCentreY;
	bool bOutlined;
	CG::FLinearColor OutlineColor;
};

struct DrawLineData
{
	CG::FVector2D ScreenPositionA;
	CG::FVector2D ScreenPositionB;
	float Thickness;
	CG::FLinearColor RenderColor;
};

struct DataStruct
{
	void(*OriginalPostRender)(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas);

	bool bMenuOpen = true;
	std::string dllPath = std::string();

	CG::UCanvas* drawCanvas = nullptr;
	CG::UFont* defaultFont = nullptr;
	CG::AShooterPlayerController* pCtr = nullptr;
	CG::AHUD* pHud = nullptr;
	CG::TArray<CG::AActor*> primalChars{};
	CG::AShooterCharacter* localPlayer = nullptr;

	std::vector<DrawTextData> DrawTextQueue{};
	std::vector<DrawLineData> DrawLineQueue{};

	struct
	{
		//Aim
		bool aimbot = true;
		int aimKey = 0x1;

		bool silentAim = true;
		bool noSpread = true;
		bool rapidFire = true;
		int aimFOV = 500;

		//ESP
		float deadPlayerColor[4] = { .5f, .5f, .5f, 1.f };
		float enemyPlayerColor[4] = { 1.f, 0.f, 0.f, 1.f };
		float teamPlayerColor[4] = { 0.f, 1.f, 0.f, 1.f };
		float sleepingPlayerColor[4] = { 0.f, 0.f, 1.f, 1.f };
		float turretColor[4] = { 1.f, 0.f, 0.f, 1.f };
		float containerColor[4] = { 1.f, 0.f, 1.f, 1.f };
		bool playerESP = true;
		bool turretESP = true;
		bool containerESP = false;

		//Rocket Turret
		bool rocketTurret = true;
		int streamHotkey = 0x1;
		int burstTurret = 0x2;

		//Misc
		bool useNotes = false;
		bool createChar = false;
		bool ghostMode = false;
		bool autoArmor = true;
		bool infiniteOrbit = true;
		bool instantTurn = true;
		bool Fly = true;
		bool speedHacks = true;
		int FlyKey = 0x20;
		float autoArmorPercent = .2;
		float speedHackMulti = .2;
		float bodyColor[4] = { 1.f, 0.f, 0.f, 1.f };
		char* charName = (char*)"123";
		wchar_t* wantedGT;

		//Menu
		float shadowColor[4] = { 0.f, 0.f, 0.f, 1.f };
	}Settings;
} Data;


void HookInput()
{
	RemoveInput();
	D3D.WndProcOriginal = reinterpret_cast<WNDPROC>(SetWindowLongPtrA(D3D.GameWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
}

void RemoveInput()
{
	if (D3D.WndProcOriginal)
	{
		SetWindowLongPtrA(D3D.GameWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(D3D.WndProcOriginal));
		D3D.WndProcOriginal = nullptr;
	}
}

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
	{
		return true;
	}
	switch (msg)
	{
	case WM_SIZE:
		if (D3D.Device != nullptr && wParam != SIZE_MINIMIZED)
		{
			if (D3D.RenderTargetView)
			{
				D3D.RenderTargetView->Release();
				D3D.RenderTargetView = nullptr;
			}
			D3D.SwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 2048);
			CreateView();
		}
		return 0;
	case WM_SYSCOMMAND:
		if ((wParam & 0xfff0) == SC_KEYMENU) return 0;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProcW(hWnd, msg, wParam, lParam);
}

bool CreateView()
{
	ID3D11Texture2D* Buffer = nullptr;
	if (FAILED(D3D.SwapChain->GetBuffer(0, __uuidof(Buffer), reinterpret_cast<PVOID*>(&Buffer)))) return false;
	if (FAILED(D3D.Device->CreateRenderTargetView(Buffer, nullptr, &D3D.RenderTargetView))) return false;
	Buffer->Release();
	return true;
}

void LoadConfig()
{
	if (FILE* fin = fopen(Data.dllPath.c_str(), "r"))
	{
		fread(&Data.Settings, sizeof(Data.Settings), 1, fin);
		fclose(fin);
	}
}

void SaveConfig()
{
	FILE* fout = fopen(Data.dllPath.c_str(), "w");
	fwrite(&Data.Settings, sizeof(Data.Settings), 1, fout);
	fclose(fout);
}