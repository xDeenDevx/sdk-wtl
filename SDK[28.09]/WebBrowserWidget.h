/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WebBrowserWidget.

/// Class /Script/WebBrowserWidget.WebBrowser
/// Size: 0x0048 (0x000108 - 0x000150)
class UWebBrowser : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnURLChanged;                                               // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnBeforePopup;                                              // 0x0118   (0x0010)  
	FString                                            InitialURL;                                                 // 0x0128   (0x0010)  
	bool                                               bSupportsTransparency;                                      // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0139   (0x0017)  MISSED


	/// Functions
	// Function /Script/WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x1ad0090] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x1ad0090] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadURL
	void LoadURL(FString NewURL);                                                                                            // [0xbaa930] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadString
	void LoadString(FString Contents, FString DummyURL);                                                                     // [0xbaa5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.GetUrl
	FString GetUrl();                                                                                                        // [0xbaa2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.GetTitleText
	FText GetTitleText();                                                                                                    // [0xbaa350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.ExecuteJavascript
	void ExecuteJavascript(FString ScriptText);                                                                              // [0xbaa4e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WebBrowserWidget.WebBrowserAssetManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UWebBrowserAssetManager : public UObject
{ 
public:
	TWeakObjectPtr<UMaterial*>                         DefaultMaterial;                                            // 0x0028   (0x0028)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
};

