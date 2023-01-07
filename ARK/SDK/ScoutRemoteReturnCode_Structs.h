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
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum ScoutRemoteReturnCode.ScoutRemoteReturnCode
	 */
	enum class EScoutRemoteReturnCode : uint8_t
	{
		ScoutRemoteReturnCodeNewEnumerator3            = 0,
		ScoutRemoteReturnCodeNewEnumerator0            = 1,
		ScoutRemoteReturnCodeNewEnumerator1            = 2,
		ScoutRemoteReturnCodeNewEnumerator2            = 3,
		ScoutRemoteReturnCodeNewEnumerator4            = 4,
		ScoutRemoteReturnCodeScoutRemoteReturnCode_MAX = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
