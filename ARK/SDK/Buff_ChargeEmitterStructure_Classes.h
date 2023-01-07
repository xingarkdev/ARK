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
	 * BlueprintGeneratedClass Buff_ChargeEmitterStructure.Buff_ChargeEmitterStructure_C
	 * Size -> 0x0008 (FullSize[0x0BA0] - InheritedSize[0x0B98])
	 */
	class ABuff_ChargeEmitterStructure_C : public ABuff_ChargeEmitter_C
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitterStructure(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
