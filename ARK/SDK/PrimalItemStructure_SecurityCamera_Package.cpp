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
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraViewPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraLocation");
		
		UPrimalItemStructure_SecurityCamera_C_GetCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraViewPoint != nullptr)
			*CameraViewPoint = params.CameraViewPoint;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Cameras                                                    (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraData");
		
		UPrimalItemStructure_SecurityCamera_C_GetCameraData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cameras != nullptr)
			*Cameras = params.Cameras;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::GetConsoleID(float* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleID");
		
		UPrimalItemStructure_SecurityCamera_C_GetConsoleID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.CanAddCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::CanAddCamera(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.CanAddCamera");
		
		UPrimalItemStructure_SecurityCamera_C_CanAddCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAddCamera                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleData");
		
		UPrimalItemStructure_SecurityCamera_C_GetConsoleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (Name != nullptr)
			*Name = params.Name;
		if (CanAddCamera != nullptr)
			*CanAddCamera = params.CanAddCamera;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ConsoleID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::SetConsoleDataByID(float ConsoleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID");
		
		UPrimalItemStructure_SecurityCamera_C_SetConsoleDataByID_Params params {};
		params.ConsoleID = ConsoleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::SetCameraName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName");
		
		UPrimalItemStructure_SecurityCamera_C_SetCameraName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              outConsoleID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               outAllowedToAdd                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      outCameraName                                              (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      outConsoleName                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::RetrieveConsoleData(float* outConsoleID, struct FVector* OutLocation, bool* outAllowedToAdd, class FString* outCameraName, class FString* outConsoleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData");
		
		UPrimalItemStructure_SecurityCamera_C_RetrieveConsoleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outConsoleID != nullptr)
			*outConsoleID = params.outConsoleID;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outAllowedToAdd != nullptr)
			*outAllowedToAdd = params.outAllowedToAdd;
		if (outCameraName != nullptr)
			*outCameraName = params.outCameraName;
		if (outConsoleName != nullptr)
			*outConsoleName = params.outConsoleName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Console                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::SetConsoleData(class APrimalStructure* Console, bool* Changed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data");
		
		UPrimalItemStructure_SecurityCamera_C_SetConsoleData_Params params {};
		params.Console = Console;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Changed != nullptr)
			*Changed = params.Changed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            LinkedConsole                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID");
		
		UPrimalItemStructure_SecurityCamera_C_GetConsoleFromID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedConsole != nullptr)
			*LinkedConsole = params.LinkedConsole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemStructure_SecurityCamera_C::BPServerVerifyStructurePlacementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData");
		
		UPrimalItemStructure_SecurityCamera_C_BPServerVerifyStructurePlacementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemStructure_SecurityCamera_C::VerifyConsoleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData");
		
		UPrimalItemStructure_SecurityCamera_C_VerifyConsoleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ItemNameIn                                                 (Parm, ZeroConstructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemStructure_SecurityCamera_C::BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName");
		
		UPrimalItemStructure_SecurityCamera_C_BPGetItemName_Params params {};
		params.ItemNameIn = ItemNameIn;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UTexture2D* UPrimalItemStructure_SecurityCamera_C::BPGetItemIcon(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon");
		
		UPrimalItemStructure_SecurityCamera_C_BPGetItemIcon_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemStructure_SecurityCamera_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription");
		
		UPrimalItemStructure_SecurityCamera_C_BPGetItemDescription_Params params {};
		params.InDescription = InDescription;
		params.bGetLongDescription = bGetLongDescription;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_SecurityCamera_C::ExecuteUbergraph_PrimalItemStructure_SecurityCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera");
		
		UPrimalItemStructure_SecurityCamera_C_ExecuteUbergraph_PrimalItemStructure_SecurityCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_SecurityCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_SecurityCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C");
		return ptr;
	}

}


