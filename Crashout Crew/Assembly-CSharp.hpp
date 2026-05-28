// Namespace: <global>
class IconTool : public MonoBehaviour
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class DynamicBone : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.List<DynamicBone> s_PendingWorks;
    // static System.Collections.Generic.List<DynamicBone> s_EffectiveWorks;
    // static AutoResetEvent* s_AllWorksDoneEvent;
    // static int32_t s_RemainWorkCount;
    // static Semaphore* s_WorkQueueSemaphore;
    // static int32_t s_WorkQueueIndex;
    // static int32_t s_UpdateCount;
    // static int32_t s_PrepareFrame;

    uint8_t pad_0000[0x20]; // 0x0000
    Transform* m_Root; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<UnityEngine.Transform> m_Roots; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimationCurve* m_DampingDistrib; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimationCurve* m_ElasticityDistrib; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    AnimationCurve* m_StiffnessDistrib; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AnimationCurve* m_InertDistrib; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    AnimationCurve* m_FrictionDistrib; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    AnimationCurve* m_RadiusDistrib; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<DynamicBoneColliderBase> m_Colliders; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<UnityEngine.Transform> m_Exclusions; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* m_ReferenceObject; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<DynamicBone.ParticleTree> m_ParticleTrees; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<DynamicBoneColliderBase> m_EffectiveColliders; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    float m_UpdateRate; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    UpdateMode m_UpdateMode; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float m_Damping; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float m_Elasticity; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float m_Stiffness; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float m_Inert; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float m_Friction; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float m_Radius; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float m_EndLength; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    Vector3 m_EndOffset; // 0x00AC
    uint8_t pad_00AD[0xB]; // 0x00AD
    Vector3 m_Gravity; // 0x00B8
    uint8_t pad_00B9[0xB]; // 0x00B9
    Vector3 m_Force; // 0x00C4
    uint8_t pad_00C5[0xB]; // 0x00C5
    float m_BlendWeight; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    FreezeAxis m_FreezeAxis; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    bool m_DistantDisable; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float m_DistanceToObject; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    bool m_Multithread; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    Vector3 m_ObjectMove; // 0x00E4
    uint8_t pad_00E5[0xB]; // 0x00E5
    Vector3 m_ObjectPrevPosition; // 0x00F0
    uint8_t pad_00F1[0xB]; // 0x00F1
    float m_ObjectScale; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float m_Time; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float m_Weight; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    bool m_DistantDisabled; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t m_PreUpdateCount; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float m_DeltaTime; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    bool m_WorkAdded; // 0x0114

    // Methods
    void Start();
    void FixedUpdate();
    void Update();
    void LateUpdate();
    void Prepare();
    bool IsNeedUpdate();
    void PreUpdate();
    void CheckDistance();
    void OnEnable();
    void OnDisable();
    void OnValidate();
    bool IsRootChanged();
    void OnDidApplyAnimationProperties();
    void OnDrawGizmosSelected();
    void DrawGizmos(ParticleTree* pt);
    void SetWeight(float w);
    float GetWeight();
    void UpdateParticles();
    void SetupParticles();
    void AppendParticleTree(Transform* root);
    void AppendParticles(ParticleTree* pt, Transform* b, int32_t parentIndex, float boneLength);
    void UpdateParameters();
    void UpdateParameters(ParticleTree* pt);
    void InitTransforms();
    void InitTransforms(ParticleTree* pt);
    void ResetParticlesPosition();
    void ResetParticlesPosition(ParticleTree* pt);
    void UpdateParticles1(float timeVar, int32_t loopIndex);
    void UpdateParticles1(ParticleTree* pt, float timeVar, int32_t loopIndex);
    void UpdateParticles2(float timeVar);
    void UpdateParticles2(ParticleTree* pt, float timeVar);
    void SkipUpdateParticles();
    void SkipUpdateParticles(ParticleTree* pt);
    static Vector3 MirrorVector(Vector3 v, Vector3 axis);
    void ApplyParticlesToTransforms();
    void ApplyParticlesToTransforms(ParticleTree* pt, Vector3 ax, Vector3 ay, Vector3 az, bool nx, bool ny, bool nz);
    static void AddPendingWork(DynamicBone* db);
    static void AddWorkToQueue(DynamicBone* db);
    static DynamicBone* GetWorkFromQueue();
    static void ThreadProc();
    static void InitThreadPool();
    static void ExecuteWorks();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class DynamicBoneCollider : public DynamicBoneColliderBase
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    float m_Radius; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float m_Height; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float m_Radius2; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float m_ScaledRadius; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float m_ScaledRadius2; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    Vector3 m_C0; // 0x004C
    uint8_t pad_004D[0xB]; // 0x004D
    Vector3 m_C1; // 0x0058
    uint8_t pad_0059[0xB]; // 0x0059
    float m_C01Distance; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t m_CollideType; // 0x0068

    // Methods
    void OnValidate();
    void Prepare();
    bool Collide(Vector3 particlePosition, float particleRadius);
    static bool OutsideSphere(Vector3 particlePosition, float particleRadius, Vector3 sphereCenter, float sphereRadius);
    static bool InsideSphere(Vector3 particlePosition, float particleRadius, Vector3 sphereCenter, float sphereRadius);
    static bool OutsideCapsule(Vector3 particlePosition, float particleRadius, Vector3 capsuleP0, Vector3 capsuleP1, float capsuleRadius, float dirlen);
    static bool InsideCapsule(Vector3 particlePosition, float particleRadius, Vector3 capsuleP0, Vector3 capsuleP1, float capsuleRadius, float dirlen);
    static bool OutsideCapsule2(Vector3 particlePosition, float particleRadius, Vector3 capsuleP0, Vector3 capsuleP1, float capsuleRadius0, float capsuleRadius1, float dirlen);
    static bool InsideCapsule2(Vector3 particlePosition, float particleRadius, Vector3 capsuleP0, Vector3 capsuleP1, float capsuleRadius0, float capsuleRadius1, float dirlen);
    void OnDrawGizmosSelected();
    static void DrawCapsule(Vector3 c0, Vector3 c1, float radius0, float radius1);
    void .ctor();
};

