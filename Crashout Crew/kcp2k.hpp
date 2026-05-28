namespace kcp2k
{

    // Namespace: kcp2k
    class Common
    {
    public:
        // Static fields
        // static RNGCryptoServiceProvider* cryptoRandom;
        // static Byte[][] cryptoRandomBuffer;
    
    
        // Methods
        static bool ResolveHostname(MonoString* hostname, IPAddress[][] addresses);
        static void ConfigureSocketBuffers(Socket* socket, int32_t recvBufferSize, int32_t sendBufferSize);
        static int32_t ConnectionHash(EndPoint* endPoint);
        static uint32_t GenerateCookie();
        static void .cctor();
    };

    // Namespace: kcp2k
    struct ErrorCode
    {
    public:
        // Static fields
        // static ErrorCode DnsResolve;
        // static ErrorCode Timeout;
        // static ErrorCode Congestion;
        // static ErrorCode InvalidReceive;
        // static ErrorCode InvalidSend;
        // static ErrorCode ConnectionClosed;
        // static ErrorCode Unexpected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: kcp2k
    class Extensions
    {
    public:
    
        // Methods
        static MonoString* ToHexString(System.ArraySegment<System.Byte> segment);
        static bool SendToNonBlocking(Socket* socket, System.ArraySegment<System.Byte> data, EndPoint* remoteEP);
        static bool SendNonBlocking(Socket* socket, System.ArraySegment<System.Byte> data);
        static bool ReceiveFromNonBlocking(Socket* socket, Byte[][] recvBuffer, System.ArraySegment<System.Byte>& data, EndPoint* remoteEP);
        static bool ReceiveNonBlocking(Socket* socket, Byte[][] recvBuffer, System.ArraySegment<System.Byte>& data);
    };

    // Namespace: kcp2k
    struct KcpChannel
    {
    public:
        // Static fields
        // static KcpChannel Reliable;
        // static KcpChannel Unreliable;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: kcp2k
    class KcpClient : public KcpPeer
    {
    public:
        uint8_t pad_0000[0x58]; // 0x0000
        Socket* socket; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        EndPoint* remoteEndPoint; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        KcpConfig* config; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Byte[][] rawReceiveBuffer; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Action* OnConnectedCallback; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnDataCallback; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Action* OnDisconnectedCallback; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Action<kcp2k.ErrorCode,System.String> OnErrorCallback; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool active; // 0x0098
        bool connected; // 0x0099
    
        // Methods
        EndPoint* get_LocalEndPoint();
        void .ctor(Action* OnConnected, System.Action<System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData, Action* OnDisconnected, System.Action<kcp2k.ErrorCode,System.String> OnError, KcpConfig* config);
        void OnAuthenticated();
        void OnData(System.ArraySegment<System.Byte> message, KcpChannel channel);
        void OnError(ErrorCode error, MonoString* message);
        void OnDisconnected();
        void Connect(MonoString* address, uint16_t port);
        bool RawReceive(System.ArraySegment<System.Byte>& segment);
        void RawSend(System.ArraySegment<System.Byte> data);
        void Send(System.ArraySegment<System.Byte> segment, KcpChannel channel);
        void RawInput(System.ArraySegment<System.Byte> segment);
        void TickIncoming();
        void TickOutgoing();
        void Tick();
    };

    // Namespace: kcp2k
    class KcpConfig
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool DualMode; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t RecvBufferSize; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t SendBufferSize; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t Mtu; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool NoDelay; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t Interval; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t FastResend; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool CongestionWindow; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        uint32_t SendWindowSize; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t ReceiveWindowSize; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t Timeout; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t MaxRetransmits; // 0x003C
    
        // Methods
        void .ctor(bool DualMode, int32_t RecvBufferSize, int32_t SendBufferSize, int32_t Mtu, bool NoDelay, uint32_t Interval, int32_t FastResend, bool CongestionWindow, uint32_t SendWindowSize, uint32_t ReceiveWindowSize, int32_t Timeout, uint32_t MaxRetransmits);
    };

    // Namespace: kcp2k
    struct KcpHeaderReliable
    {
    public:
        // Static fields
        // static KcpHeaderReliable Hello;
        // static KcpHeaderReliable Ping;
        // static KcpHeaderReliable Data;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: kcp2k
    struct KcpHeaderUnreliable
    {
    public:
        // Static fields
        // static KcpHeaderUnreliable Data;
        // static KcpHeaderUnreliable Disconnect;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: kcp2k
    class KcpHeader
    {
    public:
    
        // Methods
        static bool ParseReliable(uint8_t value, KcpHeaderReliable header);
        static bool ParseUnreliable(uint8_t value, KcpHeaderUnreliable header);
    };

    // Namespace: kcp2k
    class KcpPeer
    {
    public:
        // Static fields
        // static int32_t DEFAULT_TIMEOUT;
        // static int32_t PING_INTERVAL;
        // static int32_t QueueDisconnectThreshold;
        // static int32_t CHANNEL_HEADER_SIZE;
        // static int32_t COOKIE_HEADER_SIZE;
        // static int32_t METADATA_SIZE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Kcp* kcp; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Stopwatch* watch; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Byte[][] kcpMessageBuffer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Byte[][] kcpSendBuffer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Byte[][] rawSendBuffer; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        uint32_t cookie; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        KcpState state; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t timeout; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        uint32_t lastReceiveTime; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        uint32_t lastPingTime; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t unreliableMax; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t reliableMax; // 0x0050
    
        // Methods
        int32_t get_SendQueueCount();
        int32_t get_ReceiveQueueCount();
        int32_t get_SendBufferCount();
        int32_t get_ReceiveBufferCount();
        static int32_t ReliableMaxMessageSize_Unconstrained(int32_t mtu, uint32_t rcv_wnd);
        static int32_t ReliableMaxMessageSize(int32_t mtu, uint32_t rcv_wnd);
        static int32_t UnreliableMaxMessageSize(int32_t mtu);
        uint32_t get_MaxSendRate();
        uint32_t get_MaxReceiveRate();
        void .ctor(KcpConfig* config, uint32_t cookie);
        void Reset(KcpConfig* config);
        void OnAuthenticated();
        void OnData(System.ArraySegment<System.Byte> message, KcpChannel channel);
        void OnDisconnected();
        void OnError(ErrorCode error, MonoString* message);
        void RawSend(System.ArraySegment<System.Byte> data);
        void HandleTimeout(uint32_t time);
        void HandleDeadLink();
        void HandlePing(uint32_t time);
        void HandleChoked();
        bool ReceiveNextReliable(KcpHeaderReliable header, System.ArraySegment<System.Byte>& message);
        void TickIncoming_Connected(uint32_t time);
        void TickIncoming_Authenticated(uint32_t time);
        void TickIncoming();
        void TickOutgoing();
        void OnRawInputReliable(System.ArraySegment<System.Byte> message);
        void OnRawInputUnreliable(System.ArraySegment<System.Byte> message);
        void RawSendReliable(Byte[][] data, int32_t length);
        void SendReliable(KcpHeaderReliable header, System.ArraySegment<System.Byte> content);
        void SendUnreliable(KcpHeaderUnreliable header, System.ArraySegment<System.Byte> content);
        void SendHello();
        void SendData(System.ArraySegment<System.Byte> data, KcpChannel channel);
        void SendPing();
        void SendDisconnect();
        void Disconnect();
    };

    // Namespace: kcp2k
    class KcpServer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Action<System.Int32,System.Net.IPEndPoint> OnConnected; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Action<System.Int32,System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Action<System.Int32> OnDisconnected; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<System.Int32,kcp2k.ErrorCode,System.String> OnError; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        KcpConfig* config; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Socket* socket; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        EndPoint* newClientEP; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Byte[][] rawReceiveBuffer; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.Dictionary<System.Int32,kcp2k.KcpServerConnection> connections; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.HashSet<System.Int32> connectionsToRemove; // 0x0058
    
        // Methods
        EndPoint* get_LocalEndPoint();
        void .ctor(System.Action<System.Int32,System.Net.IPEndPoint> OnConnected, System.Action<System.Int32,System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData, System.Action<System.Int32> OnDisconnected, System.Action<System.Int32,kcp2k.ErrorCode,System.String> OnError, KcpConfig* config);
        bool IsActive();
        static Socket* CreateServerSocket(bool DualMode, uint16_t port);
        void Start(uint16_t port);
        void Send(int32_t connectionId, System.ArraySegment<System.Byte> segment, KcpChannel channel);
        void Disconnect(int32_t connectionId);
        IPEndPoint* GetClientEndPoint(int32_t connectionId);
        bool RawReceiveFrom(System.ArraySegment<System.Byte>& segment, int32_t connectionId);
        void RawSend(int32_t connectionId, System.ArraySegment<System.Byte> data);
        KcpServerConnection* CreateConnection(int32_t connectionId);
        void ProcessMessage(System.ArraySegment<System.Byte> segment, int32_t connectionId);
        void TickIncoming();
        void TickOutgoing();
        void Tick();
        void Stop();
    };

    // Namespace: kcp2k
    class KcpServerConnection : public KcpPeer
    {
    public:
        uint8_t pad_0000[0x58]; // 0x0000
        EndPoint* remoteEndPoint; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Action<kcp2k.KcpServerConnection> OnConnectedCallback; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Action<System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnDataCallback; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Action* OnDisconnectedCallback; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<kcp2k.ErrorCode,System.String> OnErrorCallback; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.ArraySegment<System.Byte>> RawSendCallback; // 0x0080
    
        // Methods
        void .ctor(System.Action<kcp2k.KcpServerConnection> OnConnected, System.Action<System.ArraySegment<System.Byte>,kcp2k.KcpChannel> OnData, Action* OnDisconnected, System.Action<kcp2k.ErrorCode,System.String> OnError, System.Action<System.ArraySegment<System.Byte>> OnRawSend, KcpConfig* config, uint32_t cookie, EndPoint* remoteEndPoint);
        void OnAuthenticated();
        void OnData(System.ArraySegment<System.Byte> message, KcpChannel channel);
        void OnDisconnected();
        void OnError(ErrorCode error, MonoString* message);
        void RawSend(System.ArraySegment<System.Byte> data);
        void RawInput(System.ArraySegment<System.Byte> segment);
    };

    // Namespace: kcp2k
    struct KcpState
    {
    public:
        // Static fields
        // static KcpState Connected;
        // static KcpState Authenticated;
        // static KcpState Disconnected;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: kcp2k
    class Log
    {
    public:
        // Static fields
        // static System.Action<System.String> Info;
        // static System.Action<System.String> Warning;
        // static System.Action<System.String> Error;
    
    
        // Methods
        static void .cctor();
    };

    // Namespace: kcp2k
    struct AckItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t serialNumber; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t timestamp; // 0x0014
    };

    // Namespace: kcp2k
    class Kcp
    {
    public:
        // Static fields
        // static int32_t RTO_NDL;
        // static int32_t RTO_MIN;
        // static int32_t RTO_DEF;
        // static int32_t OVERHEAD;
        // static int32_t INTERVAL;
        // static int32_t ACK_FAST;
        // static int32_t MTU_DEF;
        // static int32_t WND_RCV;
        // static int32_t WND_SND;
        // static int32_t ASK_TELL;
        // static int32_t FASTACK_LIMIT;
        // static int32_t ASK_SEND;
        // static int32_t CMD_WASK;
        // static int32_t CMD_PUSH;
        // static int32_t RTO_MAX;
        // static int32_t CMD_WINS;
        // static int32_t PROBE_LIMIT;
        // static int32_t CMD_ACK;
        // static int32_t THRESH_MIN;
        // static int32_t THRESH_INIT;
        // static int32_t DEADLINK;
        // static int32_t FRG_MAX;
        // static int32_t PROBE_INIT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.Queue<kcp2k.Segment> snd_queue; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Queue<kcp2k.Segment> rcv_queue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.List<kcp2k.Segment> snd_buf; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<kcp2k.Segment> rcv_buf; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<kcp2k.AckItem> acklist; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] buffer; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<System.Byte[],System.Int32> output; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        kcp2k.Pool<kcp2k.Segment> SegmentPool; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t state; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        uint32_t conv; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        uint32_t mtu; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        uint32_t mss; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        uint32_t snd_una; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        uint32_t snd_nxt; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        uint32_t rcv_nxt; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        uint32_t ssthresh; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t rx_rttval; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        int32_t rx_srtt; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t rx_rto; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t rx_minrto; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        uint32_t snd_wnd; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        uint32_t rcv_wnd; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        uint32_t rmt_wnd; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        uint32_t cwnd; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        uint32_t probe; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        uint32_t interval; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        uint32_t ts_flush; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        uint32_t xmit; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        uint32_t nodelay; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        bool updated; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        uint32_t ts_probe; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        uint32_t probe_wait; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        uint32_t dead_link; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        uint32_t incr; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        uint32_t current; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t fastresend; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        int32_t fastlimit; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        bool nocwnd; // 0x00C4
    
        // Methods
        void .ctor(uint32_t conv, System.Action<System.Byte[],System.Int32> output);
        Segment* SegmentNew();
        void SegmentDelete(Segment* seg);
        int32_t get_WaitSnd();
        uint32_t WndUnused();
        int32_t Receive(Byte[][] buffer, int32_t len);
        int32_t PeekSize();
        int32_t Send(Byte[][] buffer, int32_t offset, int32_t len);
        void UpdateAck(int32_t rtt);
        void ShrinkBuf();
        void ParseAck(uint32_t sn);
        void ParseUna(uint32_t una);
        void ParseFastack(uint32_t sn, uint32_t ts);
        void AckPush(uint32_t sn, uint32_t ts);
        void ParseData(Segment* newseg);
        void InsertSegmentInReceiveBuffer(Segment* newseg);
        void MoveReceiveBufferReadySegmentsToQueue();
        int32_t Input(Byte[][] data, int32_t offset, int32_t size);
        void MakeSpace(int32_t size, int32_t space);
        void FlushBuffer(int32_t size);
        void Flush();
        void Update(uint32_t currentTimeMilliSeconds);
        uint32_t Check(uint32_t current_);
        void SetMtu(uint32_t mtu);
        void SetInterval(uint32_t interval);
        void SetNoDelay(uint32_t nodelay, uint32_t interval, int32_t resend, bool nocwnd);
        void SetWindowSize(uint32_t sendWindow, uint32_t receiveWindow);
    };

    // Namespace: kcp2k
    class Segment
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MemoryStream* data; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t conv; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t cmd; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        uint32_t frg; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint32_t wnd; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        uint32_t ts; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        uint32_t sn; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        uint32_t una; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        uint32_t resendts; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t rto; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        uint32_t fastack; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        uint32_t xmit; // 0x0040
    
        // Methods
        int32_t Encode(Byte[][] ptr, int32_t offset);
        void Reset();
        void .ctor();
    };

    // Namespace: kcp2k
    class Utils
    {
    public:
    
        // Methods
        static int32_t Clamp(int32_t value, int32_t min, int32_t max);
        static int32_t Encode8u(Byte[][] p, int32_t offset, uint8_t value);
        static int32_t Decode8u(Byte[][] p, int32_t offset, uint8_t value);
        static int32_t Encode16U(Byte[][] p, int32_t offset, uint16_t value);
        static int32_t Decode16U(Byte[][] p, int32_t offset, uint16_t value);
        static int32_t Encode32U(Byte[][] p, int32_t offset, uint32_t value);
        static int32_t Decode32U(Byte[][] p, int32_t offset, uint32_t value);
        static int32_t TimeDiff(uint32_t later, uint32_t earlier);
    };

} // namespace kcp2k
