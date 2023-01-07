#pragma once

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
	 * BlueprintGeneratedClass DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_Scout_Dash_C : public UPrimalAIStateBPBase
	{
	public:
		bool BPShouldEndAttack();
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void IsAIControlled(bool* NewParam);
		void ExecuteUbergraph_DinoAttackState_Scout_Dash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
