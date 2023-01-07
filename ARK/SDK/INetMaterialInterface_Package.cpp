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
	 * 		Name   -> Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MaterialIndices                                            (Parm, OutParm, ZeroConstructor)
	 */
	void UINetMaterialInterface_C::GetMaterialIndicesToSupportNet(TArray<int32_t>* MaterialIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet");
		
		UINetMaterialInterface_C_GetMaterialIndicesToSupportNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialIndices != nullptr)
			*MaterialIndices = params.MaterialIndices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UINetMaterialInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UINetMaterialInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass INetMaterialInterface.INetMaterialInterface_C");
		return ptr;
	}

}


