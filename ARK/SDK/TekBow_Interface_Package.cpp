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
	 * 		Name   -> Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      AmmoWheelEntries                                           (Parm, OutParm, ZeroConstructor)
	 */
	void UTekBow_Interface_C::GetAmmoMultiuseEntries(TArray<struct FMultiUseEntry>* AmmoWheelEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries");
		
		UTekBow_Interface_C_GetAmmoMultiuseEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoWheelEntries != nullptr)
			*AmmoWheelEntries = params.AmmoWheelEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekBow_Interface.TekBow_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AmmoName                                                   (Parm, OutParm, ZeroConstructor)
	 * 		class UTexture2D*                                  AmmoIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentAmmoCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentAmmoCost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmmoPerClip                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmmoTypeIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                CurrentAmmoTypeColor                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAccessoryActive                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekBow_Interface_C::GetHudData(class FString* AmmoName, class UTexture2D** AmmoIcon, int32_t* CurrentAmmoCount, int32_t* CurrentAmmoCost, int32_t* AmmoPerClip, int32_t* AmmoTypeIndex, struct FLinearColor* CurrentAmmoTypeColor, bool* IsAccessoryActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBow_Interface.TekBow_Interface_C.GetHudData");
		
		UTekBow_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoName != nullptr)
			*AmmoName = params.AmmoName;
		if (AmmoIcon != nullptr)
			*AmmoIcon = params.AmmoIcon;
		if (CurrentAmmoCount != nullptr)
			*CurrentAmmoCount = params.CurrentAmmoCount;
		if (CurrentAmmoCost != nullptr)
			*CurrentAmmoCost = params.CurrentAmmoCost;
		if (AmmoPerClip != nullptr)
			*AmmoPerClip = params.AmmoPerClip;
		if (AmmoTypeIndex != nullptr)
			*AmmoTypeIndex = params.AmmoTypeIndex;
		if (CurrentAmmoTypeColor != nullptr)
			*CurrentAmmoTypeColor = params.CurrentAmmoTypeColor;
		if (IsAccessoryActive != nullptr)
			*IsAccessoryActive = params.IsAccessoryActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTekBow_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTekBow_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekBow_Interface.TekBow_Interface_C");
		return ptr;
	}

}


