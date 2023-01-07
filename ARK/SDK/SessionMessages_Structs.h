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
	 * ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLogUnsubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogUnsubscribe
	{
	public:
		unsigned char                                              UnknownData_8HK6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLogSubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogSubscribe
	{
	public:
		unsigned char                                              UnknownData_96E8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLog
	 * Size -> 0x0038
	 */
	struct FSessionServiceLog
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              Data;                                                    // 0x0008(0x0010) ZeroConstructor
		struct FGuid                                               InstanceId;                                              // 0x0018(0x0010) ZeroConstructor
		double                                                     TimeSeconds;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              Verbosity;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F5WW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceMessages.SessionServicePong
	 * Size -> 0x0090
	 */
	struct FSessionServicePong
	{
	public:
		class FString                                              BuildDate;                                               // 0x0000(0x0010) ZeroConstructor
		class FString                                              DeviceName;                                              // 0x0010(0x0010) ZeroConstructor
		struct FGuid                                               InstanceId;                                              // 0x0020(0x0010) ZeroConstructor
		class FString                                              InstanceName;                                            // 0x0030(0x0010) ZeroConstructor
		bool                                                       IsConsoleBuild;                                          // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9KTB[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlatformName;                                            // 0x0048(0x0010) ZeroConstructor
		struct FGuid                                               SessionId;                                               // 0x0058(0x0010) ZeroConstructor
		class FString                                              SessionName;                                             // 0x0068(0x0010) ZeroConstructor
		class FString                                              SessionOwner;                                            // 0x0078(0x0010) ZeroConstructor
		bool                                                       Standalone;                                              // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U8BW[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceMessages.SessionServicePing
	 * Size -> 0x0001
	 */
	struct FSessionServicePing
	{
	public:
		unsigned char                                              UnknownData_RB8B[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
