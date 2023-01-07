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
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWeaponAnim                                 Animation                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPlayBothFirstAndThirdPerson                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicateToInstigator                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPauseOnFinish1P                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(struct FWeaponAnim* Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify");
		
		AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params params {};
		params.InPlayRate = InPlayRate;
		params.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
		params.bReplicate = bReplicate;
		params.bReplicateToInstigator = bReplicateToInstigator;
		params.bPauseOnFinish1P = bPauseOnFinish1P;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animation != nullptr)
			*Animation = params.Animation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapClimbPick_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent");
		
		AWeapClimbPick_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              inFOV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AWeapClimbPick_C::BPModifyFOV(float inFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV");
		
		AWeapClimbPick_C_BPModifyFOV_Params params {};
		params.inFOV = inFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewSourcePoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapClimbPick_C::SetSourceLocation(class UParticleSystemComponent* ParticleSystem, const struct FVector& NewSourcePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation");
		
		AWeapClimbPick_C_SetSourceLocation_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.NewSourcePoint = NewSourcePoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             NewTemplate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapClimbPick_C::SetTemplateTo(class UParticleSystemComponent* ParticleSystem, class UParticleSystem* NewTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo");
		
		AWeapClimbPick_C_SetTemplateTo_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.NewTemplate = NewTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bClimbing                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AnchorPosition                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AnchorNormal                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanClimb                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanLand                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ClimbLocation                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ClimbNormal                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHudVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapClimbPick_C::BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, struct FVector* AnchorPosition, struct FVector* AnchorNormal, bool bCanClimb, bool bCanLand, struct FVector* ClimbLocation, struct FVector* ClimbNormal, bool bHudVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget");
		
		AWeapClimbPick_C_BPUpdateClimbTarget_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.bClimbing = bClimbing;
		params.bCanClimb = bCanClimb;
		params.bCanLand = bCanLand;
		params.bHudVisible = bHudVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnchorPosition != nullptr)
			*AnchorPosition = params.AnchorPosition;
		if (AnchorNormal != nullptr)
			*AnchorNormal = params.AnchorNormal;
		if (ClimbLocation != nullptr)
			*ClimbLocation = params.ClimbLocation;
		if (ClimbNormal != nullptr)
			*ClimbNormal = params.ClimbNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapClimbPick_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.UserConstructionScript");
		
		AWeapClimbPick_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.ExecuteUbergraph_WeapClimbPick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapClimbPick_C::ExecuteUbergraph_WeapClimbPick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.ExecuteUbergraph_WeapClimbPick");
		
		AWeapClimbPick_C_ExecuteUbergraph_WeapClimbPick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapClimbPick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapClimbPick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C");
		return ptr;
	}

}


