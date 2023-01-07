#include "Hack.h"

void InitCheat()
{
	CG::InitSdk();

	//other fonts are available, look at object dump
	Data.defaultFont = CG::UObject::FindObject<CG::UFont>("Font Roboto18.Roboto18");

	//Hook UShooterGameViewportClient::PostRender
	SetHook((void*)PatternScan((uintptr_t)GetModuleHandle(NULL), "E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC 40 56 41 54"), hkPostRender, reinterpret_cast<PVOID*>(Data.OriginalPostRender));

	//hook d3d
	D3D.PresentFunc = GetD3D11PresentFunction();
	SetHook(D3D.PresentFunc, hkPresentFunc, reinterpret_cast<void**>(&D3D.OriginalPresent));

	LoadConfig();

	while (true) {
		MainThread();

		Sleep(3);
	}

}

void MainThread()
{
	Data.DrawLineQueue.clear();
	Data.DrawTextQueue.clear();
	auto pWorld = (*CG::UWorld::GWorld);
	auto gameplayStatics = reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass());
	if (!pWorld || !gameplayStatics) return;
	if (!pWorld->OwningGameInstance) return;
	if (!pWorld->OwningGameInstance->LocalPlayers[0]) return;
	Data.pCtr = reinterpret_cast<CG::AShooterPlayerController*>(pWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
	if (Data.pCtr && !Data.pHud) { Data.pHud = Data.pCtr->GetHUD(); };
	if (!Data.pHud || !Data.pCtr || !Data.drawCanvas) return;

	//player loop
	gameplayStatics->STATIC_GetAllActorsOfClass(pWorld, CG::AShooterCharacter::StaticClass(), &Data.primalChars);
	for (int p = 0; p < Data.primalChars.Count(); ++p)
	{
		auto* player = reinterpret_cast<CG::AShooterCharacter*>(Data.primalChars[p]);
		if (Data.primalChars[p] == Data.primalChars[0] && p !=0 ) break;
		
		CG::FVector2D PlayerScreenLocation{};

		if (player->IsLocallyControlled()) Data.localPlayer = player;
		//w2s func crashes!!!!
		else if (Data.pCtr->ProjectWorldLocationToScreen(player->RootComponent->GetWorldLocation(), &PlayerScreenLocation))
		{
			if (Data.Settings.playerESP)
			{
				CG::FLinearColor renderColor = { 0, 0, 0, 0 };
				if (player->IsDead()) renderColor = Data.Settings.deadPlayerColor;
				else if (!player->BPIsConscious()) renderColor = Data.Settings.sleepingPlayerColor;
				else if (Data.localPlayer && player->IsPrimalCharFriendly(Data.localPlayer)) renderColor = Data.Settings.teamPlayerColor;
				else renderColor = Data.Settings.enemyPlayerColor;

				//name 
				Data.DrawTextQueue.push_back( DrawTextData(Data.defaultFont, player->GetDescriptiveName(), PlayerScreenLocation, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));

				//tribe
				//if (player->TribeName.IsValid()) 
				//	DrawTextWithShadow(canvas, Data.defaultFont, CG::FString(player->TribeName.wc_str()), {PlayerScreenLocation.X, PlayerScreenLocation.Y + 15}, renderColor, 1.0f, {0, 0, 0, 255}, {1, 1}, true, true, true, {0, 0, 0, 255});
				//else DrawTextWithShadow(canvas, Data.defaultFont, CG::FString(L"No Tribe"), { PlayerScreenLocation.X,PlayerScreenLocation.Y + 15 }, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor);

				//weight
				Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, CG::FString((std::to_wstring((int)player->ReplicatedWeight) + L" Weight"s).c_str()), { PlayerScreenLocation.X,PlayerScreenLocation.Y + 15 }, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));

				//hp bar
				//Data.DrawLineQueue.push_back(DrawLineData({ PlayerScreenLocation.X - 20, PlayerScreenLocation.Y + 30 }, { PlayerScreenLocation.X + 20, PlayerScreenLocation.Y + 30 }, 10.f, { 255, 0, 0, 255 }));
				//Data.DrawLineQueue.push_back(DrawLineData({ PlayerScreenLocation.X - 20, PlayerScreenLocation.Y + 30 }, { (PlayerScreenLocation.X - 20) + (player->GetHealthPercentage() * 40), PlayerScreenLocation.Y + 30 }, 10.f, { 0, 255, 0, 255 }));
			}
		}
	}
}

void hkPostRender(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas)
{
	//GetAsyncKeyState doesnt work in our main thread, but it does here
	if (GetAsyncKeyState(VK_DELETE) & 0x0001)
	{
		Data.bMenuOpen = !Data.bMenuOpen;
	}
	Data.drawCanvas = canvas;
	if (!Data.pHud) return;
	Data.pHud->Canvas = canvas;

	for (int i = 0; i < Data.DrawLineQueue.size(); i++)
	{
		canvas->K2_DrawLine(Data.DrawLineQueue[i].ScreenPositionA, Data.DrawLineQueue[i].ScreenPositionB, Data.DrawLineQueue[i].Thickness, Data.DrawLineQueue[i].RenderColor);
	}
	for (int i = 0; i < Data.DrawTextQueue.size(); i++)
	{
		canvas->K2_DrawText(Data.DrawTextQueue[i].RenderFont, Data.DrawTextQueue[i].RenderText, Data.DrawTextQueue[i].ScreenPosition, Data.DrawTextQueue[i].RenderColor, Data.DrawTextQueue[i].Kerning, Data.DrawTextQueue[i].ShadowColor, Data.DrawTextQueue[i].ShadowOffset, Data.DrawTextQueue[i].bCentreX, Data.DrawTextQueue[i].bCentreY, Data.DrawTextQueue[i].bOutlined, Data.DrawTextQueue[i].OutlineColor);
	}
	//dont put any logic here, will cause crashes
}

