namespace PartyXBLCSharpSDK
{

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_ACCESSIBILITY_SETTINGS
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <LanguageCode>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint8_t <SpeechToTextEnabled>k__BackingField; // 0x0018
        uint8_t <TextToSpeechEnabled>k__BackingField; // 0x0019
        uint8_t pad_001A[0x2]; // 0x001A
        PARTY_GENDER <Gender>k__BackingField; // 0x001C
    
        // Methods
        void .ctor(PARTY_XBL_ACCESSIBILITY_SETTINGS interopStruct);
        uint8_t get_SpeechToTextEnabled();
        uint8_t get_TextToSpeechEnabled();
        MonoString* get_LanguageCode();
        PARTY_GENDER get_Gender();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_CHAT_PERMISSION_INFO
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_CHAT_PERMISSION_OPTIONS <ChatPermissionMask>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_XBL_CHAT_PERMISSION_MASK_REASON <Reason>k__BackingField; // 0x0014
    
        // Methods
        void .ctor(PARTY_XBL_CHAT_PERMISSION_INFO interopStruct);
        PARTY_CHAT_PERMISSION_OPTIONS get_ChatPermissionMask();
        PARTY_XBL_CHAT_PERMISSION_MASK_REASON get_Reason();
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_CHAT_PERMISSION_MASK_REASON
    {
    public:
        // Static fields
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_NO_RESTRICTION;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_DETERMINING;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_PRIVILEGE;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_PRIVACY;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_INVALID_TARGET_USER;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_XBOX_LIVE_SERVICE_ERROR;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_UNKNOWN_ERROR;
        // static PARTY_XBL_CHAT_PERMISSION_MASK_REASON PARTY_XBL_CHAT_PERMISSION_MASK_REASON_RESOLVE_USER_ISSUE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_CHAT_USER_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_CHAT_USER_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_XBL_CHAT_USER_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_XBL_CHAT_USER_HANDLE interopHandle, PARTY_XBL_CHAT_USER_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_XBL_CHAT_USER_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_XBL_CHAT_USER_HANDLE value);
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING
    {
    public:
        // Static fields
        // static PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING_ALLOWED;
        // static PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING_FRIENDS_ONLY;
        // static PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING_DISALLOWED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        int64_t GetHandleValue();
        void .ctor(int64_t handleValue);
        void .ctor(PARTY_XBL_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_XBL_HANDLE interopHandle, PARTY_XBL_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_XBL_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_XBL_HANDLE value);
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_HTTP_HEADER
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <name>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <value>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_XBL_HTTP_HEADER interopStruct);
        MonoString* get_name();
        MonoString* get_value();
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON
    {
    public:
        // Static fields
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_UNAUTHORIZED_LOCAL_CHAT_USER;
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_FAILED_TO_GET_TOKEN_AND_SIGNATURE_FOR_LOCAL_CHAT_USER;
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_XBOX_LIVE_SERVICE_TEMPORARILY_UNAVAILABLE;
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_INTERNET_CONNECTIVITY_ERROR;
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_XBOX_LIVE_USER_NOT_SIGNED_IN;
        // static PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON_UNKNOWN_ERROR;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE_TYPE <StateChangeType>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        intptr_t <StateChangeId>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_TYPE StateChangeType, intptr_t StateChangeId);
        static PARTY_XBL_STATE_CHANGE* CreateFromPtr(intptr_t stateChangePtr);
        PARTY_XBL_STATE_CHANGE_TYPE get_StateChangeType();
        intptr_t get_StateChangeId();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_TOKEN_AND_SIGNATURE_REQUESTED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* <method>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* <url>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_XBL_HTTP_HEADER[][] <headers>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] <body>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        uint32_t <correlationId>k__BackingField; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        bool <forceRefresh>k__BackingField; // 0x004C
        bool <allUsers>k__BackingField; // 0x004D
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        uint32_t get_correlationId();
        MonoString* get_method();
        MonoString* get_url();
        PARTY_XBL_HTTP_HEADER[][] get_headers();
        Byte[][] get_body();
        bool get_forceRefresh();
        bool get_allUsers();
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_CREATE_LOCAL_CHAT_USER_COMPLETED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_XBL_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t <errorDetail>k__BackingField; // 0x0034
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_XBL_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        MonoObject* get_asyncIdentifier();
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON <reason>k__BackingField; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t <errorDetail>k__BackingField; // 0x002C
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
        PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_LOGIN_TO_PLAYFAB_COMPLETED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <entityId>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <titlePlayerEntityToken>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_XBL_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int64_t <expirationTime>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_XBL_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
        MonoObject* get_asyncIdentifier();
        MonoString* get_entityId();
        MonoString* get_titlePlayerEntityToken();
        int64_t get_expirationTime();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_GET_ENTITY_IDS_FROM_XBOX_LIVE_USER_IDS_COMPLETED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* <xboxLiveSandbox>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_XBL_XBOX_USER_ID_TO_PLAYFAB_ENTITY_ID_MAPPING[][] <entityIdMappings>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_XBL_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_XBL_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        MonoString* get_xboxLiveSandbox();
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
        MonoObject* get_asyncIdentifier();
        PARTY_XBL_XBOX_USER_ID_TO_PLAYFAB_ENTITY_ID_MAPPING[][] get_entityIdMappings();
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_REQUIRED_CHAT_PERMISSION_INFO_CHANGED_STATE_CHANGE : public PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        PARTY_XBL_CHAT_USER_HANDLE* <localChatUser>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_CHAT_USER_HANDLE* <targetChatUser>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_XBL_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_XBL_CHAT_USER_HANDLE* get_localChatUser();
        PARTY_XBL_CHAT_USER_HANDLE* get_targetChatUser();
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_STATE_CHANGE_RESULT
    {
    public:
        // Static fields
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_SUCCEEDED;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_UNKNOWN_ERROR;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_CANCELED_BY_TITLE;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_USER_NOT_AUTHORIZED;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_LOGIN_TO_PLAYFAB_THROTTLED;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_PARTY_SERVICE_ERROR;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_XBOX_LIVE_SERVICE_TEMPORARILY_UNAVAILABLE;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_INTERNET_CONNECTIVITY_ERROR;
        // static PARTY_XBL_STATE_CHANGE_RESULT PARTY_XBL_STATE_CHANGE_RESULT_PLAYFAB_RATE_LIMIT_EXCEEDED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_STATE_CHANGE_TYPE
    {
    public:
        // Static fields
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_CREATE_LOCAL_CHAT_USER_COMPLETED;
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_LOCAL_CHAT_USER_DESTROYED;
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_REQUIRED_CHAT_PERMISSION_INFO_CHANGED;
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_TOKEN_AND_SIGNATURE_REQUESTED;
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_LOGIN_TO_PLAYFAB_COMPLETED;
        // static PARTY_XBL_STATE_CHANGE_TYPE PARTY_XBL_STATE_CHANGE_TYPE_GET_ENTITY_IDS_FROM_XBOX_LIVE_USER_IDS_COMPLETED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    struct PARTY_XBL_THREAD_ID
    {
    public:
        // Static fields
        // static PARTY_XBL_THREAD_ID PARTY_XBL_THREAD_ID_WEB_REQUEST;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK
    class PARTY_XBL_XBOX_USER_ID_TO_PLAYFAB_ENTITY_ID_MAPPING
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <playfabEntityId>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint64_t <xboxLiveUserId>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_XBL_XBOX_USER_ID_TO_PLAYFAB_ENTITY_ID_MAPPING interopStruct);
        uint64_t get_xboxLiveUserId();
        MonoString* get_playfabEntityId();
    };

    // Namespace: PartyXBLCSharpSDK
    class XBLSDK
    {
    public:
        // Static fields
        // static uint32_t PartyErrorXblChatUserAlreadyExists;
        // static ObjectPool* objectPool;
    
    
        // Methods
        static void .cctor();
        static uint32_t PartyXblChatUserIsLocal(PARTY_XBL_CHAT_USER_HANDLE* handle, bool isLocal);
        static uint32_t PartyXblChatUserGetXboxUserId(PARTY_XBL_CHAT_USER_HANDLE* handle, uint64_t xboxUserId);
        static uint32_t PartyXblChatUserSetCustomContext(PARTY_XBL_CHAT_USER_HANDLE* handle, MonoObject* customContext);
        static uint32_t PartyXblChatUserGetCustomContext(PARTY_XBL_CHAT_USER_HANDLE* handle, MonoObject* customContext);
        static uint32_t PartyXblLocalChatUserGetAccessibilitySettings(PARTY_XBL_CHAT_USER_HANDLE* handle, PARTY_XBL_ACCESSIBILITY_SETTINGS* settings);
        static uint32_t PartyXblLocalChatUserGetRequiredChatPermissionInfo(PARTY_XBL_CHAT_USER_HANDLE* handle, PARTY_XBL_CHAT_USER_HANDLE* targetChaUser, PARTY_XBL_CHAT_PERMISSION_INFO* chatPermissionInfo);
        static uint32_t PartyXblLocalChatUserGetCrossNetworkCommunicationPrivacySetting(PARTY_XBL_CHAT_USER_HANDLE* handle, PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING setting);
        static uint32_t PartyXblGetErrorMessage(uint32_t error, MonoString* errorMessage);
        static uint32_t PartyXblSetThreadAffinityMask(PARTY_XBL_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyXblGetThreadAffinityMask(PARTY_XBL_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyXblInitialize(MonoString* titleId, PARTY_XBL_HANDLE* handle);
        static uint32_t PartyXblCleanup(PARTY_XBL_HANDLE* handle);
        static uint32_t PartyXblStartProcessingStateChanges(PARTY_XBL_HANDLE* handle, System.Collections.Generic.List<PartyXBLCSharpSDK.PARTY_XBL_STATE_CHANGE>& stateChanges);
        static uint32_t PartyXblFinishProcessingStateChanges(PARTY_XBL_HANDLE* handle, System.Collections.Generic.List<PartyXBLCSharpSDK.PARTY_XBL_STATE_CHANGE> stateChanges);
        static uint32_t PartyXblCreateLocalChatUser(PARTY_XBL_HANDLE* handle, uint64_t xboxUserId, MonoObject* asyncIdentifier, PARTY_XBL_CHAT_USER_HANDLE* localXboxLiveUser);
        static uint32_t PartyXblCompleteGetTokenAndSignatureRequest(PARTY_XBL_HANDLE* handle, uint32_t correlationId, bool succeeded, MonoString* token, MonoString* signature);
        static uint32_t PartyXblCreateRemoteChatUser(PARTY_XBL_HANDLE* handle, uint64_t xboxUserId, PARTY_XBL_CHAT_USER_HANDLE* chatUser);
        static uint32_t PartyXblDestroyChatUser(PARTY_XBL_HANDLE* handle, PARTY_XBL_CHAT_USER_HANDLE* chatUser);
        static uint32_t PartyXblGetChatUsers(PARTY_XBL_HANDLE* handle, PARTY_XBL_CHAT_USER_HANDLE[][] chatUsers);
        static uint32_t PartyXblLoginToPlayFab(PARTY_XBL_CHAT_USER_HANDLE* localChatUser, MonoObject* asyncIdentifier);
        static uint32_t PartyXblGetEntityIdsFromXboxLiveUserIds(PARTY_XBL_HANDLE* handle, UInt64[][] xboxLiveUserIds, PARTY_XBL_CHAT_USER_HANDLE* localChatUser, MonoObject* asyncIdentifier);
        void .ctor();
    };

} // namespace PartyXBLCSharpSDK

namespace PartyXBLCSharpSDK.Interop
{

    // Namespace: PartyXBLCSharpSDK.Interop
    class PartyXblInterop
    {
    public:
        // Static fields
        // static MonoString* ThunkDllName;
    
    
        // Methods
        static uint32_t PartyXblStartProcessingStateChanges(PARTY_XBL_HANDLE handle, uint32_t stateChangeCount, intptr_t stateChanges);
        static uint32_t PartyXblDestroyChatUser(PARTY_XBL_HANDLE handle, PARTY_XBL_CHAT_USER_HANDLE chatUser);
        static uint32_t PartyXblInitialize(intptr_t partyHandle, Byte[][] titleId, PARTY_XBL_HANDLE handle);
        static uint32_t PartyXblCompleteGetTokenAndSignatureRequest(PARTY_XBL_HANDLE handle, uint32_t correlationId, uint8_t succeeded, Byte[][] token, Byte[][] signature);
        static uint32_t PartyXblLocalChatUserGetCrossNetworkCommunicationPrivacySetting(PARTY_XBL_CHAT_USER_HANDLE handle, PARTY_XBL_CROSS_NETWORK_COMMUNICATION_PRIVACY_SETTING setting);
        static uint32_t PartyXblLocalChatUserGetAccessibilitySettings(PARTY_XBL_CHAT_USER_HANDLE handle, PARTY_XBL_ACCESSIBILITY_SETTINGS settings);
        static uint32_t PartyXblCleanup(PARTY_XBL_HANDLE handle);
        static uint32_t PartyXblGetChatUsers(PARTY_XBL_HANDLE handle, uint32_t chatUserCount, intptr_t chatUsers);
        static uint32_t PartyXblChatUserGetXboxUserId(PARTY_XBL_CHAT_USER_HANDLE handle, uint64_t xboxUserId);
        static uint32_t PartyXblLoginToPlayFab(PARTY_XBL_CHAT_USER_HANDLE localChatUser, intptr_t asyncIdentifier);
        static uint32_t PartyXblCreateRemoteChatUser(PARTY_XBL_HANDLE handle, uint64_t xboxUserId, PARTY_XBL_CHAT_USER_HANDLE chatUser);
        static uint32_t PartyXblSetThreadAffinityMask(PARTY_XBL_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyXblGetThreadAffinityMask(PARTY_XBL_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyXblChatUserIsLocal(PARTY_XBL_CHAT_USER_HANDLE handle, uint8_t isLocal);
        static uint32_t PartyXblFinishProcessingStateChanges(PARTY_XBL_HANDLE handle, uint32_t stateChangeCount, intptr_t stateChanges);
        static uint32_t PartyXblChatUserSetCustomContext(PARTY_XBL_CHAT_USER_HANDLE handle, intptr_t customContext);
        static uint32_t PartyXblChatUserGetCustomContext(PARTY_XBL_CHAT_USER_HANDLE handle, intptr_t customContext);
        static uint32_t PartyXblGetErrorMessage(uint32_t error, UTF8StringPtr errorMessage);
        static uint32_t PartyXblCreateLocalChatUser(PARTY_XBL_HANDLE handle, uint64_t xboxUserId, intptr_t asyncIdentifier, PARTY_XBL_CHAT_USER_HANDLE localXboxLiveUser);
        static uint32_t PartyXblLocalChatUserGetRequiredChatPermissionInfo(PARTY_XBL_CHAT_USER_HANDLE handle, PARTY_XBL_CHAT_USER_HANDLE targetChaUser, PARTY_XBL_CHAT_PERMISSION_INFO chatPermissionInfo);
        static uint32_t PartyXblGetEntityIdsFromXboxLiveUserIds(PARTY_XBL_HANDLE handle, uint32_t xboxLiveUserIdCount, UInt64[][] xboxLiveUserIds, PARTY_XBL_CHAT_USER_HANDLE localChatUser, intptr_t asyncIdentifier);
        void .ctor();
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_ACCESSIBILITY_SETTINGS
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t speechToTextEnabled; // 0x0010
        uint8_t textToSpeechEnabled; // 0x0011
        <languageCode>e__FixedBuffer languageCode; // 0x0012
        uint8_t pad_0013[0x55]; // 0x0013
        PARTY_GENDER gender; // 0x0068
    
        // Methods
        MonoString* GetLanguageCode();
        void .ctor(PARTY_XBL_ACCESSIBILITY_SETTINGS* publicObject);
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_CHAT_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_CHAT_PERMISSION_INFO
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_CHAT_PERMISSION_OPTIONS chatPermissionMask; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_XBL_CHAT_PERMISSION_MASK_REASON reason; // 0x0014
    
        // Methods
        void .ctor(PARTY_XBL_CHAT_PERMISSION_INFO* publicObject);
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_CHAT_USER_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    
        // Methods
        void .ctor(int64_t handleValue);
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_HTTP_HEADER
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        intptr_t value; // 0x0018
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE_TYPE stateChangeType; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_CREATE_LOCAL_CHAT_USER_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_XBL_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        intptr_t asyncIdentifier; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0028
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_LOGIN_TO_PLAYFAB_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_XBL_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t asyncIdentifier; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t entityId; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t titlePlayerEntityToken; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int64_t expirationTime; // 0x0040
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_GET_ENTITY_IDS_FROM_XBOX_LIVE_USER_IDS_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_XBL_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        intptr_t xboxLiveSandbox; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        uint32_t entityIdMappingCount; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        intptr_t entityIdMappings; // 0x0040
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_REASON reason; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t errorDetail; // 0x0024
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_REQUIRED_CHAT_PERMISSION_INFO_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_XBL_CHAT_USER_HANDLE targetChatUser; // 0x0020
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_TOKEN_AND_SIGNATURE_REQUESTED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t correlationId; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        intptr_t method; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        intptr_t url; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t headerCount; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t headers; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        uint32_t bodySize; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        intptr_t body; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        uint8_t forceRefresh; // 0x0048
        uint8_t allUsers; // 0x0049
        uint8_t pad_004A[0x6]; // 0x004A
        PARTY_XBL_CHAT_USER_HANDLE localChatUser; // 0x0050
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_STATE_CHANGE_UNION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_STATE_CHANGE stateChange; // 0x0010
        PARTY_XBL_CREATE_LOCAL_CHAT_USER_COMPLETED_STATE_CHANGE createLocalChatUserCompleted; // 0x0010
        PARTY_XBL_LOGIN_TO_PLAYFAB_COMPLETED_STATE_CHANGE loginToPlayfabCompleted; // 0x0010
        PARTY_XBL_GET_ENTITY_IDS_FROM_XBOX_LIVE_USER_IDS_COMPLETED_STATE_CHANGE getEntityIdsFromXboxLiveUserIdsCompleted; // 0x0010
        PARTY_XBL_LOCAL_CHAT_USER_DESTROYED_STATE_CHANGE localChatUserDestroyed; // 0x0010
        PARTY_XBL_REQUIRED_CHAT_PERMISSION_INFO_CHANGED_STATE_CHANGE requiredChatPermissionInfoChanged; // 0x0010
        PARTY_XBL_TOKEN_AND_SIGNATURE_REQUESTED_STATE_CHANGE tokenAndSignatureRequested; // 0x0010
    };

    // Namespace: PartyXBLCSharpSDK.Interop
    struct PARTY_XBL_XBOX_USER_ID_TO_PLAYFAB_ENTITY_ID_MAPPING
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint64_t xboxLiveUserId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        intptr_t playfabEntityId; // 0x0018
    };

} // namespace PartyXBLCSharpSDK.Interop

namespace PlayFab.Party
{

    // Namespace: PlayFab.Party
    struct AccessibilityMode
    {
    public:
        // Static fields
        // static AccessibilityMode None;
        // static AccessibilityMode PlatformDefault;
        // static AccessibilityMode Enabled;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    struct ChatMessageType
    {
    public:
        // Static fields
        // static ChatMessageType Text;
        // static ChatMessageType SpeechToText;
        // static ChatMessageType TextToSpeech;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    struct ChatState
    {
    public:
        // Static fields
        // static ChatState NoAudioInput;
        // static ChatState Muted;
        // static ChatState MutedByPlatform;
        // static ChatState Silent;
        // static ChatState Talking;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    struct DeliveryOption
    {
    public:
        // Static fields
        // static DeliveryOption BestEffort;
        // static DeliveryOption Guaranteed;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    class PlayFabEventTracer : public SingletonMonoBehaviour`1
    {
    public:
        // Static fields
        // static MonoString* eventNamespace;
        // static float delayBetweenEntityLoggedIn;
        // static int32_t maxBatchSizeInEvents;
    
        uint8_t pad_0000[0x28]; // 0x0000
        System.Collections.Generic.Queue<PlayFab.EventsModels.EventContents> eventsRequests; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.Queue<PlayFab.EventsModels.EventContents> eventsPending; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EntityKey* entityKey; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PlayFabEventsInstanceAPI* eventApi; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Guid gameSessionID; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        int64_t lastErrorTimeInMillisecond; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t retryCount; // 0x0060
    
        // Methods
        void .ctor();
        void SetCommonTelemetryProperties(System.Collections.Generic.Dictionary<System.String,System.Object> payload);
        static int64_t GetCurrentTimeInMilliseconds();
        void OnPlayFabMultiPlayerManagerInitialize();
        IEnumerator* WaitUntilEntityLoggedIn(float secondsBetweenWait);
        void DoWork();
        void EventSentSuccessfulCallback(WriteEventsResponse* response);
        void EventSentErrorCallback(PlayFabError* response);
        void OnEnable();
        void OnDisable();
        void OnDestroy();
    };

    // Namespace: PlayFab.Party
    class PlayFabLocalPlayer : public PlayFabPlayer
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        MonoString* _preferredLanguageCode; // 0x0050
    
        // Methods
        void .ctor();
        bool get_IsChatControlAvailable();
        MonoString* get_LanguageCode();
        void set_LanguageCode(MonoString* value);
        MonoString* get_PlatformSpecificUserId();
    };

    // Namespace: PlayFab.Party
    class PlayFabMultiplayerManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS _PLATFORM_DEFAULT_CHAT_TRANSCRIPTION_OPTIONS;
        // static MonoString* _ENTITY_TYPE_TITLE_PLAYER_ACCOUNT;
        // static MonoString* _ErrorMessageNoUserLoggedIn;
        // static MonoString* _ErrorMessageMissingNetworkId;
        // static MonoString* _ErrorMessageMissingNetworkConfiguration;
        // static MonoString* _ErrorMessageMissingPlayFabTitleId;
        // static MonoString* _ErrorMessagePartyAlreadyInitialized;
        // static MonoString* _ErrorMessagePlayerNotFound;
        // static MonoString* _ErrorMessageEmptyDataMessagePayload;
        // static MonoString* _ErrorMessageCannotCallAPINotConnectedToNetwork;
        // static MonoString* _ErrorMessageMissingMultiplayerManagerPrefab;
        // static uint32_t _c_ErrorFailedToFindResourceSpecified;
        // static uint32_t _c_ErrorAlreadyInitialized;
        // static uint32_t _c_ErrorObjectIsBeingDestroyed;
        // static MonoString* _ErrorMessageTooManyRecipients;
        // static int32_t _DEVICES_PER_USER_COUNT;
        // static int32_t _ENDPOINTS_PER_DEVICE_COUNT;
        // static int32_t _USERS_PER_DEVICE;
        // static MonoString* _NETWORK_ID_INVITE_AND_DESCRIPTOR_SEPERATOR;
        // static PlayFabMultiplayerManager* _multiplayerManager;
        // static uint32_t _INTERNAL_EXCHANGE_MESSAGE_BUFFER_SIZE;
        // static MonoString* _INTERNAL_EXCHANGE_REQUEST_MESSAGE_PREFIX;
        // static PARTY_CHAT_PERMISSION_OPTIONS _CHAT_PERMISSIONS_ALL;
        // static LogLevelType _logLevel;
        // static bool _logLevelSetByUser;
        // static PARTY_ENDPOINT_HANDLE[][] _emptyEndpointHandlesArray;
        // static PARTY_CHAT_CONTROL_HANDLE[][] _emptyChatControlHandlesArray;
    
        uint8_t pad_0000[0x20]; // 0x0000
        IPlayFabChatPlatformPolicyProvider* _platformPolicyProvider; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PlayFabLocalPlayer* _localPlayer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* _preferredLocalPlayerLanguageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* _networkId; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoString* _generatedInvitationId; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<PlayFab.Party.PlayFabPlayer> _remotePlayers; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        PARTY_HANDLE* _partyHandle; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        PARTY_NETWORK_HANDLE* _networkHandle; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        PARTY_LOCAL_USER_HANDLE* _localUserHandle; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        PARTY_DEVICE_HANDLE* _localDeviceHandle; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        PARTY_ENDPOINT_HANDLE* _localEndPointHandle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        PARTY_CHAT_CONTROL_HANDLE* _localChatControlHandle; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        PARTY_NETWORK_DESCRIPTOR* _networkDescriptor; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION* _defaultQueuingConfiguration; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_ENDPOINT_HANDLE[]> _cachedSendMessageEndpointHandles; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_CHAT_CONTROL_HANDLE[]> _cachedSendMessageChatControlHandles; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        PARTY_CHAT_CONTROL_HANDLE[][] _cachedAllChatHandlesList; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_STATE_CHANGE> _partyStateChanges; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        QueuedStartCreateAndJoinNetworkOp _queuedStartCreateAndJoinNetworkCreateLocalUserOp; // 0x00B0
        uint8_t pad_00B1[0xF]; // 0x00B1
        QueuedCreateAndJoinAfterLeaveNetworkOp _queuedCreateAndJoinAfterLeaveNetworkOp; // 0x00C0
        uint8_t pad_00C1[0xF]; // 0x00C1
        QueuedJoinNetworkOp _queuedJoinNetworkCreateLocalUserOp; // 0x00D0
        uint8_t pad_00D1[0xF]; // 0x00D1
        QueuedCompleteJoinAfterLeaveNetworkOp _queuedCompleteJoinAfterLeaveNetworkOp; // 0x00E0
        uint8_t pad_00E1[0xF]; // 0x00E1
        System.Collections.Generic.List<PlayFab.Party.PlayFabMultiplayerManager.WorkTask> _tasks; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        WorkTask* _runningTask; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        OnNetworkJoinedHandler* OnNetworkJoined; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        OnNetworkLeftHandler* OnNetworkLeft; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        OnRemotePlayerJoinedHandler* OnRemotePlayerJoined; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        OnRemotePlayerLeftHandler* OnRemotePlayerLeft; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        OnNetworkChangedHandler* OnNetworkChanged; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        OnChatMessageReceivedHandler* OnChatMessageReceived; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        OnDataMessageReceivedHandler* OnDataMessageReceived; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        OnDataMessageReceivedNoCopyHandler* OnDataMessageNoCopyReceived; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        OnErrorEventHandler* OnError; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        bool _translateChat; // 0x0148
        uint8_t pad_0149[0x3]; // 0x0149
        AccessibilityMode _textToSpeechMode; // 0x014C
        uint8_t pad_014D[0x3]; // 0x014D
        AccessibilityMode _speechToTextMode; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        PARTY_SEND_MESSAGE_OPTIONS _defaultSendOptions; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        _InternalPlayFabMultiplayerManagerState _playFabMultiplayerManagerState; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        bool _isLeaveNetworkInProgress; // 0x015C
        bool _isJoinNetworkInProgress; // 0x015D
        bool gameObjectPersisted; // 0x015E
    
        // Methods
        void Awake();
        void Start();
        void ManagedCleanupStep();
        void Update();
        static PlayFabMultiplayerManager* Get();
        LogLevelType get_LogLevel();
        void set_LogLevel(LogLevelType value);
        PlayFabLocalPlayer* get_LocalPlayer();
        MonoString* get_NetworkId();
        PlayFabMultiplayerManagerState get_State();
        System.Collections.Generic.IList<PlayFab.Party.PlayFabPlayer> get_RemotePlayers();
        bool get_TranslateChat();
        void set_TranslateChat(bool value);
        AccessibilityMode get_SpeechToTextMode();
        void set_SpeechToTextMode(AccessibilityMode value);
        AccessibilityMode get_TextToSpeechMode();
        void set_TextToSpeechMode(AccessibilityMode value);
        void add_OnNetworkJoined(OnNetworkJoinedHandler* value);
        void remove_OnNetworkJoined(OnNetworkJoinedHandler* value);
        void add_OnNetworkLeft(OnNetworkLeftHandler* value);
        void remove_OnNetworkLeft(OnNetworkLeftHandler* value);
        void add_OnRemotePlayerJoined(OnRemotePlayerJoinedHandler* value);
        void remove_OnRemotePlayerJoined(OnRemotePlayerJoinedHandler* value);
        void add_OnRemotePlayerLeft(OnRemotePlayerLeftHandler* value);
        void remove_OnRemotePlayerLeft(OnRemotePlayerLeftHandler* value);
        void add_OnNetworkChanged(OnNetworkChangedHandler* value);
        void remove_OnNetworkChanged(OnNetworkChangedHandler* value);
        void add_OnChatMessageReceived(OnChatMessageReceivedHandler* value);
        void remove_OnChatMessageReceived(OnChatMessageReceivedHandler* value);
        void add_OnDataMessageReceived(OnDataMessageReceivedHandler* value);
        void remove_OnDataMessageReceived(OnDataMessageReceivedHandler* value);
        void add_OnDataMessageNoCopyReceived(OnDataMessageReceivedNoCopyHandler* value);
        void remove_OnDataMessageNoCopyReceived(OnDataMessageReceivedNoCopyHandler* value);
        void add_OnError(OnErrorEventHandler* value);
        void remove_OnError(OnErrorEventHandler* value);
        void Resume();
        void Suspend();
        void CreateAndJoinNetwork();
        void CreateAndJoinNetwork(PlayFabNetworkConfiguration* networkConfiguration);
        void JoinNetwork(MonoString* networkId);
        void LeaveNetwork();
        void SendDataMessageToAllPlayers(Byte[][] buffer);
        bool SendDataMessage(Byte[][] buffer, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients, DeliveryOption deliveryOption);
        void SendDataMessage(intptr_t buffer, uint32_t bufferSize, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients, DeliveryOption deliveryOption);
        void SendChatMessageToAllPlayers(MonoString* message);
        void SendChatMessage(MonoString* message, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients);
        void UpdateEntityToken(MonoString* entityToken);
        static void _LogError(MonoString* message);
        static void _LogError(uint32_t code);
        static void _LogError(uint32_t code, PlayFabMultiplayerManagerErrorType type);
        static void _LogError(uint32_t code, MonoString* message, PlayFabMultiplayerManagerErrorArgs* args);
        static void _LogWarning(MonoString* warningMessage);
        static void _LogInfo(MonoString* infoMessage);
        bool _StartsWithSequence(Byte[][] buffer, Byte[][] sequence);
        bool IsInternalMessage(intptr_t messageBuffer, uint32_t messageSize);
        PlayFabPlayer* GetPlayerByEntityId(MonoString* entityId);
        PARTY_ENDPOINT_HANDLE[][] EndPointHandlesFromPlayFabPlayerListNoGC(System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> playerList);
        PARTY_CHAT_CONTROL_HANDLE[][] ChatControlHandlesFromPlayFabPlayerListNoGC(System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> playerList);
        void _Initialize();
        void _CleanUp();
        void InitializeImpl();
        void CleanUpImpl();
        PARTY_NETWORK_DESCRIPTOR* GetNetworkDescriptorFromNetworkId(MonoString* networkId);
        void ProcessQueuedOperations();
        void GetEntityTokenCompleted(GetEntityTokenResponse* response);
        void _CreateLocalUser(EntityKey* entityKey, MonoString* entityToken);
        void DropCurrentQueuedOps();
        void GetEntityTokenFailed(PlayFabError* error);
        void CreateAndJoinNetworkImplStart(PlayFabNetworkConfiguration* networkConfiguration);
        void CreateAndJoinNetworkImplComplete(PlayFabNetworkConfiguration* networkConfiguration);
        void JoinNetworkImplStart(MonoString* networkId);
        void JoinNetworkImplComplete(MonoString* networkId);
        void LeaveNetworkImpl(bool wasCallInitiatedByDeveloper);
        void UpdateNetworkId(MonoString* invitationId, PARTY_NETWORK_DESCRIPTOR* networkDescriptor);
        void ResetNetworkManagerStateAfterFailureToConnect();
        void AuthenticateLocalUserStart();
        void AuthenticateLocalUserComplete();
        void SetUserSettings();
        bool IsTextToSpeechEnabled();
        void SetTextChatOptions(PARTY_TEXT_CHAT_OPTIONS textChatOptions);
        void SetTranscriptionOptions(PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS transcriptionOptions);
        void _SendDataMessageToAllPlayers(Byte[][] buffer);
        bool _SendDataMessage(Byte[][] buffer, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients, DeliveryOption deliveryOption);
        void _SendDataMessage(intptr_t buffer, uint32_t bufferSize, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients, DeliveryOption deliveryOption);
        void _SendChatMessageToAllPlayers(MonoString* message);
        void _SendChatMessage(MonoString* message, System.Collections.Generic.IEnumerable<PlayFab.Party.PlayFabPlayer> recipients);
        void _SendChatMessageImpl(MonoString* message, PARTY_CHAT_CONTROL_HANDLE[][] targetChatControlHandles);
        PARTY_SEND_MESSAGE_OPTIONS SendOptionsFromDeliveryOption(DeliveryOption deliveryOption);
        void UpdateCachedChatControlsList();
        void _SetMuted(EntityKey* entityKey, bool isMuted, bool isLocal);
        void _RaiseDataMessageReceivedEvent(PlayFabPlayer* fromPlayer, intptr_t buffer, uint32_t bufferSize);
        void _RaiseChatMessageReceivedEvent(PlayFabPlayer* fromPlayer, MonoString* message, ChatMessageType chatMessageType);
        bool _IsOnDataMessageSubscribedTo();
        MonoString* _GetPlatformSpecificUserId(EntityKey* entityKey);
        ChatState _GetChatState(EntityKey* entityKey, bool _isLocal);
        float _GetVoiceLevel(EntityKey* entityKey);
        void _SetVoiceLevel(EntityKey* entityKey, float voiceLevel, bool _isLocal);
        MonoString* _GetLanguageCode(EntityKey* entityKey, bool isLocal);
        void _SetPlayFabMultiplayerManagerInternalState(_InternalPlayFabMultiplayerManagerState state);
        void SetRemotePlayerChatControlHandle(MonoString* entityId, PARTY_CHAT_CONTROL_HANDLE* remoteChatControlHandle);
        bool PartySucceeded(uint32_t errorCode);
        bool PartySucceeded(uint32_t errorCode, PlayFabMultiplayerManagerErrorType errorType);
        bool InternalCheckStateChangeSucceededOrLogErrorIfFailed(PARTY_STATE_CHANGE_RESULT result, uint32_t errorCode);
        bool InternalCheckStateChangeSucceededOrLogErrorIfFailed(PARTY_XBL_STATE_CHANGE_RESULT result, uint32_t errorCode);
        void InternalCheckStateChangeSucceededOrLogErrorIfFailedImpl(MonoString* stateChangeString, uint32_t errorCode);
        bool RaiseErrorIfStateChangedFailed(PARTY_STATE_CHANGE_RESULT result, uint32_t errorCode);
        void ProcessStateChanges();
        void ResetParty();
        Task* PEWClearParty();
        void AddTask(WorkTask* task);
        bool IsNotInitializedState();
        bool IsPendingInitializationState();
        bool IsInitializedState();
        bool IsConnectedToNetworkState();
        void ProcessTask();
        bool HasTasks();
        void .ctor();
        static void .cctor();
    };

    // Namespace: PlayFab.Party
    class PlayFabMultiplayerManagerErrorArgs : public EventArgs
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Message>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t <Code>k__BackingField; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        PlayFabMultiplayerManagerErrorType <Type>k__BackingField; // 0x001C
    
        // Methods
        void .ctor();
        void .ctor(int32_t code, MonoString* message, PlayFabMultiplayerManagerErrorType type);
        int32_t get_Code();
        void set_Code(int32_t value);
        MonoString* get_Message();
        void set_Message(MonoString* value);
        PlayFabMultiplayerManagerErrorType get_Type();
        void set_Type(PlayFabMultiplayerManagerErrorType value);
    };

    // Namespace: PlayFab.Party
    struct PlayFabMultiplayerManagerErrorType
    {
    public:
        // Static fields
        // static PlayFabMultiplayerManagerErrorType Unknown;
        // static PlayFabMultiplayerManagerErrorType Error;
        // static PlayFabMultiplayerManagerErrorType NetworkCreateError;
        // static PlayFabMultiplayerManagerErrorType NetworkJoinError;
        // static PlayFabMultiplayerManagerErrorType NetworkLeaveError;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    struct PlayFabMultiplayerManagerState
    {
    public:
        // Static fields
        // static PlayFabMultiplayerManagerState NotInitialized;
        // static PlayFabMultiplayerManagerState Initialized;
        // static PlayFabMultiplayerManagerState ConnectingToNetwork;
        // static PlayFabMultiplayerManagerState ConnectedToNetwork;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Party
    class PlayFabNetworkConfiguration
    {
    public:
        // Static fields
        // static uint32_t _MAX_SUPPORTED_PLAYER_COUNT;
        // static uint32_t _DEFAULT_SUPPORTED_PLAYER_COUNT;
        // static MonoString* _ErrorMessageMaxUserCountValueOutOfRange;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t _maxPlayerCount; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS _directPeerConnectivityOptions; // 0x0014
    
        // Methods
        void .ctor();
        uint32_t get_MaxPlayerCount();
        void set_MaxPlayerCount(uint32_t value);
        PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS get_DirectPeerConnectivityOptions();
        void set_DirectPeerConnectivityOptions(PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS value);
    };

    // Namespace: PlayFab.Party
    class Version
    {
    public:
        // Static fields
        // static MonoString* PartyNativeVersion;
        // static MonoString* PartyUnityVersion;
    
    
        // Methods
        static void .cctor();
    };

    // Namespace: PlayFab.Party
    class PlayFabPlayer
    {
    public:
        // Static fields
        // static MonoString* _ErrorMessageVoiceLevelOutOfRange;
    
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* _entityToken; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* _platformSpecificUserId; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_ENDPOINT_HANDLE* _endPointHandle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_CHAT_CONTROL_HANDLE* _chatControlHandle; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_XBL_CHAT_USER_HANDLE* _xblChatUserHandle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EntityKey* <EntityKey>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        ChatState _chatState; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float _voiceLevel; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool _isMuted; // 0x0048
        bool _isLocal; // 0x0049
        bool _mutedByPlatform; // 0x004A
    
        // Methods
        void .ctor();
        void _SetEntityKey(EntityKey* entityKey);
        ChatState get_ChatState();
        EntityKey* get_EntityKey();
        void set_EntityKey(EntityKey* value);
        bool get_IsLocal();
        bool get_IsMuted();
        void set_IsMuted(bool value);
        float get_VoiceLevel();
        void set_VoiceLevel(float value);
    };

} // namespace PlayFab.Party

namespace PlayFab.Party._Internal
{

    // Namespace: PlayFab.Party._Internal
    class IPlayFabChatPlatformPolicyProvider
    {
    public:
    
        // Methods
        void SignIn();
        void SendPlatformSpecificUserId(System.Collections.Generic.List<PlayFab.Party.PlayFabPlayer> targetPlayers);
        PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS GetPlatformUserChatTranscriptionPreferences();
        bool IsTextToSpeechEnabled();
        PARTY_CHAT_PERMISSION_OPTIONS GetChatPermissions(PlayFabPlayer* targetPlayer);
        void CreateOrUpdatePlatformUser(PlayFabPlayer* player, bool isLocal);
        void ProcessEndpointMessage(PlayFabPlayer* fromPlayer, intptr_t messageBuffer, uint32_t messageSize, bool isInternalMessage);
        void ProcessQueuedOperations();
        void ProcessStateChanges();
        bool CleanUp();
    };

    // Namespace: PlayFab.Party._Internal
    class PlayFabChatXboxLivePolicyProvider
    {
    public:
        // Static fields
        // static PlayFabChatXboxLivePolicyProvider* _xblPolicyProvider;
        // static PARTY_CHAT_PERMISSION_OPTIONS _CHAT_PERMISSIONS_ALL;
        // static uint32_t _INTERNAL_XUID_EXCHANGE_MESSAGE_BUFFER_SIZE;
        // static MonoString* _XUID_EXCHANGE_REQUEST_MESSAGE_PREFIX;
        // static MonoString* _XUID_EXCHANGE_RESPONSE_MESSAGE_PREFIX;
        // static int32_t _E_GAMEUSER_RESOLVE_USER_ISSUE_REQUIRED;
        // static MonoString* _ErrorMessageGamingRuntimeNotInitialized;
        // static MonoString* _ErrorMessageCouldNotGetXuid;
        // static MonoString* _ErrorMessageCouldNotGetXboxLiveToken;
        // static MonoString* _ErrorMessageXboxLiveSignInFailed;
    
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_XBL_HANDLE* _xblPartyHandle; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PlayFabMultiplayerManager* _multiplayerManager; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_XBL_CHAT_USER_HANDLE* _xblLocalChatUserHandle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        QueuedUpdateChatPermissionsOp _queuedUpdateChatPermissionsOp; // 0x0028
        uint8_t pad_0029[0x17]; // 0x0029
        XUserHandle* _xblLocalUserHandle; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.Dictionary<PlayFab.Party.PlayFabPlayer,PartyXBLCSharpSDK.PARTY_XBL_CHAT_PERMISSION_INFO> _playerChatPermissions; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<PlayFab.Party._Internal.PlayFabChatXboxLivePolicyProvider.QueuedCreateRemoteXboxLiveChatUserOp> _queuedCreateRemoteXboxLiveChatUserOps; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<PartyXBLCSharpSDK.PARTY_XBL_STATE_CHANGE> _xblStateChanges; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Byte[][] _internalXuidExchangeMessageBuffer; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Byte[][] _XUID_EXCHANGE_REQUEST_AS_BYTES; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Byte[][] _XUID_EXCHANGE_RESPONSE_AS_BYTES; // 0x0070
    
        // Methods
        static PlayFabChatXboxLivePolicyProvider* Get();
        void .ctor();
        bool CleanUp();
        void SignIn();
        void CreateOrUpdatePlatformUser(PlayFabPlayer* player, bool isLocal);
        PARTY_CHAT_PERMISSION_OPTIONS GetChatPermissions(PlayFabPlayer* targetPlayer);
        void ProcessEndpointMessage(PlayFabPlayer* fromPlayer, intptr_t messageBuffer, uint32_t messageSize, bool isInternalMessage);
        PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS GetPlatformUserChatTranscriptionPreferences();
        bool IsTextToSpeechEnabled();
        void SendPlatformSpecificUserId(System.Collections.Generic.List<PlayFab.Party.PlayFabPlayer> targetPlayers);
        void ProcessQueuedOperations();
        void ProcessStateChanges();
        void UpdateChatPermissionInfoStart(PARTY_XBL_CHAT_USER_HANDLE* localXblChatUser, PARTY_XBL_CHAT_USER_HANDLE* targetXblChatUser);
        bool IsReadyToSetChatPermissions(PARTY_XBL_CHAT_USER_HANDLE* localXblChatUser, PARTY_XBL_CHAT_USER_HANDLE* targetXblChatUser);
        void UpdateChatPermissionInfoComplete(PARTY_XBL_CHAT_USER_HANDLE* localXblChatUser, PARTY_XBL_CHAT_USER_HANDLE* targetXblChatUser);
        void OnPlayFabLoginSuccess(PARTY_XBL_LOGIN_TO_PLAYFAB_COMPLETED_STATE_CHANGE* loginResult);
        void SignInSilentlyComplete(int32_t hresult, XUserHandle* userHandle);
        void TryCreateRemoteXboxLiveChatUser(PlayFabPlayer* otherPlayer);
        PlayFabPlayer* GetPlayerByXuid(uint64_t xuid);
        bool Succeeded(uint32_t errorCode);
        bool HrSucceeded(int32_t hresult);
    };

} // namespace PlayFab.Party._Internal

namespace PartyCSharpSDK
{

    // Namespace: PartyCSharpSDK
    class PARTY_AUDIO_FORMAT
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t <SamplesPerSecond>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t <ChannelMask>k__BackingField; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint16_t <ChannelCount>k__BackingField; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        uint16_t <BitsPerSample>k__BackingField; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        PARTY_AUDIO_SAMPLE_TYPE <SampleType>k__BackingField; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint8_t <Interleaved>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PARTY_AUDIO_FORMAT interopStruct);
        uint32_t get_SamplesPerSecond();
        uint32_t get_ChannelMask();
        uint16_t get_ChannelCount();
        uint16_t get_BitsPerSample();
        PARTY_AUDIO_SAMPLE_TYPE get_SampleType();
        uint8_t get_Interleaved();
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_AUDIO_INPUT_STATE
    {
    public:
        // Static fields
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_NO_INPUT;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_INITIALIZED;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_NOT_FOUND;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_USER_CONSENT_DENIED;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_UNSUPPORTED_FORMAT;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_ALREADY_IN_USE;
        // static PARTY_AUDIO_INPUT_STATE PARTY_AUDIO_INPUT_STATE_UNKNOWN_ERROR;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_AUDIO_MANIPULATION_SINK_STREAM_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_AUDIO_FORMAT* <Format>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_AUDIO_MANIPULATION_SINK_STREAM_CONFIGURATION interopStruct);
        PARTY_AUDIO_FORMAT* get_Format();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_AUDIO_MANIPULATION_SOURCE_STREAM_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_AUDIO_FORMAT* <Format>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t <MaxTotalAudioBufferSizeInMilliseconds>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_AUDIO_MANIPULATION_SOURCE_STREAM_CONFIGURATION interopStruct);
        PARTY_AUDIO_FORMAT* get_Format();
        uint32_t get_MaxTotalAudioBufferSizeInMilliseconds();
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_AUDIO_OUTPUT_STATE
    {
    public:
        // Static fields
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_NO_OUTPUT;
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_INITIALIZED;
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_NOT_FOUND;
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_UNSUPPORTED_FORMAT;
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_ALREADY_IN_USE;
        // static PARTY_AUDIO_OUTPUT_STATE PARTY_AUDIO_OUTPUT_STATE_UNKNOWN_ERROR;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_AUDIO_SAMPLE_TYPE
    {
    public:
        // Static fields
        // static PARTY_AUDIO_SAMPLE_TYPE PARTY_AUDIO_SAMPLE_TYPE_INTEGER;
        // static PARTY_AUDIO_SAMPLE_TYPE PARTY_AUDIO_SAMPLE_TYPE_FLOAT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_AUDIO_SOURCE_TYPE
    {
    public:
        // Static fields
        // static PARTY_AUDIO_SOURCE_TYPE PARTY_AUDIO_SOURCE_TYPE_MICROPHONE;
        // static PARTY_AUDIO_SOURCE_TYPE PARTY_AUDIO_SOURCE_TYPE_TEXT_TO_SPEECH;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_MUTABLE_DATA_BUFFER
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t <Buffer>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t <BufferByteCount>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_MUTABLE_DATA_BUFFER interopStruct);
        intptr_t get_Buffer();
        uint32_t get_BufferByteCount();
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_AUDIO_DEVICE_SELECTION_TYPE
    {
    public:
        // Static fields
        // static PARTY_AUDIO_DEVICE_SELECTION_TYPE PARTY_AUDIO_DEVICE_SELECTION_TYPE_NONE;
        // static PARTY_AUDIO_DEVICE_SELECTION_TYPE PARTY_AUDIO_DEVICE_SELECTION_TYPE_SYSTEM_DEFAULT;
        // static PARTY_AUDIO_DEVICE_SELECTION_TYPE PARTY_AUDIO_DEVICE_SELECTION_TYPE_PLATFORM_USER_DEFAULT;
        // static PARTY_AUDIO_DEVICE_SELECTION_TYPE PARTY_AUDIO_DEVICE_SELECTION_TYPE_MANUAL;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_CHAT_CONTROL_CHAT_INDICATOR
    {
    public:
        // Static fields
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_SILENT;
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_TALKING;
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_INCOMING_VOICE_DISABLED;
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_INCOMING_COMMUNICATIONS_MUTED;
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_NO_REMOTE_INPUT;
        // static PARTY_CHAT_CONTROL_CHAT_INDICATOR PARTY_CHAT_CONTROL_CHAT_INDICATOR_REMOTE_AUDIO_INPUT_MUTED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_CONTROL_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_CHAT_CONTROL_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_CHAT_CONTROL_HANDLE interopHandle, PARTY_CHAT_CONTROL_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_CHAT_CONTROL_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_CHAT_CONTROL_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_CHAT_PERMISSION_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_NONE;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_SEND_MICROPHONE_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_SEND_TEXT_TO_SPEECH_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_SEND_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_RECEIVE_MICROPHONE_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_RECEIVE_TEXT_TO_SPEECH_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_RECEIVE_AUDIO;
        // static PARTY_CHAT_PERMISSION_OPTIONS PARTY_CHAT_PERMISSION_OPTIONS_RECEIVE_TEXT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_GENDER
    {
    public:
        // Static fields
        // static PARTY_GENDER PARTY_GENDER_NEUTRAL;
        // static PARTY_GENDER PARTY_GENDER_FEMALE;
        // static PARTY_GENDER PARTY_GENDER_MALE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR
    {
    public:
        // Static fields
        // static PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR_SILENT;
        // static PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR_TALKING;
        // static PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR_AUDIO_INPUT_MUTED;
        // static PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR_NO_AUDIO_INPUT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE
    {
    public:
        // Static fields
        // static PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE_NARRATION;
        // static PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE_VOICE_CHAT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_TEXT_CHAT_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_TEXT_CHAT_OPTIONS PARTY_TEXT_CHAT_OPTIONS_NONE;
        // static PARTY_TEXT_CHAT_OPTIONS PARTY_TEXT_CHAT_OPTIONS_TRANSLATE_TO_LOCAL_LANGUAGE;
        // static PARTY_TEXT_CHAT_OPTIONS PARTY_TEXT_CHAT_OPTIONS_FILTER_OFFENSIVE_TEXT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE interopHandle, PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    class PARTY_TRANSLATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <languageCode>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <translation>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t <errorDetail>k__BackingField; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        PARTY_TRANSLATION_RECEIVED_OPTIONS <options>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_TRANSLATION interopStruct);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        MonoString* get_languageCode();
        PARTY_TRANSLATION_RECEIVED_OPTIONS get_options();
        MonoString* get_translation();
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_TRANSLATION_RECEIVED_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_TRANSLATION_RECEIVED_OPTIONS PARTY_TRANSLATION_RECEIVED_OPTIONS_NONE;
        // static PARTY_TRANSLATION_RECEIVED_OPTIONS PARTY_TRANSLATION_RECEIVED_OPTIONS_TRUNCATED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_NONE;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_TRANSCRIBE_SELF;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_TRANSCRIBE_OTHER_CHAT_CONTROLS_WITH_MATCHING_LANGUAGES;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_TRANSCRIBE_OTHER_CHAT_CONTROLS_WITH_NON_MATCHING_LANGUAGES;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_DISABLE_HYPOTHESIS_PHRASES;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_TRANSLATE_TO_LOCAL_LANGUAGE;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_DISABLE_PROFANITY_MASKING;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS_TRANSCRIBE_SELF_REGARDLESS_OF_NETWORK_STATE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_CHAT_TEXT_RECEIVED_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_CHAT_TEXT_RECEIVED_OPTIONS PARTY_CHAT_TEXT_RECEIVED_OPTIONS_NONE;
        // static PARTY_CHAT_TEXT_RECEIVED_OPTIONS PARTY_CHAT_TEXT_RECEIVED_OPTIONS_FILTERED_OFFENSIVE_TERMS;
        // static PARTY_CHAT_TEXT_RECEIVED_OPTIONS PARTY_CHAT_TEXT_RECEIVED_OPTIONS_FILTERED_ENTIRE_MESSAGE;
        // static PARTY_CHAT_TEXT_RECEIVED_OPTIONS PARTY_CHAT_TEXT_RECEIVED_OPTIONS_FILTERED_DUE_TO_ERROR;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_DESTROYED_REASON
    {
    public:
        // Static fields
        // static PARTY_DESTROYED_REASON PARTY_DESTROYED_REASON_REQUESTED;
        // static PARTY_DESTROYED_REASON PARTY_DESTROYED_REASON_DISCONNECTED;
        // static PARTY_DESTROYED_REASON PARTY_DESTROYED_REASON_KICKED;
        // static PARTY_DESTROYED_REASON PARTY_DESTROYED_REASON_DEVICE_LOST_AUTHENTICATION;
        // static PARTY_DESTROYED_REASON PARTY_DESTROYED_REASON_CREATION_FAILED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_DEVICE_CONNECTION_TYPE
    {
    public:
        // Static fields
        // static PARTY_DEVICE_CONNECTION_TYPE PARTY_DEVICE_CONNECTION_TYPE_RELAY_SERVER;
        // static PARTY_DEVICE_CONNECTION_TYPE PARTY_DEVICE_CONNECTION_TYPE_DIRECT_PEER_CONNECTION;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_DEVICE_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_DEVICE_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_DEVICE_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_DEVICE_HANDLE interopHandle, PARTY_DEVICE_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_DEVICE_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_DEVICE_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_NONE;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_SAME_PLATFORM_TYPE;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_DIFFERENT_PLATFORM_TYPE;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_ANY_PLATFORM_TYPE;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_SAME_ENTITY_LOGIN_PROVIDER;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_DIFFERENT_ENTITY_LOGIN_PROVIDER;
        // static PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS_ANY_ENTITY_LOGIN_PROVIDER;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        int64_t GetHandleValue();
        void .ctor(int64_t handleValue);
        void .ctor(PARTY_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_HANDLE interopHandle, PARTY_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    class PARTY_INVITATION_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Identifier>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        String[][] <EntityIds>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_INVITATION_REVOCABILITY <Revocability>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PARTY_INVITATION_CONFIGURATION interopStruct);
        void .ctor();
        MonoString* get_Identifier();
        void set_Identifier(MonoString* value);
        PARTY_INVITATION_REVOCABILITY get_Revocability();
        void set_Revocability(PARTY_INVITATION_REVOCABILITY value);
        String[][] get_EntityIds();
        void set_EntityIds(String[][] value);
    };

    // Namespace: PartyCSharpSDK
    class PARTY_INVITATION_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_INVITATION_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_INVITATION_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_INVITATION_HANDLE interopHandle, PARTY_INVITATION_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_INVITATION_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_INVITATION_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_INVITATION_REVOCABILITY
    {
    public:
        // Static fields
        // static PARTY_INVITATION_REVOCABILITY PARTY_INVITATION_REVOCABILITY_CREATOR;
        // static PARTY_INVITATION_REVOCABILITY PARTY_INVITATION_REVOCABILITY_ANYONE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS <options>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint16_t <port>k__BackingField; // 0x0014
    
        // Methods
        void .ctor(PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_CONFIGURATION interopStruct);
        void .ctor();
        PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS get_options();
        void set_options(PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS value);
        uint16_t get_port();
        void set_port(uint16_t value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS_NONE;
        // static PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS_EXCLUDE_GAME_CORE_PREFERRED_UDP_MULTIPLAYER_PORT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_USER_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_LOCAL_USER_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_LOCAL_USER_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_LOCAL_USER_HANDLE interopHandle, PARTY_LOCAL_USER_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_LOCAL_USER_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_LOCAL_USER_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_LOCAL_USER_REMOVED_REASON
    {
    public:
        // Static fields
        // static PARTY_LOCAL_USER_REMOVED_REASON PARTY_LOCAL_USER_REMOVED_REASON_AUTHENTICATION_FAILED;
        // static PARTY_LOCAL_USER_REMOVED_REASON PARTY_LOCAL_USER_REMOVED_REASON_REMOVE_LOCAL_USER;
        // static PARTY_LOCAL_USER_REMOVED_REASON PARTY_LOCAL_USER_REMOVED_REASON_DESTROY_LOCAL_USER;
        // static PARTY_LOCAL_USER_REMOVED_REASON PARTY_LOCAL_USER_REMOVED_REASON_DESTROY_NETWORK;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_MESSAGE_RECEIVED_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_MESSAGE_RECEIVED_OPTIONS PARTY_MESSAGE_RECEIVED_OPTIONS_NONE;
        // static PARTY_MESSAGE_RECEIVED_OPTIONS PARTY_MESSAGE_RECEIVED_OPTIONS_GUARANTEED_DELIVERY;
        // static PARTY_MESSAGE_RECEIVED_OPTIONS PARTY_MESSAGE_RECEIVED_OPTIONS_SEQUENTIAL_DELIVERY;
        // static PARTY_MESSAGE_RECEIVED_OPTIONS PARTY_MESSAGE_RECEIVED_OPTIONS_REQUIRED_FRAGMENTATION;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_OPTION
    {
    public:
        // Static fields
        // static PARTY_OPTION PARTY_OPTION_LOCAL_UDP_SOCKET_BIND_ADDRESS;
        // static PARTY_OPTION PARTY_OPTION_LOCAL_DEVICE_DIRECT_PEER_CONNECTIVITY_OPTIONS_MASK;
        // static PARTY_OPTION PARTY_OPTION_TEXT_CHAT_FILTER_LEVEL;
        // static PARTY_OPTION PARTY_OPTION_LOCAL_DEVICE_MAX_DIRECT_PEER_CONNECTIONS;
        // static PARTY_OPTION PARTY_OPTION_REGION_UPDATE_CONFIGURATION;
        // static PARTY_OPTION PARTY_OPTION_REGION_QUALITY_MEASUREMENT_CONFIGURATION;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REGION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <RegionName>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t <RoundTripLatencyInMilliseconds>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_REGION interopStruct);
        MonoString* get_RegionName();
        uint32_t get_RoundTripLatencyInMilliseconds();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE_TYPE <StateChangeType>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        intptr_t <StateChangeId>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool useObjectPool; // 0x0020
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_TYPE StateChangeType, intptr_t StateChangeId);
        static PARTY_STATE_CHANGE* CreateFromPtr(intptr_t stateChangePtr);
        void Cleanup();
        PARTY_STATE_CHANGE_TYPE get_StateChangeType();
        intptr_t get_StateChangeId();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CREATE_NEW_NETWORK_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_NETWORK_CONFIGURATION* <networkConfiguration>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_REGION[][] <regions>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_NETWORK_DESCRIPTOR* <networkDescriptor>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        MonoString* <appliedInitialInvitationIdentifier>k__BackingField; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        uint32_t <errorDetail>k__BackingField; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        uint32_t <regionCount>k__BackingField; // 0x0060
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        PARTY_NETWORK_CONFIGURATION* get_networkConfiguration();
        uint32_t get_regionCount();
        PARTY_REGION[][] get_regions();
        MonoObject* get_asyncIdentifier();
        PARTY_NETWORK_DESCRIPTOR* get_networkDescriptor();
        MonoString* get_appliedInitialInvitationIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_DESTROY_LOCAL_USER_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_USER_REMOVED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_LOCAL_USER_REMOVED_REASON <removedReason>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        PARTY_LOCAL_USER_REMOVED_REASON get_removedReason();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CONNECT_TO_NETWORK_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_DESCRIPTOR* <networkDescriptor>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_DESCRIPTOR* get_networkDescriptor();
        MonoObject* get_asyncIdentifier();
        PARTY_NETWORK_HANDLE* get_network();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_DESTROYED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t <errorDetail>k__BackingField; // 0x0034
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_AUTHENTICATE_LOCAL_USER_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <invitationIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        uint32_t <errorDetail>k__BackingField; // 0x004C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoString* get_invitationIdentifier();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REGIONS_CHANGED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t <errorDetail>k__BackingField; // 0x002C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_CONFIGURATION_MADE_AVAILABLE_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_NETWORK_CONFIGURATION* <networkConfiguration>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_NETWORK_CONFIGURATION* get_networkConfiguration();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_INVITATION_CREATED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_INVITATION_HANDLE* <invitation>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_INVITATION_HANDLE* get_invitation();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_INVITATION_DESTROYED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_INVITATION_HANDLE* <invitation>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_INVITATION_HANDLE* get_invitation();
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CREATE_ENDPOINT_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_ENDPOINT_HANDLE* <localEndpoint>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        uint32_t <errorDetail>k__BackingField; // 0x004C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoObject* get_asyncIdentifier();
        PARTY_ENDPOINT_HANDLE* get_localEndpoint();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_ENDPOINT_CREATED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_ENDPOINT_HANDLE* <endpoint>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_ENDPOINT_HANDLE* get_endpoint();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_ENDPOINT_DESTROYED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_ENDPOINT_HANDLE* <endpoint>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_ENDPOINT_HANDLE* get_endpoint();
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REMOTE_DEVICE_CREATED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <device>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DEVICE_HANDLE* get_device();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REMOTE_DEVICE_DESTROYED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <device>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DEVICE_HANDLE* get_device();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REMOTE_DEVICE_JOINED_NETWORK_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <device>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DEVICE_HANDLE* get_device();
        PARTY_NETWORK_HANDLE* get_network();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REMOTE_DEVICE_LEFT_NETWORK_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <device>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
        PARTY_DEVICE_HANDLE* get_device();
        PARTY_NETWORK_HANDLE* get_network();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_ENDPOINT_MESSAGE_RECEIVED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_ENDPOINT_HANDLE* <senderEndpoint>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_ENDPOINT_HANDLE> <receiverEndpoints>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_MESSAGE_RECEIVED_OPTIONS <options>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <messageSize>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        intptr_t <messageBuffer>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        void Cleanup();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_ENDPOINT_HANDLE* get_senderEndpoint();
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_ENDPOINT_HANDLE> get_receiverEndpoints();
        PARTY_MESSAGE_RECEIVED_OPTIONS get_options();
        uint32_t get_messageSize();
        intptr_t get_messageBuffer();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CREATE_INVITATION_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_INVITATION_HANDLE* <invitation>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        uint32_t <errorDetail>k__BackingField; // 0x004C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoObject* get_asyncIdentifier();
        PARTY_INVITATION_HANDLE* get_invitation();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_DESTROY_ENDPOINT_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_ENDPOINT_HANDLE* <localEndpoint>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_ENDPOINT_HANDLE* get_localEndpoint();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LEAVE_NETWORK_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REMOVE_LOCAL_USER_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_REVOKE_INVITATION_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_INVITATION_HANDLE* <invitation>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        uint32_t <errorDetail>k__BackingField; // 0x004C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        PARTY_INVITATION_HANDLE* get_invitation();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_DESCRIPTOR_CHANGED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_USER_KICKED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_KICK_DEVICE_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_DEVICE_HANDLE* <kickedDevice>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_DEVICE_HANDLE* get_kickedDevice();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_KICK_USER_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <kickedEntityId>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        MonoString* get_kickedEntityId();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CREATE_CHAT_CONTROL_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <localDevice>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_LOCAL_USER_HANDLE* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <languageCode>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        uint32_t <errorDetail>k__BackingField; // 0x0054
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_DEVICE_HANDLE* get_localDevice();
        PARTY_LOCAL_USER_HANDLE* get_localUser();
        MonoString* get_languageCode();
        MonoObject* get_asyncIdentifier();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_DESTROY_CHAT_CONTROL_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_DEVICE_HANDLE* <localDevice>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_DEVICE_HANDLE* get_localDevice();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_CONTROL_CREATED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <chatControl>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_CHAT_CONTROL_HANDLE* get_chatControl();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_CONTROL_DESTROYED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <chatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t <errorDetail>k__BackingField; // 0x0034
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_CHAT_CONTROL_HANDLE* get_chatControl();
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_CONTROL_JOINED_NETWORK_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE* <chatControl>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_CHAT_CONTROL_HANDLE* get_chatControl();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_CONTROL_LEFT_NETWORK_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE* <chatControl>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_DESTROYED_REASON <reason>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_DESTROYED_REASON get_reason();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_CHAT_CONTROL_HANDLE* get_chatControl();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_DISCONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_NETWORK_HANDLE* <network>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_NETWORK_HANDLE* get_network();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_CHAT_AUDIO_INPUT_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <audioDeviceSelectionContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        PARTY_AUDIO_DEVICE_SELECTION_TYPE <audioDeviceSelectionType>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_AUDIO_DEVICE_SELECTION_TYPE get_audioDeviceSelectionType();
        MonoString* get_audioDeviceSelectionContext();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_CHAT_AUDIO_OUTPUT_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <audioDeviceSelectionContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        PARTY_AUDIO_DEVICE_SELECTION_TYPE <audioDeviceSelectionType>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_AUDIO_DEVICE_SELECTION_TYPE get_audioDeviceSelectionType();
        MonoString* get_audioDeviceSelectionContext();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_CHAT_AUDIO_INPUT_CHANGED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_AUDIO_INPUT_STATE <state>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t <errorDetail>k__BackingField; // 0x0034
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_AUDIO_INPUT_STATE get_state();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_LOCAL_CHAT_AUDIO_OUTPUT_CHANGED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_AUDIO_OUTPUT_STATE <state>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t <errorDetail>k__BackingField; // 0x0034
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_AUDIO_OUTPUT_STATE get_state();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_POPULATE_AVAILABLE_TEXT_TO_SPEECH_PROFILES_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_LANGUAGE_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <languageCode>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        MonoString* get_languageCode();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_CHAT_TEXT_RECEIVED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <senderChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_CHAT_CONTROL_HANDLE[][] <receiverChatControls>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <languageCode>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoString* <chatText>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Byte[][] <data>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        PARTY_TRANSLATION[][] <translations>k__BackingField; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        MonoString* <originalChatText>k__BackingField; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        PARTY_CHAT_TEXT_RECEIVED_OPTIONS <options>k__BackingField; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        uint32_t <errorDetail>k__BackingField; // 0x0064
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_CHAT_CONTROL_HANDLE* get_senderChatControl();
        PARTY_CHAT_CONTROL_HANDLE[][] get_receiverChatControls();
        MonoString* get_languageCode();
        MonoString* get_chatText();
        Byte[][] get_data();
        PARTY_TRANSLATION[][] get_translations();
        PARTY_CHAT_TEXT_RECEIVED_OPTIONS get_options();
        MonoString* get_originalChatText();
        uint32_t get_errorDetail();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_CHAT_AUDIO_ENCODER_BITRATE_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        uint32_t <bitrate>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        uint32_t get_bitrate();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_TEXT_CHAT_OPTIONS_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        PARTY_TEXT_CHAT_OPTIONS <options>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_TEXT_CHAT_OPTIONS get_options();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_TEXT_TO_SPEECH_PROFILE_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <profileIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE <type>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE get_type();
        MonoString* get_profileIdentifier();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SET_TRANSCRIPTION_OPTIONS_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <errorDetail>k__BackingField; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS <options>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS get_options();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_VOICE_CHAT_TRANSCRIPTION_RECEIVED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <senderChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_CHAT_CONTROL_HANDLE> <receiverChatControls>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <languageCode>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoString* <transcription>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_TRANSLATION> <translations>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        uint32_t <errorDetail>k__BackingField; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        PARTY_AUDIO_SOURCE_TYPE <sourceType>k__BackingField; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE <type>k__BackingField; // 0x005C
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        void Cleanup();
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_senderChatControl();
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_CHAT_CONTROL_HANDLE> get_receiverChatControls();
        PARTY_AUDIO_SOURCE_TYPE get_sourceType();
        MonoString* get_languageCode();
        MonoString* get_transcription();
        PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE get_type();
        System.Collections.Generic.List<PartyCSharpSDK.PARTY_TRANSLATION> get_translations();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SYNTHESIZE_TEXT_TO_SPEECH_COMPLETED_STATE_CHANGE : public PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PARTY_CHAT_CONTROL_HANDLE* <localChatControl>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <textToSynthesize>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncIdentifier>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_STATE_CHANGE_RESULT <result>k__BackingField; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t <errorDetail>k__BackingField; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE <type>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PARTY_STATE_CHANGE_UNION stateChange, intptr_t StateChangeId);
        PARTY_STATE_CHANGE_RESULT get_result();
        uint32_t get_errorDetail();
        PARTY_CHAT_CONTROL_HANDLE* get_localChatControl();
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE get_type();
        MonoString* get_textToSynthesize();
        MonoObject* get_asyncIdentifier();
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_STATE_CHANGE_RESULT
    {
    public:
        // Static fields
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_SUCCEEDED;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_UNKNOWN_ERROR;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_CANCELED_BY_TITLE;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_INTERNET_CONNECTIVITY_ERROR;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_PARTY_SERVICE_ERROR;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_NO_SERVERS_AVAILABLE;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_USER_NOT_AUTHORIZED;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_USER_CREATE_NETWORK_THROTTLED;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_TITLE_NOT_ENABLED_FOR_PARTY;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_NETWORK_LIMIT_REACHED;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_NETWORK_NO_LONGER_EXISTS;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_NETWORK_NOT_JOINABLE;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_VERSION_MISMATCH;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_LEAVE_NETWORK_CALLED;
        // static PARTY_STATE_CHANGE_RESULT PARTY_STATE_CHANGE_RESULT_FAILED_TO_BIND_TO_LOCAL_UDP_SOCKET;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_STATE_CHANGE_TYPE
    {
    public:
        // Static fields
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REGIONS_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DESTROY_LOCAL_USER_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CREATE_NEW_NETWORK_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CONNECT_TO_NETWORK_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_AUTHENTICATE_LOCAL_USER_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_NETWORK_CONFIGURATION_MADE_AVAILABLE;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_NETWORK_DESCRIPTOR_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_LOCAL_USER_REMOVED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REMOVE_LOCAL_USER_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_LOCAL_USER_KICKED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CREATE_ENDPOINT_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DESTROY_ENDPOINT_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_ENDPOINT_CREATED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_ENDPOINT_DESTROYED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REMOTE_DEVICE_CREATED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REMOTE_DEVICE_DESTROYED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REMOTE_DEVICE_JOINED_NETWORK;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REMOTE_DEVICE_LEFT_NETWORK;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DEVICE_PROPERTIES_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_LEAVE_NETWORK_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_NETWORK_DESTROYED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_ENDPOINT_MESSAGE_RECEIVED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DATA_BUFFERS_RETURNED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_ENDPOINT_PROPERTIES_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_NETWORK_PROPERTIES_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_KICK_DEVICE_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_KICK_USER_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CREATE_CHAT_CONTROL_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DESTROY_CHAT_CONTROL_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_CONTROL_CREATED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_CONTROL_DESTROYED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_CHAT_AUDIO_ENCODER_BITRATE_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_TEXT_RECEIVED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_VOICE_CHAT_TRANSCRIPTION_RECEIVED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_CHAT_AUDIO_INPUT_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_CHAT_AUDIO_OUTPUT_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_LOCAL_CHAT_AUDIO_INPUT_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_LOCAL_CHAT_AUDIO_OUTPUT_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_TEXT_TO_SPEECH_PROFILE_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SYNTHESIZE_TEXT_TO_SPEECH_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_CONTROL_PROPERTIES_CHANGED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_CONTROL_JOINED_NETWORK;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CHAT_CONTROL_LEFT_NETWORK;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CONNECT_CHAT_CONTROL_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_DISCONNECT_CHAT_CONTROL_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_POPULATE_AVAILABLE_TEXT_TO_SPEECH_PROFILES_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CREATE_INVITATION_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_REVOKE_INVITATION_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_INVITATION_CREATED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_INVITATION_DESTROYED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_LANGUAGE_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_TRANSCRIPTION_OPTIONS_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_SET_TEXT_CHAT_OPTIONS_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CONFIGURE_AUDIO_MANIPULATION_VOICE_STREAM_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CONFIGURE_AUDIO_MANIPULATION_CAPTURE_STREAM_COMPLETED;
        // static PARTY_STATE_CHANGE_TYPE PARTY_STATE_CHANGE_TYPE_CONFIGURE_AUDIO_MANIPULATION_RENDER_STREAM_COMPLETED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS_NONE;
        // static PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS_SYNCHRONIZE_MESSAGES_WITH_SHARED_PROPERTIES;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_TEXT_CHAT_FILTER_LEVEL
    {
    public:
        // Static fields
        // static PARTY_TEXT_CHAT_FILTER_LEVEL PARTY_TEXT_CHAT_FILTER_LEVEL_FAMILY_FRIENDLY;
        // static PARTY_TEXT_CHAT_FILTER_LEVEL PARTY_TEXT_CHAT_FILTER_LEVEL_MEDIUM;
        // static PARTY_TEXT_CHAT_FILTER_LEVEL PARTY_TEXT_CHAT_FILTER_LEVEL_MATURE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_THREAD_ID
    {
    public:
        // Static fields
        // static PARTY_THREAD_ID PARTY_THREAD_ID_AUDIO;
        // static PARTY_THREAD_ID PARTY_THREAD_ID_NETWORKING;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE
    {
    public:
        // Static fields
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE_HYPOTHESIS;
        // static PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE_FINAL;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_WORK_MODE
    {
    public:
        // Static fields
        // static PARTY_WORK_MODE PARTY_WORK_MODE_AUTOMATIC;
        // static PARTY_WORK_MODE PARTY_WORK_MODE_MANUAL;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION
    {
    public:
        // Static fields
        // static PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION_NONE;
        // static PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION_IDENTITY_AND_MASK_EQUALS_MATCH_VALUE;
        // static PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION_IDENTITY_AND_MASK_DOES_NOT_EQUAL_MATCH_VALUE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_ENDPOINT_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_ENDPOINT_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_ENDPOINT_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_ENDPOINT_HANDLE interopHandle, PARTY_ENDPOINT_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_ENDPOINT_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_ENDPOINT_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_ENDPOINT_STATISTIC
    {
    public:
        // Static fields
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CURRENTLY_QUEUED_SEND_MESSAGES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CURRENTLY_QUEUED_SEND_MESSAGE_BYTES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CURRENTLY_ACTIVE_SEND_MESSAGES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CURRENTLY_ACTIVE_SEND_MESSAGE_BYTES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_TIMED_OUT_SEND_MESSAGES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_TIMED_OUT_SEND_MESSAGE_BYTES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CANCELED_SEND_MESSAGES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_CANCELED_SEND_MESSAGE_BYTES;
        // static PARTY_ENDPOINT_STATISTIC PARTY_ENDPOINT_STATISTIC_AVERAGE_DEVICE_ROUND_TRIP_LATENCY_IN_MILLISECONDS;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_SEND_MESSAGE_OPTIONS
    {
    public:
        // Static fields
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_DEFAULT;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_GUARANTEED_DELIVERY;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_BEST_EFFORT_DELIVERY;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_SEQUENTIAL_DELIVERY;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_NONSEQUENTIAL_DELIVERY;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_COALESCE_OPPORTUNISTICALLY;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_ALWAYS_COALESCE_UNTIL_FLUSHED;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_REQUIRE_TIMELY_ACKNOWLEDGEMENT;
        // static PARTY_SEND_MESSAGE_OPTIONS PARTY_SEND_MESSAGE_OPTIONS_ALLOW_LAZY_ACKNOWLEDGEMENT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t <Priority>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t <IdentityForCancelFilters>k__BackingField; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t <TimeoutInMilliseconds>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION interopStruct);
        void .ctor();
        int8_t get_Priority();
        void set_Priority(int8_t value);
        uint32_t get_IdentityForCancelFilters();
        void set_IdentityForCancelFilters(uint32_t value);
        uint32_t get_TimeoutInMilliseconds();
        void set_TimeoutInMilliseconds(uint32_t value);
    };

    // Namespace: PartyCSharpSDK
    class Converters
    {
    public:
    
        // Methods
        static intptr_t OffsetPF(intptr_t ptr, int64_t that);
        static Byte[][] StringToNullTerminatedUTF8ByteArray(MonoString* str);
        static Byte[][] StringToNullTerminatedUTF8ByteArray(MonoString* str, int32_t requiredByteArrayLength);
        static Byte[][] StringToNullTerminatedUTF8ByteArrayInternal(MonoString* str, int32_t requiredByteArrayLength);
        static void StringToNullTerminatedUTF8FixedPointer(MonoString* str, void* bytePointer, int32_t length);
        static MonoString* BytePointerToString(void* bytePointer, int32_t length);
        static MonoString* ByteArrayToString(Byte[][] arr);
        static MonoString* ByteArrayToString(Byte[][] arr, int32_t index, int32_t count);
        static MonoString* PtrToStringUTF8(intptr_t rawPtr);
        static ClassType PtrToClass(intptr_t rawPtr, System.Func<InteropStructType,ClassType> ctor);
        static ClassType[][] PtrToClassArray(intptr_t rawPtr, SizeT count, System.Func<InteropStructType,ClassType> ctor);
        static ClassType[][] PtrToClassArray(intptr_t rawPtr, uint32_t count, System.Func<InteropStructType,ClassType> ctor);
        static System.Collections.Generic.List<ClassType> PtrToClassListFromPool(intptr_t rawPtr, uint32_t count, ObjectPool* objectPool);
        static intptr_t ClassArrayToPtr(ClassType[][] inputTypes, System.Func<ClassType,PartyCSharpSDK.DisposableCollection,InteropStructType> converter, DisposableCollection* disposableCollection, SizeT arrayCount);
        static InteropStructType[][] ConvertArrayToFixedLength(ClassType[][] classes, int32_t length, System.Func<ClassType,InteropStructType> ctor);
    };

    // Namespace: PartyCSharpSDK
    class DisposableBuffer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t <IntPtr>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        void .ctor(int32_t size);
        void Dispose();
        void Dispose(bool isDisposing);
        void Finalize();
        intptr_t get_IntPtr();
        void set_IntPtr(intptr_t value);
    };

    // Namespace: PartyCSharpSDK
    class DisposableCollection
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<System.IDisposable> disposables; // 0x0010
    
        // Methods
        void .ctor();
        void Dispose();
        void Dispose(bool isDisposing);
        void Finalize();
        T Add(T disposable);
    };

    // Namespace: PartyCSharpSDK
    class MarshalHelpers
    {
    public:
    
        // Methods
        static uint32_t GetCustomContext(PartyCSharpSDK.MarshalHelpers.GetContextFunc<InteropHandle> getContextFunc, InteropHandle handle, MonoObject* customContext);
        static uint32_t SetCustomContext(PartyCSharpSDK.MarshalHelpers.GetContextFunc<InteropHandle> getContextFunc, System.Func<InteropHandle,System.IntPtr,System.UInt32> setContextFunc, InteropHandle handle, MonoObject* customContext);
        static uint32_t GetArrayOfObjects(PartyCSharpSDK.MarshalHelpers.GetHandlesFun<InputInteropHandle> getHandlesFun, System.Func<IntermediaObject,OutputObject> ctorFun, InputInteropHandle inputHandle, OutputObject[][] outputHandles);
    };

    // Namespace: PartyCSharpSDK
    class ObjectPool
    {
    public:
        // Static fields
        // static Object[][] ctorParamList0Element;
        // static Object[][] ctorParamList1Element;
        // static Object[][] ctorParamList2Element;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.Dictionary<System.Type,PartyCSharpSDK.ObjectPool.Pool> pools; // 0x0010
    
        // Methods
        static void .cctor();
        void .ctor();
        void AddEntry(int32_t maxLimit, Type[][] ctorTypes);
        T Retrieve();
        T Retrieve(MonoObject* param);
        T Retrieve(MonoObject* param0, MonoObject* param1);
        T Retrieve(Object[][] ctorParams);
        void Return(MonoObject* o);
    };

    // Namespace: PartyCSharpSDK
    class PartyConstants
    {
    public:
        // Static fields
        // static int32_t c_maxNetworkConfigurationMaxDeviceCount;
        // static int32_t c_defaultNetworkConfigurationMaxDeviceCount;
        // static int32_t c_maxNetworkConfigurationMaxEndpointsPerDeviceCount;
        // static int32_t c_maxLocalUsersPerDeviceCount;
        // static int32_t c_opaqueConnectionInformationByteCount;
        // static int32_t c_maxInvitationIdentifierStringLength;
        // static int32_t c_maxInvitationEntityIdCount;
        // static int32_t c_maxEntityIdStringLength;
        // static int32_t c_networkIdentifierStringLength;
        // static int32_t c_maxRegionNameStringLength;
        // static int32_t c_maxSerializedNetworkDescriptorStringLength;
        // static int32_t c_maxAudioDeviceIdentifierStringLength;
        // static int32_t c_maxLanguageCodeStringLength;
        // static int32_t c_maxChatTextMessageStringLength;
        // static int32_t c_maxChatTranscriptionMessageStringLength;
        // static int32_t c_maxTextToSpeechProfileIdentifierStringLength;
        // static int32_t c_maxTextToSpeechProfileNameStringLength;
        // static int32_t c_maxTextToSpeechInputStringLength;
        // static uint64_t c_anyProcessor;
        // static int16_t c_minSendMessageQueuingPriority;
        // static int16_t c_chatSendMessageQueuingPriority;
        // static int16_t c_defaultSendMessageQueuingPriority;
        // static int16_t c_maxSendMessageQueuingPriority;
    
    
        // Methods
        void .ctor();
    };

    // Namespace: PartyCSharpSDK
    class PartyError
    {
    public:
        // Static fields
        // static uint32_t Success;
        // static uint32_t InvalidArg;
        // static uint32_t UnsupportedPartyOption;
    
    
        // Methods
        static bool SUCCEEDED(uint32_t error);
        static bool FAILED(uint32_t error);
        void .ctor();
    };

    // Namespace: PartyCSharpSDK
    struct SizeT
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uintptr_t value; // 0x0010
    
        // Methods
        bool get_IsZero();
        void .ctor(int32_t length);
        void .ctor(uint32_t length);
        uint32_t ToUInt32();
        int32_t ToInt32();
    };

    // Namespace: PartyCSharpSDK
    struct UTF8StringPtr
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t pointer; // 0x0010
    
        // Methods
        void .ctor(MonoString* str, DisposableCollection* disposableCollection);
        MonoString* GetString();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t <MaxUserCount>k__BackingField; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t <MaxDeviceCount>k__BackingField; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t <MaxUsersPerDeviceCount>k__BackingField; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t <MaxDevicesPerUserCount>k__BackingField; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint32_t <MaxEndpointsPerDeviceCount>k__BackingField; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS <DirectPeerConnectivityOptions>k__BackingField; // 0x0024
    
        // Methods
        void .ctor(PARTY_NETWORK_CONFIGURATION interopStruct);
        void .ctor();
        uint32_t get_MaxUserCount();
        void set_MaxUserCount(uint32_t value);
        uint32_t get_MaxDeviceCount();
        void set_MaxDeviceCount(uint32_t value);
        uint32_t get_MaxUsersPerDeviceCount();
        void set_MaxUsersPerDeviceCount(uint32_t value);
        uint32_t get_MaxDevicesPerUserCount();
        void set_MaxDevicesPerUserCount(uint32_t value);
        uint32_t get_MaxEndpointsPerDeviceCount();
        void set_MaxEndpointsPerDeviceCount(uint32_t value);
        PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS get_DirectPeerConnectivityOptions();
        void set_DirectPeerConnectivityOptions(PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS value);
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_DESCRIPTOR
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <NetworkIdentifier>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <RegionName>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Byte[][] <OpaqueConnectionInformation>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PARTY_NETWORK_DESCRIPTOR interopStruct);
        MonoString* get_NetworkIdentifier();
        MonoString* get_RegionName();
        Byte[][] get_OpaqueConnectionInformation();
    };

    // Namespace: PartyCSharpSDK
    class PARTY_NETWORK_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_NETWORK_HANDLE <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PARTY_NETWORK_HANDLE interopHandle);
        static uint32_t WrapAndReturnError(uint32_t error, PARTY_NETWORK_HANDLE interopHandle, PARTY_NETWORK_HANDLE* handle);
        void ClearInteropHandle();
        PARTY_NETWORK_HANDLE get_InteropHandle();
        void set_InteropHandle(PARTY_NETWORK_HANDLE value);
    };

    // Namespace: PartyCSharpSDK
    struct PARTY_NETWORK_STATISTIC
    {
    public:
        // Static fields
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_AVERAGE_RELAY_SERVER_ROUND_TRIP_LATENCY_IN_MILLISECONDS;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_SENT_PROTOCOL_PACKETS;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_SENT_PROTOCOL_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_RETRIED_PROTOCOL_PACKETS;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_RETRIED_PROTOCOL_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_DROPPED_PROTOCOL_PACKETS;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_RECEIVED_PROTOCOL_PACKETS;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_RECEIVED_PROTOCOL_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CURRENTLY_QUEUED_SEND_MESSAGES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CURRENTLY_QUEUED_SEND_MESSAGE_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CURRENTLY_ACTIVE_SEND_MESSAGES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CURRENTLY_ACTIVE_SEND_MESSAGE_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_TIMED_OUT_SEND_MESSAGES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_TIMED_OUT_SEND_MESSAGE_BYTES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CANCELED_SEND_MESSAGES;
        // static PARTY_NETWORK_STATISTIC PARTY_NETWORK_STATISTIC_CANCELED_SEND_MESSAGE_BYTES;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PartyCSharpSDK
    class SDK
    {
    public:
        // Static fields
        // static ObjectPool* objectPool;
    
    
        // Methods
        static void .cctor();
        static uint32_t PartyInitialize(MonoString* titleId, PARTY_HANDLE* handle);
        static uint32_t PartyCleanup(PARTY_HANDLE* handle);
        static uint32_t PartyCreateLocalUser(PARTY_HANDLE* handle, MonoString* entityId, MonoString* titlePlayerEntityToken, PARTY_LOCAL_USER_HANDLE* localUser);
        static uint32_t PartyCreateNewNetwork(PARTY_HANDLE* handle, PARTY_LOCAL_USER_HANDLE* localUser, PARTY_NETWORK_CONFIGURATION* networkConfiguration, PARTY_REGION[][] regions, PARTY_INVITATION_CONFIGURATION* initialInvitationConfiguration, MonoObject* asyncIdentifier, PARTY_NETWORK_DESCRIPTOR* networkDescriptor, MonoString* appliedInitialInvitationIdentifier);
        static uint32_t PartyConnectToNetwork(PARTY_HANDLE* handle, PARTY_NETWORK_DESCRIPTOR* networkDescriptor, MonoObject* asyncIdentifier, PARTY_NETWORK_HANDLE* network);
        static uint32_t PartyStartProcessingStateChanges(PARTY_HANDLE* handle, System.Collections.Generic.List<PartyCSharpSDK.PARTY_STATE_CHANGE>& stateChanges);
        static uint32_t PartyFinishProcessingStateChanges(PARTY_HANDLE* handle, System.Collections.Generic.List<PartyCSharpSDK.PARTY_STATE_CHANGE> stateChanges);
        static uint32_t PartyDestroyLocalUser(PARTY_HANDLE* handle, PARTY_LOCAL_USER_HANDLE* localUser, MonoObject* asyncIdentifier);
        static uint32_t PartyGetErrorMessage(uint32_t error, MonoString* errorMessage);
        static uint32_t PartyGetRegions(PARTY_HANDLE* handle, PARTY_REGION[][] regionList);
        static uint32_t PartyGetLocalDevice(PARTY_HANDLE* handle, PARTY_DEVICE_HANDLE* localDevice);
        static uint32_t PartyGetLocalUsers(PARTY_HANDLE* handle, PARTY_LOCAL_USER_HANDLE[][] users);
        static uint32_t PartyLocalUserGetEntityId(PARTY_LOCAL_USER_HANDLE* localUser, MonoString* entityId);
        static uint32_t PartyLocalUserUpdateEntityToken(PARTY_LOCAL_USER_HANDLE* localUser, MonoString* titlePlayerEntityToken);
        static uint32_t PartyLocalUserGetCustomContext(PARTY_LOCAL_USER_HANDLE* localUser, MonoObject* customContext);
        static uint32_t PartyLocalUserSetCustomContext(PARTY_LOCAL_USER_HANDLE* localUser, MonoObject* customContext);
        static uint32_t PartyGetNetworks(PARTY_HANDLE* handle, PARTY_NETWORK_HANDLE[][] networks);
        static uint32_t PartySetOption(MonoObject* contextObject, PARTY_OPTION option, MonoObject* value);
        static uint32_t PartyGetOption(MonoObject* contextObject, PARTY_OPTION option, MonoObject* value);
        static uint32_t PartySetThreadAffinityMask(PARTY_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyGetThreadAffinityMask(PARTY_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartySetWorkMode(PARTY_THREAD_ID threadId, PARTY_WORK_MODE workMode);
        static uint32_t PartyGetWorkMode(PARTY_THREAD_ID threadId, PARTY_WORK_MODE workMode);
        static uint32_t PartyDoWork(PARTY_HANDLE* handle, PARTY_THREAD_ID threadId);
        static uint32_t PartyGetChatControls(PARTY_HANDLE* handle, PARTY_CHAT_CONTROL_HANDLE[][] chatControls);
        static uint32_t PartyNetworkAuthenticateLocalUser(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE* localUser, MonoString* invitationIdentifier, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkGetNetworkDescriptor(PARTY_NETWORK_HANDLE* network, PARTY_NETWORK_DESCRIPTOR* networkDescriptor);
        static uint32_t PartyNetworkCreateInvitation(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE* localUser, PARTY_INVITATION_CONFIGURATION* invitationConfiguration, MonoObject* asyncIdentifier, PARTY_INVITATION_HANDLE* invitation);
        static uint32_t PartyNetworkDestroyEndpoint(PARTY_NETWORK_HANDLE* network, PARTY_ENDPOINT_HANDLE* localEndpoint, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkGetChatControls(PARTY_NETWORK_HANDLE* network, PARTY_CHAT_CONTROL_HANDLE[][] chatControls);
        static uint32_t PartyNetworkFindEndpointByUniqueIdentifier(PARTY_NETWORK_HANDLE* network, uint16_t uniqueIdentifier, PARTY_ENDPOINT_HANDLE* endpoint);
        static uint32_t PartyNetworkGetCustomContext(PARTY_NETWORK_HANDLE* network, MonoObject* customContext);
        static uint32_t PartyNetworkSetCustomContext(PARTY_NETWORK_HANDLE* network, MonoObject* customContext);
        static uint32_t PartyNetworkGetDevices(PARTY_NETWORK_HANDLE* network, PARTY_DEVICE_HANDLE[][] devices);
        static uint32_t PartyNetworkGetEndpoints(PARTY_NETWORK_HANDLE* network, PARTY_ENDPOINT_HANDLE[][] endpoints);
        static uint32_t PartyNetworkGetInvitations(PARTY_NETWORK_HANDLE* network, PARTY_INVITATION_HANDLE[][] invitations);
        static uint32_t PartyNetworkGetLocalUsers(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE[][] users);
        static uint32_t PartyNetworkGetNetworkConfiguration(PARTY_NETWORK_HANDLE* network, PARTY_NETWORK_CONFIGURATION* networkConfiguration);
        static uint32_t PartyNetworkGetNetworkStatistics(PARTY_NETWORK_HANDLE* network, PARTY_NETWORK_STATISTIC[][] statisticTypes, UInt64[][] statisticValues);
        static uint32_t PartyNetworkKickDevice(PARTY_NETWORK_HANDLE* network, PARTY_DEVICE_HANDLE* targetDevice, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkKickUser(PARTY_NETWORK_HANDLE* network, MonoString* targetEntityId, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkLeaveNetwork(PARTY_NETWORK_HANDLE* network, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkRemoveLocalUser(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE* localUser, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkRevokeInvitation(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE* localUser, PARTY_INVITATION_HANDLE* invitation, MonoObject* asyncIdentifier);
        static uint32_t PartySerializeNetworkDescriptor(PARTY_NETWORK_DESCRIPTOR* networkDescriptor, MonoString* serializedNetworkDescriptorString);
        static uint32_t PartyDeserializeNetworkDescriptor(MonoString* serializedNetworkDescriptorString, PARTY_NETWORK_DESCRIPTOR* networkDescriptor);
        static uint32_t PartyNetworkConnectChatControl(PARTY_NETWORK_HANDLE* network, PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* asyncIdentifier);
        static uint32_t PartyNetworkDisconnectChatControl(PARTY_NETWORK_HANDLE* network, PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* asyncIdentifier);
        static uint32_t PartyInvitationGetCreatorEntityId(PARTY_INVITATION_HANDLE* invitation, MonoString* entityId);
        static uint32_t PartyInvitationGetInvitationConfiguration(PARTY_INVITATION_HANDLE* invitation, PARTY_INVITATION_CONFIGURATION* configuration);
        static uint32_t PartyInvitationGetCustomContext(PARTY_INVITATION_HANDLE* invitation, MonoObject* customContext);
        static uint32_t PartyInvitationSetCustomContext(PARTY_INVITATION_HANDLE* invitation, MonoObject* customContext);
        static uint32_t PartyNetworkCreateEndpoint(PARTY_NETWORK_HANDLE* network, PARTY_LOCAL_USER_HANDLE* localUser, System.Collections.Generic.Dictionary<System.String,System.Byte[]> keyValuePairs, MonoObject* asyncIdentifier, PARTY_ENDPOINT_HANDLE* endpoint);
        static uint32_t PartyNetworkGetDeviceConnectionType(PARTY_NETWORK_HANDLE* network, PARTY_DEVICE_HANDLE* targetDevice, PARTY_DEVICE_CONNECTION_TYPE deviceConnectionType);
        static uint32_t PartyEndpointSendMessage(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_ENDPOINT_HANDLE[][] targetEndpoints, PARTY_SEND_MESSAGE_OPTIONS options, PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION* queuingConfiguration, Byte[][] dataBuffer);
        static uint32_t PartyEndpointSendMessage(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_ENDPOINT_HANDLE[][] targetEndpoints, PARTY_SEND_MESSAGE_OPTIONS options, PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION* queuingConfiguration, intptr_t dataBuffer, uint32_t dataBufferSize);
        static uint32_t PartyEndpointCancelMessages(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_ENDPOINT_HANDLE[][] targetEndpoints, PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION filterExpression, uint32_t messageIdentityFilterMask, uint32_t filteredMessageIdentitiesToMatch, uint32_t canceledMessagesCount);
        static uint32_t PartyEndpointFlushMessages(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_ENDPOINT_HANDLE[][] targetEndpoints);
        static uint32_t PartyEndpointGetEndpointStatistics(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_ENDPOINT_HANDLE[][] targetEndpoints, PARTY_ENDPOINT_STATISTIC[][] statisticTypes, UInt64[][] statisticValues);
        static uint32_t PartyEndpointGetCustomContext(PARTY_ENDPOINT_HANDLE* endpoint, MonoObject* customContext);
        static uint32_t PartyEndpointSetCustomContext(PARTY_ENDPOINT_HANDLE* endpoint, MonoObject* customContext);
        static uint32_t PartyEndpointGetDevice(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_DEVICE_HANDLE* device);
        static uint32_t PartyEndpointGetEntityId(PARTY_ENDPOINT_HANDLE* endpoint, MonoString* entityId);
        static uint32_t PartyEndpointGetLocalUser(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_LOCAL_USER_HANDLE* localUser);
        static uint32_t PartyEndpointGetNetwork(PARTY_ENDPOINT_HANDLE* endpoint, PARTY_NETWORK_HANDLE* network);
        static uint32_t PartyEndpointGetUniqueIdentifier(PARTY_ENDPOINT_HANDLE* endpoint, uint16_t uniqueIdentifier);
        static uint32_t PartyEndpointIsLocal(PARTY_ENDPOINT_HANDLE* endpoint, bool isLocal);
        static uint32_t PartyDeviceIsLocal(PARTY_DEVICE_HANDLE* device, bool isLocal);
        static uint32_t PartyDeviceGetCustomContext(PARTY_DEVICE_HANDLE* device, MonoObject* customContext);
        static uint32_t PartyDeviceSetCustomContext(PARTY_DEVICE_HANDLE* device, MonoObject* customContext);
        static uint32_t PartyDeviceCreateChatControl(PARTY_DEVICE_HANDLE* device, PARTY_LOCAL_USER_HANDLE* localUser, MonoString* languageCode, MonoObject* asyncIdentifier, PARTY_CHAT_CONTROL_HANDLE* chatControl);
        static uint32_t PartyDeviceDestroyChatControl(PARTY_DEVICE_HANDLE* device, PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* asyncIdentifier);
        static uint32_t PartyDeviceGetChatControls(PARTY_DEVICE_HANDLE* device, PARTY_CHAT_CONTROL_HANDLE[][] chatControls);
        static uint32_t PartyChatControlSendText(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE[][] targetChatControls, MonoString* chatText, Byte[][][] dataBuffers);
        static uint32_t PartyChatControlSetAudioInput(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, MonoString* audioDeviceSelectionContext, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetAudioInput(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, MonoString* audioDeviceSelectionContext, MonoString* deviceId);
        static uint32_t PartyChatControlSetAudioOutput(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, MonoString* audioDeviceSelectionContext, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetAudioOutput(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, MonoString* audioDeviceSelectionContext, MonoString* deviceId);
        static uint32_t PartyChatControlSetAudioEncoderBitrate(PARTY_CHAT_CONTROL_HANDLE* chatControl, uint32_t bitrate, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetAudioEncoderBitrate(PARTY_CHAT_CONTROL_HANDLE* chatControl, uint32_t bitrate);
        static uint32_t PartyChatControlSetAudioRenderVolume(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, float volume);
        static uint32_t PartyChatControlGetAudioRenderVolume(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, float volume);
        static uint32_t PartyChatControlSetAudioInputMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, bool muted);
        static uint32_t PartyChatControlGetAudioInputMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, bool muted);
        static uint32_t PartyChatControlSetIncomingAudioMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, bool muted);
        static uint32_t PartyChatControlGetIncomingAudioMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, bool muted);
        static uint32_t PartyChatControlSetIncomingTextMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, bool muted);
        static uint32_t PartyChatControlGetIncomingTextMuted(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, bool muted);
        static uint32_t PartyChatControlIsLocal(PARTY_CHAT_CONTROL_HANDLE* chatControl, bool isLocal);
        static uint32_t PartyChatControlSetPermissions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, PARTY_CHAT_PERMISSION_OPTIONS chatPermissionOptions);
        static uint32_t PartyChatControlGetPermissions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, PARTY_CHAT_PERMISSION_OPTIONS chatPermissionOptions);
        static uint32_t PartyChatControlGetCustomContext(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* customContext);
        static uint32_t PartyChatControlSetCustomContext(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* customContext);
        static uint32_t PartyChatControlGetLanguage(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoString* languageCode);
        static uint32_t PartyChatControlSetLanguage(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoString* languageCode, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlSetTextChatOptions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_TEXT_CHAT_OPTIONS options, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetTextChatOptions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_TEXT_CHAT_OPTIONS options);
        static uint32_t PartyChatControlSynthesizeTextToSpeech(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, MonoString* textToSynthesize, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlSetTranscriptionOptions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS options, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetTranscriptionOptions(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS options);
        static uint32_t PartyChatControlSetTextToSpeechProfile(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, MonoString* profileIdentifier, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetTextToSpeechProfile(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile);
        static uint32_t PartyChatControlPopulateAvailableTextToSpeechProfiles(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoObject* asyncIdentifier);
        static uint32_t PartyChatControlGetAvailableTextToSpeechProfiles(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE[][] profiles);
        static uint32_t PartyTextToSpeechProfileGetCustomContext(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, MonoObject* customContext);
        static uint32_t PartyTextToSpeechProfileSetCustomContext(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, MonoObject* customContext);
        static uint32_t PartyTextToSpeechProfileGetGender(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, PARTY_GENDER gender);
        static uint32_t PartyTextToSpeechProfileGetIdentifier(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, MonoString* identifier);
        static uint32_t PartyTextToSpeechProfileGetLanguageCode(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, MonoString* languageCode);
        static uint32_t PartyTextToSpeechProfileGetName(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE* profile, MonoString* name);
        static uint32_t PartyChatControlGetChatIndicator(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_CHAT_CONTROL_HANDLE* targetChatControl, PARTY_CHAT_CONTROL_CHAT_INDICATOR chatIndicator);
        static uint32_t PartyChatControlGetLocalChatIndicator(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR chatIndicator);
        static uint32_t PartyChatControlGetDevice(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_DEVICE_HANDLE* device);
        static uint32_t PartyChatControlGetLocalUser(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_LOCAL_USER_HANDLE* localUser);
        static uint32_t PartyChatControlGetNetworks(PARTY_CHAT_CONTROL_HANDLE* chatControl, PARTY_NETWORK_HANDLE[][] networks);
        static uint32_t PartyChatControlGetEntityId(PARTY_CHAT_CONTROL_HANDLE* chatControl, MonoString* entityId);
        void .ctor();
    };

} // namespace PartyCSharpSDK

namespace PartyCSharpSDK.Interop
{

    // Namespace: PartyCSharpSDK.Interop
    class PFPInterop
    {
    public:
        // Static fields
        // static MonoString* ThunkDllName;
    
    
        // Methods
        static uint32_t PartyChatControlSendText(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t targetChatControlCount, intptr_t targetChatControls, Byte[][] chatText, uint32_t dataBufferCount, intptr_t dataBuffers);
        static uint32_t PartyChatControlGetAudioEncoderBitrate(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t bitrate);
        static uint32_t PartyChatControlSetAudioEncoderBitrate(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t bitrate, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlConfigureAudioManipulationCaptureStream(PARTY_CHAT_CONTROL_HANDLE chatControl, void* configuration, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetSharedPropertyKeys(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t propertyCount, void* keys);
        static uint32_t PartyChatControlSetTextToSpeechProfile(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, Byte[][] profileIdentifier, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetTextToSpeechProfile(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile);
        static uint32_t PartyTextToSpeechProfileGetName(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, UTF8StringPtr name);
        static uint32_t PartyTextToSpeechProfileGetGender(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, PARTY_GENDER gender);
        static uint32_t PartyChatControlGetLanguage(PARTY_CHAT_CONTROL_HANDLE chatControl, UTF8StringPtr languageCode);
        static uint32_t PartyChatControlSetAudioOutput(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, Byte[][] audioDeviceSelectionContext, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetAudioOutput(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, UTF8StringPtr audioDeviceSelectionContext, UTF8StringPtr deviceId);
        static uint32_t PartyChatControlSetLanguage(PARTY_CHAT_CONTROL_HANDLE chatControl, Byte[][] languageCode, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetDevice(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_DEVICE_HANDLE device);
        static uint32_t PartyChatControlSetSharedProperties(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t propertyCount, UTF8StringPtr[][] keys, PARTY_DATA_BUFFER[][] values);
        static uint32_t PartyChatControlGetAvailableTextToSpeechProfiles(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t profileCount, intptr_t profiles);
        static uint32_t PartyChatControlGetCustomContext(PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t customContext);
        static uint32_t PartyTextToSpeechProfileGetLanguageCode(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, UTF8StringPtr languageCode);
        static uint32_t PartyChatControlSetCustomContext(PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t customContext);
        static uint32_t PartyChatControlIsLocal(PARTY_CHAT_CONTROL_HANDLE chatControl, uint8_t isLocal);
        static uint32_t PartyChatControlGetIncomingTextMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, uint8_t muted);
        static uint32_t PartyChatControlSetIncomingTextMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, uint8_t muted);
        static uint32_t PartyChatControlSetPermissions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, PARTY_CHAT_PERMISSION_OPTIONS chatPermissionOptions);
        static uint32_t PartyChatControlGetPermissions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, PARTY_CHAT_PERMISSION_OPTIONS chatPermissionOptions);
        static uint32_t PartyChatControlGetNetworks(PARTY_CHAT_CONTROL_HANDLE chatControl, uint32_t networkCount, intptr_t networks);
        static uint32_t PartyChatControlConfigureAudioManipulationVoiceStream(PARTY_CHAT_CONTROL_HANDLE chatControl, void* configuration, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetLocalChatIndicator(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_LOCAL_CHAT_CONTROL_CHAT_INDICATOR chatIndicator);
        static uint32_t PartyChatControlGetSharedProperty(PARTY_CHAT_CONTROL_HANDLE chatControl, Byte[][] key, void* value);
        static uint32_t PartyChatControlGetAudioInputMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, uint8_t muted);
        static uint32_t PartyChatControlSetAudioInputMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, uint8_t muted);
        static uint32_t PartyChatControlSetAudioRenderVolume(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, float volume);
        static uint32_t PartyChatControlConfigureAudioManipulationRenderStream(PARTY_CHAT_CONTROL_HANDLE chatControl, void* configuration, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetAudioRenderVolume(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, float volume);
        static uint32_t PartyChatControlGetEntityId(PARTY_CHAT_CONTROL_HANDLE chatControl, UTF8StringPtr entityId);
        static uint32_t PartyChatControlGetTranscriptionOptions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS options);
        static uint32_t PartyTextToSpeechProfileGetIdentifier(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, UTF8StringPtr identifier);
        static uint32_t PartyChatControlSetTranscriptionOptions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS options, intptr_t asyncIdentifier);
        static uint32_t PartyTextToSpeechProfileSetCustomContext(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, intptr_t customContext);
        static uint32_t PartyTextToSpeechProfileGetCustomContext(PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE profile, intptr_t customContext);
        static uint32_t PartyChatControlPopulateAvailableTextToSpeechProfiles(PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetChatIndicator(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, PARTY_CHAT_CONTROL_CHAT_INDICATOR chatIndicator);
        static uint32_t PartyChatControlSetTextChatOptions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_TEXT_CHAT_OPTIONS options, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetTextChatOptions(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_TEXT_CHAT_OPTIONS options);
        static uint32_t PartyChatControlGetIncomingAudioMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, uint8_t muted);
        static uint32_t PartyChatControlSetIncomingAudioMuted(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_CHAT_CONTROL_HANDLE targetChatControl, uint8_t muted);
        static uint32_t PartyChatControlGetLocalUser(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_LOCAL_USER_HANDLE localUser);
        static uint32_t PartyChatControlSetAudioInput(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, Byte[][] audioDeviceSelectionContext, intptr_t asyncIdentifier);
        static uint32_t PartyChatControlGetAudioInput(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType, UTF8StringPtr audioDeviceSelectionContext, UTF8StringPtr deviceId);
        static uint32_t PartyChatControlSynthesizeTextToSpeech(PARTY_CHAT_CONTROL_HANDLE chatControl, PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type, Byte[][] textToSynthesize, intptr_t asyncIdentifier);
        static uint32_t PartyDeviceGetSharedProperty(PARTY_DEVICE_HANDLE device, Byte[][] key, void* value);
        static uint32_t PartyDeviceGetChatControls(PARTY_DEVICE_HANDLE device, uint32_t chatControlCount, intptr_t chatControls);
        static uint32_t PartyDeviceCreateChatControl(PARTY_DEVICE_HANDLE device, PARTY_LOCAL_USER_HANDLE localUser, Byte[][] languageCode, intptr_t asyncIdentifier, PARTY_CHAT_CONTROL_HANDLE chatControl);
        static uint32_t PartyDeviceIsLocal(PARTY_DEVICE_HANDLE device, uint8_t isLocal);
        static uint32_t PartyDeviceSetCustomContext(PARTY_DEVICE_HANDLE device, intptr_t customContext);
        static uint32_t PartyDeviceSetSharedProperties(PARTY_DEVICE_HANDLE device, uint32_t propertyCount, UTF8StringPtr[][] keys, PARTY_DATA_BUFFER[][] values);
        static uint32_t PartyDeviceGetSharedPropertyKeys(PARTY_DEVICE_HANDLE device, uint32_t propertyCount, UTF8StringPtr[][] keys);
        static uint32_t PartyDeviceGetCustomContext(PARTY_DEVICE_HANDLE device, intptr_t customContext);
        static uint32_t PartyDeviceDestroyChatControl(PARTY_DEVICE_HANDLE device, PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t asyncIdentifier);
        static uint32_t PartyEndpointGetUniqueIdentifier(PARTY_ENDPOINT_HANDLE endpoint, uint16_t uniqueIdentifier);
        static uint32_t PartyEndpointSetCustomContext(PARTY_ENDPOINT_HANDLE endpoint, intptr_t customContext);
        static uint32_t PartyEndpointCancelMessages(PARTY_ENDPOINT_HANDLE endpoint, uint32_t targetEndpointCount, intptr_t targetEndpoints, PARTY_CANCEL_MESSAGES_FILTER_EXPRESSION filterExpression, uint32_t messageIdentityFilterMask, uint32_t filteredMessageIdentitiesToMatch, uint32_t canceledMessagesCount);
        static uint32_t PartyEndpointGetDevice(PARTY_ENDPOINT_HANDLE endpoint, PARTY_DEVICE_HANDLE device);
        static uint32_t PartyEndpointIsLocal(PARTY_ENDPOINT_HANDLE endpoint, uint8_t isLocal);
        static uint32_t PartyEndpointSendMessage(PARTY_ENDPOINT_HANDLE endpoint, uint32_t targetEndpointCount, intptr_t targetEndpoints, PARTY_SEND_MESSAGE_OPTIONS options, void* queuingConfiguration, uint32_t dataBufferCount, void* dataBuffers, intptr_t messageIdentifier);
        static uint32_t PartyEndpointGetCustomContext(PARTY_ENDPOINT_HANDLE endpoint, intptr_t customContext);
        static uint32_t PartyEndpointGetSharedPropertyKeys(PARTY_ENDPOINT_HANDLE endpoint, uint32_t propertyCount, void* keys);
        static uint32_t PartyEndpointGetEntityId(PARTY_ENDPOINT_HANDLE endpoint, UTF8StringPtr entityId);
        static uint32_t PartyEndpointGetEndpointStatistics(PARTY_ENDPOINT_HANDLE endpoint, uint32_t targetEndpointCount, intptr_t targetEndpoints, uint32_t statisticCount, PARTY_ENDPOINT_STATISTIC[][] statisticTypes, UInt64[][] statisticValues);
        static uint32_t PartyEndpointGetSharedProperty(PARTY_ENDPOINT_HANDLE endpoint, Byte[][] key, void* value);
        static uint32_t PartyEndpointGetNetwork(PARTY_ENDPOINT_HANDLE endpoint, PARTY_NETWORK_HANDLE network);
        static uint32_t PartyEndpointFlushMessages(PARTY_ENDPOINT_HANDLE endpoint, uint32_t targetEndpointCount, intptr_t targetEndpoints);
        static uint32_t PartyEndpointGetLocalUser(PARTY_ENDPOINT_HANDLE endpoint, PARTY_LOCAL_USER_HANDLE localUser);
        static uint32_t PartyEndpointSetSharedProperties(PARTY_ENDPOINT_HANDLE endpoint, uint32_t propertyCount, UTF8StringPtr[][] keys, PARTY_DATA_BUFFER[][] values);
        static uint32_t PartyNetworkSetSharedProperties(PARTY_NETWORK_HANDLE network, uint32_t propertyCount, UTF8StringPtr[][] keys, PARTY_DATA_BUFFER[][] values);
        static uint32_t PartyNetworkLeaveNetwork(PARTY_NETWORK_HANDLE network, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkCreateInvitation(PARTY_NETWORK_HANDLE network, PARTY_LOCAL_USER_HANDLE localUser, void* invitationConfiguration, intptr_t asyncIdentifier, PARTY_INVITATION_HANDLE invitation);
        static uint32_t PartyNetworkGetNetworkConfiguration(PARTY_NETWORK_HANDLE network, intptr_t networkConfiguration);
        static uint32_t PartySerializeNetworkDescriptor(void* networkDescriptor, intptr_t serializedNetworkDescriptorString);
        static uint32_t PartyDeserializeNetworkDescriptor(Byte[][] serializedNetworkDescriptorString, PARTY_NETWORK_DESCRIPTOR networkDescriptor);
        static uint32_t PartyNetworkDestroyEndpoint(PARTY_NETWORK_HANDLE network, PARTY_ENDPOINT_HANDLE localEndpoint, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkDisconnectChatControl(PARTY_NETWORK_HANDLE network, PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkGetCustomContext(PARTY_NETWORK_HANDLE network, intptr_t customContext);
        static uint32_t PartyNetworkGetDevices(PARTY_NETWORK_HANDLE network, uint32_t deviceCount, intptr_t devices);
        static uint32_t PartyNetworkSetCustomContext(PARTY_NETWORK_HANDLE network, intptr_t customContext);
        static uint32_t PartyNetworkKickUser(PARTY_NETWORK_HANDLE network, Byte[][] targetEntityId, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkGetSharedPropertyKeys(PARTY_NETWORK_HANDLE network, uint32_t propertyCount, void* keys);
        static uint32_t PartyNetworkConnectChatControl(PARTY_NETWORK_HANDLE network, PARTY_CHAT_CONTROL_HANDLE chatControl, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkRevokeInvitation(PARTY_NETWORK_HANDLE network, PARTY_LOCAL_USER_HANDLE localUser, PARTY_INVITATION_HANDLE invitation, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkGetChatControls(PARTY_NETWORK_HANDLE network, uint32_t chatControlCount, intptr_t chatControls);
        static uint32_t PartyNetworkFindEndpointByUniqueIdentifier(PARTY_NETWORK_HANDLE network, uint16_t uniqueIdentifier, PARTY_ENDPOINT_HANDLE endpoint);
        static uint32_t PartyNetworkGetLocalUsers(PARTY_NETWORK_HANDLE network, uint32_t userCount, intptr_t users);
        static uint32_t PartyNetworkCreateEndpoint(PARTY_NETWORK_HANDLE network, PARTY_LOCAL_USER_HANDLE localUser, uint32_t sharedPropertyCount, intptr_t keys, intptr_t values, intptr_t asyncIdentifier, PARTY_ENDPOINT_HANDLE endpoint);
        static uint32_t PartyNetworkGetInvitations(PARTY_NETWORK_HANDLE network, uint32_t invitationCount, intptr_t invitations);
        static uint32_t PartyNetworkGetEndpoints(PARTY_NETWORK_HANDLE network, uint32_t endpointCount, intptr_t endpoints);
        static uint32_t PartyNetworkGetSharedProperty(PARTY_NETWORK_HANDLE network, Byte[][] key, void* value);
        static uint32_t PartyNetworkKickDevice(PARTY_NETWORK_HANDLE network, PARTY_DEVICE_HANDLE targetDevice, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkGetNetworkStatistics(PARTY_NETWORK_HANDLE network, uint32_t statisticCount, PARTY_NETWORK_STATISTIC[][] statisticTypes, UInt64[][] statisticValues);
        static uint32_t PartyNetworkGetNetworkDescriptor(PARTY_NETWORK_HANDLE network, PARTY_NETWORK_DESCRIPTOR networkDescriptor);
        static uint32_t PartyNetworkRemoveLocalUser(PARTY_NETWORK_HANDLE network, PARTY_LOCAL_USER_HANDLE localUser, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkAuthenticateLocalUser(PARTY_NETWORK_HANDLE network, PARTY_LOCAL_USER_HANDLE localUser, Byte[][] invitationIdentifier, intptr_t asyncIdentifier);
        static uint32_t PartyNetworkGetDeviceConnectionType(PARTY_NETWORK_HANDLE network, PARTY_DEVICE_HANDLE targetDevice, PARTY_DEVICE_CONNECTION_TYPE deviceConnectionType);
        static uint32_t PartyInitialize(Byte[][] titleId, PARTY_HANDLE handle);
        static uint32_t PartyCleanup(PARTY_HANDLE handle);
        static uint32_t PartyCreateLocalUser(PARTY_HANDLE handle, Byte[][] entityId, Byte[][] titlePlayerEntityToken, PARTY_LOCAL_USER_HANDLE localUser);
        static uint32_t PartyCreateNewNetwork(PARTY_HANDLE handle, PARTY_LOCAL_USER_HANDLE localUser, void* networkConfiguration, uint32_t regionCount, intptr_t regions, void* initialInvitationConfiguration, intptr_t asyncIdentifier, PARTY_NETWORK_DESCRIPTOR networkDescriptor, intptr_t appliedInitialInvitationIdentifier);
        static uint32_t PartyGetNetworks(PARTY_HANDLE handle, uint32_t networkCount, intptr_t networks);
        static uint32_t PartyInvitationGetCreatorEntityId(PARTY_INVITATION_HANDLE invitation, UTF8StringPtr entityId);
        static uint32_t PartySynchronizeMessagesBetweenEndpoints(PARTY_HANDLE handle, uint32_t endpointCount, PARTY_ENDPOINT_HANDLE[][] endpoints, PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS options, intptr_t asyncIdentifier);
        static uint32_t PartyInvitationSetCustomContext(PARTY_INVITATION_HANDLE invitation, intptr_t customContext);
        static uint32_t PartyGetChatControls(PARTY_HANDLE handle, uint32_t chatControlCount, intptr_t chatControls);
        static uint32_t PartyInvitationGetInvitationConfiguration(PARTY_INVITATION_HANDLE invitation, intptr_t configuration);
        static uint32_t PartyInvitationGetCustomContext(PARTY_INVITATION_HANDLE invitation, intptr_t customContext);
        static uint32_t PartyFinishProcessingStateChanges(PARTY_HANDLE handle, uint32_t stateChangeCount, intptr_t stateChanges);
        static uint32_t PartySetOption(intptr_t Object, PARTY_OPTION option, intptr_t value);
        static uint32_t PartyLocalUserGetEntityId(PARTY_LOCAL_USER_HANDLE localUser, UTF8StringPtr entityId);
        static uint32_t PartyConnectToNetwork(PARTY_HANDLE handle, void* networkDescriptor, intptr_t asyncIdentifier, PARTY_NETWORK_HANDLE network);
        static uint32_t PartyGetRegions(PARTY_HANDLE handle, uint32_t regionListCount, intptr_t regionList);
        static uint32_t PartyLocalUserUpdateEntityToken(PARTY_LOCAL_USER_HANDLE localUser, Byte[][] titlePlayerEntityToken);
        static uint32_t PartyDestroyLocalUser(PARTY_HANDLE handle, PARTY_LOCAL_USER_HANDLE localUser, intptr_t asyncIdentifier);
        static uint32_t PartySetThreadAffinityMask(PARTY_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartySetWorkMode(PARTY_THREAD_ID threadId, PARTY_WORK_MODE workMode);
        static uint32_t PartyDoWork(PARTY_HANDLE handle, PARTY_THREAD_ID threadId);
        static uint32_t PartyGetOption(intptr_t Object, PARTY_OPTION option, intptr_t value);
        static uint32_t PartyLocalUserGetCustomContext(PARTY_LOCAL_USER_HANDLE localUser, intptr_t customContext);
        static uint32_t PartyGetErrorMessage(uint32_t error, UTF8StringPtr errorMessage);
        static uint32_t PartyGetThreadAffinityMask(PARTY_THREAD_ID threadId, uint64_t threadAffinityMask);
        static uint32_t PartyGetWorkMode(PARTY_THREAD_ID threadId, PARTY_WORK_MODE workMode);
        static uint32_t PartyStartProcessingStateChanges(PARTY_HANDLE handle, uint32_t stateChangeCount, intptr_t stateChanges);
        static uint32_t PartyGetLocalDevice(PARTY_HANDLE handle, PARTY_DEVICE_HANDLE localDevice);
        static uint32_t PartyLocalUserSetCustomContext(PARTY_LOCAL_USER_HANDLE localUser, intptr_t customContext);
        static uint32_t PartyGetLocalUsers(PARTY_HANDLE handle, uint32_t userCount, intptr_t users);
        void .ctor();
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_AUDIO_FORMAT
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t samplesPerSecond; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t channelMask; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint16_t channelCount; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        uint16_t bitsPerSample; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        PARTY_AUDIO_SAMPLE_TYPE sampleType; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint8_t interleaved; // 0x0020
    
        // Methods
        void .ctor(PARTY_AUDIO_FORMAT* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_AUDIO_MANIPULATION_SINK_STREAM_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_AUDIO_FORMAT format; // 0x0010
    
        // Methods
        void .ctor(PARTY_AUDIO_MANIPULATION_SINK_STREAM_CONFIGURATION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_AUDIO_MANIPULATION_SOURCE_STREAM_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_AUDIO_FORMAT format; // 0x0010
        uint8_t pad_0011[0x13]; // 0x0011
        uint32_t maxTotalAudioBufferSizeInMilliseconds; // 0x0024
    
        // Methods
        void .ctor(PARTY_AUDIO_MANIPULATION_SOURCE_STREAM_CONFIGURATION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DATA_BUFFER
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t buffer; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t bufferByteCount; // 0x0018
    
        // Methods
        void .ctor(Byte[][] publicObject, DisposableCollection* disposableCollection);
        void .ctor(intptr_t bufferPtr, uint32_t bufferSize);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DEVICE_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_ENDPOINT_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    
        // Methods
        void .ctor(int64_t handleValue);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_INVITATION_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        UTF8StringPtr identifier; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_INVITATION_REVOCABILITY revocability; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t entityIdCount; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        void* entityIds; // 0x0020
    
        // Methods
        T[][] GetEntityIds(System.Func<PartyCSharpSDK.UTF8StringPtr,T> ctor);
        void .ctor(PARTY_INVITATION_CONFIGURATION* publicObject, DisposableCollection* disposableCollection);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_INVITATION_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_OPTIONS options; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint16_t port; // 0x0014
    
        // Methods
        void .ctor(PARTY_LOCAL_UDP_SOCKET_BIND_ADDRESS_CONFIGURATION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_USER_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_MUTABLE_DATA_BUFFER
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t buffer; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t bufferByteCount; // 0x0018
    
        // Methods
        void .ctor(PARTY_MUTABLE_DATA_BUFFER* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t maxUserCount; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t maxDeviceCount; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t maxUsersPerDeviceCount; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t maxDevicesPerUserCount; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint32_t maxEndpointsPerDeviceCount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        PARTY_DIRECT_PEER_CONNECTIVITY_OPTIONS directPeerConnectivityOptions; // 0x0024
    
        // Methods
        void .ctor(PARTY_NETWORK_CONFIGURATION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_DESCRIPTOR
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        <networkIdentifier>e__FixedBuffer networkIdentifier; // 0x0010
        uint8_t pad_0011[0x24]; // 0x0011
        <regionName>e__FixedBuffer regionName; // 0x0035
        uint8_t pad_0036[0x13]; // 0x0036
        <opaqueConnectionInformation>e__FixedBuffer opaqueConnectionInformation; // 0x0049
    
        // Methods
        MonoString* GetNetworkIdentifier();
        MonoString* GetRegionName();
        Byte[][] GetOpaqueConnectionInformation();
        void .ctor(PARTY_NETWORK_DESCRIPTOR* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REGION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        <regionName>e__FixedBuffer regionName; // 0x0010
        uint8_t pad_0011[0x13]; // 0x0011
        uint32_t roundTripLatencyInMilliseconds; // 0x0024
    
        // Methods
        MonoString* GetRegionName();
        void .ctor(PARTY_REGION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t priority; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t identityForCancelFilters; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t timeoutInMilliseconds; // 0x0018
    
        // Methods
        void .ctor(PARTY_SEND_MESSAGE_QUEUING_CONFIGURATION* publicObject);
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE_TYPE stateChangeType; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REGIONS_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CREATE_NEW_NETWORK_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_NETWORK_CONFIGURATION networkConfiguration; // 0x0028
        uint8_t pad_0029[0x17]; // 0x0029
        uint32_t regionCount; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        intptr_t regions; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        intptr_t asyncIdentifier; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        PARTY_NETWORK_DESCRIPTOR networkDescriptor; // 0x0058
        uint8_t pad_0059[0x167]; // 0x0059
        intptr_t appliedInitialInvitationIdentifier; // 0x01C0
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CONNECT_TO_NETWORK_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        PARTY_NETWORK_DESCRIPTOR networkDescriptor; // 0x001C
        uint8_t pad_001D[0x16B]; // 0x001D
        intptr_t asyncIdentifier; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        PARTY_NETWORK_HANDLE network; // 0x0190
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_AUTHENTICATE_LOCAL_USER_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t invitationIdentifier; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_CONFIGURATION_MADE_AVAILABLE_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        intptr_t networkConfiguration; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_DESCRIPTOR_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_USER_REMOVED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_REMOVED_REASON removedReason; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REMOVE_LOCAL_USER_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DESTROY_LOCAL_USER_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t asyncIdentifier; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_USER_KICKED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CREATE_ENDPOINT_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_ENDPOINT_HANDLE localEndpoint; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DESTROY_ENDPOINT_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_ENDPOINT_HANDLE localEndpoint; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_ENDPOINT_CREATED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_ENDPOINT_HANDLE endpoint; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_ENDPOINT_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_ENDPOINT_HANDLE endpoint; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_DESTROYED_REASON reason; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t errorDetail; // 0x002C
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REMOTE_DEVICE_CREATED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_DEVICE_HANDLE device; // 0x0018
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REMOTE_DEVICE_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_DEVICE_HANDLE device; // 0x0018
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REMOTE_DEVICE_JOINED_NETWORK_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_DEVICE_HANDLE device; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REMOTE_DEVICE_LEFT_NETWORK_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_DESTROYED_REASON reason; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_DEVICE_HANDLE device; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_NETWORK_HANDLE network; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DEVICE_PROPERTIES_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_DEVICE_HANDLE device; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t propertyCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t keys; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LEAVE_NETWORK_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t asyncIdentifier; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_DESTROYED_REASON reason; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_ENDPOINT_MESSAGE_RECEIVED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_ENDPOINT_HANDLE senderEndpoint; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t receiverEndpointCount; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t receiverEndpoints; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_MESSAGE_RECEIVED_OPTIONS options; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t messageSize; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        intptr_t messageBuffer; // 0x0040
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DATA_BUFFERS_RETURNED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_ENDPOINT_HANDLE localSenderEndpoint; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t dataBufferCount; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t dataBuffers; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t messageIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_ENDPOINT_PROPERTIES_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_ENDPOINT_HANDLE endpoint; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t propertyCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t keys; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t endpointCount; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        intptr_t endpoints; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_OPTIONS options; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t asyncIdentifier; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CREATE_INVITATION_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_INVITATION_HANDLE invitation; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_REVOKE_INVITATION_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PARTY_INVITATION_HANDLE invitation; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_INVITATION_CREATED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_INVITATION_HANDLE invitation; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_INVITATION_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_INVITATION_HANDLE invitation; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_DESTROYED_REASON reason; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t errorDetail; // 0x002C
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_NETWORK_PROPERTIES_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t propertyCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t keys; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_KICK_DEVICE_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_DEVICE_HANDLE kickedDevice; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_KICK_USER_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t kickedEntityId; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CREATE_CHAT_CONTROL_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_DEVICE_HANDLE localDevice; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_LOCAL_USER_HANDLE localUser; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t languageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0040
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DESTROY_CHAT_CONTROL_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_DEVICE_HANDLE localDevice; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_CREATED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0018
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_DESTROYED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_DESTROYED_REASON reason; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t errorDetail; // 0x0024
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_CHAT_AUDIO_ENCODER_BITRATE_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t bitrate; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_TEXT_RECEIVED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE senderChatControl; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t receiverChatControlCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t receiverChatControls; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t languageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t chatText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        uint32_t dataSize; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        intptr_t data; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        uint32_t translationCount; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        intptr_t translations; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        PARTY_CHAT_TEXT_RECEIVED_OPTIONS options; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        intptr_t originalChatText; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        uint32_t errorDetail; // 0x0070
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_VOICE_CHAT_TRANSCRIPTION_RECEIVED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE senderChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t receiverChatControlCount; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t receiverChatControls; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PARTY_AUDIO_SOURCE_TYPE sourceType; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        intptr_t languageCode; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        intptr_t transcription; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        PARTY_VOICE_CHAT_TRANSCRIPTION_PHRASE_TYPE type; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        uint32_t translationCount; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        intptr_t translations; // 0x0058
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_CHAT_AUDIO_INPUT_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t audioDeviceSelectionContext; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_CHAT_AUDIO_OUTPUT_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_AUDIO_DEVICE_SELECTION_TYPE audioDeviceSelectionType; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t audioDeviceSelectionContext; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_CHAT_AUDIO_INPUT_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_AUDIO_INPUT_STATE state; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t errorDetail; // 0x0024
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_LOCAL_CHAT_AUDIO_OUTPUT_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_AUDIO_OUTPUT_STATE state; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t errorDetail; // 0x0024
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_TEXT_TO_SPEECH_PROFILE_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t profileIdentifier; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SYNTHESIZE_TEXT_TO_SPEECH_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_TYPE type; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t textToSynthesize; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        intptr_t asyncIdentifier; // 0x0038
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_LANGUAGE_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t languageCode; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_TRANSCRIPTION_OPTIONS_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_VOICE_CHAT_TRANSCRIPTION_OPTIONS options; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_SET_TEXT_CHAT_OPTIONS_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_TEXT_CHAT_OPTIONS options; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_PROPERTIES_CHANGED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t propertyCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t keys; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_JOINED_NETWORK_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PARTY_NETWORK_HANDLE network; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0020
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CHAT_CONTROL_LEFT_NETWORK_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_DESTROYED_REASON reason; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_DISCONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_NETWORK_HANDLE network; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_POPULATE_AVAILABLE_TEXT_TO_SPEECH_PROFILES_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t asyncIdentifier; // 0x0028
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CONFIGURE_AUDIO_MANIPULATION_VOICE_STREAM_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE chatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t configuration; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CONFIGURE_AUDIO_MANIPULATION_CAPTURE_STREAM_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t configuration; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_CONFIGURE_AUDIO_MANIPULATION_RENDER_STREAM_COMPLETED_STATE_CHANGE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PARTY_STATE_CHANGE_RESULT result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t errorDetail; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_CHAT_CONTROL_HANDLE localChatControl; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t configuration; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        intptr_t asyncIdentifier; // 0x0030
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_STATE_CHANGE_UNION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE stateChange; // 0x0010
        PARTY_REGIONS_CHANGED_STATE_CHANGE regionsChanged; // 0x0010
        PARTY_CREATE_NEW_NETWORK_COMPLETED_STATE_CHANGE createNewNetworkCompleted; // 0x0010
        PARTY_CONNECT_TO_NETWORK_COMPLETED_STATE_CHANGE connectToNetworkCompleted; // 0x0010
        PARTY_AUTHENTICATE_LOCAL_USER_COMPLETED_STATE_CHANGE authenticateLocalUserCompleted; // 0x0010
        PARTY_NETWORK_CONFIGURATION_MADE_AVAILABLE_STATE_CHANGE networkConfigurationMadeAvailable; // 0x0010
        PARTY_NETWORK_DESCRIPTOR_CHANGED_STATE_CHANGE networkDescriptorChanged; // 0x0010
        PARTY_LOCAL_USER_REMOVED_STATE_CHANGE localUserRemoved; // 0x0010
        PARTY_REMOVE_LOCAL_USER_COMPLETED_STATE_CHANGE removeLocalUserCompleted; // 0x0010
        PARTY_DESTROY_LOCAL_USER_COMPLETED_STATE_CHANGE destroyLocalUserCompleted; // 0x0010
        PARTY_LOCAL_USER_KICKED_STATE_CHANGE localUserKicked; // 0x0010
        PARTY_CREATE_ENDPOINT_COMPLETED_STATE_CHANGE createEndpointCompleted; // 0x0010
        PARTY_DESTROY_ENDPOINT_COMPLETED_STATE_CHANGE destroyEndpointCompleted; // 0x0010
        PARTY_ENDPOINT_CREATED_STATE_CHANGE endpointCreated; // 0x0010
        PARTY_ENDPOINT_DESTROYED_STATE_CHANGE endpointDestroyed; // 0x0010
        PARTY_REMOTE_DEVICE_CREATED_STATE_CHANGE remoteDeviceCreated; // 0x0010
        PARTY_REMOTE_DEVICE_DESTROYED_STATE_CHANGE remoteDeviceDestroyed; // 0x0010
        PARTY_REMOTE_DEVICE_JOINED_NETWORK_STATE_CHANGE remoteDeviceJoinedNetwork; // 0x0010
        PARTY_REMOTE_DEVICE_LEFT_NETWORK_STATE_CHANGE remoteDeviceLeftNetwork; // 0x0010
        PARTY_DEVICE_PROPERTIES_CHANGED_STATE_CHANGE devicePropertiesChanged; // 0x0010
        PARTY_LEAVE_NETWORK_COMPLETED_STATE_CHANGE leaveNetworkCompleted; // 0x0010
        PARTY_NETWORK_DESTROYED_STATE_CHANGE networkDestroyed; // 0x0010
        PARTY_ENDPOINT_MESSAGE_RECEIVED_STATE_CHANGE endpointMessageReceived; // 0x0010
        PARTY_DATA_BUFFERS_RETURNED_STATE_CHANGE dataBuffersReturned; // 0x0010
        PARTY_ENDPOINT_PROPERTIES_CHANGED_STATE_CHANGE endpointPropertiesChanged; // 0x0010
        PARTY_SYNCHRONIZE_MESSAGES_BETWEEN_ENDPOINTS_COMPLETED_STATE_CHANGE synchronizeMessagesBetweenEndpointsCompleted; // 0x0010
        PARTY_CREATE_INVITATION_COMPLETED_STATE_CHANGE createInvitationCompleted; // 0x0010
        PARTY_REVOKE_INVITATION_COMPLETED_STATE_CHANGE revokeInvitationCompleted; // 0x0010
        PARTY_INVITATION_CREATED_STATE_CHANGE invitationCreated; // 0x0010
        PARTY_INVITATION_DESTROYED_STATE_CHANGE invitationDestroyed; // 0x0010
        PARTY_NETWORK_PROPERTIES_CHANGED_STATE_CHANGE networkPropertiesChanged; // 0x0010
        PARTY_KICK_DEVICE_COMPLETED_STATE_CHANGE kickDeviceCompleted; // 0x0010
        PARTY_KICK_USER_COMPLETED_STATE_CHANGE kickUserCompleted; // 0x0010
        PARTY_CREATE_CHAT_CONTROL_COMPLETED_STATE_CHANGE createChatControlCompleted; // 0x0010
        PARTY_DESTROY_CHAT_CONTROL_COMPLETED_STATE_CHANGE destroyChatControlCompleted; // 0x0010
        PARTY_CHAT_CONTROL_CREATED_STATE_CHANGE chatControlCreated; // 0x0010
        PARTY_CHAT_CONTROL_DESTROYED_STATE_CHANGE chatControlDestroyed; // 0x0010
        PARTY_SET_CHAT_AUDIO_ENCODER_BITRATE_COMPLETED_STATE_CHANGE setChatAudioEncoderBitrateCompleted; // 0x0010
        PARTY_CHAT_TEXT_RECEIVED_STATE_CHANGE chatTextReceived; // 0x0010
        PARTY_VOICE_CHAT_TRANSCRIPTION_RECEIVED_STATE_CHANGE voiceChatTranscriptionReceived; // 0x0010
        PARTY_SET_CHAT_AUDIO_INPUT_COMPLETED_STATE_CHANGE setChatAudioInputCompleted; // 0x0010
        PARTY_SET_CHAT_AUDIO_OUTPUT_COMPLETED_STATE_CHANGE setChatAudioOutputCompleted; // 0x0010
        PARTY_LOCAL_CHAT_AUDIO_INPUT_CHANGED_STATE_CHANGE localChatAudioInputChanged; // 0x0010
        PARTY_LOCAL_CHAT_AUDIO_OUTPUT_CHANGED_STATE_CHANGE localChatAudioOutputChanged; // 0x0010
        PARTY_SET_TEXT_TO_SPEECH_PROFILE_COMPLETED_STATE_CHANGE setTextToSpeechProfileCompleted; // 0x0010
        PARTY_SYNTHESIZE_TEXT_TO_SPEECH_COMPLETED_STATE_CHANGE synthesizeTextToSpeechCompleted; // 0x0010
        PARTY_SET_LANGUAGE_COMPLETED_STATE_CHANGE setLanguageCompleted; // 0x0010
        PARTY_SET_TRANSCRIPTION_OPTIONS_COMPLETED_STATE_CHANGE setTranscriptionOptionsCompleted; // 0x0010
        PARTY_SET_TEXT_CHAT_OPTIONS_COMPLETED_STATE_CHANGE setTextChatOptionsCompleted; // 0x0010
        PARTY_CHAT_CONTROL_PROPERTIES_CHANGED_STATE_CHANGE chatControlPropertiesChanged; // 0x0010
        PARTY_CHAT_CONTROL_JOINED_NETWORK_STATE_CHANGE chatControlJoinedNetwork; // 0x0010
        PARTY_CHAT_CONTROL_LEFT_NETWORK_STATE_CHANGE chatControlLeftNetwork; // 0x0010
        PARTY_CONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE connectChatControlCompleted; // 0x0010
        PARTY_DISCONNECT_CHAT_CONTROL_COMPLETED_STATE_CHANGE disconnectChatControlCompleted; // 0x0010
        PARTY_POPULATE_AVAILABLE_TEXT_TO_SPEECH_PROFILES_COMPLETED_STATE_CHANGE populateAvailableTextToSpeechProfilesCompleted; // 0x0010
        PARTY_CONFIGURE_AUDIO_MANIPULATION_VOICE_STREAM_COMPLETED_STATE_CHANGE configureAudioManipulationVoiceStreamCompleted; // 0x0010
        PARTY_CONFIGURE_AUDIO_MANIPULATION_CAPTURE_STREAM_COMPLETED_STATE_CHANGE configureAudioManipulationCaptureStreamCompleted; // 0x0010
        PARTY_CONFIGURE_AUDIO_MANIPULATION_RENDER_STREAM_COMPLETED_STATE_CHANGE configureAudioManipulationRenderStreamCompleted; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_TEXT_TO_SPEECH_PROFILE_HANDLE
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t handle; // 0x0010
    };

    // Namespace: PartyCSharpSDK.Interop
    struct PARTY_TRANSLATION
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PARTY_STATE_CHANGE_RESULT result; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t errorDetail; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        intptr_t languageCode; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PARTY_TRANSLATION_RECEIVED_OPTIONS options; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        intptr_t translation; // 0x0028
    };

} // namespace PartyCSharpSDK.Interop
