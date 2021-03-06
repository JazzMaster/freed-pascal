{ Parsed from Appkit.framework NSSound.h }

{$ifdef TYPES}
{$ifndef NSSOUND_PAS_T}
{$define NSSOUND_PAS_T}

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSSOUND_PAS_R}
{$define NSSOUND_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSSOUND_PAS_F}
{$define NSSOUND_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSSOUND_PAS_S}
{$define NSSOUND_PAS_S}

{ External string constants }
var
  NSSoundPboardType: NSString; cvar; external;

{$endif}
{$endif}

{$ifdef FORWARD}
  NSSoundDelegateProtocol = objcprotocol;
  NSSound = objcclass;
  NSSoundPointer = ^NSSound;
  NSSoundPtr = NSSoundPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSSOUND_PAS_C}
{$define NSSOUND_PAS_C}

{ NSSound }
  NSSound = objcclass external (NSObject)
  private
    _delegate: id;
    _info: id;
    _reserved: array[0..(6)-1] of id;
    _sFlags: NSUInteger;
    
  public
    class function soundNamed(name_: NSString): id; message 'soundNamed:';
    function initWithContentsOfURL_byReference(url: NSURL; byRef: BOOL): id; message 'initWithContentsOfURL:byReference:';
    function initWithContentsOfFile_byReference(path: NSString; byRef: BOOL): id; message 'initWithContentsOfFile:byReference:';
    function initWithData(data: NSData): id; message 'initWithData:';
    function setName(string_: NSString): BOOL; message 'setName:';
    function name: NSString; message 'name';
    class function canInitWithPasteboard(pasteboard: NSPasteboard): BOOL; message 'canInitWithPasteboard:';
    class function soundUnfilteredTypes: NSArray; message 'soundUnfilteredTypes';
    function initWithPasteboard(pasteboard: NSPasteboard): id; message 'initWithPasteboard:';
    procedure writeToPasteboard(pasteboard: NSPasteboard); message 'writeToPasteboard:';
    function play: BOOL; message 'play';
    function pause: BOOL; message 'pause';
    function resume: BOOL; message 'resume';
    function stop: BOOL; message 'stop';
    function isPlaying: BOOL; message 'isPlaying';
    function delegate: NSSoundDelegateProtocol; message 'delegate';
    procedure setDelegate(aDelegate: NSSoundDelegateProtocol); message 'setDelegate:';
    function duration: NSTimeInterval; message 'duration';
    procedure setVolume(volume_: single); message 'setVolume:';
    function volume: single; message 'volume';
    function currentTime: NSTimeInterval; message 'currentTime';
    procedure setCurrentTime(seconds: NSTimeInterval); message 'setCurrentTime:';
    procedure setLoops(val: BOOL); message 'setLoops:';
    function loops: BOOL; message 'loops';
    procedure setPlaybackDeviceIdentifier(deviceUID: NSString); message 'setPlaybackDeviceIdentifier:';
    function playbackDeviceIdentifier: NSString; message 'playbackDeviceIdentifier';
    procedure setChannelMapping(channelMapping_: NSArray); message 'setChannelMapping:';
    function channelMapping: NSArray; message 'channelMapping';
  end;

{ NSDeprecated_NSSoundCategory }
  NSDeprecated_NSSoundCategory = objccategory external name 'NSDeprecated' (NSSound)
    class function soundUnfilteredFileTypes: NSArray; message 'soundUnfilteredFileTypes'; deprecated 'in Mac OS X 10.5 and later';
    class function soundUnfilteredPasteboardTypes: NSArray; message 'soundUnfilteredPasteboardTypes'; deprecated 'in Mac OS X 10.5 and later';
  end;

{ NSBundleSoundExtensionsCategory }
  NSBundleSoundExtensionsCategory = objccategory external (NSBundle)
    function pathForSoundResource(name: NSString): NSString; message 'pathForSoundResource:';
  end;

{$endif}
{$endif}
{$ifdef PROTOCOLS}
{$ifndef NSSOUND_PAS_P}
{$define NSSOUND_PAS_P}
  
{ NSSoundDelegate Protocol }
  NSSoundDelegateProtocol = objcprotocol external name 'NSSoundDelegate'
  optional
    procedure sound_didFinishPlaying(sound: NSSound; aBool: BOOL); message 'sound:didFinishPlaying:';
  end;
{$endif}
{$endif}
