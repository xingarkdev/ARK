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
	 * 		Name   -> Function MinigunHUD_Interface.MinigunHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  AmmoIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentAmmoCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmmoPerClip                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInTurretMode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideAmmoCountHUDElement                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoItemTemplate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMinigunHUD_Interface_C::GetHudData(class UTexture2D** AmmoIcon, int32_t* CurrentAmmoCount, int32_t* AmmoPerClip, bool* IsInTurretMode, bool* HideAmmoCountHUDElement, class UClass** AmmoItemTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinigunHUD_Interface.MinigunHUD_Interface_C.GetHudData");
		
		UMinigunHUD_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoIcon != nullptr)
			*AmmoIcon = params.AmmoIcon;
		if (CurrentAmmoCount != nullptr)
			*CurrentAmmoCount = params.CurrentAmmoCount;
		if (AmmoPerClip != nullptr)
			*AmmoPerClip = params.AmmoPerClip;
		if (IsInTurretMode != nullptr)
			*IsInTurretMode = params.IsInTurretMode;
		if (HideAmmoCountHUDElement != nullptr)
			*HideAmmoCountHUDElement = params.HideAmmoCountHUDElement;
		if (AmmoItemTemplate != nullptr)
			*AmmoItemTemplate = params.AmmoItemTemplate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinigunHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinigunHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigunHUD_Interface.MinigunHUD_Interface_C");
		return ptr;
	}

}


