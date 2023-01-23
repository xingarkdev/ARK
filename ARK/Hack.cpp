#include "Hack.h"
#include <random>

void InitCheat()
{
	CG::InitSdk();

	//other fonts are available, look at object dump
	Data.defaultFont = CG::UObject::FindObject<CG::UFont>("Font Roboto18.Roboto18");

	//Hook UShooterGameViewportClient::PostRender
	SetHook((void*)PatternScan((uintptr_t)GetModuleHandle(NULL), "E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC 40 56 41 54"), hkPostRender, reinterpret_cast<PVOID*>(Data.OriginalPostRender));

	//Hook AdjAim
	SetHook((void*)PatternScan((uintptr_t)GetModuleHandle(NULL), "48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 4C 89 74 24 ? 55 48 8B EC 48 83 EC 60 48 8B B9 ? ? ? ?"), hkAdjustedAim, reinterpret_cast<PVOID*>(&Data.OriginalhkAdjustedAim));

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
	//Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"123", {500,500}, {1,0,0,1}, 1.0f, Data.Settings.shadowColor, {1, 1}, true, true, true, Data.Settings.shadowColor));
	auto pWorld = (*CG::UWorld::GWorld);
	auto gameplayStatics = reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass());
	Data.mathLib = reinterpret_cast<CG::UKismetMathLibrary*>(CG::UKismetMathLibrary::StaticClass());
	if (!pWorld || !gameplayStatics) return;
	if (!pWorld->OwningGameInstance) return;
	if (!pWorld->OwningGameInstance->LocalPlayers[0]) return;
	Data.pCtr = reinterpret_cast<CG::AShooterPlayerController*>(pWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
	if (Data.pCtr && !Data.pHud) { Data.pHud = Data.pCtr->GetHUD(); };
	if (!Data.pHud || !Data.pCtr || !Data.drawCanvas) return;
	//Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, str1, {500, 500}, {1, 0, 0, 1}, 1.0f, Data.Settings.shadowColor, {1, 1}, true, true, true, Data.Settings.shadowColor));
	//Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"123", { 500,500 }, { 1,0,0,1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));

	try {
		do {
			if (Data.Settings.panicMode) return;
			//HUD info
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_real_distribution<> dist(0, 1);
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * .95,Data.drawCanvas->SizeY * .02 }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			
			//party time
			/*Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", {Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen)}, {(float)dist(gen),(float)dist(gen),(float)dist(gen),1}, 1.0f, Data.Settings.shadowColor, {1, 1}, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, L"xingark.xyz", { Data.drawCanvas->SizeX * (float)dist(gen),Data.drawCanvas->SizeY * (float)dist(gen) }, { (float)dist(gen),(float)dist(gen),(float)dist(gen),1 }, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));
			*/


			//player loop
			int recordDistance = 0;
			gameplayStatics->STATIC_GetAllActorsOfClass(pWorld, CG::AShooterCharacter::StaticClass(), &Data.primalChars);
			Data.AimbotTarget = nullptr;
			Data.localPlayer = nullptr;
			for (int p = 0; p < Data.primalChars.Count(); ++p)
			{
				auto* player = reinterpret_cast<CG::AShooterCharacter*>(Data.primalChars[p]);

				CG::FVector2D PlayerScreenLocation{};

				if (player->IsLocallyControlled()) Data.localPlayer = player;
				else if (Data.pCtr->PlayerCameraManager && W2S(player->RootComponent->GetWorldLocation(), PlayerScreenLocation))
				//else if (Data.pCtr->ProjectWorldLocationToScreen(player->RootComponent->GetWorldLocation(), &PlayerScreenLocation))
				{
					if (Data.Settings.playerESP)
					{
						CG::FLinearColor renderColor = { 0, 0, 0, 0 };
						if (player->IsDead()) renderColor = Data.Settings.deadPlayerColor;
						else if (!player->BPIsConscious()) renderColor = Data.Settings.sleepingPlayerColor;
						else if (Data.localPlayer && player->IsPrimalCharFriendly(Data.localPlayer)) renderColor = Data.Settings.teamPlayerColor;
						else renderColor = Data.Settings.enemyPlayerColor;

						//name 
						Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, player->GetDescriptiveName(), PlayerScreenLocation, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));

						//tribe
						//if (player->TribeName.IsValid()) 
						//	DrawTextWithShadow(canvas, Data.defaultFont, CG::FString(player->TribeName.wc_str()), {PlayerScreenLocation.X, PlayerScreenLocation.Y + 15}, renderColor, 1.0f, {0, 0, 0, 255}, {1, 1}, true, true, true, {0, 0, 0, 255});
						//else DrawTextWithShadow(canvas, Data.defaultFont, CG::FString(L"No Tribe"), { PlayerScreenLocation.X,PlayerScreenLocation.Y + 15 }, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor);

						//weight
						wchar_t str1[32];
						wchar_t* str = (wchar_t*)L" Weight";
						_itow((int)player->ReplicatedWeight, str1, 10);
						wcscat(str1, str);
						Data.DrawTextQueue.push_back(DrawTextData(Data.defaultFont, str1, { PlayerScreenLocation.X,PlayerScreenLocation.Y + 20 }, renderColor, 1.0f, Data.Settings.shadowColor, { 1, 1 }, true, true, true, Data.Settings.shadowColor));

						//hp bar
						Data.DrawLineQueue.push_back(DrawLineData({ PlayerScreenLocation.X - 20, PlayerScreenLocation.Y + 40 }, { PlayerScreenLocation.X + 20, PlayerScreenLocation.Y + 40 }, 10.f, { 255, 0, 0, 255 }));
						Data.DrawLineQueue.push_back(DrawLineData({ PlayerScreenLocation.X - 20, PlayerScreenLocation.Y + 40 }, { (PlayerScreenLocation.X - 20) + (player->GetHealthPercentage() * 40), PlayerScreenLocation.Y + 40 }, 10.f, { 0, 255, 0, 255 }));
					}

					//aimbot
					if (!player->IsDead() && player->BPIsConscious() /* && Data.localPlayer && !player->IsPrimalCharFriendly(Data.localPlayer) */ )
					{
						int distance = calcDistance(Data.drawCanvas->SizeX / 2, Data.drawCanvas->SizeY / 2, PlayerScreenLocation.X, PlayerScreenLocation.Y);
						if (distance < (int)Data.Settings.aimFOV)
						{
							Data.DrawLineQueue.push_back(DrawLineData({ (float)Data.drawCanvas->SizeX / 2, (float)Data.drawCanvas->SizeY / 2 }, PlayerScreenLocation, 1.0f, Data.Settings.enemyPlayerColor));
							if (!recordDistance) recordDistance = distance, Data.AimbotTarget = player;
							else if (distance < recordDistance) recordDistance = distance, Data.AimbotTarget = player;
						}
					}
				}

				//enemy in range warning
				//if (Data.localPlayer && !player->IsDead() && player->BPIsConscious() && !player->IsPrimalCharFriendly(Data.localPlayer)) Data.totalEnemies++;
			}
			//if (Cache.totalEnemies == 0){}
			//else if (Cache.totalEnemies == 1) DrawTextWithShadow(canvas, Cache.defaultFont, CG::FString((L"["s + std::to_wstring(Cache.totalEnemies) + L" Enemy in range]"s).c_str()), { 960, 200 }, Cache.Settings.enemyPlayerColor, 1.0f, Cache.Settings.shadowColor, { 1, 1 }, true, true, true, Cache.Settings.shadowColor);
			//else DrawTextWithShadow(canvas, Cache.defaultFont, CG::FString((L"["s + std::to_wstring(Cache.totalEnemies) + L" Enemies in range]"s).c_str()), { 960, 200 }, Cache.Settings.enemyPlayerColor, 1.0f, Cache.Settings.shadowColor, { 1, 1 }, true, true, true, Cache.Settings.shadowColor);
			//Cache.totalEnemies = 0;

			//aimbot
			try {
				if (Data.KeyboardInfo.at(Data.Settings.aimKey).KeyState && Data.AimbotTarget && Data.Settings.aimbot)
				{
					CG::FVector BoneLocation;
					BoneLocation = Data.AimbotTarget->Mesh->GetSocketLocation(Data.AimbotTarget->Mesh->GetBoneName(8));
					Data.pCtr->ControlRotation = Data.mathLib->STATIC_FindLookAtRotation(Data.pCtr->PlayerCameraManager->GetCameraLocation(), BoneLocation);
					//Cache.pCtr->ClientIgnoreLookInput(true);
				}
				else
				{
					//Cache.pCtr->ClientIgnoreLookInput(false);
				}
			}
			catch (std::out_of_range e) {
			}


			//rocket hack
			try {

				if (Data.KeyboardInfo.at(0x2).KeyState && Data.Settings.rocketTurret && Data.localPlayer && Data.localPlayer->bIsControllingBallista)
				{
					CG::FVector_NetQuantizeNormal p;
					p.X = cos(Data.pCtr->ControlRotation.Yaw * M_PI / 180);
					p.Y = sin(Data.pCtr->ControlRotation.Yaw * M_PI / 180);
					p.Z = sin(Data.pCtr->ControlRotation.Pitch * M_PI / 180);
					CG::FVector o = Data.localPlayer->Mesh->GetWorldLocation();
					o.Y = o.Y + (300 * p.Y);
					o.Z = o.Z + 200;
					o.X = o.X + (300 * p.X);
					for (int i = 0; i < 143; ++i) Data.localPlayer->ServerFireBallistaProjectile(o, p);
				}
				else if (Data.KeyboardInfo.at(0x1).KeyState && Data.Settings.rocketTurret && Data.localPlayer && Data.localPlayer->bIsControllingBallista)
				{
					CG::FVector_NetQuantizeNormal p;
					p.X = cos(Data.pCtr->ControlRotation.Yaw * M_PI / 180);
					p.Y = sin(Data.pCtr->ControlRotation.Yaw * M_PI / 180);
					p.Z = sin(Data.pCtr->ControlRotation.Pitch * M_PI / 180);
					CG::FVector o = Data.localPlayer->Mesh->GetWorldLocation();
					o.Y = o.Y + (300 * p.Y);
					o.Z = o.Z + 200;
					o.X = o.X + (300 * p.X);
					Data.localPlayer->ServerFireBallistaProjectile(o, p);
				}
			}
			catch (std::out_of_range e) {
			}

			//no recoil/spread
			if (Data.localPlayer && Data.localPlayer->CurrentWeapon && Data.Settings.noSpread)
			{
				Data.localPlayer->CurrentWeapon->AimDriftYawAngle = 0;
				Data.localPlayer->CurrentWeapon->AimDriftPitchAngle = 0;
				Data.localPlayer->CurrentWeapon->TargetingDelayTime = 0;
				Data.localPlayer->CurrentWeapon->GlobalFireCameraShakeScale = 0;
				Data.localPlayer->CurrentWeapon->ReloadCameraShakeSpeedScale = 0;
				Data.localPlayer->CurrentWeapon->CurrentFiringSpread = 0;
			}

			//note hack
			if (Data.Settings.useNotes)
			{
				auto controller = reinterpret_cast<CG::AShooterPlayerController*>(Data.pCtr);
				for (int i = 0; i < 10000; ++i)
				{
					controller->UnlockExplorerNote(i, false);
				}
				Data.Settings.useNotes = false;
			}

			//custom char
			if (Data.Settings.createChar)
			{
				CG::FPrimalPlayerCharacterConfigStructReplicated data;
				data.bIsFemale = true;
				data.BodyColors[0] = Data.Settings.bodyColor;
				data.BodyColors[1] = Data.Settings.bodyColor;
				data.BodyColors[2] = Data.Settings.bodyColor;
				data.BodyColors[3] = Data.Settings.bodyColor;
				for (int i = 0; i < 22; i++)
					data.RawBoneModifiers[i] = -1.0f;

				data.PlayerCharacterName = Data.Settings.charName;
				data.PlayerSpawnRegionIndex = 0;
				reinterpret_cast<CG::AShooterPlayerState*>(pWorld->GameState->PlayerArray[0])->ServerRequestCreateNewPlayer(data);
				Data.Settings.createChar = false;
			}

			//auto armor
			/*if (Data.localPlayer && Data.Settings.autoArmor && Data.pCtr)
			{
				static CG::UPrimalInventoryComponent* Inventory = Data.pCtr->GetPawnInventoryComponent();
				if (!Inventory) Inventory = Data.pCtr->GetPawnInventoryComponent();
				else
				{
					CG::UPrimalItem* bestHat = nullptr;
					CG::UPrimalItem* bestShirt = nullptr;
					CG::UPrimalItem* bestGloves = nullptr;
					CG::UPrimalItem* bestPants = nullptr;
					CG::UPrimalItem* bestBoots = nullptr;
					bool hasHat = false;
					bool hasShirt = false;
					bool hasGloves = false;
					bool hasPants = false;
					bool hasBoots = false;
					for (int i = 0; i < Inventory->InventoryItems.Count(); i++)
					{
						auto Item = Inventory->InventoryItems[i];
						if (Item->IsBroken()) continue;
						if (Item->bIsEngram) continue;
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Hat)
						{
							if (!bestHat) bestHat = Item;
							else if (bestHat->ItemDurability <= Item->ItemDurability) bestHat = Item;
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Shirt)
						{
							if (!bestShirt) bestShirt = Item;
							else if (bestShirt->ItemDurability <= Item->ItemDurability) bestShirt = Item;
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Gloves)
						{
							if (!bestGloves) bestGloves = Item;
							else if (bestGloves->ItemDurability <= Item->ItemDurability) bestGloves = Item;
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Pants)
						{
							if (!bestPants) bestPants = Item;
							else if (bestPants->ItemDurability <= Item->ItemDurability) bestPants = Item;
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Boots)
						{
							if (!bestBoots) bestBoots = Item;
							else if (bestBoots->ItemDurability <= Item->ItemDurability) bestBoots = Item;
						}
					}
					for (int i = 0; i < Inventory->EquippedItems.Count(); i++)
					{
						auto Item = Inventory->EquippedItems[i];
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Hat)
						{
							hasHat = true;
							if (Item->GetDurabilityPercentage() < Data.Settings.autoArmorPercent) if (bestHat && bestHat->GetDurabilityPercentage() >= Data.Settings.autoArmorPercent) Data.pCtr->ServerEquipPawnItem(bestHat->ItemId);
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Shirt)
						{
							hasShirt = true;
							if (Item->GetDurabilityPercentage() < Data.Settings.autoArmorPercent) if (bestShirt && bestShirt->GetDurabilityPercentage() >= Data.Settings.autoArmorPercent) Data.pCtr->ServerEquipPawnItem(bestShirt->ItemId);
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Gloves)
						{
							hasGloves = true;
							if (Item->GetDurabilityPercentage() < Data.Settings.autoArmorPercent) if (bestGloves && bestGloves->GetDurabilityPercentage() >= Data.Settings.autoArmorPercent) Data.pCtr->ServerEquipPawnItem(bestGloves->ItemId);
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Pants)
						{
							hasPants = true;
							if (Item->GetDurabilityPercentage() < Data.Settings.autoArmorPercent) if (bestPants && bestPants->GetDurabilityPercentage() >= Data.Settings.autoArmorPercent) Data.pCtr->ServerEquipPawnItem(bestPants->ItemId);
						}
						if (Item->MyEquipmentType == CG::EPrimalEquipmentType::Boots)
						{
							hasBoots = true;
							if (Item->GetDurabilityPercentage() < Data.Settings.autoArmorPercent) if (bestBoots && bestBoots->GetDurabilityPercentage() >= Data.Settings.autoArmorPercent) Data.pCtr->ServerEquipPawnItem(bestBoots->ItemId);
						}
					}
					if (!hasHat && bestHat) Data.pCtr->ServerEquipPawnItem(bestHat->ItemId);
					if (!hasShirt && bestShirt) Data.pCtr->ServerEquipPawnItem(bestShirt->ItemId);
					if (!hasGloves && bestGloves) Data.pCtr->ServerEquipPawnItem(bestGloves->ItemId);
					if (!hasPants && bestPants) Data.pCtr->ServerEquipPawnItem(bestPants->ItemId);
					if (!hasBoots && bestBoots) Data.pCtr->ServerEquipPawnItem(bestBoots->ItemId);
				}
			}*/

			//infinite orbit
			if (Data.Settings.infiniteOrbit && Data.localPlayer)
			{
				Data.localPlayer->OrbitCamMaxZoomLevel = 5000;
			}

			////rapid fire
			//if (Data.Settings.rapidFire && Data.localPlayer)
			//{
			//	auto Zoom = Data.localPlayer->CurrentWeapon;
			//	if (Zoom) 
			//	{
			//		Zoom->WeaponConfig.TimeBetweenShots = 0.01;
			//		if (Zoom->LastFireTime == 0) Zoom->LastFireTime = Zoom->LastFireTime + Zoom->LastNotifyShotTime - Zoom->WeaponConfig.TimeBetweenShots;
			//	}
			//}

			//instant turn
			if (Data.Settings.instantTurn && Data.localPlayer) {
				auto RiddenDino = Data.localPlayer->GetBasedOnDino();
				if (RiddenDino)
				{
					RiddenDino->RiderMovementSpeedScalingRotationRatePowerMultiplier = 10000;
					RiddenDino->WalkingRotationRateModifier = 10000;
					RiddenDino->RiderFlyingRotationRateModifier = 10000;
					RiddenDino->bFlyerDinoAllowBackwardsFlight = true;
					RiddenDino->bFlyerDinoAllowStrafing = true;
					RiddenDino->bFlyingOrWaterDinoPreventBackwardsRun = true;
				}
			}

			//gcm fly
			/*static bool runFly = true;
			try {
				if (Data.KeyboardInfo.at(Data.Settings.FlyKey).KeyState & 1) Data.Settings.Fly = !Data.Settings.Fly, runFly = true;
			}
			catch (std::out_of_range e) {
			}
			static CG::ABuff_TekArmor_Gloves_C* gloves = nullptr;
			if (Data.pCtr->GetPlayerCharacter()) gloves = (CG::ABuff_TekArmor_Gloves_C*)Data.pCtr->GetPlayerCharacter()->GetBuff(CG::ABuff_TekArmor_Gloves_C::StaticClass());
			if (gloves && runFly)
			{
				if (Data.Settings.Fly)
				{
					gloves->Server_SetPunchChargeState((CG::E_TekGlovePunchState)0);
					gloves->Server_SetPunchChargeState((CG::E_TekGlovePunchState)3);
					gloves->Server_SetPunchChargeState((CG::E_TekGlovePunchState)5);
				}
				else gloves->Server_SetPunchChargeState((CG::E_TekGlovePunchState)0);
				runFly = false;
			}*/
		} while (false);
	}
	catch (std::exception e)
	{

	}
}

