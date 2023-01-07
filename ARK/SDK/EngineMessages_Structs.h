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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceNotification
	 * Size -> 0x0018
	 */
	struct FEngineServiceNotification
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010) ZeroConstructor
		double                                                     TimeSeconds;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceTerminate
	 * Size -> 0x0010
	 */
	struct FEngineServiceTerminate
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceExecuteCommand
	 * Size -> 0x0020
	 */
	struct FEngineServiceExecuteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) ZeroConstructor
		class FString                                              UserName;                                                // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceAuthGrant
	 * Size -> 0x0020
	 */
	struct FEngineServiceAuthGrant
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor
		class FString                                              UserToGrant;                                             // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceAuthDeny
	 * Size -> 0x0020
	 */
	struct FEngineServiceAuthDeny
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor
		class FString                                              UserToDeny;                                              // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServicePong
	 * Size -> 0x0050
	 */
	struct FEngineServicePong
	{
	public:
		class FString                                              CurrentLevel;                                            // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    EngineVersion;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasBegunPlay;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MWLR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               InstanceId;                                              // 0x0018(0x0010) ZeroConstructor
		class FString                                              InstanceType;                                            // 0x0028(0x0010) ZeroConstructor
		struct FGuid                                               SessionId;                                               // 0x0038(0x0010) ZeroConstructor
		float                                                      WorldTimeSeconds;                                        // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2YP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceMessages.EngineServicePing
	 * Size -> 0x0001
	 */
	struct FEngineServicePing
	{
	public:
		unsigned char                                              UnknownData_5MGL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
