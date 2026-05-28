// ============================================================
// Image: Cinemachine.dll
// ============================================================

// Namespace: <global>
class CinemachineCameraOffset : public CinemachineExtension
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    Vector3 m_Offset; // 0x0030
    uint8_t pad_0031[0xB]; // 0x0031
    Stage m_ApplyAfter; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    bool m_PreserveComposition; // 0x0040

    // Methods
    void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF4A400
    void .ctor();  // RVA: 0xF4A730
};

// Namespace: <global>
class CinemachineRecomposer : public CinemachineExtension
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    Stage m_ApplyAfter; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float m_Tilt; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float m_Pan; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float m_Dutch; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float m_ZoomScale; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float m_FollowAttachment; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float m_LookAtAttachment; // 0x0048

    // Methods
    void Reset();  // RVA: 0xF5D4B0
    void OnValidate();  // RVA: 0xF5CF30
    void PrePipelineMutateCameraStateCallback(CinemachineVirtualCameraBase* vcam, CameraState curState, float deltaTime);  // RVA: 0xF5D490
    void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF5CF90
    void .ctor();  // RVA: 0x697550
};

// Namespace: <global>
class CinemachineTouchInputMapper : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float TouchSensitivityX; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float TouchSensitivityY; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Il2CppString* TouchXInputMapTo; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* TouchYInputMapTo; // 0x0030

    // Methods
    void Start();  // RVA: 0xF5D900
    float GetInputAxis(Il2CppString* axisName);  // RVA: 0xF5D820
    void .ctor();  // RVA: 0xF5D9C0
};

// Namespace: <global>
class MasterDirectorDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF5DCE0
    PlayableDirector* Invoke();  // RVA: 0xF5DCD0
    IAsyncResult* BeginInvoke(AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x426AA0
    PlayableDirector* EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

// Namespace: <global>
class CinemachineMixer : public PlayableBehaviour
{
public:
    // Static fields
    // static MasterDirectorDelegate* GetMasterPlayableDirector;

    uint8_t pad_0000[0x10]; // 0x0000
    ICameraOverrideStack* m_BrainOverrideStack; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t m_BrainOverrideId; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool m_PreviewPlay; // 0x001C

    // Methods
    void OnPlayableDestroy(Playable playable);  // RVA: 0xF5A0F0
    void PrepareFrame(Playable playable, FrameData info);  // RVA: 0x9CAC70
    void ProcessFrame(Playable playable, FrameData info, Il2CppObject* playerData);  // RVA: 0xF5A1C0
    float GetDeltaTime(float deltaTime);  // RVA: 0xF5A030
    void .ctor();  // RVA: 0xF5A900
};

// Namespace: <global>
class CinemachineShot : public PlayableAsset
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Il2CppString* DisplayName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    UnityEngine.ExposedReference<Cinemachine.CinemachineVirtualCameraBase> VirtualCamera; // 0x0020

    // Methods
    Playable CreatePlayable(PlayableGraph graph, GameObject* owner);  // RVA: 0xF5D530
    void GatherProperties(PlayableDirector* director, IPropertyCollector* driver);  // RVA: 0xF5D680
    void .ctor();  // RVA: 0x9F14D0
};

// Namespace: <global>
class CinemachineShotPlayable : public PlayableBehaviour
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CinemachineVirtualCameraBase* VirtualCamera; // 0x0010

    // Methods
    bool get_IsValid();  // RVA: 0xF5D4E0
    void .ctor();  // RVA: 0x485B30
};

// Namespace: <global>
class CinemachineTrack : public TrackAsset
{
public:

    // Methods
    Playable CreateTrackMixer(PlayableGraph graph, GameObject* go, int32_t inputCount);  // RVA: 0xF5DA50
    void .ctor();  // RVA: 0xF5DB40
};

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
    static MonoScriptData Get();  // RVA: 0xF5EB10
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class Cinemachine3rdPersonAim : public CinemachineExtension
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        LayerMask AimCollisionFilter; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* IgnoreTag; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float AimDistance; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        RectTransform* AimTargetReticle; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector3 <AimTarget>k__BackingField; // 0x0050
    
        // Methods
        Vector3 get_AimTarget();  // RVA: 0xF448F0
        void set_AimTarget(Vector3 value);  // RVA: 0xF44910
        void OnValidate();  // RVA: 0xF44440
        void Reset();  // RVA: 0xF44850
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF44310
        void DrawReticle(CinemachineBrain* brain);  // RVA: 0xF43FA0
        Vector3 ComputeLookAtPoint(Vector3 camPos, Transform* player);  // RVA: 0xF43BD0
        Vector3 ComputeAimTarget(Vector3 cameraLookAt, Transform* player);  // RVA: 0xF439B0
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF44460
        void .ctor();  // RVA: 0xF448B0
    };

} // namespace Cinemachine

// Namespace: <global>
struct Instruction
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CinemachineVirtualCameraBase* m_VirtualCamera; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float m_Hold; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CinemachineBlendDefinition m_Blend; // 0x0020
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineBlendListCamera : public CinemachineVirtualCameraBase
    {
    public:
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Transform* m_Follow; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool m_ShowDebugText; // 0x00B8
        bool m_Loop; // 0x00B9
        uint8_t pad_00BA[0x6]; // 0x00BA
        CinemachineVirtualCameraBase[][] m_ChildCameras; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Instruction[][] m_Instructions; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        ICinemachineCamera* <LiveChild>k__BackingField; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        ICinemachineCamera* m_TransitioningFrom; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        CameraState m_State; // 0x00E0
        uint8_t pad_00E1[0xE7]; // 0x00E1
        float mActivationTime; // 0x01C8
        uint8_t pad_01C9[0x3]; // 0x01C9
        int32_t mCurrentInstruction; // 0x01CC
        uint8_t pad_01CD[0x3]; // 0x01CD
        CinemachineBlend* mActiveBlend; // 0x01D0
    
        // Methods
        Il2CppString* get_Description();  // RVA: 0xF46020
        void Reset();  // RVA: 0xF459D0
        ICinemachineCamera* get_LiveChild();  // RVA: 0x6C7E90
        void set_LiveChild(ICinemachineCamera* value);  // RVA: 0x42C3A0
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF45260
        CameraState get_State();  // RVA: 0xF46180
        Transform* get_LookAt();  // RVA: 0xF46170
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0xF46150
        void set_Follow(Transform* value);  // RVA: 0x58CC10
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF457A0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF44B40
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF45880
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF44C30
        void OnEnable();  // RVA: 0xF453C0
        void OnDisable();  // RVA: 0xF45290
        void OnTransformChildrenChanged();  // RVA: 0xF45220
        void OnGuiHandler();  // RVA: 0xF45620
        CinemachineVirtualCameraBase[][] get_ChildCameras();  // RVA: 0xF46000
        bool get_IsBlending();  // RVA: 0xF46160
        void InvalidateListOfChildren();  // RVA: 0xF45220
        void UpdateListOfChildren();  // RVA: 0xF45A50
        void ValidateInstructions();  // RVA: 0xF45C20
        void AdvanceCurrentInstruction(float deltaTime);  // RVA: 0xF44920
        void .ctor();  // RVA: 0xF45E70
    };

    // Namespace: Cinemachine
    class ICameraOverrideStack
    {
    public:
    
        // Methods
        int32_t SetCameraOverride(int32_t overrideId, ICinemachineCamera* camA, ICinemachineCamera* camB, float weightB, float deltaTime);
        void ReleaseCameraOverride(int32_t overrideId);  // RVA: 0x26E4D0
        Vector3 get_DefaultWorldUp();
    };

} // namespace Cinemachine

