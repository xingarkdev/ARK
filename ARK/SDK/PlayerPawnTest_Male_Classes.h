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
	 * BlueprintGeneratedClass PlayerPawnTest_Male.PlayerPawnTest_Male_C
	 * Size -> 0x000F (FullSize[0x2128] - InheritedSize[0x2119])
	 */
	class APlayerPawnTest_Male_C : public APlayerPawnTest_Child_C
	{
	public:
		unsigned char                                              UnknownData_X1RP[0x7];                                   // 0x2119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerCharacterStatusComponent_BP_C*                PlayerCharacterStatus;                                   // 0x2120(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_PlayerPawnTest_Male(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
