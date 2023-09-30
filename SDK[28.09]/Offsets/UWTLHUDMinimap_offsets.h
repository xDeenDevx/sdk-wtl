namespace offsets
{
	namespace UWTLHUDMinimap
	{
			constexpr auto cpMain = 0x268; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto imgAzimuth = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto rbMarker = 0x278; // Size: 8, Type: struct URetainerBox*
			constexpr auto cpMarker = 0x280; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto imgMinimap = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto imgPlayerPointer = 0x290; // Size: 8, Type: struct UImage*
			constexpr auto cpNoSatelliteSignal = 0x298; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto hbBar = 0x2a0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto bSectorPosition = 0x2a8; // Size: 8, Type: struct UBorder*
			constexpr auto tbSectorPosition = 0x2b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto bCurrentLevelTime = 0x2b8; // Size: 8, Type: struct UBorder*
			constexpr auto tbCurrentLevelTime = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto m_MinimapCanvasMarkers = 0x2e8; // Size: 16, Type: struct TArray<struct FWTLMapCanvasMarker>
			constexpr auto DefaultMapItemData = 0x310; // Size: 280, Type: struct FWTLMapItemData
			constexpr auto MinimapMarkerClass = 0x428; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
