﻿#pragma once

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
	 * Class SlateCore.FontProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFontProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleContainerBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleContainerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_TIAL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleAsset
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleAsset : public UObject
	{
	public:
		class USlateWidgetStyleContainerBase*                      CustomStyle;                                             // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
