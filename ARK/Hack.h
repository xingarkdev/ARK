#pragma once
#include <string>
//commenting unused .h files will speed up compilier and intellisense, i dont care to do this
#include "SDK.h"
#pragma once
#pragma comment (lib,"d3d9.lib")
#pragma comment (lib,"d3dx11.lib")
#include <wtypes.h>
#include <d3d9.h>
#include <d3dx11.h>
#include <d3d9types.h>
#define IMGUI_DEFINE_MATH_OPERATORS
#include <fstream>
#include <filesystem>
#include <Lmcons.h>
#include <Hooking/D3D11Hooking.hpp>
#include "Hooking/HookLib.h"
#include "Hooking/D3D11Hooking.hpp"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_win32.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_internal.h"
#include "ImGui/imgui_shadow.h"
#include <D3DX11tex.h>
#include "ImGui/bytes.h"

using namespace std::string_literals;

#define M_PI 3.141592

ID3D11ShaderResourceView* legit_image = nullptr;
ID3D11ShaderResourceView* rage_image = nullptr;
ID3D11ShaderResourceView* visuals_image = nullptr;
ID3D11ShaderResourceView* players_image = nullptr;
ID3D11ShaderResourceView* misc_image = nullptr;
ID3D11ShaderResourceView* settings_image = nullptr;

int accent_color[4] = { 103, 0, 163, 255 };
int selection_count = 0;
int legit_group_count = 0;

extern void LoadConfig();

void InitCheat();

void MainThread();

void hkPostRender(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas);
HRESULT hkPresentFunc(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags);
CG::FVector* hkAdjustedAim(CG::AShooterWeapon* Weapon, CG::FVector* Result);

void HookInput();
void RemoveInput();
static LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
bool CreateView();
void LoadConfig();
void SaveConfig();

uintptr_t PatternScan(uintptr_t moduleAdress, const char* signature);
uintptr_t FindDMAAddy(uintptr_t ptr, std::vector<unsigned int> offsets);

void RenderMenu(ID3D11Device* Device);

