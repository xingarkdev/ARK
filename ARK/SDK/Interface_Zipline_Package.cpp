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
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOutAttached                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetFinishedAttach_InterfaceCall(bool* bOutAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall");
		
		UInterface_Zipline_C_GetFinishedAttach_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutAttached != nullptr)
			*bOutAttached = params.bOutAttached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Zipline                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetActiveTargetedZipline(class APrimalStructure** Zipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline");
		
		UInterface_Zipline_C_GetActiveTargetedZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Zipline != nullptr)
			*Zipline = params.Zipline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetProcessMoveToOrder_InterfaceCall(bool newValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall");
		
		UInterface_Zipline_C_SetProcessMoveToOrder_InterfaceCall_Params params {};
		params.newValue = newValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetCurrentMoveToOrderLocationInterfaceCall(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call");
		
		UInterface_Zipline_C_SetCurrentMoveToOrderLocationInterfaceCall_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetCurrentMovetoOrderLocation_InterfaceCall(struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall");
		
		UInterface_Zipline_C_GetCurrentMovetoOrderLocation_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetProcessMovetoOrder_InterfaceCall(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall");
		
		UInterface_Zipline_C_GetProcessMovetoOrder_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InPoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             InArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     OutClosestPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall");
		
		UInterface_Zipline_C_GetClosestLocationToPointFromArray_InterfaceCall_Params params {};
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InArray != nullptr)
			*InArray = params.InArray;
		if (OutClosestPoint != nullptr)
			*OutClosestPoint = params.OutClosestPoint;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewZiplineJumpOffImpulseAI                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetZiplineJumpOffImpulseAI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall");
		
		UInterface_Zipline_C_SetZiplineJumpOffImpulseAI_InterfaceCall_Params params {};
		params.NewZiplineJumpOffImpulseAI = NewZiplineJumpOffImpulseAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetZiplineBuff_InterfaceCall(class APrimalBuff** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call");
		
		UInterface_Zipline_C_GetZiplineBuff_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewFinishedAttach                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetFinishedAttach_InterfaceCall(bool bNewFinishedAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call");
		
		UInterface_Zipline_C_SetFinishedAttach_InterfaceCall_Params params {};
		params.bNewFinishedAttach = bNewFinishedAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewKeepHanging                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetKeepHanging_InterfaceCall(bool bNewKeepHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall");
		
		UInterface_Zipline_C_SetKeepHanging_InterfaceCall_Params params {};
		params.bNewKeepHanging = bNewKeepHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bKeepHanging                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetKeepHanging_InterfaceCall(bool* bKeepHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall");
		
		UInterface_Zipline_C_GetKeepHanging_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bKeepHanging != nullptr)
			*bKeepHanging = params.bKeepHanging;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingZipline                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetUsingZipline_InterfaceCall(bool bUsingZipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall");
		
		UInterface_Zipline_C_SetUsingZipline_InterfaceCall_Params params {};
		params.bUsingZipline = bUsingZipline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAllowZiplineJumping                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetAllowZiplineJumping_InterfaceCall(bool* bAllowZiplineJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall");
		
		UInterface_Zipline_C_GetAllowZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllowZiplineJumping != nullptr)
			*bAllowZiplineJumping = params.bAllowZiplineJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingZipline                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetUsingZipline_InterfaceCall(bool* bUsingZipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall");
		
		UInterface_Zipline_C_GetUsingZipline_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsingZipline != nullptr)
			*bUsingZipline = params.bUsingZipline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Anchor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetCurrentTargetedZipline_InterfaceCall(class APrimalStructure** Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall");
		
		UInterface_Zipline_C_GetCurrentTargetedZipline_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anchor != nullptr)
			*Anchor = params.Anchor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Zipline_C::StartZiplineJumping_InterfaceCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall");
		
		UInterface_Zipline_C_StartZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::MultiSoftSetTransform_InterfaceCall(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall");
		
		UInterface_Zipline_C_MultiSoftSetTransform_InterfaceCall_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSliding                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetSliding_InterfaceCall(bool* bSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall");
		
		UInterface_Zipline_C_GetSliding_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSliding != nullptr)
			*bSliding = params.bSliding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSliding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetSliding_InterfaceCall(bool bNewSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall");
		
		UInterface_Zipline_C_SetSliding_InterfaceCall_Params params {};
		params.bNewSliding = bNewSliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewZiplineJumpOffDirectionAI                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetZiplineJumpOffDirectionAI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall");
		
		UInterface_Zipline_C_SetZiplineJumpOffDirectionAI_InterfaceCall_Params params {};
		params.NewZiplineJumpOffDirectionAI = NewZiplineJumpOffDirectionAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bZiplineJumping                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetIsZiplineJumping_InterfaceCall(bool* bZiplineJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall");
		
		UInterface_Zipline_C_GetIsZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bZiplineJumping != nullptr)
			*bZiplineJumping = params.bZiplineJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetInitialVelocityMulticast_InterfaceCall(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall");
		
		UInterface_Zipline_C_SetInitialVelocityMulticast_InterfaceCall_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetZiplineNewTargetLocation_InterfaceCall(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall");
		
		UInterface_Zipline_C_SetZiplineNewTargetLocation_InterfaceCall_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewTargetLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetZiplineNewTargetLocation_InterfaceCall(struct FVector* NewTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall");
		
		UInterface_Zipline_C_GetZiplineNewTargetLocation_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTargetLocation != nullptr)
			*NewTargetLocation = params.NewTargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAttachFromBelow                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetAttachfromBelow_InterfaceCall(bool* bAttachFromBelow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall");
		
		UInterface_Zipline_C_GetAttachfromBelow_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAttachFromBelow != nullptr)
			*bAttachFromBelow = params.bAttachFromBelow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsHanging                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetIsHanging_InterfaceCall(bool bNewIsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall");
		
		UInterface_Zipline_C_SetIsHanging_InterfaceCall_Params params {};
		params.bNewIsHanging = bNewIsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsHanging                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::GetIsHanging_InterfaceCall(bool* bIsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall");
		
		UInterface_Zipline_C_GetIsHanging_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsHanging != nullptr)
			*bIsHanging = params.bIsHanging;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewTickEveryFrame                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::SetNonDediTickEveryFrame_InterfaceCall(bool bNewTickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall");
		
		UInterface_Zipline_C_SetNonDediTickEveryFrame_InterfaceCall_Params params {};
		params.bNewTickEveryFrame = bNewTickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            overrideAnchor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideStartLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              overrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     overrideFindLocationDirection                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontUseLineOfSightCheck                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Zipline_C::TryAttachingtoZipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float overrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall");
		
		UInterface_Zipline_C_TryAttachingtoZipline_InterfaceCall_Params params {};
		params.overrideAnchor = overrideAnchor;
		params.OverrideStartLocation = OverrideStartLocation;
		params.overrideFindLocationDistance = overrideFindLocationDistance;
		params.overrideFindLocationDirection = overrideFindLocationDirection;
		params.bDontUseLineOfSightCheck = bDontUseLineOfSightCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Zipline.Interface_Zipline_C");
		return ptr;
	}

}