// Namespace: <global>
struct UpdateMethod
{
public:
    // Static fields
    // static UpdateMethod FixedUpdate;
    // static UpdateMethod LateUpdate;
    // static UpdateMethod SmartUpdate;
    // static UpdateMethod ManualUpdate;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct BrainUpdateMethod
{
public:
    // Static fields
    // static BrainUpdateMethod FixedUpdate;
    // static BrainUpdateMethod LateUpdate;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class BrainEvent : public UnityEvent`1
{
public:

    // Methods
    void .ctor();  // RVA: 0xF43840
};

// Namespace: <global>
class VcamActivatedEvent : public UnityEvent`2
{
public:

    // Methods
    void .ctor();  // RVA: 0xF5EBF0
};

// Namespace: <global>
class BrainFrame
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t id; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    CinemachineBlend* blend; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CinemachineBlend* workingBlend; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BlendSourceVirtualCamera* workingBlendSource; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float deltaTimeOverride; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float blendStartPosition; // 0x0034

    // Methods
    bool get_Active();  // RVA: 0xF43990
    void .ctor();  // RVA: 0xF43880
};

// Namespace: <global>
class <AfterPhysics>d__38
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CinemachineBrain* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x492D30
    void System.IDisposable.Dispose();  // RVA: 0x4160A0
    bool MoveNext();  // RVA: 0xF5E910
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x42A480
    void System.Collections.IEnumerator.Reset();  // RVA: 0xF5EA40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x42A480
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineBrain : public MonoBehaviour
    {
    public:
        // Static fields
        // static ICinemachineCamera* mSoloCamera;
        // static AnimationCurve* mDefaultLinearAnimationCurve;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool m_ShowDebugText; // 0x0020
        bool m_ShowCameraFrustum; // 0x0021
        bool m_IgnoreTimeScale; // 0x0022
        uint8_t pad_0023[0x5]; // 0x0023
        Transform* m_WorldUpOverride; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        UpdateMethod m_UpdateMethod; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        BrainUpdateMethod m_BlendUpdateMethod; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        CinemachineBlendDefinition m_DefaultBlend; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        CinemachineBlenderSettings* m_CustomBlends; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Camera* m_OutputCamera; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        GameObject* m_TargetOverride; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        BrainEvent* m_CameraCutEvent; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        VcamActivatedEvent* m_CameraActivatedEvent; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Coroutine* mPhysicsCoroutine; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        int32_t m_LastFrameUpdated; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        WaitForFixedUpdate* mWaitForFixedUpdate; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Collections.Generic.List<Cinemachine.CinemachineBrain.BrainFrame> mFrameStack; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int32_t mNextFrameId; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        CinemachineBlend* mCurrentLiveCameras; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        ICinemachineCamera* mActiveCameraPreviousFrame; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* mActiveCameraPreviousFrameGameObject; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        CameraState <CurrentCameraState>k__BackingField; // 0x00B0
    
        // Methods
        Camera* get_OutputCamera();  // RVA: 0xF49FA0
        GameObject* get_ControlledObject();  // RVA: 0xF49D80
        void set_ControlledObject(GameObject* value);  // RVA: 0xF4A170
        static ICinemachineCamera* get_SoloCamera();  // RVA: 0xF4A070
        static void set_SoloCamera(ICinemachineCamera* value);  // RVA: 0xF4A2A0
        static Color GetSoloGUIColor();  // RVA: 0xF46BC0
        Vector3 get_DefaultWorldUp();  // RVA: 0xF49EA0
        void OnEnable();  // RVA: 0xF47570
        void OnDisable();  // RVA: 0xF47310
        void OnSceneLoaded(Scene scene, LoadSceneMode mode);  // RVA: 0xF47C90
        void OnSceneUnloaded(Scene scene);  // RVA: 0xF47CF0
        void Awake();  // RVA: 0xF46290
        void Start();  // RVA: 0xF48C80
        void OnGuiHandler();  // RVA: 0xF47940
        IEnumerator* AfterPhysics();  // RVA: 0xF46220
        void LateUpdate();  // RVA: 0xF46EF0
        void ManualUpdate();  // RVA: 0xF470E0
        float GetEffectiveDeltaTime(bool fixedDelta);  // RVA: 0xF469A0
        void UpdateVirtualCameras(UpdateFilter updateFilter, float deltaTime);  // RVA: 0xF49580
        ICinemachineCamera* get_ActiveVirtualCamera();  // RVA: 0xF49BD0
        static ICinemachineCamera* DeepCamBFromBlend(CinemachineBlend* blend);  // RVA: 0xF467D0
        bool IsLiveInBlend(ICinemachineCamera* vcam);  // RVA: 0xF46BE0
        bool get_IsBlending();  // RVA: 0xF49F80
        CinemachineBlend* get_ActiveBlend();  // RVA: 0xF49AF0
        void set_ActiveBlend(CinemachineBlend* value);  // RVA: 0xF4A0C0
        int32_t GetBrainFrame(int32_t withId);  // RVA: 0xF46880
        int32_t SetCameraOverride(int32_t overrideId, ICinemachineCamera* camA, ICinemachineCamera* camB, float weightB, float deltaTime);  // RVA: 0xF48920
        void ReleaseCameraOverride(int32_t overrideId);  // RVA: 0xF48850
        void ProcessActiveCamera(float deltaTime);  // RVA: 0xF47D50
        void UpdateFrame0(float deltaTime);  // RVA: 0xF48E40
        void ComputeCurrentBlend(CinemachineBlend* outputBlend, int32_t numTopLayersToExclude);  // RVA: 0xF462F0
        bool IsLive(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF46D20
        CameraState get_CurrentCameraState();  // RVA: 0xF49E00
        void set_CurrentCameraState(CameraState value);  // RVA: 0xF4A1F0
        ICinemachineCamera* TopCameraFromPriorityQueue();  // RVA: 0xF48CA0
        CinemachineBlendDefinition LookupBlend(ICinemachineCamera* fromKey, ICinemachineCamera* toKey);  // RVA: 0xF46F00
        void PushStateToUnityCamera(CameraState state);  // RVA: 0xF48380
        void .ctor();  // RVA: 0xF498E0
        static void .cctor();  // RVA: 0xF49870
    };

} // namespace Cinemachine

// Namespace: <global>
struct Pair
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t a; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float b; // 0x0014
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<Cinemachine.CinemachineClearShot.Pair> <>9__49_0;


    // Methods
    static void .cctor();  // RVA: 0xF5EAA0
    void .ctor();  // RVA: 0x427B90
    int32_t <Randomize>b__49_0(Pair p1, Pair p2);  // RVA: 0xF5EA80
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineClearShot : public CinemachineVirtualCameraBase
    {
    public:
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Transform* m_Follow; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool m_ShowDebugText; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        CinemachineVirtualCameraBase[][] m_ChildCameras; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float m_ActivateAfter; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float m_MinDuration; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        bool m_RandomizeChoice; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        CinemachineBlendDefinition m_DefaultBlend; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        CinemachineBlenderSettings* m_CustomBlends; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        ICinemachineCamera* <LiveChild>k__BackingField; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        CameraState m_State; // 0x00F8
        uint8_t pad_00F9[0xE7]; // 0x00F9
        float mActivationTime; // 0x01E0
        uint8_t pad_01E1[0x3]; // 0x01E1
        float mPendingActivationTime; // 0x01E4
        uint8_t pad_01E5[0x3]; // 0x01E5
        ICinemachineCamera* mPendingCamera; // 0x01E8
        uint8_t pad_01E9[0x7]; // 0x01E9
        CinemachineBlend* mActiveBlend; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        bool mRandomizeNow; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        CinemachineVirtualCameraBase[][] m_RandomizedChilden; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        ICinemachineCamera* m_TransitioningFrom; // 0x0208
    
        // Methods
        Il2CppString* get_Description();  // RVA: 0xF4C820
        ICinemachineCamera* get_LiveChild();  // RVA: 0x7F9630
        void set_LiveChild(ICinemachineCamera* value);  // RVA: 0x97A0D0
        CameraState get_State();  // RVA: 0xF4C960
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF4B790
        Transform* get_LookAt();  // RVA: 0xF46170
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0xF46150
        void set_Follow(Transform* value);  // RVA: 0x58CC10
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF4BEB0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF4B000
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF4B0F0
        void OnEnable();  // RVA: 0xF4BAD0
        void OnDisable();  // RVA: 0xF4B9A0
        void OnTransformChildrenChanged();  // RVA: 0xF4BF90
        void OnGuiHandler();  // RVA: 0xF4BD30
        bool get_IsBlending();  // RVA: 0xF4C950
        CinemachineBlend* get_ActiveBlend();  // RVA: 0x945ED0
        CinemachineVirtualCameraBase[][] get_ChildCameras();  // RVA: 0xF4C800
        void InvalidateListOfChildren();  // RVA: 0xF4B730
        void ResetRandomization();  // RVA: 0xF4C3F0
        void UpdateListOfChildren();  // RVA: 0xF4C420
        ICinemachineCamera* ChooseCurrentCamera(Vector3 worldUp);  // RVA: 0xF4A790
        CinemachineVirtualCameraBase[][] Randomize(CinemachineVirtualCameraBase[][] src);  // RVA: 0xF4C110
        CinemachineBlendDefinition LookupBlend(ICinemachineCamera* fromKey, ICinemachineCamera* toKey);  // RVA: 0xF4B7C0
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF4C000
        void .ctor();  // RVA: 0xF4C640
    };

} // namespace Cinemachine

// Namespace: <global>
struct ResolutionStrategy
{
public:
    // Static fields
    // static ResolutionStrategy PullCameraForward;
    // static ResolutionStrategy PreserveCameraHeight;
    // static ResolutionStrategy PreserveCameraDistance;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class VcamExtraState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 previousDisplacement; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    Vector3 previousCameraOffset; // 0x001C
    uint8_t pad_001D[0xB]; // 0x001D
    Vector3 previousCameraPosition; // 0x0028
    uint8_t pad_0029[0xB]; // 0x0029
    float previousDampTime; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool targetObscured; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float occlusionStartTime; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    System.Collections.Generic.List<UnityEngine.Vector3> debugResolutionPath; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float m_SmoothedDistance; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float m_SmoothedTime; // 0x004C

    // Methods
    void AddPointToDebugPath(Vector3 p);  // RVA: 0x4160A0
    float ApplyDistanceSmoothing(float distance, float smoothingTime);  // RVA: 0xF5EC30
    void UpdateDistanceSmoothing(float distance);  // RVA: 0xF5ED30
    void ResetDistanceSmoothing(float smoothingTime);  // RVA: 0xF5ECC0
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineCollider : public CinemachineExtension
    {
    public:
        // Static fields
        // static float k_PrecisionSlush;
        // static float k_AngleThreshold;
        // static Collider[][] s_ColliderBuffer;
    
        uint8_t pad_0000[0x30]; // 0x0000
        LayerMask m_CollideAgainst; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* m_IgnoreTag; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        LayerMask m_TransparentLayers; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_MinimumDistanceFromTarget; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool m_AvoidObstacles; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float m_DistanceLimit; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float m_MinimumOcclusionTime; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_CameraRadius; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        ResolutionStrategy m_Strategy; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t m_MaximumEffort; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float m_SmoothingTime; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float m_Damping; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float m_DampingWhenOccluded; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float m_OptimalTargetDistance; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        RaycastHit[][] m_CornerBuffer; // 0x0070
    
        // Methods
        bool IsTargetObscured(ICinemachineCamera* vcam);  // RVA: 0xF4E4C0
        bool CameraWasDisplaced(ICinemachineCamera* vcam);  // RVA: 0xF4CA00
        float GetCameraDisplacementDistance(ICinemachineCamera* vcam);  // RVA: 0xF4D8B0
        void OnValidate();  // RVA: 0xF4EBC0
        void OnDestroy();  // RVA: 0xF4EAA0
        System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector3>> get_DebugPaths();  // RVA: 0xF51C40
        float GetMaxDampTime();  // RVA: 0xF4D910
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF4EAF0
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF4EC10
        Vector3 PreserveLineOfSight(CameraState state, VcamExtraState* extra);  // RVA: 0xF4FCB0
        Vector3 PullCameraInFrontOfNearestObstacle(Vector3 cameraPos, Vector3 lookAtPos, int32_t layerMask, RaycastHit hitInfo);  // RVA: 0xF501B0
        Vector3 PushCameraBack(Vector3 currentPos, Vector3 pushDir, RaycastHit obstacle, Vector3 lookAtPos, Plane startPlane, float targetDistance, int32_t iterations, VcamExtraState* extra);  // RVA: 0xF506B0
        bool GetWalkingDirection(Vector3 pos, Vector3 pushDir, RaycastHit obstacle, Vector3 outDir);  // RVA: 0xF4DBB0
        float GetPushBackDistance(Ray ray, Plane startPlane, float targetDistance, Vector3 lookAtPos);  // RVA: 0xF4D930
        static float ClampRayToBounds(Ray ray, float distance, Bounds bounds);  // RVA: 0xF4CE00
        Vector3 RespectCameraRadius(Vector3 cameraPos, Vector3 lookAtPos);  // RVA: 0xF51050
        bool CheckForTargetObstructions(CameraState state);  // RVA: 0xF4CA70
        static bool IsTargetOffscreen(CameraState state);  // RVA: 0xF4E520
        void .ctor();  // RVA: 0xF51B90
        static void .cctor();  // RVA: 0xF51B20
    };

} // namespace Cinemachine

// Namespace: <global>
struct Mode
{
public:
    // Static fields
    // static Mode Confine2D;
    // static Mode Confine3D;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class VcamExtraState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 m_previousDisplacement; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    float confinerDisplacement; // 0x001C

    // Methods
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineConfiner : public CinemachineExtension
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        Mode m_ConfineMode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Collider* m_BoundingVolume; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Collider2D* m_BoundingShape2D; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Collider2D* m_BoundingShape2DCache; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool m_ConfineScreenEdges; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_Damping; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector2>> m_pathCache; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t m_pathTotalPointCount; // 0x0060
    
        // Methods
        bool CameraWasDisplaced(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF52790
        float GetCameraDisplacementDistance(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF532F0
        void OnValidate();  // RVA: 0xF533A0
        void ConnectToVcam(bool connect);  // RVA: 0xF532E0
        bool get_IsValid();  // RVA: 0xF53CF0
        float GetMaxDampTime();  // RVA: 0xF53350
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF533B0
        void InvalidatePathCache();  // RVA: 0xF53360
        bool ValidatePathCache();  // RVA: 0xF53760
        Vector3 ConfinePoint(Vector3 camPos);  // RVA: 0xF52800
        Vector3 ConfineScreenEdges(CameraState state);  // RVA: 0xF52D10
        void .ctor();  // RVA: 0xF53CE0
    };

} // namespace Cinemachine

// Namespace: <global>
class VcamExtraState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 m_PreviousDisplacement; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    Vector3 m_DampedDisplacement; // 0x001C
    uint8_t pad_001D[0xB]; // 0x001D
    BakedSolution* m_BakedSolution; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CinemachineVirtualCameraBase* m_vcam; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
struct ShapeCache
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ConfinerOven* m_confinerOven; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector2>> m_OriginalPath; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Matrix4x4 m_DeltaWorldToBaked; // 0x0020
    uint8_t pad_0021[0x3F]; // 0x0021
    Matrix4x4 m_DeltaBakedToWorld; // 0x0060
    uint8_t pad_0061[0x3F]; // 0x0061
    float m_aspectRatio; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float m_maxWindowSize; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float m_skeletonPadding; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float m_maxComputationTimePerFrameInSeconds; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Matrix4x4 m_bakedToWorld; // 0x00B0
    uint8_t pad_00B1[0x3F]; // 0x00B1
    Collider2D* m_boundingShape2D; // 0x00F0

    // Methods
    void Invalidate();  // RVA: 0xF5DF80
    bool ValidateCache(Collider2D* boundingShape2D, float maxWindowSize, float aspectRatio, float skeletonPadding, bool confinerStateChanged);  // RVA: 0xF5E1B0
    bool IsValid(Collider2D* boundingShape2D, float aspectRatio, float maxOrthoSize, float padding);  // RVA: 0xF5E050
    void CalculateDeltaTransformationMatrix();  // RVA: 0xF5DDA0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineConfiner2D : public CinemachineExtension
    {
    public:
        // Static fields
        // static float k_cornerAngleTreshold;
    
        uint8_t pad_0000[0x30]; // 0x0000
        Collider2D* m_BoundingShape2D; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float m_Damping; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_MaxWindowSize; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_Padding; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_MaxComputationTimePerFrameInSeconds; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        ShapeCache m_shapeCache; // 0x0048
    
        // Methods
        void InvalidateCache();  // RVA: 0xF51EB0
        bool ValidateCache(float cameraAspectRatio);  // RVA: 0xF52730
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF51EE0
        float CalculateHalfFrustumHeight(CameraState state, float cameraPosLocalZ);  // RVA: 0xF51DF0
        void OnValidate();  // RVA: 0xF51EC0
        void Reset();  // RVA: 0xF52720
        void .ctor();  // RVA: 0xF52780
    };

} // namespace Cinemachine

// Namespace: <global>
struct UpdateMethod
{
public:
    // Static fields
    // static UpdateMethod Update;
    // static UpdateMethod FixedUpdate;
    // static UpdateMethod LateUpdate;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineDollyCart : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        CinemachinePathBase* m_Path; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        UpdateMethod m_UpdateMethod; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        PositionUnits m_PositionUnits; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float m_Speed; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float m_Position; // 0x0034
    
        // Methods
        void FixedUpdate();  // RVA: 0xF53E20
        void Update();  // RVA: 0xF54060
        void LateUpdate();  // RVA: 0xF53E70
        void SetCartPosition(float distanceAlongPath);  // RVA: 0xF53F20
        void .ctor();  // RVA: 0xF54100
    };

    // Namespace: Cinemachine
    class CinemachineExternalCamera : public CinemachineVirtualCameraBase
    {
    public:
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* m_Camera; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        CameraState m_State; // 0x00B8
        uint8_t pad_00B9[0xE7]; // 0x00B9
        Transform* <Follow>k__BackingField; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        BlendHint m_BlendHint; // 0x01A8
    
        // Methods
        CameraState get_State();  // RVA: 0xF54A10
        Transform* get_LookAt();  // RVA: 0x589F00
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0x98D440
        void set_Follow(Transform* value);  // RVA: 0xF54AB0
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF54110
        void .ctor();  // RVA: 0xF54890
    };

} // namespace Cinemachine

// Namespace: <global>
class VcamExtraState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float m_previousFrameZoom; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineFollowZoom : public CinemachineExtension
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        float m_Width; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float m_Damping; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_MinFOV; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_MaxFOV; // 0x003C
    
        // Methods
        void OnValidate();  // RVA: 0xF54AD0
        float GetMaxDampTime();  // RVA: 0x7BE750
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF54B30
        void .ctor();  // RVA: 0xF54F00
    };

} // namespace Cinemachine

// Namespace: <global>
struct Orbit
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float m_Height; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float m_Radius; // 0x0014

    // Methods
    void .ctor(float h, float r);  // RVA: 0xF5DD90
};

// Namespace: <global>
class CreateRigDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF5DBB0
    CinemachineVirtualCamera* Invoke(CinemachineFreeLook* vcam, Il2CppString* name, CinemachineVirtualCamera* copyFrom);  // RVA: 0xF5DB90
    IAsyncResult* BeginInvoke(CinemachineFreeLook* vcam, Il2CppString* name, CinemachineVirtualCamera* copyFrom, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x801D60
    CinemachineVirtualCamera* EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

// Namespace: <global>
class DestroyRigDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x4166D0
    void Invoke(GameObject* rig);  // RVA: 0x416250
    IAsyncResult* BeginInvoke(GameObject* rig, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x453BA0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

// Namespace: <global>
struct <>c__DisplayClass47_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CinemachineFreeLook* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector3 cameraOffset; // 0x0018
};

// Namespace: <global>
struct <>c__DisplayClass47_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float bestAngle; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float best; // 0x0014
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineFreeLook : public CinemachineVirtualCameraBase
    {
    public:
        // Static fields
        // static CreateRigDelegate* CreateRigOverride;
        // static DestroyRigDelegate* DestroyRigOverride;
    
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Transform* m_Follow; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool m_CommonLens; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        LensSettings m_Lens; // 0x00BC
        uint8_t pad_00BD[0x33]; // 0x00BD
        TransitionParams m_Transitions; // 0x00F0
        uint8_t pad_00F1[0xF]; // 0x00F1
        BlendHint m_LegacyBlendHint; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        AxisState m_YAxis; // 0x0108
        uint8_t pad_0109[0x6F]; // 0x0109
        Recentering m_YAxisRecentering; // 0x0178
        uint8_t pad_0179[0x1F]; // 0x0179
        AxisState m_XAxis; // 0x0198
        uint8_t pad_0199[0x6F]; // 0x0199
        Heading m_Heading; // 0x0208
        uint8_t pad_0209[0xB]; // 0x0209
        Recentering m_RecenterToTargetHeading; // 0x0214
        uint8_t pad_0215[0x1F]; // 0x0215
        BindingMode m_BindingMode; // 0x0234
        uint8_t pad_0235[0x3]; // 0x0235
        float m_SplineCurvature; // 0x0238
        uint8_t pad_0239[0x7]; // 0x0239
        Orbit[][] m_Orbits; // 0x0240
        uint8_t pad_0241[0x7]; // 0x0241
        float m_LegacyHeadingBias; // 0x0248
        uint8_t pad_0249[0x3]; // 0x0249
        bool mUseLegacyRigDefinitions; // 0x024C
        bool mIsDestroyed; // 0x024D
        uint8_t pad_024E[0x2]; // 0x024E
        CameraState m_State; // 0x0250
        uint8_t pad_0251[0xE7]; // 0x0251
        CinemachineVirtualCamera[][] m_Rigs; // 0x0338
        uint8_t pad_0339[0x7]; // 0x0339
        CinemachineOrbitalTransposer[][] mOrbitals; // 0x0340
        uint8_t pad_0341[0x7]; // 0x0341
        CinemachineBlend* mBlendA; // 0x0348
        uint8_t pad_0349[0x7]; // 0x0349
        CinemachineBlend* mBlendB; // 0x0350
        uint8_t pad_0351[0x7]; // 0x0351
        float m_CachedXAxisHeading; // 0x0358
        uint8_t pad_0359[0x3]; // 0x0359
        float m_LastHeadingUpdateFrame; // 0x035C
        uint8_t pad_035D[0x3]; // 0x035D
        Orbit[][] m_CachedOrbits; // 0x0360
        uint8_t pad_0361[0x7]; // 0x0361
        float m_CachedTension; // 0x0368
        uint8_t pad_0369[0x7]; // 0x0369
        Vector4[][] m_CachedKnots; // 0x0370
        uint8_t pad_0371[0x7]; // 0x0371
        Vector4[][] m_CachedCtrl1; // 0x0378
        uint8_t pad_0379[0x7]; // 0x0379
        Vector4[][] m_CachedCtrl2; // 0x0380
    
        // Methods
        void OnValidate();  // RVA: 0xF57FB0
        CinemachineVirtualCamera* GetRig(int32_t i);  // RVA: 0xF565C0
        bool get_RigsAreCreated();  // RVA: 0xF59E60
        static String[][] get_RigNames();  // RVA: 0xF59D90
        void OnEnable();  // RVA: 0xF579C0
        void UpdateInputAxisProvider();  // RVA: 0xF591D0
        void OnDestroy();  // RVA: 0xF57880
        void OnTransformChildrenChanged();  // RVA: 0xF57200
        void Reset();  // RVA: 0xF587C0
        bool get_PreviousStateIsValid();  // RVA: 0x45A6E0
        void set_PreviousStateIsValid(bool value);  // RVA: 0xF59F20
        CameraState get_State();  // RVA: 0xF59E80
        Transform* get_LookAt();  // RVA: 0xF46170
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0xF46150
        void set_Follow(Transform* value);  // RVA: 0x58CC10
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF57220
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF57A70
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF56110
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF56AA0
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF57B50
        bool RequiresUserInput();  // RVA: 0x53A800
        float GetYAxisClosestValue(Vector3 cameraPos, Vector3 up);  // RVA: 0xF56620
        float SteepestDescent(Vector3 cameraOffset);  // RVA: 0xF587E0
        void InvalidateRigCache();  // RVA: 0xF57200
        void DestroyRigs();  // RVA: 0xF55BF0
        CinemachineVirtualCamera[][] CreateRigs(CinemachineVirtualCamera[][] copyFrom);  // RVA: 0xF551E0
        bool UpdateRigCache();  // RVA: 0xF59250
        System.Collections.Generic.List<Cinemachine.CinemachineVirtualCamera> LocateExistingRigs(bool forceOrbital);  // RVA: 0xF57330
        float UpdateXAxisHeading(CinemachineOrbitalTransposer* orbital, float deltaTime, Vector3 up);  // RVA: 0xF59640
        void PushSettingsToRigs();  // RVA: 0xF580F0
        float GetYAxisValue();  // RVA: 0xF56A70
        CameraState CalculateNewState(Vector3 worldUp, float deltaTime);  // RVA: 0xF54F30
        Vector3 GetLocalPositionForCameraFromInput(float t);  // RVA: 0xF56330
        void UpdateCachedSpline();  // RVA: 0xF58C80
        void OnBeforeSerialize();  // RVA: 0xF577B0
        void .ctor();  // RVA: 0xF59810
        float <SteepestDescent>g__AngleFunction|47_0(float input, <>c__DisplayClass47_0 param1);  // RVA: 0xF58A00
        float <SteepestDescent>g__SlopeOfAngleFunction|47_1(float input, <>c__DisplayClass47_0 param1);  // RVA: 0xF58C10
        float <SteepestDescent>g__InitialGuess|47_2(<>c__DisplayClass47_0 param0);  // RVA: 0xF58B00
        void <SteepestDescent>g__ChooseBestAngle|47_3(float referenceAngle, <>c__DisplayClass47_0 param1, <>c__DisplayClass47_1 param2);  // RVA: 0xF58AC0
    };

    // Namespace: Cinemachine
    class CinemachineMixingCamera : public CinemachineVirtualCameraBase
    {
    public:
        // Static fields
        // static int32_t MaxCameras;
    
        uint8_t pad_0000[0xA8]; // 0x0000
        float m_Weight0; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        float m_Weight1; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        float m_Weight2; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float m_Weight3; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        float m_Weight4; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        float m_Weight5; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        float m_Weight6; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float m_Weight7; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        CameraState m_State; // 0x00C8
        uint8_t pad_00C9[0xE7]; // 0x00C9
        ICinemachineCamera* <LiveChild>k__BackingField; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        Transform* <LookAt>k__BackingField; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        Transform* <Follow>k__BackingField; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        CinemachineVirtualCameraBase[][] m_ChildCameras; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        System.Collections.Generic.Dictionary<Cinemachine.CinemachineVirtualCameraBase,System.Int32> m_indexMap; // 0x01D0
    
        // Methods
        float GetWeight(int32_t index);  // RVA: 0xF5AC50
        void SetWeight(int32_t index, float w);  // RVA: 0xF5BA90
        float GetWeight(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF5AA00
        void SetWeight(CinemachineVirtualCameraBase* vcam, float w);  // RVA: 0xF5B810
        ICinemachineCamera* get_LiveChild();  // RVA: 0x98D470
        void set_LiveChild(ICinemachineCamera* value);  // RVA: 0x935CE0
        CameraState get_State();  // RVA: 0xF5C040
        Transform* get_LookAt();  // RVA: 0x98D480
        void set_LookAt(Transform* value);  // RVA: 0xF5C100
        Transform* get_Follow();  // RVA: 0x98D120
        void set_Follow(Transform* value);  // RVA: 0xF5C0E0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF5B580
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF5A910
        void OnEnable();  // RVA: 0xF5B520
        void OnTransformChildrenChanged();  // RVA: 0xF5B420
        void OnValidate();  // RVA: 0xF5B7B0
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF5B480
        CinemachineVirtualCameraBase[][] get_ChildCameras();  // RVA: 0xF5C020
        void InvalidateListOfChildren();  // RVA: 0xF5B420
        void ValidateListOfChildren();  // RVA: 0xF5BC00
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF5B660
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF5AD80
        void .ctor();  // RVA: 0xF5BE50
    };

} // namespace Cinemachine

// Namespace: <global>
struct Waypoint
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 position; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    Vector3 tangent; // 0x001C
    uint8_t pad_001D[0xB]; // 0x001D
    float roll; // 0x0028
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachinePath : public CinemachinePathBase
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        bool m_Looped; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Waypoint[][] m_Waypoints; // 0x0058
    
        // Methods
        float get_MinPos();  // RVA: 0x9F9200
        float get_MaxPos();  // RVA: 0xF5CEF0
        bool get_Looped();  // RVA: 0x600800
        void Reset();  // RVA: 0xF5CCE0
        void OnValidate();  // RVA: 0x91CD70
        int32_t get_DistanceCacheSampleStepsPerSegment();  // RVA: 0x423C80
        float GetBoundingIndices(float pos, int32_t indexA, int32_t indexB);  // RVA: 0xF5C980
        Vector3 EvaluateLocalPosition(float pos);  // RVA: 0xF5C4E0
        Vector3 EvaluateLocalTangent(float pos);  // RVA: 0xF5C730
        Quaternion EvaluateLocalOrientation(float pos);  // RVA: 0xF5C120
        float GetRoll(int32_t indexA, int32_t indexB, float standardizedPos);  // RVA: 0xF5CBB0
        static Quaternion RollAroundForward(float angle);  // RVA: 0xF5CDF0
        void .ctor();  // RVA: 0xF5CE40
    };

    // Namespace: Cinemachine
    class CinemachinePipeline : public MonoBehaviour
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x423C90
    };

    // Namespace: Cinemachine
    class CinemachinePixelPerfect : public CinemachineExtension
    {
    public:
    
        // Methods
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF6BAA0
        void .ctor();  // RVA: 0x697550
    };

} // namespace Cinemachine

// Namespace: <global>
struct Waypoint
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 position; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    float roll; // 0x001C

    // Methods
    Vector4 get_AsVector4();  // RVA: 0xF78400
    static Waypoint FromVector4(Vector4 v);  // RVA: 0xF783D0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineSmoothPath : public CinemachinePathBase
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        bool m_Looped; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Waypoint[][] m_Waypoints; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Waypoint[][] m_ControlPoints1; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Waypoint[][] m_ControlPoints2; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        bool m_IsLoopedCache; // 0x0070
    
        // Methods
        float get_MinPos();  // RVA: 0x9F9200
        float get_MaxPos();  // RVA: 0xF5CEF0
        bool get_Looped();  // RVA: 0x600800
        int32_t get_DistanceCacheSampleStepsPerSegment();  // RVA: 0x423C80
        void OnValidate();  // RVA: 0x91CD70
        void Reset();  // RVA: 0xF6C830
        void InvalidateDistanceCache();  // RVA: 0xF6C7F0
        void UpdateControlPoints();  // RVA: 0xF6C930
        float GetBoundingIndices(float pos, int32_t indexA, int32_t indexB);  // RVA: 0xF6C6D0
        Vector3 EvaluateLocalPosition(float pos);  // RVA: 0xF6C270
        Vector3 EvaluateLocalTangent(float pos);  // RVA: 0xF6C490
        Quaternion EvaluateLocalOrientation(float pos);  // RVA: 0xF6BE90
        static Quaternion RollAroundForward(float angle);  // RVA: 0xF5CDF0
        void .ctor();  // RVA: 0xF6CC00
    };

} // namespace Cinemachine

// Namespace: <global>
struct Instruction
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t m_FullHash; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    CinemachineVirtualCameraBase* m_VirtualCamera; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float m_ActivateAfter; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float m_MinDuration; // 0x0024
};

// Namespace: <global>
struct ParentHash
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t m_Hash; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t m_ParentHash; // 0x0014

    // Methods
    void .ctor(int32_t h, int32_t p);  // RVA: 0xF16B50
};

// Namespace: <global>
struct HashPair
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t parentHash; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t hash; // 0x0014
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineStateDrivenCamera : public CinemachineVirtualCameraBase
    {
    public:
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Transform* m_Follow; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Animator* m_AnimatedTarget; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t m_LayerIndex; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        bool m_ShowDebugText; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        CinemachineVirtualCameraBase[][] m_ChildCameras; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Instruction[][] m_Instructions; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        CinemachineBlendDefinition m_DefaultBlend; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        CinemachineBlenderSettings* m_CustomBlends; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        ParentHash[][] m_ParentHash; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        ICinemachineCamera* <LiveChild>k__BackingField; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        ICinemachineCamera* m_TransitioningFrom; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        CameraState m_State; // 0x0108
        uint8_t pad_0109[0xE7]; // 0x0109
        System.Collections.Generic.Dictionary<UnityEngine.AnimationClip,System.Collections.Generic.List<Cinemachine.CinemachineStateDrivenCamera.HashPair>> mHashCache; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        float mActivationTime; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Instruction mActiveInstruction; // 0x0200
        uint8_t pad_0201[0x17]; // 0x0201
        float mPendingActivationTime; // 0x0218
        uint8_t pad_0219[0x7]; // 0x0219
        Instruction mPendingInstruction; // 0x0220
        uint8_t pad_0221[0x17]; // 0x0221
        CinemachineBlend* mActiveBlend; // 0x0238
        uint8_t pad_0239[0x7]; // 0x0239
        System.Collections.Generic.Dictionary<System.Int32,System.Int32> mInstructionDictionary; // 0x0240
        uint8_t pad_0241[0x7]; // 0x0241
        System.Collections.Generic.Dictionary<System.Int32,System.Int32> mStateParentLookup; // 0x0248
        uint8_t pad_0249[0x7]; // 0x0249
        System.Collections.Generic.List<UnityEngine.AnimatorClipInfo> m_clipInfoList; // 0x0250
    
        // Methods
        Il2CppString* get_Description();  // RVA: 0xF6F060
        ICinemachineCamera* get_LiveChild();  // RVA: 0x97A0F0
        void set_LiveChild(ICinemachineCamera* value);  // RVA: 0x97A130
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF6DD00
        CameraState get_State();  // RVA: 0xF6F1A0
        Transform* get_LookAt();  // RVA: 0xF46170
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0xF46150
        void set_Follow(Transform* value);  // RVA: 0x58CC10
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF6E6E0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF6D3B0
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF6E7C0
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF6D5E0
        void OnEnable();  // RVA: 0xF6E310
        void OnDisable();  // RVA: 0xF6E1E0
        void OnTransformChildrenChanged();  // RVA: 0xF6DCC0
        void OnGuiHandler();  // RVA: 0xF6E560
        CinemachineVirtualCameraBase[][] get_ChildCameras();  // RVA: 0xF6F040
        bool get_IsBlending();  // RVA: 0xF6F190
        CinemachineBlend* get_ActiveBlend();  // RVA: 0xF6F030
        static int32_t CreateFakeHash(int32_t parentHash, AnimationClip* clip);  // RVA: 0xF6D330
        int32_t LookupFakeHash(int32_t parentHash, AnimationClip* clip);  // RVA: 0xF6DF10
        void InvalidateListOfChildren();  // RVA: 0xF6DCC0
        void UpdateListOfChildren();  // RVA: 0xF6E890
        void ValidateInstructions();  // RVA: 0xF6EA70
        CinemachineVirtualCameraBase* ChooseCurrentCamera();  // RVA: 0xF6CCB0
        int32_t GetClipHash(int32_t hash, System.Collections.Generic.List<UnityEngine.AnimatorClipInfo> clips);  // RVA: 0xF6D4A0
        CinemachineBlendDefinition LookupBlend(ICinemachineCamera* fromKey, ICinemachineCamera* toKey);  // RVA: 0xF6DD30
        void .ctor();  // RVA: 0xF6EE10
    };

} // namespace Cinemachine

// Namespace: <global>
struct FillStrategy
{
public:
    // Static fields
    // static FillStrategy BestFit;
    // static FillStrategy CropImageToFit;
    // static FillStrategy StretchToFit;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class CanvasInfo
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameObject* mCanvas; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Canvas* mCanvasComponent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CinemachineBrain* mCanvasParent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* mViewport; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RawImage* mRawImage; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
struct StoryboardRenderMode
{
public:
    // Static fields
    // static StoryboardRenderMode ScreenSpaceOverlay;
    // static StoryboardRenderMode ScreenSpaceCamera;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineStoryboard : public CinemachineExtension
    {
    public:
        // Static fields
        // static bool s_StoryboardGlobalMute;
    
        uint8_t pad_0000[0x30]; // 0x0000
        bool m_ShowImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Texture* m_Image; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        FillStrategy m_Aspect; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_Alpha; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Vector2 m_Center; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector3 m_Rotation; // 0x0050
        uint8_t pad_0051[0xB]; // 0x0051
        Vector2 m_Scale; // 0x005C
        uint8_t pad_005D[0x7]; // 0x005D
        bool m_SyncScale; // 0x0064
        bool m_MuteCamera; // 0x0065
        uint8_t pad_0066[0x2]; // 0x0066
        float m_SplitView; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        StoryboardRenderMode m_RenderMode; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t m_SortingOrder; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float m_PlaneDistance; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        System.Collections.Generic.List<Cinemachine.CinemachineStoryboard.CanvasInfo> mCanvasInfo; // 0x0078
    
        // Methods
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF70A90
        void UpdateRenderCanvas();  // RVA: 0xF70EC0
        void ConnectToVcam(bool connect);  // RVA: 0xF6F410
        Il2CppString* get_CanvasName();  // RVA: 0xF711E0
        void CameraUpdatedCallback(CinemachineBrain* brain);  // RVA: 0xF6F240
        CanvasInfo* LocateMyCanvas(CinemachineBrain* parent, bool createIfNotFound);  // RVA: 0xF6FE40
        void CreateCanvas(CanvasInfo* ci);  // RVA: 0xF6F580
        void DestroyCanvas();  // RVA: 0xF6FAD0
        void PlaceImage(CanvasInfo* ci, float alpha);  // RVA: 0xF702E0
        static void StaticBlendingHandler(CinemachineBrain* brain);  // RVA: 0xF70BA0
        static void InitializeModule();  // RVA: 0xF6FD20
        void .ctor();  // RVA: 0xF71090
    };

    // Namespace: Cinemachine
    class ICinemachineTargetGroup
    {
    public:
    
        // Methods
        Transform* get_Transform();  // RVA: 0x26EAF0
        Bounds get_BoundingBox();
        BoundingSphere get_Sphere();
        bool get_IsEmpty();  // RVA: 0x26F7B0
        Bounds GetViewSpaceBoundingBox(Matrix4x4 observer);
        void GetViewSpaceAngularBounds(Matrix4x4 observer, Vector2 minAngles, Vector2 maxAngles, Vector2 zRange);
    };

} // namespace Cinemachine

// Namespace: <global>
struct Target
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Transform* target; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float weight; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float radius; // 0x001C
};

// Namespace: <global>
struct PositionMode
{
public:
    // Static fields
    // static PositionMode GroupCenter;
    // static PositionMode GroupAverage;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct RotationMode
{
public:
    // Static fields
    // static RotationMode Manual;
    // static RotationMode GroupAverage;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct UpdateMethod
{
public:
    // Static fields
    // static UpdateMethod Update;
    // static UpdateMethod FixedUpdate;
    // static UpdateMethod LateUpdate;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineTargetGroup : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        PositionMode m_PositionMode; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        RotationMode m_RotationMode; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        UpdateMethod m_UpdateMethod; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Target[][] m_Targets; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float m_MaxWeight; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_WeightSum; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Vector3 m_AveragePos; // 0x0040
        uint8_t pad_0041[0xB]; // 0x0041
        Bounds m_BoundingBox; // 0x004C
        uint8_t pad_004D[0x17]; // 0x004D
        BoundingSphere m_BoundingSphere; // 0x0064
        uint8_t pad_0065[0xF]; // 0x0065
        int32_t m_LastUpdateFrame; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        System.Collections.Generic.List<System.Int32> m_ValidMembers; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<System.Boolean> m_MemberValidity; // 0x0080
    
        // Methods
        void OnValidate();  // RVA: 0xF73AF0
        void Reset();  // RVA: 0xF73CF0
        Transform* get_Transform();  // RVA: 0xF74490
        Bounds get_BoundingBox();  // RVA: 0xF74310
        void set_BoundingBox(Bounds value);  // RVA: 0xF744A0
        BoundingSphere get_Sphere();  // RVA: 0xF74440
        void set_Sphere(BoundingSphere value);  // RVA: 0xF744C0
        bool get_IsEmpty();  // RVA: 0xF743D0
        void AddMember(Transform* t, float weight, float radius);  // RVA: 0xF71250
        void RemoveMember(Transform* t);  // RVA: 0xF73B90
        int32_t FindMember(Transform* t);  // RVA: 0xF725A0
        BoundingSphere GetWeightedBoundsForMember(int32_t index);  // RVA: 0xF73980
        Bounds GetViewSpaceBoundingBox(Matrix4x4 observer);  // RVA: 0xF732B0
        bool get_CachedCountIsValid();  // RVA: 0xF74370
        bool IndexIsValid(int32_t index);  // RVA: 0xF73AC0
        static BoundingSphere WeightedMemberBoundsForValidMember(Target t, Vector3 avgPos, float maxWeight);  // RVA: 0xF740B0
        void DoUpdate();  // RVA: 0xF72290
        void UpdateMemberValidity();  // RVA: 0xF73D50
        Vector3 CalculateAveragePosition();  // RVA: 0xF71810
        Bounds CalculateBoundingBox();  // RVA: 0xF71A00
        BoundingSphere CalculateBoundingSphere();  // RVA: 0xF71EE0
        Quaternion CalculateAverageOrientation();  // RVA: 0xF713A0
        void FixedUpdate();  // RVA: 0xF72670
        void Update();  // RVA: 0xF74050
        void LateUpdate();  // RVA: 0xF73AE0
        void GetViewSpaceAngularBounds(Matrix4x4 observer, Vector2 minAngles, Vector2 maxAngles, Vector2 zRange);  // RVA: 0xF72680
        void .ctor();  // RVA: 0xF74210
    };

} // namespace Cinemachine

// Namespace: <global>
class CreatePipelineDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF5DBB0
    Transform* Invoke(CinemachineVirtualCamera* vcam, Il2CppString* name, CinemachineComponentBase[][] copyFrom);  // RVA: 0xF5DB90
    IAsyncResult* BeginInvoke(CinemachineVirtualCamera* vcam, Il2CppString* name, CinemachineComponentBase[][] copyFrom, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x801D60
    Transform* EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

// Namespace: <global>
class DestroyPipelineDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x4166D0
    void Invoke(GameObject* pipeline);  // RVA: 0x416250
    IAsyncResult* BeginInvoke(GameObject* pipeline, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x453BA0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<Cinemachine.CinemachineComponentBase> <>9__37_0;
    // static System.Func<Cinemachine.CinemachineComponentBase,System.Boolean> <>9__46_0;


    // Methods
    static void .cctor();  // RVA: 0xF780C0
    void .ctor();  // RVA: 0x427B90
    int32_t <UpdateComponentPipeline>b__37_0(CinemachineComponentBase* c1, CinemachineComponentBase* c2);  // RVA: 0xF77F60
    bool <RequiresUserInput>b__46_0(CinemachineComponentBase* c);  // RVA: 0xF77EE0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineVirtualCamera : public CinemachineVirtualCameraBase
    {
    public:
        // Static fields
        // static Il2CppString* PipelineName;
        // static CreatePipelineDelegate* CreatePipelineOverride;
        // static DestroyPipelineDelegate* DestroyPipelineOverride;
    
        uint8_t pad_0000[0xA8]; // 0x0000
        Transform* m_LookAt; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Transform* m_Follow; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        LensSettings m_Lens; // 0x00B8
        uint8_t pad_00B9[0x37]; // 0x00B9
        TransitionParams m_Transitions; // 0x00F0
        uint8_t pad_00F1[0xF]; // 0x00F1
        BlendHint m_LegacyBlendHint; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        CameraState m_State; // 0x0108
        uint8_t pad_0109[0xE7]; // 0x0109
        CinemachineComponentBase[][] m_ComponentPipeline; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        Transform* m_ComponentOwner; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Transform* mCachedLookAtTarget; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        CinemachineVirtualCameraBase* mCachedLookAtTargetVcam; // 0x0208
    
        // Methods
        CameraState get_State();  // RVA: 0xF6F1A0
        Transform* get_LookAt();  // RVA: 0xF46170
        void set_LookAt(Transform* value);  // RVA: 0x58CBE0
        Transform* get_Follow();  // RVA: 0xF46150
        void set_Follow(Transform* value);  // RVA: 0x58CC10
        float GetMaxDampTime();  // RVA: 0xF75560
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF75610
        void OnEnable();  // RVA: 0xF75CC0
        void OnDestroy();  // RVA: 0xF75A00
        void OnValidate();  // RVA: 0xF76760
        void OnTransformChildrenChanged();  // RVA: 0xF75910
        void Reset();  // RVA: 0xF76920
        void DestroyPipeline();  // RVA: 0xF74D80
        Transform* CreatePipeline(CinemachineVirtualCamera* copyFrom);  // RVA: 0xF74B90
        void InvalidateComponentPipeline();  // RVA: 0xF75910
        Transform* GetComponentOwner();  // RVA: 0xF75520
        CinemachineComponentBase[][] GetComponentPipeline();  // RVA: 0xF75540
        CinemachineComponentBase* GetCinemachineComponent(Stage stage);  // RVA: 0xF75490
        T GetCinemachineComponent();  // RVA: 0x3506D0
        T AddCinemachineComponent();  // RVA: 0x3506D0
        void DestroyCinemachineComponent();  // RVA: 0x26DD20
        void UpdateComponentPipeline();  // RVA: 0xF76A30
        static void SetFlagsForHiddenChild(GameObject* child);  // RVA: 0xF76940
        CameraState CalculateNewState(Vector3 worldUp, float deltaTime);  // RVA: 0xF744D0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF760B0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF75310
        void SetStateRawPosition(Vector3 pos);  // RVA: 0xF76A10
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF762C0
        bool RequiresUserInput();  // RVA: 0xF767E0
        void OnBeforeSerialize();  // RVA: 0xF75930
        void .ctor();  // RVA: 0xF76F70
    };

    // Namespace: Cinemachine
    class Cinemachine3rdPersonFollow : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        Vector3 Damping; // 0x0028
        uint8_t pad_0029[0xB]; // 0x0029
        Vector3 ShoulderOffset; // 0x0034
        uint8_t pad_0035[0xB]; // 0x0035
        float VerticalArmLength; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float CameraSide; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float CameraDistance; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        LayerMask CameraCollisionFilter; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        Il2CppString* IgnoreTag; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float CameraRadius; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float DampingIntoCollision; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float DampingFromCollision; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        Vector3 m_PreviousFollowTargetPosition; // 0x0064
        uint8_t pad_0065[0xB]; // 0x0065
        Vector3 m_DampingCorrection; // 0x0070
        uint8_t pad_0071[0xB]; // 0x0071
        float m_CamPosCollisionCorrection; // 0x007C
    
        // Methods
        void OnValidate();  // RVA: 0xF5F980
        void Reset();  // RVA: 0xF5FF60
        void OnDestroy();  // RVA: 0xF5F860
        bool get_IsValid();  // RVA: 0xF603D0
        Stage get_Stage();  // RVA: 0x873070
        float GetMaxDampTime();  // RVA: 0xF5F3E0
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF5F7D0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF5F8A0
        void PositionCamera(CameraState curState, float deltaTime);  // RVA: 0xF5FA00
        void GetRigPositions(Vector3 root, Vector3 shoulder, Vector3 hand);  // RVA: 0xF5F5B0
        static Quaternion GetHeading(Quaternion targetRot, Vector3 up);  // RVA: 0xF5F130
        void GetRawRigPositions(Vector3 root, Quaternion targetRot, Quaternion heading, Vector3 shoulder, Vector3 hand);  // RVA: 0xF5F410
        Vector3 ResolveCollisions(Vector3 root, Vector3 tip, float deltaTime, float cameraRadius, float collisionCorrection);  // RVA: 0xF5FFE0
        void .ctor();  // RVA: 0xF60390
    };

    // Namespace: Cinemachine
    class CinemachineBasicMultiChannelPerlin : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        NoiseSettings* m_NoiseProfile; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Vector3 m_PivotOffset; // 0x0030
        uint8_t pad_0031[0xB]; // 0x0031
        float m_AmplitudeGain; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_FrequencyGain; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool mInitialized; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float mNoiseTime; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        Vector3 mNoiseOffsets; // 0x004C
    
        // Methods
        bool get_IsValid();  // RVA: 0xF612E0
        Stage get_Stage();  // RVA: 0x9F6770
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF605A0
        void ReSeed();  // RVA: 0xF611B0
        void Initialize();  // RVA: 0xF60440
        void .ctor();  // RVA: 0xF61240
    };

} // namespace Cinemachine

// Namespace: <global>
struct FovCache
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rect mFovSoftGuideRect; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    Rect mFovHardGuideRect; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    float mFovH; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mFov; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float mOrthoSizeOverDistance; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float mAspect; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Rect mSoftGuideRect; // 0x0040
    uint8_t pad_0041[0xF]; // 0x0041
    Rect mHardGuideRect; // 0x0050

    // Methods
    void UpdateCache(LensSettings lens, Rect softGuide, Rect hardGuide, float targetDistance);  // RVA: 0xF77A80
    Rect ScreenToFOV(Rect rScreen, float fov, float fovH, float aspect);  // RVA: 0xF77150
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineComposer : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        Vector3 m_TrackedObjectOffset; // 0x0028
        uint8_t pad_0029[0xB]; // 0x0029
        float m_LookaheadTime; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_LookaheadSmoothing; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool m_LookaheadIgnoreY; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_HorizontalDamping; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_VerticalDamping; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float m_ScreenX; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float m_ScreenY; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float m_DeadZoneWidth; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_DeadZoneHeight; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float m_SoftZoneWidth; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float m_SoftZoneHeight; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float m_BiasX; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float m_BiasY; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        bool m_CenterOnActivate; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Vector3 <TrackedPoint>k__BackingField; // 0x006C
        uint8_t pad_006D[0xB]; // 0x006D
        Vector3 m_CameraPosPrevFrame; // 0x0078
        uint8_t pad_0079[0xB]; // 0x0079
        Vector3 m_LookAtPrevFrame; // 0x0084
        uint8_t pad_0085[0xB]; // 0x0085
        Vector2 m_ScreenOffsetPrevFrame; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Quaternion m_CameraOrientationPrevFrame; // 0x0098
        uint8_t pad_0099[0xF]; // 0x0099
        PositionPredictor* m_Predictor; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        FovCache mCache; // 0x00B0
    
        // Methods
        bool get_IsValid();  // RVA: 0xF62DB0
        Stage get_Stage();  // RVA: 0x4130E0
        Vector3 get_TrackedPoint();  // RVA: 0x58CBB0
        void set_TrackedPoint(Vector3 value);  // RVA: 0x58CBD0
        Vector3 GetLookAtPointAndSetTrackedPoint(Vector3 lookAt, Vector3 up, float deltaTime);  // RVA: 0xF61590
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF62410
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF61520
        float GetMaxDampTime();  // RVA: 0xF61850
        void PrePipelineMutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF62590
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF61860
        Rect get_SoftGuideRect();  // RVA: 0xF62E20
        void set_SoftGuideRect(Rect value);  // RVA: 0xF62F20
        Rect get_HardGuideRect();  // RVA: 0xF62C90
        void set_HardGuideRect(Rect value);  // RVA: 0xF62E70
        void RotateToScreenBounds(CameraState state, Rect screenRect, Vector3 trackedPoint, Quaternion rigOrientation, float fov, float fovH, float deltaTime);  // RVA: 0xF62680
        bool ClampVerticalBounds(Rect r, Vector3 dir, Vector3 up, float fov);  // RVA: 0xF61350
        void .ctor();  // RVA: 0xF62AC0
    };

} // namespace Cinemachine

// Namespace: <global>
struct FramingMode
{
public:
    // Static fields
    // static FramingMode Horizontal;
    // static FramingMode Vertical;
    // static FramingMode HorizontalAndVertical;
    // static FramingMode None;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AdjustmentMode
{
public:
    // Static fields
    // static AdjustmentMode ZoomOnly;
    // static AdjustmentMode DollyOnly;
    // static AdjustmentMode DollyThenZoom;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineFramingTransposer : public CinemachineComponentBase
    {
    public:
        // Static fields
        // static float kMinimumCameraDistance;
        // static float kMinimumGroupSize;
    
        uint8_t pad_0000[0x28]; // 0x0000
        Vector3 m_TrackedObjectOffset; // 0x0028
        uint8_t pad_0029[0xB]; // 0x0029
        float m_LookaheadTime; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_LookaheadSmoothing; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool m_LookaheadIgnoreY; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_XDamping; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_YDamping; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float m_ZDamping; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        bool m_TargetMovementOnly; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float m_ScreenX; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_ScreenY; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float m_CameraDistance; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float m_DeadZoneWidth; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float m_DeadZoneHeight; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float m_DeadZoneDepth; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        bool m_UnlimitedSoftZone; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float m_SoftZoneWidth; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float m_SoftZoneHeight; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float m_BiasX; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float m_BiasY; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        bool m_CenterOnActivate; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        FramingMode m_GroupFramingMode; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        AdjustmentMode m_AdjustmentMode; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float m_GroupFramingSize; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float m_MaxDollyIn; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float m_MaxDollyOut; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float m_MinimumDistance; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        float m_MaximumDistance; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float m_MinimumFOV; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float m_MaximumFOV; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float m_MinimumOrthoSize; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        float m_MaximumOrthoSize; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        Vector3 m_PreviousCameraPosition; // 0x00AC
        uint8_t pad_00AD[0xB]; // 0x00AD
        PositionPredictor* m_Predictor; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Vector3 <TrackedPoint>k__BackingField; // 0x00C0
        uint8_t pad_00C1[0xB]; // 0x00C1
        bool m_InheritingPosition; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float m_prevFOV; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        Quaternion m_prevRotation; // 0x00D4
        uint8_t pad_00D5[0xF]; // 0x00D5
        Bounds <LastBounds>k__BackingField; // 0x00E4
        uint8_t pad_00E5[0x17]; // 0x00E5
        Matrix4x4 <LastBoundsMatrix>k__BackingField; // 0x00FC
    
        // Methods
        Rect get_SoftGuideRect();  // RVA: 0xF660F0
        void set_SoftGuideRect(Rect value);  // RVA: 0xF66260
        Rect get_HardGuideRect();  // RVA: 0xF65F10
        void set_HardGuideRect(Rect value);  // RVA: 0xF66160
        void OnValidate();  // RVA: 0xF65960
        bool get_IsValid();  // RVA: 0xF66030
        Stage get_Stage();  // RVA: 0x873070
        bool get_BodyAppliesAfterAim();  // RVA: 0x53A800
        Vector3 get_TrackedPoint();  // RVA: 0xF66140
        void set_TrackedPoint(Vector3 value);  // RVA: 0xF66370
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF655F0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF63620
        float GetMaxDampTime();  // RVA: 0xF636A0
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime, TransitionParams transitionParams);  // RVA: 0xF65720
        Rect ScreenToOrtho(Rect rScreen, float orthoSize, float aspect);  // RVA: 0xF65C30
        Vector3 OrthoOffsetToScreenBounds(Vector3 targetPos2D, Rect screenRect);  // RVA: 0xF65A50
        Bounds get_LastBounds();  // RVA: 0xF660D0
        void set_LastBounds(Bounds value);  // RVA: 0xF66240
        Matrix4x4 get_LastBoundsMatrix();  // RVA: 0xF660A0
        void set_LastBoundsMatrix(Matrix4x4 value);  // RVA: 0xF66210
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF640A0
        float GetTargetHeight(Vector2 boundsSize);  // RVA: 0xF63E90
        Vector3 ComputeGroupBounds(ICinemachineTargetGroup* group, CameraState curState);  // RVA: 0xF63030
        static Bounds GetScreenSpaceGroupBoundingBox(ICinemachineTargetGroup* group, Vector3 pos, Quaternion orientation);  // RVA: 0xF636C0
        void .ctor();  // RVA: 0xF65DC0
    };

} // namespace Cinemachine

// Namespace: <global>
struct FramingMode
{
public:
    // Static fields
    // static FramingMode Horizontal;
    // static FramingMode Vertical;
    // static FramingMode HorizontalAndVertical;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AdjustmentMode
{
public:
    // Static fields
    // static AdjustmentMode ZoomOnly;
    // static AdjustmentMode DollyOnly;
    // static AdjustmentMode DollyThenZoom;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineGroupComposer : public CinemachineComposer
    {
    public:
        uint8_t pad_0000[0x100]; // 0x0000
        float m_GroupFramingSize; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        FramingMode m_FramingMode; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        float m_FrameDamping; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        AdjustmentMode m_AdjustmentMode; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float m_MaxDollyIn; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        float m_MaxDollyOut; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        float m_MinimumDistance; // 0x0118
        uint8_t pad_0119[0x3]; // 0x0119
        float m_MaximumDistance; // 0x011C
        uint8_t pad_011D[0x3]; // 0x011D
        float m_MinimumFOV; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float m_MaximumFOV; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        float m_MinimumOrthoSize; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        float m_MaximumOrthoSize; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        float m_prevFramingDistance; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        float m_prevFOV; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        Bounds <LastBounds>k__BackingField; // 0x0138
        uint8_t pad_0139[0x17]; // 0x0139
        Matrix4x4 <LastBoundsMatrix>k__BackingField; // 0x0150
    
        // Methods
        void OnValidate();  // RVA: 0xF67970
        Bounds get_LastBounds();  // RVA: 0xF67CB0
        void set_LastBounds(Bounds value);  // RVA: 0xF67D00
        Matrix4x4 get_LastBoundsMatrix();  // RVA: 0xF67C80
        void set_LastBoundsMatrix(Matrix4x4 value);  // RVA: 0xF67CD0
        float GetMaxDampTime();  // RVA: 0xF66390
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF669F0
        float GetTargetHeight(Vector2 boundsSize);  // RVA: 0xF667A0
        static Bounds GetScreenSpaceGroupBoundingBox(ICinemachineTargetGroup* group, Matrix4x4 observer, Vector3 newFwd);  // RVA: 0xF663B0
        void .ctor();  // RVA: 0xF67A40
    };

    // Namespace: Cinemachine
    class CinemachineHardLockToTarget : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        float m_Damping; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Vector3 m_PreviousTargetPosition; // 0x002C
    
        // Methods
        bool get_IsValid();  // RVA: 0xF67E80
        Stage get_Stage();  // RVA: 0x873070
        float GetMaxDampTime();  // RVA: 0x6B6E20
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF67D20
        void .ctor();  // RVA: 0x697550
    };

    // Namespace: Cinemachine
    class CinemachineHardLookAt : public CinemachineComponentBase
    {
    public:
    
        // Methods
        bool get_IsValid();  // RVA: 0xF681C0
        Stage get_Stage();  // RVA: 0x4130E0
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF67EF0
        void .ctor();  // RVA: 0x697550
    };

} // namespace Cinemachine

// Namespace: <global>
struct HeadingDefinition
{
public:
    // Static fields
    // static HeadingDefinition PositionDelta;
    // static HeadingDefinition Velocity;
    // static HeadingDefinition TargetForward;
    // static HeadingDefinition WorldForward;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct Heading
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    HeadingDefinition m_Definition; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t m_VelocityFilterStrength; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float m_Bias; // 0x0018

    // Methods
    void .ctor(HeadingDefinition def, int32_t filterStrength, float bias);  // RVA: 0xF77ED0
};

// Namespace: <global>
class UpdateHeadingDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF782B0
    float Invoke(CinemachineOrbitalTransposer* orbital, float deltaTime, Vector3 up);  // RVA: 0xF78270
    IAsyncResult* BeginInvoke(CinemachineOrbitalTransposer* orbital, float deltaTime, Vector3 up, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0xF781A0
    float EndInvoke(IAsyncResult* result);  // RVA: 0xF78240
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static UpdateHeadingDelegate* <>9__30_0;


    // Methods
    static void .cctor();  // RVA: 0xF78130
    void .ctor();  // RVA: 0x427B90
    float <.ctor>b__30_0(CinemachineOrbitalTransposer* orbital, float deltaTime, Vector3 up);  // RVA: 0xF77FC0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineOrbitalTransposer : public CinemachineTransposer
    {
    public:
        uint8_t pad_0000[0xA0]; // 0x0000
        Heading m_Heading; // 0x00A0
        uint8_t pad_00A1[0xB]; // 0x00A1
        Recentering m_RecenterToTargetHeading; // 0x00AC
        uint8_t pad_00AD[0x23]; // 0x00AD
        AxisState m_XAxis; // 0x00D0
        uint8_t pad_00D1[0x6F]; // 0x00D1
        float m_LegacyRadius; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        float m_LegacyHeightOffset; // 0x0144
        uint8_t pad_0145[0x3]; // 0x0145
        float m_LegacyHeadingBias; // 0x0148
        uint8_t pad_0149[0x3]; // 0x0149
        bool m_HeadingIsSlave; // 0x014C
        uint8_t pad_014D[0x3]; // 0x014D
        UpdateHeadingDelegate* HeadingUpdater; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        Vector3 m_LastTargetPosition; // 0x0158
        uint8_t pad_0159[0xF]; // 0x0159
        HeadingTracker* mHeadingTracker; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Rigidbody* m_TargetRigidBody; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Transform* m_PreviousTarget; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector3 m_LastCameraPosition; // 0x0180
        uint8_t pad_0181[0xB]; // 0x0181
        float m_LastHeading; // 0x018C
    
        // Methods
        void OnValidate();  // RVA: 0xF69CA0
        float UpdateHeading(float deltaTime, Vector3 up, AxisState axis);  // RVA: 0xF69DF0
        float UpdateHeading(float deltaTime, Vector3 up, AxisState axis, Recentering recentering, bool isLive);  // RVA: 0xF69E30
        void OnEnable();  // RVA: 0xF69850
        void UpdateInputAxisProvider();  // RVA: 0xF69F80
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF69970
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF68230
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime, TransitionParams transitionParams);  // RVA: 0xF69AA0
        float GetAxisClosestValue(Vector3 cameraPos, Vector3 up);  // RVA: 0xF68390
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF69040
        Vector3 GetTargetCameraPosition(Vector3 worldUp);  // RVA: 0xF688B0
        bool get_RequiresUserInput();  // RVA: 0x53A800
        float GetTargetHeading(float currentHeading, Quaternion targetOrientation);  // RVA: 0xF68BD0
        void .ctor();  // RVA: 0xF6A050
    };

} // namespace Cinemachine

// Namespace: <global>
struct RecenterTargetMode
{
public:
    // Static fields
    // static RecenterTargetMode None;
    // static RecenterTargetMode FollowTargetForward;
    // static RecenterTargetMode LookAtTargetForward;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachinePOV : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        RecenterTargetMode m_RecenterTarget; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AxisState m_VerticalAxis; // 0x0030
        uint8_t pad_0031[0x6F]; // 0x0031
        Recentering m_VerticalRecentering; // 0x00A0
        uint8_t pad_00A1[0x1F]; // 0x00A1
        AxisState m_HorizontalAxis; // 0x00C0
        uint8_t pad_00C1[0x6F]; // 0x00C1
        Recentering m_HorizontalRecentering; // 0x0130
        uint8_t pad_0131[0x1F]; // 0x0131
        bool m_ApplyBeforeBody; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        Quaternion m_PreviousCameraRotation; // 0x0154
    
        // Methods
        bool get_IsValid();  // RVA: 0xF6BA90
        Stage get_Stage();  // RVA: 0x4130E0
        void OnValidate();  // RVA: 0xF6B190
        void OnEnable();  // RVA: 0xF6AEC0
        void UpdateInputAxisProvider();  // RVA: 0xF6AEC0
        void PrePipelineMutateCameraState(CameraState state, float deltaTime);  // RVA: 0x4160A0
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF6A7C0
        Vector2 GetRecenterTarget();  // RVA: 0xF6A490
        static float NormalizeAngle(float angle);  // RVA: 0xF6AE90
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF6A470
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime, TransitionParams transitionParams);  // RVA: 0xF6AFA0
        bool get_RequiresUserInput();  // RVA: 0x53A800
        void SetAxesForRotation(Quaternion targetRot);  // RVA: 0xF6B1E0
        void .ctor();  // RVA: 0xF6B800
    };

    // Namespace: Cinemachine
    class CinemachineSameAsFollowTarget : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        float m_Damping; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Quaternion m_PreviousReferenceOrientation; // 0x002C
    
        // Methods
        bool get_IsValid();  // RVA: 0xF6BE20
        Stage get_Stage();  // RVA: 0x4130E0
        float GetMaxDampTime();  // RVA: 0x6B6E20
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF6BC60
        void .ctor();  // RVA: 0xF6BDD0
    };

} // namespace Cinemachine

// Namespace: <global>
struct CameraUpMode
{
public:
    // Static fields
    // static CameraUpMode Default;
    // static CameraUpMode Path;
    // static CameraUpMode PathNoRoll;
    // static CameraUpMode FollowTarget;
    // static CameraUpMode FollowTargetNoRoll;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AutoDolly
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool m_Enabled; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float m_PositionOffset; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t m_SearchRadius; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t m_SearchResolution; // 0x001C

    // Methods
    void .ctor(bool enabled, float positionOffset, int32_t searchRadius, int32_t stepsPerSegment);  // RVA: 0xF789A0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineTrackedDolly : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        CinemachinePathBase* m_Path; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float m_PathPosition; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        PositionUnits m_PositionUnits; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Vector3 m_PathOffset; // 0x0038
        uint8_t pad_0039[0xB]; // 0x0039
        float m_XDamping; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float m_YDamping; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float m_ZDamping; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        CameraUpMode m_CameraUp; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_PitchDamping; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float m_YawDamping; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float m_RollDamping; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        AutoDolly m_AutoDolly; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        float m_PreviousPathPosition; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        Quaternion m_PreviousOrientation; // 0x0074
        uint8_t pad_0075[0xF]; // 0x0075
        Vector3 m_PreviousCameraPosition; // 0x0084
    
        // Methods
        bool get_IsValid();  // RVA: 0xF883C0
        Stage get_Stage();  // RVA: 0x873070
        float GetMaxDampTime();  // RVA: 0xF872F0
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF873A0
        Quaternion GetCameraOrientationAtPathPoint(Quaternion pathOrientation, Vector3 up);  // RVA: 0xF87010
        Vector3 get_AngularDamping();  // RVA: 0xF88320
        void .ctor();  // RVA: 0xF88220
    };

} // namespace Cinemachine

// Namespace: <global>
struct BindingMode
{
public:
    // Static fields
    // static BindingMode LockToTargetOnAssign;
    // static BindingMode LockToTargetWithWorldUp;
    // static BindingMode LockToTargetNoRoll;
    // static BindingMode LockToTarget;
    // static BindingMode WorldSpace;
    // static BindingMode SimpleFollowWithWorldUp;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AngularDampingMode
{
public:
    // Static fields
    // static AngularDampingMode Euler;
    // static AngularDampingMode Quaternion;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineTransposer : public CinemachineComponentBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        BindingMode m_BindingMode; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Vector3 m_FollowOffset; // 0x002C
        uint8_t pad_002D[0xB]; // 0x002D
        float m_XDamping; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_YDamping; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_ZDamping; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        AngularDampingMode m_AngularDampingMode; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float m_PitchDamping; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float m_YawDamping; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float m_RollDamping; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float m_AngularDamping; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        bool <HideOffsetInInspector>k__BackingField; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        Vector3 m_PreviousTargetPosition; // 0x005C
        uint8_t pad_005D[0xB]; // 0x005D
        Quaternion m_PreviousReferenceOrientation; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        Quaternion m_targetOrientationOnAssign; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        Vector3 m_PreviousOffset; // 0x0088
        uint8_t pad_0089[0xF]; // 0x0089
        Transform* m_previousTarget; // 0x0098
    
        // Methods
        void OnValidate();  // RVA: 0xF897D0
        bool get_HideOffsetInInspector();  // RVA: 0x45A6E0
        void set_HideOffsetInInspector(bool value);  // RVA: 0xB26B70
        Vector3 get_EffectiveOffset();  // RVA: 0xF8A6D0
        bool get_IsValid();  // RVA: 0xF8A710
        Stage get_Stage();  // RVA: 0x873070
        float GetMaxDampTime();  // RVA: 0xF885E0
        void MutateCameraState(CameraState curState, float deltaTime);  // RVA: 0xF892F0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF89710
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF88430
        void InitPrevFrameStateInfo(CameraState curState, float deltaTime);  // RVA: 0xF89180
        void TrackTarget(float deltaTime, Vector3 up, Vector3 desiredCameraOffset, Vector3 outTargetPosition, Quaternion outTargetOrient);  // RVA: 0xF89820
        Vector3 GetOffsetForMinimumTargetDistance(Vector3 dampedTargetPos, Vector3 cameraOffset, Vector3 cameraFwd, Vector3 up, Vector3 actualTargetPos);  // RVA: 0xF88670
        Vector3 get_Damping();  // RVA: 0xF8A690
        Vector3 get_AngularDamping();  // RVA: 0xF8A5C0
        Vector3 GetTargetCameraPosition(Vector3 worldUp);  // RVA: 0xF89010
        Quaternion GetReferenceOrientation(Vector3 worldUp);  // RVA: 0xF88B40
        void .ctor();  // RVA: 0xF8A490
    };

} // namespace Cinemachine

// Namespace: <global>
struct SpeedMode
{
public:
    // Static fields
    // static SpeedMode MaxSpeed;
    // static SpeedMode InputValueGain;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class IInputAxisProvider
{
public:

    // Methods
    float GetAxisValue(int32_t axis);
};

// Namespace: <global>
struct Recentering
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool m_enabled; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float m_WaitTime; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float m_RecenteringTime; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float m_LastUpdateTime; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mLastAxisInputTime; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mRecenteringVelocity; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t m_LegacyHeadingDefinition; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t m_LegacyVelocityFilterStrength; // 0x002C

    // Methods
    void .ctor(bool enabled, float waitTime, float recenteringTime);  // RVA: 0xF90090
    void Validate();  // RVA: 0xF85B60
    void CopyStateFrom(Recentering other);  // RVA: 0xF8FE00
    void CancelRecentering();  // RVA: 0xF8FDD0
    void RecenterNow();  // RVA: 0xF90080
    void DoRecentering(AxisState axis, float deltaTime, float recenterTarget);  // RVA: 0xF8FE20
    bool LegacyUpgrade(int32_t heading, int32_t velocityFilter);  // RVA: 0xF90050
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    struct AxisState
    {
    public:
        // Static fields
        // static float Epsilon;
    
        uint8_t pad_0000[0x10]; // 0x0000
        float Value; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        SpeedMode m_SpeedMode; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float m_MaxSpeed; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float m_AccelTime; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float m_DecelTime; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* m_InputAxisName; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float m_InputAxisValue; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool m_InvertInput; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_MinValue; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_MaxValue; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool m_Wrap; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        Recentering m_Recentering; // 0x0044
        uint8_t pad_0045[0x1F]; // 0x0045
        float m_CurrentSpeed; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float m_LastUpdateTime; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t m_LastUpdateFrame; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        IInputAxisProvider* m_InputAxisProvider; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        int32_t m_InputAxisIndex; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        bool <ValueRangeLocked>k__BackingField; // 0x007C
        bool <HasRecentering>k__BackingField; // 0x007D
    
        // Methods
        void .ctor(float minValue, float maxValue, bool wrap, bool rangeLocked, float maxSpeed, float accelTime, float decelTime, Il2CppString* name, bool invert);  // RVA: 0xF79350
        void Validate();  // RVA: 0xF792F0
        void Reset();  // RVA: 0xF78E20
        void SetInputAxisProvider(int32_t axis, IInputAxisProvider* provider);  // RVA: 0xF78E30
        bool get_HasInputProvider();  // RVA: 0x96CA10
        bool Update(float deltaTime);  // RVA: 0xF78E50
        float ClampValue(float v);  // RVA: 0xF78AC0
        bool MaxSpeedUpdate(float input, float deltaTime);  // RVA: 0xF78BE0
        float GetMaxSpeed();  // RVA: 0xF78B30
        bool get_ValueRangeLocked();  // RVA: 0xBF5BD0
        void set_ValueRangeLocked(bool value);  // RVA: 0xF79450
        bool get_HasRecentering();  // RVA: 0xBFAAC0
        void set_HasRecentering(bool value);  // RVA: 0xF79440
    };

} // namespace Cinemachine

// Namespace: <global>
struct BlendHintValue
{
public:
    // Static fields
    // static BlendHintValue Nothing;
    // static BlendHintValue NoPosition;
    // static BlendHintValue NoOrientation;
    // static BlendHintValue NoTransform;
    // static BlendHintValue SphericalPositionBlend;
    // static BlendHintValue CylindricalPositionBlend;
    // static BlendHintValue RadialAimBlend;
    // static BlendHintValue IgnoreLookAtTarget;
    // static BlendHintValue NoLens;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct CustomBlendable
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppObject* m_Custom; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float m_Weight; // 0x0018

    // Methods
    void .ctor(Il2CppObject* custom, float weight);  // RVA: 0xF8EB70
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    struct CameraState
    {
    public:
        // Static fields
        // static Vector3 kNoPoint;
    
        uint8_t pad_0000[0x10]; // 0x0000
        LensSettings Lens; // 0x0010
        uint8_t pad_0011[0x33]; // 0x0011
        Vector3 ReferenceUp; // 0x0044
        uint8_t pad_0045[0xB]; // 0x0045
        Vector3 ReferenceLookAt; // 0x0050
        uint8_t pad_0051[0xB]; // 0x0051
        Vector3 RawPosition; // 0x005C
        uint8_t pad_005D[0xB]; // 0x005D
        Quaternion RawOrientation; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        Vector3 PositionDampingBypass; // 0x0078
        uint8_t pad_0079[0xB]; // 0x0079
        float ShotQuality; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        Vector3 PositionCorrection; // 0x0088
        uint8_t pad_0089[0xB]; // 0x0089
        Quaternion OrientationCorrection; // 0x0094
        uint8_t pad_0095[0xF]; // 0x0095
        BlendHintValue BlendHint; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        CustomBlendable mCustom0; // 0x00A8
        uint8_t pad_00A9[0xF]; // 0x00A9
        CustomBlendable mCustom1; // 0x00B8
        uint8_t pad_00B9[0xF]; // 0x00B9
        CustomBlendable mCustom2; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        CustomBlendable mCustom3; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        System.Collections.Generic.List<Cinemachine.CameraState.CustomBlendable> m_CustomOverflow; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        int32_t <NumCustomBlendables>k__BackingField; // 0x00F0
    
        // Methods
        bool get_HasLookAt();  // RVA: 0xF80A10
        Vector3 get_CorrectedPosition();  // RVA: 0xF80510
        Quaternion get_CorrectedOrientation();  // RVA: 0xF803A0
        Vector3 get_FinalPosition();  // RVA: 0xF80510
        Quaternion get_FinalOrientation();  // RVA: 0xF807A0
        static CameraState get_Default();  // RVA: 0xF80560
        int32_t get_NumCustomBlendables();  // RVA: 0xF80A70
        void set_NumCustomBlendables(int32_t value);  // RVA: 0xF80A80
        CustomBlendable GetCustomBlendable(int32_t index);  // RVA: 0xF7BB90
        int32_t FindCustomBlendable(Il2CppObject* custom);  // RVA: 0xF7B970
        void AddCustomBlendable(CustomBlendable b);  // RVA: 0xF7B5F0
        static CameraState Lerp(CameraState stateA, CameraState stateB, float t);  // RVA: 0xF7C3D0
        static float InterpolateFOV(float fovA, float fovB, float dA, float dB, float t);  // RVA: 0xF7BC90
        static Vector3 ApplyPosBlendHint(Vector3 posA, BlendHintValue hintA, Vector3 posB, BlendHintValue hintB, Vector3 original, Vector3 blended);  // RVA: 0xF7B8A0
        static Quaternion ApplyRotBlendHint(Quaternion rotA, BlendHintValue hintA, Quaternion rotB, BlendHintValue hintB, Quaternion original, Quaternion blended);  // RVA: 0xF7B920
        Vector3 InterpolatePosition(Vector3 posA, Vector3 pivotA, Vector3 posB, Vector3 pivotB, float t);  // RVA: 0xF7BDE0
        static void .cctor();  // RVA: 0xF80350
    };

    // Namespace: Cinemachine
    class CinemachineBlend
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ICinemachineCamera* CamA; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        ICinemachineCamera* CamB; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        AnimationCurve* BlendCurve; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float TimeInBlend; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float Duration; // 0x002C
    
        // Methods
        float get_BlendWeight();  // RVA: 0xF814E0
        bool get_IsValid();  // RVA: 0xF81790
        bool get_IsComplete();  // RVA: 0xF81760
        Il2CppString* get_Description();  // RVA: 0xF81570
        bool Uses(ICinemachineCamera* cam);  // RVA: 0xF81310
        void .ctor(ICinemachineCamera* a, ICinemachineCamera* b, AnimationCurve* curve, float duration, float t);  // RVA: 0xF81450
        void UpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF81210
        CameraState get_State();  // RVA: 0xF81810
    };

} // namespace Cinemachine

// Namespace: <global>
struct Style
{
public:
    // Static fields
    // static Style Cut;
    // static Style EaseInOut;
    // static Style EaseIn;
    // static Style EaseOut;
    // static Style HardIn;
    // static Style HardOut;
    // static Style Linear;
    // static Style Custom;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    struct CinemachineBlendDefinition
    {
    public:
        // Static fields
        // static AnimationCurve[][] sStandardCurves;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Style m_Style; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float m_Time; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        AnimationCurve* m_CustomCurve; // 0x0018
    
        // Methods
        float get_BlendTime();  // RVA: 0xF81200
        void .ctor(Style style, float time);  // RVA: 0xF81120
        void CreateStandardCurves();  // RVA: 0xF80A90
        AnimationCurve* get_BlendCurve();  // RVA: 0xF81140
    };

    // Namespace: Cinemachine
    class StaticPointVirtualCamera
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* <Name>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t <Priority>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Transform* <LookAt>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* <Follow>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        CameraState <State>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(CameraState state, Il2CppString* name);  // RVA: 0xF917A0
        void SetState(CameraState state);  // RVA: 0xF7A5A0
        Il2CppString* get_Name();  // RVA: 0x42A330
        void set_Name(Il2CppString* value);  // RVA: 0x6C7CF0
        Il2CppString* get_Description();  // RVA: 0xF91880
        int32_t get_Priority();  // RVA: 0x8138D0
        void set_Priority(int32_t value);  // RVA: 0x814470
        Transform* get_LookAt();  // RVA: 0x4FA750
        void set_LookAt(Transform* value);  // RVA: 0x802170
        Transform* get_Follow();  // RVA: 0x42A080
        void set_Follow(Transform* value);  // RVA: 0x4C16F0
        CameraState get_State();  // RVA: 0xF7A1D0
        void set_State(CameraState value);  // RVA: 0xF7A5A0
        GameObject* get_VirtualCameraGameObject();  // RVA: 0x873070
        bool get_IsValid();  // RVA: 0x53A800
        ICinemachineCamera* get_ParentCamera();  // RVA: 0x873070
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0x42F7D0
        void UpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0x4160A0
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0x4160A0
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0x4160A0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0x4160A0
    };

    // Namespace: Cinemachine
    class BlendSourceVirtualCamera
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CinemachineBlend* <Blend>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t <Priority>k__BackingField; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Transform* <LookAt>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* <Follow>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        CameraState <State>k__BackingField; // 0x0030
    
        // Methods
        void .ctor(CinemachineBlend* blend);  // RVA: 0x52BE20
        CinemachineBlend* get_Blend();  // RVA: 0x42A330
        void set_Blend(CinemachineBlend* value);  // RVA: 0x6C7CF0
        Il2CppString* get_Name();  // RVA: 0xF7A570
        Il2CppString* get_Description();  // RVA: 0xF7A500
        int32_t get_Priority();  // RVA: 0x8138D0
        void set_Priority(int32_t value);  // RVA: 0x814470
        Transform* get_LookAt();  // RVA: 0x4FA750
        void set_LookAt(Transform* value);  // RVA: 0x802170
        Transform* get_Follow();  // RVA: 0x42A080
        void set_Follow(Transform* value);  // RVA: 0x4C16F0
        CameraState get_State();  // RVA: 0xF7A1D0
        void set_State(CameraState value);  // RVA: 0xF7A5A0
        GameObject* get_VirtualCameraGameObject();  // RVA: 0x873070
        bool get_IsValid();  // RVA: 0xF7A550
        ICinemachineCamera* get_ParentCamera();  // RVA: 0x873070
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0xF7A270
        CameraState CalculateNewState(float deltaTime);  // RVA: 0xF7A1D0
        void UpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF7A290
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0x4160A0
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0x4160A0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0x4160A0
    };

} // namespace Cinemachine

// Namespace: <global>
struct CustomBlend
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* m_From; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* m_To; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CinemachineBlendDefinition m_Blend; // 0x0020
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineBlenderSettings : public ScriptableObject
    {
    public:
        // Static fields
        // static Il2CppString* kBlendFromAnyCameraLabel;
    
        uint8_t pad_0000[0x18]; // 0x0000
        CustomBlend[][] m_CustomBlends; // 0x0018
    
        // Methods
        CinemachineBlendDefinition GetBlendForVirtualCameras(Il2CppString* fromCameraName, Il2CppString* toCameraName, CinemachineBlendDefinition defaultBlend);  // RVA: 0xF81D00
        void .ctor();  // RVA: 0x604B80
    };

    // Namespace: Cinemachine
    class CinemachineComponentBase : public MonoBehaviour
    {
    public:
        // Static fields
        // static float Epsilon;
    
        uint8_t pad_0000[0x20]; // 0x0000
        CinemachineVirtualCameraBase* m_vcamOwner; // 0x0020
    
        // Methods
        CinemachineVirtualCameraBase* get_VirtualCamera();  // RVA: 0xF82C40
        Transform* get_FollowTarget();  // RVA: 0xF824F0
        Transform* get_LookAtTarget();  // RVA: 0xF82A50
        ICinemachineTargetGroup* get_AbstractFollowTargetGroup();  // RVA: 0xF81F50
        CinemachineTargetGroup* get_FollowTargetGroup();  // RVA: 0xF82000
        Vector3 get_FollowTargetPosition();  // RVA: 0xF820E0
        Quaternion get_FollowTargetRotation();  // RVA: 0xF82300
        ICinemachineTargetGroup* get_AbstractLookAtTargetGroup();  // RVA: 0xF81FD0
        CinemachineTargetGroup* get_LookAtTargetGroup();  // RVA: 0xF82590
        Vector3 get_LookAtTargetPosition();  // RVA: 0xF82630
        Quaternion get_LookAtTargetRotation();  // RVA: 0xF82860
        CameraState get_VcamState();  // RVA: 0xF82AF0
        bool get_IsValid();  // RVA: 0x26F7B0
        void PrePipelineMutateCameraState(CameraState curState, float deltaTime);  // RVA: 0x4160A0
        Stage get_Stage();  // RVA: 0x276B00
        bool get_BodyAppliesAfterAim();  // RVA: 0x42F7D0
        void MutateCameraState(CameraState curState, float deltaTime);
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime, TransitionParams transitionParams);  // RVA: 0x42F7D0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0x4160A0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0x4160A0
        float GetMaxDampTime();  // RVA: 0x9F9200
        bool get_RequiresUserInput();  // RVA: 0x42F7D0
        void .ctor();  // RVA: 0x423C90
    };

    // Namespace: Cinemachine
    class Documentation
    {
    public:
        // Static fields
        // static Il2CppString* BaseURL;
    
    };

} // namespace Cinemachine

// Namespace: <global>
struct Stage
{
public:
    // Static fields
    // static Stage Body;
    // static Stage Aim;
    // static Stage Noise;
    // static Stage Finalize;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class AxisInputDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF78A00
    float Invoke(Il2CppString* axisName);  // RVA: 0xF789F0
    IAsyncResult* BeginInvoke(Il2CppString* axisName, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x453BA0
    float EndInvoke(IAsyncResult* result);  // RVA: 0xF78240
};

// Namespace: <global>
class GetBlendOverrideDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0xF8ED20
    CinemachineBlendDefinition Invoke(ICinemachineCamera* fromVcam, ICinemachineCamera* toVcam, CinemachineBlendDefinition defaultBlend, MonoBehaviour* owner);  // RVA: 0xF8ECC0
    IAsyncResult* BeginInvoke(ICinemachineCamera* fromVcam, ICinemachineCamera* toVcam, CinemachineBlendDefinition defaultBlend, MonoBehaviour* owner, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0xF8EBD0
    CinemachineBlendDefinition EndInvoke(IAsyncResult* result);  // RVA: 0xF8EC80
};

// Namespace: <global>
class UpdateStatus
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t lastUpdateFrame; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t lastUpdateFixedFrame; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    UpdateClock lastUpdateMode; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float lastUpdateDeltaTime; // 0x001C

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
struct UpdateFilter
{
public:
    // Static fields
    // static UpdateFilter Fixed;
    // static UpdateFilter Late;
    // static UpdateFilter Smart;
    // static UpdateFilter SmartFixed;
    // static UpdateFilter SmartLate;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<Cinemachine.CinemachineVirtualCameraBase> <>9__30_0;


    // Methods
    static void .cctor();  // RVA: 0xF928C0
    void .ctor();  // RVA: 0x427B90
    int32_t <GetVirtualCamera>b__30_0(CinemachineVirtualCameraBase* x, CinemachineVirtualCameraBase* y);  // RVA: 0xF92750
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineCore
    {
    public:
        // Static fields
        // static int32_t kStreamingVersion;
        // static CinemachineCore* sInstance;
        // static bool sShowHiddenObjects;
        // static AxisInputDelegate* GetInputAxis;
        // static float UniformDeltaTimeOverride;
        // static float CurrentTimeOverride;
        // static GetBlendOverrideDelegate* GetBlendOverride;
        // static BrainEvent* CameraUpdatedEvent;
        // static BrainEvent* CameraCutEvent;
        // static bool FrameDeltaCompensationEnabled;
        // static float s_LastUpdateTime;
        // static int32_t s_FixedFrameCount;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<Cinemachine.CinemachineBrain> mActiveBrains; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<Cinemachine.CinemachineVirtualCameraBase> mActiveCameras; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool m_ActiveCamerasAreSorted; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        int32_t m_ActivationSequence; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.CinemachineVirtualCameraBase>> mAllCameras; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.Dictionary<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore.UpdateStatus> mUpdateStatus; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        UpdateFilter m_CurrentUpdateFilter; // 0x0040
    
        // Methods
        static CinemachineCore* get_Instance();  // RVA: 0xF852D0
        static float get_DeltaTime();  // RVA: 0xF85240
        static float get_CurrentTime();  // RVA: 0xF851B0
        int32_t get_BrainCount();  // RVA: 0xF85170
        CinemachineBrain* GetActiveBrain(int32_t index);  // RVA: 0xF83940
        void AddActiveBrain(CinemachineBrain* brain);  // RVA: 0xF82D80
        void RemoveActiveBrain(CinemachineBrain* brain);  // RVA: 0xF84200
        int32_t get_VirtualCameraCount();  // RVA: 0xF854B0
        CinemachineVirtualCameraBase* GetVirtualCamera(int32_t index);  // RVA: 0xF83B80
        void AddActiveCamera(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF82E10
        void RemoveActiveCamera(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF84260
        void CameraDestroyed(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF82EE0
        void CameraEnabled(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF830B0
        void CameraDisabled(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF82FB0
        void UpdateAllActiveVirtualCameras(int32_t layerMask, Vector3 worldUp, float deltaTime);  // RVA: 0xF842E0
        void UpdateVirtualCamera(CinemachineVirtualCameraBase* vcam, Vector3 worldUp, float deltaTime);  // RVA: 0xF846F0
        static void InitializeModule();  // RVA: 0xF83D10
        static Transform* GetUpdateTarget(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF839A0
        UpdateClock GetVcamUpdateStatus(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF83AF0
        bool IsLive(ICinemachineCamera* vcam);  // RVA: 0xF83EC0
        bool IsLiveInBlend(ICinemachineCamera* vcam);  // RVA: 0xF83DB0
        void GenerateCameraActivationEvent(ICinemachineCamera* vcam, ICinemachineCamera* vcamFrom);  // RVA: 0xF83630
        void GenerateCameraCutEvent(ICinemachineCamera* vcam);  // RVA: 0xF83780
        CinemachineBrain* FindPotentialTargetBrain(CinemachineVirtualCameraBase* vcam);  // RVA: 0xF83390
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF83FE0
        void .ctor();  // RVA: 0xF85060
        static void .cctor();  // RVA: 0xF84E10
    };

    // Namespace: Cinemachine
    class CinemachineExtension : public MonoBehaviour
    {
    public:
        // Static fields
        // static float Epsilon;
    
        uint8_t pad_0000[0x20]; // 0x0000
        CinemachineVirtualCameraBase* m_vcamOwner; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Dictionary<Cinemachine.ICinemachineCamera,System.Object> mExtraState; // 0x0028
    
        // Methods
        CinemachineVirtualCameraBase* get_VirtualCamera();  // RVA: 0xF856D0
        void Awake();  // RVA: 0xF85520
        void OnEnable();  // RVA: 0x4160A0
        void OnDestroy();  // RVA: 0xF856B0
        void EnsureStarted();  // RVA: 0xF85520
        void ConnectToVcam(bool connect);  // RVA: 0xF85540
        void PrePipelineMutateCameraStateCallback(CinemachineVirtualCameraBase* vcam, CameraState curState, float deltaTime);  // RVA: 0x4160A0
        void InvokePostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF85690
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0x4160A0
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0x4160A0
        bool OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0x42F7D0
        float GetMaxDampTime();  // RVA: 0x9F9200
        bool get_RequiresUserInput();  // RVA: 0x42F7D0
        T GetExtraState(ICinemachineCamera* vcam);  // RVA: 0x3506D0
        System.Collections.Generic.List<T> GetAllExtraStates();  // RVA: 0x26EAF0
        void .ctor();  // RVA: 0x423C90
    };

    // Namespace: Cinemachine
    struct AxisBase
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float m_Value; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float m_MinValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float m_MaxValue; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        bool m_Wrap; // 0x001C
    
        // Methods
        void Validate();  // RVA: 0xF789C0
    };

    // Namespace: Cinemachine
    struct CinemachineInputAxisDriver
    {
    public:
        // Static fields
        // static float Epsilon;
    
        uint8_t pad_0000[0x10]; // 0x0000
        float multiplier; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float accelTime; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float decelTime; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* name; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float inputValue; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float mCurrentSpeed; // 0x002C
    
        // Methods
        void Validate();  // RVA: 0xF85B60
        bool Update(float deltaTime, AxisBase axis);  // RVA: 0xF85840
        bool Update(float deltaTime, AxisState axis);  // RVA: 0xF857D0
        float ClampValue(AxisBase axis, float v);  // RVA: 0xF85760
    };

} // namespace Cinemachine

// Namespace: <global>
class Appearance
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Color pathColor; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    Color inactivePathColor; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    float width; // 0x0030

    // Methods
    void .ctor();  // RVA: 0xF788E0
};

// Namespace: <global>
struct PositionUnits
{
public:
    // Static fields
    // static PositionUnits PathUnits;
    // static PositionUnits Distance;
    // static PositionUnits Normalized;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachinePathBase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        int32_t m_Resolution; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Appearance* m_Appearance; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Single[][] m_DistanceToPos; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Single[][] m_PosToDistance; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t m_CachedSampleSteps; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float m_PathLength; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float m_cachedPosStepSize; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float m_cachedDistanceStepSize; // 0x004C
    
        // Methods
        float get_MinPos();  // RVA: 0x27F130
        float get_MaxPos();  // RVA: 0x27F130
        bool get_Looped();  // RVA: 0x26F7B0
        float StandardizePos(float pos);  // RVA: 0xF86B50
        Vector3 EvaluatePosition(float pos);  // RVA: 0xF85EC0
        Vector3 EvaluateTangent(float pos);  // RVA: 0xF85FC0
        Quaternion EvaluateOrientation(float pos);  // RVA: 0xF85C80
        Vector3 EvaluateLocalPosition(float pos);
        Vector3 EvaluateLocalTangent(float pos);
        Quaternion EvaluateLocalOrientation(float pos);
        float FindClosestPoint(Vector3 p, int32_t startSegment, int32_t searchRadius, int32_t stepsPerSegment);  // RVA: 0xF86060
        float MinUnit(PositionUnits units);  // RVA: 0xF86650
        float MaxUnit(PositionUnits units);  // RVA: 0xF86620
        float StandardizeUnit(float pos, PositionUnits units);  // RVA: 0xF86C40
        Vector3 EvaluatePositionAtUnit(float pos, PositionUnits units);  // RVA: 0xF85E60
        Vector3 EvaluateTangentAtUnit(float pos, PositionUnits units);  // RVA: 0xF85F60
        Quaternion EvaluateOrientationAtUnit(float pos, PositionUnits units);  // RVA: 0xF85C20
        int32_t get_DistanceCacheSampleStepsPerSegment();  // RVA: 0x276B00
        void InvalidateDistanceCache();  // RVA: 0xF865E0
        bool DistanceCacheIsValid();  // RVA: 0xF85B80
        float get_PathLength();  // RVA: 0xF86F30
        float StandardizePathDistance(float distance);  // RVA: 0xF86A90
        float ToNativePathUnits(float pos, PositionUnits units);  // RVA: 0xF86CF0
        float FromPathNativeUnits(float pos, PositionUnits units);  // RVA: 0xF86480
        void ResamplePath(int32_t stepsPerSegment);  // RVA: 0xF86680
        void .ctor();  // RVA: 0xF86E90
    };

    // Namespace: Cinemachine
    class AxisStatePropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class OrbitalTransposerHeadingPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class LensSettingsPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class VcamTargetPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class CinemachineBlendDefinitionPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class SaveDuringPlayAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x485B30
    };

    // Namespace: Cinemachine
    class NoSaveDuringPlayAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class TagFieldAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class NoiseSettingsPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class CinemachineEmbeddedAssetPropertyAttribute : public PropertyAttribute
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        bool WarnIfNull; // 0x0018
    
        // Methods
        void .ctor(bool warnIfNull);  // RVA: 0xF854F0
    };

} // namespace Cinemachine

// Namespace: <global>
struct Level
{
public:
    // Static fields
    // static Level Undoc;
    // static Level API;
    // static Level UserRef;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class DocumentationSortingAttribute : public Attribute
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Level <Category>k__BackingField; // 0x0010
    
        // Methods
        Level get_Category();  // RVA: 0x4169E0
        void set_Category(Level value);  // RVA: 0x48BDD0
        void .ctor(Level category);  // RVA: 0xF8EBA0
    };

} // namespace Cinemachine

// Namespace: <global>
struct StandbyUpdateMode
{
public:
    // Static fields
    // static StandbyUpdateMode Never;
    // static StandbyUpdateMode Always;
    // static StandbyUpdateMode RoundRobin;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct BlendHint
{
public:
    // Static fields
    // static BlendHint None;
    // static BlendHint SphericalPosition;
    // static BlendHint CylindricalPosition;
    // static BlendHint ScreenSpaceAimWhenTargetsDiffer;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct TransitionParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    BlendHint m_BlendHint; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    bool m_InheritPosition; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    VcamActivatedEvent* m_OnCameraLive; // 0x0018
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<Cinemachine.CinemachineExtension,System.Boolean> <>9__66_0;


    // Methods
    static void .cctor();  // RVA: 0xF92850
    void .ctor();  // RVA: 0x427B90
    bool <RequiresUserInput>b__66_0(CinemachineExtension* extension);  // RVA: 0xF927A0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineVirtualCameraBase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        String[][] m_ExcludedPropertiesInInspector; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Stage[][] m_LockStageInInspector; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t m_ValidatingStreamVersion; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool m_OnValidateCalled; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t m_StreamingVersion; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t m_Priority; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t m_ActivationId; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float FollowTargetAttachment; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float LookAtTargetAttachment; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        StandbyUpdateMode m_StandbyUpdate; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        System.Collections.Generic.List<Cinemachine.CinemachineExtension> <mExtensions>k__BackingField; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool <PreviousStateIsValid>k__BackingField; // 0x0058
        bool m_WasStarted; // 0x0059
        bool mSlaveStatusUpdated; // 0x005A
        uint8_t pad_005B[0x5]; // 0x005B
        CinemachineVirtualCameraBase* m_parentVcam; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        int32_t m_QueuePriority; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float m_blendStartPosition; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        Transform* m_CachedFollowTarget; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        CinemachineVirtualCameraBase* m_CachedFollowTargetVcam; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        ICinemachineTargetGroup* m_CachedFollowTargetGroup; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Transform* m_CachedLookAtTarget; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        CinemachineVirtualCameraBase* m_CachedLookAtTargetVcam; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        ICinemachineTargetGroup* m_CachedLookAtTargetGroup; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool <FollowTargetChanged>k__BackingField; // 0x00A0
        bool <LookAtTargetChanged>k__BackingField; // 0x00A1
    
        // Methods
        int32_t get_ValidatingStreamVersion();  // RVA: 0xF8D300
        void set_ValidatingStreamVersion(int32_t value);  // RVA: 0x4FA740
        float GetMaxDampTime();  // RVA: 0xF8B790
        float DetachedFollowTargetDamp(float initial, float dampTime, float deltaTime);  // RVA: 0xF8AF90
        Vector3 DetachedFollowTargetDamp(Vector3 initial, Vector3 dampTime, float deltaTime);  // RVA: 0xF8B020
        Vector3 DetachedFollowTargetDamp(Vector3 initial, float dampTime, float deltaTime);  // RVA: 0xF8AEE0
        float DetachedLookAtTargetDamp(float initial, float dampTime, float deltaTime);  // RVA: 0xF8B3D0
        Vector3 DetachedLookAtTargetDamp(Vector3 initial, Vector3 dampTime, float deltaTime);  // RVA: 0xF8B1A0
        Vector3 DetachedLookAtTargetDamp(Vector3 initial, float dampTime, float deltaTime);  // RVA: 0xF8B320
        void AddExtension(CinemachineExtension* extension);  // RVA: 0xF8A780
        void RemoveExtension(CinemachineExtension* extension);  // RVA: 0xF8C770
        System.Collections.Generic.List<Cinemachine.CinemachineExtension> get_mExtensions();  // RVA: 0x427B80
        void set_mExtensions(System.Collections.Generic.List<Cinemachine.CinemachineExtension> value);  // RVA: 0x6C7D60
        void InvokePostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState newState, float deltaTime);  // RVA: 0xF8BA60
        void InvokePrePipelineMutateCameraStateCallback(CinemachineVirtualCameraBase* vcam, CameraState newState, float deltaTime);  // RVA: 0xF8BC90
        bool InvokeOnTransitionInExtensions(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF8B8E0
        Il2CppString* get_Name();  // RVA: 0xF8D290
        Il2CppString* get_Description();  // RVA: 0xF8D200
        int32_t get_Priority();  // RVA: 0x6C9690
        void set_Priority(int32_t value);  // RVA: 0xF8D3F0
        void ApplyPositionBlendMethod(CameraState state, BlendHint hint);  // RVA: 0xF8A8A0
        GameObject* get_VirtualCameraGameObject();  // RVA: 0xF8D370
        bool get_IsValid();  // RVA: 0xF8D230
        CameraState get_State();
        ICinemachineCamera* get_ParentCamera();  // RVA: 0xF8D2A0
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);  // RVA: 0x42F7D0
        Transform* get_LookAt();  // RVA: 0x26EAF0
        void set_LookAt(Transform* value);  // RVA: 0x26DDA0
        Transform* get_Follow();  // RVA: 0x26EAF0
        void set_Follow(Transform* value);  // RVA: 0x26DDA0
        bool get_PreviousStateIsValid();  // RVA: 0x45A6E0
        void set_PreviousStateIsValid(bool value);  // RVA: 0xB26B70
        void UpdateCameraState(Vector3 worldUp, float deltaTime);  // RVA: 0xF8CBB0
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);  // RVA: 0xF8C480
        void OnDestroy();  // RVA: 0xF8BED0
        void OnTransformParentChanged();  // RVA: 0xF8C3F0
        void Start();  // RVA: 0xF8CAE0
        bool RequiresUserInput();  // RVA: 0xF8C7D0
        void EnsureStarted();  // RVA: 0xF8B460
        IInputAxisProvider* GetInputAxisProvider();  // RVA: 0xF8B6F0
        void OnValidate();  // RVA: 0xF8C4D0
        void OnEnable();  // RVA: 0xF8C050
        void OnDisable();  // RVA: 0xF8BFE0
        void Update();  // RVA: 0xF8D140
        void UpdateSlaveStatus();  // RVA: 0xF8CC50
        Transform* ResolveLookAt(Transform* localLookAt);  // RVA: 0xF8C9F0
        Transform* ResolveFollow(Transform* localFollow);  // RVA: 0xF8C900
        void UpdateVcamPoolStatus();  // RVA: 0xF8CF60
        void MoveToTopOfPrioritySubqueue();  // RVA: 0xF8BEC0
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);  // RVA: 0xF8C320
        void ForceCameraPosition(Vector3 pos, Quaternion rot);  // RVA: 0xF8B500
        bool GetInheritPosition(ICinemachineCamera* cam);  // RVA: 0xF8B5E0
        CinemachineBlend* CreateBlend(ICinemachineCamera* camA, ICinemachineCamera* camB, CinemachineBlendDefinition blendDef, CinemachineBlend* activeBlend);  // RVA: 0xF8AAB0
        CameraState PullStateFromVirtualCamera(Vector3 worldUp, LensSettings lens);  // RVA: 0xF8C530
        void InvalidateCachedTargets();  // RVA: 0xF8B850
        bool get_FollowTargetChanged();  // RVA: 0xA4D5F0
        void set_FollowTargetChanged(bool value);  // RVA: 0x41D360
        bool get_LookAtTargetChanged();  // RVA: 0xF8D280
        void set_LookAtTargetChanged(bool value);  // RVA: 0xF8D3E0
        void UpdateTargetCache();  // RVA: 0xF8CD10
        ICinemachineTargetGroup* get_AbstractFollowTargetGroup();  // RVA: 0x6C7D80
        CinemachineVirtualCameraBase* get_FollowTargetAsVcam();  // RVA: 0x6C7D70
        ICinemachineTargetGroup* get_AbstractLookAtTargetGroup();  // RVA: 0x6C7DF0
        CinemachineVirtualCameraBase* get_LookAtTargetAsVcam();  // RVA: 0x6C7DC0
        void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize();  // RVA: 0xF8CB90
        void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize();  // RVA: 0xF8CAF0
        void LegacyUpgrade(int32_t streamedVersion);  // RVA: 0x4160A0
        void OnBeforeSerialize();  // RVA: 0x4160A0
        void CancelDamping(bool updateNow);  // RVA: 0xF8A8D0
        void .ctor();  // RVA: 0xF8D150
    };

} // namespace Cinemachine

// Namespace: <global>
class <>c__DisplayClass9_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    IntPoint point; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x427B90
    bool <ConfinePoint>b__4(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> t);  // RVA: 0xF92820
};

// Namespace: <global>
class BakedSolution
{
public:
    // Static fields
    // static double k_ClipperEpsilon;

    uint8_t pad_0000[0x10]; // 0x0000
    float m_FrustumSizeIntSpace; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    AspectStretcher m_AspectStretcher; // 0x0014
    uint8_t pad_0015[0xB]; // 0x0015
    bool m_HasBones; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double m_SqrPolygonDiagonal; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> m_OriginalPolygon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> m_Solution; // 0x0038

    // Methods
    void .ctor(float aspectRatio, float frustumHeight, bool hasBones, Rect polygonBounds, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> originalPolygon, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> solution);  // RVA: 0xF7A0B0
    bool IsValid();  // RVA: 0xF79C60
    Vector2 ConfinePoint(Vector2 pointToConfine);  // RVA: 0xF79460
    static int32_t FindIntersection(IntPoint p1, IntPoint p2, IntPoint p3, IntPoint p4);  // RVA: 0xF79A40
    static IntPoint <ConfinePoint>g__IntPointLerp|9_0(IntPoint a, IntPoint b, float lerp);  // RVA: 0xF79F10
    bool <ConfinePoint>g__IsInsideOriginal|9_1(IntPoint point);  // RVA: 0xF79FB0
    static float <ConfinePoint>g__ClosestPointOnSegment|9_2(IntPoint point, IntPoint s0, IntPoint s1);  // RVA: 0xF79C70
    bool <ConfinePoint>g__DoesIntersectOriginal|9_3(IntPoint l1, IntPoint l2);  // RVA: 0xF79D00
    static double <FindIntersection>g__IntPointDiffSqrMagnitude|10_0(IntPoint point1, IntPoint point2);  // RVA: 0xF7A080
};

// Namespace: <global>
struct AspectStretcher
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float <Aspect>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float m_InverseAspect; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float m_CenterX; // 0x0018

    // Methods
    float get_Aspect();  // RVA: 0x4169C0
    void .ctor(float aspect, float centerX);  // RVA: 0xF78980
    Vector2 Stretch(Vector2 p);  // RVA: 0xF78920
    Vector2 Unstretch(Vector2 p);  // RVA: 0xF78950
};

// Namespace: <global>
struct PolygonSolution
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> polygons; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float frustumHeight; // 0x0018

    // Methods
    bool StateChanged(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>>& paths);  // RVA: 0xF8FCD0
    bool get_IsNull();  // RVA: 0xF8FDC0
};

// Namespace: <global>
struct BakingState
{
public:
    // Static fields
    // static BakingState BAKING;
    // static BakingState BAKED;
    // static BakingState TIMEOUT;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct BakingStateCache
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ClipperOffset* offsetter; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Cinemachine.ConfinerOven.PolygonSolution> solutions; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PolygonSolution rightCandidate; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    PolygonSolution leftCandidate; // 0x0030
    uint8_t pad_0031[0xF]; // 0x0031
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> maxCandidate; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float stepSize; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float maxFrustumHeight; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float userSetMaxFrustumHeight; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float theoriticalMaxFrustumHeight; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float currentFrustumHeight; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float bakeTime; // 0x005C
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class ConfinerOven
    {
    public:
        // Static fields
        // static int64_t k_FloatToIntScaler;
        // static float k_IntToFloatScaler;
        // static float k_MinStepSize;
    
        uint8_t pad_0000[0x10]; // 0x0000
        float m_MinFrustumHeightWithBones; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float m_SkeletonPadding; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> m_OriginalPolygon; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        IntPoint m_MidPoint; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> m_Skeleton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Rect m_PolygonRect; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        AspectStretcher m_AspectStretcher; // 0x0048
        uint8_t pad_0049[0xB]; // 0x0049
        float m_MaxComputationTimeForFullSkeletonBakeInSeconds; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        BakingState <State>k__BackingField; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float bakeProgress; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        BakingStateCache m_Cache; // 0x0060
    
        // Methods
        void .ctor(System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector2>>& inputPath, float aspectRatio, float maxFrustumHeight, float skeletonPadding);  // RVA: 0xF8EA60
        BakedSolution* GetBakedSolution(float frustumHeight);  // RVA: 0xF8D910
        BakingState get_State();  // RVA: 0x42DE10
        void set_State(BakingState value);  // RVA: 0x42E270
        void Initialize(System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector2>>& inputPath, float aspectRatio, float maxFrustumHeight, float skeletonPadding);  // RVA: 0xF8DD40
        void BakeConfiner(float maxComputationTimePerFrameInSeconds);  // RVA: 0xF8D400
        static Rect <Initialize>g__GetPolygonBoundingBox|24_0(System.Collections.Generic.List<System.Collections.Generic.List<UnityEngine.Vector2>>& polygons);  // RVA: 0xF8E840
        static IntPoint <Initialize>g__MidPointOfIntRect|24_1(IntRect bounds);  // RVA: 0xF8EA10
        void <BakeConfiner>g__ComputeSkeleton|25_0(System.Collections.Generic.List<Cinemachine.ConfinerOven.PolygonSolution>& solutions);  // RVA: 0xF8E440
    };

    // Namespace: Cinemachine
    class ICinemachineCamera
    {
    public:
    
        // Methods
        Il2CppString* get_Name();  // RVA: 0x26EAF0
        Il2CppString* get_Description();  // RVA: 0x26EAF0
        int32_t get_Priority();  // RVA: 0x276B00
        void set_Priority(int32_t value);  // RVA: 0x26E4D0
        Transform* get_LookAt();  // RVA: 0x26EAF0
        void set_LookAt(Transform* value);  // RVA: 0x26DDA0
        Transform* get_Follow();  // RVA: 0x26EAF0
        void set_Follow(Transform* value);  // RVA: 0x26DDA0
        CameraState get_State();
        GameObject* get_VirtualCameraGameObject();  // RVA: 0x26EAF0
        bool get_IsValid();  // RVA: 0x26F7B0
        ICinemachineCamera* get_ParentCamera();  // RVA: 0x26EAF0
        bool IsLiveChild(ICinemachineCamera* vcam, bool dominantChildOnly);
        void UpdateCameraState(Vector3 worldUp, float deltaTime);
        void InternalUpdateCameraState(Vector3 worldUp, float deltaTime);
        void OnTransitionFromCamera(ICinemachineCamera* fromCam, Vector3 worldUp, float deltaTime);
        void OnTargetObjectWarped(Transform* target, Vector3 positionDelta);
    };

} // namespace Cinemachine

// Namespace: <global>
struct OverrideModes
{
public:
    // Static fields
    // static OverrideModes None;
    // static OverrideModes Orthographic;
    // static OverrideModes Perspective;
    // static OverrideModes Physical;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    struct LensSettings
    {
    public:
        // Static fields
        // static LensSettings Default;
    
        uint8_t pad_0000[0x10]; // 0x0000
        float FieldOfView; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float OrthographicSize; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float NearClipPlane; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float FarClipPlane; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float Dutch; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        OverrideModes ModeOverride; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Vector2 LensShift; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GateFitMode GateFit; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float FocusDistance; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Vector2 m_SensorSize; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool m_OrthoFromCamera; // 0x0040
        bool m_PhysicalFromCamera; // 0x0041
    
        // Methods
        bool get_Orthographic();  // RVA: 0xF8F8E0
        void set_Orthographic(bool value);  // RVA: 0xF8F930
        Vector2 get_SensorSize();  // RVA: 0xF8F900
        void set_SensorSize(Vector2 value);  // RVA: 0xF8F940
        float get_Aspect();  // RVA: 0xF8F840
        bool get_IsPhysicalCamera();  // RVA: 0xF8F8C0
        void set_IsPhysicalCamera(bool value);  // RVA: 0xF8F920
        static LensSettings FromCamera(Camera* fromCamera);  // RVA: 0xF8EFB0
        void SnapshotCameraReadOnlyProperties(Camera* camera);  // RVA: 0xF8F380
        void SnapshotCameraReadOnlyProperties(LensSettings lens);  // RVA: 0xF8F5E0
        void .ctor(float verticalFOV, float orthographicSize, float nearClip, float farClip, float dutch);  // RVA: 0xF8F7F0
        static LensSettings Lerp(LensSettings lensA, LensSettings lensB, float t);  // RVA: 0xF8F130
        void Validate();  // RVA: 0xF8F6E0
        static void .cctor();  // RVA: 0xF8F760
    };

} // namespace Cinemachine

// Namespace: <global>
struct NoiseParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float Frequency; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float Amplitude; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    bool Constant; // 0x0018

    // Methods
    float GetValueAt(float time, float timeOffset);  // RVA: 0xF8F950
};

// Namespace: <global>
struct TransformNoiseParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    NoiseParams X; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    NoiseParams Y; // 0x001C
    uint8_t pad_001D[0xB]; // 0x001D
    NoiseParams Z; // 0x0028

    // Methods
    Vector3 GetValueAt(float time, Vector3 timeOffsets);  // RVA: 0xF925F0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class NoiseSettings : public SignalSourceAsset
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        TransformNoiseParams[][] PositionNoise; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        TransformNoiseParams[][] OrientationNoise; // 0x0020
    
        // Methods
        static Vector3 GetCombinedFilterResults(TransformNoiseParams[][] noiseParams, float time, Vector3 timeOffsets);  // RVA: 0xF8F9B0
        float get_SignalDuration();  // RVA: 0x9F9200
        void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);  // RVA: 0xF8FB00
        void .ctor();  // RVA: 0xF8FC60
    };

    // Namespace: Cinemachine
    class RuntimeUtility
    {
    public:
        // Static fields
        // static RaycastHit[][] s_HitBuffer;
        // static Int32[][] s_PenetrationIndexBuffer;
        // static SphereCollider* s_ScratchCollider;
        // static GameObject* s_ScratchColliderGameObject;
    
    
        // Methods
        static void DestroyObject(Il2CppObject* obj);  // RVA: 0xF900B0
        static bool IsPrefab(GameObject* gameObject);  // RVA: 0x42F7D0
        static bool RaycastIgnoreTag(Ray ray, RaycastHit hitInfo, float rayLength, int32_t layerMask, Il2CppString* ignoreTag);  // RVA: 0xF90880
        static bool SphereCastIgnoreTag(Vector3 rayStart, float radius, Vector3 dir, RaycastHit hitInfo, float rayLength, int32_t layerMask, Il2CppString* ignoreTag);  // RVA: 0xF90C30
        static SphereCollider* GetScratchCollider();  // RVA: 0xF902E0
        static void DestroyScratchCollider();  // RVA: 0xF90130
        static AnimationCurve* NormalizeCurve(AnimationCurve* curve, bool normalizeX, bool normalizeY);  // RVA: 0xF905B0
        static void .cctor();  // RVA: 0xF916E0
    };

    // Namespace: Cinemachine
    class ISignalSource6D
    {
    public:
    
        // Methods
        float get_SignalDuration();  // RVA: 0x27F130
        void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);
    };

    // Namespace: Cinemachine
    class SignalSourceAsset : public ScriptableObject
    {
    public:
    
        // Methods
        float get_SignalDuration();  // RVA: 0x27F130
        void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);
        void .ctor();  // RVA: 0x604B80
    };

} // namespace Cinemachine

// Namespace: <global>
struct Mode
{
public:
    // Static fields
    // static Mode Disabled;
    // static Mode Record;
    // static Mode Playback;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct Item
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 Pos; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    Quaternion Rot; // 0x001C

    // Methods
    static Item Lerp(Item a, Item b, float t);  // RVA: 0xF8EE40
    static Item get_Empty();  // RVA: 0xF8EF50
};

// Namespace: <global>
class CacheCurve
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float StartTime; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float StepSize; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    System.Collections.Generic.List<Cinemachine.TargetPositionCache.CacheCurve.Item> m_Cache; // 0x0018

    // Methods
    int32_t get_Count();  // RVA: 0xF7AEB0
    void .ctor(float startTime, float endTime, float stepSize);  // RVA: 0xF7AD90
    void Add(Item item);  // RVA: 0xF7A9E0
    void AddUntil(Item item, float time, bool isCut);  // RVA: 0xF7A640
    Item Evaluate(float time);  // RVA: 0xF7AAC0
};

// Namespace: <global>
struct RecordingItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float Time; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    bool IsCut; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Item Item; // 0x0018
};

// Namespace: <global>
class CacheEntry
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CacheCurve* Curve; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Cinemachine.TargetPositionCache.CacheEntry.RecordingItem> RawItems; // 0x0018

    // Methods
    void AddRawItem(float time, bool isCut, Transform* target);  // RVA: 0xF7AEF0
    void CreateCurves();  // RVA: 0xF7B1F0
    void .ctor();  // RVA: 0xF7B570
};

// Namespace: <global>
struct TimeRange
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float Start; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float End; // 0x0014

    // Methods
    bool get_IsEmpty();  // RVA: 0xF925E0
    bool Contains(float time);  // RVA: 0xF92580
    static TimeRange get_Empty();  // RVA: 0xF925C0
    void Include(float time);  // RVA: 0xF925A0
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class TargetPositionCache
    {
    public:
        // Static fields
        // static bool UseCache;
        // static float CacheStepSize;
        // static float kWraparoundSlush;
        // static Mode m_CacheMode;
        // static float CurrentTime;
        // static int32_t CurrentFrame;
        // static bool IsCameraCut;
        // static System.Collections.Generic.Dictionary<UnityEngine.Transform,Cinemachine.TargetPositionCache.CacheEntry> m_Cache;
        // static TimeRange m_CacheTimeRange;
    
    
        // Methods
        static Mode get_CacheMode();  // RVA: 0xF921B0
        static void set_CacheMode(Mode value);  // RVA: 0xF923B0
        static bool get_IsRecording();  // RVA: 0xF92360
        static bool get_CurrentPlaybackTimeValid();  // RVA: 0xF92240
        static bool get_IsEmpty();  // RVA: 0xF92320
        static TimeRange get_CacheTimeRange();  // RVA: 0xF921F0
        static bool get_HasCurrentTime();  // RVA: 0xF922D0
        static void ClearCache();  // RVA: 0xF918B0
        static void CreatePlaybackCurves();  // RVA: 0xF919D0
        static Vector3 GetTargetPosition(Transform* target);  // RVA: 0xF91B40
        static Quaternion GetTargetRotation(Transform* target);  // RVA: 0xF91E60
        void .ctor();  // RVA: 0x427B90
    };

} // namespace Cinemachine

// Namespace: <global>
struct UpdateClock
{
public:
    // Static fields
    // static UpdateClock Fixed;
    // static UpdateClock Late;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class UpdateStatus
{
public:
    // Static fields
    // static int32_t kWindowSize;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t windowStart; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t numWindowLateUpdateMoves; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t numWindowFixedUpdateMoves; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t numWindows; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t lastFrameUpdated; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    Matrix4x4 lastPos; // 0x0024
    uint8_t pad_0025[0x3F]; // 0x0025
    UpdateClock <PreferredUpdate>k__BackingField; // 0x0064

    // Methods
    UpdateClock get_PreferredUpdate();  // RVA: 0x94F120
    void set_PreferredUpdate(UpdateClock value);  // RVA: 0xF92AB0
    void .ctor(int32_t currentFrame, Matrix4x4 pos);  // RVA: 0xF92A40
    void OnUpdate(int32_t currentFrame, UpdateClock currentClock, Matrix4x4 pos);  // RVA: 0xF92930
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class UpdateTracker
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<UnityEngine.Transform,Cinemachine.UpdateTracker.UpdateStatus> mUpdateStatus    // static System.Collections.Generic.List<UnityEngine.Transform> sToDelete;
        // static float mLastUpdateTime;
    
    
        // Methods
        static void InitializeModule();  // RVA: 0xF92D00
        static void UpdateTargets(UpdateClock currentClock);  // RVA: 0xF92E30
        static UpdateClock GetPreferredUpdate(Transform* target);  // RVA: 0xF92AC0
        static void OnUpdate(UpdateClock currentClock);  // RVA: 0xF92D70
        void .ctor();  // RVA: 0x427B90
        static void .cctor();  // RVA: 0xF93190
    };

    // Namespace: Cinemachine
    class CinemachineInputProvider : public MonoBehaviour
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x423C90
    };

} // namespace Cinemachine

// Namespace: <global>
struct Mode
{
public:
    // Static fields
    // static Mode Custom;
    // static Mode PriorityBoost;
    // static Mode Activate;
    // static Mode Deactivate;
    // static Mode Enable;
    // static Mode Disable;
    // static Mode Play;
    // static Mode Stop;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class TriggerEvent : public UnityEvent
{
public:

    // Methods
    void .ctor();  // RVA: 0xCB0020
};

// Namespace: <global>
struct TimeMode
{
public:
    // Static fields
    // static TimeMode FromStart;
    // static TimeMode FromEnd;
    // static TimeMode BeforeNow;
    // static TimeMode AfterNow;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ActionSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Mode m_Action; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* m_Target; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t m_BoostAmount; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float m_StartTime; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    TimeMode m_Mode; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TriggerEvent* m_Event; // 0x0030

    // Methods
    void .ctor(Mode action);  // RVA: 0xF93830
    void Invoke();  // RVA: 0xF93300
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineTriggerAction : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        LayerMask m_LayerMask; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* m_WithTag; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* m_WithoutTag; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t m_SkipFirst; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool m_Repeating; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        ActionSettings m_OnObjectEnter; // 0x0040
        uint8_t pad_0041[0x27]; // 0x0041
        ActionSettings m_OnObjectExit; // 0x0068
        uint8_t pad_0069[0x27]; // 0x0069
        System.Collections.Generic.HashSet<UnityEngine.GameObject> m_ActiveTriggerObjects; // 0x0090
    
        // Methods
        bool Filter(GameObject* other);  // RVA: 0xF97E80
        void InternalDoTriggerEnter(GameObject* other);  // RVA: 0xF97F40
        void InternalDoTriggerExit(GameObject* other);  // RVA: 0xF98050
        void OnTriggerEnter(Collider* other);  // RVA: 0xF981F0
        void OnTriggerExit(Collider* other);  // RVA: 0xF98230
        void OnCollisionEnter(Collision* other);  // RVA: 0xF98130
        void OnCollisionExit(Collision* other);  // RVA: 0xF981B0
        void OnTriggerEnter2D(Collider2D* other);  // RVA: 0xF981F0
        void OnTriggerExit2D(Collider2D* other);  // RVA: 0xF98230
        void OnCollisionEnter2D(Collision2D* other);  // RVA: 0xF980F0
        void OnCollisionExit2D(Collision2D* other);  // RVA: 0xF98170
        void OnEnable();  // RVA: 0x4160A0
        void .ctor();  // RVA: 0xF98270
    };

    // Namespace: Cinemachine
    class GroupWeightManipulator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float m_Weight0; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float m_Weight1; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float m_Weight2; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float m_Weight3; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float m_Weight4; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float m_Weight5; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_Weight6; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_Weight7; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        CinemachineTargetGroup* m_group; // 0x0040
    
        // Methods
        void Start();  // RVA: 0xFAA500
        void OnValidate();  // RVA: 0xFAA490
        void Update();  // RVA: 0xFAA620
        void UpdateWeights();  // RVA: 0xFAA550
        void .ctor();  // RVA: 0xFAA750
    };

    // Namespace: Cinemachine
    class CinemachineCollisionImpulseSource : public CinemachineImpulseSource
    {
    public:
        uint8_t pad_0000[0x38]; // 0x0000
        LayerMask m_LayerMask; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* m_IgnoreTag; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool m_UseImpactDirection; // 0x0048
        bool m_ScaleImpactWithMass; // 0x0049
        bool m_ScaleImpactWithSpeed; // 0x004A
        uint8_t pad_004B[0x5]; // 0x004B
        Rigidbody* mRigidBody; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Rigidbody2D* mRigidBody2D; // 0x0058
    
        // Methods
        void Start();  // RVA: 0xF944C0
        void OnEnable();  // RVA: 0x4160A0
        void OnCollisionEnter(Collision* c);  // RVA: 0xF94360
        void OnTriggerEnter(Collider* c);  // RVA: 0xF94450
        float GetMassAndVelocity(Collider* other, Vector3 vel);  // RVA: 0xF94050
        void GenerateImpactEvent(Collider* other, Vector3 vel);  // RVA: 0xF93B50
        void OnCollisionEnter2D(Collision2D* c);  // RVA: 0xF942E0
        void OnTriggerEnter2D(Collider2D* c);  // RVA: 0xF943E0
        float GetMassAndVelocity2D(Collider2D* other2d, Vector3 vel);  // RVA: 0xF93DF0
        void GenerateImpactEvent2D(Collider2D* other2d, Vector3 vel);  // RVA: 0xF938B0
        void .ctor();  // RVA: 0xF94540
    };

    // Namespace: Cinemachine
    class CinemachineFixedSignal : public SignalSourceAsset
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        AnimationCurve* m_XCurve; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        AnimationCurve* m_YCurve; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AnimationCurve* m_ZCurve; // 0x0028
    
        // Methods
        float get_SignalDuration();  // RVA: 0xF94860
        float AxisDuration(AnimationCurve* axis);  // RVA: 0xF94610
        void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);  // RVA: 0xF94740
        float AxisValue(AnimationCurve* axis, float time);  // RVA: 0xF946F0
        void .ctor();  // RVA: 0x9F14D0
    };

    // Namespace: Cinemachine
    class CinemachineImpulseDefinitionPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

} // namespace Cinemachine

// Namespace: <global>
struct ImpulseShapes
{
public:
    // Static fields
    // static ImpulseShapes Custom;
    // static ImpulseShapes Recoil;
    // static ImpulseShapes Bump;
    // static ImpulseShapes Explosion;
    // static ImpulseShapes Rumble;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ImpulseTypes
{
public:
    // Static fields
    // static ImpulseTypes Uniform;
    // static ImpulseTypes Dissipating;
    // static ImpulseTypes Propagating;
    // static ImpulseTypes Legacy;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct RepeatMode
{
public:
    // Static fields
    // static RepeatMode Stretch;
    // static RepeatMode Loop;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class SignalSource
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CinemachineImpulseDefinition* m_Def; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector3 m_Velocity; // 0x0018

    // Methods
    void .ctor(CinemachineImpulseDefinition* def, Vector3 velocity);  // RVA: 0xFAC820
    float get_SignalDuration();  // RVA: 0x927560
    void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);  // RVA: 0xFAC680
};

// Namespace: <global>
class LegacySignalSource
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CinemachineImpulseDefinition* m_Def; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector3 m_Velocity; // 0x0018
    uint8_t pad_0019[0xB]; // 0x0019
    float m_StartTimeOffset; // 0x0024

    // Methods
    void .ctor(CinemachineImpulseDefinition* def, Vector3 velocity);  // RVA: 0xFABFD0
    float get_SignalDuration();  // RVA: 0xFAC080
    void GetSignal(float timeSinceSignalStart, Vector3 pos, Quaternion rot);  // RVA: 0xFABD20
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineImpulseDefinition
    {
    public:
        // Static fields
        // static AnimationCurve[][] sStandardShapes;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t m_ImpulseChannel; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        ImpulseShapes m_ImpulseShape; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        AnimationCurve* m_CustomImpulseShape; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        float m_ImpulseDuration; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        ImpulseTypes m_ImpulseType; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float m_DissipationRate; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        SignalSourceAsset* m_RawSignal; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float m_AmplitudeGain; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float m_FrequencyGain; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        RepeatMode m_RepeatMode; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool m_Randomize; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        EnvelopeDefinition m_TimeEnvelope; // 0x0048
        uint8_t pad_0049[0x1F]; // 0x0049
        float m_ImpactRadius; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        DirectionMode m_DirectionMode; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        DissipationMode m_DissipationMode; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float m_DissipationDistance; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float m_PropagationSpeed; // 0x0078
    
        // Methods
        void OnValidate();  // RVA: 0xF95E40
        static void CreateStandardShapes();  // RVA: 0xF94B30
        static AnimationCurve* GetStandardCurve(ImpulseShapes shape);  // RVA: 0xF95B60
        AnimationCurve* get_ImpulseCurve();  // RVA: 0xF96010
        void CreateEvent(Vector3 position, Vector3 velocity);  // RVA: 0xF94AF0
        ImpulseEvent* CreateAndReturnEvent(Vector3 position, Vector3 velocity);  // RVA: 0xF948C0
        ImpulseEvent* LegacyCreateAndReturnEvent(Vector3 position, Vector3 velocity);  // RVA: 0xF95BE0
        void .ctor();  // RVA: 0xF95F30
    };

} // namespace Cinemachine

// Namespace: <global>
struct ImpulseReaction
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    NoiseSettings* m_SecondaryNoise; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float m_AmplitudeGain; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float m_FrequencyGain; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float m_Duration; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float m_CurrentAmount; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float m_CurrentTime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float m_CurrentDamping; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    bool m_Initialized; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    Vector3 m_NoiseOffsets; // 0x0034

    // Methods
    void ReSeed();  // RVA: 0xFAB5F0
    bool GetReaction(float deltaTime, Vector3 impulsePos, Vector3 pos, Quaternion rot);  // RVA: 0xFAB190
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineImpulseListener : public CinemachineExtension
    {
    public:
        uint8_t pad_0000[0x30]; // 0x0000
        Stage m_ApplyAfter; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t m_ChannelMask; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float m_Gain; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool m_Use2DDistance; // 0x003C
        bool m_UseCameraSpace; // 0x003D
        uint8_t pad_003E[0x2]; // 0x003E
        ImpulseReaction m_ReactionSettings; // 0x0040
    
        // Methods
        void Reset();  // RVA: 0xF96610
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xF960D0
        void .ctor();  // RVA: 0xF96690
    };

    // Namespace: Cinemachine
    class CinemachineImpulseEnvelopePropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

    // Namespace: Cinemachine
    class CinemachineImpulseChannelPropertyAttribute : public PropertyAttribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0xBE2120
    };

} // namespace Cinemachine

// Namespace: <global>
struct EnvelopeDefinition
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AnimationCurve* m_AttackShape; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AnimationCurve* m_DecayShape; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float m_AttackTime; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float m_SustainTime; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float m_DecayTime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    bool m_ScaleWithImpact; // 0x002C
    bool m_HoldForever; // 0x002D

    // Methods
    static EnvelopeDefinition Default();  // RVA: 0xFAA2D0
    float get_Duration();  // RVA: 0xFAA470
    float GetValueAt(float offset);  // RVA: 0xFAA2F0
    void ChangeStopTime(float offset, bool forceNoDecay);  // RVA: 0xFAA260
    void Clear();  // RVA: 0xFAA290
    void Validate();  // RVA: 0xFAA440
};

// Namespace: <global>
struct DirectionMode
{
public:
    // Static fields
    // static DirectionMode Fixed;
    // static DirectionMode RotateTowardSource;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct DissipationMode
{
public:
    // Static fields
    // static DissipationMode LinearDecay;
    // static DissipationMode SoftDecay;
    // static DissipationMode ExponentialDecay;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ImpulseEvent
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float m_StartTime; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EnvelopeDefinition m_Envelope; // 0x0018
    uint8_t pad_0019[0x1F]; // 0x0019
    ISignalSource6D* m_SignalSource; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector3 m_Position; // 0x0040
    uint8_t pad_0041[0xB]; // 0x0041
    float m_Radius; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    DirectionMode m_DirectionMode; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t m_Channel; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    DissipationMode m_DissipationMode; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float m_DissipationDistance; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float m_CustomDissipation; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float m_PropagationSpeed; // 0x0064

    // Methods
    bool get_Expired();  // RVA: 0xFAB0A0
    void Cancel(float time, bool forceNoDecay);  // RVA: 0xFAA790
    float DistanceDecay(float distance);  // RVA: 0xFAA880
    bool GetDecayedSignal(Vector3 listenerPosition, bool use2D, Vector3 pos, Quaternion rot);  // RVA: 0xFAAA40
    void Clear();  // RVA: 0xFAA7D0
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class CinemachineImpulseManager
    {
    public:
        // Static fields
        // static CinemachineImpulseManager* sInstance;
        // static float Epsilon;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<Cinemachine.CinemachineImpulseManager.ImpulseEvent> m_ExpiredEvents; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<Cinemachine.CinemachineImpulseManager.ImpulseEvent> m_ActiveEvents; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool IgnoreTimeScale; // 0x0020
    
        // Methods
        void .ctor();  // RVA: 0x427B90
        static CinemachineImpulseManager* get_Instance();  // RVA: 0xF97050
        static void InitializeModule();  // RVA: 0xF96E00
        static float EvaluateDissipationScale(float spread, float normalizedDistance);  // RVA: 0xF96870
        bool GetImpulseAt(Vector3 listenerLocation, bool distance2D, int32_t channelMask, Vector3 pos, Quaternion rot);  // RVA: 0xF96930
        float get_CurrentTime();  // RVA: 0xF96FF0
        ImpulseEvent* NewImpulseEvent();  // RVA: 0xF96F10
        void AddImpulseEvent(ImpulseEvent* e);  // RVA: 0xF966A0
        void Clear();  // RVA: 0xF967A0
    };

    // Namespace: Cinemachine
    class CinemachineImpulseSource : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        CinemachineImpulseDefinition* m_ImpulseDefinition; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector3 m_DefaultVelocity; // 0x0028
    
        // Methods
        void OnValidate();  // RVA: 0xF972F0
        void Reset();  // RVA: 0xF973F0
        void GenerateImpulseAtPositionWithVelocity(Vector3 position, Vector3 velocity);  // RVA: 0xF970E0
        void GenerateImpulseWithVelocity(Vector3 velocity);  // RVA: 0xF971E0
        void GenerateImpulseWithForce(float force);  // RVA: 0xF97130
        void GenerateImpulse();  // RVA: 0xF97260
        void GenerateImpulseAt(Vector3 position, Vector3 velocity);  // RVA: 0xF970E0
        void GenerateImpulse(Vector3 velocity);  // RVA: 0xF971E0
        void GenerateImpulse(float force);  // RVA: 0xF97130
        void .ctor();  // RVA: 0xF97500
    };

    // Namespace: Cinemachine
    class CinemachineIndependentImpulseListener : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Vector3 impulsePosLastFrame; // 0x0020
        uint8_t pad_0021[0xB]; // 0x0021
        Quaternion impulseRotLastFrame; // 0x002C
        uint8_t pad_002D[0xF]; // 0x002D
        int32_t m_ChannelMask; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float m_Gain; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool m_Use2DDistance; // 0x0044
        bool m_UseLocalSpace; // 0x0045
        uint8_t pad_0046[0x2]; // 0x0046
        ImpulseReaction m_ReactionSettings; // 0x0048
    
        // Methods
        void Reset();  // RVA: 0xF97B90
        void OnEnable();  // RVA: 0xF97B10
        void Update();  // RVA: 0xF97C10
        void LateUpdate();  // RVA: 0xF975A0
        void .ctor();  // RVA: 0x423C90
    };

} // namespace Cinemachine

// Namespace: <global>
struct DoublePoint
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    double X; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    double Y; // 0x0018

    // Methods
    void .ctor(double x, double y);  // RVA: 0xFAA230
    void .ctor(DoublePoint dp);  // RVA: 0xFAA220
    void .ctor(IntPoint ip);  // RVA: 0xFAA240
};

// Namespace: <global>
class PolyTree : public PolyNode
{
public:
    uint8_t pad_0000[0x40]; // 0x0000
    System.Collections.Generic.List<Cinemachine.ClipperLib.PolyNode> m_AllPolys; // 0x0040

    // Methods
    void Clear();  // RVA: 0xFAC400
    PolyNode* GetFirst();  // RVA: 0xFAC4F0
    int32_t get_Total();  // RVA: 0xFAC5E0
    void .ctor();  // RVA: 0xFAC560
};

// Namespace: <global>
class PolyNode
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PolyNode* m_Parent; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> m_polygon; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t m_Index; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    JoinType m_jointype; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    EndType m_endtype; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<Cinemachine.ClipperLib.PolyNode> m_Childs; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool <IsOpen>k__BackingField; // 0x0038

    // Methods
    bool IsHoleNode();  // RVA: 0xFAC2E0
    int32_t get_ChildCount();  // RVA: 0xFAC3C0
    System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> get_Contour();  // RVA: 0x42A480
    void AddChild(PolyNode* Child);  // RVA: 0xFAC100
    PolyNode* GetNext();  // RVA: 0xFAC270
    PolyNode* GetNextSiblingUp();  // RVA: 0xFAC1E0
    System.Collections.Generic.List<Cinemachine.ClipperLib.PolyNode> get_Childs();  // RVA: 0x44D420
    PolyNode* get_Parent();  // RVA: 0x42A330
    bool get_IsHole();  // RVA: 0xFAC2E0
    bool get_IsOpen();  // RVA: 0x8FC6B0
    void set_IsOpen(bool value);  // RVA: 0xAA4BA0
    void .ctor();  // RVA: 0xFAC300
};

// Namespace: <global>
struct Int128
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t hi; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    uint64_t lo; // 0x0018

    // Methods
    void .ctor(int64_t _lo);  // RVA: 0xFAB820
    void .ctor(int64_t _hi, uint64_t _lo);  // RVA: 0xFAB810
    void .ctor(Int128 val);  // RVA: 0xFAA220
    bool IsNegative();  // RVA: 0xFAB800
    static bool op_Equality(Int128 val1, Int128 val2);  // RVA: 0xFAB860
    static bool op_Inequality(Int128 val1, Int128 val2);  // RVA: 0xFABA00
    bool Equals(Il2CppObject* obj);  // RVA: 0xFAB680
    int32_t GetHashCode();  // RVA: 0xFAB710
    static bool op_GreaterThan(Int128 val1, Int128 val2);  // RVA: 0xFAB9E0
    static bool op_LessThan(Int128 val1, Int128 val2);  // RVA: 0xFABAC0
    static Int128 op_Addition(Int128 lhs, Int128 rhs);  // RVA: 0xFAB830
    static Int128 op_Subtraction(Int128 lhs, Int128 rhs);  // RVA: 0xFABAE0
    static Int128 op_UnaryNegation(Int128 val);  // RVA: 0xFABB50
    static double op_Explicit(Int128 val);  // RVA: 0xFAB920
    static Int128 Int128Mul(int64_t lhs, int64_t rhs);  // RVA: 0xFAB740
};

// Namespace: <global>
struct IntPoint
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t X; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int64_t Y; // 0x0018

    // Methods
    void .ctor(int64_t X, int64_t Y);  // RVA: 0xFABC90
    void .ctor(double x, double y);  // RVA: 0xFABC70
    void .ctor(IntPoint pt);  // RVA: 0xFAA220
    static bool op_Equality(IntPoint a, IntPoint b);  // RVA: 0xFABCA0
    static bool op_Inequality(IntPoint a, IntPoint b);  // RVA: 0xFABCC0
    bool Equals(Il2CppObject* obj);  // RVA: 0xFABB90
    int32_t GetHashCode();  // RVA: 0xFABC20
};

// Namespace: <global>
struct IntRect
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t left; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int64_t top; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int64_t right; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int64_t bottom; // 0x0028

    // Methods
    void .ctor(int64_t l, int64_t t, int64_t r, int64_t b);  // RVA: 0xFABD00
    void .ctor(IntRect ir);  // RVA: 0xFABCE0
};

// Namespace: <global>
struct ClipType
{
public:
    // Static fields
    // static ClipType ctIntersection;
    // static ClipType ctUnion;
    // static ClipType ctDifference;
    // static ClipType ctXor;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct PolyType
{
public:
    // Static fields
    // static PolyType ptSubject;
    // static PolyType ptClip;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct PolyFillType
{
public:
    // Static fields
    // static PolyFillType pftEvenOdd;
    // static PolyFillType pftNonZero;
    // static PolyFillType pftPositive;
    // static PolyFillType pftNegative;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct JoinType
{
public:
    // Static fields
    // static JoinType jtSquare;
    // static JoinType jtRound;
    // static JoinType jtMiter;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EndType
{
public:
    // Static fields
    // static EndType etClosedPolygon;
    // static EndType etClosedLine;
    // static EndType etOpenButt;
    // static EndType etOpenSquare;
    // static EndType etOpenRound;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EdgeSide
{
public:
    // Static fields
    // static EdgeSide esLeft;
    // static EdgeSide esRight;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct Direction
{
public:
    // Static fields
    // static Direction dRightToLeft;
    // static Direction dLeftToRight;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class TEdge
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    IntPoint Bot; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    IntPoint Curr; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    IntPoint Top; // 0x0030
    uint8_t pad_0031[0xF]; // 0x0031
    IntPoint Delta; // 0x0040
    uint8_t pad_0041[0xF]; // 0x0041
    double Dx; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PolyType PolyTyp; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    EdgeSide Side; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t WindDelta; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t WindCnt; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t WindCnt2; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t OutIdx; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    TEdge* Next; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    TEdge* Prev; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    TEdge* NextInLML; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    TEdge* NextInAEL; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TEdge* PrevInAEL; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TEdge* NextInSEL; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TEdge* PrevInSEL; // 0x00A0

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class IntersectNode
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TEdge* Edge1; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TEdge* Edge2; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    IntPoint Pt; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class MyIntersectNodeSort
{
public:

    // Methods
    int32_t Compare(IntersectNode* node1, IntersectNode* node2);  // RVA: 0xFAC0C0
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class LocalMinima
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t Y; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TEdge* LeftBound; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TEdge* RightBound; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LocalMinima* Next; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class Scanbeam
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t Y; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Scanbeam* Next; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class Maxima
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int64_t X; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Maxima* Next; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Maxima* Prev; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class OutRec
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t Idx; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    bool IsHole; // 0x0014
    bool IsOpen; // 0x0015
    uint8_t pad_0016[0x2]; // 0x0016
    OutRec* FirstLeft; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    OutPt* Pts; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OutPt* BottomPt; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PolyNode* PolyNode; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class OutPt
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t Idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    IntPoint Pt; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    OutPt* Next; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OutPt* Prev; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class Join
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    OutPt* OutPt1; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    OutPt* OutPt2; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    IntPoint OffPt; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x427B90
};

// Namespace: <global>
class ClipperBase
{
public:
    // Static fields
    // static double horizontal;
    // static int32_t Skip;
    // static int32_t Unassigned;
    // static double tolerance;
    // static int64_t loRange;
    // static int64_t hiRange;

    uint8_t pad_0000[0x10]; // 0x0000
    LocalMinima* m_MinimaList; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LocalMinima* m_CurrentLM; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.TEdge>> m_edges; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Scanbeam* m_Scanbeam; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<Cinemachine.ClipperLib.OutRec> m_PolyOuts; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TEdge* m_ActiveEdges; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool m_UseFullRange; // 0x0040
    bool m_HasOpenPaths; // 0x0041
    bool <PreserveCollinear>k__BackingField; // 0x0042

    // Methods
    static bool near_zero(double val);  // RVA: 0xF9C600
    bool get_PreserveCollinear();  // RVA: 0x93FB30
    void set_PreserveCollinear(bool value);  // RVA: 0xF9C620
    void Swap(int64_t val1, int64_t val2);  // RVA: 0xF9C310
    static bool IsHorizontal(TEdge* e);  // RVA: 0xF9AB80
    bool PointIsVertex(IntPoint pt, OutPt* pp);  // RVA: 0xF9ABA0
    bool PointOnLineSegment(IntPoint pt, IntPoint linePt1, IntPoint linePt2, bool UseFullRange);  // RVA: 0xF9ABF0
    bool PointOnPolygon(IntPoint pt, OutPt* pp, bool UseFullRange);  // RVA: 0xF9AE60
    static bool SlopesEqual(TEdge* e1, TEdge* e2, bool UseFullRange);  // RVA: 0xF9BC10
    static bool SlopesEqual(IntPoint pt1, IntPoint pt2, IntPoint pt3, bool UseFullRange);  // RVA: 0xF9BD70
    static bool SlopesEqual(IntPoint pt1, IntPoint pt2, IntPoint pt3, IntPoint pt4, bool UseFullRange);  // RVA: 0xF9BEB0
    void .ctor();  // RVA: 0xF9C560
    void Clear();  // RVA: 0xF99EA0
    void DisposeLocalMinimaList();  // RVA: 0xF9A290
    void RangeTest(IntPoint Pt, bool useFullRange);  // RVA: 0xF9B800
    void InitEdge(TEdge* e, TEdge* eNext, TEdge* ePrev, IntPoint pt);  // RVA: 0xF9A8F0
    void InitEdge2(TEdge* e, PolyType polyType);  // RVA: 0xF9A840
    TEdge* FindNextLocMin(TEdge* E);  // RVA: 0xF9A3A0
    TEdge* ProcessBound(TEdge* E, bool LeftBoundIsForward);  // RVA: 0xF9B1B0
    bool AddPath(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> pg, PolyType polyType, bool Closed);  // RVA: 0xF98480
    bool AddPaths(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> ppg, PolyType polyType, bool closed);  // RVA: 0xF99DD0
    bool Pt2IsBetweenPt1AndPt3(IntPoint pt1, IntPoint pt2, IntPoint pt3);  // RVA: 0xF9B780
    TEdge* RemoveEdge(TEdge* e);  // RVA: 0xF9B8E0
    void SetDx(TEdge* e);  // RVA: 0xF9BBB0
    void InsertLocalMinima(LocalMinima* newLm);  // RVA: 0xF9A950
    bool PopLocalMinima(int64_t Y, LocalMinima* current);  // RVA: 0xF9B100
    void ReverseHorizontal(TEdge* e);  // RVA: 0xF9BB80
    void Reset();  // RVA: 0xF9B960
    static IntRect GetBounds(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> paths);  // RVA: 0xF9A4B0
    void InsertScanbeam(int64_t Y);  // RVA: 0xF9AA10
    bool PopScanbeam(int64_t Y);  // RVA: 0xF9B160
    bool LocalMinimaPending();  // RVA: 0xAD9900
    OutRec* CreateOutRec();  // RVA: 0xF9A080
    void DisposeOutRec(int32_t index);  // RVA: 0xF9A310
    void UpdateEdgeIntoAEL(TEdge* e);  // RVA: 0xF9C320
    void SwapPositionsInAEL(TEdge* edge1, TEdge* edge2);  // RVA: 0xF9C000
    void DeleteFromAEL(TEdge* e);  // RVA: 0xF9A1D0
};

// Namespace: <global>
struct NodeType
{
public:
    // Static fields
    // static NodeType ntAny;
    // static NodeType ntOpen;
    // static NodeType ntClosed;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Clipper : public ClipperBase
{
public:
    // Static fields
    // static int32_t ioReverseSolution;
    // static int32_t ioStrictlySimple;
    // static int32_t ioPreserveCollinear;

    uint8_t pad_0000[0x48]; // 0x0000
    ClipType m_ClipType; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Maxima* m_Maxima; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TEdge* m_SortedEdges; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<Cinemachine.ClipperLib.IntersectNode> m_IntersectList; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.IComparer<Cinemachine.ClipperLib.IntersectNode> m_IntersectNodeComparer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    bool m_ExecuteLocked; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    PolyFillType m_ClipFillType; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    PolyFillType m_SubjFillType; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<Cinemachine.ClipperLib.Join> m_Joins; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<Cinemachine.ClipperLib.Join> m_GhostJoins; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    bool m_UsingPolyTree; // 0x0090
    bool <ReverseSolution>k__BackingField; // 0x0091
    bool <StrictlySimple>k__BackingField; // 0x0092

    // Methods
    void .ctor(int32_t InitOptions);  // RVA: 0xFA9F90
    void InsertMaxima(int64_t X);  // RVA: 0xFA2EA0
    bool get_ReverseSolution();  // RVA: 0xB21BA0
    void set_ReverseSolution(bool value);  // RVA: 0xB21BC0
    bool get_StrictlySimple();  // RVA: 0xFAA200
    void set_StrictlySimple(bool value);  // RVA: 0xFAA210
    bool Execute(ClipType clipType, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> solution, PolyFillType FillType);  // RVA: 0xFA0DA0
    bool Execute(ClipType clipType, PolyTree* polytree, PolyFillType FillType);  // RVA: 0xFA0D80
    bool Execute(ClipType clipType, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> solution, PolyFillType subjFillType, PolyFillType clipFillType);  // RVA: 0xFA0DC0
    bool Execute(ClipType clipType, PolyTree* polytree, PolyFillType subjFillType, PolyFillType clipFillType);  // RVA: 0xFA0F60
    void FixHoleLinkage(OutRec* outRec);  // RVA: 0xFA1430
    bool ExecuteInternal();  // RVA: 0xFA08E0
    void DisposeAllPolyPts();  // RVA: 0xF9EFA0
    void AddJoin(OutPt* Op1, OutPt* Op2, IntPoint OffPt);  // RVA: 0xF9C820
    void AddGhostJoin(OutPt* Op, IntPoint OffPt);  // RVA: 0xF9C710
    void InsertLocalMinimaIntoAEL(int64_t botY);  // RVA: 0xFA2950
    void InsertEdgeIntoAEL(TEdge* edge, TEdge* startEdge);  // RVA: 0xFA27A0
    bool E2InsertsBeforeE1(TEdge* e1, TEdge* e2);  // RVA: 0xFA0730
    bool IsEvenOddFillType(TEdge* edge);  // RVA: 0xFA3C70
    bool IsEvenOddAltFillType(TEdge* edge);  // RVA: 0xFA3C40
    bool IsContributing(TEdge* edge);  // RVA: 0xFA3AB0
    void SetWindingCount(TEdge* edge);  // RVA: 0xFA9360
    void AddEdgeToSEL(TEdge* edge);  // RVA: 0xF9C630
    bool PopEdgeFromSEL(TEdge* e);  // RVA: 0xFA7070
    void CopyAELToSEL();  // RVA: 0xF9EE70
    void SwapPositionsInSEL(TEdge* edge1, TEdge* edge2);  // RVA: 0xFA9A00
    void AddLocalMaxPoly(TEdge* e1, TEdge* e2, IntPoint pt);  // RVA: 0xF9C950
    OutPt* AddLocalMinPoly(TEdge* e1, TEdge* e2, IntPoint pt);  // RVA: 0xF9CA10
    OutPt* AddOutPt(TEdge* e, IntPoint pt);  // RVA: 0xF9CCB0
    OutPt* GetLastOutPt(TEdge* e);  // RVA: 0xFA22D0
    void SwapPoints(IntPoint pt1, IntPoint pt2);  // RVA: 0xFA99A0
    bool HorzSegmentsOverlap(int64_t seg1a, int64_t seg1b, int64_t seg2a, int64_t seg2b);  // RVA: 0xFA2760
    void SetHoleState(TEdge* e, OutRec* outRec);  // RVA: 0xFA9250
    double GetDx(IntPoint pt1, IntPoint pt2);  // RVA: 0xFA2230
    bool FirstIsBottomPt(OutPt* btmPt1, OutPt* btmPt2);  // RVA: 0xFA1040
    OutPt* GetBottomPt(OutPt* pp);  // RVA: 0xFA2110
    OutRec* GetLowermostRec(OutRec* outRec1, OutRec* outRec2);  // RVA: 0xFA2350
    bool OutRec1RightOfOutRec2(OutRec* outRec1, OutRec* outRec2);  // RVA: 0xFA6A00
    OutRec* GetOutRec(int32_t idx);  // RVA: 0xFA25B0
    void AppendPolygon(TEdge* e1, TEdge* e2);  // RVA: 0xF9D130
    void ReversePolyPtLinks(OutPt* pp);  // RVA: 0xFA91B0
    static void SwapSides(TEdge* edge1, TEdge* edge2);  // RVA: 0xFA9D10
    static void SwapPolyIndexes(TEdge* edge1, TEdge* edge2);  // RVA: 0xFA99D0
    void IntersectEdges(TEdge* e1, TEdge* e2, IntPoint pt);  // RVA: 0xFA3010
    void DeleteFromSEL(TEdge* e);  // RVA: 0xF9EEE0
    void ProcessHorizontals();  // RVA: 0xFA8CA0
    void GetHorzDirection(TEdge* HorzEdge, Direction Dir, int64_t Left, int64_t Right);  // RVA: 0xFA2270
    void ProcessHorizontal(TEdge* horzEdge);  // RVA: 0xFA77B0
    TEdge* GetNextInAEL(TEdge* e, Direction Direction);  // RVA: 0xFA2580
    bool IsMinima(TEdge* e);  // RVA: 0xFA3D10
    bool IsMaxima(TEdge* e, double Y);  // RVA: 0xFA3CE0
    bool IsIntermediate(TEdge* e, double Y);  // RVA: 0xFA3CA0
    TEdge* GetMaximaPair(TEdge* e);  // RVA: 0xFA2500
    TEdge* GetMaximaPairEx(TEdge* e);  // RVA: 0xFA2440
    bool ProcessIntersections(int64_t topY);  // RVA: 0xFA8E80
    void BuildIntersectList(int64_t topY);  // RVA: 0xF9DD10
    bool EdgesAdjacent(IntersectNode* inode);  // RVA: 0xFA0840
    static int32_t IntersectNodeSort(IntersectNode* node1, IntersectNode* node2);  // RVA: 0xFA3630
    bool FixupIntersectionOrder();  // RVA: 0xFA19B0
    void ProcessIntersectList();  // RVA: 0xFA8D70
    static int64_t Round(double value);  // RVA: 0xFA9220
    static int64_t TopX(TEdge* edge, int64_t currentY);  // RVA: 0xFA9D40
    void IntersectPoint(TEdge* edge1, TEdge* edge2, IntPoint ip);  // RVA: 0xFA3650
    void ProcessEdgesAtTopOfScanbeam(int64_t topY);  // RVA: 0xFA7120
    void DoMaxima(TEdge* e);  // RVA: 0xF9F180
    static void ReversePaths(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> polys);  // RVA: 0xFA9090
    static bool Orientation(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> poly);  // RVA: 0xFA6890
    int32_t PointCount(OutPt* pts);  // RVA: 0xFA6A50
    void BuildResult(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> polyg);  // RVA: 0xF9E430
    void BuildResult2(PolyTree* polytree);  // RVA: 0xF9DFD0
    void FixupOutPolyline(OutRec* outrec);  // RVA: 0xFA2020
    void FixupOutPolygon(OutRec* outRec);  // RVA: 0xFA1C60
    OutPt* DupOutPt(OutPt* outPt, bool InsertAfter);  // RVA: 0xFA05F0
    bool GetOverlap(int64_t a1, int64_t a2, int64_t b1, int64_t b2, int64_t Left, int64_t Right);  // RVA: 0xFA2660
    bool JoinHorz(OutPt* op1, OutPt* op1b, OutPt* op2, OutPt* op2b, IntPoint Pt, bool DiscardLeft);  // RVA: 0xFA46B0
    bool JoinPoints(Join* j, OutRec* outRec1, OutRec* outRec2);  // RVA: 0xFA4AA0
    static int32_t PointInPolygon(IntPoint pt, System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path);  // RVA: 0xFA6BD0
    static int32_t PointInPolygon(IntPoint pt, OutPt* op);  // RVA: 0xFA6A80
    static bool Poly2ContainsPoly1(OutPt* outPt1, OutPt* outPt2);  // RVA: 0xFA6E30
    void FixupFirstLefts1(OutRec* OldOutRec, OutRec* NewOutRec);  // RVA: 0xFA14B0
    void FixupFirstLefts2(OutRec* innerOutRec, OutRec* outerOutRec);  // RVA: 0xFA1640
    void FixupFirstLefts3(OutRec* OldOutRec, OutRec* NewOutRec);  // RVA: 0xFA1860
    static OutRec* ParseFirstLeft(OutRec* FirstLeft);  // RVA: 0xFA6A30
    void JoinCommonEdges();  // RVA: 0xFA3D50
    void UpdateOutPtIdxs(OutRec* outrec);  // RVA: 0xFA9F60
    void DoSimplePolygons();  // RVA: 0xFA0300
    static double Area(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> poly);  // RVA: 0xF9DAD0
    double Area(OutRec* outRec);  // RVA: 0xF9DC30
    double Area(OutPt* op);  // RVA: 0xF9DCA0
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> SimplifyPolygon(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> poly, PolyFillType fillType);  // RVA: 0xFA95A0
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> SimplifyPolygons(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> polys, PolyFillType fillType);  // RVA: 0xFA9690
    static double DistanceSqrd(IntPoint pt1, IntPoint pt2);  // RVA: 0xF9F140
    static double DistanceFromLineSqrd(IntPoint pt, IntPoint ln1, IntPoint ln2);  // RVA: 0xF9F0C0
    static bool SlopesNearCollinear(IntPoint pt1, IntPoint pt2, IntPoint pt3, double distSqrd);  // RVA: 0xFA9780
    static bool PointsAreClose(IntPoint pt1, IntPoint pt2, double distSqrd);  // RVA: 0xFA6DF0
    static OutPt* ExcludeOp(OutPt* op);  // RVA: 0xFA0880
    static System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> CleanPolygon(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path, double distance);  // RVA: 0xF9E680
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> CleanPolygons(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> polys, double distance);  // RVA: 0xF9EC70
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> Minkowski(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> pattern, System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path, bool IsSum, bool IsClosed);  // RVA: 0xFA5D60
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> MinkowskiSum(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> pattern, System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path, bool pathIsClosed);  // RVA: 0xFA5C90
    static System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> TranslatePath(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path, IntPoint delta);  // RVA: 0xFA9DB0
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> MinkowskiSum(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> pattern, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> paths, bool pathIsClosed);  // RVA: 0xFA5A30
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> MinkowskiDiff(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> poly1, System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> poly2);  // RVA: 0xFA5970
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> PolyTreeToPaths(PolyTree* polytree);  // RVA: 0xFA6FC0
    static void AddPolyNodeToPaths(PolyNode* polynode, NodeType nt, System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> paths);  // RVA: 0xF9CF90
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> OpenPathsFromPolyTree(PolyTree* polytree);  // RVA: 0xFA6720
    static System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> ClosedPathsFromPolyTree(PolyTree* polytree);  // RVA: 0xF9EDC0
};

// Namespace: <global>
class ClipperOffset
{
public:
    // Static fields
    // static double two_pi;
    // static double def_arc_tolerance;

    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> m_destPolys; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> m_srcPoly; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> m_destPoly; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<Cinemachine.ClipperLib.DoublePoint> m_normals; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    double m_delta; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    double m_sinA; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    double m_sin; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    double m_cos; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    double m_miterLim; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    double m_StepsPerRad; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    IntPoint m_lowest; // 0x0060
    uint8_t pad_0061[0xF]; // 0x0061
    PolyNode* m_polyNodes; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    double <ArcTolerance>k__BackingField; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    double <MiterLimit>k__BackingField; // 0x0080

    // Methods
    double get_ArcTolerance();  // RVA: 0xFB22D0
    void set_ArcTolerance(double value);  // RVA: 0xFB22F0
    double get_MiterLimit();  // RVA: 0xFB22E0
    void set_MiterLimit(double value);  // RVA: 0xFB2300
    void .ctor(double miterLimit, double arcTolerance);  // RVA: 0xFB21F0
    void Clear();  // RVA: 0xFAE970
    static int64_t Round(double value);  // RVA: 0xFA9220
    void AddPath(System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint> path, JoinType joinType, EndType endType);  // RVA: 0xFAE2C0
    void AddPaths(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>> paths, JoinType joinType, EndType endType);  // RVA: 0xFAE830
    void FixOrientations();  // RVA: 0xFB16A0
    static DoublePoint GetUnitNormal(IntPoint pt1, IntPoint pt2);  // RVA: 0xFB1870
    void DoOffset(double delta);  // RVA: 0xFAEC50
    void Execute(System.Collections.Generic.List<System.Collections.Generic.List<Cinemachine.ClipperLib.IntPoint>>& solution, double delta);  // RVA: 0xFB1220
    void Execute(PolyTree* solution, double delta);  // RVA: 0xFB0C30
    void OffsetPoint(int32_t j, int32_t k, JoinType jointype);  // RVA: 0xFB1980
    void DoSquare(int32_t j, int32_t k);  // RVA: 0xFB0700
    void DoMiter(int32_t j, int32_t k, double r);  // RVA: 0xFAE9E0
    void DoRound(int32_t j, int32_t k);  // RVA: 0xFB0200
};

// Namespace: <global>
class ClipperException : public Exception
{
public:

    // Methods
    void .ctor(Il2CppString* description);  // RVA: 0xFAE260
};

namespace Cinemachine
{

    // Namespace: Cinemachine
    class ClipperLib
    {
    public:
    };

} // namespace Cinemachine

namespace Cinemachine.PostFX
{

    // Namespace: Cinemachine.PostFX
    class CinemachinePostProcessing : public CinemachineExtension
    {
    public:
    
        // Methods
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0x4160A0
        void .ctor();  // RVA: 0x697550
    };

} // namespace Cinemachine.PostFX

// Namespace: <global>
struct FocusTrackingMode
{
public:
    // Static fields
    // static FocusTrackingMode None;
    // static FocusTrackingMode LookAtTarget;
    // static FocusTrackingMode FollowTarget;
    // static FocusTrackingMode CustomTarget;
    // static FocusTrackingMode Camera;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class VcamExtraState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VolumeProfile* mProfileCopy; // 0x0010

    // Methods
    void CreateProfileCopy(VolumeProfile* source);  // RVA: 0xFB7820
    void DestroyProfileCopy();  // RVA: 0xFB7AA0
    void .ctor();  // RVA: 0x427B90
};

namespace Cinemachine.PostFX
{

    // Namespace: Cinemachine.PostFX
    class CinemachineVolumeSettings : public CinemachineExtension
    {
    public:
        // Static fields
        // static float s_VolumePriority;
        // static Il2CppString* sVolumeOwnerName;
        // static System.Collections.Generic.List<UnityEngine.Rendering.Volume> sVolumes;
    
        uint8_t pad_0000[0x30]; // 0x0000
        bool m_FocusTracksTarget; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        FocusTrackingMode m_FocusTracking; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Transform* m_FocusTarget; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float m_FocusOffset; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        VolumeProfile* m_Profile; // 0x0048
    
        // Methods
        bool get_IsValid();  // RVA: 0xFAE1C0
        void InvalidateCachedProfile();  // RVA: 0xFADA50
        void OnEnable();  // RVA: 0xFADC50
        void OnDestroy();  // RVA: 0xFADBA0
        void PostPipelineStageCallback(CinemachineVirtualCameraBase* vcam, Stage stage, CameraState state, float deltaTime);  // RVA: 0xFADD00
        static void OnCameraCut(CinemachineBrain* brain);  // RVA: 0x4160A0
        static void ApplyPostFX(CinemachineBrain* brain);  // RVA: 0xFAD010
        static System.Collections.Generic.List<UnityEngine.Rendering.Volume> GetDynamicBrainVolumes(CinemachineBrain* brain, int32_t minVolumes);  // RVA: 0xFAD3F0
        static void InitializeModule();  // RVA: 0xFAD880
        void .ctor();  // RVA: 0x697550
        static void .cctor();  // RVA: 0xFAE0E0
    };

} // namespace Cinemachine.PostFX

// Namespace: <global>
class OnGUIDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x426AE0
    void Invoke();  // RVA: 0x416790
    IAsyncResult* BeginInvoke(AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x426AA0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x426AD0
};

namespace Cinemachine.Utility
{

    // Namespace: Cinemachine.Utility
    class CinemachineDebug
    {
    public:
        // Static fields
        // static System.Collections.Generic.HashSet<UnityEngine.Object> mClients;
        // static OnGUIDelegate* OnGUIHandlers;
        // static System.Collections.Generic.List<System.Text.StringBuilder> mAvailableStringBuilders;
    
    
        // Methods
        static void ReleaseScreenPos(Il2CppObject* client);  // RVA: 0xFACD30
        static Rect GetScreenPos(Il2CppObject* client, Il2CppString* text, GUIStyle* style);  // RVA: 0xFAC9B0
        static StringBuilder* SBFromPool();  // RVA: 0xFACF10
        static void ReturnToPool(StringBuilder* sb);  // RVA: 0xFACDD0
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: Cinemachine.Utility
    class GaussianWindow1d`1
    {
    public:
        T[][] mData; // 0x0000
        Single[][] mKernel; // 0x0000
        int32_t mCurrentPos; // 0x0000
        float <Sigma>k__BackingField; // 0x0000
    
        // Methods
        float get_Sigma();  // RVA: 0x27F130
        void set_Sigma(float value);  // RVA: 0x26F060
        int32_t get_KernelSize();  // RVA: 0x276B00
        void GenerateKernel(float sigma, int32_t maxKernelRadius);
        T Compute(int32_t windowPos);  // RVA: 0x3506D0
        void .ctor(float sigma, int32_t maxKernelRadius);
        void Reset();  // RVA: 0x26DD20
        bool IsEmpty();  // RVA: 0x26F7B0
        void AddValue(T v);  // RVA: 0x3506D0
        T Filter(T v);  // RVA: 0x3506D0
        T Value();  // RVA: 0x3506D0
        int32_t get_BufferLength();  // RVA: 0x276B00
        void SetBufferValue(int32_t index, T value);  // RVA: 0x3506D0
        T GetBufferValue(int32_t index);  // RVA: 0x3506D0
    };

    // Namespace: Cinemachine.Utility
    class GaussianWindow1D_Vector3 : public GaussianWindow1d`1
    {
    public:
    
        // Methods
        void .ctor(float sigma, int32_t maxKernelRadius);  // RVA: 0xFB31C0
        Vector3 Compute(int32_t windowPos);  // RVA: 0xFB3030
    };

    // Namespace: Cinemachine.Utility
    class GaussianWindow1D_Quaternion : public GaussianWindow1d`1
    {
    public:
    
        // Methods
        void .ctor(float sigma, int32_t maxKernelRadius);  // RVA: 0xFB2FD0
        Quaternion Compute(int32_t windowPos);  // RVA: 0xFB2A70
    };

    // Namespace: Cinemachine.Utility
    class GaussianWindow1D_CameraRotation : public GaussianWindow1d`1
    {
    public:
    
        // Methods
        void .ctor(float sigma, int32_t maxKernelRadius);  // RVA: 0xFB2A10
        Vector2 Compute(int32_t windowPos);  // RVA: 0xFB27F0
    };

    // Namespace: Cinemachine.Utility
    class PositionPredictor
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector3 m_Velocity; // 0x0010
        uint8_t pad_0011[0xB]; // 0x0011
        Vector3 m_SmoothDampVelocity; // 0x001C
        uint8_t pad_001D[0xB]; // 0x001D
        Vector3 m_Pos; // 0x0028
        uint8_t pad_0029[0xB]; // 0x0029
        bool m_HavePos; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float Smoothing; // 0x0038
    
        // Methods
        bool IsEmpty();  // RVA: 0xFB3EA0
        void ApplyTransformDelta(Vector3 positionDelta);  // RVA: 0xFB3E60
        void Reset();  // RVA: 0xFB3F40
        void AddPosition(Vector3 pos, float deltaTime, float lookaheadTime);  // RVA: 0xFB3C30
        Vector3 PredictPositionDelta(float lookaheadTime);  // RVA: 0xFB3EB0
        Vector3 PredictPosition(float lookaheadTime);  // RVA: 0xFB3EF0
        void .ctor();  // RVA: 0x427B90
    };

    // Namespace: Cinemachine.Utility
    class Damper
    {
    public:
        // Static fields
        // static float Epsilon;
        // static float kNegligibleResidual;
        // static float kLogNegligibleResidual;
    
    
        // Methods
        static float DecayConstant(float time, float residual);  // RVA: 0xFB2790
        static float DecayedRemainder(float initial, float decayConstant, float deltaTime);  // RVA: 0xFB27C0
        static float Damp(float initial, float dampTime, float deltaTime);  // RVA: 0xFB2310
        static Vector3 Damp(Vector3 initial, Vector3 dampTime, float deltaTime);  // RVA: 0xFB2390
        static Vector3 Damp(Vector3 initial, float dampTime, float deltaTime);  // RVA: 0xFB2590
    };

} // namespace Cinemachine.Utility

// Namespace: <global>
struct Item
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 velocity; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    float weight; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float time; // 0x0020
};

namespace Cinemachine.Utility
{

    // Namespace: Cinemachine.Utility
    class HeadingTracker
    {
    public:
        // Static fields
        // static float mDecayExponent;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Item[][] mHistory; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t mTop; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t mBottom; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t mCount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3 mHeadingSum; // 0x0024
        uint8_t pad_0025[0xB]; // 0x0025
        float mWeightSum; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float mWeightTime; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Vector3 mLastGoodHeading; // 0x0038
    
        // Methods
        void .ctor(int32_t filterSize);  // RVA: 0xFB3B10
        int32_t get_FilterSize();  // RVA: 0x816E20
        void ClearHistory();  // RVA: 0xFB35B0
        static float Decay(float time);  // RVA: 0xFB3750
        void Add(Vector3 velocity);  // RVA: 0xFB3220
        void PopBottom();  // RVA: 0xFB3950
        void DecayHistory();  // RVA: 0xFB3610
        Vector3 GetReliableHeading();  // RVA: 0xFB37A0
    };

    // Namespace: Cinemachine.Utility
    class SplineHelpers
    {
    public:
    
        // Methods
        static Vector3 Bezier3(float t, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3);  // RVA: 0xFB4070
        static Vector3 BezierTangent3(float t, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3);  // RVA: 0xFB42C0
        static void BezierTangentWeights3(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 w0, Vector3 w1, Vector3 w2);  // RVA: 0xFB4530
        static float Bezier1(float t, float p0, float p1, float p2, float p3);  // RVA: 0xFB3FD0
        static float BezierTangent1(float t, float p0, float p1, float p2, float p3);  // RVA: 0xFB41E0
        static void ComputeSmoothControlPoints(Vector4[][] knot, Vector4[][] ctrl1, Vector4[][] ctrl2);  // RVA: 0xFB4A10
        static void ComputeSmoothControlPointsLooped(Vector4[][] knot, Vector4[][] ctrl1, Vector4[][] ctrl2);  // RVA: 0xFB4720
    };

    // Namespace: Cinemachine.Utility
    class UnityVectorExtensions
    {
    public:
        // Static fields
        // static float Epsilon;
    
    
        // Methods
        static bool IsNaN(Vector2 v);  // RVA: 0xFB7050
        static bool IsNaN(Vector3 v);  // RVA: 0xFB7080
        static float ClosestPointOnSegment(Vector3 p, Vector3 s0, Vector3 s1);  // RVA: 0xFB69F0
        static float ClosestPointOnSegment(Vector2 p, Vector2 s0, Vector2 s1);  // RVA: 0xFB6940
        static Vector3 ProjectOntoPlane(Vector3 vector, Vector3 planeNormal);  // RVA: 0xFB71D0
        static Vector2 SquareNormalize(Vector2 v);  // RVA: 0xFB7790
        static int32_t FindIntersection(Vector2 p1, Vector2 p2, Vector2 q1, Vector2 q2, Vector2 intersection);  // RVA: 0xFB6C60
        static float Cross(Vector2 v1, Vector2 v2);  // RVA: 0xFB6C30
        static Vector2 Abs(Vector2 v);  // RVA: 0x7C5350
        static Vector3 Abs(Vector3 v);  // RVA: 0xFB66E0
        static bool IsUniform(Vector2 v);  // RVA: 0xFB7170
        static bool IsUniform(Vector3 v);  // RVA: 0xFB70B0
        static bool AlmostZero(Vector3 v);  // RVA: 0xFB6720
        static void ConservativeSetPositionAndRotation(Transform* t, Vector3 pos, Quaternion rot);  // RVA: 0xFB6AE0
        static float Angle(Vector3 v1, Vector3 v2);  // RVA: 0xFB6760
        static float SignedAngle(Vector3 v1, Vector3 v2, Vector3 up);  // RVA: 0xFB7370
        static Quaternion SafeFromToRotation(Vector3 v1, Vector3 v2, Vector3 up);  // RVA: 0xFB7260
        static Vector3 SlerpWithReferenceUp(Vector3 vA, Vector3 vB, float t, Vector3 up);  // RVA: 0xFB7490
    };

    // Namespace: Cinemachine.Utility
    class UnityQuaternionExtensions
    {
    public:
    
        // Methods
        static Quaternion SlerpWithReferenceUp(Quaternion qA, Quaternion qB, float t, Vector3 up);  // RVA: 0xFB5E80
        static Quaternion Normalized(Quaternion q);  // RVA: 0xFB5D20
        static Vector2 GetCameraRotationToTarget(Quaternion orient, Vector3 lookAtDir, Vector3 worldUp);  // RVA: 0xFB5680
        static Quaternion ApplyCameraRotation(Quaternion orient, Vector2 rot, Vector3 worldUp);  // RVA: 0xFB5360
    };

    // Namespace: Cinemachine.Utility
    class UnityRectExtensions
    {
    public:
    
        // Methods
        static Rect Inflated(Rect r, Vector2 delta);  // RVA: 0xFB6640
    };

} // namespace Cinemachine.Utility

// Namespace: <global>
struct __StaticArrayInitTypeSize=12
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=7270
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=8030
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=8030 81EBF8A0F314D39B410C13B9BCD5BBBEA8EE6D14DBC89D9D5B589A230D3C4AB2;
    // static __StaticArrayInitTypeSize=12 AA5072B96927F710758B3E5237A84AC68E397BC4E1BF7E864A950696D743CC32;
    // static __StaticArrayInitTypeSize=7270 CC5A154BD9AEE11EF8B4A372FD7694B696BF0524DDBDEBD9109A60CFA1661C56;

};

