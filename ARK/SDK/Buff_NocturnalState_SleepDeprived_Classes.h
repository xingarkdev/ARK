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
	 * BlueprintGeneratedClass Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class ABuff_NocturnalState_SleepDeprived_C : public ABuff_Base_C
	{
	public:
		float                                                      sleepDebtTime;                                           // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		float GetHUDProgressBarPercent();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_NocturnalState_SleepDeprived(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
