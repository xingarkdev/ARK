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
	 * 		Name   -> Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEggIncubatorInterface_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed");
		
		UEggIncubatorInterface_C_IsEggItemAllowed_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ForItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InSlot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SlotFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEggIncubatorInterface_C::GetItemDisplaySlot(class UPrimalItem* ForItem, int32_t* InSlot, bool* SlotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot");
		
		UEggIncubatorInterface_C_GetItemDisplaySlot_Params params {};
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSlot != nullptr)
			*InSlot = params.InSlot;
		if (SlotFound != nullptr)
			*SlotFound = params.SlotFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEggIncubatorInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEggIncubatorInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C");
		return ptr;
	}

}


