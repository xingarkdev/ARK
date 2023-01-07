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
	 * 		Name   -> Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvas*                                     ItemCanvas                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ItemCanvasSize                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ItemCanvasScale                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bItemEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TheTintColor                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Seed_PlantSpeciesR_C::BPDrawItemIcon(class UCanvas* ItemCanvas, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, bool bItemEnabled, struct FLinearColor* TheTintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon");
		
		UPrimalItemConsumable_Seed_PlantSpeciesR_C_BPDrawItemIcon_Params params {};
		params.ItemCanvas = ItemCanvas;
		params.bItemEnabled = bItemEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemCanvasSize != nullptr)
			*ItemCanvasSize = params.ItemCanvasSize;
		if (ItemCanvasScale != nullptr)
			*ItemCanvasScale = params.ItemCanvasScale;
		if (TheTintColor != nullptr)
			*TheTintColor = params.TheTintColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Seed_PlantSpeciesR_C::ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR");
		
		UPrimalItemConsumable_Seed_PlantSpeciesR_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Seed_PlantSpeciesR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Seed_PlantSpeciesR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C");
		return ptr;
	}

}


