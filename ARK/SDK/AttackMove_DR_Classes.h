﻿#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AttackMove_DR.AttackMove_DR_C
	 * Size -> 0x002B (FullSize[0x00BB] - InheritedSize[0x0090])
	 */
	class UAttackMove_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		class AActor*                                              K2Node_Event_OwnerActor;                                 // 0x0090(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x00A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_00J3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x00B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCurrentAttackStopsMovement_ReturnValue;       // 0x00B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x00BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_AttackMove_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