CG::FVector* hkAdjustedAim(CG::AShooterWeapon* Weapon, CG::FVector* Result) {
	if (Data.AimbotTarget && Data.Settings.silentAim)
	{
		CG::FVector BoneLocation;
		BoneLocation = Data.AimbotTarget->Mesh->GetSocketLocation(Data.AimbotTarget->Mesh->GetBoneName(8));
		CG::FVector AimDirection = Data.mathLib->STATIC_GetDirectionVector(Data.pCtr->PlayerCameraManager->GetCameraLocation(), BoneLocation);
		*Result = AimDirection;
		if (!Result->X || !Result->Y || !Result->Z) return Data.OriginalhkAdjustedAim(Weapon, Result);
		return Result;
	}
	return Data.OriginalhkAdjustedAim(Weapon, Result);
}

void hkPostRender(CG::UShooterGameViewportClient* viewport, CG::UCanvas* canvas)
{
	try {
	//GetAsyncKeyState doesnt work in our main thread, but it does here
	if (GetAsyncKeyState(VK_DELETE) & 0x0001)
	{
		Data.bMenuOpen = !Data.bMenuOpen;
	}
	//input stuff
	Data.KeyboardInfo.clear();
	for (auto& Key : KeyCodes)
	{
		if (Key != VK_DELETE)
		{
			KeyInfo keyInfo;
			keyInfo.KeyCode = Key;
			keyInfo.KeyState = GetAsyncKeyState(Key);
			Data.KeyboardInfo.push_back(keyInfo);
		}
	}
	Data.drawCanvas = canvas;
	if (!Data.pHud) return;
	Data.pHud->Canvas = canvas;

	for (int i = 0; i < Data.DrawLineQueue.size(); i++)
	{
		canvas->K2_DrawLine(Data.DrawLineQueue.at(i).ScreenPositionA, Data.DrawLineQueue.at(i).ScreenPositionB, Data.DrawLineQueue.at(i).Thickness, Data.DrawLineQueue.at(i).RenderColor);
	}
	for (int i = 0; i < Data.DrawTextQueue.size(); i++)
	{
		canvas->K2_DrawText(Data.DrawTextQueue.at(i).RenderFont, Data.DrawTextQueue.at(i).RenderText, Data.DrawTextQueue.at(i).ScreenPosition, Data.DrawTextQueue.at(i).RenderColor, Data.DrawTextQueue.at(i).Kerning, Data.DrawTextQueue.at(i).ShadowColor, Data.DrawTextQueue.at(i).ShadowOffset, Data.DrawTextQueue.at(i).bCentreX, Data.DrawTextQueue.at(i).bCentreY, Data.DrawTextQueue.at(i).bOutlined, Data.DrawTextQueue.at(i).OutlineColor);
	}
	//dont put any logic here, will cause crashes
	}
	catch (std::exception e) {
	}
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
		RenderMenu(D3D.Device);
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