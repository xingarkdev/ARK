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
	 * 		RVA    -> 0x01B30530
	 * 		Name   -> Function AIModule.AIController.UseBlackboard
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBlackboardData*                             BlackboardAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");
		
		AAIController_UseBlackboard_Params params {};
		params.BlackboardAsset = BlackboardAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30610
	 * 		Name   -> Function AIModule.AIController.UpdateMoveFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAIController::UpdateMoveFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UpdateMoveFocus");
		
		AAIController_UpdateMoveFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E8ADB0
	 * 		Name   -> Function AIModule.AIController.SetMoveBlockDetection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::SetMoveBlockDetection(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");
		
		AAIController_SetMoveBlockDetection_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30630
	 * 		Name   -> Function AIModule.AIController.RunBehaviorTree
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBehaviorTree*                               BTAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");
		
		AAIController_RunBehaviorTree_Params params {};
		params.BTAsset = BTAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.AIController.OnPossess
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnPossess");
		
		AAIController_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30710
	 * 		Name   -> Function AIModule.AIController.MoveToLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     dest                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasPlayerCommand                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EPathFollowingRequestResult AAIController::MoveToLocation(const struct FVector& dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool WasPlayerCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");
		
		AAIController_MoveToLocation_Params params {};
		params.dest = dest;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.WasPlayerCommand = WasPlayerCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30B90
	 * 		Name   -> Function AIModule.AIController.MoveToActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Goal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EPathFollowingRequestResult AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");
		
		AAIController_MoveToActor_Params params {};
		params.Goal = Goal;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30F20
	 * 		Name   -> Function AIModule.AIController.K2_SetFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::K2_SetFocus(class AActor* NewFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");
		
		AAIController_K2_SetFocus_Params params {};
		params.NewFocus = NewFocus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31000
	 * 		Name   -> Function AIModule.AIController.K2_SetFocalPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     FP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOffsetFromBase                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::K2_SetFocalPoint(const struct FVector& FP, bool bOffsetFromBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");
		
		AAIController_K2_SetFocalPoint_Params params {};
		params.FP = FP;
		params.bOffsetFromBase = bOffsetFromBase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31180
	 * 		Name   -> Function AIModule.AIController.K2_ClearFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAIController::K2_ClearFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");
		
		AAIController_K2_ClearFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B311B0
	 * 		Name   -> Function AIModule.AIController.HasPartialPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AAIController::HasPartialPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");
		
		AAIController_HasPartialPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B311F0
	 * 		Name   -> Function AIModule.AIController.GetMoveStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EPathFollowingStatus AAIController::GetMoveStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");
		
		AAIController_GetMoveStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31210
	 * 		Name   -> Function AIModule.AIController.GetImmediateMoveDestination
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AAIController::GetImmediateMoveDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");
		
		AAIController_GetImmediateMoveDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31280
	 * 		Name   -> Function AIModule.AIController.GetFocusActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AAIController::GetFocusActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");
		
		AAIController_GetFocusActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B312B0
	 * 		Name   -> Function AIModule.AIController.GetFocalPoint
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AAIController::GetFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");
		
		AAIController_GetFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.AIController.AIMoveCompletedSignature__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FAIRequestID                                RequestID                                                  (Parm)
	 * 		EPathFollowingResult                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::AIMoveCompletedSignature__DelegateSignature(const struct FAIRequestID& RequestID, EPathFollowingResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.AIMoveCompletedSignature__DelegateSignature");
		
		AAIController_AIMoveCompletedSignature__DelegateSignature_Params params {};
		params.RequestID = RequestID;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTAuxiliaryNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTAuxiliaryNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTaskNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTaskNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B318F0
	 * 		Name   -> Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FAIRequestID                                RequestID                                                  (Parm)
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");
		
		UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params {};
		params.RequestID = RequestID;
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.AIAsyncTaskBlueprintProxy.OAISimpleDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAsyncTaskBlueprintProxy::OAISimpleDelegate__DelegateSignature(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OAISimpleDelegate__DelegateSignature");
		
		UAIAsyncTaskBlueprintProxy_OAISimpleDelegate__DelegateSignature_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31A50
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnlockMovement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UnlockAILogic                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");
		
		UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params {};
		params.AnimInstance = AnimInstance;
		params.bUnlockMovement = bUnlockMovement;
		params.UnlockAILogic = UnlockAILogic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31C70
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      PawnClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBehaviorTree*                               BehaviorTree                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNoCollisionFail                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");
		
		UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PawnClass = PawnClass;
		params.BehaviorTree = BehaviorTree;
		params.Location = Location;
		params.Rotation = Rotation;
		params.bNoCollisionFail = bNoCollisionFail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31FF0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SpawnAI
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBlueprint*                                  Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBehaviorTree*                               BehaviorTree                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNoCollisionFail                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAI(class UObject* WorldContextObject, class UBlueprint* Pawn, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAI");
		
		UAIBlueprintHelperLibrary_SpawnAI_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Pawn = Pawn;
		params.BehaviorTree = BehaviorTree;
		params.Location = Location;
		params.Rotation = Rotation;
		params.bNoCollisionFail = bNoCollisionFail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B32370
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");
		
		UAIBlueprintHelperLibrary_SendAIMessage_Params params {};
		params.Target = Target;
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B325D0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLockMovement                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LockAILogic                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");
		
		UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params {};
		params.AnimInstance = AnimInstance;
		params.bLockMovement = bLockMovement;
		params.LockAILogic = LockAILogic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B327E0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");
		
		UAIBlueprintHelperLibrary_IsValidAIRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B328D0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");
		
		UAIBlueprintHelperLibrary_IsValidAILocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B329C0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");
		
		UAIBlueprintHelperLibrary_GetBlackboard_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B32A90
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");
		
		UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Pawn = Pawn;
		params.Destination = Destination;
		params.TargetActor = TargetActor;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIBlueprintHelperLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIBlueprintHelperLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30090
	 * 		Name   -> Function AIModule.PawnActionsComponent.PushAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPawnAction*                                 NewAction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAIRequestPriority                                 Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPawnActionsComponent::PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.PushAction");
		
		UPawnActionsComponent_PushAction_Params params {};
		params.NewAction = NewAction;
		params.Priority = Priority;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30280
	 * 		Name   -> Function AIModule.PawnActionsComponent.PerformAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPawnAction*                                 Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAIRequestPriority                                 Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPawnActionsComponent::STATIC_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.PerformAction");
		
		UPawnActionsComponent_PerformAction_Params params {};
		params.Pawn = Pawn;
		params.Action = Action;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B30460
	 * 		Name   -> Function AIModule.PawnActionsComponent.AbortAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPawnAction*                                 ActionToAbort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPawnActionsComponent::AbortAction(class UPawnAction* ActionToAbort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.AbortAction");
		
		UPawnActionsComponent_AbortAction_Params params {};
		params.ActionToAbort = ActionToAbort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnActionsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnActionsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionListenerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionListenerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2FDE0
	 * 		Name   -> Function AIModule.AISystem.AILoggingVerbose
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAISystem::AILoggingVerbose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");
		
		UAISystem_AILoggingVerbose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2FE00
	 * 		Name   -> Function AIModule.AISystem.AIIgnorePlayers
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAISystem::AIIgnorePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");
		
		UAISystem_AIIgnorePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31430
	 * 		Name   -> Function AIModule.AIPerceptionComponent.SetSightRadius
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewSightRadius                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIPerceptionComponent::SetSightRadius(float NewSightRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSightRadius");
		
		UAIPerceptionComponent_SetSightRadius_Params params {};
		params.NewSightRadius = NewSightRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31520
	 * 		Name   -> Function AIModule.AIPerceptionComponent.SetPeripheralVisionAngle
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPeripheralVisionAngle                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIPerceptionComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetPeripheralVisionAngle");
		
		UAIPerceptionComponent_SetPeripheralVisionAngle_Params params {};
		params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31610
	 * 		Name   -> Function AIModule.AIPerceptionComponent.SetLOSHearingRange
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewLOSHearingRange                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIPerceptionComponent::SetLOSHearingRange(float NewLOSHearingRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetLOSHearingRange");
		
		UAIPerceptionComponent_SetLOSHearingRange_Params params {};
		params.NewLOSHearingRange = NewLOSHearingRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B31700
	 * 		Name   -> Function AIModule.AIPerceptionComponent.SetHearingRange
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewHearingRange                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIPerceptionComponent::SetHearingRange(float NewHearingRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetHearingRange");
		
		UAIPerceptionComponent_SetHearingRange_Params params {};
		params.NewHearingRange = NewHearingRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B317F0
	 * 		Name   -> Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIPerceptionComponent::OnOwnerEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");
		
		UAIPerceptionComponent_OnOwnerEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Damage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Hearing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Prediction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Prediction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Team.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Team::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Touch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Touch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISightTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISightTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrainComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B312F0
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.FindService
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	class UBTNode* UBehaviorTreeComponent::FindService(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.FindService");
		
		UBehaviorTreeComponent_FindService_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTCompositeNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTCompositeNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B32E10
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");
		
		UBlackboardComponent_SetValueAsVector_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B32F80
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor)
	 */
	void UBlackboardComponent::SetValueAsString(const class FName& KeyName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");
		
		UBlackboardComponent_SetValueAsString_Params params {};
		params.KeyName = KeyName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33130
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");
		
		UBlackboardComponent_SetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B332A0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsObject
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");
		
		UBlackboardComponent_SetValueAsObject_Params params {};
		params.KeyName = KeyName;
		params.ObjectValue = ObjectValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B333F0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NameValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsName(const class FName& KeyName, const class FName& NameValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");
		
		UBlackboardComponent_SetValueAsName_Params params {};
		params.KeyName = KeyName;
		params.NameValue = NameValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33550
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsInt(const class FName& KeyName, int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");
		
		UBlackboardComponent_SetValueAsInt_Params params {};
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B336A0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsFloat(const class FName& KeyName, float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");
		
		UBlackboardComponent_SetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33800
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsEnum
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");
		
		UBlackboardComponent_SetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33950
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsClass
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ClassValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsClass(const class FName& KeyName, class UClass* ClassValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");
		
		UBlackboardComponent_SetValueAsClass_Params params {};
		params.KeyName = KeyName;
		params.ClassValue = ClassValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33AA0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsBool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsBool(const class FName& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");
		
		UBlackboardComponent_SetValueAsBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33C00
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UBlackboardComponent::GetValueAsVector(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");
		
		UBlackboardComponent_GetValueAsVector_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33CE0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class FString UBlackboardComponent::GetValueAsString(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");
		
		UBlackboardComponent_GetValueAsString_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33E30
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator UBlackboardComponent::GetValueAsRotator(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");
		
		UBlackboardComponent_GetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33F10
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsObject
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class UObject* UBlackboardComponent::GetValueAsObject(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");
		
		UBlackboardComponent_GetValueAsObject_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B33FE0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class FName UBlackboardComponent::GetValueAsName(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");
		
		UBlackboardComponent_GetValueAsName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B340B0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	int32_t UBlackboardComponent::GetValueAsInt(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");
		
		UBlackboardComponent_GetValueAsInt_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34180
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UBlackboardComponent::GetValueAsFloat(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");
		
		UBlackboardComponent_GetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34250
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsEnum
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	unsigned char UBlackboardComponent::GetValueAsEnum(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");
		
		UBlackboardComponent_GetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34320
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsClass
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class UClass* UBlackboardComponent::GetValueAsClass(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");
		
		UBlackboardComponent_GetValueAsClass_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B343F0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsBool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool UBlackboardComponent::GetValueAsBool(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");
		
		UBlackboardComponent_GetValueAsBool_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B344C0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetRotationFromEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ResultRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlackboardComponent::GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");
		
		UBlackboardComponent_GetRotationFromEntry_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultRotation != nullptr)
			*ResultRotation = params.ResultRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34620
	 * 		Name   -> Function AIModule.BlackboardComponent.GetLocationFromEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ResultLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlackboardComponent::GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");
		
		UBlackboardComponent_GetLocationFromEntry_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultLocation != nullptr)
			*ResultLocation = params.ResultLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34780
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::ClearValueAsVector(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValueAsVector");
		
		UBlackboardComponent_ClearValueAsVector_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34850
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::ClearValueAsRotator(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValueAsRotator");
		
		UBlackboardComponent_ClearValueAsRotator_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Bool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Bool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Class.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Class::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Enum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Enum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Float.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Float::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Int.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Int::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Name.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Name::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_NativeEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_NativeEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Object.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Object::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Rotator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Rotator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_String.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_String::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Vector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Vector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E2F370
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");
		
		UBTFunctionLibrary_StopUsingExternalEvent_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34920
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");
		
		UBTFunctionLibrary_StartUsingExternalEvent_Params params {};
		params.NodeOwner = NodeOwner;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34A60
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");
		
		UBTFunctionLibrary_SetBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34C80
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");
		
		UBTFunctionLibrary_SetBlackboardValueAsString_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B34EB0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");
		
		UBTFunctionLibrary_SetBlackboardValueAsObject_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B350A0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");
		
		UBTFunctionLibrary_SetBlackboardValueAsName_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35290
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");
		
		UBTFunctionLibrary_SetBlackboardValueAsInt_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35470
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");
		
		UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35670
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");
		
		UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35860
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");
		
		UBTFunctionLibrary_SetBlackboardValueAsClass_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35A50
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");
		
		UBTFunctionLibrary_SetBlackboardValueAsBool_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35C40
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FVector UBTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");
		
		UBTFunctionLibrary_GetBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35DE0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class FString UBTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");
		
		UBTFunctionLibrary_GetBlackboardValueAsString_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B35FB0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UObject* UBTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");
		
		UBTFunctionLibrary_GetBlackboardValueAsObject_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36130
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class FName UBTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");
		
		UBTFunctionLibrary_GetBlackboardValueAsName_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B362C0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	int32_t UBTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");
		
		UBTFunctionLibrary_GetBlackboardValueAsInt_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36440
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	float UBTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");
		
		UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B365C0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	unsigned char UBTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");
		
		UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36740
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UClass* UBTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");
		
		UBTFunctionLibrary_GetBlackboardValueAsClass_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B368C0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UBTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");
		
		UBTFunctionLibrary_GetBlackboardValueAsBool_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36A40
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class AActor* UBTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");
		
		UBTFunctionLibrary_GetBlackboardValueAsActor_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36BD0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UBlackboardComponent* UBTFunctionLibrary::STATIC_GetBlackboard(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboard");
		
		UBTFunctionLibrary_GetBlackboard_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36CC0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBehaviorTree
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UBehaviorTreeComponent* UBTFunctionLibrary::STATIC_GetBehaviorTree(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBehaviorTree");
		
		UBTFunctionLibrary_GetBehaviorTree_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36DB0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ForceNotifyBlackboardValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBTFunctionLibrary::STATIC_ForceNotifyBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ForceNotifyBlackboardValue");
		
		UBTFunctionLibrary_ForceNotifyBlackboardValue_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B36F20
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");
		
		UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Blackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Blackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ConditionalLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConditionalLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");
		
		UBTDecorator_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");
		
		UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");
		
		UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBTNodeResult                                      NodeResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params {};
		params.OwnerActor = OwnerActor;
		params.NodeResult = NodeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck");
		
		UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37090
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");
		
		UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B370E0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");
		
		UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37170
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowExecution                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::FinishConditionCheck(bool bAllowExecution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck");
		
		UBTDecorator_BlueprintBase_FinishConditionCheck_Params params {};
		params.bAllowExecution = bAllowExecution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBBEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBBEntries::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ConeCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConeCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Cooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Cooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_DoesPathExist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_DoesPathExist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ForceSuccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ForceSuccess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_KeepInCone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_KeepInCone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Loop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Loop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ReachedMoveGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ReachedMoveGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TimeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TimeLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DefaultFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DefaultFocus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37250
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ResetInterval
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBehaviorTreeComponent*                      OwnerComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	 */
	void UBTService_BlueprintBase::ResetInterval(class UBehaviorTreeComponent* OwnerComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ResetInterval");
		
		UBTService_BlueprintBase_ResetInterval_Params params {};
		params.OwnerComp = OwnerComp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");
		
		UBTService_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");
		
		UBTService_BlueprintBase_ReceiveSearchStart_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");
		
		UBTService_BlueprintBase_ReceiveDeactivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");
		
		UBTService_BlueprintBase_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37090
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.IsServiceActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTService_BlueprintBase::IsServiceActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");
		
		UBTService_BlueprintBase_IsServiceActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_Selector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Selector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_SimpleParallel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_SimpleParallel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveDirectlyToward.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveDirectlyToward::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RotateToFaceBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RotateToFaceBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunEQSQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunEQSQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37320
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");
		
		UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params {};
		params.MessageName = MessageName;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37490
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessage(const class FName& MessageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");
		
		UBTTask_BlueprintBase_SetFinishOnMessage_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");
		
		UBTTask_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");
		
		UBTTask_BlueprintBase_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");
		
		UBTTask_BlueprintBase_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37570
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTTask_BlueprintBase::IsTaskExecuting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");
		
		UBTTask_BlueprintBase_IsTaskExecuting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B375C0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishExecute
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");
		
		UBTTask_BlueprintBase_FinishExecute_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B376D0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishAbort
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBTTask_BlueprintBase::FinishAbort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");
		
		UBTTask_BlueprintBase_FinishAbort_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MakeNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MakeNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PlaySound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlaySound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_Wait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Wait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdAgentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ResultingLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");
		
		UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocation != nullptr)
			*ResultingLocation = params.ResultingLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");
		
		UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             ResultingLocationSet                                       (Parm, OutParm, ZeroConstructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");
		
		UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocationSet != nullptr)
			*ResultingLocationSet = params.ResultingLocationSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ResultingActorsSet                                         (Parm, OutParm, ZeroConstructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");
		
		UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActorsSet != nullptr)
			*ResultingActorsSet = params.ResultingActorsSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Item.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Item::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Querier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Querier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualLoggerExtension.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualLoggerExtension::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryDebugHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryDebugHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_ActorsOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ActorsOfClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37740
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");
		
		UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");
		
		UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37770
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     GeneratedVector                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");
		
		UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params {};
		params.GeneratedVector = GeneratedVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B378B0
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      GeneratedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");
		
		UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params {};
		params.GeneratedActor = GeneratedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Composite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Composite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_PathingGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_PathingGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_ProjectedPoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ProjectedPoints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_OnCircle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_OnCircle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_SimpleGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_SimpleGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_VectorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_VectorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_ActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_ActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Direction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Direction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Point.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Point::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Distance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Distance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Dot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Dot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Pathfinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Pathfinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Trace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Trace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQSQueryResultSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSQueryResultSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQSRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEQSTestingPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQSTestingPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericTeamAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTeamAgentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37980
	 * 		Name   -> Function AIModule.NavigationComponent.OnNavDataRegistered
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationComponent::OnNavDataRegistered(class ANavigationData* NavData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.NavigationComponent.OnNavDataRegistered");
		
		UNavigationComponent_OnNavDataRegistered_Params params {};
		params.NavData = NavData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.NavigationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2FE50
	 * 		Name   -> Function AIModule.PawnAction.GetActionPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	EAIRequestPriority UPawnAction::GetActionPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");
		
		UPawnAction_GetActionPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2FE70
	 * 		Name   -> Function AIModule.PawnAction.Finish
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EPawnActionResult                                  WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction::Finish(EPawnActionResult WithResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");
		
		UPawnAction_Finish_Params params {};
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2FF40
	 * 		Name   -> Function AIModule.PawnAction.CreateActionInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ActionClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UPawnAction* UPawnAction::STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");
		
		UPawnAction_CreateActionInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActionClass = ActionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");
		
		UPawnAction_BlueprintBase_ActionTick_Params params {};
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");
		
		UPawnAction_BlueprintBase_ActionStart_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionResume
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");
		
		UPawnAction_BlueprintBase_ActionResume_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionPause
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");
		
		UPawnAction_BlueprintBase_ActionPause_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionFinished
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPawnActionResult                                  WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");
		
		UPawnAction_BlueprintBase_ActionFinished_Params params {};
		params.ControlledPawn = ControlledPawn;
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Move.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Move::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Repeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Repeat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37A80
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");
		
		UPawnSensingComponent_SetSensingUpdatesEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37B60
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingInterval
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewSensingInterval                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");
		
		UPawnSensingComponent_SetSensingInterval_Params params {};
		params.NewSensingInterval = NewSensingInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37C30
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPeripheralVisionAngle                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");
		
		UPawnSensingComponent_SetPeripheralVisionAngle_Params params {};
		params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");
		
		UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");
		
		UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.Location = Location;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37D40
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPawnSensingComponent::GetPeripheralVisionCosine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");
		
		UPawnSensingComponent_GetPeripheralVisionCosine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B37D60
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPawnSensingComponent::GetPeripheralVisionAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");
		
		UPawnSensingComponent_GetPeripheralVisionAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnSensingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnSensingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}

}


