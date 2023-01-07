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
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::GetAmmoContainerIcon(class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon");
		
		ABuff_AmmoContainerHelper_C_GetAmmoContainerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               TurretStructureItemContainer                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoItemTemplate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnyAmmoContainersInRange                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int32_t* Quantity, bool* AnyAmmoContainersInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity");
		
		ABuff_AmmoContainerHelper_C_ProvidedAmmoQuantity_Params params {};
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
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InitialQuantity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartingLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            TurretToCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FinalQuantity                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnyAmmoContainersInRange                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::GetAllAmmoNearby(float Range, int32_t InitialQuantity, const struct FVector& StartingLocation, class UClass* AmmoClass, class APrimalStructure* TurretToCheck, int32_t* FinalQuantity, bool* AnyAmmoContainersInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby");
		
		ABuff_AmmoContainerHelper_C_GetAllAmmoNearby_Params params {};
		params.Range = Range;
		params.InitialQuantity = InitialQuantity;
		params.StartingLocation = StartingLocation;
		params.AmmoClass = AmmoClass;
		params.TurretToCheck = TurretToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinalQuantity != nullptr)
			*FinalQuantity = params.FinalQuantity;
		if (AnyAmmoContainersInRange != nullptr)
			*AnyAmmoContainersInRange = params.AnyAmmoContainersInRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD");
		
		ABuff_AmmoContainerHelper_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumSlots                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::CalculateWidgetLocation(int32_t SlotIndex, int32_t NumSlots, struct FVector2D* NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation");
		
		ABuff_AmmoContainerHelper_C_CalculateWidgetLocation_Params params {};
		params.SlotIndex = SlotIndex;
		params.NumSlots = NumSlots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              AmmoTypeList                                               (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    AmmoCountList                                              (Parm, OutParm, ZeroConstructor)
	 * 		TArray<struct FAmmoCount>                          AmmoCounts                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_AmmoContainerHelper_C::GetAmmoInfo(TArray<class UClass*>* AmmoTypeList, TArray<int32_t>* AmmoCountList, TArray<struct FAmmoCount>* AmmoCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo");
		
		ABuff_AmmoContainerHelper_C_GetAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypeList != nullptr)
			*AmmoTypeList = params.AmmoTypeList;
		if (AmmoCountList != nullptr)
			*AmmoCountList = params.AmmoCountList;
		if (AmmoCounts != nullptr)
			*AmmoCounts = params.AmmoCounts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmmoContainerHelper_C::SyncHUDElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements");
		
		ABuff_AmmoContainerHelper_C_SyncHUDElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_AmmoContainerHelper_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements");
		
		ABuff_AmmoContainerHelper_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmmoContainerHelper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay");
		
		ABuff_AmmoContainerHelper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmmoContainerHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript");
		
		ABuff_AmmoContainerHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient");
		
		ABuff_AmmoContainerHelper_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmmoContainerHelper_C::ExecuteUbergraph_Buff_AmmoContainerHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper");
		
		ABuff_AmmoContainerHelper_C_ExecuteUbergraph_Buff_AmmoContainerHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_AmmoContainerHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_AmmoContainerHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C");
		return ptr;
	}

}


