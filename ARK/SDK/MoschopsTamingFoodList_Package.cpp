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
	 * 		Name   -> Function MoschopsTamingFoodList.MoschopsTamingFoodList_C.ExecuteUbergraph_MoschopsTamingFoodList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoschopsTamingFoodList_C::ExecuteUbergraph_MoschopsTamingFoodList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoschopsTamingFoodList.MoschopsTamingFoodList_C.ExecuteUbergraph_MoschopsTamingFoodList");
		
		UMoschopsTamingFoodList_C_ExecuteUbergraph_MoschopsTamingFoodList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoschopsTamingFoodList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoschopsTamingFoodList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoschopsTamingFoodList.MoschopsTamingFoodList_C");
		return ptr;
	}

}


