namespace offsets
{
	namespace UWTLOptionsAudio
	{
			constexpr auto cbsAudioDrivers = 0x288; // Size: 8, Type: struct UWTLCommonComboBoxString*
			constexpr auto cbsSpeakerMode = 0x290; // Size: 8, Type: struct UWTLCommonComboBoxString*
			constexpr auto psAudioQualityLevel = 0x298; // Size: 8, Type: struct UWTLOptionsParameterSwitcher*
			constexpr auto psMasterVolume = 0x2a0; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto psMusicVolume = 0x2a8; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto psEffectsVolume = 0x2b0; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto psCharacterVoiceVolume = 0x2b8; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto psSpeechVolume = 0x2c0; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto psUIVolume = 0x2c8; // Size: 8, Type: struct UWTLOptionsParameterSliderPercent*
			constexpr auto cbVOIP = 0x2d0; // Size: 8, Type: struct UWTLCommonCheckBox*
			constexpr auto wsRecordDevices = 0x2d8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto cbsRecordDevices = 0x2e0; // Size: 8, Type: struct UWTLCommonComboBoxString*
			constexpr auto cpMicCheck = 0x2e8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto ucBtnMicCheck = 0x2f0; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto cpMicLoudness = 0x2f8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto pbMicLoudness = 0x300; // Size: 8, Type: struct UProgressBar*
	}
} 
