// ============================================================
// Image: GUPS.AntiCheat.dll
// ============================================================

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
public:

    // Methods
    static MonoScriptData Get();  // RVA: 0x2110A90
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<GUPS.AntiCheat.Core.Punisher.IPunisher> <>9__12_0;
    // static System.Comparison<GUPS.AntiCheat.Core.Punisher.IPunisher> <>9__20_0;


    // Methods
    static void .cctor();  // RVA: 0x2110A20
    void .ctor();  // RVA: 0x427B90
    void <OnNext>b__12_0(IPunisher* p);  // RVA: 0x21108F0
    int32_t <Awake>b__20_0(IPunisher* a, IPunisher* b);  // RVA: 0x2110870
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t _ThreatLevel; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x427B90
    bool <GetPunisher>b__0(IPunisher* p);  // RVA: 0x2110940
};

namespace GUPS.AntiCheat
{

    // Namespace: GUPS.AntiCheat
    class AntiCheatMonitor : public Singleton`1
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        ESensitiveLevel sensitiveLevel; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float threatLevel; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Collections.Generic.List<GUPS.AntiCheat.Core.Detector.IDetector> detectors; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<GUPS.AntiCheat.Core.Punisher.IPunisher> punishers; // 0x0030
    
        // Methods
        bool get_IsPersistent();  // RVA: 0x53A800
        ESensitiveLevel get_SensitiveLevel();  // RVA: 0x4208A0
        float get_ThreatLevel();  // RVA: 0x1F91950
        void RegisterDetector(IDetector* _Detector);  // RVA: 0x20F9EC0
        TDetector GetDetector();  // RVA: 0x3506D0
        void RemoveDetector(IDetector* _Detector);  // RVA: 0x20FA100
        void OnNext(IDetectorStatus* value);  // RVA: 0x20F9BD0
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        void Dispose();  // RVA: 0x4160A0
        void RegisterPunisher(IPunisher* _Punisher);  // RVA: 0x20FA020
        System.Collections.Generic.List<GUPS.AntiCheat.Core.Punisher.IPunisher> GetPunisher(uint32_t _ThreatLevel);  // RVA: 0x20F9AF0
        void RemovePunisher(IPunisher* _Punisher);  // RVA: 0x20FA180
        void Awake();  // RVA: 0x20F96E0
        void FixedUpdate();  // RVA: 0x20F9AA0
        void .ctor();  // RVA: 0x20FA200
    };

    // Namespace: GUPS.AntiCheat
    struct ESensitiveLevel
    {
    public:
        // Static fields
        // static ESensitiveLevel NOT_SENSITIVE;
        // static ESensitiveLevel LESS_SENSITIVE;
        // static ESensitiveLevel MODERATE;
        // static ESensitiveLevel SENSITIVE;
        // static ESensitiveLevel VERY_SENSITIVE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace GUPS.AntiCheat

namespace GUPS.AntiCheat.Singleton
{

    // Namespace: GUPS.AntiCheat.Singleton
    class Singleton`1 : public MonoBehaviour
    {
    public:
        // Static fields
        // static T instance;
        // static Il2CppObject* lockHandle;
        // static bool isQuitting;
    
    
        // Methods
        bool get_IsPersistent();  // RVA: 0x26F7B0
        static T get_Instance();  // RVA: 0x3506D0
        static bool get_Exists();  // RVA: 0x26F7E0
        void Awake();  // RVA: 0x26DD20
        static void Create();  // RVA: 0x26DD40
        void OnApplicationQuit();  // RVA: 0x26DD20
        void .ctor();  // RVA: 0x26DD20
        static void .cctor();  // RVA: 0x26DD40
    };

} // namespace GUPS.AntiCheat.Singleton

namespace GUPS.AntiCheat.Settings
{

    // Namespace: GUPS.AntiCheat.Settings
    class GlobalSettings : public ScriptableObject
    {
    public:
        // Static fields
        // static Il2CppString* RELATIVE_SETTINGS_PATH;
        // static Il2CppString* SETTINGS_PATH;
        // static GlobalSettings* instance;
        // static IRandomProvider* <RandomProvider>k__BackingField;
    
        uint8_t pad_0000[0x18]; // 0x0000
        bool Android_Enable_Development; // 0x0018
        bool Android_AllowAllAppStores; // 0x0019
        uint8_t pad_001A[0x6]; // 0x001A
        System.Collections.Generic.List<GUPS.AntiCheat.Monitor.Android.EAppStore> Android_AllowedAppStores; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<System.String> Android_AllowedCustomAppStores; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool Android_VerifyAppHash; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        EHashAlgorithm Android_AppHashAlgorithm; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Il2CppString* Android_AppHashEndpoint; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool Android_VerifyAppFingerprint; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        EHashAlgorithm Android_AppFingerprintAlgorithm; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Il2CppString* Android_AppFingerprint; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool Android_UseWhitelistingForLibraries; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<System.String> Android_WhitelistedLibraries; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Collections.Generic.List<System.String> Android_BlacklistedLibraries; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool Android_UseBlacklistingforApplication; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Collections.Generic.List<System.String> Android_BlacklistedApplications; // 0x0070
    
        // Methods
        static GlobalSettings* get_Instance();  // RVA: 0x20FCA10
        static GlobalSettings* LoadAsset();  // RVA: 0x20FC7A0
        static IRandomProvider* get_RandomProvider();  // RVA: 0x20FCB40
        void .ctor();  // RVA: 0x20FC870
        static void .cctor();  // RVA: 0x20FC7F0
    };

} // namespace GUPS.AntiCheat.Settings

namespace GUPS.AntiCheat.Punisher
{

    // Namespace: GUPS.AntiCheat.Punisher
    class ExitGamePunisher : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool isActive; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t threatRating; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        bool <HasPunished>k__BackingField; // 0x0028
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FB520
        bool get_IsSupported();  // RVA: 0x53A800
        bool get_IsActive();  // RVA: 0x4208A0
        void set_IsActive(bool value);  // RVA: 0x87AAB0
        uint32_t get_ThreatRating();  // RVA: 0x7FBC10
        bool get_PunishOnce();  // RVA: 0x53A800
        bool get_HasPunished();  // RVA: 0x77D260
        void set_HasPunished(bool value);  // RVA: 0x77D1C0
        void Punish();  // RVA: 0x20FB4B0
        void .ctor();  // RVA: 0x20FB500
    };

    // Namespace: GUPS.AntiCheat.Punisher
    class FlipCameraPunisher : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool isActive; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t threatRating; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        bool isFlipped; // 0x0028
        bool flipHorizontal; // 0x0029
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FB6D0
        bool get_IsSupported();  // RVA: 0x53A800
        bool get_IsActive();  // RVA: 0x4208A0
        void set_IsActive(bool value);  // RVA: 0x87AAB0
        uint32_t get_ThreatRating();  // RVA: 0x7FBC10
        bool get_PunishOnce();  // RVA: 0x53A800
        bool get_HasPunished();  // RVA: 0x77D260
        void Punish();  // RVA: 0x20FB550
        void .ctor();  // RVA: 0x20FB6B0
    };

    // Namespace: GUPS.AntiCheat.Punisher
    class ReduceFpsPunisher : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool isActive; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t threatRating; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t punishFrameRate; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool <HasPunished>k__BackingField; // 0x002C
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x210FB00
        bool get_IsSupported();  // RVA: 0x53A800
        bool get_IsActive();  // RVA: 0x4208A0
        void set_IsActive(bool value);  // RVA: 0x87AAB0
        uint32_t get_ThreatRating();  // RVA: 0x7FBC10
        bool get_PunishOnce();  // RVA: 0x53A800
        bool get_HasPunished();  // RVA: 0x9AD9F0
        void set_HasPunished(bool value);  // RVA: 0x210FB30
        void Punish();  // RVA: 0x210FA80
        void .ctor();  // RVA: 0x210FAE0
    };

} // namespace GUPS.AntiCheat.Punisher

