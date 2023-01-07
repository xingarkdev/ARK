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
	 * Class OnlineSubsystem.NamedInterfaces
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNamedInterfaces : public UObject
	{
	public:
		TArray<struct FNamedInterface>                             NamedInterfaces;                                         // 0x0028(0x0010) ZeroConstructor
		TArray<struct FNamedInterfaceDef>                          NamedInterfaceDefs;                                      // 0x0038(0x0010) ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