// Namespace: <global>
class DynamicBoneColliderBase : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Direction m_Direction; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    Vector3 m_Center; // 0x0024
    uint8_t pad_0025[0xB]; // 0x0025
    Bound m_Bound; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t <PrepareFrame>k__BackingField; // 0x0034

    // Methods
    void set_PrepareFrame(int32_t value);
    int32_t get_PrepareFrame();
    void Start();
    void Prepare();
    bool Collide(Vector3 particlePosition, float particleRadius);
    void .ctor();
};

// Namespace: <global>
class DynamicBonePlaneCollider : public DynamicBoneColliderBase
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    Plane m_Plane; // 0x0038

    // Methods
    void OnValidate();
    void Prepare();
    bool Collide(Vector3 particlePosition, float particleRadius);
    void OnDrawGizmosSelected();
    void .ctor();
};

// Namespace: <global>
class GraphTest : public MonoBehaviour
{
public:

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class GdkPlatformSettings
{
public:
    // Static fields
    // static MonoString* gameConfigTitleId;
    // static MonoString* gameConfigScid;
    // static MonoString* gameConfigSandbox;


    // Methods
    static void .cctor();
};

// Namespace: <global>
class AggroAO : public ScriptableRendererFeature
{
public:
    // Static fields
    // static int32_t AGGROAO_SETTING_ID;

    uint8_t pad_0000[0x20]; // 0x0000
    BlitPassSettings* AOPassSettings; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BlitPass* AOPass; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BlitPassSettings* blurPassSettings; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    BlitPass* blurPass; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    BlitPassSettings* compositePassSettings; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    BlitPass* compositePass; // 0x0048

    // Methods
    void Create();
    void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
    void Dispose(bool disposing);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class AggroFullScreenPassRendererFeature : public FullScreenPassRendererFeature
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    bool showInSceneView; // 0x0050

    // Methods
    void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
    void .ctor();
};

// Namespace: <global>
class TestBoxSprings : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Rigidbody[][] boxes; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SpringData[][] data; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float frequency; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float dampingRatio; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool springsEnabled; // 0x0038

    // Methods
    void Start();
    void FixedUpdate();
    Vector3 GetPositionFor(BoxSpringSide side, System.Collections.Generic.List<TestBoxSprings.BoxSpring> positions);
    void OnDrawGizmos();
    void GetGroundedSpringPositions(Transform* boxTransform, System.Collections.Generic.List<TestBoxSprings.BoxSpring> positions);
    void .ctor();
};

// Namespace: <global>
class TestEntityMirror : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Entity _syncEntity; // 0x0098
    uint8_t pad_0099[0x1F]; // 0x0099
    Aggro.Core.ObjectQuery<VehicleController> _query; // 0x00B8

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    void .ctor();
    bool Weaved();
    Entity get_Network_syncEntity();
    void set_Network_syncEntity(Entity value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class TestForceAtPos : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Rigidbody* rb; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* pos; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float force; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool _checkForce; // 0x0034

    // Methods
    void Start();
    void DoTest();
    Vector3 ForceToTorque(Vector3 force, Vector3 position, ForceMode forceMode);
    void ToDeltaTorque(Vector3 torque, ForceMode forceMode);
    void ApplyInertiaTensor(Vector3 v, bool useMass);
    static Vector3 Div(Vector3 v, Vector3 v2);
    void .ctor();
};

