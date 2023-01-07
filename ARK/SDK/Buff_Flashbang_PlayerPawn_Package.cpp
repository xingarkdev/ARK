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
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_Flashbang_PlayerPawn_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity");
		
		ABuff_Flashbang_PlayerPawn_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator");
		
		ABuff_Flashbang_PlayerPawn_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::BPPreSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator");
		
		ABuff_Flashbang_PlayerPawn_C_BPPreSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldFade                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::ShouldStartFading(bool* ShouldFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading");
		
		ABuff_Flashbang_PlayerPawn_C_ShouldStartFading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFade != nullptr)
			*ShouldFade = params.ShouldFade;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CheckIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IndexOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StructureInBetween                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::IsNearbyStructure(int32_t CheckIndex, float IndexOffset, bool* StructureInBetween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure");
		
		ABuff_Flashbang_PlayerPawn_C_IsNearbyStructure_Params params {};
		params.CheckIndex = CheckIndex;
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
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Exposure                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ViewingAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Average                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::CalculateIntensityAverage(float Exposure, float Distance, float ViewingAngle, float* Average)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage");
		
		ABuff_Flashbang_PlayerPawn_C_CalculateIntensityAverage_Params params {};
		params.Exposure = Exposure;
		params.Distance = Distance;
		params.ViewingAngle = ViewingAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Average != nullptr)
			*Average = params.Average;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Exposure                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ViewingAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Average                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::CalculateWeightedIntensityAverage(float Exposure, float Distance, float ViewingAngle, float* Average)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage");
		
		ABuff_Flashbang_PlayerPawn_C_CalculateWeightedIntensityAverage_Params params {};
		params.Exposure = Exposure;
		params.Distance = Distance;
		params.ViewingAngle = ViewingAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Average != nullptr)
			*Average = params.Average;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::GetNormalizedDistance(class AActor* Actor1, class AActor* Actor2, float* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance");
		
		ABuff_Flashbang_PlayerPawn_C_GetNormalizedDistance_Params params {};
		params.Actor1 = Actor1;
		params.Actor2 = Actor2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     v1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     v2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::GetNormalizedViewingAngle(const struct FVector& v1, const struct FVector& v2, float* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle");
		
		ABuff_Flashbang_PlayerPawn_C_GetNormalizedViewingAngle_Params params {};
		params.v1 = v1;
		params.v2 = v2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::GetNormalizedExposure(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure");
		
		ABuff_Flashbang_PlayerPawn_C_GetNormalizedExposure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_PlayerPawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript");
		
		ABuff_Flashbang_PlayerPawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient");
		
		ABuff_Flashbang_PlayerPawn_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_PlayerPawn_C::ROS_CancelBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff");
		
		ABuff_Flashbang_PlayerPawn_C_ROS_CancelBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_PlayerPawn_C::FlashbangSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup");
		
		ABuff_Flashbang_PlayerPawn_C_FlashbangSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_PlayerPawn_C::Flashbang_PreInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit");
		
		ABuff_Flashbang_PlayerPawn_C_Flashbang_PreInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_PlayerPawn_C::ExecuteUbergraph_Buff_Flashbang_PlayerPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn");
		
		ABuff_Flashbang_PlayerPawn_C_ExecuteUbergraph_Buff_Flashbang_PlayerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Flashbang_PlayerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Flashbang_PlayerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C");
		return ptr;
	}

}


