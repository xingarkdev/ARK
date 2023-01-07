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
	 * Class UdpMessaging.UdpMessagingSettings
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UUdpMessagingSettings : public UObject
	{
	public:
		bool                                                       EnableTransport;                                         // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D11I[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UnicastEndpoint;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config
		class FString                                              MulticastEndpoint;                                       // 0x0040(0x0010) Edit, ZeroConstructor, Config
		unsigned char                                              MulticastTimeToLive;                                     // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S7E4[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      StaticEndpoints;                                         // 0x0058(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay
		bool                                                       EnableTunnel;                                            // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XFCH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TunnelUnicastEndpoint;                                   // 0x0070(0x0010) Edit, ZeroConstructor, Config
		class FString                                              TunnelMulticastEndpoint;                                 // 0x0080(0x0010) Edit, ZeroConstructor, Config
		TArray<class FString>                                      RemoteTunnelEndpoints;                                   // 0x0090(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
