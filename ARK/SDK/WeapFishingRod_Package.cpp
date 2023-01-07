/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ResolveSoftReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::ResolveSoftReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ResolveSoftReferences");
		
		AWeapFishingRod_C_ResolveSoftReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay");
		
		AWeapFishingRod_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldDraw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::DrawCrosshairWhileRidingDino(bool shouldDraw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino");
		
		AWeapFishingRod_C_DrawCrosshairWhileRidingDino_Params params {};
		params.shouldDraw = shouldDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.AllowFishing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::AllowFishing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.AllowFishing");
		
		AWeapFishingRod_C_AllowFishing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::IsOwnerInCaveVolume(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume");
		
		AWeapFishingRod_C_IsOwnerInCaveVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutQuality                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GiveFishLoot(class UClass* Class, class APrimalDinoCharacter* Outer, float* OutQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot");
		
		AWeapFishingRod_C_GiveFishLoot_Params params {};
		params.Class = Class;
		params.Outer = Outer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutQuality != nullptr)
			*OutQuality = params.OutQuality;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GetNumRemainingReelKeys(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys");
		
		AWeapFishingRod_C_GetNumRemainingReelKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnderWater                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DistanceToCover                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::CalculateDistanceToCover(bool UnderWater, float* DistanceToCover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover");
		
		AWeapFishingRod_C_CalculateDistanceToCover_Params params {};
		params.UnderWater = UnderWater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceToCover != nullptr)
			*DistanceToCover = params.DistanceToCover;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GetReeledFishTargetLocation(struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location");
		
		AWeapFishingRod_C_GetReeledFishTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::UpdateBaitMeshLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation");
		
		AWeapFishingRod_C_UpdateBaitMeshLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::PlayFishAttackAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation");
		
		AWeapFishingRod_C_PlayFishAttackAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.IsPointInWater
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::IsPointInWater(const struct FVector& Point, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.IsPointInWater");
		
		AWeapFishingRod_C_IsPointInWater_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::HandleReleasingFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish");
		
		AWeapFishingRod_C_HandleReleasingFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::OnInstigatorPlayDyingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent");
		
		AWeapFishingRod_C_OnInstigatorPlayDyingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent");
		
		AWeapFishingRod_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UAnimSequence* AWeapFishingRod_C::BPGetSeatingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation");
		
		AWeapFishingRod_C_BPGetSeatingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::UpdateToBeSnaredFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish");
		
		AWeapFishingRod_C_UpdateToBeSnaredFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::FinishSnaringFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish");
		
		AWeapFishingRod_C_FinishSnaringFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::OnRGKeySuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess");
		
		AWeapFishingRod_C_OnRGKeySuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.TugFishingCable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RemainingMoves                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::TugFishingCable(int32_t RemainingMoves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.TugFishingCable");
		
		AWeapFishingRod_C_TugFishingCable_Params params {};
		params.RemainingMoves = RemainingMoves;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ReeledFish                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GetReelingGameDuration(class APrimalDinoCharacter* ReeledFish, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration");
		
		AWeapFishingRod_C_GetReelingGameDuration_Params params {};
		params.ReeledFish = ReeledFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::OnStartPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation");
		
		AWeapFishingRod_C_OnStartPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent");
		
		AWeapFishingRod_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.CanSnareFish
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanSnare                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::CanSnareFish(class APrimalDinoCharacter* fish, bool* CanSnare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CanSnareFish");
		
		AWeapFishingRod_C_CanSnareFish_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSnare != nullptr)
			*CanSnare = params.CanSnare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumSets                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumSetKeys                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FKey>                                Keys                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapFishingRod_C::GenerateRandomKeys(int32_t NumSets, int32_t NumSetKeys, TArray<struct FKey>* Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys");
		
		AWeapFishingRod_C_GenerateRandomKeys_Params params {};
		params.NumSets = NumSets;
		params.NumSetKeys = NumSetKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keys != nullptr)
			*Keys = params.Keys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.FishSnared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::FishSnared(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.FishSnared");
		
		AWeapFishingRod_C_FishSnared_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::UpdateSurroundingPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey");
		
		AWeapFishingRod_C_UpdateSurroundingPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GetCableEndPoint(float DeltaTime, struct FVector* EndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint");
		
		AWeapFishingRod_C_GetCableEndPoint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndPoint != nullptr)
			*EndPoint = params.EndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartFishing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BaitTargetLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BaitWaterSurfaceLocation                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::StartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartFishing");
		
		AWeapFishingRod_C_StartFishing_Params params {};
		params.BaitTargetLocation = BaitTargetLocation;
		params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnFishReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::OnFishReleased(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishReleased");
		
		AWeapFishingRod_C_OnFishReleased_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnFishSnared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::OnFishSnared(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishSnared");
		
		AWeapFishingRod_C_OnFishSnared_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::ReleaseReeledFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish");
		
		AWeapFishingRod_C_ReleaseReeledFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.CaughtFish
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        CaughtFish                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::CaughtFish(class APrimalDinoCharacter* CaughtFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CaughtFish");
		
		AWeapFishingRod_C_CaughtFish_Params params {};
		params.CaughtFish = CaughtFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ReelingGameFinished(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished");
		
		AWeapFishingRod_C_ReelingGameFinished_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartReelingGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ReeledFish                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::StartReelingGame(class APrimalDinoCharacter* ReeledFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartReelingGame");
		
		AWeapFishingRod_C_StartReelingGame_Params params {};
		params.ReeledFish = ReeledFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.End Fishing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               releaseFish                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::EndFishing(bool releaseFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.End Fishing");
		
		AWeapFishingRod_C_EndFishing_Params params {};
		params.releaseFish = releaseFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retCanFish                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::CheckFishingConditions(bool* retCanFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions");
		
		AWeapFishingRod_C_CheckFishingConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retCanFish != nullptr)
			*retCanFish = params.retCanFish;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay");
		
		AWeapFishingRod_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Comp                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::GetCableAttachComponent(class USceneComponent** Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent");
		
		AWeapFishingRod_C_GetCableAttachComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Comp != nullptr)
			*Comp = params.Comp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::UpdateCableComponent(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent");
		
		AWeapFishingRod_C_UpdateCableComponent_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveTick");
		
		AWeapFishingRod_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapFishingRod_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire");
		
		AWeapFishingRod_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRod_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript");
		
		AWeapFishingRod_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               releaseFish                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::EndFishingEvent(bool releaseFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent");
		
		AWeapFishingRod_C_EndFishingEvent_Params params {};
		params.releaseFish = releaseFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ReeledInFish                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::StartReelingGameEvent(class APrimalDinoCharacter* ReeledInFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent");
		
		AWeapFishingRod_C_StartReelingGameEvent_Params params {};
		params.ReeledInFish = ReeledInFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ReelingGameFinishedEvent(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent");
		
		AWeapFishingRod_C_ReelingGameFinishedEvent_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::OnFishSnaredEvent(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent");
		
		AWeapFishingRod_C_OnFishSnaredEvent_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::OnFishReleasedEvent(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent");
		
		AWeapFishingRod_C_OnFishReleasedEvent_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TotalDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::BPAnimNotifyCustomState_Begin(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin");
		
		AWeapFishingRod_C_BPAnimNotifyCustomState_Begin_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BaitTargetLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BaitWaterSurfaceLocation                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ServerStartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing");
		
		AWeapFishingRod_C_ServerStartFishing_Params params {};
		params.BaitTargetLocation = BaitTargetLocation;
		params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               releaseFish                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ServerEndFishing(bool releaseFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing");
		
		AWeapFishingRod_C_ServerEndFishing_Params params {};
		params.releaseFish = releaseFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ServerTugCable
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RemainingMoves                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ServerTugCable(int32_t RemainingMoves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerTugCable");
		
		AWeapFishingRod_C_ServerTugCable_Params params {};
		params.RemainingMoves = RemainingMoves;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.TugCableEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RemainingMoves                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::TugCableEvent(int32_t RemainingMoves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.TugCableEvent");
		
		AWeapFishingRod_C_TugCableEvent_Params params {};
		params.RemainingMoves = RemainingMoves;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BaitTargetLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BaitWaterSurfaceLocation                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::StartFishingEventMulti(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti");
		
		AWeapFishingRod_C_StartFishingEventMulti_Params params {};
		params.BaitTargetLocation = BaitTargetLocation;
		params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.DrawRotation
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::DrawRotation(const struct FVector& NewParam, const struct FVector& NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.DrawRotation");
		
		AWeapFishingRod_C_DrawRotation_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PrimalDinoChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ServerStartDeathHarvest(class APrimalDinoCharacter* PrimalDinoChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest");
		
		AWeapFishingRod_C_ServerStartDeathHarvest_Params params {};
		params.PrimalDinoChar = PrimalDinoChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::ExecuteUbergraph_WeapFishingRod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod");
		
		AWeapFishingRod_C_ExecuteUbergraph_WeapFishingRod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CaughtFishWildScale                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      NetOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FishClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     FishReference                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRod_C::FishCaughtDispatcherSingle__DelegateSignature(float CaughtFishWildScale, class AActor* NetOwner, class UClass* FishClass, class UObject* FishReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature");
		
		AWeapFishingRod_C_FishCaughtDispatcherSingle__DelegateSignature_Params params {};
		params.CaughtFishWildScale = CaughtFishWildScale;
		params.NetOwner = NetOwner;
		params.FishClass = FishClass;
		params.FishReference = FishReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFishingRod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFishingRod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRod.WeapFishingRod_C");
		return ptr;
	}

}