namespace GUPS.AntiCheat.Protected
{

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedBool
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t obfuscatedValue; // 0x0012
        uint8_t pad_0013[0x1]; // 0x0013
        int32_t secret; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        bool fakeValue; // 0x0018
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x20FD130
        void OnAfterDeserialize();  // RVA: 0x20FD0F0
        void .ctor(bool _Value);  // RVA: 0x20FD1B0
        bool get_Value();  // RVA: 0x20FD290
        void set_Value(bool value);  // RVA: 0x20FD0E0
        void Obfuscate(bool _Value);  // RVA: 0x20FD0E0
        bool UnObfuscate();  // RVA: 0x20FD1A0
        void Obfuscate();  // RVA: 0x20FCFF0
        bool CheckIntegrity();  // RVA: 0x20FCE70
        void Dispose();  // RVA: 0x20FCEB0
        int32_t GetHashCode();  // RVA: 0x20FCFB0
        Il2CppString* ToString();  // RVA: 0x20FD160
        void Serialize(uint8_t _ObfuscatedValue, int32_t _Secret);  // RVA: 0x20FD150
        void Deserialize(uint8_t _ObfuscatedValue, int32_t _Secret);  // RVA: 0x20FCE90
        static ProtectedBool op_Implicit(bool _Value);  // RVA: 0x20FD3F0
        static bool op_Implicit(ProtectedBool _Value);  // RVA: 0x20FD3E0
        static bool op_Equality(ProtectedBool v1, ProtectedBool v2);  // RVA: 0x20FD3B0
        static bool op_Inequality(ProtectedBool v1, ProtectedBool v2);  // RVA: 0x20FD420
        bool Equals(Il2CppObject* obj);  // RVA: 0x20FCEC0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedDateTime
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        ProtectedInt64 obfuscatedInt64; // 0x0018
        uint8_t pad_0019[0x1F]; // 0x0019
        int64_t fakeValue; // 0x0038
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x20FD780
        void OnAfterDeserialize();  // RVA: 0x20FD710
        void .ctor(DateTime _Value);  // RVA: 0x20FD880
        DateTime get_Value();  // RVA: 0x20FD940
        void set_Value(DateTime value);  // RVA: 0x20FDBB0
        void Obfuscate(DateTime _Value);  // RVA: 0x20FD6A0
        DateTime UnObfuscate();  // RVA: 0x20FD840
        void Obfuscate();  // RVA: 0x20FD690
        bool CheckIntegrity();  // RVA: 0x20FD450
        void Dispose();  // RVA: 0x20FD4F0
        Il2CppString* ToString();  // RVA: 0x20FD7E0
        int32_t GetHashCode();  // RVA: 0x20FD630
        static ProtectedDateTime op_Implicit(DateTime _Value);  // RVA: 0x20FDAF0
        static DateTime op_Implicit(ProtectedDateTime _Value);  // RVA: 0x20FDB20
        static bool op_Equality(ProtectedDateTime v1, ProtectedDateTime v2);  // RVA: 0x20FDA70
        static bool op_Inequality(ProtectedDateTime v1, ProtectedDateTime v2);  // RVA: 0x20FDB30
        bool Equals(Il2CppObject* obj);  // RVA: 0x20FD500
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedDecimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        Int32[][] obfuscatedValues; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        double fakeValue; // 0x0020
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x20FE0F0
        void OnAfterDeserialize();  // RVA: 0x20FDFF0
        void .ctor(Decimal _Value);  // RVA: 0x20FE210
        Decimal get_Value();  // RVA: 0x20FE2A0
        void set_Value(Decimal value);  // RVA: 0x20FDEB0
        void Obfuscate(Decimal _Value);  // RVA: 0x20FDEB0
        Decimal UnObfuscate();  // RVA: 0x20FE1E0
        void Obfuscate();  // RVA: 0x20FDF40
        bool CheckIntegrity();  // RVA: 0x20FDC20
        void Dispose();  // RVA: 0x20FDCB0
        Il2CppString* ToString();  // RVA: 0x20FE170
        int32_t GetHashCode();  // RVA: 0x20FDE40
        static ProtectedDecimal op_Implicit(Decimal _Value);  // RVA: 0x20FEBC0
        static Decimal op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FE990
        static ProtectedDouble op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FE720
        static ProtectedDecimal op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FE9C0
        static ProtectedInt16 op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FE7C0
        static ProtectedDecimal op_Implicit(ProtectedInt16 _Value);  // RVA: 0x20FED60
        static ProtectedInt32 op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FEE60
        static ProtectedDecimal op_Implicit(ProtectedInt32 _Value);  // RVA: 0x20FEC60
        static ProtectedInt64 op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FE850
        static ProtectedDecimal op_Implicit(ProtectedInt64 _Value);  // RVA: 0x20FEAC0
        static ProtectedFloat op_Implicit(ProtectedDecimal _Value);  // RVA: 0x20FE8F0
        static ProtectedDecimal op_Implicit(ProtectedFloat _Value);  // RVA: 0x20FE620
        static bool op_Equality(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FE410
        static bool op_Inequality(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FEF00
        bool Equals(Il2CppObject* obj);  // RVA: 0x20FDCD0
        static bool op_LessThan(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FF060
        static bool op_LessThanOrEqual(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FEFB0
        static bool op_GreaterThan(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FE570
        static bool op_GreaterThanOrEqual(ProtectedDecimal v1, ProtectedDecimal v2);  // RVA: 0x20FE4C0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedDouble
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        ULongDouble obfuscatedValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        ULongDouble manager; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint64_t secret; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        double fakeValue; // 0x0030
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x20FF410
        void OnAfterDeserialize();  // RVA: 0x20FF3B0
        void .ctor(double value);  // RVA: 0x20FF480
        double get_Value();  // RVA: 0x20FF570
        void set_Value(double value);  // RVA: 0x20FF390
        void Obfuscate(double _Value);  // RVA: 0x20FF390
        double UnObfuscate();  // RVA: 0x20FF460
        void Obfuscate();  // RVA: 0x20FF2A0
        bool CheckIntegrity();  // RVA: 0x20FF110
        void Dispose();  // RVA: 0x20FF140
        Il2CppString* ToString();  // RVA: 0x20FF430
        int32_t GetHashCode();  // RVA: 0x20FF260
        static ProtectedDouble op_Implicit(double _Value);  // RVA: 0x20FF9F0
        static double op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FF850
        static ProtectedInt16 op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FF860
        static ProtectedDouble op_Implicit(ProtectedInt16 _Value);  // RVA: 0x20FFA70
        static ProtectedInt32 op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FF9B0
        static ProtectedDouble op_Implicit(ProtectedInt32 _Value);  // RVA: 0x20FF910
        static ProtectedInt64 op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FF890
        static ProtectedDouble op_Implicit(ProtectedInt64 _Value);  // RVA: 0x20FF960
        static ProtectedFloat op_Implicit(ProtectedDouble _Value);  // RVA: 0x20FF8D0
        static ProtectedDouble op_Implicit(ProtectedFloat _Value);  // RVA: 0x20FFA20
        static ProtectedDouble op_Addition(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FF6A0
        static ProtectedDouble op_Subtraction(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FFC00
        static ProtectedDouble op_Multiply(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FFB90
        static ProtectedDouble op_Division(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FF710
        static bool op_Equality(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FF780
        static bool op_Inequality(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FFAC0
        bool Equals(Il2CppObject* obj);  // RVA: 0x20FF150
        static bool op_LessThan(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FFB50
        static bool op_LessThanOrEqual(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FFB10
        static bool op_GreaterThan(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FF810
        static bool op_GreaterThanOrEqual(ProtectedDouble v1, ProtectedDouble v2);  // RVA: 0x20FF7D0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedFloat
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        UIntFloat obfuscatedValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        UIntFloat manager; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t secret; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float fakeValue; // 0x0020
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x21043B0
        void OnAfterDeserialize();  // RVA: 0x2104370
        void .ctor(float value);  // RVA: 0x2104420
        float get_Value();  // RVA: 0x2104510
        void set_Value(float value);  // RVA: 0x2104350
        void Obfuscate(float _Value);  // RVA: 0x2104350
        float UnObfuscate();  // RVA: 0x2104410
        void Obfuscate();  // RVA: 0x2104260
        bool CheckIntegrity();  // RVA: 0x2104110
        void Dispose();  // RVA: 0x2104150
        Il2CppString* ToString();  // RVA: 0x21043E0
        int32_t GetHashCode();  // RVA: 0x2104250
        void Serialize(uint32_t _ObfuscatedValue, uint32_t _Secret);  // RVA: 0x21043D0
        void Deserialize(uint32_t _ObfuscatedValue, uint32_t _Secret);  // RVA: 0x2104130
        static ProtectedFloat op_Implicit(float _Value);  // RVA: 0x21047C0
        static float op_Implicit(ProtectedFloat _Value);  // RVA: 0x21047F0
        static ProtectedInt16 op_Implicit(ProtectedFloat _Value);  // RVA: 0x2104800
        static ProtectedFloat op_Implicit(ProtectedInt16 _Value);  // RVA: 0x21048F0
        static ProtectedInt32 op_Implicit(ProtectedFloat _Value);  // RVA: 0x2104930
        static ProtectedFloat op_Implicit(ProtectedInt32 _Value);  // RVA: 0x2104870
        static ProtectedInt64 op_Implicit(ProtectedFloat _Value);  // RVA: 0x2104830
        static ProtectedFloat op_Implicit(ProtectedInt64 _Value);  // RVA: 0x21048B0
        static ProtectedFloat op_Addition(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104630
        static ProtectedFloat op_Subtraction(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104AA0
        static ProtectedFloat op_Multiply(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104A40
        static ProtectedFloat op_Division(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104690
        static bool op_Equality(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x21046F0
        static bool op_Inequality(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104970
        bool Equals(Il2CppObject* obj);  // RVA: 0x2104160
        static bool op_LessThan(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104A00
        static bool op_LessThanOrEqual(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x21049C0
        static bool op_GreaterThan(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104780
        static bool op_GreaterThanOrEqual(ProtectedFloat v1, ProtectedFloat v2);  // RVA: 0x2104740
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedInt16
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        int16_t obfuscatedValue; // 0x0012
        uint8_t pad_0013[0x1]; // 0x0013
        int16_t secret; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        int16_t fakeValue; // 0x0016
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x2104D50
        void OnAfterDeserialize();  // RVA: 0x2104D10
        void .ctor(int16_t _Value);  // RVA: 0x2104DB0
        int16_t get_Value();  // RVA: 0x2104E90
        void set_Value(int16_t value);  // RVA: 0x2104D00
        void Obfuscate(int16_t _Value);  // RVA: 0x2104D00
        int16_t UnObfuscate();  // RVA: 0x2104DA0
        void Obfuscate();  // RVA: 0x2104C20
        bool CheckIntegrity();  // RVA: 0x2104B00
        void Dispose();  // RVA: 0x2104B20
        Il2CppString* ToString();  // RVA: 0x2104D70
        int32_t GetHashCode();  // RVA: 0x2104C00
        static ProtectedInt16 op_Implicit(int16_t _Value);  // RVA: 0x2105100
        static int16_t op_Implicit(ProtectedInt16 _Value);  // RVA: 0x2105130
        static ProtectedInt16 op_Addition(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2104F90
        static ProtectedInt16 op_Subtraction(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105270
        static ProtectedInt16 op_Multiply(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105210
        static ProtectedInt16 op_Division(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2104FE0
        static bool op_Equality(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105040
        static bool op_Inequality(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105150
        bool Equals(Il2CppObject* obj);  // RVA: 0x2104B30
        static bool op_LessThan(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x21051D0
        static bool op_LessThanOrEqual(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105190
        static bool op_GreaterThan(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x21050C0
        static bool op_GreaterThanOrEqual(ProtectedInt16 v1, ProtectedInt16 v2);  // RVA: 0x2105080
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedInt32
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        int32_t obfuscatedValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t secret; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t fakeValue; // 0x001C
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x2105500
        void OnAfterDeserialize();  // RVA: 0x21054D0
        void .ctor(int32_t _Value);  // RVA: 0x2105560
        int32_t get_Value();  // RVA: 0x2105640
        void set_Value(int32_t value);  // RVA: 0x21054C0
        void Obfuscate(int32_t _Value);  // RVA: 0x21054C0
        int32_t UnObfuscate();  // RVA: 0x2105550
        void Obfuscate();  // RVA: 0x21053F0
        bool CheckIntegrity();  // RVA: 0x21052D0
        void Dispose();  // RVA: 0x2105300
        Il2CppString* ToString();  // RVA: 0x2105530
        int32_t GetHashCode();  // RVA: 0x21053E0
        void Serialize(int32_t _ObfuscatedValue, int32_t _Secret);  // RVA: 0x2105520
        void Deserialize(int32_t _ObfuscatedValue, int32_t _Secret);  // RVA: 0x21052F0
        static ProtectedInt32 op_Implicit(int32_t _Value);  // RVA: 0x21058A0
        static int32_t op_Implicit(ProtectedInt32 _Value);  // RVA: 0x2105890
        static ProtectedInt32 op_Addition(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105740
        static ProtectedInt32 op_Subtraction(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x21059B0
        static ProtectedInt32 op_Multiply(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105950
        static ProtectedInt32 op_Division(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x21057A0
        static bool op_Equality(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105800
        static bool op_Inequality(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x21058C0
        bool Equals(Il2CppObject* obj);  // RVA: 0x2105310
        static bool op_LessThan(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105920
        static bool op_LessThanOrEqual(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x21058F0
        static bool op_GreaterThan(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105860
        static bool op_GreaterThanOrEqual(ProtectedInt32 v1, ProtectedInt32 v2);  // RVA: 0x2105830
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedInt64
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        int64_t obfuscatedValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t secret; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x2105C50
        void OnAfterDeserialize();  // RVA: 0x2105C10
        void .ctor(int64_t _Value);  // RVA: 0x2105CB0
        int64_t get_Value();  // RVA: 0x2105DA0
        void set_Value(int64_t value);  // RVA: 0x2105C00
        void Obfuscate(int64_t _Value);  // RVA: 0x2105C00
        int64_t UnObfuscate();  // RVA: 0x2105CA0
        void Obfuscate();  // RVA: 0x2105B20
        bool CheckIntegrity();  // RVA: 0x2105A10
        void Dispose();  // RVA: 0x2105A30
        Il2CppString* ToString();  // RVA: 0x2105C70
        int32_t GetHashCode();  // RVA: 0x2105B10
        static ProtectedInt64 op_Implicit(int64_t _Value);  // RVA: 0x2106040
        static int64_t op_Implicit(ProtectedInt64 _Value);  // RVA: 0x2106070
        static ProtectedInt64 op_Addition(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2105EB0
        static ProtectedInt64 op_Subtraction(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x21061A0
        static ProtectedInt64 op_Multiply(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2106140
        static ProtectedInt64 op_Division(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2105F10
        static bool op_Equality(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2105F80
        static bool op_Inequality(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2106080
        bool Equals(Il2CppObject* obj);  // RVA: 0x2105A40
        static bool op_LessThan(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2106100
        static bool op_LessThanOrEqual(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x21060C0
        static bool op_GreaterThan(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2106000
        static bool op_GreaterThanOrEqual(ProtectedInt64 v1, ProtectedInt64 v2);  // RVA: 0x2105FC0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedQuaternion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        UIntFloat obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        UIntFloat obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        UIntFloat obfuscatedValueZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        UIntFloat obfuscatedValueW; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        UIntFloat manager; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        uint32_t secret; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Quaternion fakeValue; // 0x002C
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x21080A0
        void OnAfterDeserialize();  // RVA: 0x2107FD0
        void .ctor(Quaternion _Value);  // RVA: 0x2108150
        Quaternion get_Value();  // RVA: 0x2108210
        void set_Value(Quaternion value);  // RVA: 0x2108520
        void Obfuscate(Quaternion _Value);  // RVA: 0x2107F70
        Quaternion UnObfuscate();  // RVA: 0x2108110
        void Obfuscate();  // RVA: 0x2107DE0
        bool CheckIntegrity();  // RVA: 0x2107AB0
        void Dispose();  // RVA: 0x2107B30
        Il2CppString* ToString();  // RVA: 0x21080D0
        int32_t GetHashCode();  // RVA: 0x2107D50
        static ProtectedQuaternion op_Implicit(Quaternion _Value);  // RVA: 0x2108450
        static Quaternion op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x2108420
        static bool op_Equality(ProtectedQuaternion v1, ProtectedQuaternion v2);  // RVA: 0x2108390
        static bool op_Inequality(ProtectedQuaternion v1, ProtectedQuaternion v2);  // RVA: 0x2108490
        bool Equals(Il2CppObject* obj);  // RVA: 0x2107B40
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedString
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        Il2CppString* obfuscatedValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t secret; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* fakeValue; // 0x0028
    
        // Methods
        static Il2CppString* EncryptToUTF8(Il2CppString* _String, int32_t _Secret);  // RVA: 0x2108930
        static Il2CppString* DecryptFromUTF8(Il2CppString* _String, int32_t _Secret);  // RVA: 0x21086D0
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x2108EC0
        void OnAfterDeserialize();  // RVA: 0x2108E70
        void .ctor(Il2CppString* _Value);  // RVA: 0x2108F50
        Il2CppString* get_Value();  // RVA: 0x2109050
        void set_Value(Il2CppString* value);  // RVA: 0x2108D20
        void Obfuscate(Il2CppString* _Value);  // RVA: 0x2108D20
        Il2CppString* UnObfuscate();  // RVA: 0x2108F40
        void Obfuscate();  // RVA: 0x2108D70
        bool CheckIntegrity();  // RVA: 0x2108690
        void Dispose();  // RVA: 0x2108910
        Il2CppString* ToString();  // RVA: 0x2108F30
        int32_t GetHashCode();  // RVA: 0x2108CD0
        void Serialize(Il2CppString* _ObfuscatedValue, int32_t _Secret);  // RVA: 0x2108EF0
        void Deserialize(Il2CppString* _ObfuscatedValue, int32_t _Secret);  // RVA: 0x21088C0
        static ProtectedString op_Implicit(Il2CppString* _Value);  // RVA: 0x2109230
        static Il2CppString* op_Implicit(ProtectedString _Value);  // RVA: 0x2109260
        static ProtectedString op_Addition(ProtectedString v1, ProtectedString v2);  // RVA: 0x2109180
        static bool op_Equality(ProtectedString v1, ProtectedString v2);  // RVA: 0x21091F0
        static bool op_Inequality(ProtectedString v1, ProtectedString v2);  // RVA: 0x2109270
        bool Equals(Il2CppObject* obj);  // RVA: 0x2108BC0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedUInt16
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint16_t obfuscatedValue; // 0x0012
        uint8_t pad_0013[0x1]; // 0x0013
        uint16_t secret; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        uint16_t fakeValue; // 0x0016
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x2109EF0
        void OnAfterDeserialize();  // RVA: 0x2109EB0
        void .ctor(uint16_t _Value);  // RVA: 0x2109F40
        uint16_t get_Value();  // RVA: 0x210A020
        void set_Value(uint16_t value);  // RVA: 0x2104D00
        void Obfuscate(uint16_t _Value);  // RVA: 0x2104D00
        uint16_t UnObfuscate();  // RVA: 0x2104DA0
        void Obfuscate();  // RVA: 0x2109DD0
        bool CheckIntegrity();  // RVA: 0x2104B00
        void Dispose();  // RVA: 0x2104B20
        Il2CppString* ToString();  // RVA: 0x2109F10
        int32_t GetHashCode();  // RVA: 0x2109DB0
        static ProtectedUInt16 op_Implicit(uint16_t _Value);  // RVA: 0x210A2B0
        static uint16_t op_Implicit(ProtectedUInt16 _Value);  // RVA: 0x210A290
        static ProtectedUInt16 op_Addition(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A120
        static ProtectedUInt16 op_Subtraction(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A400
        static ProtectedUInt16 op_Multiply(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A3A0
        static ProtectedUInt16 op_Division(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A170
        static bool op_Equality(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A1D0
        static bool op_Inequality(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A2E0
        bool Equals(Il2CppObject* obj);  // RVA: 0x2109CE0
        static bool op_LessThan(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A360
        static bool op_LessThanOrEqual(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A320
        static bool op_GreaterThan(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A250
        static bool op_GreaterThanOrEqual(ProtectedUInt16 v1, ProtectedUInt16 v2);  // RVA: 0x210A210
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedUInt32
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        uint32_t obfuscatedValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t secret; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t fakeValue; // 0x001C
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210A640
        void OnAfterDeserialize();  // RVA: 0x210A610
        void .ctor(uint32_t _Value);  // RVA: 0x210A680
        uint32_t get_Value();  // RVA: 0x210A760
        void set_Value(uint32_t value);  // RVA: 0x21054C0
        void Obfuscate(uint32_t _Value);  // RVA: 0x21054C0
        uint32_t UnObfuscate();  // RVA: 0x2105550
        void Obfuscate();  // RVA: 0x210A540
        bool CheckIntegrity();  // RVA: 0x21052D0
        void Dispose();  // RVA: 0x2105300
        Il2CppString* ToString();  // RVA: 0x210A660
        int32_t GetHashCode();  // RVA: 0x210A530
        static ProtectedUInt32 op_Implicit(uint32_t _Value);  // RVA: 0x210A9C0
        static uint32_t op_Implicit(ProtectedUInt32 _Value);  // RVA: 0x210A9B0
        static ProtectedUInt32 op_Addition(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A860
        static ProtectedUInt32 op_Subtraction(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210AAD0
        static ProtectedUInt32 op_Multiply(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210AA70
        static ProtectedUInt32 op_Division(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A8C0
        static bool op_Equality(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A920
        static bool op_Inequality(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A9E0
        bool Equals(Il2CppObject* obj);  // RVA: 0x210A460
        static bool op_LessThan(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210AA40
        static bool op_LessThanOrEqual(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210AA10
        static bool op_GreaterThan(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A980
        static bool op_GreaterThanOrEqual(ProtectedUInt32 v1, ProtectedUInt32 v2);  // RVA: 0x210A950
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedUInt64
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        uint64_t obfuscatedValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint64_t secret; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint64_t fakeValue; // 0x0028
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210AD30
        void OnAfterDeserialize();  // RVA: 0x210ACF0
        void .ctor(uint64_t _Value);  // RVA: 0x210AD80
        uint64_t get_Value();  // RVA: 0x210AE70
        void set_Value(uint64_t value);  // RVA: 0x2105C00
        void Obfuscate(uint64_t _Value);  // RVA: 0x2105C00
        uint64_t UnObfuscate();  // RVA: 0x2105CA0
        void Obfuscate();  // RVA: 0x210AC10
        bool CheckIntegrity();  // RVA: 0x2105A10
        void Dispose();  // RVA: 0x2105A30
        Il2CppString* ToString();  // RVA: 0x210AD50
        int32_t GetHashCode();  // RVA: 0x210AC00
        static ProtectedUInt64 op_Implicit(uint64_t _Value);  // RVA: 0x210B120
        static uint64_t op_Implicit(ProtectedUInt64 _Value);  // RVA: 0x210B110
        static ProtectedUInt64 op_Addition(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210AF80
        static ProtectedUInt64 op_Subtraction(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B270
        static ProtectedUInt64 op_Multiply(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B210
        static ProtectedUInt64 op_Division(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210AFE0
        static bool op_Equality(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B050
        static bool op_Inequality(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B150
        bool Equals(Il2CppObject* obj);  // RVA: 0x210AB30
        static bool op_LessThan(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B1D0
        static bool op_LessThanOrEqual(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B190
        static bool op_GreaterThan(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B0D0
        static bool op_GreaterThanOrEqual(ProtectedUInt64 v1, ProtectedUInt64 v2);  // RVA: 0x210B090
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector2
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        UIntFloat obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        UIntFloat obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        UIntFloat manager; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint32_t secret; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector2 fakeValue; // 0x0024
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210C100
        void OnAfterDeserialize();  // RVA: 0x210C060
        void .ctor(Vector2 _Value);  // RVA: 0x210C290
        Vector2 get_Value();  // RVA: 0x210C320
        void set_Value(Vector2 value);  // RVA: 0x210C680
        void Obfuscate(Vector2 _Value);  // RVA: 0x210BF10
        Vector2 UnObfuscate();  // RVA: 0x210C260
        void Obfuscate();  // RVA: 0x210BF40
        bool CheckIntegrity();  // RVA: 0x210BC90
        void Dispose();  // RVA: 0x210BD20
        Il2CppString* ToString();  // RVA: 0x210C160
        int32_t GetHashCode();  // RVA: 0x210BED0
        void Serialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _Secret);  // RVA: 0x210C140
        void Deserialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _Secret);  // RVA: 0x210BCE0
        static ProtectedVector2 op_Implicit(Vector2 _Value);  // RVA: 0x210C5F0
        static Vector2 op_Implicit(ProtectedVector2 _Value);  // RVA: 0x210C4F0
        static ProtectedQuaternion op_Implicit(ProtectedVector2 _Value);  // RVA: 0x210C570
        static ProtectedVector2 op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210C500
        static bool op_Equality(ProtectedVector2 v1, ProtectedVector2 v2);  // RVA: 0x210C490
        static bool op_Inequality(ProtectedVector2 v1, ProtectedVector2 v2);  // RVA: 0x210C620
        bool Equals(Il2CppObject* obj);  // RVA: 0x210BD30
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector2Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        int32_t obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t secret; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Vector2Int fakeValue; // 0x0020
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210B630
        void OnAfterDeserialize();  // RVA: 0x210B5B0
        void .ctor(Vector2Int _Value);  // RVA: 0x210B740
        Vector2Int get_Value();  // RVA: 0x210B7A0
        void set_Value(Vector2Int value);  // RVA: 0x210B480
        void Obfuscate(Vector2Int _Value);  // RVA: 0x210B480
        Vector2Int UnObfuscate();  // RVA: 0x210B720
        void Obfuscate();  // RVA: 0x210B4A0
        bool CheckIntegrity();  // RVA: 0x210B2D0
        void Dispose();  // RVA: 0x2104150
        Il2CppString* ToString();  // RVA: 0x210B650
        int32_t GetHashCode();  // RVA: 0x210B450
        static ProtectedVector2Int op_Implicit(Vector2Int _Value);  // RVA: 0x210BA90
        static Vector2Int op_Implicit(ProtectedVector2Int _Value);  // RVA: 0x210B940
        static ProtectedQuaternion op_Implicit(ProtectedVector2Int _Value);  // RVA: 0x210BA00
        static ProtectedVector2Int op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210B950
        static bool op_Equality(ProtectedVector2Int v1, ProtectedVector2Int v2);  // RVA: 0x210B8F0
        static bool op_Inequality(ProtectedVector2Int v1, ProtectedVector2Int v2);  // RVA: 0x210BB00
        bool Equals(Il2CppObject* obj);  // RVA: 0x210B310
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector3
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        UIntFloat obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        UIntFloat obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        UIntFloat obfuscatedValueZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        UIntFloat manager; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t secret; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Vector3 fakeValue; // 0x0028
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210D8A0
        void OnAfterDeserialize();  // RVA: 0x210D7F0
        void .ctor(Vector3 _Value);  // RVA: 0x210DA70
        Vector3 get_Value();  // RVA: 0x210DB10
        void set_Value(Vector3 value);  // RVA: 0x210E050
        void Obfuscate(Vector3 _Value);  // RVA: 0x210D650
        Vector3 UnObfuscate();  // RVA: 0x210DA40
        void Obfuscate();  // RVA: 0x210D6A0
        bool CheckIntegrity();  // RVA: 0x210D300
        void Dispose();  // RVA: 0x210D3D0
        Il2CppString* ToString();  // RVA: 0x210D8F0
        int32_t GetHashCode();  // RVA: 0x210D5D0
        void Serialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _ObfuscatedValueZ, uint32_t _Secret);  // RVA: 0x210D8D0
        void Deserialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _ObfuscatedValueZ, uint32_t _Secret);  // RVA: 0x210D380
        static ProtectedVector3 op_Implicit(Vector3 _Value);  // RVA: 0x210DF00
        static Vector3 op_Implicit(ProtectedVector3 _Value);  // RVA: 0x210DD20
        static ProtectedQuaternion op_Implicit(ProtectedVector3 _Value);  // RVA: 0x210DE50
        static ProtectedVector3 op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210DD50
        static bool op_Equality(ProtectedVector3 v1, ProtectedVector3 v2);  // RVA: 0x210DC80
        static bool op_Inequality(ProtectedVector3 v1, ProtectedVector3 v2);  // RVA: 0x210DFB0
        bool Equals(Il2CppObject* obj);  // RVA: 0x210D3E0
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector3Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        int32_t obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t obfuscatedValueZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t secret; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3Int fakeValue; // 0x0024
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210CB50
        void OnAfterDeserialize();  // RVA: 0x210CAB0
        void .ctor(Vector3Int _Value);  // RVA: 0x210CCC0
        Vector3Int get_Value();  // RVA: 0x210CD40
        void set_Value(Vector3Int value);  // RVA: 0x210D240
        void Obfuscate(Vector3Int _Value);  // RVA: 0x210C960
        Vector3Int UnObfuscate();  // RVA: 0x210CCA0
        void Obfuscate();  // RVA: 0x210C990
        bool CheckIntegrity();  // RVA: 0x210C6C0
        void Dispose();  // RVA: 0x210BD20
        Il2CppString* ToString();  // RVA: 0x210CB80
        int32_t GetHashCode();  // RVA: 0x210C8E0
        static ProtectedVector3Int op_Implicit(Vector3Int _Value);  // RVA: 0x210D120
        static Vector3Int op_Implicit(ProtectedVector3Int _Value);  // RVA: 0x210CF50
        static ProtectedQuaternion op_Implicit(ProtectedVector3Int _Value);  // RVA: 0x210D050
        static ProtectedVector3Int op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210CF80
        static bool op_Equality(ProtectedVector3Int v1, ProtectedVector3Int v2);  // RVA: 0x210CEC0
        static bool op_Inequality(ProtectedVector3Int v1, ProtectedVector3Int v2);  // RVA: 0x210D1B0
        bool Equals(Il2CppObject* obj);  // RVA: 0x210C720
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector4
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        UIntFloat obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        UIntFloat obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        UIntFloat obfuscatedValueZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        UIntFloat obfuscatedValueW; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        UIntFloat manager; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        uint32_t secret; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Vector4 fakeValue; // 0x002C
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210F450
        void OnAfterDeserialize();  // RVA: 0x210F380
        void .ctor(Vector4 _Value);  // RVA: 0x210F4F0
        Vector4 get_Value();  // RVA: 0x210F5B0
        void set_Value(Vector4 value);  // RVA: 0x2108520
        void Obfuscate(Vector4 _Value);  // RVA: 0x2107F70
        Vector4 UnObfuscate();  // RVA: 0x2108110
        void Obfuscate();  // RVA: 0x210F1F0
        bool CheckIntegrity();  // RVA: 0x210EE50
        void Dispose();  // RVA: 0x2107B30
        Il2CppString* ToString();  // RVA: 0x210F4B0
        int32_t GetHashCode();  // RVA: 0x210F160
        void Serialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _ObfuscatedValueZ, uint32_t _ObfuscatedValueW, uint32_t _Secret);  // RVA: 0x210F480
        void Deserialize(uint32_t _ObfuscatedValueX, uint32_t _ObfuscatedValueY, uint32_t _ObfuscatedValueZ, uint32_t _ObfuscatedValueW, uint32_t _Secret);  // RVA: 0x210EEE0
        static ProtectedVector4 op_Implicit(Vector4 _Value);  // RVA: 0x210F7D0
        static Vector4 op_Implicit(ProtectedVector4 _Value);  // RVA: 0x210F810
        static ProtectedQuaternion op_Implicit(ProtectedVector4 _Value);  // RVA: 0x210F840
        static ProtectedVector4 op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210F910
        static bool op_Equality(ProtectedVector4 v1, ProtectedVector4 v2);  // RVA: 0x210F730
        static bool op_Inequality(ProtectedVector4 v1, ProtectedVector4 v2);  // RVA: 0x210F9E0
        bool Equals(Il2CppObject* obj);  // RVA: 0x210EF60
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ProtectedVector4Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isInitialized; // 0x0010
        bool <HasIntegrity>k__BackingField; // 0x0011
        uint8_t pad_0012[0x2]; // 0x0012
        int32_t obfuscatedValueX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t obfuscatedValueY; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t obfuscatedValueZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t obfuscatedValueW; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        int32_t secret; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Vector4 fakeValue; // 0x0028
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x158B450
        void set_HasIntegrity(bool value);  // RVA: 0x20F96D0
        void OnBeforeSerialize();  // RVA: 0x210E650
        void OnAfterDeserialize();  // RVA: 0x210E590
        void .ctor(Vector4 _Value);  // RVA: 0x210E710
        Vector4 get_Value();  // RVA: 0x210E7C0
        void set_Value(Vector4 value);  // RVA: 0x210ED70
        void Obfuscate(Vector4 _Value);  // RVA: 0x210E550
        Vector4 UnObfuscate();  // RVA: 0x210E6C0
        void Obfuscate();  // RVA: 0x210E3D0
        bool CheckIntegrity();  // RVA: 0x210E0B0
        void Dispose();  // RVA: 0x210D3D0
        Il2CppString* ToString();  // RVA: 0x210E680
        int32_t GetHashCode();  // RVA: 0x210E340
        static ProtectedVector4Int op_Implicit(Vector4 _Value);  // RVA: 0x210EC10
        static Vector4 op_Implicit(ProtectedVector4Int _Value);  // RVA: 0x210EBE0
        static ProtectedQuaternion op_Implicit(ProtectedVector4Int _Value);  // RVA: 0x210EB10
        static ProtectedVector4Int op_Implicit(ProtectedQuaternion _Value);  // RVA: 0x210E9E0
        static bool op_Equality(ProtectedVector4Int v1, ProtectedVector4Int v2);  // RVA: 0x210E940
        static bool op_Inequality(ProtectedVector4Int v1, ProtectedVector4Int v2);  // RVA: 0x210ECD0
        bool Equals(Il2CppObject* obj);  // RVA: 0x210E150
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct UIntFloat
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float floatValue; // 0x0010
        uint32_t intValue; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Protected
    struct ULongDouble
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        double doubleValue; // 0x0010
        uint64_t longValue; // 0x0010
    };

} // namespace GUPS.AntiCheat.Protected

namespace GUPS.AntiCheat.Protected.Time
{

    // Namespace: GUPS.AntiCheat.Protected.Time
    class ProtectedTime
    {
    public:
        // Static fields
        // static GameTimeCheatingDetector* gameTimeCheatingDetector;
        // static DeviceTimeCheatingDetector* deviceTimeCheatingDetector;
    
    
        // Methods
        static float get_deltaTime();  // RVA: 0x2109430
        static float get_unscaledDeltaTime();  // RVA: 0x21099F0
        static float get_timeScale();  // RVA: 0x20FBFC0
        static void set_timeScale(float value);  // RVA: 0x2109CD0
        static float get_time();  // RVA: 0x2109880
        static float get_unscaledTime();  // RVA: 0x2109B60
        static float get_timeSinceLevelLoad();  // RVA: 0x2109710
        static float get_realtimeSinceStartup();  // RVA: 0x21095A0
        static DateTime get_UtcNow();  // RVA: 0x21092B0
        void .ctor();  // RVA: 0x427B90
    };

} // namespace GUPS.AntiCheat.Protected.Time

namespace GUPS.AntiCheat.Protected.Prefs
{

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    struct EPlayerPrefsType
    {
    public:
        // Static fields
        // static EPlayerPrefsType UNKNOWN;
        // static EPlayerPrefsType BOOL;
        // static EPlayerPrefsType INT;
        // static EPlayerPrefsType FLOAT;
        // static EPlayerPrefsType STRING;
        // static EPlayerPrefsType VECTOR2;
        // static EPlayerPrefsType VECTOR3;
        // static EPlayerPrefsType VECTOR4;
        // static EPlayerPrefsType QUATERNION;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class IProtectedPref`1
    {
    public:
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x26EAF0
        T get_Value();  // RVA: 0x3506D0
        void set_Value(T value);  // RVA: 0x3506D0
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedBoolPref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        bool get_Value();  // RVA: 0x20FCD80
        void set_Value(bool value);  // RVA: 0x20FCD90
        void .ctor();  // RVA: 0x427B90
    };

} // namespace GUPS.AntiCheat.Protected.Prefs

// Namespace: <global>
struct DataStruct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EPlayerPrefsType <PlayerPrefsType>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <Key>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <Value>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <Hash>k__BackingField; // 0x0028

    // Methods
    EPlayerPrefsType get_PlayerPrefsType();  // RVA: 0x1592280
    Il2CppString* get_Key();  // RVA: 0x7F8900
    Il2CppString* get_Value();  // RVA: 0x42A330
    Il2CppString* get_Hash();  // RVA: 0x42A480
    void .ctor(EPlayerPrefsType _PlayerPrefsType, Il2CppString* _Key, Il2CppString* _Value, Il2CppString* _Hash);  // RVA: 0x20FA690
};

namespace GUPS.AntiCheat.Protected.Prefs
{

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedFileBasedPlayerPrefs
    {
    public:
        // Static fields
        // static Il2CppString* <FilePath>k__BackingField;
        // static Il2CppObject* lockHandle;
        // static System.Collections.Generic.Dictionary<System.String,GUPS.AntiCheat.Protected.Prefs.ProtectedFileBasedPlayerPrefs.
    
        // Methods
        static Il2CppString* get_FilePath();  // RVA: 0x2103F60
        static void set_FilePath(Il2CppString* value);  // RVA: 0x2103FB0
        static bool HasKey(Il2CppString* _Key);  // RVA: 0x2101A20
        static void SetInt(Il2CppString* _Key, int32_t _Value);  // RVA: 0x2102D30
        static int32_t GetInt(Il2CppString* _Key, int32_t _DefaultValue);  // RVA: 0x2100590
        static int32_t GetInt(Il2CppString* _Key);  // RVA: 0x2100540
        static void SetFloat(Il2CppString* _Key, float _Value);  // RVA: 0x2102AF0
        static float GetFloat(Il2CppString* _Key, float _DefaultValue);  // RVA: 0x21001D0
        static float GetFloat(Il2CppString* _Key);  // RVA: 0x21004F0
        static void SetString(Il2CppString* _Key, Il2CppString* _Value);  // RVA: 0x2102FD0
        static Il2CppString* GetString(Il2CppString* _Key, Il2CppString* _DefaultValue);  // RVA: 0x2100970
        static Il2CppString* GetString(Il2CppString* _Key);  // RVA: 0x2100C70
        static void SetBool(Il2CppString* _Key, bool _Value);  // RVA: 0x21028B0
        static bool GetBool(Il2CppString* _Key, bool _DefaultValue);  // RVA: 0x20FFDC0
        static bool GetBool(Il2CppString* _Key);  // RVA: 0x2100180
        static void SetVector2(Il2CppString* _Key, Vector2 _Value);  // RVA: 0x2103240
        static Vector2 GetVector2(Il2CppString* _Key, Vector2 _DefaultValue);  // RVA: 0x2100CD0
        static Vector2 GetVector2(Il2CppString* _Key);  // RVA: 0x2101030
        static void SetVector3(Il2CppString* _Key, Vector3 _Value);  // RVA: 0x21034B0
        static Vector3 GetVector3(Il2CppString* _Key, Vector3 _DefaultValue);  // RVA: 0x21010D0
        static Vector3 GetVector3(Il2CppString* _Key);  // RVA: 0x21014A0
        static void SetVector4(Il2CppString* _Key, Vector4 _Value);  // RVA: 0x2103810
        static Vector4 GetVector4(Il2CppString* _Key, Vector4 _DefaultValue);  // RVA: 0x2101570
        static Vector4 GetVector4(Il2CppString* _Key);  // RVA: 0x2101970
        static void SetQuaternion(Il2CppString* _Key, Quaternion _Value);  // RVA: 0x2102F60
        static Quaternion GetQuaternion(Il2CppString* _Key);  // RVA: 0x21008A0
        static void DeleteKey(Il2CppString* _Key);  // RVA: 0x20FFC70
        static void Load();  // RVA: 0x2101B70
        static void Save();  // RVA: 0x2102320
        static DataStruct ReadDataStruct(BinaryReader* _Reader);  // RVA: 0x21020E0
        static void WriteDataStruct(BinaryWriter* _Writer, DataStruct _DataStruct);  // RVA: 0x2103BD0
        static Il2CppString* ReadString(BinaryReader* _Reader);  // RVA: 0x21021E0
        static void WriteString(BinaryWriter* _Writer, Il2CppString* _String);  // RVA: 0x2103D80
        static void .cctor();  // RVA: 0x2103E10
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedFloatPref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        float get_Value();  // RVA: 0x2104020
        void set_Value(float value);  // RVA: 0x2104040
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedIntPref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        int32_t get_Value();  // RVA: 0x2106200
        void set_Value(int32_t value);  // RVA: 0x2106210
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedPlayerPrefs
    {
    public:
        // Static fields
        // static bool AutoSave;
    
    
        // Methods
        static bool HasKey(Il2CppString* _Key);  // RVA: 0x21070B0
        static void SetInt(Il2CppString* _Key, int32_t _Value);  // RVA: 0x21072C0
        static int32_t GetInt(Il2CppString* _Key, int32_t _DefaultValue);  // RVA: 0x2106580
        static int32_t GetInt(Il2CppString* _Key);  // RVA: 0x2106570
        static void SetFloat(Il2CppString* _Key, float _Value);  // RVA: 0x21071F0
        static float GetFloat(Il2CppString* _Key, float _DefaultValue);  // RVA: 0x2106460
        static float GetFloat(Il2CppString* _Key);  // RVA: 0x2106560
        static void SetString(Il2CppString* _Key, Il2CppString* _Value);  // RVA: 0x21073B0
        static Il2CppString* GetString(Il2CppString* _Key, Il2CppString* _DefaultValue);  // RVA: 0x21067E0
        static Il2CppString* GetString(Il2CppString* _Key);  // RVA: 0x21067A0
        static void SetBool(Il2CppString* _Key, bool _Value);  // RVA: 0x2107110
        static bool GetBool(Il2CppString* _Key, bool _DefaultValue);  // RVA: 0x2106360
        static bool GetBool(Il2CppString* _Key);  // RVA: 0x2106350
        static void SetVector2(Il2CppString* _Key, Vector2 _Value);  // RVA: 0x2107490
        static Vector2 GetVector2(Il2CppString* _Key, Vector2 _DefaultValue);  // RVA: 0x2106910
        static Vector2 GetVector2(Il2CppString* _Key);  // RVA: 0x2106AD0
        static void SetVector3(Il2CppString* _Key, Vector3 _Value);  // RVA: 0x21075B0
        static Vector3 GetVector3(Il2CppString* _Key, Vector3 _DefaultValue);  // RVA: 0x2106BB0
        static Vector3 GetVector3(Il2CppString* _Key);  // RVA: 0x2106B30
        static void SetVector4(Il2CppString* _Key, Vector4 _Value);  // RVA: 0x2107790
        static Vector4 GetVector4(Il2CppString* _Key, Vector4 _DefaultValue);  // RVA: 0x2106E50
        static Vector4 GetVector4(Il2CppString* _Key);  // RVA: 0x2106DE0
        static void SetQuaternion(Il2CppString* _Key, Quaternion _Value);  // RVA: 0x2107390
        static Quaternion GetQuaternion(Il2CppString* _Key, Quaternion _Default);  // RVA: 0x2106740
        static Quaternion GetQuaternion(Il2CppString* _Key);  // RVA: 0x2106670
        static void Save();  // RVA: 0x2107100
        static void DeleteKey(Il2CppString* _Key);  // RVA: 0x21062E0
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedQuaternionPref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Quaternion defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        Quaternion get_Value();  // RVA: 0x21079D0
        void set_Value(Quaternion value);  // RVA: 0x2107A60
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedStringPref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        Il2CppString* get_Value();  // RVA: 0x21085A0
        void set_Value(Il2CppString* value);  // RVA: 0x21085B0
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedVector2Pref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        Vector2 get_Value();  // RVA: 0x210BB50
        void set_Value(Vector2 value);  // RVA: 0x210BB70
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedVector3Pref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector3 defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        Vector3 get_Value();  // RVA: 0x210D280
        void set_Value(Vector3 value);  // RVA: 0x210D2D0
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: GUPS.AntiCheat.Protected.Prefs
    class ProtectedVector4Pref
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* key; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector4 defaultValue; // 0x0018
    
        // Methods
        Il2CppString* get_Key();  // RVA: 0x20FCD70
        Vector4 get_Value();  // RVA: 0x210EDE0
        void set_Value(Vector4 value);  // RVA: 0x210EE20
        void .ctor();  // RVA: 0x427B90
    };

} // namespace GUPS.AntiCheat.Protected.Prefs

namespace GUPS.AntiCheat.Protected.Collection
{

    // Namespace: GUPS.AntiCheat.Protected.Collection
    class ProtectedList`1
    {
    public:
        System.Collections.Generic.List<T> list; // 0x0000
        int32_t <Hash>k__BackingField; // 0x0000
        bool <HasIntegrity>k__BackingField; // 0x0000
    
        // Methods
        T get_Item(int32_t _Index);  // RVA: 0x3506D0
        void set_Item(int32_t _Index, T value);  // RVA: 0x3506D0
        int32_t get_Count();  // RVA: 0x276B00
        bool get_IsReadOnly();  // RVA: 0x26F7B0
        int32_t get_Hash();  // RVA: 0x276B00
        void set_Hash(int32_t value);  // RVA: 0x26E4D0
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        void set_HasIntegrity(bool value);  // RVA: 0x26E770
        void .ctor();  // RVA: 0x26DD20
        void Add(T _Item);  // RVA: 0x3506D0
        void Insert(int32_t _Index, T _Item);  // RVA: 0x3506D0
        bool Contains(T _Item);  // RVA: 0x3506D0
        void CopyTo(T[][] _Array, int32_t _ArrayIndex);  // RVA: 0x279780
        int32_t IndexOf(T _Item);  // RVA: 0x3506D0
        bool Remove(T _Item);  // RVA: 0x3506D0
        void RemoveAt(int32_t _Index);  // RVA: 0x26E4D0
        void Clear();  // RVA: 0x26DD20
        bool CheckIntegrity();  // RVA: 0x26F7B0
        int32_t GetHashCode();  // RVA: 0x276B00
        int32_t AddToHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        int32_t RemoveFromHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        System.Collections.Generic.IEnumerator<T> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection
    class ProtectedQueue`1
    {
    public:
        System.Collections.Generic.Queue<T> queue; // 0x0000
        int32_t <Hash>k__BackingField; // 0x0000
        bool <HasIntegrity>k__BackingField; // 0x0000
    
        // Methods
        int32_t get_Hash();  // RVA: 0x276B00
        void set_Hash(int32_t value);  // RVA: 0x26E4D0
        int32_t get_Count();  // RVA: 0x276B00
        bool System.Collections.ICollection.get_IsSynchronized();  // RVA: 0x26F7B0
        Il2CppObject* System.Collections.ICollection.get_SyncRoot();  // RVA: 0x26EAF0
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        void set_HasIntegrity(bool value);  // RVA: 0x26E770
        void .ctor();  // RVA: 0x26DD20
        void .ctor(System.Collections.Generic.IEnumerable<T> _Collection);  // RVA: 0x26DDA0
        void .ctor(int32_t _Capacity);  // RVA: 0x26E4D0
        bool Contains(T _Item);  // RVA: 0x3506D0
        void Enqueue(T _Item);  // RVA: 0x3506D0
        T Peek();  // RVA: 0x3506D0
        T Dequeue();  // RVA: 0x3506D0
        void System.Collections.ICollection.CopyTo(Array* _Array, int32_t _Index);  // RVA: 0x279780
        void CopyTo(T[][] _Array, int32_t _ArrayIndex);  // RVA: 0x279780
        void TrimExcess();  // RVA: 0x26DD20
        bool TryPeek(T& _Result);  // RVA: 0x274FA0
        bool TryDequeue(T& _Result);  // RVA: 0x274FA0
        T[][] ToArray();  // RVA: 0x26EAF0
        void Clear();  // RVA: 0x26DD20
        bool CheckIntegrity();  // RVA: 0x26F7B0
        int32_t GetHashCode();  // RVA: 0x276B00
        int32_t AddToHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        int32_t RemoveFromHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        System.Collections.Generic.IEnumerator<T> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection
    class ProtectedStack`1
    {
    public:
        System.Collections.Generic.Stack<T> stack; // 0x0000
        int32_t <Hash>k__BackingField; // 0x0000
        bool <HasIntegrity>k__BackingField; // 0x0000
    
        // Methods
        bool System.Collections.ICollection.get_IsSynchronized();  // RVA: 0x26F7B0
        Il2CppObject* System.Collections.ICollection.get_SyncRoot();  // RVA: 0x26EAF0
        int32_t get_Hash();  // RVA: 0x276B00
        void set_Hash(int32_t value);  // RVA: 0x26E4D0
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        void set_HasIntegrity(bool value);  // RVA: 0x26E770
        void .ctor();  // RVA: 0x26DD20
        void .ctor(System.Collections.Generic.IEnumerable<T> _Collection);  // RVA: 0x26DDA0
        void .ctor(int32_t _Capacity);  // RVA: 0x26E4D0
        int32_t get_Count();  // RVA: 0x276B00
        bool Contains(T _Item);  // RVA: 0x3506D0
        void CopyTo(T[][] _Array, int32_t _ArrayIndex);  // RVA: 0x279780
        void System.Collections.ICollection.CopyTo(Array* _Array, int32_t _Index);  // RVA: 0x279780
        void Push(T _Item);  // RVA: 0x3506D0
        T Peek();  // RVA: 0x3506D0
        T Pop();  // RVA: 0x3506D0
        void TrimExcess();  // RVA: 0x26DD20
        bool TryPop(T& _Result);  // RVA: 0x274FA0
        T[][] ToArray();  // RVA: 0x26EAF0
        void Clear();  // RVA: 0x26DD20
        bool CheckIntegrity();  // RVA: 0x26F7B0
        int32_t GetHashCode();  // RVA: 0x276B00
        int32_t AddToHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        int32_t RemoveFromHashCode(int32_t _HashCode, T _Item);  // RVA: 0x3506D0
        System.Collections.Generic.IEnumerator<T> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
    };

} // namespace GUPS.AntiCheat.Protected.Collection

// Namespace: <global>
class <GetEnumerator>d__32
{
public:
    int32_t <>1__state; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> <>2__current; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.Block<T> <>4__this; // 0x0000
    ITransaction`1[][] <>7__wrap1; // 0x0000
    int32_t <>7__wrap2; // 0x0000

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x26E4D0
    void System.IDisposable.Dispose();  // RVA: 0x26DD20
    bool MoveNext();  // RVA: 0x26F7B0
    GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> System.Collections.Generic.IEnumerator<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>>.get_Current();  // RVA: 0x26EAF0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x26DD20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x26EAF0
};

namespace GUPS.AntiCheat.Protected.Collection.Chain
{

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class Block`1
    {
    public:
        // Static fields
        // static Random* random;
    
        int32_t size; // 0x0000
        ITransaction`1[][] transactions; // 0x0000
        int32_t count; // 0x0000
        int32_t nonce; // 0x0000
        int32_t hash; // 0x0000
    
        // Methods
        int32_t get_Size();  // RVA: 0x276B00
        void set_Size(int32_t value);  // RVA: 0x26E4D0
        ITransaction`1[][] get_Items();  // RVA: 0x26EAF0
        GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> get_Item(int32_t _Index);  // RVA: 0x272CD0
        int32_t get_Count();  // RVA: 0x276B00
        void set_Count(int32_t value);  // RVA: 0x26E4D0
        GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> get_Last();  // RVA: 0x26EAF0
        int64_t get_LastTransactionTimestamp();  // RVA: 0x26EAF0
        int32_t get_Nonce();  // RVA: 0x276B00
        void set_Nonce(int32_t value);  // RVA: 0x26E4D0
        int32_t get_Hash();  // RVA: 0x276B00
        void set_Hash(int32_t value);  // RVA: 0x26E4D0
        void .ctor(int32_t _Size);  // RVA: 0x26E4D0
        void .ctor(int32_t _Size, int32_t _Nonce);  // RVA: 0x272620
        bool Append(GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction);  // RVA: 0x274FA0
        bool Verify();  // RVA: 0x26F7B0
        int32_t GetHashCode();  // RVA: 0x276B00
        bool Equals(Il2CppObject* _Obj);  // RVA: 0x274FA0
        System.Collections.Generic.IEnumerator<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
        static void .cctor();  // RVA: 0x26DD40
    };

} // namespace GUPS.AntiCheat.Protected.Collection.Chain

// Namespace: <global>
struct <<Append>b__0>d
{
public:
    int32_t <>1__state; // 0x0000
    AsyncTaskMethodBuilder <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain.<>c__DisplayClass18_0<T> <>4__this; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <<Append>b__1>d
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain.<>c__DisplayClass18_0<T> <>4__this; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<System.Boolean> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain<T> <>4__this; // 0x0000
    T _Item; // 0x0000

    // Methods
    void .ctor();  // RVA: 0x26DD20
    Task* <Append>b__0();  // RVA: 0x26EAF0
    System.Threading.Tasks.Task<System.Boolean> <Append>b__1();  // RVA: 0x26EAF0
};

// Namespace: <global>
struct <AppendAsync>d__19
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain<T> <>4__this; // 0x0000
    T _Item; // 0x0000
    TaskAwaiter <>u__1; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<System.Boolean> <>u__2; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <GUPS-AntiCheat-Protected-Collection-Chain-IDataChain<GUPS-AntiCheat-Protected-Collection-Chain-Block<T>>-AppendAsync>d__21
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.Block<T> _Item; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain<T> <>4__this; // 0x0000
    ITransaction`1[][] <>7__wrap1; // 0x0000
    int32_t <>7__wrap2; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<System.Boolean> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <SynchronizeAsync>d__15
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.BlockChain<T> <>4__this; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

namespace GUPS.AntiCheat.Protected.Collection.Chain
{

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class BlockChain`1
    {
    public:
        System.Collections.Generic.LinkedList<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>> chain; // 0x0000
        int32_t blockSize; // 0x0000
        GUPS.AntiCheat.Protected.Collection.Chain.ISynchronizer<T> synchronizer; // 0x0000
        bool <HasIntegrity>k__BackingField; // 0x0000
    
        // Methods
        System.Collections.Generic.LinkedList<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>> get_Chain();  // RVA: 0x26EAF0
        GUPS.AntiCheat.Protected.Collection.Chain.Block<T> get_LastBlock();  // RVA: 0x26EAF0
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        void set_HasIntegrity(bool value);  // RVA: 0x26E770
        void .ctor();  // RVA: 0x26DD20
        void .ctor(int32_t _BlockSize);  // RVA: 0x26E4D0
        void .ctor(GUPS.AntiCheat.Protected.Collection.Chain.ISynchronizer<T> _Synchronizer);  // RVA: 0x26DDA0
        void .ctor(int32_t _BlockSize, GUPS.AntiCheat.Protected.Collection.Chain.ISynchronizer<T> _Synchronizer);  // RVA: 0x272080
        System.Threading.Tasks.Task<System.Boolean> SynchronizeAsync();  // RVA: 0x26EAF0
        void Append(GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction);  // RVA: 0x26DDA0
        void Append(ITransaction`1[][] _Transactions);  // RVA: 0x26DDA0
        bool Append(T _Item);  // RVA: 0x3506D0
        System.Threading.Tasks.Task<System.Boolean> AppendAsync(T _Item);  // RVA: 0x3506D0
        bool GUPS.AntiCheat.Protected.Collection.Chain.IDataChain<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>>.Append(GUPS.AntiCheat.Protected.Collection.Chain.Block<T> _Item);  // RVA: 0x274FA0
        System.Threading.Tasks.Task<System.Boolean> GUPS.AntiCheat.Protected.Collection.Chain.IDataChain<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>>.AppendAsync(GUPS.AntiCheat.Protected.Collection.Chain.Block<T> _Item);  // RVA: 0x273D80
        bool CheckIntegrityOfBlock(System.Collections.Generic.LinkedListNode<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>> _Node);  // RVA: 0x274FA0
        bool CheckIntegrity();  // RVA: 0x26F7B0
        bool CheckIntegrityOfLastBlock();  // RVA: 0x26F7B0
        System.Collections.Generic.IEnumerator<GUPS.AntiCheat.Protected.Collection.Chain.Block<T>> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
        void Dispose();  // RVA: 0x26DD20
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class IBlock`1
    {
    public:
    
        // Methods
        int32_t get_Size();  // RVA: 0x276B00
        ITransaction`1[][] get_Items();  // RVA: 0x26EAF0
        GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> get_Item(int32_t _Index);  // RVA: 0x272CD0
        int32_t get_Count();  // RVA: 0x276B00
        GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> get_Last();  // RVA: 0x26EAF0
        int32_t get_Nonce();  // RVA: 0x276B00
        int32_t get_Hash();  // RVA: 0x276B00
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class ITransaction`1
    {
    public:
    
        // Methods
        int64_t get_Timestamp();  // RVA: 0x26EAF0
        T get_Content();  // RVA: 0x3506D0
    };

} // namespace GUPS.AntiCheat.Protected.Collection.Chain

// Namespace: <global>
struct <ReadAsync>d__8
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.FileSynchronizer<T> <>4__this; // 0x0000
    int64_t _SyncTimestamp; // 0x0000
    int64_t <var_LastModifiedTimestamp>5__2; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<System.Collections.Generic.List<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>>> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <ReadFromFileAsync>d__7
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Collections.Generic.List<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>>> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.FileSynchronizer<T> <>4__this; // 0x0000
    int64_t _Timestamp; // 0x0000
    System.Collections.Generic.List<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>> <var_Result>5__2; // 0x0000
    FileStream* <var_FileStream>5__3; // 0x0000
    StreamReader* <var_StreamReader>5__4; // 0x0000
    System.Collections.Generic.List<System.String> <var_Lines>5__5; // 0x0000
    System.Runtime.CompilerServices.TaskAwaiter<System.String> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <WriteAsync>d__10
{
public:
    int32_t <>1__state; // 0x0000
    AsyncTaskMethodBuilder <>t__builder; // 0x0000
    ITransaction`1[][] _Transactions; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.FileSynchronizer<T> <>4__this; // 0x0000
    ITransaction`1[][] <>7__wrap1; // 0x0000
    int32_t <>7__wrap2; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <WriteAsync>d__9
{
public:
    int32_t <>1__state; // 0x0000
    AsyncTaskMethodBuilder <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.FileSynchronizer<T> <>4__this; // 0x0000
    FileStream* <var_FileStream>5__2; // 0x0000
    StreamWriter* <var_StreamWriter>5__3; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

namespace GUPS.AntiCheat.Protected.Collection.Chain
{

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class FileSynchronizer`1
    {
    public:
        Il2CppString* <FilePath>k__BackingField; // 0x0000
        int64_t lastFileReadTimestamp; // 0x0000
        System.Collections.Generic.List<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>> transactions; // 0x0000
    
        // Methods
        Il2CppString* get_FilePath();  // RVA: 0x26EAF0
        void set_FilePath(Il2CppString* value);  // RVA: 0x26DDA0
        void .ctor(Il2CppString* _FilePath);  // RVA: 0x26DDA0
        System.Threading.Tasks.Task<System.Collections.Generic.List<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>>> ReadFromFileAsync(int64_t _Timestamp);
        System.Threading.Tasks.Task<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> ReadAsync(int64_t _SyncTimestamp);
        Task* WriteAsync(GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction);  // RVA: 0x273D80
        Task* WriteAsync(ITransaction`1[][] _Transactions);  // RVA: 0x273D80
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class ISynchronizer`1
    {
    public:
    
        // Methods
        System.Threading.Tasks.Task<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> ReadAsync(int64_t _SyncTimestamp);
        Task* WriteAsync(GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction);  // RVA: 0x273D80
        Task* WriteAsync(ITransaction`1[][] _Transactions);  // RVA: 0x273D80
    };

} // namespace GUPS.AntiCheat.Protected.Collection.Chain

// Namespace: <global>
struct <ReadAsync>d__9
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.WebSynchronizer<T> <>4__this; // 0x0000
    int64_t _SyncTimestamp; // 0x0000
    UnityWebRequest* <var_Request>5__2; // 0x0000
    UnityWebRequestAsyncOperation* <var_RequestWaiter>5__3; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <WriteAsync>d__10
{
public:
    int32_t <>1__state; // 0x0000
    AsyncTaskMethodBuilder <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.WebSynchronizer<T> <>4__this; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <WriteAsync>d__11
{
public:
    int32_t <>1__state; // 0x0000
    AsyncTaskMethodBuilder <>t__builder; // 0x0000
    ITransaction`1[][] _Transactions; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.WebSynchronizer<T> <>4__this; // 0x0000
    UnityWebRequest* <var_Request>5__2; // 0x0000
    UnityWebRequestAsyncOperation* <var_RequestWaiter>5__3; // 0x0000
    TaskAwaiter <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

namespace GUPS.AntiCheat.Protected.Collection.Chain
{

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class WebSynchronizer`1
    {
    public:
        Il2CppString* <ReadEndpoint>k__BackingField; // 0x0000
        Il2CppString* <WriteEndpoint>k__BackingField; // 0x0000
    
        // Methods
        Il2CppString* get_ReadEndpoint();  // RVA: 0x26EAF0
        void set_ReadEndpoint(Il2CppString* value);  // RVA: 0x26DDA0
        Il2CppString* get_WriteEndpoint();  // RVA: 0x26EAF0
        void set_WriteEndpoint(Il2CppString* value);  // RVA: 0x26DDA0
        void .ctor(Il2CppString* _ReadEndpoint, Il2CppString* _WriteEndpoint);  // RVA: 0x26FB90
        System.Threading.Tasks.Task<GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T>[]> ReadAsync(int64_t _SyncTimestamp);
        Task* WriteAsync(GUPS.AntiCheat.Protected.Collection.Chain.ITransaction<T> _Transaction);  // RVA: 0x273D80
        Task* WriteAsync(ITransaction`1[][] _Transactions);  // RVA: 0x273D80
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class Transaction`1
    {
    public:
        int64_t timestamp; // 0x0000
        T content; // 0x0000
    
        // Methods
        int64_t get_Timestamp();  // RVA: 0x26EAF0
        void set_Timestamp(int64_t value);  // RVA: 0x26E1E0
        T get_Content();  // RVA: 0x3506D0
        void set_Content(T value);  // RVA: 0x3506D0
        void .ctor(T _Content);  // RVA: 0x3506D0
        void .ctor(int64_t _Timestamp, T _Content);  // RVA: 0x3506D0
        int32_t GetHashCode();  // RVA: 0x276B00
    };

} // namespace GUPS.AntiCheat.Protected.Collection.Chain

// Namespace: <global>
struct <AppendAsync>d__10
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.DataChain<T> <>4__this; // 0x0000
    T _Item; // 0x0000
    System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<System.Boolean> <>u__1; // 0x0000
    System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<System.Int32> <>u__2; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

// Namespace: <global>
struct <RemoveLastAsync>d__12
{
public:
    int32_t <>1__state; // 0x0000
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Boolean> <>t__builder; // 0x0000
    GUPS.AntiCheat.Protected.Collection.Chain.DataChain<T> <>4__this; // 0x0000
    System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<System.Boolean> <>u__1; // 0x0000

    // Methods
    void MoveNext();  // RVA: 0x26DD20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x26DDA0
};

namespace GUPS.AntiCheat.Protected.Collection.Chain
{

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class DataChain`1
    {
    public:
        System.Collections.Generic.LinkedList<T> chain; // 0x0000
        int32_t hash; // 0x0000
        bool <HasIntegrity>k__BackingField; // 0x0000
    
        // Methods
        System.Collections.Generic.LinkedList<T> get_Chain();  // RVA: 0x26EAF0
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        void set_HasIntegrity(bool value);  // RVA: 0x26E770
        void .ctor();  // RVA: 0x26DD20
        bool Append(T _Item);  // RVA: 0x3506D0
        System.Threading.Tasks.Task<System.Boolean> AppendAsync(T _Item);  // RVA: 0x3506D0
        bool RemoveLast();  // RVA: 0x26F7B0
        System.Threading.Tasks.Task<System.Boolean> RemoveLastAsync();  // RVA: 0x26EAF0
        bool CheckIntegrity();  // RVA: 0x26F7B0
        int32_t GetHashCode();  // RVA: 0x276B00
        bool Equals(Il2CppObject* _Obj);  // RVA: 0x274FA0
        System.Collections.Generic.IEnumerator<T> GetEnumerator();  // RVA: 0x26EAF0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x26EAF0
        void Dispose();  // RVA: 0x26DD20
        bool <AppendAsync>b__10_0();  // RVA: 0x26F7B0
        int32_t <AppendAsync>b__10_1();  // RVA: 0x276B00
        bool <RemoveLastAsync>b__12_0();  // RVA: 0x26F7B0
    };

    // Namespace: GUPS.AntiCheat.Protected.Collection.Chain
    class IDataChain`1
    {
    public:
    
        // Methods
        System.Collections.Generic.LinkedList<T> get_Chain();  // RVA: 0x26EAF0
        bool Append(T _Item);  // RVA: 0x3506D0
        System.Threading.Tasks.Task<System.Boolean> AppendAsync(T _Item);  // RVA: 0x3506D0
    };

} // namespace GUPS.AntiCheat.Protected.Collection.Chain

// Namespace: <global>
class Unsubscriber
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject>> observers; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject> observer; // 0x0018

    // Methods
    void .ctor(System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject>> observers, System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject> observer);  // RVA: 0x980E80
    void Dispose();  // RVA: 0x2110BF0
};

namespace GUPS.AntiCheat.Monitor
{

    // Namespace: GUPS.AntiCheat.Monitor
    class AMonitor : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool isActive; // 0x0020
        bool <IsStarted>k__BackingField; // 0x0021
        bool <IsPaused>k__BackingField; // 0x0022
        uint8_t pad_0023[0x5]; // 0x0023
        System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject>> observers; // 0x0028
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        bool get_IsActive();  // RVA: 0x4208A0
        bool get_IsStarted();  // RVA: 0x4208B0
        void set_IsStarted(bool value);  // RVA: 0x87B2A0
        bool get_IsPaused();  // RVA: 0x879D60
        void set_IsPaused(bool value);  // RVA: 0x87F420
        void Start();  // RVA: 0x20F8590
        void OnStart();  // RVA: 0x4160A0
        void Pause();  // RVA: 0x20F8530
        void OnPause();  // RVA: 0x4160A0
        void Resume();  // RVA: 0x20F8560
        void OnResume();  // RVA: 0x4160A0
        void Stop();  // RVA: 0x20F8510
        void OnStop();  // RVA: 0x4160A0
        void Update();  // RVA: 0x20F86E0
        void OnUpdate();  // RVA: 0x4160A0
        void OnDestroy();  // RVA: 0x20F8510
        void Dispose();  // RVA: 0x20F8290
        IDisposable* Subscribe(System.IObserver<GUPS.AntiCheat.Core.Watch.IWatchedSubject> _Observer);  // RVA: 0x20F85B0
        void Notify(IWatchedSubject* _Subject);  // RVA: 0x20F83F0
        void .ctor();  // RVA: 0x20F8710
    };

} // namespace GUPS.AntiCheat.Monitor

namespace GUPS.AntiCheat.Monitor.Time
{

    // Namespace: GUPS.AntiCheat.Monitor.Time
    class DeviceTimeMonitor : public AMonitor
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        float tolerance; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Nullable<System.DateTime> previousUnFocusDateTime; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        float previousUnFocusRealtimeSinceStartup; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Nullable<System.DateTime> previousPauseDateTime; // 0x0050
        uint8_t pad_0051[0xF]; // 0x0051
        float previousPauseRealtimeSinceStartup; // 0x0060
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FB480
        ETimeDeviation GetTimeDeviation(float _PassedDeviceTime, float _PassedGameTime);  // RVA: 0x20FB060
        void OnApplicationFocus(bool _HasFocus);  // RVA: 0x20FB130
        void OnApplicationPause(bool _IsPaused);  // RVA: 0x20FB2D0
        void .ctor();  // RVA: 0x20FB470
    };

    // Namespace: GUPS.AntiCheat.Monitor.Time
    struct ETimeDeviation
    {
    public:
        // Static fields
        // static ETimeDeviation None;
        // static ETimeDeviation Stopped;
        // static ETimeDeviation SlowedDown;
        // static ETimeDeviation SpeedUp;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Monitor.Time
    class GameTimeMonitor : public AMonitor
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        float tolerance; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t historySize; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t maxHistorySize; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Single[][] deltaTimeValues; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        float deltaTimeValueMean; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int64_t previousUtcTime; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Single[][] utcTimeValues; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float utcTimeValueMean; // 0x0060
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FC770
        void Reset();  // RVA: 0x20FC5D0
        void ResetUtcTime();  // RVA: 0x20FC1F0
        float Record(float _Value, Single[][] _ValueArray);  // RVA: 0x20FC540
        ETimeDeviation GetTimeDeviation();  // RVA: 0x20FC110
        static float TickToSec(int64_t _Tick);  // RVA: 0x20FC690
        void OnStart();  // RVA: 0x20FC250
        void OnResume();  // RVA: 0x20FC250
        void OnUpdate();  // RVA: 0x20FC260
        void OnApplicationFocus(bool _Focus);  // RVA: 0x20FC1F0
        void OnApplicationPause(bool _Pause);  // RVA: 0x20FC1F0
        void .ctor();  // RVA: 0x20FC6F0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Time
    struct DeviceTimeStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ETimeDeviation <Deviation>k__BackingField; // 0x0010
    
        // Methods
        ETimeDeviation get_Deviation();  // RVA: 0x1592280
        void set_Deviation(ETimeDeviation value);  // RVA: 0x1937B00
        void .ctor(ETimeDeviation _Deviation);  // RVA: 0x1937B00
    };

    // Namespace: GUPS.AntiCheat.Monitor.Time
    struct GameTimeStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ETimeDeviation <Deviation>k__BackingField; // 0x0010
    
        // Methods
        ETimeDeviation get_Deviation();  // RVA: 0x1592280
        void set_Deviation(ETimeDeviation value);  // RVA: 0x1937B00
        void .ctor(ETimeDeviation _Deviation);  // RVA: 0x1937B00
    };

} // namespace GUPS.AntiCheat.Monitor.Time

namespace GUPS.AntiCheat.Monitor.Android
{

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AndroidInstalledApplicationMonitor : public AMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20F8AC0
        void OnStart();  // RVA: 0x20F87D0
        bool TryGetInstalledApplications(System.Collections.Generic.List<System.String>& _Applications);  // RVA: 0x20F8850
        void .ctor();  // RVA: 0x20F8AB0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AndroidPackageFingerprintMonitor : public AMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20F8DE0
        void OnStart();  // RVA: 0x20F8B50
        EHashAlgorithm GetAlgorithm();  // RVA: 0x20F8AF0
        bool TryGetFingerprint(Il2CppString* _Algorithm, Il2CppString* _Fingerprint);  // RVA: 0x20F8BD0
        void .ctor();  // RVA: 0x20F8AB0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AndroidPackageHashMonitor : public AMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20F9100
        void OnStart();  // RVA: 0x20F8E70
        EHashAlgorithm GetAlgorithm();  // RVA: 0x20F8E10
        bool TryGetHash(Il2CppString* _Algorithm, Il2CppString* _Hash);  // RVA: 0x20F8EF0
        void .ctor();  // RVA: 0x20F8AB0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AndroidPackageLibraryMonitor : public AMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20F9410
        void OnStart();  // RVA: 0x20F9130
        bool TryGetLibraries(System.Collections.Generic.List<System.String>& _Libraries);  // RVA: 0x20F91B0
        void .ctor();  // RVA: 0x20F8AB0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AndroidPackageSourceMonitor : public AMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20F9680
        void OnStart();  // RVA: 0x20F9440
        bool TryGetAppStoreSource(EAppStore _AppStore, Il2CppString* _AppStorePackage);  // RVA: 0x20F94C0
        void .ctor();  // RVA: 0x20F8AB0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class AppStoreHelper
    {
    public:
    
        // Methods
        static EAppStore GetStore(Il2CppString* _Package);  // RVA: 0x20FA300
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct EAppStore
    {
    public:
        // Static fields
        // static EAppStore Unknown;
        // static EAppStore AndroidPackageInstaller;
        // static EAppStore AmazonAppstore;
        // static EAppStore Aptoide;
        // static EAppStore CafeBazaar;
        // static EAppStore FDroid;
        // static EAppStore GooglePlayStore;
        // static EAppStore HuaweiAppGallery;
        // static EAppStore Myket;
        // static EAppStore OppoAppMarket;
        // static EAppStore SamsungGalaxyStore;
        // static EAppStore TapTap;
        // static EAppStore VivoAppStore;
        // static EAppStore XiaomiMiGetApps;
        // static EAppStore XDALabs;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct AndroidFingerprintStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool <FailedToRetrieveData>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* <Algorithm>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* <Fingerprint>k__BackingField; // 0x0020
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x1592280
        void set_FailedToRetrieveData(bool value);  // RVA: 0x1937B00
        Il2CppString* get_Algorithm();  // RVA: 0x7F8900
        void set_Algorithm(Il2CppString* value);  // RVA: 0x983B50
        Il2CppString* get_Fingerprint();  // RVA: 0x42A330
        void set_Fingerprint(Il2CppString* value);  // RVA: 0x6C7CF0
        void .ctor(bool _FailedToRetrieveData, Il2CppString* _Algorithm, Il2CppString* _Fingerprint);  // RVA: 0x20F8790
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct AndroidHashStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool <FailedToRetrieveData>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* <Algorithm>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* <Hash>k__BackingField; // 0x0020
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x1592280
        void set_FailedToRetrieveData(bool value);  // RVA: 0x1937B00
        Il2CppString* get_Algorithm();  // RVA: 0x7F8900
        void set_Algorithm(Il2CppString* value);  // RVA: 0x983B50
        Il2CppString* get_Hash();  // RVA: 0x42A330
        void set_Hash(Il2CppString* value);  // RVA: 0x6C7CF0
        void .ctor(bool _FailedToRetrieveData, Il2CppString* _Algorithm, Il2CppString* _Hash);  // RVA: 0x20F8790
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct AndroidInstalledApplicationStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool <FailedToRetrieveData>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<System.String> <Applications>k__BackingField; // 0x0018
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x1592280
        void set_FailedToRetrieveData(bool value);  // RVA: 0x1937B00
        System.Collections.Generic.List<System.String> get_Applications();  // RVA: 0x7F8900
        void set_Applications(System.Collections.Generic.List<System.String> value);  // RVA: 0x983B50
        void .ctor(bool _FailedToRetrieveData, System.Collections.Generic.List<System.String> _Applications);  // RVA: 0x1945E60
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct AndroidLibraryStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool <FailedToRetrieveData>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<System.String> <Libraries>k__BackingField; // 0x0018
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x1592280
        void set_FailedToRetrieveData(bool value);  // RVA: 0x1937B00
        System.Collections.Generic.List<System.String> get_Libraries();  // RVA: 0x7F8900
        void set_Libraries(System.Collections.Generic.List<System.String> value);  // RVA: 0x983B50
        void .ctor(bool _FailedToRetrieveData, System.Collections.Generic.List<System.String> _Libraries);  // RVA: 0x1945E60
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    struct AndroidSourceStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool <FailedToRetrieveData>k__BackingField; // 0x0010
        EAppStore <AppStoreSource>k__BackingField; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        Il2CppString* <AppStoreSourcePackage>k__BackingField; // 0x0018
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x1592280
        void set_FailedToRetrieveData(bool value);  // RVA: 0x1937B00
        EAppStore get_AppStoreSource();  // RVA: 0x158B450
        void set_AppStoreSource(EAppStore value);  // RVA: 0x20F96D0
        Il2CppString* get_AppStoreSourcePackage();  // RVA: 0x7F8900
        void set_AppStoreSourcePackage(Il2CppString* value);  // RVA: 0x983B50
        void .ctor(bool _FailedToRetrieveData, EAppStore _Source, Il2CppString* _AppStoreSourcePackage);  // RVA: 0x20F96B0
    };

    // Namespace: GUPS.AntiCheat.Monitor.Android
    class IAndroidStatus
    {
    public:
    
        // Methods
        bool get_FailedToRetrieveData();  // RVA: 0x26F7B0
    };

} // namespace GUPS.AntiCheat.Monitor.Android

// Namespace: <global>
class Unsubscriber
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus>> observers; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus> observer; // 0x0018

    // Methods
    void .ctor(System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus>> observers, System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus> observer);  // RVA: 0x980E80
    void Dispose();  // RVA: 0x2110B70
};

namespace GUPS.AntiCheat.Detector
{

    // Namespace: GUPS.AntiCheat.Detector
    class ADetector : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool isActive; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus>> observers; // 0x0028
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        bool get_IsSupported();  // RVA: 0x26F7B0
        bool get_IsActive();  // RVA: 0x4208A0
        void set_IsActive(bool value);  // RVA: 0x87AAB0
        uint32_t get_ThreatRating();  // RVA: 0x276B00
        void set_ThreatRating(uint32_t value);  // RVA: 0x26E4D0
        bool get_PossibleCheatingDetected();  // RVA: 0x26F7B0
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x26E770
        IDisposable* Subscribe(System.IObserver<GUPS.AntiCheat.Core.Detector.IDetectorStatus> _Observer);  // RVA: 0x20F80E0
        void Notify(IDetectorStatus* _Subject);  // RVA: 0x20F7FC0
        void Dispose();  // RVA: 0x20F7E60
        void OnCompleted();  // RVA: 0x26DD20
        void OnError(Exception* _Error);  // RVA: 0x26DDA0
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x26DDA0
        void Awake();  // RVA: 0x20F7E20
        void .ctor();  // RVA: 0x20F8210
    };

    // Namespace: GUPS.AntiCheat.Detector
    class CheatingDetectionEvent`1 : public UnityEvent`1
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x26DD20
    };

    // Namespace: GUPS.AntiCheat.Detector
    class PrimitiveCheatingDetector : public ADetector
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        uint32_t threatRating; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool <PossibleCheatingDetected>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.CheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0038
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FCD30
        bool get_IsSupported();  // RVA: 0x53A800
        float get_PossibilityOfFalsePositive();  // RVA: 0x20FCD60
        uint32_t get_ThreatRating();  // RVA: 0x4FA700
        void set_ThreatRating(uint32_t value);  // RVA: 0x4FA740
        bool get_PossibleCheatingDetected();  // RVA: 0x985F90
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x1569A80
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x20FCB90
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        void .ctor();  // RVA: 0x20FCCB0
    };

} // namespace GUPS.AntiCheat.Detector

// Namespace: <global>
struct <<GetApplicationStartTime>b__28_0>d
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.DateTime> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    DeviceTimeCheatingDetector* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Runtime.CompilerServices.TaskAwaiter<System.DateTime> <>u__1; // 0x0038

    // Methods
    void MoveNext();  // RVA: 0x2110530
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x2110800
};

// Namespace: <global>
struct <CalculateCompareTime>d__26
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.DateTime> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    DeviceTimeCheatingDetector* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Runtime.CompilerServices.TaskAwaiter<System.DateTime> <>u__1; // 0x0038

    // Methods
    void MoveNext();  // RVA: 0x210FB40
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x210FE50
};

// Namespace: <global>
struct <GetInternetCompareTime>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.DateTime> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    DeviceTimeCheatingDetector* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Runtime.CompilerServices.TaskAwaiter<System.Net.Http.HttpResponseMessage> <>u__1; // 0x0038

    // Methods
    void MoveNext();  // RVA: 0x210FEC0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x21104C0
};

namespace GUPS.AntiCheat.Detector
{

    // Namespace: GUPS.AntiCheat.Detector
    class DeviceTimeCheatingDetector : public ADetector
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        uint32_t threatRating; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool <PossibleCheatingDetected>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.CheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        DeviceTimeMonitor* deviceTimeMonitor; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool useInternetTime; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        HttpClient* client; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Il2CppString* serverAddress; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* serverCertificateHash; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Nullable<System.DateTime> applicationStartDateTime; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float applicationStartRealTimeSinceStartup; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        DateTime CurrentUtcTime; // 0x0080
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FB030
        bool get_IsSupported();  // RVA: 0x53A800
        uint32_t get_ThreatRating();  // RVA: 0x4FA700
        void set_ThreatRating(uint32_t value);  // RVA: 0x4FA740
        bool get_PossibleCheatingDetected();  // RVA: 0x985F90
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x1569A80
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x20FAC80
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        bool get_UseInternetTime();  // RVA: 0x9427D0
        System.Threading.Tasks.Task<System.DateTime> CalculateCompareTime();  // RVA: 0x20FA810
        System.Threading.Tasks.Task<System.DateTime> GetInternetCompareTime();  // RVA: 0x20FAB90
        void GetApplicationStartTime();  // RVA: 0x20FA9C0
        void Awake();  // RVA: 0x20FA6E0
        void FixedUpdate();  // RVA: 0x20FA900
        void .ctor();  // RVA: 0x20FAF50
        bool <GetInternetCompareTime>b__27_0(HttpRequestMessage* var_HttpRequestMessage, X509Certificate2* var_Certificate, X509Chain* var_Chain, SslPolicyErrors var_PolicyError);  // RVA: 0x20FAEE0
        System.Threading.Tasks.Task<System.DateTime> <GetApplicationStartTime>b__28_0();  // RVA: 0x20FADF0
    };

    // Namespace: GUPS.AntiCheat.Detector
    class GameTimeCheatingDetector : public ADetector
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        float <PossibilityOfFalsePositive>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t threatRating; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        bool <PossibleCheatingDetected>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.CheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameTimeMonitor* gameTimeMonitor; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t maxHistorySize; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        ETimeDeviation[][] values; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int64_t previousUtcTime; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        float time; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float deltaTime; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float unscaledTime; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float unscaledDeltaTime; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float realtimeSinceStartup; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float timeSinceLevelLoad; // 0x007C
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x20FBF50
        bool get_IsSupported();  // RVA: 0x53A800
        float get_PossibilityOfFalsePositive();  // RVA: 0x6C7D30
        void set_PossibilityOfFalsePositive(float value);  // RVA: 0x6C7D40
        uint32_t get_ThreatRating();  // RVA: 0x5B1010
        void set_ThreatRating(uint32_t value);  // RVA: 0x978330
        bool get_PossibleCheatingDetected();  // RVA: 0x8FC6B0
        void set_PossibleCheatingDetected(bool value);  // RVA: 0xAA4BA0
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x20FB8B0
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        void Awake();  // RVA: 0x20FB700
        void Update();  // RVA: 0x20FBCD0
        void OnApplicationFocus(bool _Focus);  // RVA: 0x20FB840
        void OnApplicationPause(bool _Pause);  // RVA: 0x20FB840
        void OnLevelFinishedLoading(Scene _Scene, LoadSceneMode _Mode);  // RVA: 0x20FB8A0
        bool Record(ETimeDeviation _Value);  // RVA: 0x20FBB40
        float get_Time();  // RVA: 0x20FC010
        void set_Time(float value);  // RVA: 0x42E2A0
        float get_DeltaTime();  // RVA: 0x20FBF10
        void set_DeltaTime(float value);  // RVA: 0x1B18AF0
        float get_UnscaledTime();  // RVA: 0x20FC090
        void set_UnscaledTime(float value);  // RVA: 0x20FC100
        float get_UnscaledDeltaTime();  // RVA: 0x20FC050
        void set_UnscaledDeltaTime(float value);  // RVA: 0x20FC0F0
        float get_RealtimeSinceStartup();  // RVA: 0x20FBF80
        void set_RealtimeSinceStartup(float value);  // RVA: 0x20FC0D0
        float get_TimeSinceLevelLoad();  // RVA: 0x20FBFD0
        void set_TimeSinceLevelLoad(float value);  // RVA: 0x20FC0E0
        float get_TimeScale();  // RVA: 0x20FBFC0
        void UpdateTime();  // RVA: 0x20FBCD0
        void ResetLevelTime();  // RVA: 0x20FB8A0
        void ResetUtcTime();  // RVA: 0x20FB840
        static float TickToSec(int64_t _Tick);  // RVA: 0x20FBC70
        void .ctor();  // RVA: 0x20FBE50
    };

    // Namespace: GUPS.AntiCheat.Detector
    struct CheatingDetectionStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float <PossibilityOfFalsePositive>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t <ThreatRating>k__BackingField; // 0x0014
    
        // Methods
        float get_PossibilityOfFalsePositive();  // RVA: 0x4169C0
        void set_PossibilityOfFalsePositive(float value);  // RVA: 0x91ED10
        uint32_t get_ThreatRating();  // RVA: 0xF16B70
        void set_ThreatRating(uint32_t value);  // RVA: 0xF16B80
        void .ctor(float _PossibilityOfFalsePositive, uint32_t _ThreatRating);  // RVA: 0x1BD0040
    };

} // namespace GUPS.AntiCheat.Detector

// Namespace: <global>
class <CheckGenuine>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MobileGenuineDetector* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0x211D400
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211D5B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

namespace GUPS.AntiCheat.Detector.Mobile
{

    // Namespace: GUPS.AntiCheat.Detector.Mobile
    class MobileGenuineDetector : public ADetector
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        uint32_t threatRating; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool <PossibleCheatingDetected>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.CheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool CheckGenuineOnlyOnGameStart; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float RecheckIntervalForPossibleCheating; // 0x0044
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x211D030
        bool get_IsSupported();  // RVA: 0x42F7D0
        float get_PossibilityOfFalsePositive();  // RVA: 0x20FCD60
        uint32_t get_ThreatRating();  // RVA: 0x4FA700
        void set_ThreatRating(uint32_t value);  // RVA: 0x4FA740
        bool get_PossibleCheatingDetected();  // RVA: 0x985F90
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x1569A80
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x4160A0
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        IEnumerator* CheckGenuine();  // RVA: 0x211CC10
        bool ManualGenuineCheck();  // RVA: 0x211CC80
        void Start();  // RVA: 0x211CDC0
        void .ctor();  // RVA: 0x211CFA0
    };

} // namespace GUPS.AntiCheat.Detector.Mobile

// Namespace: <global>
class <ValidateDeviceApplications>d__21
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AndroidInstalledApplicationStatus _ApplicationStatus; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    AndroidDeviceCheatingDetector* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0x211D5F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211DA40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

namespace GUPS.AntiCheat.Detector.Android
{

    // Namespace: GUPS.AntiCheat.Detector.Android
    class AndroidDeviceCheatingDetector : public ADetector
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        uint32_t threatRating; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool <PossibleCheatingDetected>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.Android.AndroidCheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        AndroidInstalledApplicationMonitor* installedApplicationMonitor; // 0x0040
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x211BC90
        bool get_IsSupported();  // RVA: 0x42F7D0
        float get_PossibilityOfFalsePositive();  // RVA: 0x20FCD60
        uint32_t get_ThreatRating();  // RVA: 0x4FA700
        void set_ThreatRating(uint32_t value);  // RVA: 0x4FA740
        bool get_PossibleCheatingDetected();  // RVA: 0x985F90
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x1569A80
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x211BA60
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        void Awake();  // RVA: 0x211B890
        void OnDetectCheating(EAndroidCheatingType _AndroidCheatingType, bool _FailedToRetrieveData);  // RVA: 0x211B940
        IEnumerator* ValidateDeviceApplications(AndroidInstalledApplicationStatus _ApplicationStatus);  // RVA: 0x211BB80
        void .ctor();  // RVA: 0x211BC10
    };

} // namespace GUPS.AntiCheat.Detector.Android

// Namespace: <global>
class <ValidatePackageFingerprint>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AndroidFingerprintStatus _FingerprintStatus; // 0x0020
    uint8_t pad_0021[0x17]; // 0x0021
    AndroidPackageTamperingDetector* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0x211DA80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211DDB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

// Namespace: <global>
class <ValidatePackageHash>d__26
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AndroidHashStatus _HashStatus; // 0x0020
    uint8_t pad_0021[0x17]; // 0x0021
    AndroidPackageTamperingDetector* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <var_HashEndpoint>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UnityWebRequest* <var_Request>5__3; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x211E510
    bool MoveNext();  // RVA: 0x211DDF0
    void <>m__Finally1();  // RVA: 0x211E5A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211E4D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

// Namespace: <global>
class <ValidatePackageLibrary>d__28
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AndroidLibraryStatus _LibraryStatus; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    AndroidPackageTamperingDetector* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0x211E5F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211ED10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

// Namespace: <global>
class <ValidatePackageSource>d__25
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AndroidSourceStatus _SourceStatus; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    AndroidPackageTamperingDetector* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0x211ED50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0x211F030
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

namespace GUPS.AntiCheat.Detector.Android
{

    // Namespace: GUPS.AntiCheat.Detector.Android
    class AndroidPackageTamperingDetector : public ADetector
    {
    public:
        // Static fields
        // static Il2CppString* CHashVersionParameter;
    
        uint8_t pad_0000[0x30]; // 0x0000
        uint32_t threatRating; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool <PossibleCheatingDetected>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        GUPS.AntiCheat.Detector.CheatingDetectionEvent<GUPS.AntiCheat.Detector.Android.AndroidCheatingDetectionStatus> OnCheatingDetectionEvent; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        AndroidPackageSourceMonitor* packageSourceMonitor; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AndroidPackageHashMonitor* packageHashMonitor; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AndroidPackageFingerprintMonitor* packageFingerprintMonitor; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AndroidPackageLibraryMonitor* packageLibraryMonitor; // 0x0058
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x211C560
        bool get_IsSupported();  // RVA: 0x42F7D0
        float get_PossibilityOfFalsePositive();  // RVA: 0x20FCD60
        uint32_t get_ThreatRating();  // RVA: 0x4FA700
        void set_ThreatRating(uint32_t value);  // RVA: 0x4FA740
        bool get_PossibleCheatingDetected();  // RVA: 0x985F90
        void set_PossibleCheatingDetected(bool value);  // RVA: 0x1569A80
        void OnNext(IWatchedSubject* _Subject);  // RVA: 0x211BFD0
        void OnError(Exception* _Error);  // RVA: 0x4160A0
        void OnCompleted();  // RVA: 0x4160A0
        void Awake();  // RVA: 0x211BCC0
        void OnDetectCheating(EAndroidCheatingType _AndroidCheatingType, bool _FailedToRetrieveData);  // RVA: 0x211BEB0
        IEnumerator* ValidatePackageSource(AndroidSourceStatus _SourceStatus);  // RVA: 0x211C450
        IEnumerator* ValidatePackageHash(AndroidHashStatus _HashStatus);  // RVA: 0x211C330
        IEnumerator* ValidatePackageFingerprint(AndroidFingerprintStatus _FingerprintStatus);  // RVA: 0x211C2A0
        IEnumerator* ValidatePackageLibrary(AndroidLibraryStatus _LibraryStatus);  // RVA: 0x211C3C0
        void .ctor();  // RVA: 0x211C4E0
    };

    // Namespace: GUPS.AntiCheat.Detector.Android
    struct EAndroidCheatingType
    {
    public:
        // Static fields
        // static EAndroidCheatingType UNKNOWN;
        // static EAndroidCheatingType PACKAGE_SOURCE;
        // static EAndroidCheatingType PACKAGE_HASH;
        // static EAndroidCheatingType PACKAGE_FINGERPRINT;
        // static EAndroidCheatingType PACKAGE_LIBRARY;
        // static EAndroidCheatingType DEVICE_INSTALLED_APPS;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Detector.Android
    struct AndroidCheatingDetectionStatus
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float <PossibilityOfFalsePositive>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t <ThreatRating>k__BackingField; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        EAndroidCheatingType <AndroidCheatingType>k__BackingField; // 0x0018
        bool <MonitorFailedToRetrieveData>k__BackingField; // 0x0019
    
        // Methods
        float get_PossibilityOfFalsePositive();  // RVA: 0x4169C0
        void set_PossibilityOfFalsePositive(float value);  // RVA: 0x91ED10
        uint32_t get_ThreatRating();  // RVA: 0xF16B70
        void set_ThreatRating(uint32_t value);  // RVA: 0xF16B80
        EAndroidCheatingType get_AndroidCheatingType();  // RVA: 0xBD0EA0
        void set_AndroidCheatingType(EAndroidCheatingType value);  // RVA: 0x211B870
        bool get_MonitorFailedToRetrieveData();  // RVA: 0x211B860
        void set_MonitorFailedToRetrieveData(bool value);  // RVA: 0x211B880
        void .ctor(float _PossibilityOfFalsePositive, uint32_t _ThreatRating, EAndroidCheatingType _AndroidCheatingType, bool _MonitorFailedToRetrieveData);  // RVA: 0x211B840
    };

    // Namespace: GUPS.AntiCheat.Detector.Android
    class IAndroidCheatingDetectionStatus
    {
    public:
    
        // Methods
        EAndroidCheatingType get_AndroidCheatingType();  // RVA: 0x26F7B0
    };

} // namespace GUPS.AntiCheat.Detector.Android

namespace GUPS.AntiCheat.Core.Watch
{

    // Namespace: GUPS.AntiCheat.Core.Watch
    class IWatchAble`1
    {
    public:
    };

    // Namespace: GUPS.AntiCheat.Core.Watch
    class IWatchedSubject
    {
    public:
    };

    // Namespace: GUPS.AntiCheat.Core.Watch
    class IWatcher`1
    {
    public:
    };

} // namespace GUPS.AntiCheat.Core.Watch

namespace GUPS.AntiCheat.Core.Threat
{

    // Namespace: GUPS.AntiCheat.Core.Threat
    class IThreatRated
    {
    public:
    
        // Methods
        uint32_t get_ThreatRating();  // RVA: 0x276B00
    };

} // namespace GUPS.AntiCheat.Core.Threat

namespace GUPS.AntiCheat.Core.Random
{

    // Namespace: GUPS.AntiCheat.Core.Random
    class IRandomProvider
    {
    public:
    
        // Methods
        int32_t RandomInt32();  // RVA: 0x276B00
        int32_t RandomInt32(int32_t _Min, int32_t _Max);  // RVA: 0x280360
    };

    // Namespace: GUPS.AntiCheat.Core.Random
    class PseudoRandom
    {
    public:
        // Static fields
        // static Random* generator;
    
    
        // Methods
        int32_t RandomInt32();  // RVA: 0x211D060
        int32_t RandomInt32(int32_t _Min, int32_t _Max);  // RVA: 0x211D0E0
        void .ctor();  // RVA: 0x427B90
        static void .cctor();  // RVA: 0x211D170
    };

    // Namespace: GUPS.AntiCheat.Core.Random
    class TrueRandom
    {
    public:
        // Static fields
        // static RandomNumberGenerator* generator;
    
    
        // Methods
        int32_t RandomInt32();  // RVA: 0x211D2D0
        int32_t RandomInt32(int32_t _Min, int32_t _Max);  // RVA: 0x211D1F0
        void .ctor();  // RVA: 0x427B90
        static void .cctor();  // RVA: 0x211D380
    };

} // namespace GUPS.AntiCheat.Core.Random

namespace GUPS.AntiCheat.Core.Punisher
{

    // Namespace: GUPS.AntiCheat.Core.Punisher
    class IPunisher
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        bool get_IsSupported();  // RVA: 0x26F7B0
        bool get_IsActive();  // RVA: 0x26F7B0
        bool get_PunishOnce();  // RVA: 0x26F7B0
        bool get_HasPunished();  // RVA: 0x26F7B0
        void Punish();  // RVA: 0x26DD20
    };

} // namespace GUPS.AntiCheat.Core.Punisher

namespace GUPS.AntiCheat.Core.Protected
{

    // Namespace: GUPS.AntiCheat.Core.Protected
    class IProtected
    {
    public:
    };

} // namespace GUPS.AntiCheat.Core.Protected

namespace GUPS.AntiCheat.Core.Obfuscate
{

    // Namespace: GUPS.AntiCheat.Core.Obfuscate
    class IObfuscated
    {
    public:
    
        // Methods
        void Obfuscate();  // RVA: 0x26DD20
    };

} // namespace GUPS.AntiCheat.Core.Obfuscate

namespace GUPS.AntiCheat.Core.Monitor
{

    // Namespace: GUPS.AntiCheat.Core.Monitor
    class IMonitor
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        bool get_IsStarted();  // RVA: 0x26F7B0
        bool get_IsPaused();  // RVA: 0x26F7B0
        void Start();  // RVA: 0x26DD20
        void Pause();  // RVA: 0x26DD20
        void Resume();  // RVA: 0x26DD20
        void Stop();  // RVA: 0x26DD20
    };

} // namespace GUPS.AntiCheat.Core.Monitor

namespace GUPS.AntiCheat.Core.Integrity
{

    // Namespace: GUPS.AntiCheat.Core.Integrity
    class IDataIntegrity
    {
    public:
    
        // Methods
        bool get_HasIntegrity();  // RVA: 0x26F7B0
        bool CheckIntegrity();  // RVA: 0x26F7B0
    };

} // namespace GUPS.AntiCheat.Core.Integrity

namespace GUPS.AntiCheat.Core.HoneyPot
{

    // Namespace: GUPS.AntiCheat.Core.HoneyPot
    class IHoneyPot
    {
    public:
    
        // Methods
        void PlaceHoneyPot();  // RVA: 0x26DD20
    };

} // namespace GUPS.AntiCheat.Core.HoneyPot

namespace GUPS.AntiCheat.Core.Hash
{

    // Namespace: GUPS.AntiCheat.Core.Hash
    struct EHashAlgorithm
    {
    public:
        // Static fields
        // static EHashAlgorithm NONE;
        // static EHashAlgorithm MD5;
        // static EHashAlgorithm SHA1;
        // static EHashAlgorithm SHA256;
        // static EHashAlgorithm SHA384;
        // static EHashAlgorithm SHA512;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: GUPS.AntiCheat.Core.Hash
    class HashHelper
    {
    public:
    
        // Methods
        static Il2CppString* GetName(EHashAlgorithm _HashAlgorithm);  // RVA: 0x211C9A0
        static HashAlgorithm* GetHashAlgorithm(EHashAlgorithm _HashAlgorithm);  // RVA: 0x211C950
        static HashAlgorithm* GetHashAlgorithm(Il2CppString* _HashAlgorithm);  // RVA: 0x211C990
        static Byte[][] ComputeHash(EHashAlgorithm _HashAlgorithm, Byte[][] _Buffer);  // RVA: 0x211C6A0
        static Byte[][] ComputeHash(Il2CppString* _HashAlgorithm, Byte[][] _Buffer);  // RVA: 0x211C7B0
        static Byte[][] ComputeHash(EHashAlgorithm _HashAlgorithm, Stream* _Stream);  // RVA: 0x211C590
        static Byte[][] ComputeHash(Il2CppString* _HashAlgorithm, Stream* _Stream);  // RVA: 0x211C880
        static Il2CppString* ToHex(Byte[][] _Buffer, bool _UpperCase, bool _Separator);  // RVA: 0x211CA60
    };

} // namespace GUPS.AntiCheat.Core.Hash

namespace GUPS.AntiCheat.Core.Detector
{

    // Namespace: GUPS.AntiCheat.Core.Detector
    class IDetector
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        bool get_IsSupported();  // RVA: 0x26F7B0
        bool get_IsActive();  // RVA: 0x26F7B0
        bool get_PossibleCheatingDetected();  // RVA: 0x26F7B0
    };

    // Namespace: GUPS.AntiCheat.Core.Detector
    class IDetectorStatus
    {
    public:
    
        // Methods
        float get_PossibilityOfFalsePositive();  // RVA: 0x27F130
    };

} // namespace GUPS.AntiCheat.Core.Detector

// Namespace: <global>
struct __StaticArrayInitTypeSize=5064
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=7330
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=7330 4199D7388C5CD3F80B2C58D7411FC72012AD5304D94109CDEDC0B03C8BAFD5BE;
    // static __StaticArrayInitTypeSize=5064 674494F1BB41FD0BDFABF0606C7C5C7650CA4B04F771033FB012B3DA53146354;


    // Methods
    static uint32_t ComputeStringHash(Il2CppString* s);  // RVA: 0xF16BA0
};

