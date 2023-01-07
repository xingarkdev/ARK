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
	 * Enum MediaAssets.MediaPlayer.EMediaPlayerStreamModes
	 */
	enum class EMediaPlayerStreamModes : uint8_t
	{
		MASM_FromMemory = 0,
		MASM_FromUrl    = 1,
		MASM_MAX        = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