static const char* KeyNames[] = {
    "OFF",
    "VK_LBUTTON",
    "VK_RBUTTON",
    "VK_CANCEL",
    "VK_MBUTTON",
    "VK_XBUTTON1",
    "VK_XBUTTON2",
    "Unknown",
    "VK_BACK",
    "VK_TAB",
    "Unknown",
    "Unknown",
    "VK_CLEAR",
    "VK_RETURN",
    "Unknown",
    "Unknown",
    "VK_SHIFT",
    "VK_CONTROL",
    "VK_MENU",
    "VK_PAUSE",
    "VK_CAPITAL",
    "VK_KANA",
    "Unknown",
    "VK_JUNJA",
    "VK_FINAL",
    "VK_KANJI",
    "Unknown",
    "VK_ESCAPE",
    "VK_CONVERT",
    "VK_NONCONVERT",
    "VK_ACCEPT",
    "VK_MODECHANGE",
    "VK_SPACE",
    "VK_PRIOR",
    "VK_NEXT",
    "VK_END",
    "VK_HOME",
    "VK_LEFT",
    "VK_UP",
    "VK_RIGHT",
    "VK_DOWN",
    "VK_SELECT",
    "VK_PRINT",
    "VK_EXECUTE",
    "VK_SNAPSHOT",
    "VK_INSERT",
    "VK_DELETE",
    "VK_HELP",
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
    "I",
    "J",
    "K",
    "L",
    "M",
    "N",
    "O",
    "P",
    "Q",
    "R",
    "S",
    "T",
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
    "VK_LWIN",
    "VK_RWIN",
    "VK_APPS",
    "Unknown",
    "VK_SLEEP",
    "VK_NUMPAD0",
    "VK_NUMPAD1",
    "VK_NUMPAD2",
    "VK_NUMPAD3",
    "VK_NUMPAD4",
    "VK_NUMPAD5",
    "VK_NUMPAD6",
    "VK_NUMPAD7",
    "VK_NUMPAD8",
    "VK_NUMPAD9",
    "VK_MULTIPLY",
    "VK_ADD",
    "VK_SEPARATOR",
    "VK_SUBTRACT",
    "VK_DECIMAL",
    "VK_DIVIDE",
    "VK_F1",
    "VK_F2",
    "VK_F3",
    "VK_F4",
    "VK_F5",
    "VK_F6",
    "VK_F7",
    "VK_F8",
    "VK_F9",
    "VK_F10",
    "VK_F11",
    "VK_F12",
    "VK_F13",
    "VK_F14",
    "VK_F15",
    "VK_F16",
    "VK_F17",
    "VK_F18",
    "VK_F19",
    "VK_F20",
    "VK_F21",
    "VK_F22",
    "VK_F23",
    "VK_F24",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "VK_NUMLOCK",
    "VK_SCROLL",
    "VK_OEM_NEC_EQUAL",
    "VK_OEM_FJ_MASSHOU",
    "VK_OEM_FJ_TOUROKU",
    "VK_OEM_FJ_LOYA",
    "VK_OEM_FJ_ROYA",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "Unknown",
    "VK_LSHIFT",
    "VK_RSHIFT",
    "VK_LCONTROL",
    "VK_RCONTROL",
    "VK_LMENU",
    "VK_RMENU"
};
static const int KeyCodes[] = {
    0x0,  //Undefined
    0x01,
    0x02,
    0x03,
    0x04,
    0x05,
    0x06,
    0x07, //Undefined
    0x08,
    0x09,
    0x0A, //Reserved
    0x0B, //Reserved
    0x0C,
    0x0D,
    0x0E, //Undefined
    0x0F, //Undefined
    0x10,
    0x11,
    0x12,
    0x13,
    0x14,
    0x15,
    0x16, //IME On
    0x17,
    0x18,
    0x19,
    0x1A, //IME Off
    0x1B,
    0x1C,
    0x1D,
    0x1E,
    0x1F,
    0x20,
    0x21,
    0x22,
    0x23,
    0x24,
    0x25,
    0x26,
    0x27,
    0x28,
    0x29,
    0x2A,
    0x2B,
    0x2C,
    0x2D,
    0x2E,
    0x2F,
    0x30,
    0x31,
    0x32,
    0x33,
    0x34,
    0x35,
    0x36,
    0x37,
    0x38,
    0x39,
    0x3A, //Undefined
    0x3B, //Undefined
    0x3C, //Undefined
    0x3D, //Undefined
    0x3E, //Undefined
    0x3F, //Undefined
    0x40, //Undefined
    0x41,
    0x42,
    0x43,
    0x44,
    0x45,
    0x46,
    0x47,
    0x48,
    0x49,
    0x4A,
    0x4B,
    0x4C,
    0x4B,
    0x4E,
    0x4F,
    0x50,
    0x51,
    0x52,
    0x53,
    0x54,
    0x55,
    0x56,
    0x57,
    0x58,
    0x59,
    0x5A,
    0x5B,
    0x5C,
    0x5D,
    0x5E, //Rservered
    0x5F,
    0x60, //Numpad1
    0x61, //Numpad2
    0x62, //Numpad3
    0x63, //Numpad4
    0x64, //Numpad5
    0x65, //Numpad6
    0x66, //Numpad7
    0x67, //Numpad8
    0x68, //Numpad8
    0x69, //Numpad9
    0x6A,
    0x6B,
    0x6C,
    0x6D,
    0x6E,
    0x6F,
    0x70, //F1
    0x71, //F2
    0x72, //F3
    0x73, //F4
    0x74, //F5
    0x75, //F6
    0x76, //F7
    0x77, //F8
    0x78, //F9
    0x79, //F10
    0x7A, //F11
    0x7B, //F12
    0x7C, //F13
    0x7D, //F14
    0x7E, //F15
    0x7F, //F16
    0x80, //F17
    0x81, //F18
    0x82, //F19
    0x83, //F20
    0x84, //F21
    0x85, //F22
    0x86, //F23
    0x87, //F24
    0x88, //Unkown
    0x89, //Unkown
    0x8A, //Unkown
    0x8B, //Unkown
    0x8C, //Unkown
    0x8D, //Unkown
    0x8E, //Unkown
    0x8F, //Unkown
    0x90,
    0x91,
    0x92, //OEM Specific
    0x93, //OEM Specific
    0x94, //OEM Specific
    0x95, //OEM Specific
    0x96, //OEM Specific
    0x97, //Unkown
    0x98, //Unkown
    0x99, //Unkown
    0x9A, //Unkown
    0x9B, //Unkown
    0x9C, //Unkown
    0x9D, //Unkown
    0x9E, //Unkown 
    0x9F, //Unkown
    0xA0,
    0xA1,
    0xA2,
    0xA3,
    0xA4,
    0xA5
};

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

