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
	 * Class SlateRemote.SlateRemoteSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USlateRemoteSettings : public UObject
	{
	public:
		bool                                                       EnableRemoteServer;                                      // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UVY[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EditorServerEndpoint;                                    // 0x0030(0x0010) Edit, ZeroConstructor, Config
		class FString                                              GameServerEndpoint;                                      // 0x0040(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
