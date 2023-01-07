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
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::ShouldDoDamageTo(class AActor* Actor, bool* AllowDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo");
		
		UDinoAttackState_MekSwordSwing_C_ShouldDoDamageTo_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowDamage != nullptr)
			*AllowDamage = params.AllowDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::BPOnAttackEnd(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd");
		
		UDinoAttackState_MekSwordSwing_C_BPOnAttackEnd_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::BPOnAnimNotifyCustomEvent(const class FName& CustomEventName, class UAnimSequenceBase* Animation, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent");
		
		UDinoAttackState_MekSwordSwing_C_BPOnAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Animation = Animation;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_MekSwordSwing_C::DoSwordDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage");
		
		UDinoAttackState_MekSwordSwing_C_DoSwordDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  WorldTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		float                                              CapsuleRadius                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CapsuleHalfHeight                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::GetSwordCapsule(struct FTransform* WorldTransform, float* CapsuleRadius, float* CapsuleHalfHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule");
		
		UDinoAttackState_MekSwordSwing_C_GetSwordCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldTransform != nullptr)
			*WorldTransform = params.WorldTransform;
		if (CapsuleRadius != nullptr)
			*CapsuleRadius = params.CapsuleRadius;
		if (CapsuleHalfHeight != nullptr)
			*CapsuleHalfHeight = params.CapsuleHalfHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::GetSwordDamagePoint(struct FVector* Loc, struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint");
		
		UDinoAttackState_MekSwordSwing_C_GetSwordDamagePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart");
		
		UDinoAttackState_MekSwordSwing_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_MekSwordSwing_C::ExecuteUbergraph_DinoAttackState_MekSwordSwing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing");
		
		UDinoAttackState_MekSwordSwing_C_ExecuteUbergraph_DinoAttackState_MekSwordSwing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_MekSwordSwing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_MekSwordSwing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C");
		return ptr;
	}

}


