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
	 * Enum Slate.ESelectionMode
	 */
	enum class ESelectionMode : uint8_t
	{
		None         = 0,
		Single       = 1,
		SingleToggle = 2,
		Multi        = 3,
		MAX          = 4
	};

	/**
	 * Enum Slate.ETableViewMode
	 */
	enum class ETableViewMode : uint8_t
	{
		List = 0,
		Tile = 1,
		Tree = 2,
		MAX  = 3
	};

	/**
	 * Enum Slate.ESlateCheckBoxState
	 */
	enum class ESlateCheckBoxState : uint8_t
	{
		Unchecked    = 0,
		Checked      = 1,
		Undetermined = 2,
		MAX          = 3
	};

	/**
	 * Enum Slate.EProgressBarFillType
	 */
	enum class EProgressBarFillType : uint8_t
	{
		LeftToRight    = 0,
		RightToLeft    = 1,
		FillFromCenter = 2,
		TopToBottom    = 3,
		BottomToTop    = 4,
		MAX            = 5
	};

	/**
	 * Enum Slate.ETextJustify
	 */
	enum class ETextJustify : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
