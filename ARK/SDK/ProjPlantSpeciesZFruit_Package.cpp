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
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::IsActorValidForPVEorIsPVP(class AActor* HitCharacter, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP");
		
		AProjPlantSpeciesZFruit_C_IsActorValidForPVEorIsPVP_Params params {};
		params.HitCharacter = HitCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShielded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::IsShielded(class AActor* Actor, bool* IsShielded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded");
		
		AProjPlantSpeciesZFruit_C_IsShielded_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsShielded != nullptr)
			*IsShielded = params.IsShielded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsWearingProtection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::IsWearingProtection(class AActor* Actor, bool* IsWearingProtection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection");
		
		AProjPlantSpeciesZFruit_C_IsWearingProtection_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWearingProtection != nullptr)
			*IsWearingProtection = params.IsWearingProtection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IndexOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StructureInBetween                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::IsNearbyStructure(int32_t index, float IndexOffset, bool* StructureInBetween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure");
		
		AProjPlantSpeciesZFruit_C_IsNearbyStructure_Params params {};
		params.index = index;
		params.IndexOffset = IndexOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StructureInBetween != nullptr)
			*StructureInBetween = params.StructureInBetween;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     v1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     v2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::GetAngleBetween(const struct FVector& v1, const struct FVector& v2, float* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween");
		
		AProjPlantSpeciesZFruit_C_GetAngleBetween_Params params {};
		params.v1 = v1;
		params.v2 = v2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPlantSpeciesZFruit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript");
		
		AProjPlantSpeciesZFruit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjPlantSpeciesZFruit_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode");
		
		AProjPlantSpeciesZFruit_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ImpactVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced");
		
		AProjPlantSpeciesZFruit_C_BPProjectileBounced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactResult != nullptr)
			*ImpactResult = params.ImpactResult;
		if (ImpactVelocity != nullptr)
			*ImpactVelocity = params.ImpactVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPlantSpeciesZFruit_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay");
		
		AProjPlantSpeciesZFruit_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPlantSpeciesZFruit_C::ROC_DisableProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile");
		
		AProjPlantSpeciesZFruit_C_ROC_DisableProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjPlantSpeciesZFruit_C::SpawnCharge_Emitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter");
		
		AProjPlantSpeciesZFruit_C_SpawnCharge_Emitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPlantSpeciesZFruit_C::ExecuteUbergraph_ProjPlantSpeciesZFruit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit");
		
		AProjPlantSpeciesZFruit_C_ExecuteUbergraph_ProjPlantSpeciesZFruit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjPlantSpeciesZFruit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjPlantSpeciesZFruit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C");
		return ptr;
	}

}


