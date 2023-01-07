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
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::OnRep_ParticleScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale");
		
		ATekArmor_EffectActor_C_OnRep_ParticleScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::OnRep_bParticlesOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn");
		
		ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::OnRep_bSoundOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn");
		
		ATekArmor_EffectActor_C_OnRep_bSoundOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::OnRep_TekSoundRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef");
		
		ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::OnRep_TekParticleTemplate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate");
		
		ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::SetSoundActive(bool Active, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive");
		
		ATekArmor_EffectActor_C_SetSoundActive_Params params {};
		params.Active = Active;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::SetParticleActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive");
		
		ATekArmor_EffectActor_C_SetParticleActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekArmor_EffectActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.UserConstructionScript");
		
		ATekArmor_EffectActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     particleScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::InitTekEffect(class UParticleSystem* particle, const struct FVector& particleScale, class USoundBase* Sound, class APrimalCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect");
		
		ATekArmor_EffectActor_C_InitTekEffect_Params params {};
		params.particle = particle;
		params.particleScale = particleScale;
		params.Sound = Sound;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::PlayerDied(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied");
		
		ATekArmor_EffectActor_C_PlayerDied_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     particleScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::SetTekFX(class UParticleSystem* particle, const struct FVector& particleScale, class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX");
		
		ATekArmor_EffectActor_C_SetTekFX_Params params {};
		params.particle = particle;
		params.particleScale = particleScale;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::Replicate_SetSoundState(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState");
		
		ATekArmor_EffectActor_C_Replicate_SetSoundState_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::Replicate_SetParticleState(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState");
		
		ATekArmor_EffectActor_C_Replicate_SetParticleState_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor");
		
		ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekArmor_EffectActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekArmor_EffectActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C");
		return ptr;
	}

}


