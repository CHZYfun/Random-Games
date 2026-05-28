// Namespace: <global>
class GDKTransport : public Transport
{
public:
    // Static fields
    // static int32_t NextConnectionId;
    // static PlayFabPlayer[][] reusablePlayFabPlayerSendTarget;

    uint8_t pad_0000[0x88]; // 0x0000
    System.Collections.Generic.Dictionary<System.Int32,PlayFab.Party.PlayFabPlayer> <ConnectionIdToPlayFabPlayer>k__BackingField; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.Dictionary<System.String,System.Int32> <PlayFabPlayerEntityKeyToConnectionId>k__BackingField; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.HashSet<System.String> <PlayersEntityKeysThatArePendingConnectionFinalization>k__BackingField; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayFabMultiplayerManager* <multiplayerManager>k__BackingField; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameCoreManager* <gameCoreManager>k__BackingField; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    bool <ClientConnectedStatus>k__BackingField; // 0x00B0
    bool <ServerConnectedStatus>k__BackingField; // 0x00B1

    // Methods
    bool get_ClientConnectedStatus();
    void set_ClientConnectedStatus(bool value);
    bool get_ServerConnectedStatus();
    void set_ServerConnectedStatus(bool value);
    System.Collections.Generic.Dictionary<System.Int32,PlayFab.Party.PlayFabPlayer> get_ConnectionIdToPlayFabPlayer();
    void set_ConnectionIdToPlayFabPlayer(System.Collections.Generic.Dictionary<System.Int32,PlayFab.Party.PlayFabPlayer> value);
    System.Collections.Generic.Dictionary<System.String,System.Int32> get_PlayFabPlayerEntityKeyToConnectionId();
    void set_PlayFabPlayerEntityKeyToConnectionId(System.Collections.Generic.Dictionary<System.String,System.Int32> value);
    System.Collections.Generic.HashSet<System.String> get_PlayersEntityKeysThatArePendingConnectionFinalization();
    void set_PlayersEntityKeysThatArePendingConnectionFinalization(System.Collections.Generic.HashSet<System.String> value);
    PlayFabMultiplayerManager* get_multiplayerManager();
    void set_multiplayerManager(PlayFabMultiplayerManager* value);
    GameCoreManager* get_gameCoreManager();
    void set_gameCoreManager(GameCoreManager* value);
    void Awake();
    void OnDisable();
    bool Available();
    void ClientConnect(MonoString* address);
    bool ClientConnected();
    void ClientDisconnect();
    void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
    int32_t GetMaxPacketSize(int32_t channelId);
    bool ServerActive();
    void ServerDisconnect(int32_t connectionId);
    MonoString* ServerGetClientAddress(int32_t connectionId);
    void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
    void ServerStart();
    void ServerStop();
    Uri* ServerUri();
    void Shutdown();
    void _OnRemotePlayerJoined(MonoObject* sender, PlayFabPlayer* player);
    void _OnRemotePlayerLeft(MonoObject* sender, PlayFabPlayer* player);
    void _OnDataMessageReceived(MonoObject* sender, PlayFabPlayer* from, Byte[][] buffer);
    void _OnError(MonoObject* sender, PlayFabMultiplayerManagerErrorArgs* arg);
    static TransportError ToTransportError(PlayFabMultiplayerManagerErrorType error);
    int32_t RecognizedPlayFabPlayer(PlayFabPlayer* toRecognize);
    bool ShouldRecognizePlayFabPlayer(PlayFabPlayer* toRecognize, bool lobbyJoinable, int32_t connectionId);
    void ResetTransport();
    void HandlePlayFabCallbacks(bool enabled);
    void .ctor();
    static void .cctor();
};

