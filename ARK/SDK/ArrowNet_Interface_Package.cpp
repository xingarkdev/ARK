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
	 * 		Name   -> Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Size
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UArrowNet_Interface_C::RemoteSetCrosshairSize(float InSize, float* OutSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Size");
		
		UArrowNet_Interface_C_RemoteSetCrosshairSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSize != nullptr)
			*OutSize = params.OutSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Color
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                outColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UArrowNet_Interface_C::RemoteSetCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Color");
		
		UArrowNet_Interface_C_RemoteSetCrosshairColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outColor != nullptr)
			*outColor = params.outColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ArrowNet_Interface.ArrowNet_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ProjectileClass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SocketLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FireDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AimedTargetCheckRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFPV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UArrowNet_Interface_C::GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* isFPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.GetHudData");
		
		UArrowNet_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectileClass != nullptr)
			*ProjectileClass = params.ProjectileClass;
		if (SocketLocation != nullptr)
			*SocketLocation = params.SocketLocation;
		if (FireDirection != nullptr)
			*FireDirection = params.FireDirection;
		if (AimedTargetCheckRadius != nullptr)
			*AimedTargetCheckRadius = params.AimedTargetCheckRadius;
		if (isFPV != nullptr)
			*isFPV = params.isFPV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArrowNet_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrowNet_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArrowNet_Interface.ArrowNet_Interface_C");
		return ptr;
	}

}