// Namespace: <global>
class TestGarbage : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<System.Collections.Generic.Dictionary<System.String,System.Object>> _list; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<TestGarbage.MyClass> _myClasses; // 0x0028

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class TestGhostBox : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Rigidbody* rb; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool turnOnGhosting; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float verticalSpeed; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float horizontalSpeed; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float horizontalNoiseScale; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float angularSpeed; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float angularNoiseScale; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float duration; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float _t; // 0x0044

    // Methods
    void FixedUpdate();
    void .ctor();
};

// Namespace: <global>
class TestLerp : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float radius; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float angularSpeed; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float rotationSpeed; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float _angle; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float _rot; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    Vector3 _origin; // 0x0064

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulation();
    void .ctor();
};

// Namespace: <global>
class TestOptions : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* parent; // 0x0020

    // Methods
    void Start();
    IEnumerator* LoadCo();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class TestQuotas : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Load[][] inboundLoadCounts; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Load[][] outboundLoadCounts; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t quotaAmount; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t boxAmount; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t shiftDuration; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t shiftCount; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t truckArriveDuration; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t startingInventoryCount; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector2 chanceForOutbound; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Vector2 inventoryPercentageCount; // 0x0050

    // Methods
    void RunTest();
    void .ctor();
};

// Namespace: <global>
class TestServerLaunch : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Rigidbody[][] rbs; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float vel; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float rot; // 0x002C

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class TestSpring : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float frequency; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float ratio; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float distance; // 0x0028

    // Methods
    void Print();
    void .ctor();
};

// Namespace: <global>
class TestSteamStat : public MonoBehaviour
{
public:

    // Methods
    void Update();
    IEnumerator* RefreshGlobalStatsCo();
    void .ctor();
};

// Namespace: <global>
class TestThrowBox : public NetworkEntityBehaviourBase
{
public:

    // Methods
    void OnUpdatePresentation();
    void CmdAddForce();
    void .ctor();
    bool Weaved();
    void UserCode_CmdAddForce();
    static void InvokeUserCode_CmdAddForce(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class TestTicks : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* t1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* t2; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float spinTime; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float distance; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float duration; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    Vector3 _origPosT1; // 0x003C
    uint8_t pad_003D[0xB]; // 0x003D
    Vector3 _origPosT2; // 0x0048

    // Methods
    void Awake();
    void FixedUpdate();
    void Update();
    void .ctor();
};

// Namespace: <global>
class BoxOverlapTest : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    BoxCollider* boxCollider; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* material; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    LayerMask layerMask; // 0x0030

    // Methods
    void Update();
    void .ctor();
};

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
        static ServerRequest _Read_Mirror.Discovery.ServerRequest(NetworkReader* reader);
        static void _Write_Mirror.Discovery.ServerRequest(NetworkWriter* writer, ServerRequest value);
        static ServerResponse _Read_Mirror.Discovery.ServerResponse(NetworkReader* reader);
        static void _Write_Mirror.Discovery.ServerResponse(NetworkWriter* writer, ServerResponse value);
        static NetMsgGameManagerLoad _Read_NetMsgGameManagerLoad(NetworkReader* reader);
        static void _Write_NetMsgGameManagerLoad(NetworkWriter* writer, NetMsgGameManagerLoad value);
        static NetMsgGameManagerReady _Read_NetMsgGameManagerReady(NetworkReader* reader);
        static void _Write_NetMsgGameManagerReady(NetworkWriter* writer, NetMsgGameManagerReady value);
        static NetMsgTeleported _Read_NetMsgTeleported(NetworkReader* reader);
        static RoomType _Read_RoomType(NetworkReader* reader);
        static void _Write_NetMsgTeleported(NetworkWriter* writer, NetMsgTeleported value);
        static void _Write_RoomType(NetworkWriter* writer, RoomType value);
        static NetMsgGameSettings _Read_NetMsgGameSettings(NetworkReader* reader);
        static void _Write_NetMsgGameSettings(NetworkWriter* writer, NetMsgGameSettings value);
        static NetMsgServerPlayerJoined _Read_NetMsgServerPlayerJoined(NetworkReader* reader);
        static void _Write_NetMsgServerPlayerJoined(NetworkWriter* writer, NetMsgServerPlayerJoined value);
        static NetMsgPlayerJoined _Read_NetMsgPlayerJoined(NetworkReader* reader);
        static void _Write_NetMsgPlayerJoined(NetworkWriter* writer, NetMsgPlayerJoined value);
        static NetMsgPlayerLeft _Read_NetMsgPlayerLeft(NetworkReader* reader);
        static void _Write_NetMsgPlayerLeft(NetworkWriter* writer, NetMsgPlayerLeft value);
        static void InitReadWriters();
    };

} // namespace Mirror
