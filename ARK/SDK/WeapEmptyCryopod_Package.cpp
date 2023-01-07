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
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.DoFireProjectileCustom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::DoFireProjectileCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.DoFireProjectileCustom");
		
		AWeapEmptyCryopod_C_DoFireProjectileCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomItemData                             CustomItemData                                             (Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      ReturnedClass                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::GetContainedDinoClass(struct FCustomItemData* CustomItemData, class UClass** ReturnedClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass");
		
		AWeapEmptyCryopod_C_GetContainedDinoClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomItemData != nullptr)
			*CustomItemData = params.CustomItemData;
		if (ReturnedClass != nullptr)
			*ReturnedClass = params.ReturnedClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<float>                                      Stats                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapEmptyCryopod_C::GetCharacterStatsAsFloats(class APrimalDinoCharacter* Character, TArray<float>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats");
		
		AWeapEmptyCryopod_C_GetCharacterStatsAsFloats_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::ReportSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess");
		
		AWeapEmptyCryopod_C_ReportSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<unsigned char>                              Bytes                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapEmptyCryopod_C::GetSaddleData(TArray<unsigned char>* Bytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData");
		
		AWeapEmptyCryopod_C_GetSaddleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bytes != nullptr)
			*Bytes = params.Bytes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay");
		
		AWeapEmptyCryopod_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceOff                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::UpdateContainsFX(bool ForceOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX");
		
		AWeapEmptyCryopod_C_UpdateContainsFX_Params params {};
		params.ForceOff = ForceOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon");
		
		AWeapEmptyCryopod_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Capture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::CanCapture(class APrimalDinoCharacter* Dino, bool* Capture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture");
		
		AWeapEmptyCryopod_C_CanCapture_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Capture != nullptr)
			*Capture = params.Capture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapEmptyCryopod_C::BPTryFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon");
		
		AWeapEmptyCryopod_C_BPTryFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify");
		
		AWeapEmptyCryopod_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript");
		
		AWeapEmptyCryopod_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::Capture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture");
		
		AWeapEmptyCryopod_C_Capture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::Ingest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest");
		
		AWeapEmptyCryopod_C_Ingest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::StartIngestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion");
		
		AWeapEmptyCryopod_C_StartIngestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IncludeInstigator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                TPV                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                FPV                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::ClientPlayAnimation(bool IncludeInstigator, class UAnimMontage* TPV, class UAnimMontage* FPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation");
		
		AWeapEmptyCryopod_C_ClientPlayAnimation_Params params {};
		params.IncludeInstigator = IncludeInstigator;
		params.TPV = TPV;
		params.FPV = FPV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload");
		
		AWeapEmptyCryopod_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        CapturingDino                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::StartCaptureLoop(class APrimalDinoCharacter* CapturingDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop");
		
		AWeapEmptyCryopod_C_StartCaptureLoop_Params params {};
		params.CapturingDino = CapturingDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapEmptyCryopod_C::EndCaptureLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop");
		
		AWeapEmptyCryopod_C_EndCaptureLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::CaptureSuccess(const struct FVector& Location, const struct FRotator& Rotation, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess");
		
		AWeapEmptyCryopod_C_CaptureSuccess_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::DeploySuccess(const struct FVector& Location, const struct FRotator& Rotation, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess");
		
		AWeapEmptyCryopod_C_DeploySuccess_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::DeployFailure(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure");
		
		AWeapEmptyCryopod_C_DeployFailure_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapEmptyCryopod_C::ExecuteUbergraph_WeapEmptyCryopod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod");
		
		AWeapEmptyCryopod_C_ExecuteUbergraph_WeapEmptyCryopod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapEmptyCryopod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapEmptyCryopod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapEmptyCryopod.WeapEmptyCryopod_C");
		return ptr;
	}

}