HRESULT hkPresentFunc(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags)
{
	if (!D3D.Device)
	{
		ID3D11Texture2D* Surface = nullptr;
		goto Init;
	Cleanup:
		if (Surface) Surface->Release();
		return D3D.PresentFunc(SwapChain, SyncInterval, Flags);
	Init:
		if (FAILED(SwapChain->GetBuffer(0, _uuidof(Surface), reinterpret_cast<PVOID*>(&Surface)))) { goto Cleanup; }
		if (FAILED(SwapChain->GetDevice(__uuidof(D3D.Device), reinterpret_cast<PVOID*>(&D3D.Device)))) goto Cleanup;
		if (FAILED(D3D.Device->CreateRenderTargetView(Surface, nullptr, &D3D.RenderTargetView))) goto Cleanup;
		Surface->Release();
		Surface = nullptr;
		D3D.Device->GetImmediateContext(&D3D.Ctx);
		IMGUI_CHECKVERSION();
		auto Window = FindWindowA("Windows.UI.Core.CoreWindow", "ARK: Survival Evolved");
		if (!Window)
		{
			HWND ParentWindow = FindWindowA("ApplicationFrameWindow", "ARK: Survival Evolved");
			HWND ChildWindow = FindWindowExA(ParentWindow, NULL, "Windows.UI.Core.CoreWindow", "ARK: Survival Evolved");
			D3D.GameWindow = ChildWindow;
		}
		else { D3D.GameWindow = Window; }
		ImGui::CreateContext();
		{
			ImGuiIO& io = ImGui::GetIO();
			ImFontConfig config;
			config.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
			config.RasterizerMultiply = 1.125f;
			io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", 16.0f, &config);
			TCHAR name[UNLEN + 1];
			DWORD size = UNLEN + 1;
			GetUserName((TCHAR*)name, &size);
			char usernameChar[500];
			size_t nNumCharConverted;
			wcstombs_s(&nNumCharConverted, usernameChar, 500, name, 500);
			Data.dllPath = "C:\\Users\\" + std::string(usernameChar) + "\\AppData\\Local\\Packages\\StudioWildcard.4558480580BB9_1w2mm55455e38\\TempState\\config";
		}
		if (!ImGui_ImplWin32_Init(D3D.GameWindow)) goto Cleanup;
		if (!ImGui_ImplDX11_Init(D3D.Device, D3D.Ctx)) goto Cleanup;
		if (!ImGui_ImplDX11_CreateDeviceObjects()) goto Cleanup;
	}
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (Data.bMenuOpen)
	{
		HookInput();
		RenderMenu();
	}
	else
	{
		RemoveInput();
	}

	D3D.Ctx->OMSetRenderTargets(1, &D3D.RenderTargetView, nullptr);
	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return D3D.OriginalPresent(SwapChain, SyncInterval, Flags);
}


uintptr_t PatternScan(uintptr_t moduleAdress, const char* signature)
{
	static auto patternToByte = [](const char* pattern)
	{
		auto       bytes = std::vector<int>{};
		const auto start = const_cast<char*>(pattern);
		const auto end = const_cast<char*>(pattern) + strlen(pattern);

		for (auto current = start; current < end; ++current)
		{
			if (*current == '?')
			{
				++current;
				if (*current == '?')
					++current;
				bytes.push_back(-1);
			}
			else { bytes.push_back(strtoul(current, &current, 16)); }
		}
		return bytes;
	};
	const auto dosHeader = (PIMAGE_DOS_HEADER)moduleAdress;
	const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)moduleAdress + dosHeader->e_lfanew);
	const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
	auto       patternBytes = patternToByte(signature);
	const auto scanBytes = reinterpret_cast<std::uint8_t*>(moduleAdress);
	const auto s = patternBytes.size();
	const auto d = patternBytes.data();
	for (auto i = 0ul; i < sizeOfImage - s; ++i)
	{
		bool found = true;
		for (auto j = 0ul; j < s; ++j)
		{
			if (scanBytes[i + j] != d[j] && d[j] != -1)
			{
				found = false;
				break;
			}
		}
		if (found) { return reinterpret_cast<uintptr_t>(&scanBytes[i]); }
	}
	return NULL;
}

uintptr_t FindDMAAddy(uintptr_t ptr, std::vector<unsigned int> offsets) {
	uintptr_t addr = ptr;
	for (unsigned int i = 0; i < offsets.size(); ++i)
	{
		addr = *(uintptr_t*)addr;
		addr += offsets[i];
	}
	return addr;
}