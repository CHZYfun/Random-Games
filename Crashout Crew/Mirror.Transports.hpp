namespace kcp2k
{

    // Namespace: kcp2k
    class KcpTransport : public Transport
    {
    public:
        // Static fields
        // static MonoString* Scheme;
        // static int32_t MTU;
    
        uint8_t pad_0000[0x88]; // 0x0000
        KcpConfig* config; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        KcpServer* server; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        KcpClient* client; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        uint16_t port; // 0x00A0
        uint8_t pad_00A1[0x1]; // 0x00A1
        bool DualMode; // 0x00A2
        bool NoDelay; // 0x00A3
        uint32_t Interval; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        int32_t Timeout; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t RecvBufferSize; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        int32_t SendBufferSize; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        int32_t FastResend; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        bool CongestionWindow; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        uint32_t ReceiveWindowSize; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        uint32_t SendWindowSize; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        uint32_t MaxRetransmit; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        bool MaximizeSocketBuffers; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        int32_t ReliableMaxMessageSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        int32_t UnreliableMaxMessageSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        bool debugLog; // 0x00D4
        bool statisticsGUI; // 0x00D5
        bool statisticsLog; // 0x00D6
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        static int32_t FromKcpChannel(KcpChannel channel);
        static KcpChannel ToKcpChannel(int32_t channel);
        static TransportError ToTransportError(ErrorCode error);
        void Awake();
        void OnValidate();
        bool Available();
        bool ClientConnected();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientDisconnect();
        void ClientEarlyUpdate();
        void ClientLateUpdate();
        Uri* ServerUri();
        bool ServerActive();
        void ServerStart();
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerDisconnect(int32_t connectionId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerStop();
        void ServerEarlyUpdate();
        void ServerLateUpdate();
        void Shutdown();
        int32_t GetMaxPacketSize(int32_t channelId);
        int32_t GetBatchThreshold(int32_t channelId);
        int64_t GetAverageMaxSendRate();
        int64_t GetAverageMaxReceiveRate();
        int64_t GetTotalSendQueue();
        int64_t GetTotalReceiveQueue();
        int64_t GetTotalSendBuffer();
        int64_t GetTotalReceiveBuffer();
        static MonoString* PrettyBytes(int64_t bytes);
        void OnGUIStatistics();
        void OnLogStatistics();
        MonoString* ToString();
        void .ctor();
    };

    // Namespace: kcp2k
    class ThreadedKcpTransport : public ThreadedTransport
    {
    public:
        // Static fields
        // static MonoString* Scheme;
        // static int32_t MTU;
    
        uint8_t pad_0000[0xB8]; // 0x0000
        KcpConfig* config; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        KcpServer* server; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        KcpClient* client; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        uint16_t port; // 0x00D0
        uint8_t pad_00D1[0x1]; // 0x00D1
        bool DualMode; // 0x00D2
        bool NoDelay; // 0x00D3
        uint32_t Interval; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        int32_t Timeout; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t RecvBufferSize; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        int32_t SendBufferSize; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        int32_t FastResend; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool CongestionWindow; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        uint32_t ReceiveWindowSize; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        uint32_t SendWindowSize; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        uint32_t MaxRetransmit; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        bool MaximizeSocketBuffers; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        int32_t ReliableMaxMessageSize; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        int32_t UnreliableMaxMessageSize; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        bool enabledCopy; // 0x0104
        bool debugLog; // 0x0105
        bool statisticsGUI; // 0x0106
        bool statisticsLog; // 0x0107
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        void Awake();
        void OnValidate();
        void OnEnable();
        void OnDisable();
        bool Available();
        void ThreadedClientConnect(MonoString* address);
        void ThreadedClientConnect(Uri* uri);
        void ThreadedClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ThreadedClientDisconnect();
        void ThreadedClientEarlyUpdate();
        void ThreadedClientLateUpdate();
        Uri* ServerUri();
        void ThreadedServerStart();
        void ThreadedServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ThreadedServerDisconnect(int32_t connectionId);
        void ThreadedServerStop();
        void ThreadedServerEarlyUpdate();
        void ThreadedServerLateUpdate();
        void ThreadedShutdown();
        int32_t GetMaxPacketSize(int32_t channelId);
        int32_t GetBatchThreshold(int32_t channelId);
        void OnGUIStatistics();
        void OnLogStatistics();
        MonoString* ToString();
        void .ctor();
    };

} // namespace kcp2k

namespace Mirror
{

    // Namespace: Mirror
    struct QueuedMessage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t connectionId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] bytes; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        double time; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t channelId; // 0x0028
    
        // Methods
        void .ctor(int32_t connectionId, Byte[][] bytes, double time, int32_t channelId);
    };

    // Namespace: Mirror
    class LatencySimulation : public Transport
    {
    public:
        uint8_t pad_0000[0x88]; // 0x0000
        Transport* wrap; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<Mirror.QueuedMessage> clientToServer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Collections.Generic.List<Mirror.QueuedMessage> serverToClient; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Random* random; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        float latency; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        float jitter; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        float jitterSpeed; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float unreliableLoss; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        float unreliableScramble; // 0x00B8
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        void Awake();
        void OnEnable();
        void OnDisable();
        float Noise(float time);
        float SimulateLatency(int32_t channeldId);
        void SimulateSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId, float latency, System.Collections.Generic.List<Mirror.QueuedMessage> messageQueue);
        bool Available();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        bool ClientConnected();
        void ClientDisconnect();
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        Uri* ServerUri();
        bool ServerActive();
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerDisconnect(int32_t connectionId);
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerStart();
        void ServerStop();
        void ClientEarlyUpdate();
        void ServerEarlyUpdate();
        void ClientLateUpdate();
        void ServerLateUpdate();
        int32_t GetBatchThreshold(int32_t channelId);
        int32_t GetMaxPacketSize(int32_t channelId);
        void Shutdown();
        MonoString* ToString();
        void .ctor();
    };

    // Namespace: Mirror
    class MiddlewareTransport : public Transport
    {
    public:
        uint8_t pad_0000[0x88]; // 0x0000
        Transport* inner; // 0x0088
    
        // Methods
        bool Available();
        int32_t GetMaxPacketSize(int32_t channelId);
        int32_t GetBatchThreshold(int32_t channelId);
        void Shutdown();
        void ClientConnect(MonoString* address);
        bool ClientConnected();
        void ClientDisconnect();
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientEarlyUpdate();
        void ClientLateUpdate();
        bool ServerActive();
        void ServerStart();
        void ServerStop();
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerDisconnect(int32_t connectionId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        Uri* ServerUri();
        void ServerEarlyUpdate();
        void ServerLateUpdate();
        void .ctor();
    };

    // Namespace: Mirror
    class MultiplexTransport : public Transport
    {
    public:
        uint8_t pad_0000[0x88]; // 0x0000
        Transport[][] transports; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Transport* available; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Collections.Generic.Dictionary<System.Collections.Generic.KeyValuePair<System.Int32,System.Int32>,System.Int32> originalToMultiplexedId; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.Dictionary<System.Int32,System.Collections.Generic.KeyValuePair<System.Int32,System.Int32>> multiplexedToOriginalId; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        int32_t nextMultiplexedId; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        bool alreadyWarned; // 0x00AC
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        int32_t AddToLookup(int32_t originalConnectionId, int32_t transportIndex);
        void RemoveFromLookup(int32_t originalConnectionId, int32_t transportIndex);
        bool OriginalId(int32_t multiplexId, int32_t originalConnectionId, int32_t transportIndex);
        int32_t MultiplexId(int32_t originalConnectionId, int32_t transportIndex);
        void Awake();
        void ClientEarlyUpdate();
        void ServerEarlyUpdate();
        void ClientLateUpdate();
        void ServerLateUpdate();
        void OnEnable();
        void OnDisable();
        bool Available();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        bool ClientConnected();
        void ClientDisconnect();
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void AddServerCallbacks();
        Uri* ServerUri();
        bool ServerActive();
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerDisconnect(int32_t connectionId);
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerStart();
        void ServerStop();
        int32_t GetMaxPacketSize(int32_t channelId);
        void Shutdown();
        MonoString* ToString();
        void .ctor();
    };

    // Namespace: Mirror
    class TelepathyTransport : public Transport
    {
    public:
        // Static fields
        // static MonoString* Scheme;
    
        uint8_t pad_0000[0x88]; // 0x0000
        Client* client; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Server* server; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Func<System.Boolean> enabledCheck; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        uint16_t port; // 0x00A0
        uint8_t pad_00A1[0x1]; // 0x00A1
        bool NoDelay; // 0x00A2
        uint8_t pad_00A3[0x1]; // 0x00A3
        int32_t SendTimeout; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        int32_t ReceiveTimeout; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t serverMaxMessageSize; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        int32_t serverMaxReceivesPerTick; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        int32_t serverSendQueueLimitPerConnection; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        int32_t serverReceiveQueueLimitPerConnection; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t clientMaxMessageSize; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        int32_t clientMaxReceivesPerTick; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        int32_t clientSendQueueLimit; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        int32_t clientReceiveQueueLimit; // 0x00C8
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        void Awake();
        bool Available();
        void CreateClient();
        bool ClientConnected();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientDisconnect();
        void ClientEarlyUpdate();
        Uri* ServerUri();
        bool ServerActive();
        void ServerStart();
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerDisconnect(int32_t connectionId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerStop();
        void ServerEarlyUpdate();
        void Shutdown();
        int32_t GetMaxPacketSize(int32_t channelId);
        MonoString* ToString();
        void .ctor();
    };

    // Namespace: Mirror
    struct ClientMainEventType
    {
    public:
        // Static fields
        // static ClientMainEventType OnClientConnected;
        // static ClientMainEventType OnClientSent;
        // static ClientMainEventType OnClientReceived;
        // static ClientMainEventType OnClientError;
        // static ClientMainEventType OnClientDisconnected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: Mirror
    struct ServerMainEventType
    {
    public:
        // Static fields
        // static ServerMainEventType OnServerConnected;
        // static ServerMainEventType OnServerSent;
        // static ServerMainEventType OnServerReceived;
        // static ServerMainEventType OnServerError;
        // static ServerMainEventType OnServerDisconnected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: Mirror
    struct ThreadEventType
    {
    public:
        // Static fields
        // static ThreadEventType DoServerStart;
        // static ThreadEventType DoServerSend;
        // static ThreadEventType DoServerDisconnect;
        // static ThreadEventType DoServerStop;
        // static ThreadEventType DoClientConnect;
        // static ThreadEventType DoClientSend;
        // static ThreadEventType DoClientDisconnect;
        // static ThreadEventType Sleep;
        // static ThreadEventType Wake;
        // static ThreadEventType DoShutdown;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: Mirror
    struct ClientMainEvent
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ClientMainEventType type; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoObject* param; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Nullable<System.Int32> channelId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Nullable<Mirror.TransportError> error; // 0x0028
    
        // Methods
        void .ctor(ClientMainEventType type, MonoObject* param, System.Nullable<System.Int32> channelId, System.Nullable<Mirror.TransportError> error);
    };

    // Namespace: Mirror
    struct ServerMainEvent
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ServerMainEventType type; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoObject* param; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Nullable<System.Int32> connectionId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Nullable<System.Int32> channelId; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Nullable<Mirror.TransportError> error; // 0x0030
    
        // Methods
        void .ctor(ServerMainEventType type, MonoObject* param, System.Nullable<System.Int32> connectionId, System.Nullable<System.Int32> channelId, System.Nullable<Mirror.TransportError> error);
    };

    // Namespace: Mirror
    struct ThreadEvent
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ThreadEventType type; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoObject* param; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Nullable<System.Int32> connectionId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Nullable<System.Int32> channelId; // 0x0028
    
        // Methods
        void .ctor(ThreadEventType type, MonoObject* param, System.Nullable<System.Int32> connectionId, System.Nullable<System.Int32> channelId);
    };

    // Namespace: Mirror
    class ThreadedTransport : public Transport
    {
    public:
        // Static fields
        // static int32_t MaxProcessingPerTick;
    
        uint8_t pad_0000[0x88]; // 0x0000
        WorkerThread* thread; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Concurrent.ConcurrentQueue<Mirror.ClientMainEvent> clientMainQueue; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Collections.Concurrent.ConcurrentQueue<Mirror.ServerMainEvent> serverMainQueue; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Concurrent.ConcurrentQueue<Mirror.ThreadEvent> threadQueue; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Stopwatch* sleepTimer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        bool serverActive; // 0x00B0
        bool clientConnected; // 0x00B1
        bool sleepDetection; // 0x00B2
        uint8_t pad_00B3[0x1]; // 0x00B3
        float sleepTimeoutInSeconds; // 0x00B4
    
        // Methods
        void EnqueueClientMain(ClientMainEventType type, MonoObject* param, System.Nullable<System.Int32> channelId, System.Nullable<Mirror.TransportError> error);
        void EnqueueServerMain(ServerMainEventType type, MonoObject* param, System.Nullable<System.Int32> connectionId, System.Nullable<System.Int32> channelId, System.Nullable<Mirror.TransportError> error);
        void EnqueueThread(ThreadEventType type, MonoObject* param, System.Nullable<System.Int32> channelId, System.Nullable<System.Int32> connectionId);
        void Awake();
        void EnsureThread();
        void OnDestroy();
        void ProcessThreadQueue();
        bool ThreadTick();
        void OnThreadedClientConnected();
        void OnThreadedClientSend(System.ArraySegment<System.Byte> message, int32_t channelId);
        void OnThreadedClientReceive(System.ArraySegment<System.Byte> message, int32_t channelId);
        void OnThreadedClientError(TransportError error, MonoString* reason);
        void OnThreadedClientDisconnected();
        void OnThreadedServerConnected(int32_t connectionId, IPEndPoint* endPoint);
        void OnThreadedServerSend(int32_t connectionId, System.ArraySegment<System.Byte> message, int32_t channelId);
        void OnThreadedServerReceive(int32_t connectionId, System.ArraySegment<System.Byte> message, int32_t channelId);
        void OnThreadedServerError(int32_t connectionId, TransportError error, MonoString* reason);
        void OnThreadedServerDisconnected(int32_t connectionId);
        void ThreadedClientConnect(MonoString* address);
        void ThreadedClientConnect(Uri* address);
        void ThreadedClientSend(System.ArraySegment<System.Byte> message, int32_t channelId);
        void ThreadedClientDisconnect();
        void ThreadedServerStart();
        void ThreadedServerStop();
        void ThreadedServerSend(int32_t connectionId, System.ArraySegment<System.Byte> message, int32_t channelId);
        void ThreadedServerDisconnect(int32_t connectionId);
        void ThreadedClientEarlyUpdate();
        void ThreadedClientLateUpdate();
        void ThreadedServerEarlyUpdate();
        void ThreadedServerLateUpdate();
        void ThreadedShutdown();
        void ClientEarlyUpdate();
        bool ClientConnected();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientDisconnect();
        void ServerEarlyUpdate();
        void ServerLateUpdate();
        bool ServerActive();
        void ServerStart();
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerDisconnect(int32_t connectionId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerStop();
        void OnApplicationPause(bool pauseStatus);
        void Shutdown();
        void .ctor();
    };

} // namespace Mirror

namespace Mirror.SimpleWeb
{

    // Namespace: Mirror.SimpleWeb
    class SimpleWebTransport : public Transport
    {
    public:
        // Static fields
        // static MonoString* NormalScheme;
        // static MonoString* SecureScheme;
    
        uint8_t pad_0000[0x88]; // 0x0000
        MonoString* sslCertJson; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        SimpleWebClient* client; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        SimpleWebServer* server; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        int32_t maxMessageSize; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t maxHandshakeSize; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        int32_t serverMaxMsgsPerTick; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t clientMaxMsgsPerTick; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        int32_t sendTimeout; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        int32_t receiveTimeout; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        bool noDelay; // 0x00B8
        bool sslEnabled; // 0x00B9
        uint8_t pad_00BA[0x2]; // 0x00BA
        SslProtocols sslProtocols; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        uint16_t port; // 0x00C0
        uint8_t pad_00C1[0x1]; // 0x00C1
        bool batchSend; // 0x00C2
        bool waitBeforeSend; // 0x00C3
        bool clientUseWss; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        ClientWebsocketSettings clientWebsocketSettings; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Levels minimumLogLevel; // 0x00D0
    
        // Methods
        uint16_t get_Port();
        void set_Port(uint16_t value);
        Levels get_LogLevels();
        void set_LogLevels(Levels value);
        TcpConfig get_TcpConfig();
        void Awake();
        MonoString* ToString();
        void OnValidate();
        bool Available();
        int32_t GetMaxPacketSize(int32_t channelId);
        void Shutdown();
        MonoString* GetClientScheme();
        bool get_IsEncrypted();
        MonoString* get_EncryptionCipher();
        bool ClientConnected();
        void ClientConnect(MonoString* hostname);
        void ClientConnect(Uri* uri);
        void ClientDisconnect();
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientEarlyUpdate();
        MonoString* GetServerScheme();
        Uri* ServerUri();
        bool ServerActive();
        void ServerStart();
        void ServerStop();
        void ServerDisconnect(int32_t connectionId);
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        Request* ServerGetClientRequest(int32_t connectionId);
        void ServerEarlyUpdate();
        void .ctor();
    };

} // namespace Mirror.SimpleWeb

namespace Mirror.Transports.Encryption
{

    // Namespace: Mirror.Transports.Encryption
    class EncryptedConnection
    {
    public:
        // Static fields
        // static int32_t KeyLength;
        // static int32_t HkdfSaltSize;
        // static Byte[][] HkdfInfo;
        // static int32_t NonceSize;
        // static int32_t MacSizeBytes;
        // static int32_t MacSizeBits;
        // static int32_t Overhead;
        // static double DurationTimeout;
        // static double DurationResend;
        // static System.Threading.ThreadLocal<Mirror.BouncyCastle.Crypto.Modes.GcmBlockCipher> Cipher;
        // static System.Threading.ThreadLocal<Mirror.BouncyCastle.Crypto.Generators.HkdfBytesGenerator> Hkdf;
        // static System.Threading.ThreadLocal<System.Byte[]> ReceiveNonce;
        // static System.Threading.ThreadLocal<System.Byte[]> TMPRemoteSaltBuffer;
        // static System.Threading.ThreadLocal<System.Byte[]> TMPCryptBuffer;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Action<System.ArraySegment<System.Byte>,System.Int32> send; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Action<System.ArraySegment<System.Byte>,System.Int32> receive; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Action* ready; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<Mirror.TransportError,System.String> error; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Func<Mirror.Transports.Encryption.PubKeyInfo,System.Boolean> validateRemoteKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EncryptionCredentials* credentials; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Byte[][] hkdfSalt; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        NetworkReader* _tmpReader; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Byte[][] nonce; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AeadParameters* cipherParametersEncrypt; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        AeadParameters* cipherParametersDecrypt; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        State state; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        double handshakeTimeout; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        double nextHandshakeResend; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        bool sendsFirst; // 0x0080
    
        // Methods
        bool get_IsReady();
        void .ctor(EncryptionCredentials* credentials, bool isClient, System.Action<System.ArraySegment<System.Byte>,System.Int32> sendAction, System.Action<System.ArraySegment<System.Byte>,System.Int32> receiveAction, Action* readyAction, System.Action<Mirror.TransportError,System.String> errorAction, System.Func<Mirror.Transports.Encryption.PubKeyInfo,System.Boolean> validateRemoteKey);
        static Byte[][] GenerateSecureBytes(int32_t size);
        void OnReceiveRaw(System.ArraySegment<System.Byte> data, int32_t channel);
        void SetReady();
        void ResetTimeouts();
        void Send(System.ArraySegment<System.Byte> data, int32_t channel);
        System.ArraySegment<System.Byte> Encrypt(System.ArraySegment<System.Byte> plaintext);
        System.ArraySegment<System.Byte> Decrypt(System.ArraySegment<System.Byte> ciphertext);
        void UpdateNonce();
        static void EnsureSize(Byte[][] buffer, int32_t size);
        void SendHandshakeAndPubKey(OpCodes opcode);
        void SendHandshakeFin();
        void CompleteExchange(System.ArraySegment<System.Byte> remotePubKeyRaw, Byte[][] salt);
        void TickNonReady(double time);
        static void .cctor();
    };

    // Namespace: Mirror.Transports.Encryption
    class EncryptionCredentials
    {
    public:
        // Static fields
        // static int32_t PrivateKeyBits;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Byte[][] PublicKeySerialized; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        ECPrivateKeyParameters* PrivateKey; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* PublicKeyFingerprint; // 0x0020
    
        // Methods
        void .ctor();
        static EncryptionCredentials* Generate();
        static Byte[][] SerializePublicKey(AsymmetricKeyParameter* publicKey);
        static AsymmetricKeyParameter* DeserializePublicKey(System.ArraySegment<System.Byte> pubKey);
        static Byte[][] SerializePrivateKey(AsymmetricKeyParameter* privateKey);
        static AsymmetricKeyParameter* DeserializePrivateKey(System.ArraySegment<System.Byte> privateKey);
        static MonoString* PubKeyFingerprint(System.ArraySegment<System.Byte> publicKeyBytes);
        void SaveToFile(MonoString* path);
        static EncryptionCredentials* LoadFromFile(MonoString* path);
    };

    // Namespace: Mirror.Transports.Encryption
    class EncryptionTransport : public Transport
    {
    public:
        uint8_t pad_0000[0x88]; // 0x0000
        Transport* Inner; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        String[][] ClientTrustedPubKeySignatures; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Func<Mirror.Transports.Encryption.PubKeyInfo,System.Boolean> OnClientValidateServerPubKey; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        MonoString* ServerKeypairPath; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        EncryptedConnection* client; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        System.Collections.Generic.Dictionary<System.Int32,Mirror.Transports.Encryption.EncryptedConnection> serverConnections; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Collections.Generic.List<Mirror.Transports.Encryption.EncryptedConnection> serverPendingConnections; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        EncryptionCredentials* credentials; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        ValidationMode ClientValidateServerPubKey; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        bool ServerLoadKeyPairFromFile; // 0x00CC
    
        // Methods
        bool get_IsEncrypted();
        MonoString* get_EncryptionCipher();
        uint16_t get_Port();
        void set_Port(uint16_t value);
        MonoString* get_EncryptionPublicKeyFingerprint();
        Byte[][] get_EncryptionPublicKey();
        void ServerRemoveFromPending(EncryptedConnection* con);
        void HandleInnerServerDisconnected(int32_t connId);
        void HandleInnerServerError(int32_t connId, TransportError type, MonoString* msg);
        void HandleInnerServerDataReceived(int32_t connId, System.ArraySegment<System.Byte> data, int32_t channel);
        void HandleInnerServerConnected(int32_t connId);
        void HandleInnerServerConnected(int32_t connId, MonoString* clientRemoteAddress);
        void HandleInnerClientDisconnected();
        void HandleInnerClientError(TransportError arg1, MonoString* arg2);
        void HandleInnerClientDataReceived(System.ArraySegment<System.Byte> data, int32_t channel);
        void HandleInnerClientConnected();
        bool HandleClientValidateServerPubKey(PubKeyInfo pubKeyInfo);
        void Awake();
        bool Available();
        bool ClientConnected();
        void ClientConnect(MonoString* address);
        void ClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ClientDisconnect();
        Uri* ServerUri();
        bool ServerActive();
        void ServerStart();
        void ServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ServerDisconnect(int32_t connectionId);
        MonoString* ServerGetClientAddress(int32_t connectionId);
        void ServerStop();
        int32_t GetMaxPacketSize(int32_t channelId);
        int32_t GetBatchThreshold(int32_t channelId);
        void Shutdown();
        void ClientEarlyUpdate();
        void ClientLateUpdate();
        void ServerEarlyUpdate();
        void ServerLateUpdate();
        void .ctor();
    };

    // Namespace: Mirror.Transports.Encryption
    struct PubKeyInfo
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* Fingerprint; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.ArraySegment<System.Byte> Serialized; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        AsymmetricKeyParameter* Key; // 0x0028
    };

    // Namespace: Mirror.Transports.Encryption
    class ThreadedEncryptionKcpTransport : public ThreadedKcpTransport
    {
    public:
        uint8_t pad_0000[0x108]; // 0x0000
        String[][] ClientTrustedPubKeySignatures; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        System.Func<Mirror.Transports.Encryption.PubKeyInfo,System.Boolean> OnClientValidateServerPubKey; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        MonoString* ServerKeypairPath; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        EncryptedConnection* encryptedClient; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        System.Collections.Generic.Dictionary<System.Int32,Mirror.Transports.Encryption.EncryptedConnection> serverConnections; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        System.Collections.Generic.List<Mirror.Transports.Encryption.EncryptedConnection> serverPendingConnections; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        EncryptionCredentials* credentials; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Stopwatch* stopwatch; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        ValidationMode ClientValidateServerPubKey; // 0x0148
        uint8_t pad_0149[0x3]; // 0x0149
        bool ServerLoadKeyPairFromFile; // 0x014C
    
        // Methods
        bool get_IsEncrypted();
        MonoString* get_EncryptionCipher();
        MonoString* ToString();
        MonoString* get_EncryptionPublicKeyFingerprint();
        Byte[][] get_EncryptionPublicKey();
        void ServerRemoveFromPending(EncryptedConnection* con);
        void HandleInnerServerDisconnected(int32_t connId);
        void HandleInnerServerDataReceived(int32_t connId, System.ArraySegment<System.Byte> data, int32_t channel);
        void HandleInnerServerConnected(int32_t connId, IPEndPoint* clientRemoteAddress);
        void HandleInnerClientDisconnected();
        void HandleInnerClientDataReceived(System.ArraySegment<System.Byte> data, int32_t channel);
        void HandleInnerClientConnected();
        bool HandleClientValidateServerPubKey(PubKeyInfo pubKeyInfo);
        void Awake();
        void ThreadedClientConnect(MonoString* address);
        bool SetupEncryptionForClient();
        void ThreadedClientConnect(Uri* address);
        void ThreadedClientSend(System.ArraySegment<System.Byte> segment, int32_t channelId);
        void ThreadedServerStart();
        void ThreadedServerSend(int32_t connectionId, System.ArraySegment<System.Byte> segment, int32_t channelId);
        int32_t GetMaxPacketSize(int32_t channelId);
        int32_t GetBatchThreshold(int32_t channelId);
        void ThreadedClientLateUpdate();
        void ThreadedServerLateUpdate();
        void .ctor();
    };

} // namespace Mirror.Transports.Encryption

namespace Edgegap
{

    // Namespace: Edgegap
    class EdgegapLobbyKcpTransport : public EdgegapKcpTransport
    {
    public:
        uint8_t pad_0000[0xF0]; // 0x0000
        MonoString* lobbyUrl; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        LobbyApi* Api; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        System.Nullable<Edgegap.LobbyCreateRequest> _request; // 0x0100
        uint8_t pad_0101[0x2F]; // 0x0101
        MonoString* _lobbyId; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        MonoString* _playerId; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        float lobbyWaitTimeout; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        TransportStatus _status; // 0x0144
    
        // Methods
        TransportStatus get_Status();
        void Awake();
        void Reset();
        void ServerStart();
        void ServerStop();
        void ClientDisconnect();
        void ClientConnect(MonoString* address);
        IEnumerator* WaitForLobbyRelay(MonoString* lobbyId, bool forServer);
        static MonoString* RandomPlayerId();
        void SetServerLobbyParams(MonoString* lobbyName, int32_t capacity);
        void SetServerLobbyParams(LobbyCreateRequest request);
        void OnDestroy();
        void .ctor();
    };

    // Namespace: Edgegap
    class LobbyApi
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* LobbyUrl; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        LobbyBrief[][] Lobbies; // 0x0018
    
        // Methods
        void .ctor(MonoString* url);
        static UnityWebRequest* SendJson(MonoString* url, T data, MonoString* method);
        static bool CheckErrorResponse(UnityWebRequest* request, System.Action<System.String> onError);
        void RefreshLobbies(System.Action<Edgegap.LobbyBrief[]> onLoaded, System.Action<System.String> onError);
        void CreateLobby(LobbyCreateRequest createData, System.Action<Edgegap.Lobby> onResponse, System.Action<System.String> onError);
        void UpdateLobby(MonoString* lobbyId, LobbyUpdateRequest updateData, System.Action<Edgegap.LobbyBrief> onResponse, System.Action<System.String> onError);
        void GetLobby(MonoString* lobbyId, System.Action<Edgegap.Lobby> onResponse, System.Action<System.String> onError);
        void JoinLobby(LobbyJoinOrLeaveRequest data, Action* onResponse, System.Action<System.String> onError);
        void LeaveLobby(LobbyJoinOrLeaveRequest data, Action* onResponse, System.Action<System.String> onError);
        void StartLobby(LobbyIdRequest data, Action* onResponse, System.Action<System.String> onError);
        void DeleteLobby(MonoString* lobbyId, Action* onResponse, System.Action<System.String> onError);
        static void TrimApiKey(MonoString* apiKey);
        static void CreateAndDeployLobbyService(MonoString* apiKey, MonoString* name, System.Action<Edgegap.LobbyApi.LobbyServiceResponse> onResponse, System.Action<System.String> onError);
        static void CreateLobbyService(MonoString* apiKey, MonoString* name, System.Action<Edgegap.LobbyApi.LobbyServiceResponse> onResponse, System.Action<System.String> onError);
        static void GetLobbyService(MonoString* apiKey, MonoString* name, System.Action<System.Nullable<Edgegap.LobbyApi.LobbyServiceResponse>> onResponse, System.Action<System.String> onError);
        static void TerminateLobbyService(MonoString* apiKey, MonoString* name, System.Action<Edgegap.LobbyApi.LobbyServiceResponse> onResponse, System.Action<System.String> onError);
        static void DeployLobbyService(MonoString* apiKey, MonoString* name, System.Action<Edgegap.LobbyApi.LobbyServiceResponse> onResponse, System.Action<System.String> onError);
    };

    // Namespace: Edgegap
    struct ListLobbiesResponse
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t count; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        LobbyBrief[][] data; // 0x0018
    };

    // Namespace: Edgegap
    struct Lobby
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Assignment assignment; // 0x0010
        uint8_t pad_0011[0x1F]; // 0x0011
        MonoString* name; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* lobby_id; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool is_joinable; // 0x0040
        bool is_started; // 0x0041
        uint8_t pad_0042[0x2]; // 0x0042
        int32_t player_count; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t capacity; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        String[][] tags; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Player[][] players; // 0x0058
    
        // Methods
        int32_t get_available_slots();
    };

    // Namespace: Edgegap
    struct LobbyBrief
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* lobby_id; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* name; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool is_joinable; // 0x0020
        bool is_started; // 0x0021
        uint8_t pad_0022[0x2]; // 0x0022
        int32_t player_count; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t capacity; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        String[][] tags; // 0x0030
    
        // Methods
        int32_t get_available_slots();
    };

    // Namespace: Edgegap
    struct LobbyCreateRequest
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Annotation[][] annotations; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t capacity; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        bool is_joinable; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        MonoString* name; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Player player; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        String[][] tags; // 0x0030
    };

    // Namespace: Edgegap
    struct LobbyIdRequest
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* lobby_id; // 0x0010
    
        // Methods
        void .ctor(MonoString* lobbyId);
    };

    // Namespace: Edgegap
    struct LobbyJoinOrLeaveRequest
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* lobby_id; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Player player; // 0x0018
    };

    // Namespace: Edgegap
    struct LobbyUpdateRequest
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t capacity; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        bool is_joinable; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        String[][] tags; // 0x0018
    };

    // Namespace: Edgegap
    class EdgegapKcpClient : public KcpClient
    {
    public:
        uint8_t pad_0000[0xA0]; // 0x0000
        Byte[][] relayReceiveBuffer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        uint32_t userId; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        uint32_t sessionId; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        ConnectionState connectionState; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        double lastPingTime; // 0x00B8
    
        // Methods
        void .ctor(Action* OnConnected, System.Action<System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData, Action* OnDisconnected, System.Action<kcp2k.ErrorCode,System.String> OnError, KcpConfig* config);
        void Connect(MonoString* relayAddress, uint16_t relayPort, uint32_t userId, uint32_t sessionId);
        bool RawReceive(System.ArraySegment<System.Byte>& segment);
        void RawSend(System.ArraySegment<System.Byte> data);
        void SendPing();
        void TickOutgoing();
    };

    // Namespace: Edgegap
    class EdgegapKcpServer : public KcpServer
    {
    public:
        uint8_t pad_0000[0x60]; // 0x0000
        Byte[][] relayReceiveBuffer; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Socket* relaySocket; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        EndPoint* remoteEndPoint; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        uint32_t userId; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        uint32_t sessionId; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        ConnectionState state; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        double lastPingTime; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        bool relayActive; // 0x0090
    
        // Methods
        void .ctor(System.Action<System.Int32,System.Net.IPEndPoint> OnConnected, System.Action<System.Int32,System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData, System.Action<System.Int32> OnDisconnected, System.Action<System.Int32,kcp2k.ErrorCode,System.String> OnError, KcpConfig* config);
        bool IsActive();
        void Start(MonoString* relayAddress, uint16_t relayPort, uint32_t userId, uint32_t sessionId);
        void Stop();
        bool RawReceiveFrom(System.ArraySegment<System.Byte>& segment, int32_t connectionId);
        void RawSend(int32_t connectionId, System.ArraySegment<System.Byte> data);
        void SendPing();
        void TickOutgoing();
    };

    // Namespace: Edgegap
    class EdgegapKcpTransport : public KcpTransport
    {
    public:
        // Static fields
        // static int32_t MaxPayload;
    
        uint8_t pad_0000[0xD8]; // 0x0000
        MonoString* relayAddress; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        uint16_t relayGameServerPort; // 0x00E0
        uint8_t pad_00E1[0x1]; // 0x00E1
        uint16_t relayGameClientPort; // 0x00E2
        uint8_t pad_00E3[0x1]; // 0x00E3
        bool relayGUI; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        uint32_t userId; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        uint32_t sessionId; // 0x00EC
    
        // Methods
        static MonoString* ReParse(MonoString* cmd, MonoString* pattern, MonoString* defaultValue);
        void Awake();
        void OnValidate();
        void ClientConnect(MonoString* address);
        void ClientConnect(Uri* uri);
        void ServerStart();
        void OnGUIRelay();
        void OnGUI();
        MonoString* ToString();
        void .ctor();
    };

    // Namespace: Edgegap
    struct ConnectionState
    {
    public:
        // Static fields
        // static ConnectionState Disconnected;
        // static ConnectionState Checking;
        // static ConnectionState Valid;
        // static ConnectionState Invalid;
        // static ConnectionState SessionTimeout;
        // static ConnectionState Error;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: Edgegap
    struct MessageType
    {
    public:
        // Static fields
        // static MessageType Ping;
        // static MessageType Data;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: Edgegap
    class Protocol
    {
    public:
        // Static fields
        // static int32_t Overhead;
        // static float PingInterval;
    
    };

    // Namespace: Edgegap
    class RelayCredentialsFromArgs : public MonoBehaviour
    {
    public:
    
        // Methods
        void Awake();
        void .ctor();
    };

} // namespace Edgegap
