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
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.SetDynamicMaterialProperties
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::SetDynamicMaterialProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.SetDynamicMaterialProperties");
		
		USKComponent_SkinAttachment_ChibiDino_C_SetDynamicMaterialProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::BPOnComponentDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed");
		
		USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::AttachSubMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes");
		
		USKComponent_SkinAttachment_ChibiDino_C_AttachSubMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::BPOnComponentTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick");
		
		USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::LevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp");
		
		USKComponent_SkinAttachment_ChibiDino_C_LevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                TheAnimMontage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  ExtraSound                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::PlayMontage(class UAnimMontage* TheAnimMontage, class USoundBase* ExtraSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage");
		
		USKComponent_SkinAttachment_ChibiDino_C_PlayMontage_Params params {};
		params.TheAnimMontage = TheAnimMontage;
		params.ExtraSound = ExtraSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  CharacterRef                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::UpdateMovement(class ACharacter* CharacterRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement");
		
		USKComponent_SkinAttachment_ChibiDino_C_UpdateMovement_Params params {};
		params.CharacterRef = CharacterRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EmoteIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::PlayEmote(int32_t EmoteIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote");
		
		USKComponent_SkinAttachment_ChibiDino_C_PlayEmote_Params params {};
		params.EmoteIndex = EmoteIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::CheckEmotes(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes");
		
		USKComponent_SkinAttachment_ChibiDino_C_CheckEmotes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::UpdateInterpolation(class ACharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation");
		
		USKComponent_SkinAttachment_ChibiDino_C_UpdateInterpolation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::AddedAsPrimalItemAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment");
		
		USKComponent_SkinAttachment_ChibiDino_C_AddedAsPrimalItemAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::CompTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick");
		
		USKComponent_SkinAttachment_ChibiDino_C_CompTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_ChibiDino_C::ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino");
		
		USKComponent_SkinAttachment_ChibiDino_C_ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USKComponent_SkinAttachment_ChibiDino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USKComponent_SkinAttachment_ChibiDino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C");
		return ptr;
	}

}


