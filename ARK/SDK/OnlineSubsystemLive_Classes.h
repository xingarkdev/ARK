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
	 * Class OnlineSubsystemLive.LiveNetDriver
	 * Size -> 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
	 */
	class ULiveNetDriver : public UIpNetDriver
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
