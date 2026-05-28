namespace PlayFab.Multiplayer
{

    // Namespace: PlayFab.Multiplayer
    class PlayfabMultiplayerEventProcessor : public MonoBehaviour
    {
    public:
    
        // Methods
        void Awake();
        void Update();
        void OnDestroy();
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer
    class Lobby
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.IntPtr,PlayFab.Multiplayer.Lobby> lobbyCache;
    
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyHandle* <Handle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PFLobbyHandle* lobbyHandle);
        MonoString* get_Id();
        MonoObject* get_Context();
        void set_Context(MonoObject* value);
        uint32_t get_MaxMemberCount();
        LobbyOwnerMigrationPolicy get_OwnerMigrationPolicy();
        LobbyAccessPolicy get_AccessPolicy();
        LobbyMembershipLock get_MembershipLock();
        MonoString* get_ConnectionString();
        PFLobbyHandle* get_Handle();
        void set_Handle(PFLobbyHandle* value);
        bool TryGetOwner(PFEntityKey* owner);
        System.Collections.Generic.IList<PlayFab.Multiplayer.PFEntityKey> GetMembers();
        void Leave(PlayFabAuthenticationContext* localUser);
        void Leave(PFEntityKey* localUser);
        void LeaveAllLocalUsers();
        System.Collections.Generic.IDictionary<System.String,System.String> GetSearchProperties();
        System.Collections.Generic.IDictionary<System.String,System.String> GetLobbyProperties();
        System.Collections.Generic.IDictionary<System.String,System.String> GetMemberProperties(PFEntityKey* member);
        LobbyMemberConnectionStatus GetMemberConnectionStatus(PFEntityKey* member);
        bool TryGetServer(PFEntityKey* server);
        System.Collections.Generic.IDictionary<System.String,System.String> GetServerProperties();
        LobbyServerConnectionStatus GetServerConnectionStatus();
        void PostUpdate(PlayFabAuthenticationContext* localUser, LobbyDataUpdate* lobbyUpdate, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void PostUpdate(PFEntityKey* localUser, LobbyDataUpdate* lobbyUpdate, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void PostUpdate(PlayFabAuthenticationContext* localUser, LobbyDataUpdate* lobbyUpdate);
        void PostUpdate(PFEntityKey* localUser, LobbyDataUpdate* lobbyUpdate);
        void PostUpdate(PlayFabAuthenticationContext* localUser, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void PostUpdate(PFEntityKey* localUser, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void SendInvite(PlayFabAuthenticationContext* sender, PFEntityKey* invitee);
        void SendInvite(PFEntityKey* sender, PFEntityKey* invitee);
        void AddMember(PlayFabAuthenticationContext* localUser, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void AddMember(PFEntityKey* localUser, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void ForceRemoveMember(PFEntityKey* targetMember, bool preventRejoin);
        void ServerPostUpdate(LobbyDataUpdate* lobbyUpdate);
        void ServerDeleteLobby();
        void PostUpdateAsServer(LobbyServerDataUpdate* lobbyServerUpdate);
        void LeaveAsServer();
        static Lobby* GetLobbyUsingCache(PFLobbyHandle* handle);
        static void ClearLobbyFromCache(PFLobbyHandle* handle);
        static void .cctor();
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyAccessPolicy
    {
    public:
        // Static fields
        // static LobbyAccessPolicy Public;
        // static LobbyAccessPolicy Friends;
        // static LobbyAccessPolicy Private;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyArrangedJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyArrangedJoinConfiguration* <Config>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        uint32_t get_MaxMemberCount();
        void set_MaxMemberCount(uint32_t value);
        LobbyOwnerMigrationPolicy get_OwnerMigrationPolicy();
        void set_OwnerMigrationPolicy(LobbyOwnerMigrationPolicy value);
        LobbyAccessPolicy get_AccessPolicy();
        void set_AccessPolicy(LobbyAccessPolicy value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_MemberProperties();
        void set_MemberProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyArrangedJoinConfiguration* get_Config();
        void set_Config(PFLobbyArrangedJoinConfiguration* value);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyConstants
    {
    public:
        // Static fields
        // static uint32_t LobbyMaxMemberCountLowerLimit;
        // static uint32_t LobbyMaxMemberCountUpperLimit;
        // static uint32_t LobbyMaxSearchPropertyCount;
        // static uint32_t LobbyMaxLobbyPropertyCount;
        // static uint32_t LobbyMaxMemberPropertyCount;
        // static uint32_t LobbyClientRequestedSearchResultCountUpperLimit;
        // static MonoString* LobbyMemberCountSearchKey;
        // static MonoString* LobbyMemberCountRemainingSearchKey;
        // static MonoString* LobbyAmMemberSearchKey;
        // static MonoString* LobbyAmOwnerSearchKey;
        // static MonoString* LobbyMembershipLockSearchKey;
        // static MonoString* LobbyAmServerSearchKey;
    
    
        // Methods
        void .ctor();
        static void .cctor();
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyCreateConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyCreateConfiguration* <Config>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        uint32_t get_MaxMemberCount();
        void set_MaxMemberCount(uint32_t value);
        LobbyOwnerMigrationPolicy get_OwnerMigrationPolicy();
        void set_OwnerMigrationPolicy(LobbyOwnerMigrationPolicy value);
        LobbyAccessPolicy get_AccessPolicy();
        void set_AccessPolicy(LobbyAccessPolicy value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_LobbyProperties();
        void set_LobbyProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyCreateConfiguration* get_Config();
        void set_Config(PFLobbyCreateConfiguration* value);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyDataUpdate* <Update>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        PFEntityKey* get_NewOwner();
        void set_NewOwner(PFEntityKey* value);
        System.Nullable<System.UInt32> get_MaxMemberCount();
        void set_MaxMemberCount(System.Nullable<System.UInt32> value);
        System.Nullable<PlayFab.Multiplayer.LobbyAccessPolicy> get_AccessPolicy();
        void set_AccessPolicy(System.Nullable<PlayFab.Multiplayer.LobbyAccessPolicy> value);
        System.Nullable<PlayFab.Multiplayer.LobbyMembershipLock> get_MembershipLock();
        void set_MembershipLock(System.Nullable<PlayFab.Multiplayer.LobbyMembershipLock> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_LobbyProperties();
        void set_LobbyProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyDataUpdate* get_Update();
        void set_Update(PFLobbyDataUpdate* value);
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyDisconnectingReason
    {
    public:
        // Static fields
        // static LobbyDisconnectingReason NoLocalMembers;
        // static LobbyDisconnectingReason LobbyDeleted;
        // static LobbyDisconnectingReason LobbyServerLeft;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyInviteListenerStatus
    {
    public:
        // Static fields
        // static LobbyInviteListenerStatus NotListening;
        // static LobbyInviteListenerStatus Listening;
        // static LobbyInviteListenerStatus NotAuthorized;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyJoinConfiguration* <Config>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        System.Collections.Generic.IDictionary<System.String,System.String> get_MemberProperties();
        void set_MemberProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyJoinConfiguration* get_Config();
        void set_Config(PFLobbyJoinConfiguration* value);
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyMemberConnectionStatus
    {
    public:
        // Static fields
        // static LobbyMemberConnectionStatus NotConnected;
        // static LobbyMemberConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyMemberRemovedReason
    {
    public:
        // Static fields
        // static LobbyMemberRemovedReason LocalUserLeftLobby;
        // static LobbyMemberRemovedReason LocalUserForciblyRemoved;
        // static LobbyMemberRemovedReason RemoteUserLeftLobby;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyMembershipLock
    {
    public:
        // Static fields
        // static LobbyMembershipLock Unlocked;
        // static LobbyMembershipLock Locked;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyMemberUpdateSummary
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyMemberUpdateSummary* summary; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<System.String> updatedMemberPropertyKeyList; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey* member; // 0x0020
    
        // Methods
        void .ctor(PFLobbyMemberUpdateSummary* summary);
        PFEntityKey* get_Member();
        bool get_ConnectionStatusUpdated();
        System.Collections.Generic.List<System.String> get_UpdatedMemberPropertyKeys();
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyOwnerMigrationPolicy
    {
    public:
        // Static fields
        // static LobbyOwnerMigrationPolicy Automatic;
        // static LobbyOwnerMigrationPolicy Manual;
        // static LobbyOwnerMigrationPolicy None;
        // static LobbyOwnerMigrationPolicy Server;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class LobbySearchConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbySearchConfiguration* <SearchConfig>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        LobbySearchFriendsFilter* get_FriendsFilter();
        MonoString* get_FilterString();
        void set_FilterString(MonoString* value);
        MonoString* get_SortString();
        void set_SortString(MonoString* value);
        System.Nullable<System.UInt32> get_ClientSearchResultCount();
        void set_ClientSearchResultCount(System.Nullable<System.UInt32> value);
        PFLobbySearchConfiguration* get_SearchConfig();
        void set_SearchConfig(PFLobbySearchConfiguration* value);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbySearchFriendsFilter
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbySearchFriendsFilter* filter; // 0x0010
    
        // Methods
        void .ctor(PFLobbySearchFriendsFilter* filter);
        bool get_IncludeSteamFriends();
        void set_IncludeSteamFriends(bool value);
        bool get_IncludeFacebookFriends();
        void set_IncludeFacebookFriends(bool value);
        MonoString* get_IncludeXboxFriendsToken();
        void set_IncludeXboxFriendsToken(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbySearchResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbySearchResult* searchResult; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PFEntityKey* owner; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.List<PlayFab.Multiplayer.PFEntityKey> friendsList; // 0x0020
    
        // Methods
        void .ctor(PFLobbySearchResult* searchResult);
        MonoString* get_LobbyId();
        MonoString* get_ConnectionString();
        PFEntityKey* get_OwnerEntity();
        uint32_t get_MaxMemberCount();
        uint32_t get_CurrentMemberCount();
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        System.Collections.Generic.IList<PlayFab.Multiplayer.PFEntityKey> get_Friends();
        LobbyMembershipLock get_MembershipLock();
    };

    // Namespace: PlayFab.Multiplayer
    struct LobbyServerConnectionStatus
    {
    public:
        // Static fields
        // static LobbyServerConnectionStatus NotConnected;
        // static LobbyServerConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyServerDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyServerDataUpdate* <Update>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        PFEntityKey* get_NewServer();
        void set_NewServer(PFEntityKey* value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyServerDataUpdate* get_Update();
        void set_Update(PFLobbyServerDataUpdate* value);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyServerJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyServerJoinConfiguration* <Config>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        System.Collections.Generic.IDictionary<System.String,System.String> get_ServerProperties();
        void set_ServerProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        PFLobbyServerJoinConfiguration* get_Config();
        void set_Config(PFLobbyServerJoinConfiguration* value);
    };

    // Namespace: PlayFab.Multiplayer
    struct LogLevelType
    {
    public:
        // Static fields
        // static LogLevelType None;
        // static LogLevelType Minimal;
        // static LogLevelType Verbose;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class MatchmakingMatchDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingMatchDetails* details; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.IList<PlayFab.Multiplayer.MatchmakingTicketMatchMember> members; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.IList<System.String> regionPreferences; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MultiplayerServerDetails* serverDetails; // 0x0028
    
        // Methods
        void .ctor(PFMatchmakingMatchDetails* details);
        MonoString* get_MatchId();
        System.Collections.Generic.IList<PlayFab.Multiplayer.MatchmakingTicketMatchMember> get_Members();
        System.Collections.Generic.IList<System.String> get_RegionPreferences();
        MonoString* get_LobbyArrangementString();
        MultiplayerServerDetails* get_ServerDetails();
    };

    // Namespace: PlayFab.Multiplayer
    class MatchmakingTicket
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.IntPtr,PlayFab.Multiplayer.MatchmakingTicket> matchmakingTicketCache;
    
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingTicketHandle* <Handle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PFMatchmakingTicketHandle* handle);
        MatchmakingTicketStatus get_Status();
        MonoString* get_TicketId();
        MonoObject* get_Context();
        void set_Context(MonoObject* value);
        PFMatchmakingTicketHandle* get_Handle();
        void set_Handle(PFMatchmakingTicketHandle* value);
        void Cancel();
        MatchmakingMatchDetails* GetMatchDetails();
        static MatchmakingTicket* GetMatchmakingTicketUsingCache(PFMatchmakingTicketHandle* handle);
        static void ClearMatchmakingTicketFromCache(PFMatchmakingTicketHandle* handle);
        static void .cctor();
    };

    // Namespace: PlayFab.Multiplayer
    class MatchmakingTicketMatchMember
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingMatchMember* member; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PFEntityKey* entityKey; // 0x0018
    
        // Methods
        void .ctor(PFMatchmakingMatchMember* member);
        PFEntityKey* get_EntityKey();
        MonoString* get_TeamId();
        MonoString* get_AttributesJSON();
    };

    // Namespace: PlayFab.Multiplayer
    struct MatchmakingTicketStatus
    {
    public:
        // Static fields
        // static MatchmakingTicketStatus Creating;
        // static MatchmakingTicketStatus Joining;
        // static MatchmakingTicketStatus WaitingForPlayers;
        // static MatchmakingTicketStatus WaitingForMatch;
        // static MatchmakingTicketStatus Matched;
        // static MatchmakingTicketStatus Canceled;
        // static MatchmakingTicketStatus Failed;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    struct MatchUser
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <LocalUser>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <TeamId>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* <LocalUserJsonAttributesJSON>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PlayFabAuthenticationContext* localUser, MonoString* localUserJsonAttributesJSON, MonoString* teamId);
        void .ctor(PFEntityKey* localUser, MonoString* localUserJsonAttributesJSON, MonoString* teamId);
        PFEntityKey* get_LocalUser();
        void set_LocalUser(PFEntityKey* value);
        MonoString* get_TeamId();
        void set_TeamId(MonoString* value);
        MonoString* get_LocalUserJsonAttributesJSON();
        void set_LocalUserJsonAttributesJSON(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer
    class MultiplayerPort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMultiplayerPort* multiplayerPort; // 0x0010
    
        // Methods
        void .ctor(MonoString* name, uint32_t num, MultiplayerProtocolType protocolType);
        void .ctor(PFMultiplayerPort* port);
        MonoString* get_Name();
        void set_Name(MonoString* value);
        uint32_t get_Num();
        void set_Num(uint32_t value);
        MultiplayerProtocolType get_Protocol();
        void set_Protocol(MultiplayerProtocolType value);
    };

    // Namespace: PlayFab.Multiplayer
    struct MultiplayerProtocolType
    {
    public:
        // Static fields
        // static MultiplayerProtocolType Tcp;
        // static MultiplayerProtocolType Udp;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer
    class MultiplayerServerDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMultiplayerServerDetails* multiplayerServerDetails; // 0x0010
    
        // Methods
        void .ctor(MonoString* fqdn, MonoString* ipv4Address, System.Collections.Generic.IList<PlayFab.Multiplayer.MultiplayerPort> ports, MonoString* region);
        void .ctor(PFMultiplayerServerDetails* serverDetails);
        PFMultiplayerServerDetails* get_PFMultiplayerServerDetails();
        MonoString* get_Fqdn();
        void set_Fqdn(MonoString* value);
        MonoString* get_Ipv4Address();
        void set_Ipv4Address(MonoString* value);
        System.Collections.Generic.IList<PlayFab.Multiplayer.MultiplayerPort> get_Ports();
        void set_Ports(System.Collections.Generic.IList<PlayFab.Multiplayer.MultiplayerPort> value);
        MonoString* get_Region();
        void set_Region(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer
    class PFEntityKey
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <EntityKey>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(PlayFabAuthenticationContext* authContext);
        void .ctor(MonoString* id, MonoString* type);
        void .ctor(PFEntityKey* newEntityKey);
        MonoString* get_Id();
        void set_Id(MonoString* value);
        MonoString* get_Type();
        void set_Type(MonoString* value);
        PFEntityKey* get_EntityKey();
        void set_EntityKey(PFEntityKey* value);
    };

    // Namespace: PlayFab.Multiplayer
    class PlayFabMultiplayer
    {
    public:
        // Static fields
        // static uint32_t LobbyMaxMemberCountLowerLimit;
        // static uint32_t LobbyMaxMemberCountUpperLimit;
        // static uint32_t LobbyMaxSearchPropertyCount;
        // static uint32_t LobbyMaxLobbyPropertyCount;
        // static uint32_t LobbyMaxMemberPropertyCount;
        // static uint32_t LobbyMaxServerPropertyCount;
        // static uint32_t LobbyClientRequestedSearchResultCountUpperLimit;
        // static PFMultiplayerInitStatus initStatus;
        // static PFMultiplayerHandle* multiplayerHandle;
        // static LogLevelType logLevel;
        // static LobbyStateChangeCollection lobbyStateChanges;
        // static MatchmakingStateChangeCollection matchmakingStateChanges;
        // static OnErrorEventHandler* OnError;
        // static OnLobbyCreateAndJoinCompletedHandler* OnLobbyCreateAndJoinCompleted;
        // static OnLobbyDisconnectedHandler* OnLobbyDisconnected;
        // static OnLobbyMemberAddedHandler* OnLobbyMemberAdded;
        // static OnLobbyMemberRemovedHandler* OnLobbyMemberRemoved;
        // static OnAddMemberCompletedHandler* OnAddMemberCompleted;
        // static OnForceRemoveMemberCompletedHandler* OnForceRemoveMemberCompleted;
        // static OnLobbyJoinCompletedHandler* OnLobbyJoinCompleted;
        // static OnLobbyUpdatedHandler* OnLobbyUpdated;
        // static OnLobbyPostUpdateCompletedHandler* OnLobbyPostUpdateCompleted;
        // static OnLobbyJoinArrangedLobbyCompletedHandler* OnLobbyJoinArrangedLobbyCompleted;
        // static OnLobbyFindLobbiesCompletedHandler* OnLobbyFindLobbiesCompleted;
        // static OnLobbySendInviteCompletedHandler* OnLobbySendInviteCompleted;
        // static OnLobbyInviteReceivedHandler* OnLobbyInviteReceived;
        // static OnLobbyLeaveCompletedHandler* OnLobbyLeaveCompleted;
        // static OnLobbyInviteListenerStatusChangedHandler* OnLobbyInviteListenerStatusChanged;
        // static OnMatchmakingTicketStatusChangedHandler* OnMatchmakingTicketStatusChanged;
        // static OnMatchmakingTicketCompletedHandler* OnMatchmakingTicketCompleted;
    
    
        // Methods
        static void add_OnError(OnErrorEventHandler* value);
        static void remove_OnError(OnErrorEventHandler* value);
        static void add_OnLobbyCreateAndJoinCompleted(OnLobbyCreateAndJoinCompletedHandler* value);
        static void remove_OnLobbyCreateAndJoinCompleted(OnLobbyCreateAndJoinCompletedHandler* value);
        static void add_OnLobbyDisconnected(OnLobbyDisconnectedHandler* value);
        static void remove_OnLobbyDisconnected(OnLobbyDisconnectedHandler* value);
        static void add_OnLobbyMemberAdded(OnLobbyMemberAddedHandler* value);
        static void remove_OnLobbyMemberAdded(OnLobbyMemberAddedHandler* value);
        static void add_OnLobbyMemberRemoved(OnLobbyMemberRemovedHandler* value);
        static void remove_OnLobbyMemberRemoved(OnLobbyMemberRemovedHandler* value);
        static void add_OnAddMemberCompleted(OnAddMemberCompletedHandler* value);
        static void remove_OnAddMemberCompleted(OnAddMemberCompletedHandler* value);
        static void add_OnForceRemoveMemberCompleted(OnForceRemoveMemberCompletedHandler* value);
        static void remove_OnForceRemoveMemberCompleted(OnForceRemoveMemberCompletedHandler* value);
        static void add_OnLobbyJoinCompleted(OnLobbyJoinCompletedHandler* value);
        static void remove_OnLobbyJoinCompleted(OnLobbyJoinCompletedHandler* value);
        static void add_OnLobbyUpdated(OnLobbyUpdatedHandler* value);
        static void remove_OnLobbyUpdated(OnLobbyUpdatedHandler* value);
        static void add_OnLobbyPostUpdateCompleted(OnLobbyPostUpdateCompletedHandler* value);
        static void remove_OnLobbyPostUpdateCompleted(OnLobbyPostUpdateCompletedHandler* value);
        static void add_OnLobbyJoinArrangedLobbyCompleted(OnLobbyJoinArrangedLobbyCompletedHandler* value);
        static void remove_OnLobbyJoinArrangedLobbyCompleted(OnLobbyJoinArrangedLobbyCompletedHandler* value);
        static void add_OnLobbyFindLobbiesCompleted(OnLobbyFindLobbiesCompletedHandler* value);
        static void remove_OnLobbyFindLobbiesCompleted(OnLobbyFindLobbiesCompletedHandler* value);
        static void add_OnLobbySendInviteCompleted(OnLobbySendInviteCompletedHandler* value);
        static void remove_OnLobbySendInviteCompleted(OnLobbySendInviteCompletedHandler* value);
        static void add_OnLobbyInviteReceived(OnLobbyInviteReceivedHandler* value);
        static void remove_OnLobbyInviteReceived(OnLobbyInviteReceivedHandler* value);
        static void add_OnLobbyLeaveCompleted(OnLobbyLeaveCompletedHandler* value);
        static void remove_OnLobbyLeaveCompleted(OnLobbyLeaveCompletedHandler* value);
        static void add_OnLobbyInviteListenerStatusChanged(OnLobbyInviteListenerStatusChangedHandler* value);
        static void remove_OnLobbyInviteListenerStatusChanged(OnLobbyInviteListenerStatusChangedHandler* value);
        static void add_OnMatchmakingTicketStatusChanged(OnMatchmakingTicketStatusChangedHandler* value);
        static void remove_OnMatchmakingTicketStatusChanged(OnMatchmakingTicketStatusChangedHandler* value);
        static void add_OnMatchmakingTicketCompleted(OnMatchmakingTicketCompletedHandler* value);
        static void remove_OnMatchmakingTicketCompleted(OnMatchmakingTicketCompletedHandler* value);
        static LogLevelType get_LogLevel();
        static void set_LogLevel(LogLevelType value);
        static bool get_IsInitialized();
        static void SetEntityToken(PlayFabAuthenticationContext* localMember);
        static void SetEntityToken(PFEntityKey* localMember, MonoString* entityToken);
        static Lobby* CreateAndJoinLobby(PlayFabAuthenticationContext* creator, LobbyCreateConfiguration* createConfiguration, LobbyJoinConfiguration* joinConfiguration);
        static Lobby* CreateAndJoinLobby(PFEntityKey* creator, LobbyCreateConfiguration* createConfiguration, LobbyJoinConfiguration* joinConfiguration);
        static Lobby* JoinLobby(PlayFabAuthenticationContext* newMember, MonoString* connectionString, System.Collections.Generic.IDictionary<System.String,System.String> memberKeyValuePairs);
        static Lobby* JoinLobby(PFEntityKey* newMember, MonoString* connectionString, System.Collections.Generic.IDictionary<System.String,System.String> memberKeyValuePairs);
        static Lobby* JoinArrangedLobby(PlayFabAuthenticationContext* newMember, MonoString* arrangementString, LobbyArrangedJoinConfiguration* config);
        static Lobby* JoinArrangedLobby(PFEntityKey* newMember, MonoString* arrangementString, LobbyArrangedJoinConfiguration* config);
        static void FindLobbies(PlayFabAuthenticationContext* searchingEntity, LobbySearchConfiguration* searchConfiguration);
        static void FindLobbies(PFEntityKey* searchingEntity, LobbySearchConfiguration* searchConfiguration);
        static MatchmakingTicket* CreateMatchmakingTicket(MatchUser localUser, MonoString* queueName, uint32_t timeoutInSeconds);
        static MatchmakingTicket* CreateMatchmakingTicket(System.Collections.Generic.IList<PlayFab.Multiplayer.MatchUser> localUsers, MonoString* queueName, uint32_t timeoutInSeconds);
        static MatchmakingTicket* CreateMatchmakingTicket(System.Collections.Generic.IList<PlayFab.Multiplayer.MatchUser> localUsers, MonoString* queueName, System.Collections.Generic.List<PlayFab.Multiplayer.PFEntityKey> membersToMatchWith, uint32_t timeoutInSeconds);
        static MatchmakingTicket* JoinMatchmakingTicketFromId(MatchUser localUser, MonoString* ticketId, MonoString* queueName, System.Collections.Generic.IList<PlayFab.Multiplayer.PFEntityKey> membersToMatchWith);
        static MatchmakingTicket* JoinMatchmakingTicketFromId(System.Collections.Generic.IList<PlayFab.Multiplayer.MatchUser> localUsers, MonoString* ticketId, MonoString* queueName, System.Collections.Generic.IList<PlayFab.Multiplayer.PFEntityKey> membersToMatchWith);
        static void StartListeningForLobbyInvites(PlayFabAuthenticationContext* listeningEntity);
        static void StopListeningForLobbyInvites(PlayFabAuthenticationContext* listeningEntity);
        static LobbyInviteListenerStatus GetLobbyInviteListenerStatus(PlayFabAuthenticationContext* listeningEntity);
        static void StartListeningForLobbyInvites(PFEntityKey* listeningEntity);
        static void StopListeningForLobbyInvites(PFEntityKey* listeningEntity);
        static LobbyInviteListenerStatus GetLobbyInviteListenerStatus(PFEntityKey* listeningEntity);
        static void Initialize();
        static void Uninitialize();
        static void ProcessLobbyStateChanges();
        static void ProcessMatchmakingStateChanges();
        static void LogError(MonoString* message);
        static void LogError(int32_t code);
        static void LogWarning(MonoString* warningMessage);
        static void LogInfo(MonoString* infoMessage);
        static bool Succeeded(int32_t errorCode);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer
    class PlayFabMultiplayerErrorArgs : public EventArgs
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Message>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t <Code>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(int32_t code, MonoString* message);
        int32_t get_Code();
        void set_Code(int32_t value);
        MonoString* get_Message();
        void set_Message(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer
    class DisposableBuffer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t <IntPtr>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        void .ctor(int32_t size);
        void Finalize();
        intptr_t get_IntPtr();
        void set_IntPtr(intptr_t value);
        void Dispose();
        void Dispose(bool isDisposing);
    };

    // Namespace: PlayFab.Multiplayer
    class DisposableCollection
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<System.IDisposable> disposables; // 0x0010
    
        // Methods
        void .ctor();
        void Finalize();
        void Dispose();
        T Add(T disposable);
        void Dispose(bool isDisposing);
    };

    // Namespace: PlayFab.Multiplayer
    class LobbyError
    {
    public:
        // Static fields
        // static int32_t Success;
        // static int32_t InvalidArg;
    
    
        // Methods
        static bool SUCCEEDED(int32_t error);
        static bool FAILED(int32_t error);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer
    class ObjectPool
    {
    public:
        // Static fields
        // static Object[][] ctorParamList0Element;
        // static Object[][] ctorParamList1Element;
        // static Object[][] ctorParamList2Element;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.Dictionary<System.Type,PlayFab.Multiplayer.ObjectPool.Pool> pools; // 0x0010
    
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

    // Namespace: PlayFab.Multiplayer
    class PlayFabMultiplayerEventTracer : public SingletonMonoBehaviour`1
    {
    public:
        // Static fields
        // static MonoString* internalEventNamespace;
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
        void OnPlayFabMultiPlayerInitialize();
        IEnumerator* WaitUntilEntityLoggedIn(float secondsBetweenWait);
        void DoWork();
        void EventSentSuccessfulCallback(WriteEventsResponse* response);
        void EventSentErrorCallback(PlayFabError* response);
        void OnEnable();
        void OnDisable();
        void OnDestroy();
    };

    // Namespace: PlayFab.Multiplayer
    class Version
    {
    public:
        // Static fields
        // static MonoString* MultiplayerNativeVersion;
        // static MonoString* MultiplayerUnityVersion;
    
    
        // Methods
        static void .cctor();
    };

    // Namespace: PlayFab.Multiplayer
    struct SizeT
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uintptr_t value; // 0x0010
    
        // Methods
        void .ctor(int32_t length);
        void .ctor(uint32_t length);
        bool get_IsZero();
        uint32_t ToUInt32();
        int32_t ToInt32();
    };

} // namespace PlayFab.Multiplayer

namespace PlayFab.Multiplayer.Interop
{

    // Namespace: PlayFab.Multiplayer.Interop
    class Methods
    {
    public:
        // Static fields
        // static MonoString* ThunkDllName;
        // static uint32_t PFLobbyMaxMemberCountLowerLimit;
        // static uint32_t PFLobbyMaxMemberCountUpperLimit;
        // static uint32_t PFLobbyMaxSearchPropertyCount;
        // static uint32_t PFLobbyMaxLobbyPropertyCount;
        // static uint32_t PFLobbyMaxMemberPropertyCount;
        // static uint32_t PFLobbyMaxServerPropertyCount;
        // static uint32_t PFLobbyClientRequestedSearchResultCountUpperLimit;
        // static uint64_t PFMultiplayerAnyProcessor;
    
    
        // Methods
        static System.ReadOnlySpan<System.Byte> get_PFLobbyMemberCountSearchKey();
        static System.ReadOnlySpan<System.Byte> get_PFLobbyMemberCountRemainingSearchKey();
        static System.ReadOnlySpan<System.Byte> get_PFLobbyAmMemberSearchKey();
        static System.ReadOnlySpan<System.Byte> get_PFLobbyAmOwnerSearchKey();
        static System.ReadOnlySpan<System.Byte> get_PFLobbyMembershipLockSearchKey();
        static System.ReadOnlySpan<System.Byte> get_PFLobbyAmServerSearchKey();
        static int32_t PFLobbyGetLobbyId(void* lobby, void* id);
        static int32_t PFLobbyGetMaxMemberCount(void* lobby, void* maxMemberCount);
        static int32_t PFLobbyGetOwner(void* lobby, void* owner);
        static int32_t PFLobbyGetOwnerMigrationPolicy(void* lobby, void* ownerMigrationPolicy);
        static int32_t PFLobbyGetAccessPolicy(void* lobby, void* accessPolicy);
        static int32_t PFLobbyGetMembershipLock(void* lobby, void* lockState);
        static int32_t PFLobbyGetConnectionString(void* lobby, void* connectionString);
        static int32_t PFLobbyGetMembers(void* lobby, void* memberCount, void* members);
        static int32_t PFLobbyAddMember(void* lobby, void* localUser, uint32_t memberPropertyCount, void* memberPropertyKeys, void* memberPropertyValues, void* asyncContext);
        static int32_t PFLobbyForceRemoveMember(void* lobby, void* targetMember, uint8_t preventRejoin, void* asyncContext);
        static int32_t PFLobbyLeave(void* lobby, void* localUser, void* asyncContext);
        static int32_t PFLobbyGetSearchPropertyKeys(void* lobby, void* propertyCount, void* keys);
        static int32_t PFLobbyGetSearchProperty(void* lobby, void* key, void* value);
        static int32_t PFLobbyGetLobbyPropertyKeys(void* lobby, void* propertyCount, void* keys);
        static int32_t PFLobbyGetLobbyProperty(void* lobby, void* key, void* value);
        static int32_t PFLobbyGetMemberPropertyKeys(void* lobby, void* member, void* propertyCount, void* keys);
        static int32_t PFLobbyGetMemberProperty(void* lobby, void* member, void* key, void* value);
        static int32_t PFLobbyGetMemberConnectionStatus(void* lobby, void* member, void* connectionStatus);
        static int32_t PFLobbyGetServer(void* lobby, void* server);
        static int32_t PFLobbyGetServerPropertyKeys(void* lobby, void* propertyCount, void* keys);
        static int32_t PFLobbyGetServerProperty(void* lobby, void* key, void* value);
        static int32_t PFLobbyGetServerConnectionStatus(void* lobby, void* connectionStatus);
        static int32_t PFLobbyPostUpdate(void* lobby, void* localUser, void* lobbyUpdate, void* memberUpdate, void* asyncContext);
        static int32_t PFLobbySendInvite(void* lobby, void* sender, void* invitee, void* asyncContext);
        static int32_t PFLobbyGetCustomContext(void* lobby, void* customContext);
        static int32_t PFLobbySetCustomContext(void* lobby, void* customContext);
        static int32_t PFMultiplayerStartProcessingLobbyStateChanges(void* handle, void* stateChangeCount, void* stateChanges);
        static int32_t PFMultiplayerFinishProcessingLobbyStateChanges(void* handle, uint32_t stateChangeCount, void* stateChanges);
        static int32_t PFMultiplayerCreateAndJoinLobby(void* handle, void* creator, void* createConfiguration, void* joinConfiguration, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerJoinLobby(void* handle, void* newMember, void* connectionString, void* configuration, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerConnectToLobby(void* handle, void* newMember, void* lobbyId, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerJoinArrangedLobby(void* handle, void* newMember, void* arrangementString, void* configuration, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerFindLobbies(void* handle, void* searchingEntity, void* searchConfiguration, void* asyncContext);
        static int32_t PFMultiplayerStartListeningForLobbyInvites(void* handle, void* listeningEntity);
        static int32_t PFMultiplayerStopListeningForLobbyInvites(void* handle, void* listeningEntity);
        static int32_t PFMultiplayerGetLobbyInviteListenerStatus(void* handle, void* listeningEntity, void* status);
        static int32_t PFMultiplayerCreateAndClaimServerLobby(void* handle, void* server, void* createConfiguration, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerClaimServerLobby(void* handle, void* server, void* lobbyId, void* asyncContext, void* lobby);
        static int32_t PFMultiplayerJoinLobbyAsServer(void* handle, void* server, void* connectionString, void* configuration, void* asyncContext, void* lobby);
        static int32_t PFLobbyServerPostUpdate(void* lobby, void* lobbyUpdate, void* asyncContext);
        static int32_t PFLobbyServerPostUpdateAsServer(void* lobby, void* serverUpdate, void* asyncContext);
        static int32_t PFLobbyServerLeaveAsServer(void* lobby, void* asyncContext);
        static int32_t PFLobbyServerDeleteLobby(void* lobby, void* asyncContext);
        static int32_t PFMultiplayerStartProcessingMatchmakingStateChanges(void* handle, void* stateChangeCount, void* stateChanges);
        static int32_t PFMultiplayerFinishProcessingMatchmakingStateChanges(void* handle, uint32_t stateChangeCount, void* stateChanges);
        static int32_t PFMultiplayerCreateMatchmakingTicket(void* handle, uint32_t localUserCount, void* localUsers, void* localUserAttributes, void* configuration, void* asyncContext, void* ticket);
        static int32_t PFMultiplayerJoinMatchmakingTicketFromId(void* handle, uint32_t localUserCount, void* localUsers, void* localUserAttributes, void* ticketId, void* queueName, void* asyncContext, void* ticket);
        static int32_t PFMultiplayerDestroyMatchmakingTicket(void* handle, void* ticket);
        static int32_t PFMatchmakingTicketGetStatus(void* ticket, void* status);
        static int32_t PFMatchmakingTicketCancel(void* ticket);
        static int32_t PFMatchmakingTicketGetTicketId(void* ticket, void* id);
        static int32_t PFMatchmakingTicketGetMatch(void* ticket, void* match);
        static int32_t PFMatchmakingTicketGetCustomContext(void* ticket, void* customContext);
        static int32_t PFMatchmakingTicketSetCustomContext(void* ticket, void* customContext);
        static int32_t PFMultiplayerCreateServerBackfillTicket(void* handle, void* server, void* configuration, void* asyncContext, void* ticket);
        static void* PFMultiplayerGetErrorMessage(int32_t error);
        static int32_t PFMultiplayerSetMemoryCallbacks(intptr_t allocateMemoryCallback, intptr_t freeMemoryCallback);
        static int32_t PFMultiplayerSetThreadAffinityMask(PFMultiplayerThreadId threadId, uint64_t threadAffinityMask);
        static int32_t PFMultiplayerInitialize(void* playFabTitleId, void* handle);
        static int32_t PFMultiplayerUninitialize(void* handle);
        static int32_t PFMultiplayerSetEntityToken(void* handle, void* entity, void* entityToken);
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFEntityKey
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* id; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* type; // 0x0018
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobby
    {
    public:
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyAccessPolicy
    {
    public:
        // Static fields
        // static PFLobbyAccessPolicy Public;
        // static PFLobbyAccessPolicy Friends;
        // static PFLobbyAccessPolicy Private;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyAddMemberCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey localUser; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        void* asyncContext; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyArrangedJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t maxMemberCount; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PFLobbyOwnerMigrationPolicy ownerMigrationPolicy; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFLobbyAccessPolicy accessPolicy; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t memberPropertyCount; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        void* memberPropertyKeys; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* memberPropertyValues; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyClaimServerLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* asyncContext; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* lobbyId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* lobby; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyConnectToLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFEntityKey newMember; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        void* lobbyId; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* asyncContext; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* lobby; // 0x0038
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyCreateAndClaimServerLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* asyncContext; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* lobby; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyCreateAndJoinLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* asyncContext; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* lobby; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyCreateConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t maxMemberCount; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        PFLobbyOwnerMigrationPolicy ownerMigrationPolicy; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFLobbyAccessPolicy accessPolicy; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t searchPropertyCount; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        void* searchPropertyKeys; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* searchPropertyValues; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t lobbyPropertyCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* lobbyPropertyKeys; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        void* lobbyPropertyValues; // 0x0040
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* newOwner; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* maxMemberCount; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* accessPolicy; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* membershipLock; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t searchPropertyCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* searchPropertyKeys; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        void* searchPropertyValues; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        uint32_t lobbyPropertyCount; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        void* lobbyPropertyKeys; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        void* lobbyPropertyValues; // 0x0058
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyDisconnectedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyDisconnectingReason
    {
    public:
        // Static fields
        // static PFLobbyDisconnectingReason NoLocalMembers;
        // static PFLobbyDisconnectingReason LobbyDeleted;
        // static PFLobbyDisconnectingReason ConnectionInterruption;
        // static PFLobbyDisconnectingReason LobbyServerLeft;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyDisconnectingStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFLobbyDisconnectingReason reason; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyFindLobbiesCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFEntityKey searchingEntity; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        void* asyncContext; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t searchResultCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* searchResults; // 0x0038
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyForceRemoveMemberCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey targetMember; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        void* asyncContext; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyInviteListenerStatus
    {
    public:
        // Static fields
        // static PFLobbyInviteListenerStatus NotListening;
        // static PFLobbyInviteListenerStatus Listening;
        // static PFLobbyInviteListenerStatus NotAuthorized;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyInviteListenerStatusChangedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PFEntityKey listeningEntity; // 0x0018
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyInviteReceivedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PFEntityKey listeningEntity; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        PFEntityKey invitingEntity; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        void* connectionString; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        void* lobbyId; // 0x0040
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyJoinArrangedLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFEntityKey newMember; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        void* asyncContext; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* lobby; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t memberPropertyCount; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* memberPropertyKeys; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* memberPropertyValues; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyJoinLobbyAsServerCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFEntityKey newServer; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        void* asyncContext; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* lobby; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyJoinLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        PFEntityKey newMember; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        void* asyncContext; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* lobby; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyLeaveLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* localUser; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* asyncContext; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberAddedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey member; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberConnectionStatus
    {
    public:
        // Static fields
        // static PFLobbyMemberConnectionStatus NotConnected;
        // static PFLobbyMemberConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t memberPropertyCount; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* memberPropertyKeys; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* memberPropertyValues; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberRemovedReason
    {
    public:
        // Static fields
        // static PFLobbyMemberRemovedReason LocalUserLeftLobby;
        // static PFLobbyMemberRemovedReason LocalUserForciblyRemoved;
        // static PFLobbyMemberRemovedReason RemoteUserLeftLobby;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberRemovedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey member; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        PFLobbyMemberRemovedReason reason; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMembershipLock
    {
    public:
        // Static fields
        // static PFLobbyMembershipLock Unlocked;
        // static PFLobbyMembershipLock Locked;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyMemberUpdateSummary
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey member; // 0x0010
        uint8_t pad_0011[0xF]; // 0x0011
        bool connectionStatusUpdated; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t updatedMemberPropertyCount; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        void* updatedMemberPropertyKeys; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyOwnerMigrationPolicy
    {
    public:
        // Static fields
        // static PFLobbyOwnerMigrationPolicy Automatic;
        // static PFLobbyOwnerMigrationPolicy Manual;
        // static PFLobbyOwnerMigrationPolicy None;
        // static PFLobbyOwnerMigrationPolicy Server;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyPostUpdateCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey localUser; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        void* asyncContext; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbySearchConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* friendsFilter; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* filterString; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* sortString; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* clientSearchResultCount; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbySearchFriendsFilter
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool includeSteamFriends; // 0x0010
        bool includeFacebookFriends; // 0x0011
        uint8_t pad_0012[0x6]; // 0x0012
        void* includeXboxFriendsToken; // 0x0018
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbySearchResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* lobbyId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* connectionString; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* ownerEntity; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t maxMemberCount; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t currentMemberCount; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        uint32_t searchPropertyCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* searchPropertyKeys; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        void* searchPropertyValues; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        uint32_t friendCount; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        void* friends; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        PFLobbyMembershipLock membershipLock; // 0x0058
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbySendInviteCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey sender; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        PFEntityKey invitee; // 0x0030
        uint8_t pad_0031[0xF]; // 0x0031
        void* asyncContext; // 0x0040
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerConnectionStatus
    {
    public:
        // Static fields
        // static PFLobbyServerConnectionStatus NotConnected;
        // static PFLobbyServerConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* newServer; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t serverPropertyCount; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* serverPropertyKeys; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* serverPropertyValues; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerDeleteLobbyCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* asyncContext; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t serverPropertyCount; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* serverPropertyKeys; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* serverPropertyValues; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerLeaveLobbyAsServerCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* asyncContext; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerPostUpdateAsServerCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* asyncContext; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyServerPostUpdateCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* asyncContext; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChangeType stateChangeType; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyStateChangeType
    {
    public:
        // Static fields
        // static PFLobbyStateChangeType CreateAndJoinLobbyCompleted;
        // static PFLobbyStateChangeType JoinLobbyCompleted;
        // static PFLobbyStateChangeType MemberAdded;
        // static PFLobbyStateChangeType AddMemberCompleted;
        // static PFLobbyStateChangeType MemberRemoved;
        // static PFLobbyStateChangeType ForceRemoveMemberCompleted;
        // static PFLobbyStateChangeType LeaveLobbyCompleted;
        // static PFLobbyStateChangeType Updated;
        // static PFLobbyStateChangeType PostUpdateCompleted;
        // static PFLobbyStateChangeType Disconnecting;
        // static PFLobbyStateChangeType Disconnected;
        // static PFLobbyStateChangeType JoinArrangedLobbyCompleted;
        // static PFLobbyStateChangeType FindLobbiesCompleted;
        // static PFLobbyStateChangeType InviteReceived;
        // static PFLobbyStateChangeType InviteListenerStatusChanged;
        // static PFLobbyStateChangeType SendInviteCompleted;
        // static PFLobbyStateChangeType CreateAndClaimServerLobbyCompleted;
        // static PFLobbyStateChangeType ClaimServerLobbyCompleted;
        // static PFLobbyStateChangeType ServerPostUpdateCompleted;
        // static PFLobbyStateChangeType ServerDeleteLobbyCompleted;
        // static PFLobbyStateChangeType JoinLobbyAsServerCompleted;
        // static PFLobbyStateChangeType ServerPostUpdateAsServerCompleted;
        // static PFLobbyStateChangeType ServerLeaveLobbyAsServerCompleted;
        // static PFLobbyStateChangeType ConnectToLobbyCompleted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyUpdatedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* lobby; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool ownerUpdated; // 0x0020
        bool maxMembersUpdated; // 0x0021
        bool accessPolicyUpdated; // 0x0022
        bool membershipLockUpdated; // 0x0023
        uint32_t updatedSearchPropertyCount; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        void* updatedSearchPropertyKeys; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t updatedLobbyPropertyCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* updatedLobbyPropertyKeys; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        uint32_t memberUpdateCount; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        void* memberUpdates; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool serverUpdated; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        uint32_t updatedServerPropertyCount; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        void* updatedServerPropertyKeys; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool serverConnectionStatusUpdated; // 0x0060
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFLobbyStateChangeUnion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChange stateChange; // 0x0010
        PFLobbyCreateAndJoinLobbyCompletedStateChange createAndJoinCompleted; // 0x0010
        PFLobbyJoinLobbyCompletedStateChange joinCompleted; // 0x0010
        PFLobbyMemberAddedStateChange memberAdded; // 0x0010
        PFLobbyAddMemberCompletedStateChange addMemberCompleted; // 0x0010
        PFLobbyMemberRemovedStateChange memberRemoved; // 0x0010
        PFLobbyForceRemoveMemberCompletedStateChange forceRemoveMember; // 0x0010
        PFLobbyLeaveLobbyCompletedStateChange leaveCompleted; // 0x0010
        PFLobbyUpdatedStateChange lobbyUpdated; // 0x0010
        PFLobbyPostUpdateCompletedStateChange postUpdateCompleted; // 0x0010
        PFLobbyDisconnectingStateChange disconnecting; // 0x0010
        PFLobbyDisconnectedStateChange disconnected; // 0x0010
        PFLobbyJoinArrangedLobbyCompletedStateChange arrangedJoinCompleted; // 0x0010
        PFLobbyFindLobbiesCompletedStateChange findLobbiesCompleted; // 0x0010
        PFLobbyInviteReceivedStateChange inviteReceivedStateChange; // 0x0010
        PFLobbyInviteListenerStatusChangedStateChange inviteListenerStatusChanged; // 0x0010
        PFLobbySendInviteCompletedStateChange sendInviteCompleted; // 0x0010
        PFLobbyCreateAndClaimServerLobbyCompletedStateChange createAndClaimServerLobbyCompleted; // 0x0010
        PFLobbyClaimServerLobbyCompletedStateChange claimServerLobbyCompleted; // 0x0010
        PFLobbyServerPostUpdateCompletedStateChange serverPostUpdateCompleted; // 0x0010
        PFLobbyServerDeleteLobbyCompletedStateChange serverDeleteLobbyCompleted; // 0x0010
        PFLobbyJoinLobbyAsServerCompletedStateChange joinLobbyAsServerCompleted; // 0x0010
        PFLobbyServerPostUpdateAsServerCompletedStateChange serverPostUpdateAsServerCompleted; // 0x0010
        PFLobbyServerLeaveLobbyAsServerCompletedStateChange serverLeaveLobbyAsServerCompleted; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingMatchDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* matchId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* members; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t memberCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* regionPreferences; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t regionPreferenceCount; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        void* lobbyArrangementString; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        void* serverDetails; // 0x0040
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingMatchMember
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey entityKey; // 0x0010
        uint8_t pad_0011[0xF]; // 0x0011
        void* teamId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* attributes; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingServerBackfillTicketConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t timeoutInSeconds; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* queueName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t memberCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* members; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* serverDetails; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingStateChangeType stateChangeType; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingStateChangeType
    {
    public:
        // Static fields
        // static PFMatchmakingStateChangeType TicketStatusChanged;
        // static PFMatchmakingStateChangeType TicketCompleted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingTicket
    {
    public:
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingTicketCompletedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t result; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        void* ticket; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* asyncContext; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingTicketConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t timeoutInSeconds; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* queueName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t membersToMatchWithCount; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        void* membersToMatchWith; // 0x0028
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingTicketStatus
    {
    public:
        // Static fields
        // static PFMatchmakingTicketStatus Creating;
        // static PFMatchmakingTicketStatus Joining;
        // static PFMatchmakingTicketStatus WaitingForPlayers;
        // static PFMatchmakingTicketStatus WaitingForMatch;
        // static PFMatchmakingTicketStatus Matched;
        // static PFMatchmakingTicketStatus Canceled;
        // static PFMatchmakingTicketStatus Failed;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingTicketStatusChangedStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingStateChange __AnonymousBase_1; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* ticket; // 0x0018
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMultiplayerPort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t num; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        PFMultiplayerProtocolType protocol; // 0x001C
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMultiplayerProtocolType
    {
    public:
        // Static fields
        // static PFMultiplayerProtocolType Tcp;
        // static PFMultiplayerProtocolType Udp;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMultiplayerServerDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* fqdn; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* ipv4Address; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* ports; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t portCount; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        void* region; // 0x0030
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMatchmakingStateChangeUnion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingStateChange stateChange; // 0x0010
        PFMatchmakingTicketCompletedStateChange ticketCompleted; // 0x0010
        PFMatchmakingTicketStatusChangedStateChange ticketStatusChanged; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMultiplayer
    {
    public:
    };

    // Namespace: PlayFab.Multiplayer.Interop
    class PFMultiplayerAllocateMemoryCallback : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(MonoObject* object, intptr_t method);
        void* Invoke(uintptr_t size, uint32_t memoryTypeId);
        IAsyncResult* BeginInvoke(uintptr_t size, uint32_t memoryTypeId, AsyncCallback* callback, MonoObject* object);
        void* EndInvoke(IAsyncResult* result);
    };

    // Namespace: PlayFab.Multiplayer.Interop
    class PFMultiplayerFreeMemoryCallback : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(MonoObject* object, intptr_t method);
        void Invoke(void* pointer, uint32_t memoryTypeId);
        IAsyncResult* BeginInvoke(void* pointer, uint32_t memoryTypeId, AsyncCallback* callback, MonoObject* object);
        void EndInvoke(IAsyncResult* result);
    };

    // Namespace: PlayFab.Multiplayer.Interop
    struct PFMultiplayerThreadId
    {
    public:
        // Static fields
        // static PFMultiplayerThreadId Networking;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

} // namespace PlayFab.Multiplayer.Interop

namespace PlayFab.Multiplayer.InteropWrapper
{

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class Converters
    {
    public:
    
        // Methods
        static ClassType PtrToStruct(intptr_t ptr);
        static intptr_t ClassArrayToPtr(ClassType[][] inputTypes, System.Func<ClassType,PlayFab.Multiplayer.DisposableCollection,InteropStructType> converter, DisposableCollection* disposableCollection, uint32_t arrayCount);
        static intptr_t StructToPtr(InteropStructType interopStruct, DisposableCollection* disposableCollection);
        static intptr_t ClassArrayToPtr(ClassType[][] inputTypes, System.Func<ClassType,PlayFab.Multiplayer.DisposableCollection,InteropStructType> converter, DisposableCollection* disposableCollection, SizeT arrayCount);
        static InteropStructType[][] ConvertArrayToFixedLength(ClassType[][] classes, int32_t length, System.Func<ClassType,InteropStructType> ctor);
        static SByte*[][] StringArrayToPtr(String[][] arr, DisposableCollection* dc);
        static MonoString* PtrToStringUTF8(void* rawPtr);
        static String[][] StringPtrToArray(void* rawPtr, uint32_t count);
        static intptr_t Offset(intptr_t ptr, int64_t that);
        static DisposableBuffer* StringArrayToUTF8StringArray(String[][] strings);
        static intptr_t StringArrayToUTF8StringArray(String[][] strings, DisposableCollection* disposableCollection, SizeT count);
        static Byte[][] StringToNullTerminatedUTF8ByteArray(MonoString* str);
        static Byte[][] StringToNullTerminatedUTF8ByteArray(MonoString* str, int32_t requiredByteArrayLength);
        static void StringToNullTerminatedUTF8FixedPointer(MonoString* str, void* bytePointer, int32_t length);
        static MonoString* BytePointerToString(void* bytePointer, int32_t length);
        static MonoString* ByteArrayToString(Byte[][] arr);
        static MonoString* ByteArrayToString(Byte[][] arr, int32_t index, int32_t count);
        static MonoString* PtrToStringUTF8(intptr_t rawPtr);
        static ClassType PtrToClass(intptr_t rawPtr, System.Func<InteropStructType,ClassType> ctor);
        static ClassType[][] PtrToClassArray(intptr_t rawPtr, SizeT count, System.Func<InteropStructType,ClassType> ctor);
        static ClassType[][] PtrToClassArray(intptr_t rawPtr, uint32_t count, System.Func<InteropStructType,ClassType> ctor);
        static Byte[][] StringToNullTerminatedUTF8ByteArrayInternal(MonoString* str, int32_t requiredByteArrayLength);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class MarshalHelpers
    {
    public:
    
        // Methods
        static int32_t GetCustomContext(PlayFab.Multiplayer.InteropWrapper.MarshalHelpers.GetContextFunc<InteropHandle> getContextFunc, InteropHandle handle, MonoObject* customContext);
        static int32_t SetCustomContext(PlayFab.Multiplayer.InteropWrapper.MarshalHelpers.GetContextFunc<InteropHandle> getContextFunc, System.Func<InteropHandle,System.IntPtr,System.Int32> setContextFunc, InteropHandle handle, MonoObject* customContext);
        static int32_t GetArrayOfObjects(PlayFab.Multiplayer.InteropWrapper.MarshalHelpers.GetHandlesFun<InputInteropHandle> getHandlesFun, System.Func<IntermediaObject,OutputObject> ctorFun, InputInteropHandle inputHandle, OutputObject[][] outputHandles);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct UTF8StringPtr
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        intptr_t pointer; // 0x0010
    
        // Methods
        void .ctor(MonoString* str, DisposableCollection* disposableCollection);
        void* get_Pointer();
        MonoString* GetString();
        static Byte[][] StringToNullTerminatedUTF8ByteArray(MonoString* str);
        static Byte[][] StringToNullTerminatedUTF8ByteArrayInternal(MonoString* str, int32_t requiredByteArrayLength);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMultiplayer
    {
    public:
        // Static fields
        // static uint32_t PFLobbyMaxMemberCountLowerLimit;
        // static uint32_t PFLobbyMaxMemberCountUpperLimit;
        // static uint32_t PFLobbyMaxSearchPropertyCount;
        // static uint32_t PFLobbyMaxLobbyPropertyCount;
        // static uint32_t PFLobbyMaxMemberPropertyCount;
        // static uint32_t PFLobbyMaxServerPropertyCount;
        // static uint32_t PFLobbyClientRequestedSearchResultCountUpperLimit;
        // static ObjectPool* <ObjPool>k__BackingField;
    
    
        // Methods
        static int32_t PFLobbyGetLobbyId(PFLobbyHandle* lobby, MonoString* id);
        static int32_t PFLobbyGetMaxMemberCount(PFLobbyHandle* lobby, uint32_t maxMemberCount);
        static int32_t PFLobbyGetOwner(PFLobbyHandle* lobby, PFEntityKey* entityKey);
        static int32_t PFLobbyGetOwnerMigrationPolicy(PFLobbyHandle* lobby, PFLobbyOwnerMigrationPolicy ownerMigrationPolicy);
        static int32_t PFLobbyGetAccessPolicy(PFLobbyHandle* lobby, PFLobbyAccessPolicy accessPolicy);
        static int32_t PFLobbyGetMembershipLock(PFLobbyHandle* lobby, PFLobbyMembershipLock lockState);
        static int32_t PFLobbyGetConnectionString(PFLobbyHandle* lobby, MonoString* connectionString);
        static int32_t PFLobbyGetMembers(PFLobbyHandle* lobby, PFEntityKey[][] users);
        static int32_t PFLobbyLeave(PFLobbyHandle* lobby, PFEntityKey* localUser, MonoObject* asyncIdentifier);
        static int32_t PFLobbyGetSearchPropertyKeys(PFLobbyHandle* lobby, String[][] keys);
        static int32_t PFLobbyGetLobbyPropertyKeys(PFLobbyHandle* lobby, String[][] keys);
        static int32_t PFLobbyGetMemberPropertyKeys(PFLobbyHandle* lobby, PFEntityKey* member, String[][] keys);
        static int32_t PFLobbyGetSearchProperty(PFLobbyHandle* lobby, MonoString* key, MonoString* value);
        static int32_t PFLobbyGetLobbyProperty(PFLobbyHandle* lobby, MonoString* key, MonoString* value);
        static int32_t PFLobbyGetMemberProperty(PFLobbyHandle* lobby, PFEntityKey* member, MonoString* key, MonoString* value);
        static int32_t PFLobbyGetMemberConnectionStatus(PFLobbyHandle* lobby, PFEntityKey* member, PFLobbyMemberConnectionStatus memberConnectionStatus);
        static int32_t PFLobbyGetServer(PFLobbyHandle* lobby, PFEntityKey* server);
        static int32_t PFLobbyGetServerPropertyKeys(PFLobbyHandle* lobby, String[][] keys);
        static int32_t PFLobbyGetServerProperty(PFLobbyHandle* lobby, MonoString* key, MonoString* value);
        static int32_t PFLobbyGetServerConnectionStatus(PFLobbyHandle* lobby, PFLobbyServerConnectionStatus memberConnectionStatus);
        static int32_t PFLobbyPostUpdate(PFLobbyHandle* lobby, PFEntityKey* member, PFLobbyDataUpdate* lobbyUpdate, PFLobbyMemberDataUpdate* memberUpdate, MonoObject* asyncIdentifier);
        static int32_t PFLobbyGetCustomContext(PFLobbyHandle* lobby, MonoObject* customContext);
        static int32_t PFLobbySetCustomContext(PFLobbyHandle* lobby, MonoObject* customContext);
        static int32_t PFLobbySendInvite(PFLobbyHandle* lobby, PFEntityKey* sender, PFEntityKey* invitee, MonoObject* asyncContext);
        static MonoString* PFMultiplayerGetErrorMessage(int32_t hresult);
        static int32_t PFMultiplayerInitialize(MonoString* titleId, PFMultiplayerHandle* handle);
        static int32_t PFMultiplayerUninitialize(PFMultiplayerHandle* handle);
        static int32_t PFMultiplayerSetThreadAffinityMask(PFMultiplayerThreadId threadId, uint64_t threadAffinityMask);
        static int32_t PFMultiplayerSetEntityToken(PFMultiplayerHandle* handle, PFEntityKey* localMember, MonoString* entityToken);
        static void .cctor();
        static ObjectPool* get_ObjPool();
        static void set_ObjPool(ObjectPool* value);
        static int32_t PFMultiplayerStartProcessingLobbyStateChanges(PFMultiplayerHandle* handle, LobbyStateChangeCollection collection);
        static int32_t PFMultiplayerFinishProcessingLobbyStateChanges(PFMultiplayerHandle* handle, LobbyStateChangeCollection collection);
        static int32_t PFMultiplayerCreateAndJoinLobby(PFMultiplayerHandle* handle, PFEntityKey* creator, PFLobbyCreateConfiguration* createConfiguration, PFLobbyJoinConfiguration* joinConfiguration, MonoObject* asyncIdentifier, PFLobbyHandle* lobby);
        static int32_t PFLobbyForceRemoveMember(PFLobbyHandle* lobby, PFEntityKey* targetMember, bool preventRejoin, MonoObject* asyncContext);
        static int32_t PFLobbyAddMember(PFLobbyHandle* lobby, PFEntityKey* localUser, System.Collections.Generic.IDictionary<System.String,System.String> memberProperties, MonoObject* asyncContext);
        static int32_t PFMultiplayerJoinLobby(PFMultiplayerHandle* handle, PFEntityKey* newMember, MonoString* connectionString, PFLobbyJoinConfiguration* configuration, MonoObject* asyncContext, PFLobbyHandle* lobby);
        static int32_t PFMultiplayerJoinArrangedLobby(PFMultiplayerHandle* handle, PFEntityKey* newMember, MonoString* arrangementString, PFLobbyArrangedJoinConfiguration* configuration, MonoObject* asyncContext, PFLobbyHandle* lobby);
        static int32_t PFMultiplayerFindLobbies(PFMultiplayerHandle* handle, PFEntityKey* searchingEntity, PFLobbySearchConfiguration* searchConfiguration, MonoObject* asyncContext);
        static int32_t PFMultiplayerStartListeningForLobbyInvites(PFMultiplayerHandle* handle, PFEntityKey* listeningEntity);
        static int32_t PFMultiplayerStopListeningForLobbyInvites(PFMultiplayerHandle* handle, PFEntityKey* listeningEntity);
        static int32_t PFMultiplayerGetLobbyInviteListenerStatus(PFMultiplayerHandle* handle, PFEntityKey* listeningEntity, PFLobbyInviteListenerStatus status);
        static int32_t PFMultiplayerCreateMatchmakingTicket(PFMultiplayerHandle* multiplayer, PFEntityKey[][] localUsers, String[][] localUserAttributes, PFMatchmakingTicketConfiguration* configuration, MonoObject* asyncIdentifier, PFMatchmakingTicketHandle* handle);
        static int32_t PFMultiplayerJoinMatchmakingTicketFromId(PFMultiplayerHandle* multiplayer, PFEntityKey[][] localUsers, String[][] localUserAttributes, MonoString* ticketId, MonoString* queueName, MonoObject* asyncIdentifier, PFMatchmakingTicketHandle* handle);
        static int32_t PFMultiplayerDestroyMatchmakingTicket(PFMultiplayerHandle* multiplayer, PFMatchmakingTicketHandle* matchTicketHandle);
        static int32_t PFMatchmakingTicketGetStatus(PFMatchmakingTicketHandle* matchTicketHandle, PFMatchmakingTicketStatus status);
        static int32_t PFMatchmakingTicketCancel(PFMatchmakingTicketHandle* matchTicketHandle);
        static int32_t PFMatchmakingTicketGetTicketId(PFMatchmakingTicketHandle* matchTicketHandle, MonoString* ticketId);
        static int32_t PFMatchmakingTicketGetMatch(PFMatchmakingTicketHandle* matchTicketHandle, PFMatchmakingMatchDetails* matchDetails);
        static int32_t PFMatchmakingTicketGetCustomContext(PFMatchmakingTicketHandle* matchTicketHandle, MonoObject* customContext);
        static int32_t PFMatchmakingTicketSetCustomContext(PFMatchmakingTicketHandle* matchTicketHandle, MonoObject* customContext);
        static int32_t PFMultiplayerStartProcessingMatchmakingStateChanges(PFMultiplayerHandle* handle, MatchmakingStateChangeCollection collection);
        static int32_t PFMultiplayerFinishProcessingMatchmakingStateChanges(PFMultiplayerHandle* handle, MatchmakingStateChangeCollection collection);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFEntityKey
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Id>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <Type>k__BackingField; // 0x0018
    
        // Methods
        void .ctor(MonoString* id, MonoString* type);
        void .ctor(void* interopStruct);
        MonoString* get_Id();
        void set_Id(MonoString* value);
        MonoString* get_Type();
        void set_Type(MonoString* value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyAccessPolicy
    {
    public:
        // Static fields
        // static PFLobbyAccessPolicy Public;
        // static PFLobbyAccessPolicy Friends;
        // static PFLobbyAccessPolicy Private;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyArrangedJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.IDictionary<System.String,System.String> <MemberProperties>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t <MaxMemberCount>k__BackingField; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        PFLobbyOwnerMigrationPolicy <OwnerMigrationPolicy>k__BackingField; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        PFLobbyAccessPolicy <AccessPolicy>k__BackingField; // 0x0020
    
        // Methods
        uint32_t get_MaxMemberCount();
        void set_MaxMemberCount(uint32_t value);
        PFLobbyOwnerMigrationPolicy get_OwnerMigrationPolicy();
        void set_OwnerMigrationPolicy(PFLobbyOwnerMigrationPolicy value);
        PFLobbyAccessPolicy get_AccessPolicy();
        void set_AccessPolicy(PFLobbyAccessPolicy value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_MemberProperties();
        void set_MemberProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyConsts
    {
    public:
        // Static fields
        // static uint32_t LobbyMaxMemberCountLowerLimit;
        // static uint32_t LobbyMaxMemberCountUpperLimit;
        // static uint32_t LobbyMaxSearchPropertyCount;
        // static uint32_t LobbyMaxLobbyPropertyCount;
        // static uint32_t LobbyMaxMemberPropertyCount;
        // static uint32_t LobbyClientRequestedSearchResultCountUpperLimit;
        // static MonoString* LobbyMemberCountSearchKey;
        // static MonoString* LobbyMemberCountRemainingSearchKey;
        // static MonoString* LobbyAmMemberSearchKey;
        // static MonoString* LobbyAmOwnerSearchKey;
        // static MonoString* LobbyMembershipLockSearchKey;
        // static MonoString* LobbyAmServerSearchKey;
    
    
        // Methods
        static MonoString* ConvertReadOnlySpanToString(System.ReadOnlySpan<System.Byte> span);
        void .ctor();
        static void .cctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyCreateConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.IDictionary<System.String,System.String> <SearchProperties>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.IDictionary<System.String,System.String> <LobbyProperties>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t <MaxMemberCount>k__BackingField; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        PFLobbyOwnerMigrationPolicy <OwnerMigrationPolicy>k__BackingField; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        PFLobbyAccessPolicy <AccessPolicy>k__BackingField; // 0x0028
    
        // Methods
        void .ctor();
        void .ctor(PFLobbyCreateConfiguration interopStruct);
        uint32_t get_MaxMemberCount();
        void set_MaxMemberCount(uint32_t value);
        PFLobbyOwnerMigrationPolicy get_OwnerMigrationPolicy();
        void set_OwnerMigrationPolicy(PFLobbyOwnerMigrationPolicy value);
        PFLobbyAccessPolicy get_AccessPolicy();
        void set_AccessPolicy(PFLobbyAccessPolicy value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_LobbyProperties();
        void set_LobbyProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <NewOwner>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.IDictionary<System.String,System.String> <SearchProperties>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.IDictionary<System.String,System.String> <LobbyProperties>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Nullable<System.UInt32> <MaxMemberCount>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Nullable<PlayFab.Multiplayer.LobbyAccessPolicy> <AccessPolicy>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Nullable<PlayFab.Multiplayer.LobbyMembershipLock> <MembershipLock>k__BackingField; // 0x0038
    
        // Methods
        void .ctor();
        void .ctor(PFLobbyDataUpdate interopStruct);
        PFEntityKey* get_NewOwner();
        void set_NewOwner(PFEntityKey* value);
        System.Nullable<System.UInt32> get_MaxMemberCount();
        void set_MaxMemberCount(System.Nullable<System.UInt32> value);
        System.Nullable<PlayFab.Multiplayer.LobbyAccessPolicy> get_AccessPolicy();
        void set_AccessPolicy(System.Nullable<PlayFab.Multiplayer.LobbyAccessPolicy> value);
        System.Nullable<PlayFab.Multiplayer.LobbyMembershipLock> get_MembershipLock();
        void set_MembershipLock(System.Nullable<PlayFab.Multiplayer.LobbyMembershipLock> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_LobbyProperties();
        void set_LobbyProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyDisconnectingReason
    {
    public:
        // Static fields
        // static PFLobbyDisconnectingReason NoLocalMembers;
        // static PFLobbyDisconnectingReason LobbyDeleted;
        // static PFLobbyDisconnectingReason LobbyServerLeft;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyHandle
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(void* interopHandle);
        intptr_t get_InteropHandleIntPtr();
        void* get_InteropHandle();
        void set_InteropHandle(void* value);
        static int32_t WrapAndReturnError(int32_t error, void* interopHandle, PFLobbyHandle* handle);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyInviteListenerStatus
    {
    public:
        // Static fields
        // static PFLobbyInviteListenerStatus NotListening;
        // static PFLobbyInviteListenerStatus Listening;
        // static PFLobbyInviteListenerStatus NotAuthorized;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.IDictionary<System.String,System.String> <MemberProperties>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        void .ctor(PFLobbyJoinConfiguration interopStruct);
        System.Collections.Generic.IDictionary<System.String,System.String> get_MemberProperties();
        void set_MemberProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyMemberConnectionStatus
    {
    public:
        // Static fields
        // static PFLobbyMemberConnectionStatus NotConnected;
        // static PFLobbyMemberConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyMemberDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.IDictionary<System.String,System.String> <MemberProperties>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(System.Collections.Generic.IDictionary<System.String,System.String> memberProperties);
        void .ctor(PFLobbyMemberDataUpdate interopStruct);
        System.Collections.Generic.IDictionary<System.String,System.String> get_MemberProperties();
        void set_MemberProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyMembershipLock
    {
    public:
        // Static fields
        // static PFLobbyMembershipLock Unlocked;
        // static PFLobbyMembershipLock Locked;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyMemberUpdateSummary
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <Member>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        String[][] <UpdatedMemberPropertyKeys>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool <ConnectionStatusUpdated>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PFLobbyMemberUpdateSummary interopStruct);
        PFEntityKey* get_Member();
        void set_Member(PFEntityKey* value);
        bool get_ConnectionStatusUpdated();
        void set_ConnectionStatusUpdated(bool value);
        String[][] get_UpdatedMemberPropertyKeys();
        void set_UpdatedMemberPropertyKeys(String[][] value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyOwnerMigrationPolicy
    {
    public:
        // Static fields
        // static PFLobbyOwnerMigrationPolicy Manual;
        // static PFLobbyOwnerMigrationPolicy Automatic;
        // static PFLobbyOwnerMigrationPolicy None;
        // static PFLobbyOwnerMigrationPolicy Server;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbySearchConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbySearchFriendsFilter* <FriendsFilter>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <FilterString>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* <SortString>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Nullable<System.UInt32> <ClientSearchResultCount>k__BackingField; // 0x0028
    
        // Methods
        PFLobbySearchFriendsFilter* get_FriendsFilter();
        void set_FriendsFilter(PFLobbySearchFriendsFilter* value);
        MonoString* get_FilterString();
        void set_FilterString(MonoString* value);
        MonoString* get_SortString();
        void set_SortString(MonoString* value);
        System.Nullable<System.UInt32> get_ClientSearchResultCount();
        void set_ClientSearchResultCount(System.Nullable<System.UInt32> value);
        void* ToPointer(DisposableCollection* disposableCollection);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbySearchFriendsFilter
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <IncludeXboxFriendsToken>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool <IncludeSteamFriends>k__BackingField; // 0x0018
        bool <IncludeFacebookFriends>k__BackingField; // 0x0019
    
        // Methods
        bool get_IncludeSteamFriends();
        void set_IncludeSteamFriends(bool value);
        bool get_IncludeFacebookFriends();
        void set_IncludeFacebookFriends(bool value);
        MonoString* get_IncludeXboxFriendsToken();
        void set_IncludeXboxFriendsToken(MonoString* value);
        void* ToPointer(DisposableCollection* disposableCollection);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbySearchResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <LobbyId>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <ConnectionString>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFEntityKey* <OwnerEntity>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Dictionary<System.String,System.String> <SearchProperties>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> <Friends>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        uint32_t <MaxMemberCount>k__BackingField; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t <CurrentMemberCount>k__BackingField; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        PFLobbyMembershipLock <MembershipLock>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(void* interopStruct);
        MonoString* get_LobbyId();
        void set_LobbyId(MonoString* value);
        MonoString* get_ConnectionString();
        void set_ConnectionString(MonoString* value);
        PFEntityKey* get_OwnerEntity();
        void set_OwnerEntity(PFEntityKey* value);
        uint32_t get_MaxMemberCount();
        void set_MaxMemberCount(uint32_t value);
        uint32_t get_CurrentMemberCount();
        void set_CurrentMemberCount(uint32_t value);
        System.Collections.Generic.Dictionary<System.String,System.String> get_SearchProperties();
        void set_SearchProperties(System.Collections.Generic.Dictionary<System.String,System.String> value);
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> get_Friends();
        void set_Friends(System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> value);
        PFLobbyMembershipLock get_MembershipLock();
        void set_MembershipLock(PFLobbyMembershipLock value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyServerConnectionStatus
    {
    public:
        // Static fields
        // static PFLobbyServerConnectionStatus NotConnected;
        // static PFLobbyServerConnectionStatus Connected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerDataUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <NewServer>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.IDictionary<System.String,System.String> <ServerProperties>k__BackingField; // 0x0018
    
        // Methods
        void .ctor();
        void .ctor(PFLobbyServerDataUpdate interopStruct);
        PFEntityKey* get_NewServer();
        void set_NewServer(PFEntityKey* value);
        System.Collections.Generic.IDictionary<System.String,System.String> get_ServerProperties();
        void set_ServerProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerJoinConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.IDictionary<System.String,System.String> <ServerProperties>k__BackingField; // 0x0010
    
        // Methods
        void .ctor();
        void .ctor(PFLobbyServerJoinConfiguration interopStruct);
        System.Collections.Generic.IDictionary<System.String,System.String> get_ServerProperties();
        void set_ServerProperties(System.Collections.Generic.IDictionary<System.String,System.String> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFLobbyStateChangeType <StateChangeType>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* <StateChangeId>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool useObjectPool; // 0x0020
    
        // Methods
        void .ctor(PFLobbyStateChangeType StateChangeType, void* StateChangeId);
        static PFLobbyStateChange* CreateFromPtr(void* stateChangePtr);
        void Cleanup();
        PFLobbyStateChangeType get_StateChangeType();
        void set_StateChangeType(PFLobbyStateChangeType value);
        void* get_StateChangeId();
        void set_StateChangeId(void* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyCreateAndJoinCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        MonoObject* <asyncContext>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFLobbyHandle* <lobby>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyJoinCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFEntityKey* <newMember>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFLobbyHandle* <lobby>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t <result>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFEntityKey* get_newMember();
        void set_newMember(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyMemberAddedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <member>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFEntityKey* get_member();
        void set_member(PFEntityKey* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyAddMemberCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <localUser>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncContext>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t <result>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFEntityKey* get_localUser();
        void set_localUser(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyMemberRemovedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <member>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFLobbyMemberRemovedReason <reason>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFEntityKey* get_member();
        void set_member(PFEntityKey* value);
        PFLobbyMemberRemovedReason get_reason();
        void set_reason(PFLobbyMemberRemovedReason value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyForceRemoveMemberCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <targetMember>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncContext>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t <result>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFEntityKey* get_targetMember();
        void set_targetMember(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyLeaveCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFEntityKey* <localUser>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFLobbyHandle* <lobby>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFEntityKey* get_localUser();
        void set_localUser(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyUpdatedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        String[][] <updatedSearchPropertyKeys>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        String[][] <updatedLobbyPropertyKeys>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PFLobbyMemberUpdateSummary[][] <memberUpdates>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        String[][] <updatedServerPropertyKeys>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool <ownerUpdated>k__BackingField; // 0x0050
        bool <maxMembersUpdated>k__BackingField; // 0x0051
        bool <accessPolicyUpdated>k__BackingField; // 0x0052
        bool <membershipLockUpdated>k__BackingField; // 0x0053
        bool <serverUpdated>k__BackingField; // 0x0054
        bool <serverConnectionStatusUpdated>k__BackingField; // 0x0055
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        bool get_ownerUpdated();
        void set_ownerUpdated(bool value);
        bool get_maxMembersUpdated();
        void set_maxMembersUpdated(bool value);
        bool get_accessPolicyUpdated();
        void set_accessPolicyUpdated(bool value);
        bool get_membershipLockUpdated();
        void set_membershipLockUpdated(bool value);
        String[][] get_updatedSearchPropertyKeys();
        void set_updatedSearchPropertyKeys(String[][] value);
        String[][] get_updatedLobbyPropertyKeys();
        void set_updatedLobbyPropertyKeys(String[][] value);
        PFLobbyMemberUpdateSummary[][] get_memberUpdates();
        void set_memberUpdates(PFLobbyMemberUpdateSummary[][] value);
        bool get_serverUpdated();
        void set_serverUpdated(bool value);
        String[][] get_updatedServerPropertyKeys();
        void set_updatedServerPropertyKeys(String[][] value);
        bool get_serverConnectionStatusUpdated();
        void set_serverConnectionStatusUpdated(bool value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyPostUpdateCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* lobby; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* localUser; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* asyncContext; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t result; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyDisconnectingStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFLobbyDisconnectingReason <reason>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFLobbyDisconnectingReason get_reason();
        void set_reason(PFLobbyDisconnectingReason value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyDisconnectedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChange, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyArrangedJoinCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFEntityKey* <newMember>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFLobbyHandle* <lobby>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t <result>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFEntityKey* get_newMember();
        void set_newMember(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyFindLobbiesCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyStateChange* <stateChange>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <searchingEntity>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoObject* <asyncContext>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFLobbySearchResult> <searchResults>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t <result>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyStateChange* get_stateChange();
        void set_stateChange(PFLobbyStateChange* value);
        int32_t get_result();
        void set_result(int32_t value);
        PFEntityKey* get_searchingEntity();
        void set_searchingEntity(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFLobbySearchResult> get_searchResults();
        void set_searchResults(System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFLobbySearchResult> value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyInviteListenerStatusChangedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFEntityKey* <listeningEntity>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFEntityKey* get_listeningEntity();
        void set_listeningEntity(PFEntityKey* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyInviteReceivedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFEntityKey* <listeningEntity>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <invitingEntity>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* <connectionString>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFEntityKey* get_listeningEntity();
        void set_listeningEntity(PFEntityKey* value);
        PFEntityKey* get_invitingEntity();
        void set_invitingEntity(PFEntityKey* value);
        MonoString* get_connectionString();
        void set_connectionString(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbySendInviteCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFEntityKey* <sender>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFEntityKey* <invitee>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoObject* <asyncContext>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t <result>k__BackingField; // 0x0048
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        PFEntityKey* get_sender();
        void set_sender(PFEntityKey* value);
        PFEntityKey* get_invitee();
        void set_invitee(PFEntityKey* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyCreateAndClaimServerLobbyCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyClaimServerLobbyCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        MonoObject* <asyncContext>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* <lobbyId>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PFLobbyHandle* <lobby>k__BackingField; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t <result>k__BackingField; // 0x0040
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
        MonoString* get_lobbyId();
        void set_lobbyId(MonoString* value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerPostUpdateCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerDeleteLobbyCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyJoinLobbyAsServerCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerPostUpdateAsServerCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        int32_t get_result();
        void set_result(int32_t value);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFLobbyServerLeaveLobbyAsServerCompletedStateChange : public PFLobbyStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFLobbyHandle* <lobby>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <asyncContext>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(PFLobbyStateChangeUnion stateChangeUnion, void* StateChangeId);
        PFLobbyHandle* get_lobby();
        void set_lobby(PFLobbyHandle* value);
        MonoObject* get_asyncContext();
        void set_asyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyStateChangeType
    {
    public:
        // Static fields
        // static PFLobbyStateChangeType CreateAndJoinLobbyCompleted;
        // static PFLobbyStateChangeType JoinLobbyCompleted;
        // static PFLobbyStateChangeType MemberAdded;
        // static PFLobbyStateChangeType AddMemberCompleted;
        // static PFLobbyStateChangeType MemberRemoved;
        // static PFLobbyStateChangeType ForceRemoveMemberCompleted;
        // static PFLobbyStateChangeType LeaveLobbyCompleted;
        // static PFLobbyStateChangeType Updated;
        // static PFLobbyStateChangeType PostUpdateCompleted;
        // static PFLobbyStateChangeType Disconnecting;
        // static PFLobbyStateChangeType Disconnected;
        // static PFLobbyStateChangeType JoinArrangedLobbyCompleted;
        // static PFLobbyStateChangeType FindLobbiesCompleted;
        // static PFLobbyStateChangeType InviteReceived;
        // static PFLobbyStateChangeType InviteListenerStatusChanged;
        // static PFLobbyStateChangeType SendInviteCompleted;
        // static PFLobbyStateChangeType CreateAndClaimServerLobbyCompleted;
        // static PFLobbyStateChangeType ClaimServerLobbyCompleted;
        // static PFLobbyStateChangeType ServerPostUpdateCompleted;
        // static PFLobbyStateChangeType ServerDeleteLobbyCompleted;
        // static PFLobbyStateChangeType JoinLobbyAsServerCompleted;
        // static PFLobbyStateChangeType ServerPostUpdateAsServerCompleted;
        // static PFLobbyStateChangeType ServerLeaveLobbyAsServerCompleted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingMatchDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <MatchId>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PFMatchmakingMatchMember[][] <Members>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        String[][] <RegionPreferences>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* <LobbyArrangementString>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PFMultiplayerServerDetails* <ServerDetails>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(void* interopStruct);
        MonoString* get_MatchId();
        void set_MatchId(MonoString* value);
        PFMatchmakingMatchMember[][] get_Members();
        void set_Members(PFMatchmakingMatchMember[][] value);
        String[][] get_RegionPreferences();
        void set_RegionPreferences(String[][] value);
        MonoString* get_LobbyArrangementString();
        void set_LobbyArrangementString(MonoString* value);
        PFMultiplayerServerDetails* get_ServerDetails();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingMatchMember
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFEntityKey* <EntityKey>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <TeamId>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* <Attributes>k__BackingField; // 0x0020
    
        // Methods
        void .ctor();
        void .ctor(void* interopStruct);
        void* ToPointer(DisposableCollection* disposableCollection);
        PFEntityKey* get_EntityKey();
        void set_EntityKey(PFEntityKey* value);
        MonoString* get_TeamId();
        void set_TeamId(MonoString* value);
        MonoString* get_Attributes();
        void set_Attributes(MonoString* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingServerBackfillTicketConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <QueueName>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFMatchmakingMatchMember> <Members>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFMultiplayerServerDetails* <ServerDetails>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint32_t <TimeoutInSeconds>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(uint32_t timeoutInSeconds, MonoString* queueName, System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFMatchmakingMatchMember> members, PFMultiplayerServerDetails* serverDetails);
        void* ToPointer(DisposableCollection* disposableCollection);
        uint32_t get_TimeoutInSeconds();
        void set_TimeoutInSeconds(uint32_t value);
        MonoString* get_QueueName();
        void set_QueueName(MonoString* value);
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFMatchmakingMatchMember> get_Members();
        void set_Members(System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFMatchmakingMatchMember> value);
        PFMultiplayerServerDetails* get_ServerDetails();
        void set_ServerDetails(PFMultiplayerServerDetails* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingStateChange
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PFMatchmakingStateChangeType <StateChangeType>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        void* <StateChangeId>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool <UseObjectPool>k__BackingField; // 0x0020
    
        // Methods
        void .ctor(PFMatchmakingStateChangeType stateChangeType, void* stateChangeId);
        PFMatchmakingStateChangeType get_StateChangeType();
        void set_StateChangeType(PFMatchmakingStateChangeType value);
        void* get_StateChangeId();
        void set_StateChangeId(void* value);
        bool get_UseObjectPool();
        void set_UseObjectPool(bool value);
        static PFMatchmakingStateChange* CreateFromPtr(void* stateChangePtr);
        void Cleanup();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingTicketCompletedStateChange : public PFMatchmakingStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFMatchmakingTicketHandle* <Ticket>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoObject* <AsyncContext>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t <Result>k__BackingField; // 0x0038
    
        // Methods
        void .ctor(PFMatchmakingStateChangeUnion stateChangeUnion, void* stateChangeId);
        int32_t get_Result();
        void set_Result(int32_t value);
        PFMatchmakingTicketHandle* get_Ticket();
        void set_Ticket(PFMatchmakingTicketHandle* value);
        MonoObject* get_AsyncContext();
        void set_AsyncContext(MonoObject* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingTicketStatusChangedStateChange : public PFMatchmakingStateChange
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        PFMatchmakingTicketHandle* <Ticket>k__BackingField; // 0x0028
    
        // Methods
        void .ctor(PFMatchmakingStateChangeUnion stateChangeUnion, void* stateChangeId);
        PFMatchmakingTicketHandle* get_Ticket();
        void set_Ticket(PFMatchmakingTicketHandle* value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFMatchmakingStateChangeType
    {
    public:
        // Static fields
        // static PFMatchmakingStateChangeType TicketStatusChanged;
        // static PFMatchmakingStateChangeType TicketCompleted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingTicketConfiguration
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <QueueName>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> <MembersToMatchWith>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint32_t <TimeoutInSeconds>k__BackingField; // 0x0020
    
        // Methods
        void .ctor();
        void .ctor(uint32_t timeoutInSeconds, MonoString* queueName, System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> membersToMatchWith);
        uint32_t get_TimeoutInSeconds();
        void set_TimeoutInSeconds(uint32_t value);
        MonoString* get_QueueName();
        void set_QueueName(MonoString* value);
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> get_MembersToMatchWith();
        void set_MembersToMatchWith(System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFEntityKey> value);
        void* ToPointer(DisposableCollection* disposableCollection);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMatchmakingTicketHandle
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(void* interopHandle);
        intptr_t get_InteropHandleIntPtr();
        void* get_InteropHandle();
        void set_InteropHandle(void* value);
        static int32_t WrapAndReturnError(int32_t error, void* interopHandle, PFMatchmakingTicketHandle* handle);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFMatchmakingTicketStatus
    {
    public:
        // Static fields
        // static PFMatchmakingTicketStatus Creating;
        // static PFMatchmakingTicketStatus Joining;
        // static PFMatchmakingTicketStatus WaitingForPlayers;
        // static PFMatchmakingTicketStatus WaitingForMatch;
        // static PFMatchmakingTicketStatus Matched;
        // static PFMatchmakingTicketStatus Canceled;
        // static PFMatchmakingTicketStatus Failed;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFLobbyMemberRemovedReason
    {
    public:
        // Static fields
        // static PFLobbyMemberRemovedReason LocalUserLeftLobby;
        // static PFLobbyMemberRemovedReason LocalUserForciblyRemoved;
        // static PFLobbyMemberRemovedReason RemoteUserLeftLobby;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMultiplayerHandle
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        void* <InteropHandle>k__BackingField; // 0x0010
    
        // Methods
        void .ctor(void* interopHandle);
        void* get_InteropHandle();
        void set_InteropHandle(void* value);
        static int32_t WrapAndReturnError(int32_t error, void* interopHandle, PFMultiplayerHandle* handle);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct LobbyStateChangeCollection
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFLobbyStateChange> StateChanges; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t StateChangeCount; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* RawStateChanges; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct MatchmakingStateChangeCollection
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<PlayFab.Multiplayer.InteropWrapper.PFMatchmakingStateChange> StateChanges; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t StateChangeCount; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        void* RawStateChanges; // 0x0020
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMultiplayerPort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Name>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t <Num>k__BackingField; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        PFMultiplayerProtocolType <Protocol>k__BackingField; // 0x001C
    
        // Methods
        void .ctor(MonoString* name, uint32_t num, PFMultiplayerProtocolType protocol);
        void .ctor(void* interopStruct);
        void* ToPointer(DisposableCollection* disposableCollection);
        MonoString* get_Name();
        void set_Name(MonoString* value);
        uint32_t get_Num();
        void set_Num(uint32_t value);
        PFMultiplayerProtocolType get_Protocol();
        void set_Protocol(PFMultiplayerProtocolType value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFMultiplayerProtocolType
    {
    public:
        // Static fields
        // static PFMultiplayerProtocolType Tcp;
        // static PFMultiplayerProtocolType Udp;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMultiplayerServer
    {
    public:
    
        // Methods
        static int32_t PFMultiplayerCreateAndClaimServerLobby(PFMultiplayerHandle* handle, PFEntityKey* server, PFLobbyCreateConfiguration* createConfiguration, MonoObject* asyncIdentifier, PFLobbyHandle* lobby);
        static int32_t PFMultiplayerClaimServerLobby(PFMultiplayerHandle* handle, PFEntityKey* server, MonoString* lobbyId, MonoObject* asyncIdentifier, PFLobbyHandle* lobby);
        static int32_t PFMultiplayerJoinLobbyAsServer(PFMultiplayerHandle* handle, PFEntityKey* server, MonoString* connectionString, PFLobbyServerJoinConfiguration* configuration, MonoObject* asyncIdentifier, PFLobbyHandle* lobby);
        static int32_t PFLobbyServerPostUpdate(PFLobbyHandle* lobby, PFLobbyDataUpdate* lobbyUpdate, MonoObject* asyncIdentifier);
        static int32_t PFLobbyServerPostUpdateAsServer(PFLobbyHandle* lobby, PFLobbyServerDataUpdate* serverUpdate, MonoObject* asyncIdentifier);
        static int32_t PFLobbyServerLeaveAsServer(PFLobbyHandle* lobby, MonoObject* asyncIdentifier);
        static int32_t PFLobbyServerDeleteLobby(PFLobbyHandle* lobby, MonoObject* asyncIdentifier);
        static int32_t PFMultiplayerCreateServerBackfillTicket(PFMultiplayerHandle* multiplayer, PFEntityKey* server, PFMatchmakingServerBackfillTicketConfiguration* configuration, MonoObject* asyncIdentifier, PFMatchmakingTicketHandle* handle);
        void .ctor();
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    class PFMultiplayerServerDetails
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* <Fqdn>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* <Ipv4Address>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        PFMultiplayerPort[][] <Ports>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* <Region>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        uint32_t <PortCount>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(MonoString* fqdn, MonoString* ipv4Address, PFMultiplayerPort[][] ports, MonoString* region, uint32_t portCount);
        void .ctor(void* interopStruct);
        void* ToPointer(DisposableCollection* disposableCollection);
        MonoString* get_Fqdn();
        void set_Fqdn(MonoString* value);
        MonoString* get_Ipv4Address();
        void set_Ipv4Address(MonoString* value);
        PFMultiplayerPort[][] get_Ports();
        void set_Ports(PFMultiplayerPort[][] value);
        MonoString* get_Region();
        void set_Region(MonoString* value);
        uint32_t get_PortCount();
        void set_PortCount(uint32_t value);
    };

    // Namespace: PlayFab.Multiplayer.InteropWrapper
    struct PFMultiplayerThreadId
    {
    public:
        // Static fields
        // static PFMultiplayerThreadId Networking;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t value__; // 0x0010
    };

} // namespace PlayFab.Multiplayer.InteropWrapper
