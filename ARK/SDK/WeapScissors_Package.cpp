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
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScissors_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ReceiveBeginPlay");
		
		AWeapScissors_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.IsValidHairCutTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PotentialTarget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::IsValidHairCutTarget(class AActor* PotentialTarget, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.IsValidHairCutTarget");
		
		AWeapScissors_C_IsValidHairCutTarget_Params params {};
		params.PotentialTarget = PotentialTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.OpenUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TheTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::OpenUI(class AShooterCharacter* TheTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.OpenUI");
		
		AWeapScissors_C_OpenUI_Params params {};
		params.TheTarget = TheTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.GiveHairLocks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumLocks                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::GiveHairLocks(int32_t NumLocks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.GiveHairLocks");
		
		AWeapScissors_C_GiveHairLocks_Params params {};
		params.NumLocks = NumLocks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent");
		
		AWeapScissors_C_BPAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FWeaponAnim AWeapScissors_C::BPGetSelectedMeleeAttackAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim");
		
		AWeapScissors_C_BPGetSelectedMeleeAttackAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScissors_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.UserConstructionScript");
		
		AWeapScissors_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.InitializeUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Hairstyle*                               TheUI                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::InitializeUI(class UUI_Hairstyle* TheUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.InitializeUI");
		
		AWeapScissors_C_InitializeUI_Params params {};
		params.TheUI = TheUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newHeadHairIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            newFacialHairIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewHeadHairPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewFacialHairPercent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeadHairDyeID1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeadHairDyeID2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FacialHairDyeID1                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FacialHairDyeID2                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::OnHairStyleAccepted__DelegateSignature_Event(int32_t newHeadHairIndex, int32_t newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int32_t HeadHairDyeID1, int32_t HeadHairDyeID2, int32_t FacialHairDyeID1, int32_t FacialHairDyeID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event");
		
		AWeapScissors_C_OnHairStyleAccepted__DelegateSignature_Event_Params params {};
		params.newHeadHairIndex = newHeadHairIndex;
		params.newFacialHairIndex = newFacialHairIndex;
		params.NewHeadHairPercent = NewHeadHairPercent;
		params.NewFacialHairPercent = NewFacialHairPercent;
		params.HeadHairDyeID1 = HeadHairDyeID1;
		params.HeadHairDyeID2 = HeadHairDyeID2;
		params.FacialHairDyeID1 = FacialHairDyeID1;
		params.FacialHairDyeID2 = FacialHairDyeID2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ClearFacialHairClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScissors_C::ClearFacialHairClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ClearFacialHairClicked");
		
		AWeapScissors_C_ClearFacialHairClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ClearHeadHairClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScissors_C::ClearHeadHairClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ClearHeadHairClicked");
		
		AWeapScissors_C_ClearHeadHairClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::ServerClearFacialHairColor(class AShooterCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor");
		
		AWeapScissors_C_ServerClearFacialHairColor_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::ServerClearHeadHairColor(class AShooterCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor");
		
		AWeapScissors_C_ServerClearHeadHairColor_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newHeadHairIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            newFacialHairIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewHeadHairPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewFacialHairPercent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeadHairDyeID1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeadHairDyeID2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FacialHairDyeID1                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FacialHairDyeID2                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::TheServerHairStyleAccepted(int32_t newHeadHairIndex, int32_t newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int32_t HeadHairDyeID1, int32_t HeadHairDyeID2, int32_t FacialHairDyeID1, int32_t FacialHairDyeID2, class AShooterCharacter* forTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted");
		
		AWeapScissors_C_TheServerHairStyleAccepted_Params params {};
		params.newHeadHairIndex = newHeadHairIndex;
		params.newFacialHairIndex = newFacialHairIndex;
		params.NewHeadHairPercent = NewHeadHairPercent;
		params.NewFacialHairPercent = NewFacialHairPercent;
		params.HeadHairDyeID1 = HeadHairDyeID1;
		params.HeadHairDyeID2 = HeadHairDyeID2;
		params.FacialHairDyeID1 = FacialHairDyeID1;
		params.FacialHairDyeID2 = FacialHairDyeID2;
		params.forTarget = forTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Haircuttable_C*           DoRequestOnDino                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::DoServerRequestDinoHaircut(class ADino_Character_BP_Haircuttable_C* DoRequestOnDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut");
		
		AWeapScissors_C_DoServerRequestDinoHaircut_Params params {};
		params.DoRequestOnDino = DoRequestOnDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScissors_C::ExecuteUbergraph_WeapScissors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors");
		
		AWeapScissors_C_ExecuteUbergraph_WeapScissors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapScissors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapScissors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapScissors.WeapScissors_C");
		return ptr;
	}

}


