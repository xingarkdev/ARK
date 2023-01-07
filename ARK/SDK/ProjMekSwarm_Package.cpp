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
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MekMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjMekSwarm_C::SetupMissileSpawnParticles(class USkeletalMeshComponent* MekMesh, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles");
		
		AProjMekSwarm_C_SetupMissileSpawnParticles_Params params {};
		params.MekMesh = MekMesh;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ThisIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HorizScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VertScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D AProjMekSwarm_C::PointOnGrid(int32_t ThisIndex, int32_t Width, int32_t Height, float HorizScale, float VertScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid");
		
		AProjMekSwarm_C_PointOnGrid_Params params {};
		params.ThisIndex = ThisIndex;
		params.Width = Width;
		params.Height = Height;
		params.HorizScale = HorizScale;
		params.VertScale = VertScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjMekSwarm_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick");
		
		AProjMekSwarm_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BoidIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBoid                                       BoidData                                                   (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     SpawnLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SpawnVelocity                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjMekSwarm_C::BPGetBoidSpawnLocationAndVelocity(int32_t BoidIndex, struct FBoid* BoidData, struct FVector* SpawnLocation, struct FVector* SpawnVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity");
		
		AProjMekSwarm_C_BPGetBoidSpawnLocationAndVelocity_Params params {};
		params.BoidIndex = BoidIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoidData != nullptr)
			*BoidData = params.BoidData;
		if (SpawnLocation != nullptr)
			*SpawnLocation = params.SpawnLocation;
		if (SpawnVelocity != nullptr)
			*SpawnVelocity = params.SpawnVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjMekSwarm_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript");
		
		AProjMekSwarm_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BoidIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystemComponent*                    BoidParticles                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AProjMekSwarm_C::BPOnBoidExplode(int32_t BoidIndex, class UParticleSystemComponent* BoidParticles, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode");
		
		AProjMekSwarm_C_BPOnBoidExplode_Params params {};
		params.BoidIndex = BoidIndex;
		params.BoidParticles = BoidParticles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjMekSwarm_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.OnExplode");
		
		AProjMekSwarm_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Comp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjMekSwarm_C::DisableMissleParticles(class UParticleSystemComponent* Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles");
		
		AProjMekSwarm_C_DisableMissleParticles_Params params {};
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjMekSwarm_C::ExecuteUbergraph_ProjMekSwarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm");
		
		AProjMekSwarm_C_ExecuteUbergraph_ProjMekSwarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjMekSwarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjMekSwarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjMekSwarm.ProjMekSwarm_C");
		return ptr;
	}

}


