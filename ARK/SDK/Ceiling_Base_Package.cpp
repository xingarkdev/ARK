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
	 * 		Name   -> Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ThisSnapPointIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ThisSnapPointName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            OtherStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherStructureSnapPointIndex                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OtherStructureSnapPointName                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACeiling_Base_C::BPAllowSnapRotationForStructure(int32_t ThisSnapPointIndex, const class FName& ThisSnapPointName, class APrimalStructure* OtherStructure, int32_t OtherStructureSnapPointIndex, const class FName& OtherStructureSnapPointName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure");
		
		ACeiling_Base_C_BPAllowSnapRotationForStructure_Params params {};
		params.ThisSnapPointIndex = ThisSnapPointIndex;
		params.ThisSnapPointName = ThisSnapPointName;
		params.OtherStructure = OtherStructure;
		params.OtherStructureSnapPointIndex = OtherStructureSnapPointIndex;
		params.OtherStructureSnapPointName = OtherStructureSnapPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACeiling_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript");
		
		ACeiling_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACeiling_Base_C::ExecuteUbergraph_Ceiling_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base");
		
		ACeiling_Base_C_ExecuteUbergraph_Ceiling_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACeiling_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeiling_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Base.Ceiling_Base_C");
		return ptr;
	}

}


