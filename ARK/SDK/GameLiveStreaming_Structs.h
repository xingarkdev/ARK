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
	 * ScriptStruct GameLiveStreaming.QueryLiveStreamsCallbackProxy.BlueprintLiveStreamInfo
	 * Size -> 0x0030
	 */
	struct FBlueprintLiveStreamInfo
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010) Edit, ZeroConstructor
		class FString                                              StreamName;                                              // 0x0010(0x0010) Edit, ZeroConstructor
		class FString                                              URL;                                                     // 0x0020(0x0010) Edit, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