struct KeyInfo {
	char KeyCode;
	SHORT KeyState;
};

struct KeyBindInfo
{
    std::string tag;
    bool waitingforkey;
};
//
//bool KeyBind(std::string tag, int* k, std::vector<KeyInfo>* keys, const ImVec2& size_arg = ImVec2(0, 0))
//{
//    static std::vector<KeyBindInfo> waitingforkeyV = {};
//    bool tagFound = false;
//    bool tagIndex = -1;
//    bool waitingforkey = false;
//    for (int i = 0; i < waitingforkeyV.size(); i++)
//    {
//        if (waitingforkeyV[i].tag == tag)tagFound = true, tagIndex = i;
//    }
//    if (tagFound) waitingforkey = waitingforkeyV[tagIndex].waitingforkey;
//	if (waitingforkey == false)
//	{
//		if (ImGui::Button(KeyNames[*(int*)k], size_arg)) waitingforkey = true;
//	}
//	else if (waitingforkey == true)
//	{
//		ImGui::Button("...", size_arg);
//		for (int i = 0; i < keys->size(); i++)
//		{
//			KeyInfo Key = (*keys)[i];
//			if (Key.KeyState)
//			{
//				*(int*)k = Key.KeyCode;
//				waitingforkey = false;
//			}
//		}
//	}
//	return waitingforkey;
//}

bool KeyBind(int* k, std::vector<KeyInfo>* keys, const ImVec2& size_arg = ImVec2(0, 0))
{
    static bool waitingforkey = false;
    if (waitingforkey == false)
    {
        if (ImGui::Button(KeyNames[*(int*)k], size_arg)) waitingforkey = true;
    }
    else if (waitingforkey == true)
    {
        ImGui::Button("...", size_arg);
        for (int i = 0; i < keys->size(); i++)
        {
            KeyInfo Key = (*keys).at(i);
            if (Key.KeyState)
            {
                *(int*)k = Key.KeyCode;
                waitingforkey = false;
            }
        }
    }
    return waitingforkey;
}

struct DataStruct
{
	void(*OriginalPostRender)(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas);
    CG::FVector* (*OriginalhkAdjustedAim) (CG::AShooterWeapon*, CG::FVector*);

    CG::UKismetMathLibrary* mathLib = nullptr;

	bool bMenuOpen = true;
	std::string dllPath = std::string();

	CG::UCanvas* drawCanvas = nullptr;
	CG::UFont* defaultFont = nullptr;
	CG::AShooterPlayerController* pCtr = nullptr;
	CG::AHUD* pHud = nullptr;
	CG::TArray<CG::AActor*> primalChars{};
	CG::AShooterCharacter* localPlayer = nullptr;
    CG::AShooterCharacter* AimbotTarget;
    int totalEnemies = 0;

	std::vector<DrawTextData> DrawTextQueue{};
	std::vector<DrawLineData> DrawLineQueue{};

	std::vector<KeyInfo> KeyboardInfo;

	struct
	{
		//Aim
		bool aimbot = true;
		int aimKey = 0x1;

		bool silentAim = true;
		bool noSpread = true;
		bool rapidFire = true;
		float aimFOV = 500.f;

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
		wchar_t* charName = (wchar_t*)L"123";
		wchar_t* wantedGT;

		//Menu
		float shadowColor[4] = { 0.f, 0.f, 0.f, 1.f };
	}Settings;
} Data;

