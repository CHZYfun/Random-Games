namespace Mirror.Authenticators
{

    // Namespace: Mirror.Authenticators
    class BasicAuthenticator : public NetworkAuthenticator
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        MonoString* serverUsername; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* serverPassword; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoString* username; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        MonoString* password; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.HashSet<Mirror.NetworkConnectionToClient> connectionsPendingDisconnect; // 0x0050
    
        // Methods
        void OnStartServer();
        void OnStopServer();
        void OnServerAuthenticate(NetworkConnectionToClient* conn);
        void OnAuthRequestMessage(NetworkConnectionToClient* conn, AuthRequestMessage msg);
        IEnumerator* DelayedDisconnect(NetworkConnectionToClient* conn, float waitTime);
        void OnStartClient();
        void OnStopClient();
        void OnClientAuthenticate();
        void OnAuthResponseMessage(AuthResponseMessage msg);
        void .ctor();
    };

    // Namespace: Mirror.Authenticators
    class DeviceAuthenticator : public NetworkAuthenticator
    {
    public:
    
        // Methods
        void OnStartServer();
        void OnStopServer();
        void OnServerAuthenticate(NetworkConnectionToClient* conn);
        void OnAuthRequestMessage(NetworkConnectionToClient* conn, AuthRequestMessage msg);
        void OnStartClient();
        void OnStopClient();
        void OnClientAuthenticate();
        void OnAuthResponseMessage(AuthResponseMessage msg);
        void .ctor();
    };

    // Namespace: Mirror.Authenticators
    class TimeoutAuthenticator : public NetworkAuthenticator
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        NetworkAuthenticator* authenticator; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float timeout; // 0x0038
    
        // Methods
        void Awake();
        void OnStartServer();
        void OnStopServer();
        void OnStartClient();
        void OnStopClient();
        void OnServerAuthenticate(NetworkConnectionToClient* conn);
        void OnClientAuthenticate();
        IEnumerator* BeginAuthentication(NetworkConnection* conn);
        void .ctor();
    };

} // namespace Mirror.Authenticators

namespace Mirror
{

    // Namespace: Mirror
    class GeneratedNetworkCode
    {
    public:
    
        // Methods
        static TimeSnapshotMessage _Read_Mirror.TimeSnapshotMessage(NetworkReader* reader);
        static void _Write_Mirror.TimeSnapshotMessage(NetworkWriter* writer, TimeSnapshotMessage value);
        static ReadyMessage _Read_Mirror.ReadyMessage(NetworkReader* reader);
        static void _Write_Mirror.ReadyMessage(NetworkWriter* writer, ReadyMessage value);
        static NotReadyMessage _Read_Mirror.NotReadyMessage(NetworkReader* reader);
        static void _Write_Mirror.NotReadyMessage(NetworkWriter* writer, NotReadyMessage value);
        static AddPlayerMessage _Read_Mirror.AddPlayerMessage(NetworkReader* reader);
        static void _Write_Mirror.AddPlayerMessage(NetworkWriter* writer, AddPlayerMessage value);
        static SceneMessage _Read_Mirror.SceneMessage(NetworkReader* reader);
        static SceneOperation _Read_Mirror.SceneOperation(NetworkReader* reader);
        static void _Write_Mirror.SceneMessage(NetworkWriter* writer, SceneMessage value);
        static void _Write_Mirror.SceneOperation(NetworkWriter* writer, SceneOperation value);
        static CommandMessage _Read_Mirror.CommandMessage(NetworkReader* reader);
        static void _Write_Mirror.CommandMessage(NetworkWriter* writer, CommandMessage value);
        static RpcMessage _Read_Mirror.RpcMessage(NetworkReader* reader);
        static void _Write_Mirror.RpcMessage(NetworkWriter* writer, RpcMessage value);
        static SpawnMessage _Read_Mirror.SpawnMessage(NetworkReader* reader);
        static SpawnFlags _Read_Mirror.SpawnFlags(NetworkReader* reader);
        static void _Write_Mirror.SpawnMessage(NetworkWriter* writer, SpawnMessage value);
        static void _Write_Mirror.SpawnFlags(NetworkWriter* writer, SpawnFlags value);
        static ChangeOwnerMessage _Read_Mirror.ChangeOwnerMessage(NetworkReader* reader);
        static void _Write_Mirror.ChangeOwnerMessage(NetworkWriter* writer, ChangeOwnerMessage value);
        static ObjectSpawnStartedMessage _Read_Mirror.ObjectSpawnStartedMessage(NetworkReader* reader);
        static void _Write_Mirror.ObjectSpawnStartedMessage(NetworkWriter* writer, ObjectSpawnStartedMessage value);
        static ObjectSpawnFinishedMessage _Read_Mirror.ObjectSpawnFinishedMessage(NetworkReader* reader);
        static void _Write_Mirror.ObjectSpawnFinishedMessage(NetworkWriter* writer, ObjectSpawnFinishedMessage value);
        static ObjectDestroyMessage _Read_Mirror.ObjectDestroyMessage(NetworkReader* reader);
        static void _Write_Mirror.ObjectDestroyMessage(NetworkWriter* writer, ObjectDestroyMessage value);
        static ObjectHideMessage _Read_Mirror.ObjectHideMessage(NetworkReader* reader);
        static void _Write_Mirror.ObjectHideMessage(NetworkWriter* writer, ObjectHideMessage value);
        static EntityStateMessage _Read_Mirror.EntityStateMessage(NetworkReader* reader);
        static void _Write_Mirror.EntityStateMessage(NetworkWriter* writer, EntityStateMessage value);
        static NetworkPingMessage _Read_Mirror.NetworkPingMessage(NetworkReader* reader);
        static void _Write_Mirror.NetworkPingMessage(NetworkWriter* writer, NetworkPingMessage value);
        static NetworkPongMessage _Read_Mirror.NetworkPongMessage(NetworkReader* reader);
        static void _Write_Mirror.NetworkPongMessage(NetworkWriter* writer, NetworkPongMessage value);
        static AuthRequestMessage _Read_Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage(NetworkReader* reader);
        static void _Write_Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage(NetworkWriter* writer, AuthRequestMessage value);
        static AuthResponseMessage _Read_Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage(NetworkReader* reader);
        static void _Write_Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage(NetworkWriter* writer, AuthResponseMessage value);
        static AuthRequestMessage _Read_Mirror.Authenticators.DeviceAuthenticator/AuthRequestMessage(NetworkReader* reader);
        static void _Write_Mirror.Authenticators.DeviceAuthenticator/AuthRequestMessage(NetworkWriter* writer, AuthRequestMessage value);
        static AuthResponseMessage _Read_Mirror.Authenticators.DeviceAuthenticator/AuthResponseMessage(NetworkReader* reader);
        static void _Write_Mirror.Authenticators.DeviceAuthenticator/AuthResponseMessage(NetworkWriter* writer, AuthResponseMessage value);
        static void InitReadWriters();
    };

} // namespace Mirror
