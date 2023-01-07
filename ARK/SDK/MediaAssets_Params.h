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
	 * Function MediaAssets.MediaPlayer.SupportsSeeking
	 */
	struct UMediaPlayer_SupportsSeeking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SupportsScrubbing
	 */
	struct UMediaPlayer_SupportsScrubbing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SupportsRate
	 */
	struct UMediaPlayer_SupportsRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Unthinned;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetRate
	 */
	struct UMediaPlayer_SetRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetMute
	 */
	struct UMediaPlayer_SetMute_Params
	{
	public:
		bool                                                       bMute;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetLooping
	 */
	struct UMediaPlayer_SetLooping_Params
	{
	public:
		bool                                                       InLooping;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Seek
	 */
	struct UMediaPlayer_Seek_Params
	{
	public:
		struct FTimespan                                           InTime;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Rewind
	 */
	struct UMediaPlayer_Rewind_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Play
	 */
	struct UMediaPlayer_Play_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Pause
	 */
	struct UMediaPlayer_Pause_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenUrl
	 */
	struct UMediaPlayer_OpenUrl_Params
	{
	public:
		class FString                                              NewUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OnMediaPlayerMediaOpened__DelegateSignature
	 */
	struct UMediaPlayer_OnMediaPlayerMediaOpened__DelegateSignature_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OnMediaPlayerMediaClosed__DelegateSignature
	 */
	struct UMediaPlayer_OnMediaPlayerMediaClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MediaAssets.MediaPlayer.IsStopped
	 */
	struct UMediaPlayer_IsStopped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsPlaying
	 */
	struct UMediaPlayer_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsPaused
	 */
	struct UMediaPlayer_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsLooping
	 */
	struct UMediaPlayer_IsLooping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetUrl
	 */
	struct UMediaPlayer_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTime
	 */
	struct UMediaPlayer_GetTime_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetRate
	 */
	struct UMediaPlayer_GetRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetMute
	 */
	struct UMediaPlayer_GetMute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetDuration
	 */
	struct UMediaPlayer_GetDuration_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.CanPlay
	 */
	struct UMediaPlayer_CanPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.CanPause
	 */
	struct UMediaPlayer_CanPause_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaSoundWave.SetMediaPlayer
	 */
	struct UMediaSoundWave_SetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        InMediaPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaTexture.SetMediaPlayer
	 */
	struct UMediaTexture_SetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        InMediaPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
