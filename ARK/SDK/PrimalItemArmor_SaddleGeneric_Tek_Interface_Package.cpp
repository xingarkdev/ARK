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
	 * 		Name   -> Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.IGet Max Ammo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_SaddleGeneric_Tek_Interface_C::IGetMaxAmmo(int32_t* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.IGet Max Ammo");
		
		UPrimalItemArmor_SaddleGeneric_Tek_Interface_C_IGetMaxAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.ISetElementToMax
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_SaddleGeneric_Tek_Interface_C::ISetElementToMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.ISetElementToMax");
		
		UPrimalItemArmor_SaddleGeneric_Tek_Interface_C_ISetElementToMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_SaddleGeneric_Tek_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_SaddleGeneric_Tek_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C");
		return ptr;
	}

}