typedef struct _D3DXMATRIX
{
	union
	{
		struct
		{
			float        _11, _12, _13, _14;
			float        _21, _22, _23, _24;
			float        _31, _32, _33, _34;
			float        _41, _42, _43, _44;
		};
		float m[4][4];
	};
} D3DXMATRIXww;

D3DXMATRIXww Matrix(CG::FRotator Rotation, CG::FVector Origin = CG::FVector(0, 0, 0))
{
	float radPitch = (Rotation.Pitch * M_PI / 180.f);
	float radYaw = (Rotation.Yaw * M_PI / 180.f);
	float radRoll = (Rotation.Roll * M_PI / 180.f);
	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);
	D3DXMATRIXww matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;
	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;
	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;
	matrix.m[3][0] = Origin.X;
	matrix.m[3][1] = Origin.Y;
	matrix.m[3][2] = Origin.Z;
	matrix.m[3][3] = 1.f;
	return matrix;
}

bool W2S(CG::FVector WorldLocation, CG::FVector2D& ScreenLocation)
{
	if (WorldLocation == CG::FVector()) return false;
	auto Location = Data.pCtr->PlayerCameraManager->GetCameraLocation();
	auto Rotation = Data.pCtr->PlayerCameraManager->GetCameraRotation();
	D3DXMATRIXww tempMatrix = Matrix(Rotation);
	CG::FVector vAxisX, vAxisY, vAxisZ;
	vAxisX = CG::FVector(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = CG::FVector(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = CG::FVector(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);
	float w = tempMatrix.m[3][0] * WorldLocation.X + tempMatrix.m[3][1] * WorldLocation.Y + tempMatrix.m[3][2] * WorldLocation.Z + tempMatrix.m[3][3];
	if (w < 0.01) return false;
	CG::FVector vDelta = WorldLocation - Location;
	CG::FVector vTransformed = CG::FVector(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));
	if (vTransformed.Z < 1.0f) vTransformed.Z = 1.f;
	float fovAngle = Data.pCtr->PlayerCameraManager->DefaultFOV;
	float screenCenterX = Data.drawCanvas->SizeX / 2;
	float screenCenterY = Data.drawCanvas->SizeY / 2;
	ScreenLocation.X = (screenCenterX + vTransformed.X * (screenCenterX / (float)tan(fovAngle * M_PI / 360)) / vTransformed.Z);
	ScreenLocation.Y = (screenCenterY - vTransformed.Y * (screenCenterX / (float)tan(fovAngle * M_PI / 360)) / vTransformed.Z);
	if (ScreenLocation.X < -50 || ScreenLocation.X >(Data.drawCanvas->SizeX + 250)) return false;
	if (ScreenLocation.Y < -50 || ScreenLocation.Y >(Data.drawCanvas->SizeY + 250)) return false;
	return true;
}

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

float calcDistance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

//menu is pasted from https://discord.gg/rG86p3e5fr
void RenderMenu(ID3D11Device* Device) {
	ImGuiStyle& style = ImGui::GetStyle();

	//this part crashes, it should load the images stored as a byte array as a d3d texture
	//as a result the tabs are invisible, but can still be clicked

	if (legit_image == nullptr)D3DX11CreateShaderResourceViewFromMemory(D3D.Device, rage, sizeof(rage), 0,
			0, &legit_image, 0);
	if (visuals_image == nullptr)D3DX11CreateShaderResourceViewFromMemory(D3D.Device, visuals, sizeof(visuals), 0,
		0, &visuals_image, 0);
	if (misc_image == nullptr)D3DX11CreateShaderResourceViewFromMemory(D3D.Device, misc, sizeof(misc), 0,
		0, &misc_image, 0);
	if (settings_image == nullptr)D3DX11CreateShaderResourceViewFromMemory(D3D.Device, settings, sizeof(settings), 0,
		0, &settings_image, 0);


	ImGui::SetNextWindowSize(ImVec2(100, 100));
	ImGui::SetNextWindowSize(ImVec2(680, 470));
	ImGui::Begin("жопа", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground);
	{
		const ImVec2 pos = ImGui::GetWindowPos();
		ImDrawList* draw = ImGui::GetWindowDrawList();

		style.ScrollbarSize = 3.f;
		style.ScrollbarRounding = 12.f;
		style.WindowBorderSize = 0.f;
		style.WindowPadding = ImVec2(0, 0);

		draw->AddRectFilled(pos + ImVec2(71, 56), pos + ImVec2(680, 470), ImColor(11, 11, 11, 255), 2.f, ImDrawFlags_RoundCornersBottomRight);

		draw->AddRectFilled(pos, pos + ImVec2(70, 470), ImColor(14, 14, 14, 255), 2.f, ImDrawFlags_RoundCornersLeft);
		draw->AddLine(pos + ImVec2(70, 0), pos + ImVec2(70, 470), ImColor(24, 24, 24, 255));

		draw->AddRectFilled(pos + ImVec2(71, 0), pos + ImVec2(680, 55), ImColor(14, 14, 14, 255), 2.f, ImDrawFlags_RoundCornersTopRight);
		draw->AddLine(pos + ImVec2(71, 55), pos + ImVec2(680, 55), ImColor(24, 24, 24, 255));

		draw->AddLine(pos + ImVec2(20, 183), pos + ImVec2(50, 183), ImColor(255, 255, 255, 15), 1.f);


		//->AddCircleFilled(pos + ImVec2(35, 433), 16.f, ImColor(0, 0, 0, 50), 60.f);
		//draw->AddCircle(pos + ImVec2(35, 433), 17.f, ImColor(255, 255, 255, 15), 60.f);

		draw->AddText(pos + ImVec2(580, 20 ), ImColor(255, 255, 255, 255), "xingark.xyz");

		ImGui::AddShadow(ImVec2(0, 0), ImVec2(680, 470), 20, 4, 7, 2, 20, ImColor(0, 0, 0));

		ImGui::SetCursorPos(ImVec2(10, 10));
		ImGui::BeginGroup();
		if (ImGui::selection("legit", legit_image, 0 == selection_count))
			selection_count = 0;
		if (ImGui::selection("visuals", visuals_image, 2 == selection_count))
			selection_count = 2;
		if (ImGui::selection("misc", misc_image, 3 == selection_count))
			selection_count = 3;
		if (ImGui::selection("settings", settings_image, 5 == selection_count))
			selection_count = 5;
		ImGui::EndGroup();
		ImGui::SetCursorPos(ImVec2(85, 15));
		ImGui::BeginGroup();
		if (selection_count == 2)
		{
			if (ImGui::group("3D", 0 == legit_group_count))
				legit_group_count = 0;
			ImGui::SameLine();
			if (ImGui::group("2D", 1 == legit_group_count))
				legit_group_count = 1;

			//3D visuals
			if (legit_group_count == 0)
			{
				ImGui::SetCursorPos(ImVec2(85, 70));
				ImGui::BeginChild("Visuals", ImVec2(282, 386));

				ImGui::Checkbox("Player ESP", &Data.Settings.playerESP);

				ImGui::EndChild();

				ImGui::SetCursorPos(ImVec2(382, 70));
				ImGui::BeginChild("Colors", ImVec2(282, 386));

				ImGui::ColorEdit4("Enemy Player Color", Data.Settings.enemyPlayerColor);
				ImGui::ColorEdit4("Sleeping Player Color", Data.Settings.sleepingPlayerColor);
				ImGui::ColorEdit4("Ally Player Color", Data.Settings.teamPlayerColor);
				ImGui::ColorEdit4("Dead Player Color", Data.Settings.deadPlayerColor);

				ImGui::EndChild();
			}
			//2D visuals
			else if (legit_group_count == 1)
			{

			}

		}
		//weapon hacks
		else if (selection_count == 0)
		{
			if (ImGui::group("Weapon Hacks", true)) {}

			ImGui::SetCursorPos(ImVec2(85, 70));
			ImGui::BeginChild("Aim Assistance", ImVec2(282, 386));

			ImGui::Checkbox("Aimbot", &Data.Settings.aimbot);
			ImGui::SliderFloat("Aim FOV", &Data.Settings.aimFOV, 0.f, 1000.f);
            KeyBind( &Data.Settings.aimKey, &Data.KeyboardInfo, {262,25});

            ImGui::Checkbox("Silent Aim", &Data.Settings.silentAim);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(382, 70));
			ImGui::BeginChild("Other Weapon Hacks", ImVec2(282, 386));

			ImGui::Checkbox("No Spread/Recoil", &Data.Settings.noSpread);

			ImGui::Checkbox("Rapid Fire", &Data.Settings.rapidFire);

			ImGui::EndChild();
		}
		else if (selection_count == 3)
		{
			if (ImGui::group("Misc", true)) {}

			ImGui::SetCursorPos(ImVec2(85, 70));
			ImGui::BeginChild("Gameplay Exploits", ImVec2(282, 386));

			ImGui::Checkbox("Auto Armor", &Data.Settings.autoArmor);
			ImGui::SliderFloat("Auto Armor Threshold", &Data.Settings.autoArmorPercent, 0, 1);

			ImGui::Checkbox("GCM Fly", &Data.Settings.Fly);
			KeyBind( &Data.Settings.FlyKey, &Data.KeyboardInfo, { 262,25 });

			ImGui::Checkbox("Infinite Orbit", &Data.Settings.infiniteOrbit);

            ImGui::Checkbox("Rocket Turret", &Data.Settings.rocketTurret);

            ImGui::Checkbox("Instant Turn", &Data.Settings.instantTurn);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(382, 70));
			ImGui::BeginChild("Other Exploits", ImVec2(282, 386));

            if (ImGui::Button("Instant Note", { 262,25 }))
            {
                Data.Settings.useNotes = true;
            }

			if (ImGui::Button("Change GamerTag", { 262,25 }))
			{
				//const wchar_t* nouns[] = { L"Raptor", L"Rex", L"Dilo", L"Parasaur", L"Moschops", L"Trike", L"Dodo", L"Argy", L"Managarmr", L"Iguanodon", L"Mesopithecus", L"Baryonyx", L"Troodon", L"Bloodstalker", L"Procoptodon", L"Mammoth", L"Megalodon", L"Sabertooth", L"Liopleurodon", L"Gasbags", L"Tapejara" };
				//const wchar_t* ads[] = { L"Dubious", L"Rhetorical", L"Maniacal", L"Superb", L"Devious", L"Tyrannical", L"Posh", L"Zesty", L"Alpha", L"Deranged", L"Forgivable", L"Industrial", L"Friendly", L"Snobby", L"Lethal", L"Stealthy", L"Shoddy", L"Immense", L"Syncronized", L"Chinese", L"Serial" };
				//wchar_t* wantedGT = NULL;
				//wcscat_s(wantedGT, 16, nouns[rand() % (int)(sizeof(nouns) / sizeof(nouns[0]))]);
				//wcscat_s(wantedGT, 16, ads[rand() % (int)(sizeof(ads) / sizeof(ads[0]))]);
				//std::string num = std::to_string(rand() % 100000);
				//wcscat_s(wantedGT, 16, std::wstring(num.begin(), num.end()).c_str());
				Data.Settings.wantedGT = (wchar_t*)L"123";
				wchar_t* gtAddy = (wchar_t*)FindDMAAddy(((uintptr_t)GetModuleHandleA("EraAdapter.dll") + 0x9f5e0), { 0x60, 0x0, 0x0, 0x28, 0x20, 0x128, 0x0 });
				wcscpy_s(gtAddy, 16, Data.Settings.wantedGT);
			}

			ImGui::ColorEdit4("Custom Character Color", Data.Settings.bodyColor);
			//ImGui::InputText("Character Name", Cache.Settings.charName, sizeof(Cache.Settings.charName));
            if (ImGui::Button("Create Custom Character", { 262,25 }))
            {
                Data.Settings.createChar = true;
            }



			ImGui::EndChild();
		}
		else if (selection_count == 5)
		{

		}

		ImGui::EndGroup();

	}
	ImGui::End();

}
