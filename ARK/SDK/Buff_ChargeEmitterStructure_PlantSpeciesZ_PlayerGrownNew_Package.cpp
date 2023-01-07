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
	 * 		Name   -> Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ShouldEnableTimers");
		
		ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_ShouldEnableTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tickServer != nullptr)
			*tickServer = params.tickServer;
		if (TickClient != nullptr)
			*TickClient = params.TickClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.CanEmitCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canEmit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::CanEmitCharge(bool* canEmit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.CanEmitCharge");
		
		ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_CanEmitCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canEmit != nullptr)
			*canEmit = params.canEmit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.AttachBuffToPlant
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::AttachBuffToPlant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.AttachBuffToPlant");
		
		ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_AttachBuffToPlant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.UserConstructionScript");
		
		ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew");
		
		ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C");
		return ptr;
	}

}


