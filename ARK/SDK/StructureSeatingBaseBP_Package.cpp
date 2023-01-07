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
	 * 		Name   -> Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureSeatingBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.UserConstructionScript");
		
		AStructureSeatingBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.ExecuteUbergraph_StructureSeatingBaseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureSeatingBaseBP_C::ExecuteUbergraph_StructureSeatingBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.ExecuteUbergraph_StructureSeatingBaseBP");
		
		AStructureSeatingBaseBP_C_ExecuteUbergraph_StructureSeatingBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureSeatingBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureSeatingBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C");
		return ptr;
	}

}


