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
	 * 		Name   -> Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAmmoContainerHUD_Interface_C::GetAmmoContainerIcon(class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon");
		
		UAmmoContainerHUD_Interface_C_GetAmmoContainerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               TurretStructureItemContainer                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoItemTemplate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnyAmmoContainersInRange                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAmmoContainerHUD_Interface_C::ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int32_t* Quantity, bool* AnyAmmoContainersInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity");
		
		UAmmoContainerHUD_Interface_C_ProvidedAmmoQuantity_Params params {};
		params.TurretStructureItemContainer = TurretStructureItemContainer;
		params.AmmoItemTemplate = AmmoItemTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
		if (AnyAmmoContainersInRange != nullptr)
			*AnyAmmoContainersInRange = params.AnyAmmoContainersInRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmmoContainerHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoContainerHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C");
		return ptr;
	}

}


