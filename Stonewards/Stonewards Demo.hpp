// Namespace: <global>
class Readme : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Texture2D* icon; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MonoString* title; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Section[][] sections; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool loadedLayout; // 0x0030

    // Methods
    void .ctor();
};

// Namespace: <global>
class BoatFloat : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float amplitude; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float frequency; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float verticalSpeed; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float verticalDistance; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float maxTiltAngle; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float tiltSpeed; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    Vector3 _initialPosition; // 0x0038
    uint8_t pad_0039[0xB]; // 0x0039
    Quaternion _initialRotation; // 0x0044
    uint8_t pad_0045[0xF]; // 0x0045
    float _randomFrequency; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float _randomVerticalSpeed; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float _randomVerticalDistance; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float _randomTiltAngle; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float _randomTiltDirection; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float _timeOffset; // 0x0068

    // Methods
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class Rotator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    RotationDirection directionRotation; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float rotationSpeed; // 0x0024

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class Controls
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InputActionAsset* <asset>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputActionMap* m_Player; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<Controls.IPlayerActions> m_PlayerActionsCallbackInterfaces; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InputAction* m_Player_Jump; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    InputAction* m_Player_Move; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InputAction* m_Player_Look; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputAction* m_Player_Sprint; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    InputAction* m_Player_ToggleWalk; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    InputAction* m_Player_Aim; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    InputAction* m_Player_Crouch; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputAction* m_Player_LockOn; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t m_KeyboardandMouseSchemeIndex; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t m_GamepadSchemeIndex; // 0x006C

    // Methods
    InputActionAsset* get_asset();
    void .ctor();
    void Finalize();
    void Dispose();
    System.Nullable<UnityEngine.InputSystem.InputBinding> get_bindingMask();
    void set_bindingMask(System.Nullable<UnityEngine.InputSystem.InputBinding> value);
    System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> get_devices();
    void set_devices(System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> value);
    UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControlScheme> get_controlSchemes();
    bool Contains(InputAction* action);
    System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction> GetEnumerator();
    IEnumerator* System.Collections.IEnumerable.GetEnumerator();
    void Enable();
    void Disable();
    System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding> get_bindings();
    InputAction* FindAction(MonoString* actionNameOrId, bool throwIfNotFound);
    int32_t FindBinding(InputBinding bindingMask, InputAction* action);
    PlayerActions get_Player();
    InputControlScheme get_KeyboardandMouseScheme();
    InputControlScheme get_GamepadScheme();
};

// Namespace: <global>
class Hovl_DemoLasers : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* FirePoint; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Camera* Cam; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject[][] Prefabs; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* Instance; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Hovl_Laser* LaserScript; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Hovl_Laser2* LaserScript2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float MaxLength; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    Ray RayMouse; // 0x0054
    uint8_t pad_0055[0x17]; // 0x0055
    Vector3 direction; // 0x006C
    uint8_t pad_006D[0xB]; // 0x006D
    Quaternion rotation; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    float windowDpi; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    int32_t Prefab; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float buttonSaver; // 0x0090

    // Methods
    void Start();
    void Update();
    void OnGUI();
    void Counter(int32_t count);
    void RotateToMouseDirection(GameObject* obj, Vector3 destination);
    void .ctor();
};

// Namespace: <global>
class Hovl_Laser : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* HitEffect; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LineRenderer* Laser; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ParticleSystem[][] Effects; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ParticleSystem[][] Hit; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t damageOverTime; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float HitOffset; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    bool useLaserRotation; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float MaxLength; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float MainTextureLength; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float NoiseTextureLength; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    Vector4 Length; // 0x0058
    uint8_t pad_0059[0xF]; // 0x0059
    bool LaserSaver; // 0x0068
    bool UpdateSaver; // 0x0069
    uint8_t pad_006A[0x2]; // 0x006A
    LayerMask layerMask; // 0x006C

    // Methods
    void UpdateLayerMask(LayerMask _Mask);
    void Start();
    void Update();
    void DisablePrepare();
    void .ctor();
};

// Namespace: <global>
class Hovl_Laser2 : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* HitEffect; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* FlashEffect; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ParticleSystem* laserPS; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ParticleSystem[][] Flash; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ParticleSystem[][] Hit; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Material* laserMat; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Particle[][] particles; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Vector3[][] particlesPositions; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float laserScale; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    Color laserColor; // 0x0064
    uint8_t pad_0065[0xF]; // 0x0065
    float HitOffset; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float MaxLength; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    bool UpdateSaver; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    int32_t particleCount; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float dissovleTimer; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    bool startDissovle; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    LayerMask layerMask; // 0x008C

    // Methods
    void UpdateLayerMask(LayerMask _Mask);
    void Start();
    void Update();
    void AddParticles();
    void DisablePrepare();
    void .ctor();
};

// Namespace: <global>
class OverlayFX : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Renderer* targetRenderer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<UnityEngine.ParticleSystem> particleSystems; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float particleSizeMultiplier; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    Vector3 rendererTrueForward; // 0x0034

    // Methods
    void OnEnable();
    void OnValidate();
    void OnDrawGizmosSelected();
    void SyncParticleSystems();
    void UpdateBounds(Renderer* rend);
    void .ctor();
};

// Namespace: <global>
class QuickOutline : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.HashSet<UnityEngine.Mesh> registeredMeshes;

    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<UnityEngine.Mesh> bakeKeys; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<QuickOutline.ListVector3> bakeValues; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Renderer[][] renderers; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Material* outlineMaskMaterial; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Material* outlineFillMaterial; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Mode outlineMode; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    Color outlineColor; // 0x004C
    uint8_t pad_004D[0xF]; // 0x004D
    float outlineWidth; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    bool precomputeOutline; // 0x0060
    bool needsUpdate; // 0x0061

    // Methods
    Mode get_OutlineMode();
    void set_OutlineMode(Mode value);
    Color get_OutlineColor();
    void set_OutlineColor(Color value);
    float get_OutlineWidth();
    void set_OutlineWidth(float value);
    void Init(Renderer[][] _renderers);
    void Init(Renderer* _renderer);
    void Init();
    void Awake();
    void OnEnable();
    void OnValidate();
    void Update();
    void OnDisable();
    void OnDestroy();
    void Bake();
    void LoadSmoothNormals(Renderer[][] targets);
    System.Collections.Generic.List<UnityEngine.Vector3> SmoothNormals(Mesh* mesh);
    void CombineSubmeshes(Mesh* mesh, Material[][] materials);
    void UpdateMaterialProperties();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Demo_FreeCam : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* mouseY; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* mouseX; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* zoomAxis; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool doFocus; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float focusLimit; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float minFocusDistance; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float doubleClickTime; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float cooldown; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    KeyCode firstUndoKey; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    KeyCode secondUndoKey; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float moveSpeed; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float rotationSpeed; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float zoomSpeed; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    Quaternion prevRot; // 0x0060
    uint8_t pad_0061[0xF]; // 0x0061
    Vector3 prevPos; // 0x0070
    uint8_t pad_0071[0xB]; // 0x0071
    KeyCode forwardKey; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    KeyCode backKey; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    KeyCode leftKey; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    KeyCode rightKey; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    KeyCode flatMoveKey; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    KeyCode anchoredMoveKey; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    KeyCode anchoredRotateKey; // 0x0094

    // Methods
    void Start();
    void Update();
    void LateUpdate();
    void FocusObject();
    void SavePosAndRot();
    void GoBackToLastPosition();
    Vector3 GetOffset(Vector3 targetPos, Vector3 targetSize);
    void .ctor();
};

// Namespace: <global>
class Demo_TurningAroundEffect : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float rotSpeed_X; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float rotSpeed_Y; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float rotSpeed_Z; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float globalSpeed; // 0x002C

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class Demo_LevelUpCustom_Manager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    ParticleSystem* levelUpCustom; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* leveUpText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Slider* m_SliderColor01; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Slider* m_SliderColor02; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Toggle* buttonSparkles; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Toggle* buttonGround; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Toggle* buttonArrows; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* PSsparkles; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* PSground; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* PSarrows; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float m_Hue_01; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float m_Hue_02; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool addSparkles; // 0x0078
    bool addGround; // 0x0079
    bool addArrows; // 0x007A
    uint8_t pad_007B[0x1]; // 0x007B
    float loopTime; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float currentTime; // 0x0080

    // Methods
    void Start();
    void Update();
    void Reset();
    void AddSparkles(bool value);
    void AddArrows(bool value);
    void AddGround(bool value);
    void .ctor();
};

// Namespace: <global>
class Demo_TextLevelUp : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* cam; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMesh* textMesh; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool start; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float speed; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    Color textColor; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    float curentTime; // 0x0048

    // Methods
    void Awake();
    IEnumerator* Delay();
    void Update();
    void .ctor();
};

// Namespace: <global>
class SC_Vefects_Delete_After_Time : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float countdownSeconds; // 0x0020

    // Methods
    void Awake();
    IEnumerator* waiter();
    void .ctor();
};

// Namespace: <global>
class SC_Vefects_Easy_Spawn : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* toSpawnVFX; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* WhereToSpawn; // 0x0028

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class DemoManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    ParticleSystem[][] VFXList; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* spawnedVFX; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* spawnOffSet; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t currentVFXIndex; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float loopTime; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float currentTime; // 0x0040

    // Methods
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class MagicAttacks_Manager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* slashManager; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* spawnOffSet; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* target; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject[][] FXList_Cast; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject[][] FXList_Hit; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject[][] FXList_Projectile; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float delay; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float reinitializeDelay; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float delayShootProjectile; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    bool isCasting; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t currentFX_Element; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t nextFX_Element; // 0x0064

    // Methods
    void Awake();
    void Update();
    void ChangeEffect();
    void InputsFXElement();
    void CastProjectile();
    void ShootProjectile();
    void .ctor();
};

// Namespace: <global>
class MagicAttacks_Projectile : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* FX_Hit; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualEffect* FX_Projectile; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualEffect* FX_ProjectileTail; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioSource* SFX_Projectile; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector3 projectileDir; // 0x0040

    // Methods
    void Start();
    void Setup(Vector3 projectileDir);
    void Update();
    void OnTriggerEnter(Collider* col);
    void .ctor();
};

// Namespace: <global>
class SlashCircle : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    AudioSource* SFX_SlashCircle; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* SFX_GameobjectHolder; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float slashCircleTime; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float slashCircleRate; // 0x0034

    // Methods
    void Awake();
    void Update();
    void .ctor();
};

// Namespace: <global>
class Slash_Manager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* magicAttacksManager; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* spawnOffset; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject[][] FXList_Slash; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject[][] FXList_SlashCircle; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject[][] FXList_Piercing; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject[][] currentFXList; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float delay; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float reinitializeDelay; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool usingSlashCircle; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t currentFXElement; // 0x005C

    // Methods
    void Awake();
    void Update();
    void ChangeEffect();
    void InputsFXType();
    void InputsFXElement();
    void DoTheSlash(GameObject* FX);
    void .ctor();
};

// Namespace: <global>
class ServerAuthorityExamplePlayerController : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Rigidbody* rb; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    SmoothSyncMirror* smoothSync; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float transformMovementSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float rigidbodyMovementForce; // 0x007C

    // Methods
    void Awake();
    void OnStartServer();
    void Update();
    void CmdTeleport();
    void CmdMove(KeyCode keyCode);
    void .ctor();
    bool Weaved();
    void UserCode_CmdTeleport();
    static void InvokeUserCode_CmdTeleport(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdMove__KeyCode(KeyCode keyCode);
    static void InvokeUserCode_CmdMove__KeyCode(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class SmoothSyncMirrorExamplePlayerController : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Rigidbody* rb; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Rigidbody2D* rb2D; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    SmoothSyncMirror* smoothSync; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* childObjectToControl; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    float transformMovementSpeed; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float rigidbodyMovementForce; // 0x008C

    // Methods
    void Start();
    void Update();
    static bool validateStateOfPlayer(StateMirror* latestReceivedState, StateMirror* latestValidatedState);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class DisplaySceneManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* hitPlayText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* groupHolder; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* iconPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SpriteAtlas* framesAtlas; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteAtlas* iconsAtlas; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Sprite[][] frameSprites; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Sprite[][] iconSprites; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.UI.Image> frames; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.UI.Image> icons; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float iconsAmount; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t currentFrame; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    int32_t currentIcon; // 0x0070

    // Methods
    void Start();
    void randomize();
    void randomFrame();
    void randomIcon();
    void setFrame();
    void setIcon();
    void .ctor();
};

// Namespace: <global>
class Waypoint_Indicator : public MonoBehaviour
{
public:
    // Static fields
    // static MonoString* description;

    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* mainCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* mainCanvasRect; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject[][] mainCanvasObjs; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* mainCanvasObj; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MonoString* canvas_tag_name; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Camera* mainCamera; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject[][] mainCameraObjs; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* mainCameraObj; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    MonoString* camera_tag_name; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject[][] distCalTargets; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* distCalTarget; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    MonoString* distCalTargetTag; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Sprite* onScreenSprite; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Sprite* offScreenSprite; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    GameObject* onScreenGameObject; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* offScreenGameObject; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MonoString* textDescription; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* distIncrement; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TMP_FontAsset* textFont; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Sprite* onScreenCenteredSprite; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* onScreenCenteredPrefab; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    GameObject* wpParentGameObject; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    RectTransform* wpParentRectTransform; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Image* wpParentImage; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    GameObject* spriteIndicator; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    RectTransform* spriteIndicatorRect; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Image* spriteIndicatorImage; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    GameObject* gameObjectIndicator; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    CanvasGroup* gameObjectIndicatorCanvasGroup; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    GameObject* gameObjectIndicatorChildGameObject; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    RectTransform* gameObjectIndicatorChildRect; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    RawImage* gameObjectIndicatorChildImg; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    GameObject* textGameObject; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    TextMeshProUGUI* textField; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    ContentSizeFitter* textContentSizeFitter; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    GameObject* wpCenteredParentGameObject; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    RectTransform* wpCenteredParentRectTransform; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    Image* wpCenteredParentImage; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    GameObject* iconCenteredGameObject; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    RectTransform* iconCentered; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    Image* iconCenteredImage; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    GameObject* centeredPrefabIndicator; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    CanvasGroup* centeredPrefabIndicatorCanvasGroup; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    GameObject* centeredPrefabIndicatorChildGameObject; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    RectTransform* centeredPrefabIndicatorChildRect; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    RawImage* centeredPrefabIndicatorChildImg; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    bool isDynamic; // 0x0190
    bool enableCustomIndicatorSiblingIndex; // 0x0191
    uint8_t pad_0192[0x2]; // 0x0192
    int32_t customIndicatorSiblingIndex; // 0x0194
    uint8_t pad_0195[0x3]; // 0x0195
    float canvasScaleFactor; // 0x0198
    uint8_t pad_0199[0x3]; // 0x0199
    Vector2 canvasRefRez; // 0x019C
    uint8_t pad_019D[0x7]; // 0x019D
    bool multiCam; // 0x01A4
    bool enableStandardTracking; // 0x01A5
    bool enableCenteredTracking; // 0x01A6
    bool showBoundaryBox; // 0x01A7
    Color boundaryBoxColor; // 0x01A8
    uint8_t pad_01A9[0xF]; // 0x01A9
    Vector2Int parentSize; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    float parentPaddingX; // 0x01C0
    uint8_t pad_01C1[0x3]; // 0x01C1
    float parentPaddingY; // 0x01C4
    uint8_t pad_01C5[0x3]; // 0x01C5
    float onScreenSnapOffset_X; // 0x01C8
    uint8_t pad_01C9[0x3]; // 0x01C9
    float onScreenSnapOffset_Y; // 0x01CC
    uint8_t pad_01CD[0x3]; // 0x01CD
    float displayRangeMin; // 0x01D0
    uint8_t pad_01D1[0x3]; // 0x01D1
    float displayRangeMax; // 0x01D4
    uint8_t pad_01D5[0x3]; // 0x01D5
    float displayRangeDifference; // 0x01D8
    uint8_t pad_01D9[0x3]; // 0x01D9
    bool raycastTarget; // 0x01DC
    bool enableSprite; // 0x01DD
    uint8_t pad_01DE[0x2]; // 0x01DE
    int32_t spriteDepth; // 0x01E0
    uint8_t pad_01E1[0x3]; // 0x01E1
    bool offScreenSpriteRotates; // 0x01E4
    uint8_t pad_01E5[0x3]; // 0x01E5
    Color onScreenSpriteColor; // 0x01E8
    uint8_t pad_01E9[0xF]; // 0x01E9
    float onScreenSpriteSize; // 0x01F8
    uint8_t pad_01F9[0x3]; // 0x01F9
    Vector2 onScreenSpriteOffset; // 0x01FC
    uint8_t pad_01FD[0x7]; // 0x01FD
    float onScreenSpriteRotation; // 0x0204
    uint8_t pad_0205[0x3]; // 0x0205
    bool onScreenSpriteFadeWithRange; // 0x0208
    bool onScreenSpriteScaleWithRange; // 0x0209
    bool reverseOnScreenSpriteScaleWithRange; // 0x020A
    bool onScreenSpriteHide; // 0x020B
    Color offScreenSpriteColor; // 0x020C
    uint8_t pad_020D[0xF]; // 0x020D
    float offScreenSpriteSize; // 0x021C
    uint8_t pad_021D[0x3]; // 0x021D
    Vector2 offScreenSpriteOffset; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    float offScreenSpriteRotation; // 0x0228
    uint8_t pad_0229[0x3]; // 0x0229
    bool offScreenSpriteFadeWithRange; // 0x022C
    bool offScreenScaleWithRange; // 0x022D
    bool reverseOffScreenSpriteScaleWithRange; // 0x022E
    bool offScreenSpriteHide; // 0x022F
    bool enableGameObject; // 0x0230
    uint8_t pad_0231[0x3]; // 0x0231
    int32_t gameObjectDepth; // 0x0234
    uint8_t pad_0235[0x3]; // 0x0235
    bool offScreenObjectRotates; // 0x0238
    uint8_t pad_0239[0x3]; // 0x0239
    Color onScreenGameObjectColor; // 0x023C
    uint8_t pad_023D[0xF]; // 0x023D
    float onScreenGameObjectSize; // 0x024C
    uint8_t pad_024D[0x3]; // 0x024D
    Vector2 onScreenGameObjectOffset; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    float onScreenGameObjectRotation; // 0x0258
    uint8_t pad_0259[0x3]; // 0x0259
    bool onScreenGameObjectFadeWithRange; // 0x025C
    bool onScreenGameObjectScaleWithRange; // 0x025D
    bool reverseOnScreenGameObjectScaleWithRange; // 0x025E
    bool onScreenGameObjectHide; // 0x025F
    Color offScreenGameObjectColor; // 0x0260
    uint8_t pad_0261[0xF]; // 0x0261
    float offScreenGameObjectSize; // 0x0270
    uint8_t pad_0271[0x3]; // 0x0271
    Vector2 offScreenGameObjectOffset; // 0x0274
    uint8_t pad_0275[0x7]; // 0x0275
    float offScreenGameObjectRotation; // 0x027C
    uint8_t pad_027D[0x3]; // 0x027D
    bool offScreenGameObjectFadeWithRange; // 0x0280
    bool offScreenGameObjectScaleWithRange; // 0x0281
    bool reverseOffScreenGameObjectScaleWithRange; // 0x0282
    bool offScreenGameObjectHide; // 0x0283
    bool enableText; // 0x0284
    uint8_t pad_0285[0x3]; // 0x0285
    int32_t textDepth; // 0x0288
    uint8_t pad_0289[0x3]; // 0x0289
    float textSize; // 0x028C
    uint8_t pad_028D[0x3]; // 0x028D
    Color textColor; // 0x0290
    uint8_t pad_0291[0xF]; // 0x0291
    textAlignValue textAlign; // 0x02A0
    uint8_t pad_02A1[0x3]; // 0x02A1
    float textLineSpacing; // 0x02A4
    uint8_t pad_02A5[0x3]; // 0x02A5
    Vector2 edgeDetectOffset; // 0x02A8
    uint8_t pad_02A9[0x7]; // 0x02A9
    bool onScreenSpriteHideDesc; // 0x02B0
    bool onScreenSpriteHideDist; // 0x02B1
    uint8_t pad_02B2[0x2]; // 0x02B2
    Vector2 onScreenTextOffset; // 0x02B4
    uint8_t pad_02B5[0x7]; // 0x02B5
    bool offScreenSpriteHideDesc; // 0x02BC
    bool offScreenSpriteHideDist; // 0x02BD
    uint8_t pad_02BE[0x2]; // 0x02BE
    Vector2 offScreenTextOffset; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    bool showDiameter; // 0x02C8
    uint8_t pad_02C9[0x3]; // 0x02C9
    Color diameterColor; // 0x02CC
    uint8_t pad_02CD[0xF]; // 0x02CD
    float diameterSize; // 0x02DC
    uint8_t pad_02DD[0x3]; // 0x02DD
    float onScreenCenteredRangeMin; // 0x02E0
    uint8_t pad_02E1[0x3]; // 0x02E1
    float onScreenCenteredRangeMax; // 0x02E4
    uint8_t pad_02E5[0x3]; // 0x02E5
    float onScreenCenteredDisplayRangeDifference; // 0x02E8
    uint8_t pad_02E9[0x3]; // 0x02E9
    bool raycastTargetCentered; // 0x02EC
    bool enableCenteredSprite; // 0x02ED
    uint8_t pad_02EE[0x2]; // 0x02EE
    int32_t onScreenCenteredSpriteDepth; // 0x02F0
    uint8_t pad_02F1[0x3]; // 0x02F1
    Color onScreenCenteredSpriteColor; // 0x02F4
    uint8_t pad_02F5[0xF]; // 0x02F5
    float onScreenCenteredSpriteSize; // 0x0304
    uint8_t pad_0305[0x3]; // 0x0305
    float onScreenCenteredSpriteRotation; // 0x0308
    uint8_t pad_0309[0x3]; // 0x0309
    bool onScreenSpriteCenteredFadeWithRange; // 0x030C
    bool onScreenSpriteCenteredScaleWithRange; // 0x030D
    bool onScreenSpriteCenteredScaleReverse; // 0x030E
    bool hideOnScreenCenteredSprite; // 0x030F
    bool hideOffScreenCenteredSprite; // 0x0310
    bool enableCenteredPrefab; // 0x0311
    uint8_t pad_0312[0x2]; // 0x0312
    int32_t onScreenCenteredPrefabDepth; // 0x0314
    uint8_t pad_0315[0x3]; // 0x0315
    Color onScreenCenteredPrefabColor; // 0x0318
    uint8_t pad_0319[0xF]; // 0x0319
    float onScreenCenteredPrefabSize; // 0x0328
    uint8_t pad_0329[0x3]; // 0x0329
    float onScreenCenteredPrefabRotation; // 0x032C
    uint8_t pad_032D[0x3]; // 0x032D
    bool onScreenPrefabCenteredFadeWithRange; // 0x0330
    bool onScreenPrefabCenteredScaleWithRange; // 0x0331
    bool onScreenPrefabCenteredScaleReverse; // 0x0332
    bool hideOnScreenCenteredPrefab; // 0x0333
    bool hideOffScreenCenteredPrefab; // 0x0334
    bool enableRadiusGizmo; // 0x0335
    uint8_t pad_0336[0x2]; // 0x0336
    Color radiusGizmoColor; // 0x0338
    uint8_t pad_0339[0xF]; // 0x0339
    float radiusGizmoSize; // 0x0348
    uint8_t pad_0349[0x3]; // 0x0349
    bool toggleSetupOptions; // 0x034C
    bool toggleParentOptions; // 0x034D
    bool toggleSpriteOptions; // 0x034E
    bool toggleGameObjectOptions; // 0x034F
    bool toggleTextOptions; // 0x0350
    bool toggleDiameterOptions; // 0x0351
    bool toggleCenteredSpriteOptions; // 0x0352
    bool toggleCenteredPrefabOptions; // 0x0353
    bool toggleRadiusGizmoOptions; // 0x0354
    uint8_t pad_0355[0x3]; // 0x0355
    Vector3 screenCenter; // 0x0358
    uint8_t pad_0359[0xB]; // 0x0359
    Vector3 wpParentPos; // 0x0364
    uint8_t pad_0365[0xB]; // 0x0365
    Vector3 objectInWorldScreenPos; // 0x0370
    uint8_t pad_0371[0xB]; // 0x0371
    float angle; // 0x037C
    uint8_t pad_037D[0x3]; // 0x037D
    float waypointDist; // 0x0380
    uint8_t pad_0381[0x3]; // 0x0381
    int32_t waypointDistInt; // 0x0384
    uint8_t pad_0385[0x3]; // 0x0385
    int32_t iSpriteIndicator; // 0x0388
    uint8_t pad_0389[0x3]; // 0x0389
    int32_t iGameObjectIndicator; // 0x038C
    uint8_t pad_038D[0x3]; // 0x038D
    int32_t iCenteredSpriteIndicator; // 0x0390
    uint8_t pad_0391[0x3]; // 0x0391
    int32_t iCenteredPrafabIndicator; // 0x0394
    uint8_t pad_0395[0x3]; // 0x0395
    int32_t iText; // 0x0398
    uint8_t pad_0399[0x3]; // 0x0399
    int32_t iScreenCheck; // 0x039C
    uint8_t pad_039D[0x3]; // 0x039D
    int32_t iStandardTrackingEnabled; // 0x03A0
    uint8_t pad_03A1[0x3]; // 0x03A1
    bool parentOnScreen; // 0x03A4
    uint8_t pad_03A5[0x3]; // 0x03A5
    float iconAlphaValue; // 0x03A8
    uint8_t pad_03A9[0x3]; // 0x03A9
    float minX; // 0x03AC
    uint8_t pad_03AD[0x3]; // 0x03AD
    float maxX; // 0x03B0
    uint8_t pad_03B1[0x3]; // 0x03B1
    float minY; // 0x03B4
    uint8_t pad_03B5[0x3]; // 0x03B5
    float maxY; // 0x03B8
    uint8_t pad_03B9[0x3]; // 0x03B9
    Vector2 onScreenCenteredSpriteOriginalSize; // 0x03BC
    uint8_t pad_03BD[0x7]; // 0x03BD
    Vector2 newOnScreenCenteredSize; // 0x03C4
    uint8_t pad_03C5[0x7]; // 0x03C5
    Vector2 newOnScreenPrefabCenteredSize; // 0x03CC
    uint8_t pad_03CD[0x7]; // 0x03CD
    Vector3 screenCenteredCenter; // 0x03D4
    uint8_t pad_03D5[0xB]; // 0x03D5
    Vector3 wpCenteredParentPos; // 0x03E0
    uint8_t pad_03E1[0xB]; // 0x03E1
    Color iconCenteredColor; // 0x03EC
    uint8_t pad_03ED[0xF]; // 0x03ED
    Color prefabCenteredColor; // 0x03FC
    uint8_t pad_03FD[0xF]; // 0x03FD
    float waypointCenteredDist; // 0x040C
    uint8_t pad_040D[0x3]; // 0x040D
    int32_t iCenteredTrackingEnabled; // 0x0410
    uint8_t pad_0411[0x3]; // 0x0411
    bool centeredParentOnScreen; // 0x0414
    uint8_t pad_0415[0x3]; // 0x0415
    float iconCenteredAlphaValue; // 0x0418
    uint8_t pad_0419[0x3]; // 0x0419
    float prefabCenteredAlphaValue; // 0x041C
    uint8_t pad_041D[0x3]; // 0x041D
    float centeredScaleValueX; // 0x0420
    uint8_t pad_0421[0x3]; // 0x0421
    float centeredScaleValueY; // 0x0424
    uint8_t pad_0425[0x3]; // 0x0425
    Color spriteIndicatorColor; // 0x0428
    uint8_t pad_0429[0xF]; // 0x0429
    bool spriteIndicatorCreated; // 0x0438
    uint8_t pad_0439[0x3]; // 0x0439
    Vector2 onScreenSpriteOriginalSize; // 0x043C
    uint8_t pad_043D[0x7]; // 0x043D
    Vector2 offScreenSpriteOriginalSize; // 0x0444
    uint8_t pad_0445[0x7]; // 0x0445
    Vector2 newOnScreenSize; // 0x044C
    uint8_t pad_044D[0x7]; // 0x044D
    Vector2 newOffScreenSize; // 0x0454
    uint8_t pad_0455[0x7]; // 0x0455
    float Sprite_Z_Scale; // 0x045C
    uint8_t pad_045D[0x3]; // 0x045D
    float scaleValueX; // 0x0460
    uint8_t pad_0461[0x3]; // 0x0461
    float scaleValueY; // 0x0464
    uint8_t pad_0465[0x3]; // 0x0465
    bool gameObjectIndicatorCreated; // 0x0468
    uint8_t pad_0469[0x3]; // 0x0469
    int32_t gameObjectIndicatorOnOffScreenStatus; // 0x046C
    uint8_t pad_046D[0x3]; // 0x046D
    Color gameObjectIndicatorChildIndicatorColor; // 0x0470
    uint8_t pad_0471[0xF]; // 0x0471
    float Prefab_Z_Scale; // 0x0480
    uint8_t pad_0481[0x3]; // 0x0481
    float scaleValueGameObjectX; // 0x0484
    uint8_t pad_0485[0x3]; // 0x0485
    float scaleValueGameObjectY; // 0x0488
    uint8_t pad_0489[0x3]; // 0x0489
    bool waypointTextCreated; // 0x048C
    uint8_t pad_048D[0x3]; // 0x048D
    float cosCentered; // 0x0490
    uint8_t pad_0491[0x3]; // 0x0491
    float sinCentered; // 0x0494
    uint8_t pad_0495[0x3]; // 0x0495
    float mCentered; // 0x0498
    uint8_t pad_0499[0x3]; // 0x0499
    Vector3 screenBoundsCentered; // 0x049C
    uint8_t pad_049D[0xB]; // 0x049D
    float angleCentered; // 0x04A8
    uint8_t pad_04A9[0x3]; // 0x04A9
    Vector3 objectInWorldScreenPosCentered; // 0x04AC
    uint8_t pad_04AD[0xB]; // 0x04AD
    Vector3 objectWorldToViewportPosCentered; // 0x04B8
    uint8_t pad_04B9[0xB]; // 0x04B9
    bool waypointIconCenteredCreated; // 0x04C4
    uint8_t pad_04C5[0x3]; // 0x04C5
    Color centeredPrefabIndicatorChildIndicatorColor; // 0x04C8
    uint8_t pad_04C9[0xF]; // 0x04C9
    bool centeredPrefabIndicatorCreated; // 0x04D8
    bool distanceTargetDefined; // 0x04D9
    bool topEdgeDetected; // 0x04DA
    bool botEdgeDetected; // 0x04DB
    bool rightEdgeDetected; // 0x04DC
    bool leftEdgeDetected; // 0x04DD
    uint8_t pad_04DE[0x2]; // 0x04DE
    float cos; // 0x04E0
    uint8_t pad_04E1[0x3]; // 0x04E1
    float sin; // 0x04E4
    uint8_t pad_04E5[0x3]; // 0x04E5
    float m; // 0x04E8
    uint8_t pad_04E9[0x3]; // 0x04E9
    Vector3 screenBounds; // 0x04EC
    uint8_t pad_04ED[0xB]; // 0x04ED
    Vector3 objectInViewportPos; // 0x04F8
    uint8_t pad_04F9[0xB]; // 0x04F9
    Vector3 proportionalPosition; // 0x0504
    uint8_t pad_0505[0xB]; // 0x0505
    Vector3 uiOffset; // 0x0510
    uint8_t pad_0511[0xB]; // 0x0511
    Vector3 objectInViewportPosCentered; // 0x051C
    uint8_t pad_051D[0xB]; // 0x051D
    Vector3 proportionalPositionCentered; // 0x0528
    uint8_t pad_0529[0xB]; // 0x0529
    Vector3 uiOffsetCentered; // 0x0534
    uint8_t pad_0535[0xB]; // 0x0535
    bool doesCamTagExist; // 0x0540
    bool doesCanvasTagExist; // 0x0541

    // Methods
    bool DoesTagExist(MonoString* SomeTag);
    void CheckForCamera();
    void CheckForCanvas();
    void SwitchCams(MonoString* newCameraTag, MonoString* newDistCalTargetTag);
    void ToggleVisibility();
    void Awake();
    void OnEnable();
    void OnDisable();
    void Update();
    void InstantiateWaypointParent();
    void InstantiateWaypointIcon();
    void InstantiateWaypointGameObject();
    void InstantiateWaypointText();
    void FadeSpriteWithRange();
    void FadeGameObjectWithRange();
    void ScaleSpriteWithRange(Vector2 OnOffScreenSize, bool reverseScalingSprite);
    void ScaleGameObjectWithRange(float OnOffScreenSize, bool reverseScalingGameObject);
    void DestroyWaypointParent();
    void DestroyWaypointIcon();
    void DestroyWaypointGameObject();
    void DestroyWaypointText();
    void SetGameObjectIndicatorStatus();
    void OnDrawGizmos();
    void InstantiateCenteredWaypointParent();
    void InstantiateCenteredWaypointIcon();
    void InstantiateCenteredWaypointPrefab();
    void FadeWithRangeCentered();
    void FadeCenteredPrefabWithRange();
    void ScaleWithRangeCentered(Vector2 OnOffScreenSize, bool reverseScalingSprite);
    void ScaleCenteredPrefabWithRange(float OnOffScreenSize, bool reverseScalingPrefab);
    void DestroyCenteredSprite();
    void DestroyCenteredPrefab();
    void CalculateDistance();
    void ScreenEdgeDetectTop();
    void ScreenEdgeDetectBot();
    void ScreenEdgeDetectRight();
    void ScreenEdgeDetectLeft();
    void .ctor();
};

// Namespace: <global>
class WPI_Manager : public MonoBehaviour
{
public:
    // Static fields
    // static bool waypoint_indicators_are_visible;
    // static MyDelegate* onToggleVisibility;
    // static MyStringDelegate* onSwitchCams;


    // Methods
    static void ToggleVisibility();
    static void SwitchCams(MonoString* newCameraTag, MonoString* newDistCalTargetTag);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class button_manager_WPIDEMO : public MonoBehaviour
{
public:

    // Methods
    void ResetToTitleScreen();
    void LoadDayScene();
    void LoadNightScene();
    void LoadMultiCamScene();
    void LoadSplitScreenScene();
    void CloseInstructionWindow();
    void OpenInstructionWindow();
    void .ctor();
};

// Namespace: <global>
class event_manager_WPIDEMO : public MonoBehaviour
{
public:
    // Static fields
    // static MyVoidGameDelegate* onStartLevel;
    // static MyVoidGameDelegate* onResetToTitleScreen;
    // static MyVoidGameDelegate* onOpenOptionScreen;
    // static MyVoidGameDelegate* onCloseOptionScreen;
    // static MyVoidGameDelegate* onCloseOptionScreenWithX;
    // static MyIntDelegate* onLoadScene;
    // static MyFloatDelegate* onDamagePlayerShield;
    // static MyBoolDelegate* onPlayerMoving;
    // static MyStringDelegate* onShowAlertBig;


    // Methods
    static void StartLevel();
    static void ResetToTitleScreen();
    static void OpenOptionScreen();
    static void CloseOptionScreen();
    static void CloseOptionScreenWithX();
    static void LoadScene(int32_t sceneNum);
    static void DamagePlayerShield(float dmgAmount);
    static void PlayerMoving(bool state);
    static void ShowAlertBig(MonoString* message);
    void .ctor();
};

// Namespace: <global>
class fpc_WPIDEMO : public MonoBehaviour
{
public:
    // Static fields
    // static bool playerCanMove;

    uint8_t pad_0000[0x20]; // 0x0000
    float speed; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float sensitivityX; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float sensitivityY; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float minimumY; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float maximumY; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float rotationY; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float rotationX; // 0x0038

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class instruction_window_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* btn_Day; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* btn_Day_Selected; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* indicator_Day; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* btn_Night; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* btn_Night_Selected; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* indicator_Night; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* btn_MultiCam; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* btn_MultiCam_Selected; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* indicator_MultiCam; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* btn_SplitScreen; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* btn_SplitScreen_Selected; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* indicator_SplitScreen; // 0x0078

    // Methods
    void OnEnable();
    void OnDisable();
    void SwapSceneButtonStates(int32_t levelToLoad);
    void Start();
    void .ctor();
};

// Namespace: <global>
class camera_manager_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* cam1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* cam2; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* cam3; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MonoString* newCameraTag; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MonoString* newDistCalTargetTag; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    TextMeshProUGUI* activeWPIDemoCamTxtField; // 0x0048

    // Methods
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class reload_WPIDEMO : public MonoBehaviour
{
public:

    // Methods
    void OnEnable();
    void OnDisable();
    void reloadObject();
    void .ctor();
};

// Namespace: <global>
class reset_WPIDEMO : public MonoBehaviour
{
public:

    // Methods
    void OnEnable();
    void OnDisable();
    void Update();
    void ClearGameObjects();
    void .ctor();
};

// Namespace: <global>
class rotate_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float XSpeed; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float YSpeed; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float ZSpeed; // 0x0028

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class scene_day_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* levelCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* spawnCountTextField; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TextMeshProUGUI* spawnDescTextField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TextMeshProUGUI* wpDesc; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Transform* spawnPos; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* shapeSelectGameObject; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RectTransform* shapeSelectRect; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* shapeSelectImg; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Sprite* slot01; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Sprite* slot02; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Sprite* slot03; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite* slot04; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Sprite* slot05; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GameObject* newWaypoint; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Rigidbody* newWaypointRB; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    MonoString* shapeName; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* btn_Day; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* btn_Day_Selected; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* btn_Night; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* btn_Night_Selected; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Material* skybox; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    float spawnSpeed; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    int32_t exampleNum; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    int32_t totalExamples; // 0x00D0

    // Methods
    void OnEnable();
    void OnDisable();
    void HideUI();
    void ShowUI();
    void Start();
    void Update();
    void Shoot(MonoString* str);
    void .ctor();
};

// Namespace: <global>
class scene_manager_WPIDEMO : public MonoBehaviour
{
public:
    // Static fields
    // static bool instructionsWindowOpen;
    // static bool canShoot;
    // static int32_t spawnCount;
    // static int32_t spawnCountMax;
    // static int32_t curLevel;

    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* mainCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* titleScreen; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* playerPos; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* instructionsWindowGameObject; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RectTransform* instructionsWindowRect; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* station1; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* station2; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* station3; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* station4; // 0x0060

    // Methods
    void OnEnable();
    void OnDisable();
    void Start();
    void Update();
    void HideTitleScreen();
    void LoadLevel(int32_t levelToLoad);
    void InstantiateStations();
    void DestroyStations();
    void CloseOptionScreenManually();
    void ToggleInstructions();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class scene_multi_cam_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* levelCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* skybox; // 0x0028

    // Methods
    void OnEnable();
    void OnDisable();
    void HideUI();
    void ShowUI();
    void Start();
    void .ctor();
};

// Namespace: <global>
class scene_night_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* levelCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* spawnCountTextField; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TextMeshProUGUI* spawnDescTextField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TextMeshProUGUI* wpDesc; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Transform* spawnPos; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* shapeSelectGameObject; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RectTransform* shapeSelectRect; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* shapeSelectImg; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Sprite* slot01; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Sprite* slot02; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Sprite* slot03; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite* slot04; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* newWaypoint; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Rigidbody* newWaypointRB; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    MonoString* shapeName; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* btn_Day; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* btn_Day_Selected; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* btn_Night; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* btn_Night_Selected; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Material* skybox; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    float spawnSpeed; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    int32_t exampleNum; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t totalExamples; // 0x00C8

    // Methods
    void OnEnable();
    void OnDisable();
    void HideUI();
    void ShowUI();
    void Start();
    void Update();
    void Shoot(MonoString* str);
    void .ctor();
};

// Namespace: <global>
class scene_split_screen_WPIDEMO : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* levelCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* skybox; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* sceneCam; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* firstPersonPlayer; // 0x0038

    // Methods
    void OnEnable();
    void OnDisable();
    void HideUI();
    void ShowUI();
    void Start();
    void .ctor();
};

// Namespace: <global>
class player_controls_splitscreen : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Rigidbody* rb; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CurrentPlayer currentPlayer; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float speed; // 0x002C

    // Methods
    void Update();
    void .ctor();
};

// Namespace: <global>
class Loader : public MonoBehaviour
{
public:

    // Methods
    void Start();
    void .ctor();
};

// Namespace: <global>
class NewInputVoiceBroadcastTrigger : public VoiceBroadcastTrigger
{
public:

    // Methods
    bool IsUserActivated();
    void .ctor();
};

// Namespace: <global>
class NewInputVoiceProximityBroadcastTrigger : public VoiceProximityBroadcastTrigger
{
public:

    // Methods
    bool IsUserActivated();
    void .ctor();
};

// Namespace: <global>
class FeetAudioDataSo : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    SurfaceFootstepData[][] surfaceFootsteps; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool isIn3D; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float volume; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool isNetworked; // 0x0028

    // Methods
    void .ctor();
};

// Namespace: <global>
struct SurfaceFootstepData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SurfaceFootStepType surfaceType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AudioClip[][] footstepsWalk; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioClip[][] footstepsRun; // 0x0020
};

// Namespace: <global>
struct SurfaceFootStepType
{
public:
    // Static fields
    // static SurfaceFootStepType Outside;
    // static SurfaceFootStepType Bastion;
    // static SurfaceFootStepType Mine;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class FPSAudioPlayer : public NetworkedAudioPlayer
{
public:
    uint8_t pad_0000[0x80]; // 0x0000
    FeetAudioDataSo* feetAudioData; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    AudioSource* feetAudioSource; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    FirstPersonController* player; // 0x0090

    // Methods
    void Awake();
    void OnHealthChanged(float currentHealth, float maxHealth, float healthDelta);
    void PlayStepSound(bool isRunning, SurfaceFootStepType surface);
    void CmdPlayStepSound(bool isRunning, SurfaceFootStepType surface);
    void RpcPlayStepSound(bool isRunning, SurfaceFootStepType surface);
    void PlayStepSoundLocally(bool isRunning, SurfaceFootStepType surface);
    void .ctor();
    bool Weaved();
    void UserCode_CmdPlayStepSound__Boolean__SurfaceFootStepType(bool isRunning, SurfaceFootStepType surface);
    static void InvokeUserCode_CmdPlayStepSound__Boolean__SurfaceFootStepType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayStepSound__Boolean__SurfaceFootStepType(bool isRunning, SurfaceFootStepType surface);
    static void InvokeUserCode_RpcPlayStepSound__Boolean__SurfaceFootStepType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class NetworkedAudioDataSo : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    SoundData[][] sounds; // 0x0018

    // Methods
    int32_t GetSoundDataByID(MonoString* _SoundID);
    void .ctor();
};

// Namespace: <global>
struct SoundData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* soundID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AudioClip[][] clips; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool loop; // 0x0020
    bool isIn3D; // 0x0021
    bool useCustomRolloff; // 0x0022
    uint8_t pad_0023[0x1]; // 0x0023
    AudioRolloffMode rolloffMode; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float minDistance; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float maxDistance; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    AnimationCurve* customRolloff; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float volume; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool isNetworked; // 0x003C
};

// Namespace: <global>
class NetworkedAudioPlayer : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t globalSoundInstanceId;

    uint8_t pad_0000[0x68]; // 0x0000
    AudioMixerGroup* mixerGroup; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    NetworkedAudioDataSo* networkedAudioDataSo; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.Dictionary<System.Int32,NetworkedAudioPlayer.PlayingSound> currentSounds; // 0x0078

    // Methods
    void PlaySound(MonoString* _SoundID);
    void StopSound(MonoString* _SoundID);
    void OnDestroy();
    void PlaySoundLocally(int32_t _SoundIndex, int32_t _InstanceId);
    void StopSoundLocally(int32_t _Index);
    IEnumerator* RemoveWhenFinished(int32_t _Index, AudioSource* _Source);
    AudioClip* GetRandomClipFromData(SoundData _SoundData);
    void CmdPlaySound(int32_t _SoundIndex);
    void RpcPlaySound(int32_t _SoundIndex, int32_t _InstanceId);
    void CmdStopSound(int32_t _InstanceId);
    void RpcStopSound(int32_t _InstanceId);
    void .ctor();
    bool Weaved();
    void UserCode_CmdPlaySound__Int32(int32_t _SoundIndex);
    static void InvokeUserCode_CmdPlaySound__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlaySound__Int32__Int32(int32_t _SoundIndex, int32_t _InstanceId);
    static void InvokeUserCode_RpcPlaySound__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdStopSound__Int32(int32_t _InstanceId);
    static void InvokeUserCode_CmdStopSound__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcStopSound__Int32(int32_t _InstanceId);
    static void InvokeUserCode_RpcStopSound__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class SimpleMenuMusic : public MonoBehaviour
{
public:
    // Static fields
    // static SimpleMenuMusic* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    AudioSource* audioSource; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Coroutine* fadeCoroutine; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* gameplaySceneName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MonoString* menuSceneName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MonoString* lobbySceneName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float fadeDuration; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float maxVolume; // 0x004C

    // Methods
    void Awake();
    void OnEnable();
    void OnDisable();
    void OnSceneLoaded(Scene scene, LoadSceneMode mode);
    void TriggerFade(float targetVolume);
    IEnumerator* FadeAudio(float targetVolume, float duration);
    void .ctor();
};

// Namespace: <global>
class AutomatedBallista : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t ChargeHash;
    // static int32_t Attack;

    uint8_t pad_0000[0x68]; // 0x0000
    GameObject* unlockedObject; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* checkVisibilityOrigin; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Transform* body; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* head; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* projectileSpawn; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Animator* animator; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* fakeArrow; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Projectile* projectile; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Collider[][] hits; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    EnemyController* target; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CharacterStat* damageStat; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_syncIsCharged; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_syncIsUnlocked; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float syncYaw; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float syncPitch; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    bool syncIsCharged; // 0x00D8
    bool syncIsUnlocked; // 0x00D9
    uint8_t pad_00DA[0x2]; // 0x00DA
    LayerMask enemyLayer; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    LayerMask obstacleMask; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float baseDamage; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float range; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float fireRate; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float projectileSpeed; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float rotationSpeed; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    float targetRefreshRate; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float aimTimeRequired; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float aimTimer; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float targetRefreshTimer; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    Quaternion headBaseRotation; // 0x0108
    uint8_t pad_0109[0xF]; // 0x0109
    float fireCooldown; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float syncDamage; // 0x011C

    // Methods
    CharacterStat* get_DamageStat();
    void PerformAttack();
    void UnlockBallista();
    void Awake();
    void Update();
    void LateUpdate();
    void FindTarget();
    void Aim();
    void Shoot();
    bool IsAligned();
    void Charge();
    bool HasLineOfSight(EnemyController* _Enemy);
    bool IsTargetValid();
    void OnStartServer();
    void OnStartClient();
    void ServerInit();
    void OnUnlockedChanged(bool _, bool _NewValue);
    void OnChargeChanged(bool _, bool _NewValue);
    void AddDamageModifier(float _Amount, StatModType _ModType, MonoString* _Source);
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_NetworksyncYaw();
    void set_NetworksyncYaw(float value);
    float get_NetworksyncPitch();
    void set_NetworksyncPitch(float value);
    bool get_NetworksyncIsCharged();
    void set_NetworksyncIsCharged(bool value);
    bool get_NetworksyncIsUnlocked();
    void set_NetworksyncIsUnlocked(bool value);
    float get_NetworksyncDamage();
    void set_NetworksyncDamage(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class AutomatedBallistaEventListener : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    AutomatedBallista* ballista; // 0x0020

    // Methods
    void PerformAttack();
    void Start();
    void .ctor();
};

// Namespace: <global>
class Ballista : public SiegeWeapon
{
public:
    // Static fields
    // static int32_t Charge;
    // static int32_t Attack;

    uint8_t pad_0000[0xF8]; // 0x0000
    Transform* head; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Projectile* projectile; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    Transform* cameraTarget; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    float recoilDistance; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    float recoilKickSpeed; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float recoilReturnSpeed; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    Quaternion headBaseRotation; // 0x011C
    uint8_t pad_011D[0xF]; // 0x011D
    float currentPitch; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    Vector3 headInitialLocalPos; // 0x0130
    uint8_t pad_0131[0xB]; // 0x0131
    float currentRecoil; // 0x013C

    // Methods
    Transform* GetCameraTarget();
    Transform* GetPlayerPosition();
    bool CanAim();
    void PerformAttack();
    void LateUpdate();
    void Init();
    void OnFire();
    void OnCharging(bool _Charging);
    void HandleCameraRotation();
    void HandleRecoil();
    void CmdFire();
    void CmdControlSiegeWeapon(FirstPersonController* _Player);
    void CmdLeaveTurret(FirstPersonController* _Player);
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_CmdFire();
    static void InvokeUserCode_CmdFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdControlSiegeWeapon__FirstPersonController(FirstPersonController* _Player);
    static void InvokeUserCode_CmdControlSiegeWeapon__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdLeaveTurret__FirstPersonController(FirstPersonController* _Player);
    static void InvokeUserCode_CmdLeaveTurret__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class SiegeWeapon : public NetworkBehaviour
{
public:
    // Static fields
    // static float SEND_INTERVAL;

    uint8_t pad_0000[0x68]; // 0x0000
    FirstPersonController* CurrentPlayer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    BoxCollider* interactionCollider; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ItemDataSO* projectileItemData; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* projectileSpawn; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* body; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Transform* playerPosition; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Animator* animator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    HudCatapult* HudCatapult; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Action<FirstPersonController,FirstPersonController> _Mirror_SyncVarHookDelegate_CurrentPlayer; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float SyncYaw; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float SyncPitch; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float SyncProjectileForce; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float SyncLaunchedProjectileForce; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float baseDamage; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float maxProjectileForce; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float minProjectileForceToFire; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float chargingSpeed; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float CurrentDamage; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    bool IsCharging; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    LayerMask targetLayer; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float yawSpeed; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float pitchSpeed; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float minPitch; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float maxPitch; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float SendTimer; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    NetworkBehaviourSyncVar ___CurrentPlayerNetId; // 0x00F0

    // Methods
    bool get_HasAuthorityOnTurret();
    bool IsAvailable();
    float GetCurrentChargeProgress();
    Transform* GetPlayerPosition();
    Transform* GetCameraTarget();
    bool CanAim();
    void PerformAttack();
    void Start();
    void Update();
    void LateUpdate();
    void Init();
    void OnFire();
    void OnCharging(bool _Charging);
    void OnSiegeWeaponLeave();
    void HandleCameraRotation();
    void CmdControlSiegeWeapon(FirstPersonController* _Player);
    void CmdSetProjectileForce(float _Value);
    void CmdLeaveTurret(FirstPersonController* _Player);
    void CmdSetRotation(float _Yaw, float _Pitch);
    void OnCurrentPlayerChanged(FirstPersonController* _OldPlayer, FirstPersonController* _NewPlayer);
    void .ctor();
    bool Weaved();
    float get_NetworkSyncYaw();
    void set_NetworkSyncYaw(float value);
    float get_NetworkSyncPitch();
    void set_NetworkSyncPitch(float value);
    float get_NetworkSyncProjectileForce();
    void set_NetworkSyncProjectileForce(float value);
    float get_NetworkSyncLaunchedProjectileForce();
    void set_NetworkSyncLaunchedProjectileForce(float value);
    FirstPersonController* get_NetworkCurrentPlayer();
    void set_NetworkCurrentPlayer(FirstPersonController* value);
    void UserCode_CmdControlSiegeWeapon__FirstPersonController(FirstPersonController* _Player);
    static void InvokeUserCode_CmdControlSiegeWeapon__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetProjectileForce__Single(float _Value);
    static void InvokeUserCode_CmdSetProjectileForce__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdLeaveTurret__FirstPersonController(FirstPersonController* _Player);
    static void InvokeUserCode_CmdLeaveTurret__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetRotation__Single__Single(float _Yaw, float _Pitch);
    static void InvokeUserCode_CmdSetRotation__Single__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CampFire : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Collider* col; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    CharacterStat* regenStat; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.Dictionary<PlayerStats,UnityEngine.Coroutine> activeHealing; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    float syncRegen; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float healTimer; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float baseHealRegen; // 0x0088

    // Methods
    void AddRegenModifier(float _Amount, StatModType _ModType, MonoString* _Source);
    void OnStartServer();
    void Awake();
    MonoString* GetFormattedValue(float value);
    void OnTriggerEnter(Collider* _Other);
    void OnTriggerExit(Collider* _Other);
    IEnumerator* HealOverTime(PlayerStats* _PlayerStats);
    void .ctor();
    bool Weaved();
    float get_NetworksyncRegen();
    void set_NetworksyncRegen(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Forge : public NetworkObjectBase
{
public:
    // Static fields
    // static int32_t POOL_SIZE;

    uint8_t pad_0000[0x78]; // 0x0000
    ForgeAnimator* forgeAnimator; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    RogueLikeDatabaseSO* rogueLikeDatabase; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* target; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TextMeshPro* nextLevelText; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.Dictionary<System.String,System.Collections.Generic.List<UnityEngine.GameObject>> itemPools; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t baseTemperature; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t currentDisplayedLevel; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    int32_t currentMaxCharge; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    int32_t currentCharge; // 0x00AC

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    Transform* get_Target();
    void OnStartServer();
    void OnStartClient();
    void ServerInit();
    void ClientInit();
    void OnChargeChanged(int32_t _CurrentCharge, int32_t _MaxCharge);
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    MonoString* GetInteractionStatInfo();
    void UpdateStatInfo(int32_t _CurrentCharge, int32_t _MaxCharge);
    void UpdateLevelText(int32_t level);
    void RefreshLocalizedText(MonoString* localizedString);
    void RPCUpdateText(int32_t _CurrentCharge, int32_t _MaxCharge, int32_t _CurrentLevel);
    void RpcPlayPlaceAnimation(Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    void InitializePools();
    GameObject* GetPooledObject(MonoString* _ItemID);
    void .ctor();
    bool Weaved();
    void UserCode_RPCUpdateText__Int32__Int32__Int32(int32_t _CurrentCharge, int32_t _MaxCharge, int32_t _CurrentLevel);
    static void InvokeUserCode_RPCUpdateText__Int32__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__String__Int32(Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    static void InvokeUserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class ForgeAnimator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Renderer* lavaRenderer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* baseMapProperty; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<UnityEngine.ParticleSystem> particleLights; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MonoString* depositFXID; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Material* lavaMaterialInstance; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float minLightIntensity; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float maxLightIntensity; // 0x004C

    // Methods
    void Awake();
    void UpdateChargeVisual(float _Ratio);
    void PlayDepositFX(Vector3 _Position);
    void .ctor();
};

// Namespace: <global>
class HornBase : public MonoBehaviour
{
public:
    // Static fields
    // static float TIME_BEFORE_WAVE_TO_BEGIN;

    uint8_t pad_0000[0x20]; // 0x0000
    AudioSource* beginWaveAudioSource; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool soundOn; // 0x0028

    // Methods
    void Start();
    void OnInitialized();
    void OnCountdownProgress(float _Obj);
    void .ctor();
};

// Namespace: <global>
class IDeadPlayerInteractable
{
public:

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlacePlayer(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, FirstPersonController* _DeadPlayer);
    bool IsPlaceable(FirstPersonController* _DeadPlayer);
};

// Namespace: <global>
class King : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t Attack;

    uint8_t pad_0000[0x68]; // 0x0000
    NetworkedAudioPlayer* audioPlayer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    KingAttackHitbox* kingAttackHitbox; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Transform* kingAttackHitboxSpawn; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    NetworkAnimator* animator; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    NpcSpeachController* speechController; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    NpcLookAt* npcLookAt; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Transform* rotationPoint; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    EnemyController* currentTarget; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Collider[][] hitsBuffer; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Collider* col; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Action<System.Single,System.Single> OnHealthChanged; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Action* <OnHit>k__BackingField; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Action* <OnPreDeath>k__BackingField; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Action* <OnDeath>k__BackingField; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    CharacterStat* <MaxHealth>k__BackingField; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    CharacterStat* <AttackPower>k__BackingField; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_currentHealth; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_currentMaxHealth; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    float currentHealth; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float currentMaxHealth; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    bool isDestroyed; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float maxHealth; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float baseAttackDamage; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    float attackCooldown; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float attackRange; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    bool canHealAfterWave; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    LayerMask enemyLayer; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float lastAttackTime; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    float lastTargetCheckTime; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    bool automaticRepairEnabled; // 0x0124

    // Methods
    void add_OnHealthChanged(System.Action<System.Single,System.Single> value);
    void remove_OnHealthChanged(System.Action<System.Single,System.Single> value);
    Action* get_OnHit();
    void set_OnHit(Action* value);
    Action* get_OnPreDeath();
    void set_OnPreDeath(Action* value);
    Action* get_OnDeath();
    void set_OnDeath(Action* value);
    IDamageable* get_Owner();
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    bool get_IsDestroyed();
    CharacterStat* get_MaxHealth();
    void set_MaxHealth(CharacterStat* value);
    CharacterStat* get_AttackPower();
    void set_AttackPower(CharacterStat* value);
    NpcSpeachController* get_SpeechController();
    void ServerInit();
    Vector3 GetRandomPositionAround(Vector3 _Position);
    bool CanTakeDamage(DamageType _Type);
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    void ServerRefreshSyncMaxHealth();
    float GetHealthPercentage();
    void PerformAttack();
    void Awake();
    void Update();
    bool CanAttack();
    void LaunchAttack();
    void FindNewTarget();
    void SpawnHitbox();
    void Destroy();
    void RotateTowards();
    void RpcOnKilled();
    void LocalOnHealthChanged(float _CurrentHealth, float _CurrentMaxHealth);
    void OnCurrentHealthValueChanged(float _OldValue, float _NewValue);
    void OnUpgrade(MonoString* _UpgradeID, float _Value);
    void OnEndWave();
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_NetworkcurrentHealth();
    void set_NetworkcurrentHealth(float value);
    float get_NetworkcurrentMaxHealth();
    void set_NetworkcurrentMaxHealth(float value);
    bool get_NetworkisDestroyed();
    void set_NetworkisDestroyed(bool value);
    void UserCode_RpcOnKilled();
    static void InvokeUserCode_RpcOnKilled(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class KingAnimatorEventReceiver : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    King* king; // 0x0020

    // Methods
    void Awake();
    void PerformAttack();
    void .ctor();
};

// Namespace: <global>
class KingHitbox : public Hitbox
{
public:

    // Methods
    void Start();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class InteractableListener : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    IInteractable* interactable; // 0x0020

    // Methods
    void Awake();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void Interact(FirstPersonController* _Owner);
    void .ctor();
};

// Namespace: <global>
class Ladder : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    Transform* startPoint; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* endPoint; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Vector3 maxTopOffset; // 0x0088

    // Methods
    Vector3 get_TopPosition();
    Transform* get_EndPoint();
    Vector3 get_Forward();
    float GetCurrentProgress(Vector3 _Position);
    void SetHasPlayer(bool _HasPlayer);
    void Interact(FirstPersonController* _Owner);
    MonoString* GetInteractionText();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class RevivePlayerInteractable : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    FirstPersonController* currentPlayer; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* playerPosition; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Coroutine* reviveCo; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Action<FirstPersonController,FirstPersonController> _Mirror_SyncVarHookDelegate_currentPlayer; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    float baseReviveTime; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float healthPercentageOnRevive; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    NetworkBehaviourSyncVar ___currentPlayerNetId; // 0x00A0

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlacePlayer(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, FirstPersonController* _DeadPlayer);
    bool IsPlaceable(FirstPersonController* _DeadPlayer);
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void OnStartServer();
    void ServerInit();
    void OnEndGame(bool _Obj);
    IEnumerator* ReviveCo();
    void OnPlayerChanged(FirstPersonController* _OldPlayer, FirstPersonController* _NewPlayer);
    void .ctor();
    bool Weaved();
    FirstPersonController* get_NetworkcurrentPlayer();
    void set_NetworkcurrentPlayer(FirstPersonController* value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Catapult : public SiegeWeapon
{
public:
    // Static fields
    // static int32_t Charge;
    // static int32_t Attack;

    uint8_t pad_0000[0xF8]; // 0x0000
    CatapultProjectileStack* catapultProjectileStack; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    ExplosiveProjectile* projectile; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    CatapultProjectileStack* catapultProjectileStackPrefab; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Transform* turretStackSpawn; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    float baseExplosionArea; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float currentExplosionArea; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    int32_t maxProjectileCountOnStack; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    NetworkBehaviourSyncVar ___catapultProjectileStackNetId; // 0x0124

    // Methods
    Transform* GetCameraTarget();
    Transform* GetPlayerPosition();
    bool CanAim();
    void PerformAttack();
    void Init();
    void OnFire();
    void OnCharging(bool _Charging);
    void OnUpgrade(MonoString* _UpgradeID);
    void CmdFire();
    void .ctor();
    static void .cctor();
    bool Weaved();
    CatapultProjectileStack* get_NetworkcatapultProjectileStack();
    void set_NetworkcatapultProjectileStack(CatapultProjectileStack* value);
    void UserCode_CmdFire();
    static void InvokeUserCode_CmdFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CatapultProjectileStack : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Renderer[][] outlinedRenderers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<UnityEngine.GameObject> visualStackLevels; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ItemDataSO* projectileDataSO; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    QuickOutline* QuickOutline; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_currentProjectileCount; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    int32_t currentProjectileCount; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    int32_t maxProjectileCount; // 0x0094

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    void ServerInit(ItemDataSO* _ItemDataSO, int32_t _MaxProjectileCount);
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
    int32_t GetCurrentProjectileCount();
    void RemoveProjectile(int32_t _Count);
    void Awake();
    void OnItemCountChanged(int32_t _OldCount, int32_t _NewCount);
    void DisableVisuals(int32_t _OldCount, int32_t _NewCount);
    void InitQuickOutline(Mode _Mode);
    void SetOutline(bool _Value);
    void RpcPlayPlaceAnimation(Vector3 _Origin, Quaternion _Rotation, int32_t _PreviousCount);
    void .ctor();
    bool Weaved();
    int32_t get_NetworkcurrentProjectileCount();
    void set_NetworkcurrentProjectileCount(int32_t value);
    void UserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__Int32(Vector3 _Origin, Quaternion _Rotation, int32_t _PreviousCount);
    static void InvokeUserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class SiegeWeaponAnimationEvent : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SiegeWeapon* siegeWeapon; // 0x0020

    // Methods
    void PerformAttack();
    void Start();
    void .ctor();
};

// Namespace: <global>
class SiegeWeaponInteractable : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SiegeWeapon* siegeWeapon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    QuickOutline* QuickOutline; // 0x0028

    // Methods
    void Interact(FirstPersonController* _Owner);
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void Awake();
    void InitQuickOutline(Mode _OutlineMode);
    void SetOutline(bool _B);
    void .ctor();
};

// Namespace: <global>
class UIKingHealthBar : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    King* king; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ProgressBar* healthBar; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* hideCoroutine; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float visibleDuration; // 0x0038

    // Methods
    void Start();
    void Init();
    void OnHealthChanged(float _CurrentHealth, float _MaxHealth);
    IEnumerator* HideAfterDelay();
    void .ctor();
};

// Namespace: <global>
class Wall : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    WallStats* wallStats; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float timeToRepairWallPart; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float maxHealth; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool automaticRepairEnabled; // 0x0078

    // Methods
    WallStats* get_Stats();
    void ServerInit();
    WallStats* GetClosestSegment(Vector3 _MonsterPos);
    bool IsPartDestroyed();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class WallCrosshairTarget : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* _uiWorldPosition; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Camera* _camera; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* _container; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualElement* _wallHealthElement; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Tween* _exitTween; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float _maxDistance; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float _minDistance; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float _minScale; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float _maxScale; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool _isCrosshairIn; // 0x0058
    bool _isExiting; // 0x0059

    // Methods
    void Start();
    void LateUpdate();
    float GetInteractionDistance();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    void .ctor();
};

// Namespace: <global>
class WallDoorTrigger : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* door; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    NavMeshObstacle* obstacle; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float openHeight; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float speed; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t playersInTrigger; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    Vector3 closedPosition; // 0x003C
    uint8_t pad_003D[0xB]; // 0x003D
    Vector3 openPosition; // 0x0048
    uint8_t pad_0049[0xB]; // 0x0049
    bool isOpen; // 0x0054

    // Methods
    void Awake();
    void Update();
    void OnTriggerEnter(Collider* _Other);
    void OnTriggerExit(Collider* _Other);
    void OnEnable();
    void OnDisable();
    void OpenDoor();
    void CloseDoor();
    void .ctor();
};

// Namespace: <global>
class WallHitbox : public Hitbox
{
public:

    // Methods
    void Start();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class WallPartAnimator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DestructibleGroup* wallGroup; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DestructibleGroup* doorGroup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* destroyChunkFxPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* otherObjectToDeactivateOnDestroy; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<UnityEngine.ParticleSystem> destroyFxPool; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.Dictionary<UnityEngine.Rigidbody,UnityEngine.Coroutine> disableCoroutines; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    WallStats* wallStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    int32_t fxPoolSize; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float lastHealthPercent; // 0x005C

    // Methods
    void Initialize(WallStats* _WallStats);
    void InitializeGroup(DestructibleGroup* _Group);
    void InitializeFxPool();
    void OnHealthChanged(float _Current, float _Max, float _Dif);
    void UpdateGroupVisual(DestructibleGroup* _Group, float _OldPercent, float _NewPercent);
    int32_t GetTarget(DestructibleGroup* _Group, float _Percent);
    void BreakChunks(DestructibleGroup* _Group, int32_t _Count);
    void BreakChunk(DestructibleGroup* _Group, Rigidbody* _Rb);
    void RebuildChunks(DestructibleGroup* _Group, int32_t _Count);
    void RebuildChunk(DestructibleGroup* _Group, Rigidbody* _Rb, int32_t _DelayIndex);
    IEnumerator* DisableAfterDelay(DestructibleGroup* _Group, Rigidbody* _Rb);
    void PlayDestroyFx(Rigidbody* _Rb);
    void Shuffle(System.Collections.Generic.List<UnityEngine.Rigidbody> _List);
    void SetupWallChunksFromMeshes();
    void SetupGateChunksFromMeshes();
    void SetupChunks(DestructibleGroup* _Group);
    void .ctor();
};

// Namespace: <global>
class WallRepairButton : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    WallStats* wallStats; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Coroutine* repairCoroutine; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    float minSoundInterval; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float maxSoundInterval; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float soundTimer; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float nextSoundTime; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    bool isHolding; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float currentHoldTime; // 0x009C

    // Methods
    void Awake();
    MonoString* GetInteractionText();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    void OnStartHold(FirstPersonController* _Owner);
    IEnumerator* OnHold(FirstPersonController* _Owner);
    void OnCancelHold(FirstPersonController* _Owner);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class WallStats : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    NetworkedAudioPlayer* audioPlayer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    WallPartAnimator* animator; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    BoxCollider* wallCollider; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    NavMeshObstacle* navMeshObstacle; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    ItemDataSO* itemData; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    BoxCollider* col; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<System.Single,System.Single,System.Single> OnHealthChanged; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    CharacterStat* <MaxHealth>k__BackingField; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_currentHealth; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_currentMaxHealth; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float currentHealth; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float currentMaxHealth; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float timeToRepair; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool isDestroyed; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t itemCountNeeded; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    int32_t healthRegenPercentagePerSecond; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    bool automaticRepairEnabled; // 0x00D0

    // Methods
    void add_OnHealthChanged(System.Action<System.Single,System.Single,System.Single> value);
    void remove_OnHealthChanged(System.Action<System.Single,System.Single,System.Single> value);
    IDamageable* get_Owner();
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    bool get_IsDestroyed();
    CharacterStat* get_MaxHealth();
    void set_MaxHealth(CharacterStat* value);
    float get_healthRatio();
    void OnStartClient();
    void ServerInit(float _MaxHealth, float _TimeToRepair);
    Vector3 GetClosestPosition(Vector3 _StartPos);
    Vector3 GetRandomPositionOnTop(Vector3 _FromPosition, float _VerticalOffset);
    bool CanTakeDamage(DamageType _Type);
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    void ServerRefreshSyncMaxHealth();
    bool CanRepair(FirstPersonController* _Owner);
    int32_t GetItemCountNeeded();
    void CmdTryRepair(FirstPersonController* _Owner);
    void PlayRandomRepairSound();
    float GetHealthPercentage();
    void Awake();
    void ServerUpdateHealth(float _Amount);
    void RebuildSegment();
    void RpcOnRebuilt();
    void DestroySegment();
    void RpcOnDestroyed();
    void LocalOnHealthChanged(float _OldValue, float _NewValue);
    void OnCurrentHealthValueChanged(float _OldValue, float _NewValue);
    void .ctor();
    bool Weaved();
    float get_NetworkcurrentHealth();
    void set_NetworkcurrentHealth(float value);
    float get_NetworkcurrentMaxHealth();
    void set_NetworkcurrentMaxHealth(float value);
    float get_NetworktimeToRepair();
    void set_NetworktimeToRepair(float value);
    bool get_NetworkisDestroyed();
    void set_NetworkisDestroyed(bool value);
    void UserCode_CmdTryRepair__FirstPersonController(FirstPersonController* _Owner);
    static void InvokeUserCode_CmdTryRepair__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOnRebuilt();
    static void InvokeUserCode_RpcOnRebuilt(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOnDestroyed();
    static void InvokeUserCode_RpcOnDestroyed(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class NpcLookAt : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Animator* animator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* currentTarget; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* previousTarget; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Coroutine* waveCoroutine; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float maxDistance; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float maxAngle; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector3 heightOffset; // 0x0048
    uint8_t pad_0049[0xB]; // 0x0049
    float searchRate; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float lookSpeed; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float weightSpeed; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float bodyWeight; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float headWeight; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float eyesWeight; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float clampWeight; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    bool playWaveAnimation; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float waveDuration; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool isInitialized; // 0x0078
    bool canFindTarget; // 0x0079
    uint8_t pad_007A[0x2]; // 0x007A
    Vector3 currentLookPosition; // 0x007C
    uint8_t pad_007D[0xB]; // 0x007D
    float currentWeight; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float targetWeight; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float searchTimer; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    int32_t waveBoolHash; // 0x0094

    // Methods
    void EnableLookAt(bool _Enabled);
    void Awake();
    void Start();
    void Update();
    void OnAnimatorIK(int32_t layerIndex);
    void Init();
    Transform* FindBestTarget();
    IEnumerator* ToggleWaveAnimation();
    void .ctor();
};

// Namespace: <global>
class NpcSpeachController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* npc; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LocalizedString* npcWelcomeDialogue; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float bubbleShowDistance; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float bubbleShowAngle; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float timePerCharacter; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t bubbleMaxWidth; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    bool isAutomatic; // 0x0040
    bool bubbleIsShown; // 0x0041

    // Methods
    void ForceShowSpeechBubble();
    void ForceHideSpeechBubble();
    void RefreshDialogue();
    void Update();
    void HandleSpeechBubble();
    MonoString* GetCurrentSpeechText();
    void .ctor();
};

// Namespace: <global>
class NpcWallRepairSpeachController : public NpcSpeachController
{
public:
    uint8_t pad_0000[0x48]; // 0x0000
    WallRepairNPC* repairLogic; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    LocalizedString* wallFullDialogue; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    LocalizedString* wallNeedsRepairDialogue; // 0x0058

    // Methods
    MonoString* GetCurrentSpeechText();
    void .ctor();
};

// Namespace: <global>
class PlayerLookAt : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Animator* animator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* currentTarget; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    FirstPersonController* playerController; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float maxDistance; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float maxAngle; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Vector3 heightOffset; // 0x0040
    uint8_t pad_0041[0xB]; // 0x0041
    float searchRate; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float lookSpeed; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float weightSpeed; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float bodyWeight; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float headWeight; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float eyesWeight; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float clampWeight; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    bool isInitialized; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Vector3 currentLookPosition; // 0x006C
    uint8_t pad_006D[0xB]; // 0x006D
    float currentWeight; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float targetWeight; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float searchTimer; // 0x0080

    // Methods
    void Awake();
    void OnPlayerRevive();
    void OnPlayerDeath();
    void Start();
    void Update();
    void OnAnimatorIK(int32_t layerIndex);
    void Init();
    Transform* FindBestTarget();
    void .ctor();
};

// Namespace: <global>
class CarriableDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CarriableObject* carriableObjectPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CarriedObject* carriedObjectPrefab; // 0x0028

    // Methods
    MonoString* get_Id();
    CarriableObject* get_CarriableObjectPrefab();
    CarriedObject* get_CarriedObjectPrefab();
    MonoString* GetLocalizedName();
    MonoString* GetLocalizedString(MonoString* _entryKey);
    void .ctor();
};

// Namespace: <global>
class CarriableObject : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    MonoString* SyncCarriableID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    MonoString* SyncCarriableName; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    CarriableDataSO* <CarriableDataSO>k__BackingField; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    uint64_t SyncPlayerID; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool SyncCanBePickedUp; // 0x0098

    // Methods
    CarriableDataSO* get_CarriableDataSO();
    void set_CarriableDataSO(CarriableDataSO* value);
    void ServerInit(CarriableDataSO* _CarriableDataSO);
    void ServerSetCanBePickedUp(bool _CanBePickedUp);
    void Interact(FirstPersonController* _Owner);
    bool ServerTryPickup(FirstPersonController* _Owner);
    MonoString* GetInteractionText();
    void OnCrosshairEnter();
    void .ctor();
    bool Weaved();
    uint64_t get_NetworkSyncPlayerID();
    void set_NetworkSyncPlayerID(uint64_t value);
    MonoString* get_NetworkSyncCarriableID();
    void set_NetworkSyncCarriableID(MonoString* value);
    MonoString* get_NetworkSyncCarriableName();
    void set_NetworkSyncCarriableName(MonoString* value);
    bool get_NetworkSyncCanBePickedUp();
    void set_NetworkSyncCanBePickedUp(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CarriedObject : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FirstPersonController* Player; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* rightHandIKTarget; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* leftHandIKTarget; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    CarriableDataSO* <CarriableDataSO>k__BackingField; // 0x0038

    // Methods
    CarriableDataSO* get_CarriableDataSO();
    void set_CarriableDataSO(CarriableDataSO* value);
    Transform* get_RightHandIKTarget();
    Transform* get_LeftHandIKTarget();
    MonoString* get_ID();
    void SetPlayer(FirstPersonController* _Player, bool _IsLocalPlayer);
    void SetCarriableDataSO(CarriableDataSO* _CarriableDataSO);
    void OnPrimaryAction(bool _B);
    void Show();
    void Hide();
    void .ctor();
};

// Namespace: <global>
class CarriedTreasureChest : public CarriedObject
{
public:
    uint8_t pad_0000[0x40]; // 0x0000
    ChestDataSO* <ChestDataSO>k__BackingField; // 0x0040

    // Methods
    ChestDataSO* get_ChestDataSO();
    void set_ChestDataSO(ChestDataSO* value);
    void SetChestDataSO(ChestDataSO* _ChestDataSO);
    void .ctor();
};

// Namespace: <global>
class ICarriableInteractable
{
public:

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlaceCarriable(FirstPersonController* _Owner, Vector3 _Origin, MonoString* _CarriableID);
    bool IsPlaceable(MonoString* _CarriableID);
};

// Namespace: <global>
class TreasureChest : public CarriableObject
{
public:
    uint8_t pad_0000[0xA0]; // 0x0000
    Transform* spawnItemTarget; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Collider* collider; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Rigidbody* rigidbody; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    ChestDataSO* <ChestDataSO>k__BackingField; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    bool isOpened; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float itemForce; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float randomSpread; // 0x00C8

    // Methods
    ChestDataSO* get_ChestDataSO();
    void set_ChestDataSO(ChestDataSO* value);
    void ServerInit(CarriableDataSO* _CarriableDataSO);
    void Interact(FirstPersonController* _Owner);
    void CmdOpenChest();
    Vector3 GetRandomUpwardDirection();
    void SetCollision(bool _CollisionEnabled);
    void .ctor();
    bool Weaved();
    bool get_NetworkisOpened();
    void set_NetworkisOpened(bool value);
    void UserCode_CmdOpenChest();
    static void InvokeUserCode_CmdOpenChest(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Chest : public InventoryContainer
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    MonoString* chestName; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    ChestInventorySystem* chestInventorySystem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Coroutine* holdCoroutine; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ChestDataSO* chestDataSO; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_isOpened; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    bool isOpened; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float holdTimeToOpen; // 0x00BC

    // Methods
    ChestInventorySystem* get_InventorySystem();
    bool CanOpen();
    bool CanAddItem(ItemDataSO* _Item);
    void Close();
    MonoString* GetName();
    void ServerInit(ChestDataSO* _ChestDataSO);
    void CmdOpenChest();
    void CmdCloseChest();
    void OnStartHold(FirstPersonController* _Owner);
    IEnumerator* OnHold(FirstPersonController* _Owner);
    void OnCancelHold(FirstPersonController* _Owner);
    MonoString* GetInteractionText();
    void OnOpened(bool _, bool _NewValue);
    void OnHoldCompleted();
    void .ctor();
    bool Weaved();
    bool get_NetworkisOpened();
    void set_NetworkisOpened(bool value);
    MonoString* get_NetworkchestName();
    void set_NetworkchestName(MonoString* value);
    void UserCode_CmdOpenChest();
    static void InvokeUserCode_CmdOpenChest(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCloseChest();
    static void InvokeUserCode_CmdCloseChest(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ChestAnimator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* top; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InventoryContainer* container; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float openAngle; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float duration; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float currentAngle; // 0x0038

    // Methods
    void Awake();
    void OnOpenChest();
    void OnCloseChest();
    void .ctor();
};

// Namespace: <global>
class ChestBoxAnimator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* top; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Chest* chest; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector3 topEndPosition; // 0x0030
    uint8_t pad_0031[0xB]; // 0x0031
    float duration; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float currentAngle; // 0x0040

    // Methods
    void Awake();
    void OnOpenChest();
    void .ctor();
};

// Namespace: <global>
class ChestDataSO : public CarriableDataSO
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    System.Collections.Generic.List<ChestDataSO.SChestItem> items; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2Int itemsCountRange; // 0x0038

    // Methods
    System.Collections.Generic.List<ChestDataSO.SChestItem> GetItems();
    void ShuffleList(System.Collections.Generic.List<T> _List);
    void .ctor();
};

// Namespace: <global>
class ChestGenericAnimator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Chest* chest; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float duration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float currentAngle; // 0x002C

    // Methods
    void Awake();
    void OnOpenChest();
    void .ctor();
};

// Namespace: <global>
class ChestInventorySystem : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t DEFAULT_CHEST_SLOTS;

    uint8_t pad_0000[0x68]; // 0x0000
    InventoryContainer* container; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Action<System.Int32,System.String,System.Int32> OnChestSlotUpdated; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Mirror.SyncList<InventorySystem.InventoryEntry> ChestEntries; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    int32_t maxStackSize; // 0x0080

    // Methods
    void ServerInit(InventoryContainer* _Container, System.Collections.Generic.List<InventorySystem.InventoryEntry> _Items);
    void OnStartClient();
    bool ServerCanAddItem(ItemDataSO* _Item);
    bool ServerAddItem(ItemDataSO* _Item, int32_t _Amount);
    bool ServerRemoveItemFromSlot(int32_t _Slot, int32_t _Amount);
    void CmdLootItem(uint64_t _PlayerID, int32_t _Slot, int32_t _Amount);
    void OnChestChangedCallback(Mirror.SyncList.Operation<InventorySystem.InventoryEntry> _Op, int32_t _Index, InventoryEntry _Old, InventoryEntry _New);
    void .ctor();
    bool Weaved();
    void UserCode_CmdLootItem__UInt64__Int32__Int32(uint64_t _PlayerID, int32_t _Slot, int32_t _Amount);
    static void InvokeUserCode_CmdLootItem__UInt64__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class InventoryContainer : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    ChestInventorySystem* <InventorySystem>k__BackingField; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Action* OnOpenChest; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Action* OnCloseChest; // 0x0088

    // Methods
    ChestInventorySystem* get_InventorySystem();
    MonoString* GetName();
    bool CanOpen();
    bool CanAddItem(ItemDataSO* _Item);
    void Close();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ItemBarrel : public DestructibleProp
{
public:
    uint8_t pad_0000[0xA0]; // 0x0000
    Transform[][] spawn; // 0x00A0

    // Methods
    void ServerInit(ItemDataSO* _ItemDataSO, int32_t _ItemCount);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class TreasureChestNPC : public NetworkObjectBase
{
public:
    // Static fields
    // static int32_t Working;

    uint8_t pad_0000[0x78]; // 0x0000
    TreasureChest* currentChest; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    NetworkAnimator* animator; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    NetworkedAudioPlayer* audioPlayer; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Transform* chestSpawnPosition; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Animator* chestAnimator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Action* OnChestPlaced; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Action* OnChestDestroyed; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Action<TreasureChest,TreasureChest> _Mirror_SyncVarHookDelegate_currentChest; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    int32_t hitToOpenChest; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    int32_t currentChestHitCount; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    NetworkBehaviourSyncVar ___currentChestNetId; // 0x00C0

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlaceCarriable(FirstPersonController* _Owner, Vector3 _Origin, MonoString* _CarriableID);
    bool IsPlaceable(MonoString* _CarriableID);
    void OnChestChanged(TreasureChest* _, TreasureChest* _NewValue);
    void ServerHitChest();
    void RPCHitChestAnimation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    TreasureChest* get_NetworkcurrentChest();
    void set_NetworkcurrentChest(TreasureChest* value);
    void UserCode_RPCHitChestAnimation();
    static void InvokeUserCode_RPCHitChestAnimation(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class TreasureChestPNJAnimatorEvent : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TreasureChestNPC* treasureChestNpc; // 0x0020

    // Methods
    void Awake();
    void OnHit();
    void .ctor();
};

// Namespace: <global>
class CursorManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InputManager* inputManager; // 0x0010

    // Methods
    void Init(InputManager* _inputManager);
    void Dispose();
    void SetState();
    void OnGameDeviceChanged(GameDevice _gameDevice);
    void UpdateCursorState();
    void .ctor();
};

// Namespace: <global>
class FPSSettingsSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    bool friendlyFire; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float friendlyDamageMultiplier; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float walkingSpeed; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float runningSpeed; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float ziplineSpeed; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float ropeSpeed; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float ropeOffset; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t mouseInputSmoothingFrameCount; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float playerHeight; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool fallDamageEnabled; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float gravity; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float jumpHeight; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    LayerMask groundLayerMask; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float groundDrag; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float airMultiplier; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float staminaSprintPerSecond; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float staminaClimbPerSecond; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float staminaClimbIdlePerSecond; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float staminaRegen; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float staminaRegenDelay; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float staminaConsumptionPerBlock; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t baseEquipmentSlots; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    Vector2 bowForce; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float itemPositionLerpSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float itemMaxPosOffset; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float itemRotationSlerpSpeed; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float itemMaxRotOffset; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    LayerMask diggableLayerMask; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    LayerMask destructibleLayerMask; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float fovSmoothSpeed; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float raycastDistance; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    LayerMask interactorLayerMask; // 0x0098

    // Methods
    bool get_FriendlyFire();
    float get_FriendlyDamageMultiplier();
    float get_WalkingSpeed();
    float get_RunningSpeed();
    float get_RopeSpeed();
    float get_RopeOffset();
    float get_StaminaSprintPerSecond();
    float get_StaminaClimbPerSecond();
    float get_StaminaClimbIdlePerSecond();
    float get_StaminaRegenPerSecond();
    float get_StaminaRegenDelay();
    float get_StaminaConsumptionPerBlock();
    int32_t get_BaseEquipmentSlots();
    float get_ItemPositionLerpSpeed();
    float get_ItemMaxPosOffset();
    float get_ItemRotationSlerpSpeed();
    float get_ItemMaxRotOffset();
    Vector2 get_BowForce();
    void .ctor();
};

// Namespace: <global>
class InputManager : public MonoBehaviour
{
public:
    // Static fields
    // static PlayerInputActions* PlayerInputActions;
    // static InputManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    CursorManager* cursorManager; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<InputManager.InputState,InputManager.InputState> StateChanged; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Boolean> OnPrimaryAction; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<System.Boolean> OnSecondaryAction; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<System.Boolean> OnJumping; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Action<System.Boolean> OnInteract; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Action<UnityEngine.InputSystem.InputActionPhase> OnHoldInteract; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Action* OnRelease; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Action<UnityEngine.InputSystem.InputActionPhase> OnHoldRelease; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Action* OnInventoryScrollUp; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Action* OnInventoryScrollDown; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Action<System.Int32> OnSlotSelect; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Action* OnOpenInventory; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Action* OnCloseInventory; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Action* OnChangeSpectate; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<InputManager.GameDevice> OnGameDeviceChanged; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Action* OnCloseMissionScreen; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Action* OnPauseMenuOpen; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Action* OnPauseMenuClose; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Action* OnMenuSkip; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Action* OnSiegeWeaponFire; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Action<System.Boolean> OnSiegeWeaponChargingAction; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Action* OnSiegeWeaponLeave; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Action* OnCloseUpgradeMenu; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Action* OnSprintButtonPressed; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float scrollTimer; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    InputState <LastInputState>k__BackingField; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    InputState <CurrentInputState>k__BackingField; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    GameDevice <ActiveGameDevice>k__BackingField; // 0x00F4

    // Methods
    InputState get_LastInputState();
    void set_LastInputState(InputState value);
    InputState get_CurrentInputState();
    void set_CurrentInputState(InputState value);
    GameDevice get_ActiveGameDevice();
    void set_ActiveGameDevice(GameDevice value);
    static Vector2 get_PlayerMovementInput();
    static Vector2 get_CatapultMovementInput();
    Vector2 get_CameraLook();
    static bool get_IsSprinting();
    static bool get_IsPushToTalkPressed();
    void add_StateChanged(System.Action<InputManager.InputState,InputManager.InputState> value);
    void remove_StateChanged(System.Action<InputManager.InputState,InputManager.InputState> value);
    void add_OnPrimaryAction(System.Action<System.Boolean> value);
    void remove_OnPrimaryAction(System.Action<System.Boolean> value);
    void add_OnSecondaryAction(System.Action<System.Boolean> value);
    void remove_OnSecondaryAction(System.Action<System.Boolean> value);
    void add_OnJumping(System.Action<System.Boolean> value);
    void remove_OnJumping(System.Action<System.Boolean> value);
    void add_OnInteract(System.Action<System.Boolean> value);
    void remove_OnInteract(System.Action<System.Boolean> value);
    void add_OnHoldInteract(System.Action<UnityEngine.InputSystem.InputActionPhase> value);
    void remove_OnHoldInteract(System.Action<UnityEngine.InputSystem.InputActionPhase> value);
    void add_OnRelease(Action* value);
    void remove_OnRelease(Action* value);
    void add_OnHoldRelease(System.Action<UnityEngine.InputSystem.InputActionPhase> value);
    void remove_OnHoldRelease(System.Action<UnityEngine.InputSystem.InputActionPhase> value);
    void add_OnInventoryScrollUp(Action* value);
    void remove_OnInventoryScrollUp(Action* value);
    void add_OnInventoryScrollDown(Action* value);
    void remove_OnInventoryScrollDown(Action* value);
    void add_OnSlotSelect(System.Action<System.Int32> value);
    void remove_OnSlotSelect(System.Action<System.Int32> value);
    void add_OnOpenInventory(Action* value);
    void remove_OnOpenInventory(Action* value);
    void add_OnCloseInventory(Action* value);
    void remove_OnCloseInventory(Action* value);
    void add_OnChangeSpectate(Action* value);
    void remove_OnChangeSpectate(Action* value);
    void add_OnGameDeviceChanged(System.Action<InputManager.GameDevice> value);
    void remove_OnGameDeviceChanged(System.Action<InputManager.GameDevice> value);
    void add_OnCloseMissionScreen(Action* value);
    void remove_OnCloseMissionScreen(Action* value);
    void add_OnPauseMenuOpen(Action* value);
    void remove_OnPauseMenuOpen(Action* value);
    void add_OnPauseMenuClose(Action* value);
    void remove_OnPauseMenuClose(Action* value);
    void add_OnMenuSkip(Action* value);
    void remove_OnMenuSkip(Action* value);
    void add_OnSiegeWeaponFire(Action* value);
    void remove_OnSiegeWeaponFire(Action* value);
    void add_OnSiegeWeaponChargingAction(System.Action<System.Boolean> value);
    void remove_OnSiegeWeaponChargingAction(System.Action<System.Boolean> value);
    void add_OnSiegeWeaponLeave(Action* value);
    void remove_OnSiegeWeaponLeave(Action* value);
    void add_OnCloseUpgradeMenu(Action* value);
    void remove_OnCloseUpgradeMenu(Action* value);
    void add_OnSprintButtonPressed(Action* value);
    void remove_OnSprintButtonPressed(Action* value);
    void Awake();
    void Start();
    void Update();
    void OnDestroy();
    void Initialize();
    void SubscribeToPlayerInputActions();
    void OnSprintInput(CallbackContext _Context);
    void OnMenuPauseSkip(CallbackContext _Obj);
    void OnCloseUpgradeMenuPerformed(CallbackContext obj);
    void OnCatapultCharging(CallbackContext _Context);
    void OnCatapultFirePerformed(CallbackContext _Context);
    void OnCatapultLeavePerformed(CallbackContext obj);
    void OnCloseMissionScreenPerformed(CallbackContext obj);
    void ChangeSpectateOnperformed(CallbackContext _Obj);
    void OnCloseInventoryPerformed(CallbackContext obj);
    void OnOpenInventoryPerformed(CallbackContext obj);
    void OnJumpInput(CallbackContext _Context);
    void OnPrimaryActionInput(CallbackContext _Context);
    void OnSecondaryActionInput(CallbackContext _Context);
    void OnReleaseInput(CallbackContext _Context);
    void HoldReleaseInput(CallbackContext _Context);
    void OnInteractInput(CallbackContext _Context);
    void HoldInteractInput(CallbackContext _Context);
    void OnPauseEnterInput(CallbackContext _Obj);
    void OnPauseExitInput(CallbackContext _Obj);
    void OnInventoryScrollPerformed(CallbackContext _Context);
    void InputSystemOnActionChange(MonoObject* arg1, InputActionChange _inputActionChange);
    void ChangeActiveGameDevice(GameDevice _newActiveGameDevice);
    void SetState(InputState _newInputState);
    void SetPreviousState();
    void .ctor();
};

// Namespace: <global>
class DebugFreeCam : public MonoBehaviour
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class CaveLevelGenerationSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    DiggingPattern[][] availablePatterns; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t maxRooms; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float roomSize; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float roomSpacing; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    RangedInt horizontalOffsetRange; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    RangedInt verticalOffsetRange; // 0x0034
    uint8_t pad_0035[0x7]; // 0x0035
    Vector3 boundsSize; // 0x003C
    uint8_t pad_003D[0xB]; // 0x003D
    Vector3 boundsOffset; // 0x0048

    // Methods
    int32_t get_MaxRooms();
    float get_RoomSize();
    float get_RoomSpacing();
    Vector3 get_BoundsSize();
    Vector3 get_BoundsOffset();
    DiggingPattern* GetDiggingPattern(MonoString* id);
    MonoString* GetRandomPatternId();
    Vector3 GetRandomRoomOffset();
    void .ctor();
};

// Namespace: <global>
class CaveLevelGenerator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    CaveLevelGenerationSO* caveLevelGenerationSO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,UnityEngine.Bounds> patternBoundsCache; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector3 startingCavePosition; // 0x0030

    // Methods
    DiggingPattern* GetDiggingPattern(MonoString* id);
    Bounds GetLocalBounds(MonoString* patternId);
    System.Collections.Generic.List<DiggingManager.SDiggingPattern> GenerateCaveLevel();
    Vector3 GetRandomDirectionWeighted();
    SDiggingPattern CreatePattern(Vector3 position, MonoString* patternID);
    void OnDrawGizmos();
    void .ctor();
};

// Namespace: <global>
class CrackOverlayManager : public MonoBehaviour
{
public:
    // Static fields
    // static CrackOverlayManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Material* crackMaterial; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Texture[][] crackTextures; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float crackRadius; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float zFighterOffset; // 0x0034

    // Methods
    void Awake();
    MeshRenderer* GenerateCrackOverlay(RaycastHit hit);
    void UpdateCrackVisual(MeshRenderer* renderer, float hitStageIndex);
    MeshRenderer* CreateMeshConformingOverlay(RaycastHit hit, MeshCollider* meshCol);
    MeshRenderer* GenerateTerrainQuadFallback(RaycastHit hit);
    void .ctor();
};

// Namespace: <global>
class CubeSpawnTest : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* cubePrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector3[][] directions; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t maxCubes; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float cubeSize; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float spacing; // 0x0038

    // Methods
    void Start();
    void GenerateCubes();
    void SpawnCube(Vector3 position);
    void .ctor();
};

// Namespace: <global>
class DetectTerrainMaterialExample : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DiggerMasterRuntime* _diggerMasterRuntime; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DiggerMaster* _diggerMaster; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DiggerSystem* _diggerSystem; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TerrainLayer[][] _terrainLayers; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t _textureIndex; // 0x0040

    // Methods
    void Start();
    void Update();
    static Single[][] GetTextureMix(Vector3 worldPos, Terrain* terrain);
    static int32_t GetTerrainTexture(Vector3 worldPos, Terrain* terrain);
    static int32_t GetMicroSplatIndex(RaycastHit hit, Terrain* terrain);
    static int32_t GetMicroSplatIndex(RaycastHit hit, Terrain* terrain, bool hitDiggerObjects);
    static float4 DecodeToFloat4(float v);
    static int32_t GetMicroSplatIndex(Color vertexColor);
    void .ctor();
};

// Namespace: <global>
class DiggingManager : public NetworkBehaviour
{
public:
    // Static fields
    // static DiggingManager* Instance;

    uint8_t pad_0000[0x68]; // 0x0000
    Mirror.SyncList<DiggingManager.DiggingHit> syncDiggingHits; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Mirror.SyncList<DiggingManager.SDiggingPattern> syncDiggingPatternIndex; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    DiggingSettingsSO* diggingSettingsSO; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    DiggerMasterRuntime* diggerMasterRuntime; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Terrain* terrain; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<DiggingManager.HitRecord> recentHits; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    CaveLevelGenerator* caveLevelGenerator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_isLevelGenerated; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    uint32_t worldSeed; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    bool isLevelGenerated; // 0x00AC
    bool enableLevelDig; // 0x00AD
    uint8_t pad_00AE[0x2]; // 0x00AE
    int32_t maxActiveHits; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float hitRecordTimeout; // 0x00B4

    // Methods
    void Init();
    IEnumerator* GenerateCavesCoroutine(System.Collections.Generic.List<DiggingManager.SDiggingPattern> generatedPatterns);
    void PlayerDigGround(FirstPersonController* _Player, float _DigValue, Vector3 _Position, Vector3 _Direction);
    DigMatterProfileSO* GetDigMatterProfileByIndex(int32_t _Index);
    ETerrainMaterialType GetMaterialTypeAtPosition(RaycastHit _Hit);
    void Awake();
    void Update();
    HitRecord* FindNearbyHitIndex(Vector3 _HitPoint);
    void RemoveHitRecord(HitRecord* record);
    void EnforceMaxHitRecords();
    HitRecord* CreateNewHitRecord(Vector3 _Position, Vector3 _Normal);
    void TryBonusBreak(FirstPersonController* _Player, Vector3 _HitPoint);
    void OnStartClient();
    void OnPatternChange(Mirror.SyncList.Operation<DiggingManager.SDiggingPattern> _Operation, int32_t _Index, SDiggingPattern _Pattern);
    void CmdDigGround(Vector3 _Position, BrushType _Brush, ActionType _Action, int32_t _TextureIndex, float _Opacity, float3 _Size, bool _Instant, bool _PaintWhileDigging, bool _BypassDestructibility);
    void CmdTrySpawnResource(FirstPersonController* _Player, int32_t _LayerIndex, Vector3 _HitPoint, Vector3 _axisDir, Vector3 _Normal);
    void OnLevelGeneratedHook(bool _Old, bool _New);
    bool RollForResourceSpawn(FirstPersonController* _Player, DigMatterProfileSO* _DigMatterProfile);
    Vector3 SnapDirToAxis(Vector3 dir);
    void OnChange(Mirror.SyncList.Operation<DiggingManager.DiggingHit> _Operation, int32_t _Index, DiggingHit* _DiggingHit);
    static Vector3 SnapToGrid(Vector3 pos, float cellSize);
    void LocalDigGround(DiggingHit* _DiggingHit, bool _OverrideInstant);
    int32_t GetTextureIndex(RaycastHit _hit);
    static Single[][] GetTextureMix(Vector3 worldPos, Terrain* terrain);
    static int32_t GetTerrainTexture(Vector3 worldPos, Terrain* terrain);
    static int32_t GetMicroSplatIndex(RaycastHit hit, Terrain* terrain);
    static int32_t GetMicroSplatIndex(RaycastHit hit, Terrain* terrain, bool hitDiggerObjects);
    static float4 DecodeToFloat4(float v);
    static int32_t GetMicroSplatIndex(Color vertexColor);
    void .ctor();
    bool Weaved();
    uint32_t get_NetworkworldSeed();
    void set_NetworkworldSeed(uint32_t value);
    bool get_NetworkisLevelGenerated();
    void set_NetworkisLevelGenerated(bool value);
    void UserCode_CmdDigGround__Vector3__BrushType__ActionType__Int32__Single__float3__Boolean__Boolean__Boolean(Vector3 _Position, BrushType _Brush, ActionType _Action, int32_t _TextureIndex, float _Opacity, float3 _Size, bool _Instant, bool _PaintWhileDigging, bool _BypassDestructibility);
    static void InvokeUserCode_CmdDigGround__Vector3__BrushType__ActionType__Int32__Single__float3__Boolean__Boolean__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTrySpawnResource__FirstPersonController__Int32__Vector3__Vector3__Vector3(FirstPersonController* _Player, int32_t _LayerIndex, Vector3 _HitPoint, Vector3 _axisDir, Vector3 _Normal);
    static void InvokeUserCode_CmdTrySpawnResource__FirstPersonController__Int32__Vector3__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct ETerrainMaterialType
{
public:
    // Static fields
    // static ETerrainMaterialType SAND;
    // static ETerrainMaterialType DIRT;
    // static ETerrainMaterialType ROCK_1;
    // static ETerrainMaterialType ROCK_2;
    // static ETerrainMaterialType NOISE_LAYER_1;
    // static ETerrainMaterialType NOISE_LAYER_2;
    // static ETerrainMaterialType NOISE_LAYER_3;
    // static ETerrainMaterialType NOISE_LAYER_4;
    // static ETerrainMaterialType NOISE_LAYER_5;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class DiggingSettingsSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    DigMatterProfileSO[][] digMatterProfiles; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* diggingProjectorPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float digOpacity; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float diggSize; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t textureID; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    Vector3 patternStartPosition; // 0x0034
    uint8_t pad_0035[0xB]; // 0x0035
    Vector3 projectorRotationOffset; // 0x0040

    // Methods
    void .ctor();
};

// Namespace: <global>
class DigMatterProfileSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* ID; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<DigMatterProfileSO.cluster> resourceClusters; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* nonDestructionParticleID; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* rockImpactParticleID; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MonoString* hitSoundID; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ETerrainMaterialType terrainType; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float baseChance; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float increasePerFail; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float nonDestructionFxDistanceFromSurface; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float rockImpactFXDistanceFromSurface; // 0x0050

    // Methods
    System.ValueTuple<ItemDataSO,System.Int32> GetRandomResource();
    void .ctor();
};

// Namespace: <global>
class DestructibleObject : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    float maxHealth; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float syncHealth; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    bool IsDestroyed; // 0x0070

    // Methods
    void Start();
    void OnServerInitialized();
    void CmdTap(FirstPersonController* _Player, Vector3 _Position, Vector3 _Direction, float damage);
    void PlayHitFx(FirstPersonController* _Player, Vector3 _Position, Vector3 _Direction);
    void PlayDestroyFx(FirstPersonController* _Player, Vector3 _Position, Vector3 _Direction);
    void OnObjectHit();
    void OnObjectDestroy();
    void .ctor();
    bool Weaved();
    float get_NetworksyncHealth();
    void set_NetworksyncHealth(float value);
    void UserCode_CmdTap__FirstPersonController__Vector3__Vector3__Single(FirstPersonController* _Player, Vector3 _Position, Vector3 _Direction, float damage);
    static void InvokeUserCode_CmdTap__FirstPersonController__Vector3__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DestructibleProp : public DestructibleObject
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    Transform* spawnItemTarget; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    PropDataSO* propDataSo; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    MonoString* particleID; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    MonoString* hitSoundID; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    float itemForce; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float randomSpread; // 0x009C

    // Methods
    void PlayHitFx(FirstPersonController* _Player, Vector3 _Position, Vector3 _Direction);
    void OnObjectDestroy();
    Vector3 GetRandomUpwardDirection();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PropDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<ChestDataSO.SChestItem> items; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2Int itemsCountRange; // 0x0020

    // Methods
    System.Collections.Generic.List<ChestDataSO.SChestItem> GetItems();
    void ShuffleList(System.Collections.Generic.List<T> _List);
    void .ctor();
};

// Namespace: <global>
class DiggingPattern : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* id; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<DiggingPoint> <DiggingPoints>k__BackingField; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DiggingWaypointBase[][] <DiggingWaypoint>k__BackingField; // 0x0030

    // Methods
    MonoString* get_Id();
    System.Collections.Generic.List<DiggingPoint> get_DiggingPoints();
    void set_DiggingPoints(System.Collections.Generic.List<DiggingPoint> value);
    DiggingWaypointBase[][] get_DiggingWaypoint();
    void set_DiggingWaypoint(DiggingWaypointBase[][] value);
    void Init();
    Bounds CalculateLocalBounds();
    void .ctor();
};

// Namespace: <global>
class DiggingPoint : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Vector3Int size; // 0x0020
    uint8_t pad_0021[0xB]; // 0x0021
    Color gizmoColor; // 0x002C
    uint8_t pad_002D[0xF]; // 0x002D
    Color wireColor; // 0x003C

    // Methods
    void Update();
    Vector3 GetDiggerCenter();
    void OnDrawGizmos();
    void .ctor();
};

// Namespace: <global>
class PlayerInteraction : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Tool* currentTool; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ICrosshairTarget* currentTarget; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    IInteractable* currentInteractable; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FirstPersonController* player; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FPSSettingsSO* fpsSettingsSO; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Transform* raycastSource; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    IHoldInteractable* currentHoldInteractable; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Coroutine* primaryActionCoroutine; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Action<System.Single> OnHold; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Action<ICrosshairTarget> OnTargetChanged; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    bool isHolding; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float holdingTimer; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float holdingSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    bool autoCancelHold; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float primaryActionInterval; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    bool isPrimaryHeld; // 0x0084
    bool isInitialized; // 0x0085

    // Methods
    void Init(FirstPersonController* _Player, FPSSettingsSO* _FPSSettingsSO);
    void Awake();
    void Update();
    void OnDestroy();
    void OnPrimaryAction(bool _B);
    void OnSecondaryAction(bool _Obj);
    void OnInteract(bool _Down);
    void OnEquippedItemChanged(EquippedItem* _Obj);
    ICrosshairTarget* RaycastForTarget();
    void HandleTargetChange(ICrosshairTarget* _NewTarget);
    void EnterCrosshair(ICrosshairTarget* _target);
    void ExitCrosshair(ICrosshairTarget* _target);
    IEnumerator* PrimaryActionLoop(IItemInteractable* _Obj);
    void HandleHoldInput(InputActionPhase _Phase);
    void HandleHoldStart();
    void CancelHold();
    void StartHoldInteraction(IHoldInteractable* _HoldInteractable);
    void UpdateHoldDuration();
    void .ctor();
};

// Namespace: <global>
class ProjectorPoolManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,UnityEngine.Pool.ObjectPool<UnityEngine.GameObject>> decalsPools; // 0x0020

    // Methods
    GameObject* GetPooledProjector(MonoString* _projectorID);
    void ReturnProjectorToPool(MonoString* _projectorID, GameObject* _projector);
    void Awake();
    GameObject* CreateProjector(GameObject* _prefab);
    void OnProjectorRelease(GameObject* _projector);
    void OnProjectorGet(GameObject* _projector);
    void DestroyProjector(GameObject* _projector);
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointBarrel : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    ItemBarrel* itemBarrel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<DiggingWaypointBarrel.SBarrelItem> barrelItems; // 0x0030

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointBase : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float chanceOfSpawn; // 0x0020

    // Methods
    void ServerInit();
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointChest : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    ChestDataSO* chestDataSO; // 0x0028

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointDestructible : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    DestructibleObject* destructible; // 0x0028

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointEnemy : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    EnemyDataSO* enemyDataSO; // 0x0028

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointHazard : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    GameObject* hazard; // 0x0028

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointItem : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    System.Collections.Generic.List<DiggingWaypointItem.ItemChance> itemChances; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool overrideItemScale; // 0x0030

    // Methods
    GameObject* GetPreviewPrefab();
    ItemDataSO* GetPreviewItemDataSO();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class DiggingWaypointLamp : public DiggingWaypointBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    ItemDataSO* lampDataSO; // 0x0028

    // Methods
    GameObject* GetPreviewPrefab();
    void SpawnObject();
    void .ctor();
};

// Namespace: <global>
class IWaypointPreview
{
public:

    // Methods
    GameObject* GetPreviewPrefab();
};

// Namespace: <global>
class WaypointPreview : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    IWaypointPreview* provider; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* previewInstance; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* lastPreviewPrefab; // 0x0030

    // Methods
    void OnEnable();
    void Update();
    void UpdatePreview();
    void ClearPreview();
    void OnDisable();
    void .ctor();
};

// Namespace: <global>
class DissonancePlaybackHelper : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VoiceAudioProfileSO* basePlaybackData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VoiceAudioProfileSO* megaphonePlaybackData; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VoicePlayback* playback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioSource* audioSource; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    AudioLowPassFilter* audioLowPassFilter; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AudioHighPassFilter* audioHighPassFilter; // 0x0048

    // Methods
    void OnEnable();
    void OnDisable();
    void OnMegaphoneListChanged(Mirror.SyncList.Operation<System.UInt32> _Op, int32_t _Index, uint32_t _OldItem, uint32_t _NewItem);
    void ApplyProfile(VoiceAudioProfileSO* _Profile);
    void .ctor();
};

// Namespace: <global>
class VoiceAudioProfileSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    AnimationCurve* volumeRolloffCurve; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float maxDistance; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float spread; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float lowPass; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float highPass; // 0x002C

    // Methods
    void .ctor();
};

// Namespace: <global>
class EndOfWaveDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    EndOfWaveUpgradeSO[][] endOfWaveUpgrades; // 0x0018

    // Methods
    EndOfWaveUpgradeSO[][] get_EndOfWaveUpgrades();
    EndOfWaveUpgradeSO* GetUpgradeSOByID(MonoString* _ID);
    void .ctor();
};

// Namespace: <global>
class EndOfWaveUpgradeManager : public MonoBehaviour
{
public:
    // Static fields
    // static EndOfWaveUpgradeManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    EndOfWaveDatabaseSO* endOfWaveDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,System.Int32> endOfWaveUpgradeLevels; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.List<System.String>> OnUpgradeDraftGenerated; // 0x0030

    // Methods
    void add_OnUpgradeDraftGenerated(System.Action<System.Collections.Generic.List<System.String>> value);
    void remove_OnUpgradeDraftGenerated(System.Action<System.Collections.Generic.List<System.String>> value);
    void Awake();
    void Init();
    void OnEndWave();
    void ServerCallUpgrade();
    void LocalCallUpgrade(System.Collections.Generic.List<System.String> endOfWaveUpgrades);
    void ApplyUpgrade(MonoString* _UpgradeID);
    void ServerUpgradeAcquired(FirstPersonController* _Player, EndOfWaveUpgradeSO* _Upgrade);
    EndOfWaveUpgradeSO* GetUpgradeSOByID(MonoString* _ID);
    System.Collections.Generic.List<System.String> GenerateThreeChoices();
    void DebugCallUpgrade();
    void .ctor();
};

// Namespace: <global>
struct EndOfWaveUpgradeDependency
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EndOfWaveUpgradeSO* endOfWaveUpgradeSO; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t targetLevel; // 0x0018
};

// Namespace: <global>
class EndOfWaveUpgradeSO : public BaseUpgradeSO
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    System.Collections.Generic.List<EndOfWaveUpgradeDependency> dependencies; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UpgradeEffect> effects; // 0x0038

    // Methods
    System.Collections.Generic.List<UpgradeEffect> get_Effects();
    System.Collections.Generic.List<EndOfWaveUpgradeDependency> get_Dependencies();
    MonoString* GetLocalizedDescription();
    void .ctor();
};

// Namespace: <global>
class BaseEnemyAnimator : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t Death;
    // static int32_t Attack;
    // static int32_t Velocity;
    // static int32_t Hit;

    uint8_t pad_0000[0x68]; // 0x0000
    NetworkAnimator* animator; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float targetVelocity; // 0x0070

    // Methods
    IEnumerator* Start();
    void Update();
    void SetFloat(MonoString* _ParameterID, float _Value);
    void SetBool(int32_t _ParameterID, bool _Value);
    void SetTrigger(int32_t _ParameterID);
    void SetSpeed(float _Speed);
    float GetSpeed();
    void Move(float _MoveValue);
    void Stop();
    bool IsTag(MonoString* _tag);
    IEnumerator* DeathAnimation();
    void AttackAnimation();
    void HitAnimation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_NetworktargetVelocity();
    void set_NetworktargetVelocity(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class EnemyAnimatorEventReceiver : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyController* controller; // 0x0020

    // Methods
    void Awake();
    void PerformAttack();
    void .ctor();
};

// Namespace: <global>
class ExplosionEnemyAnimator : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t Attack;
    // static int32_t Velocity;

    uint8_t pad_0000[0x20]; // 0x0000
    NetworkAnimator* animator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* explosionMat; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* animationCoroutine; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Renderer[][] renderers; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Material[][][] baseMaterials; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float explosionDelay; // 0x0048

    // Methods
    void SetFloat(MonoString* _ParameterID, float _Value);
    void SetBool(int32_t _ParameterID, bool _Value);
    void SetTrigger(int32_t _ParameterID);
    void SetSpeed(float _Speed);
    float GetSpeed();
    bool IsTag(MonoString* _tag);
    void Move(float _MoveValue);
    void Stop();
    IEnumerator* DeathAnimation();
    void AttackAnimation();
    void HitAnimation();
    void Awake();
    void OnDestroy();
    IEnumerator* ExplosionAnimationCo(float _Delay);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class FlyingEnemyAnimator : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t Death;
    // static int32_t Attack;
    // static int32_t Velocity;

    uint8_t pad_0000[0x20]; // 0x0000
    NetworkAnimator* animator; // 0x0020

    // Methods
    void SetFloat(MonoString* _ParameterID, float _Value);
    void SetBool(int32_t _ParameterID, bool _Value);
    void SetTrigger(int32_t _ParameterID);
    void SetSpeed(float _Speed);
    float GetSpeed();
    bool IsTag(MonoString* _tag);
    void Move(float _MoveValue);
    void Stop();
    IEnumerator* DeathAnimation();
    void AttackAnimation();
    void HitAnimation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class IEnemyAnimator
{
public:

    // Methods
    void SetFloat(MonoString* _ParameterID, float _Value);
    void SetBool(int32_t _ParameterID, bool _Value);
    void SetTrigger(int32_t _ParameterID);
    bool IsTag(MonoString* _tag);
    void Move(float _MoveValue);
    void Stop();
    IEnumerator* DeathAnimation();
    void AttackAnimation();
    void HitAnimation();
};

// Namespace: <global>
class ExplodeEnemyBehavior : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    ExplosionObject* explosionObject; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyController* controller; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float explosionRange; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float explosionDelay; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool isAttacking; // 0x0038

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void PerformAttack();
    void OnDamagedBy(FirstPersonController* _Attacker);
    void OnDeath();
    bool CanAttack();
    void Attack();
    void Explode();
    void .ctor();
};

// Namespace: <global>
class IEnemyBehaviour
{
public:

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
};

// Namespace: <global>
struct EnemyTargetType
{
public:
    // Static fields
    // static EnemyTargetType WALL_PART;
    // static EnemyTargetType PLAYER;
    // static EnemyTargetType KING;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EnemyTarget
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EnemyTargetType Type; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Transform* Transform; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector3 WorldPosition; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    FirstPersonController* Player; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WallStats* WallStats; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    King* King; // 0x0040
};

// Namespace: <global>
class MeleeBehaviour : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyAttack* attackHitBox; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyController* controller; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    FirstPersonController* aggroPlayer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Coroutine* disableAttackHitbox; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Wall* wall; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    WallStats* wallStats; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    King* king; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EnemyNavMeshController* navMeshController; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float playerDetectionInterval; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float rotationSpeed; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float attackRotationLockTime; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool rotationLocked; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float rotationLockEndTime; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float lastPlayerDetection; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float lastAttackTime; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float lastTargetCheck; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float lastStuckCheckTime; // 0x0080

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
    bool CanAttack();
    void BeginAttack();
    IEnumerator* DisableHitbox();
    bool HasPlayerAggro();
    void SetPlayerAggro(FirstPersonController* _Attacker);
    EnemyTarget SelectDefaultTarget();
    EnemyTarget TargetPlayer();
    EnemyTarget TargetNexus();
    EnemyTarget TargetWallPart();
    void OnDeath();
    FirstPersonController* FindClosestPlayerInAggroRange();
    void HandleRotation();
    bool ShouldKeepCurrentTarget();
    void .ctor();
};

// Namespace: <global>
class MovingShooterBehaviour : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Projectile* projectile; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* bulletSpawn; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EnemyController* controller; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FirstPersonController* aggroPlayer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Coroutine* disableAttackHitbox; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Wall* wall; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    WallStats* wallStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    King* king; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float minDistanceForAngle; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float maxDistanceForAngle; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float minBallisticAngle; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float maxBallisticAngle; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float projectileSpeed; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float playerDetectionInterval; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    LayerMask lineOfSightMask; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    Vector3 eyeOffset; // 0x007C
    uint8_t pad_007D[0xB]; // 0x007D
    float repositionCooldown; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool isAttacking; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float lastRepositionTime; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float lastPlayerDetection; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float lastAttackTime; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float lastTargetCheck; // 0x009C

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
    bool CanAttack();
    void BeginAttack();
    bool HasPlayerAggro();
    void SetPlayerAggro(FirstPersonController* _Attacker);
    EnemyTarget SelectDefaultTarget();
    EnemyTarget TargetPlayer();
    EnemyTarget TargetNexus();
    EnemyTarget TargetWallPart();
    Vector3 GetLookTarget();
    FirstPersonController* FindClosestPlayerInAggroRange();
    bool HasLineOfSight(Transform* _Player);
    void Reposition();
    void MoveAroundTarget(Vector3 _TargetPos);
    void MoveAroundKing(Vector3 _TargetPos);
    void MoveToRandomWallPosition();
    bool TryGetValidNavMeshPosition(Vector3 _DesiredPosition, Vector3 _ValidPosition);
    void .ctor();
};

// Namespace: <global>
class ShieldBearerBehavior : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyAttack* attackHitBox; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    FirstPersonController* lastAttacker; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EnemyController* controller; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FirstPersonController* aggroPlayer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Coroutine* disableAttackHitbox; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Wall* wall; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    WallStats* wallStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    King* king; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float playerDetectionInterval; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float rotationSpeed; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float attackRotationLockTime; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float defensiveTimeout; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float lastDefensiveHitTime; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    bool isDefensive; // 0x0074
    bool rotationLocked; // 0x0075
    uint8_t pad_0076[0x2]; // 0x0076
    float rotationLockEndTime; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float lastPlayerDetection; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float lastAttackTime; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float lastTargetCheck; // 0x0084

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
    bool CanAttack();
    void BeginAttack();
    IEnumerator* DisableHitbox();
    EnemyTarget SelectDefaultTarget();
    EnemyTarget TargetNexus();
    EnemyTarget TargetWallPart();
    void OnDeath();
    void HandleRotation();
    void EnterDefensiveState();
    void ExitDefensiveState();
    void .ctor();
};

// Namespace: <global>
class ShooterBehavior : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Projectile* projectile; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* bulletSpawn; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EnemyController* controller; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FirstPersonController* aggroPlayer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Coroutine* disableAttackHitbox; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Wall* wall; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    WallStats* wallStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    King* king; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    EnemyNavMeshController* navMeshController; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float minDistanceForAngle; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float maxDistanceForAngle; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float minBallisticAngle; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float maxBallisticAngle; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float projectileSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float playerDetectionInterval; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    LayerMask lineOfSightMask; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    Vector3 eyeOffset; // 0x0084
    uint8_t pad_0085[0xB]; // 0x0085
    float lastPlayerDetection; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float lastAttackTime; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float lastTargetCheck; // 0x0098

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
    bool CanAttack();
    void BeginAttack();
    bool HasPlayerAggro();
    void SetPlayerAggro(FirstPersonController* _Attacker);
    EnemyTarget SelectDefaultTarget();
    EnemyTarget TargetPlayer();
    EnemyTarget TargetNexus();
    EnemyTarget TargetWallPart();
    Vector3 GetLookTarget();
    FirstPersonController* FindClosestPlayerInAggroRange();
    bool HasLineOfSight(Transform* _Player);
    void .ctor();
};

// Namespace: <global>
class WallBreakerBehavior : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyAttack* attackHitBox; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyController* controller; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* disableAttackHitbox; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Wall* wall; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    WallStats* wallStats; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    King* king; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float lastAttackTime; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float lastTargetCheck; // 0x0054

    // Methods
    void InitBehaviour(EnemyController* _Controller);
    void ExecuteBehaviour();
    void PerformAttack();
    EnemyTarget SelectTarget();
    bool CanAggroPlayer(FirstPersonController* _Attacker);
    void OnDamagedBy(FirstPersonController* _Attacker);
    bool CanAttack();
    void BeginAttack();
    IEnumerator* DisableHitbox();
    EnemyTarget SelectDefaultTarget();
    EnemyTarget TargetNexus();
    EnemyTarget TargetWallPart();
    void OnDeath();
    void .ctor();
};

// Namespace: <global>
class CharacterVisualFeedback : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t ColorID;
    // static int32_t DissolveAmount;

    uint8_t pad_0000[0x20]; // 0x0000
    Material* dissolveMaterial; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SkinnedMeshRenderer* skinnedMeshRenderer; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SkinnedMeshFX* poisonFx; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SkinnedMeshFX* burnFx; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SkinnedMeshFX* freezeFx; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SkinnedMeshFX* poisonFxInstance; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SkinnedMeshFX* burnFxInstance; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    SkinnedMeshFX* freezeFxInstance; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* icePrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* currentIceInstance; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    MaterialPropertyBlock* mpb; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    StatusEffectHandler* handler; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    IHitable* hitable; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Renderer[][] renderers; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Material[][][] hitSharedMaterials; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Coroutine* feedbackCoroutine; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.HashSet<StatusEffectType> activeEffects; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float feedbackDuration; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float dissolveDuration; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    bool canDissolve; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    Color poisonMatColor; // 0x00B4
    uint8_t pad_00B5[0xF]; // 0x00B5
    Color frozenMatColor; // 0x00C4
    uint8_t pad_00C5[0xF]; // 0x00C5
    Color finalColor; // 0x00D4
    uint8_t pad_00D5[0xF]; // 0x00D5
    bool isDead; // 0x00E4

    // Methods
    void Awake();
    void OnEnable();
    void OnDisable();
    void OnEffectApplied(StatusEffectType _Type);
    void OnEffectRemoved(StatusEffectType _Type);
    void ApplyFreeze();
    void RemoveFreeze();
    void UpdateColor();
    void SetColor(Color _Color);
    void ShowHitFeedback();
    IEnumerator* HitFeedbackCoroutine();
    void StartDissolve();
    IEnumerator* DissolveCoroutine();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class DamageFeedback : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Material* dissolveMaterial; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    IHitable* hitable; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Renderer[][] renderers; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Material[][][] originalSharedMaterials; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Material[][][] hitSharedMaterials; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Coroutine* feedbackCoroutine; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    MaterialPropertyBlock* propBlock; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float feedbackDuration; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float dissolveDuration; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    bool isDead; // 0x0060

    // Methods
    void Start();
    void Init();
    void ShowHitFeedback();
    IEnumerator* HitFeedbackCoroutine();
    void StartDissolve();
    IEnumerator* DissolveCoroutine();
    void .ctor();
};

// Namespace: <global>
struct DamageResult
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float Damage; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    bool IsCritical; // 0x0014

    // Methods
    void .ctor(float damage, bool isCritical);
    void Multiply(float amount);
    MonoString* ToString();
};

// Namespace: <global>
class DifficultyManager : public NetworkBehaviour
{
public:
    // Static fields
    // static DifficultyManager* Instance;

    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<DifficultyManager.DifficultyLevelCoefficient> difficultyLevelCoefficients; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    CharacterStat* difficultyMultiplierStat; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float syncDifficultyCoefficient; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float syncPlayerFactor; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float syncMultiplierStat; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float syncDifficultyLevelCoefficient; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    DifficultyLevel difficultyLevel; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float baseCombatScaling; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float combatScalingPerPlayer; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float baseForgeScaling; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float forgeScalingPerPlayer; // 0x0098

    // Methods
    float GetDifficulty();
    float GetPlayerFactor();
    float GetForgePlayerFactor();
    void OnStartServer();
    void OnStartClient();
    void SetDifficultyLevel(DifficultyLevel _Level);
    float GetPreviewDifficulty(float amount);
    void Awake();
    void OnPlayerAdded(FirstPersonController* _Player);
    MonoString* GetFormattedStatValue(float value);
    void AddDifficultyModifier(float _Amount, StatModType _ModType, MonoString* _Source);
    void Recalculate();
    void SetPlayerCount(int32_t _PlayerCount);
    void .ctor();
    bool Weaved();
    float get_NetworksyncDifficultyCoefficient();
    void set_NetworksyncDifficultyCoefficient(float value);
    float get_NetworksyncPlayerFactor();
    void set_NetworksyncPlayerFactor(float value);
    float get_NetworksyncMultiplierStat();
    void set_NetworksyncMultiplierStat(float value);
    float get_NetworksyncDifficultyLevelCoefficient();
    void set_NetworksyncDifficultyLevelCoefficient(float value);
    DifficultyLevel get_NetworkdifficultyLevel();
    void set_NetworkdifficultyLevel(DifficultyLevel value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct DifficultyLevel
{
public:
    // Static fields
    // static DifficultyLevel EASY;
    // static DifficultyLevel NORMAL;
    // static DifficultyLevel HARD;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class EnemyAttack : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.HashSet<IDamageable> alreadyHit; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyController* controller; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Collider* hitbox; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool knockbackPlayer; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float knockbackForce; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float knockbackUpwardForce; // 0x0040

    // Methods
    void Awake();
    void EnableHitbox();
    void DisableHitbox();
    void OnTriggerEnter(Collider* _Other);
    void .ctor();
};

// Namespace: <global>
class EnemyAudioController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyController* enemyController; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    NetworkedAudioPlayer* audioPlayer; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* idleRoutine; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float idleMinDelay; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float idleMaxDelay; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    bool isChasing; // 0x0040

    // Methods
    void Init(EnemyController* _EnemyController);
    void OnChasePlayer(EnemyTargetType _Obj);
    void OnPreDeath();
    IEnumerator* IdleSoundLoop();
    void PlayAttack();
    void .ctor();
};

// Namespace: <global>
class EnemyBullet : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    GameObject* impactFX; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Coroutine* releaseCo; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float speed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    DamageResult damage; // 0x007C

    // Methods
    void ServerInit(float _Damage);
    void Update();
    void OnTriggerEnter(Collider* _Other);
    void RpcImpactFX(Vector3 _Pos);
    IEnumerator* ReleaseCo();
    IEnumerator* ReleaseNextFrame();
    void Release();
    void .ctor();
    bool Weaved();
    void UserCode_RpcImpactFX__Vector3(Vector3 _Pos);
    static void InvokeUserCode_RpcImpactFX__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class EnemyClimberController : public EnemyController
{
public:
    uint8_t pad_0000[0x158]; // 0x0000
    Rigidbody* rb; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    Coroutine* movementCo; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    float stickDistance; // 0x0168
    uint8_t pad_0169[0x3]; // 0x0169
    float gravityForce; // 0x016C
    uint8_t pad_016D[0x3]; // 0x016D
    float surfaceStickForce; // 0x0170
    uint8_t pad_0171[0x3]; // 0x0171
    float climbCheckDistance; // 0x0174
    uint8_t pad_0175[0x3]; // 0x0175
    float climbSphereRadius; // 0x0178
    uint8_t pad_0179[0x3]; // 0x0179
    float maxClimbAngle; // 0x017C
    uint8_t pad_017D[0x3]; // 0x017D
    float rotateToSurfaceSpeed; // 0x0180
    uint8_t pad_0181[0x3]; // 0x0181
    Vector3 currentUp; // 0x0184
    uint8_t pad_0185[0xB]; // 0x0185
    bool <IsMoving>k__BackingField; // 0x0190

    // Methods
    bool get_IsMoving();
    void set_IsMoving(bool value);
    void MoveTo(Vector3 _Destination);
    void StopMovement();
    void ApplyKnockback(Vector3 _Force);
    void Awake();
    void Update();
    void FixedUpdate();
    void UpdateClimbingOrientation();
    void LocalGravityAndStick();
    void MoveTowards(Vector3 _Destination);
    IEnumerator* MoveToPosition(Vector3 _Position);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class EnemyController : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    MonoString* syncID; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    EnemyAudioController* enemyAudio; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ParticleSystem* hitParticlesPrefab; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    IEnemyBehaviour* Behaviour; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    StatusEffectHandler* effectHandler; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Coroutine* deathCo; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Action* <OnHit>k__BackingField; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Action* <OnPreDeath>k__BackingField; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Action* OnDeath; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Action<EnemyTargetType> OnTargetTypeChanged; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Action<System.Single> HealthChanged; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    EnemyDataSO* <EnemyDataSO>k__BackingField; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    IEnemyAnimator* <Animator>k__BackingField; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    EnemyAudioController* <Audio>k__BackingField; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Rigidbody* <Rigidbody>k__BackingField; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    EnemyTarget <CurrentTarget>k__BackingField; // 0x00E0
    uint8_t pad_00E1[0x37]; // 0x00E1
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_isDead; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_currentHealth; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    bool isDead; // 0x0128
    bool canBeKnockback; // 0x0129
    bool isEliteBoss; // 0x012A
    uint8_t pad_012B[0x1]; // 0x012B
    float currentHealth; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    float currentMaxHealth; // 0x0130
    uint8_t pad_0131[0x3]; // 0x0131
    bool CanMove; // 0x0134
    bool canAttack; // 0x0135
    uint8_t pad_0136[0x2]; // 0x0136
    float slowPercentage; // 0x0138
    uint8_t pad_0139[0x3]; // 0x0139
    float unslowedSpeed; // 0x013C
    uint8_t pad_013D[0x3]; // 0x013D
    bool <IsMoving>k__BackingField; // 0x0140
    uint8_t pad_0141[0x3]; // 0x0141
    Vector3 <TargetPoint>k__BackingField; // 0x0144
    uint8_t pad_0145[0xB]; // 0x0145
    DamageResult <CurrentDamage>k__BackingField; // 0x0150

    // Methods
    Action* get_OnHit();
    void set_OnHit(Action* value);
    Action* get_OnPreDeath();
    void set_OnPreDeath(Action* value);
    void add_HealthChanged(System.Action<System.Single> value);
    void remove_HealthChanged(System.Action<System.Single> value);
    IDamageable* get_Owner();
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    EnemyDataSO* get_EnemyDataSO();
    void set_EnemyDataSO(EnemyDataSO* value);
    IEnemyAnimator* get_Animator();
    void set_Animator(IEnemyAnimator* value);
    EnemyAudioController* get_Audio();
    void set_Audio(EnemyAudioController* value);
    Rigidbody* get_Rigidbody();
    void set_Rigidbody(Rigidbody* value);
    bool get_CanBeKnockback();
    bool get_IsEliteBoss();
    bool get_IsMoving();
    Vector3 get_TargetPoint();
    void set_TargetPoint(Vector3 value);
    EnemyTarget get_CurrentTarget();
    void set_CurrentTarget(EnemyTarget value);
    DamageResult get_CurrentDamage();
    void set_CurrentDamage(DamageResult value);
    float get_CurrentHealth();
    void ServerInit(EnemyDataSO* _EnemyData);
    void OnStartClient();
    void OnHealthChanged(float oldValue, float newValue);
    bool CanTakeDamage(DamageType _Type);
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    bool CanAttack();
    void MoveTo(Vector3 _Destination);
    void StopMovement();
    void SetMovementEnabled(bool _Enabled);
    void SetSlowPercentage(float _Percentage);
    float GetSlowPercentage();
    void SetUnslowedSpeed(float _Speed);
    float GetUnslowedSpeed();
    void RefreshActualSpeed();
    float GetActualSpeed();
    Vector3 GetTargetPosition();
    bool IsCurrentTargetValid();
    void PerformAttack();
    void RotateTowards(Vector3 _WorldPosition, float _RotationSpeed);
    void SetTarget(EnemyTarget _Target);
    void ApplyEffect(StatusEffectData _Effect, NetworkIdentity* _Owner);
    void CancelEffect(StatusEffectType Type);
    void ApplyKnockback(Vector3 _Direction);
    void ApplyHitStop(float _Duration);
    float GetHealthPercentage();
    void SetCanAttack(bool _Enabled);
    void Awake();
    void Update();
    void SetDestination(Vector3 _Destination);
    IEnumerator* DeathCo();
    void RpcOnHit();
    void OnDeathChanged(bool _, bool _IsDead);
    void TrySpawnRandomDrop(FirstPersonController* _Player);
    IEnumerator* HitStop(float _Duration);
    void .ctor();
    bool Weaved();
    bool get_NetworkisDead();
    void set_NetworkisDead(bool value);
    MonoString* get_NetworksyncID();
    void set_NetworksyncID(MonoString* value);
    float get_NetworkcurrentHealth();
    void set_NetworkcurrentHealth(float value);
    void UserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    static void InvokeUserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_ApplyEffect__StatusEffectData__NetworkIdentity(StatusEffectData _Effect, NetworkIdentity* _Owner);
    static void InvokeUserCode_ApplyEffect__StatusEffectData__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOnHit();
    static void InvokeUserCode_RpcOnHit(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class EnemyDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<EnemyWaveDataSO> waves; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EnemyWaveDataSO* endWave; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float endGameDifficultyIncrease; // 0x0028

    // Methods
    float get_EndGameDifficultyIncrease();
    System.Collections.Generic.HashSet<EnemyDataSO> GetAllUniqueEnemies();
    EnemyDataSO* GetEnemyByID(MonoString* _ID);
    bool IsLastNormalWave(int32_t waveIndex);
    bool IsEndWaveIndex(int32_t waveIndex);
    EnemyWaveDataSO* GetWaveByIndex(int32_t waveIndex);
    void .ctor();
};

// Namespace: <global>
class EnemyDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EnemyController* enemyPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyDataSO* linkedEnemy; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DamageableType enemyType; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool isSwarm; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t numberOfEnemyBySwarm; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool hasLinkedSpawn; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Vector3 linkedSpawnOffset; // 0x0040
    uint8_t pad_0041[0xB]; // 0x0041
    float maxHealth; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float moveSpeed; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float aggroSpeed; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool canAggroPlayer; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float aggroRange; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float loseAggroRange; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float damage; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float attackRange; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float stopDistance; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float fallbackDistance; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float attackCooldown; // 0x0074

    // Methods
    MonoString* get_ID();
    EnemyController* get_EnemyPrefab();
    DamageableType get_EnemyType();
    float get_MaxHealth();
    float get_MoveSpeed();
    float get_AggroSpeed();
    bool get_CanAggroPlayer();
    float get_AggroRange();
    float get_LoseAggroRange();
    float get_Damage();
    float get_AttackRange();
    float get_StopDistance();
    float get_FallbackDistance();
    float get_AttackCooldown();
    bool get_IsSwarm();
    int32_t get_NumberOfEnemyBySwarm();
    bool get_HasLinkedSpawn();
    EnemyDataSO* get_LinkedEnemy();
    Vector3 get_LinkedSpawnOffset();
    MonoString* GetLocalizedName(int32_t count);
    MonoString* GetLocalizedString(MonoString* _entryKey, Object[][] arguments);
    void .ctor();
};

// Namespace: <global>
class EnemyHitbox : public Hitbox
{
public:
    uint8_t pad_0000[0x70]; // 0x0000
    EnemyController* <Controller>k__BackingField; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float damageMultiplier; // 0x0078

    // Methods
    EnemyController* get_Controller();
    void set_Controller(EnemyController* value);
    bool get_CanBeKnockback();
    float get_DamageMultiplier();
    void Start();
    void ApplyKnockback(Vector3 _Force);
    void ApplyHitStop(float _Duration);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class EnemyManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EnemyDatabaseSO* database; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<UnityEngine.BoxCollider> spawnAreas; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* waveSpawnCo; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    EnemyWaveDataSO* currentWaveDataSo; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Coroutine* countdownCoroutine; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Action* OnStartWave; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Action* OnEndWave; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool skipOffset; // 0x0058
    bool waveFinishedSpawning; // 0x0059
    uint8_t pad_005A[0x2]; // 0x005A
    int32_t currentNumberOfEnemyKilled; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t totalEnemyInWave; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float lastSpawnTime; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t currentCountdown; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float <CurrentWaveDuration>k__BackingField; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float <CurrentSpawnDuration>k__BackingField; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t <CurrentWaveIndex>k__BackingField; // 0x0074

    // Methods
    float get_CurrentWaveDuration();
    void set_CurrentWaveDuration(float value);
    float get_CurrentSpawnDuration();
    void set_CurrentSpawnDuration(float value);
    int32_t get_CurrentWaveIndex();
    void set_CurrentWaveIndex(int32_t value);
    void ServerInit();
    void ServerStopCountdown();
    EnemyDataSO* GetEnemyDataSOByID(MonoString* _ID);
    void ServerLaunchCountdown();
    IEnumerator* ServerCountdown();
    void LaunchWave();
    IEnumerator* SpawnCurrentWave(EnemyWaveDataSO* _Wave);
    void SpawnEnemyInArea(EnemyDataSO* _Data, BoxCollider* _Area);
    void SpawnEnemyAtPosition(EnemyDataSO* _Data, Vector3 _Position, Quaternion _Rotation);
    void SpawnSingleEnemy(EnemyDataSO* _Data, Vector3 _Position, Quaternion _Rotation);
    void OnEnemyDeath();
    int32_t GetRealEnemyCount(EnemyDataSO* _Data, int32_t _BaseCount);
    int32_t GetEnemyRecursiveCount(EnemyDataSO* _Data);
    float GetMaxEnemySpawnTime();
    Vector3 RandomPointInBounds(Bounds _Bounds);
    void TryEndWave();
    bool TryGetValidNavMeshPosition(Vector3 _RawPosition, Vector3 _ValidPosition, float _MaxDistance);
    void .ctor();
};

// Namespace: <global>
class EnemyNavMeshController : public EnemyController
{
public:
    uint8_t pad_0000[0x158]; // 0x0000
    NavMeshAgent* <Agent>k__BackingField; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    float maxKnockbackTime; // 0x0160

    // Methods
    NavMeshAgent* get_Agent();
    void set_Agent(NavMeshAgent* value);
    bool get_IsMoving();
    void ServerInit(EnemyDataSO* _EnemyData);
    void TargetTypeChanged(EnemyTargetType _Obj);
    void MoveTo(Vector3 _Position);
    void StopMovement();
    void SetUnslowedSpeed(float _Speed);
    void SetTarget(EnemyTarget _Target);
    void ApplyKnockback(Vector3 _Force);
    void Awake();
    void Update();
    void SetDestination(Vector3 _Destination);
    IEnumerator* KnockbackRoutine(Vector3 _Force);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class EnemyWaveDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<EnemyWaveDataSO.SEnemyData> enemies; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t timeBeforeWave; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t offset; // 0x0024

    // Methods
    int32_t get_TimeBeforeWave();
    int32_t get_Offset();
    System.Collections.Generic.List<EnemyWaveDataSO.SEnemyData> get_Enemies();
    void .ctor();
};

// Namespace: <global>
class ExplosionObject : public NetworkBehaviour
{
public:
    // Static fields
    // static Collider[][] HitsBuffer;

    uint8_t pad_0000[0x68]; // 0x0000
    Coroutine* destroyCo; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.HashSet<IDamageable> AlreadyHit; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float knockbackForce; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float knockbackUpwardForce; // 0x007C

    // Methods
    void ServerExplode(DamageResult _Damage, float _Radius);
    IEnumerator* DestroyCo();
    void OnDestroy();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class Hitbox : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    IDamageable* <Owner>k__BackingField; // 0x0068

    // Methods
    IDamageable* get_Owner();
    void set_Owner(IDamageable* value);
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    float get_DamageMultiplier();
    float GetHealthPercentage();
    bool CanTakeDamage(DamageType _Type);
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    void .ctor();
    bool Weaved();
    void UserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    static void InvokeUserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class IDamageable
{
public:

    // Methods
    IDamageable* get_Owner();
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    bool CanTakeDamage(DamageType _Type);
    float GetHealthPercentage();
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
};

// Namespace: <global>
struct DamageType
{
public:
    // Static fields
    // static DamageType PLAYER;
    // static DamageType ENEMY;
    // static DamageType ALL;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct DamageableType
{
public:
    // Static fields
    // static DamageableType NORMAL;
    // static DamageableType ELITE;
    // static DamageableType BOSS;
    // static DamageableType PLAYER;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class IHitable
{
public:

    // Methods
    Action* get_OnHit();
    void set_OnHit(Action* value);
    Action* get_OnPreDeath();
    void set_OnPreDeath(Action* value);
};

// Namespace: <global>
class IHitStoppable
{
public:

    // Methods
    void ApplyHitStop(float _Duration);
};

// Namespace: <global>
class IKnockable
{
public:

    // Methods
    bool get_CanBeKnockback();
    void ApplyKnockback(Vector3 _Force);
};

// Namespace: <global>
class IStatusEffectReceiver
{
public:

    // Methods
    void ApplyEffect(StatusEffectData _Effect, NetworkIdentity* _Owner);
    void CancelEffect(StatusEffectType Type);
};

// Namespace: <global>
class IMovable
{
public:

    // Methods
    void SetMovementEnabled(bool _Enabled);
    void SetSlowPercentage(float _Percentage);
    float GetSlowPercentage();
    void SetUnslowedSpeed(float _Speed);
    float GetUnslowedSpeed();
    void RefreshActualSpeed();
    float GetActualSpeed();
};

// Namespace: <global>
class IAttacker
{
public:

    // Methods
    void SetCanAttack(bool _Enabled);
};

// Namespace: <global>
class IAnimatable
{
public:

    // Methods
    void SetFrozen(bool _Frozen);
    void SetSpeed(float _Speed);
    float GetSpeed();
};

// Namespace: <global>
class UnstableMineral : public DestructibleObject
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    ExplosionObject* explosionObject; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Coroutine* animationCoroutine; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    MeshRenderer* meshRenderer; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    float damage; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float attackRadius; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float waitBeforeExplosion; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float flashFrequency; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float explosionScaleMultiplier; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    Color flashColor; // 0x00A4
    uint8_t pad_00A5[0xF]; // 0x00A5
    bool isExploding; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Vector3 originalScale; // 0x00B8
    uint8_t pad_00B9[0xB]; // 0x00B9
    Color originalColor; // 0x00C4

    // Methods
    void Awake();
    void OnDestroy();
    void OnObjectDestroy();
    IEnumerator* AttackCo();
    void RPCExplosionAnimation();
    IEnumerator* ExplosionAnimationCo();
    void .ctor();
    bool Weaved();
    void UserCode_RPCExplosionAnimation();
    static void InvokeUserCode_RPCExplosionAnimation(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class SkinnedMeshFX : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FxElement[][] fxElements; // 0x0020

    // Methods
    void Init(SkinnedMeshRenderer* _skinnedMeshRenderer);
    void Play();
    void Stop();
    void SetFxProgress(float _progress);
    void .ctor();
};

// Namespace: <global>
class GameEvents
{
public:
    // Static fields
    // static System.Action<System.Single> OnDepthReported;
    // static System.Action<System.String,System.Int32> OnItemCollected;
    // static System.Action<System.String,System.Int32> OnItemRemoved;
    // static System.Action<System.String,System.Int32> OnItemUsed;
    // static System.Action<System.String,System.Int32> OnItemCrafted;
    // static System.Action<System.String,System.Int32> OnItemRecycled;
    // static System.Action<System.String,System.Int32> OnEnemyKilled;
    // static System.Action<PlayerClass,System.Int32> OnEnemyKilledWithCharacter;
    // static System.Action<WeaponDataSO.WeaponType,System.Int32> OnEnemyKilledWithWeapon;
    // static System.Action<System.String,System.Int32> OnUpgradeAdded;
    // static System.Action<System.Int32> OnMaxHpReached;
    // static Action* OnHeadshot;
    // static Action* OnDigBlock;
    // static Action* OnAttackBlocked;
    // static Action* OnDeath;
    // static Action* OnAttackCrit;
    // static Action* OnChestOpened;


    // Methods
    static void add_OnDepthReported(System.Action<System.Single> value);
    static void remove_OnDepthReported(System.Action<System.Single> value);
    static void add_OnItemCollected(System.Action<System.String,System.Int32> value);
    static void remove_OnItemCollected(System.Action<System.String,System.Int32> value);
    static void add_OnItemRemoved(System.Action<System.String,System.Int32> value);
    static void remove_OnItemRemoved(System.Action<System.String,System.Int32> value);
    static void add_OnItemUsed(System.Action<System.String,System.Int32> value);
    static void remove_OnItemUsed(System.Action<System.String,System.Int32> value);
    static void add_OnItemCrafted(System.Action<System.String,System.Int32> value);
    static void remove_OnItemCrafted(System.Action<System.String,System.Int32> value);
    static void add_OnItemRecycled(System.Action<System.String,System.Int32> value);
    static void remove_OnItemRecycled(System.Action<System.String,System.Int32> value);
    static void add_OnEnemyKilled(System.Action<System.String,System.Int32> value);
    static void remove_OnEnemyKilled(System.Action<System.String,System.Int32> value);
    static void add_OnEnemyKilledWithCharacter(System.Action<PlayerClass,System.Int32> value);
    static void remove_OnEnemyKilledWithCharacter(System.Action<PlayerClass,System.Int32> value);
    static void add_OnEnemyKilledWithWeapon(System.Action<WeaponDataSO.WeaponType,System.Int32> value);
    static void remove_OnEnemyKilledWithWeapon(System.Action<WeaponDataSO.WeaponType,System.Int32> value);
    static void add_OnUpgradeAdded(System.Action<System.String,System.Int32> value);
    static void remove_OnUpgradeAdded(System.Action<System.String,System.Int32> value);
    static void add_OnMaxHpReached(System.Action<System.Int32> value);
    static void remove_OnMaxHpReached(System.Action<System.Int32> value);
    static void add_OnHeadshot(Action* value);
    static void remove_OnHeadshot(Action* value);
    static void add_OnDigBlock(Action* value);
    static void remove_OnDigBlock(Action* value);
    static void add_OnAttackBlocked(Action* value);
    static void remove_OnAttackBlocked(Action* value);
    static void add_OnDeath(Action* value);
    static void remove_OnDeath(Action* value);
    static void add_OnAttackCrit(Action* value);
    static void remove_OnAttackCrit(Action* value);
    static void add_OnChestOpened(Action* value);
    static void remove_OnChestOpened(Action* value);
    static void DepthReported(float _Depth);
    static void ItemCollected(MonoString* _ItemID, int32_t _Count);
    static void ItemRemoved(MonoString* _ItemID, int32_t _Count);
    static void ItemUsed(MonoString* _ItemID, int32_t _Count);
    static void ItemCrafted(MonoString* _ItemID, int32_t _Count);
    static void ItemRecycled(MonoString* _ItemID, int32_t _Count);
    static void UpgradeAdded(MonoString* _UpgradeID, int32_t _Count);
    static void MaxHpReached(float _MaxHp);
    static void Headshot();
    static void DigBlock();
    static void AttackBlocked();
    static void AttackCrit();
    static void PlayerDeath();
    static void ChestOpened();
    static void EnemyKilled(MonoString* _EnemyID, PlayerClass _PlayerClass, WeaponType _WeaponType, int32_t _Count);
};

// Namespace: <global>
class HazardPoisonGas : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<FirstPersonController> playersInside; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float damagePerSecond; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float damageInterval; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool isDamaging; // 0x0078

    // Methods
    void OnTriggerEnter(Collider* _Other);
    void OnTriggerExit(Collider* _Other);
    IEnumerator* ServerDamageLoop();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class InputHelper : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    InputHelperSO* inputHelperSo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<InputHelper.InputActionDisplay> inputActionDisplays; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ICrosshairTarget* currentTarget; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ICarriableOrPickable* currentCarriable; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FirstPersonController* player; // 0x0040

    // Methods
    void Start();
    void OnDestroy();
    void OnTargetChanged(ICrosshairTarget* _Target);
    void OnCarriableChanged(ICarriableOrPickable* _HeldObject);
    void Initialize();
    void InitializeUI();
    void EvaluateInputDisplay();
    void OnOnboardingStepReached(OnboardingStep _OnboardingStep);
    void SetActionDisplay(System.Collections.Generic.List<InputHelperSO.InputSet.InputActionHelper> _Actions);
    void .ctor();
};

// Namespace: <global>
class InputHelperSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    InputSet[][] inputSets; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InputActionHelper[][] inputActionHelpers; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InputActionHelper* rogueAbilityInput; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    InputActionHelper* warriorAbilityInput; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InputActionHelper* archerAbilityInput; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputActionHelper* minerAbilityInput; // 0x0040

    // Methods
    InputSet* GetInputSet(ICarriableOrPickable* _CarriableObject, ICrosshairTarget* _Target);
    InputActionHelper* GetTargetAction(MonoString* _TargetType);
    InputSet* GetInputSet(MonoString* _InputSetID);
    void .ctor();
};

// Namespace: <global>
class LayerHelper
{
public:
    // Static fields
    // static LayerMask DamageableLayer;


    // Methods
    static void SetAttackHitboxLayer(GameObject* _Obj);
    static void SetEquippedItemLayer(GameObject* _Obj);
    static void SetLocalPlayerLayer(GameObject* _Obj);
    static void SetClientPlayerLayer(GameObject* _Obj);
    static void SetLayerRecursively(GameObject* _Obj, int32_t _NewLayer);
    static void .cctor();
};

// Namespace: <global>
class NetworkHelper : public NetworkBehaviour
{
public:
    // Static fields
    // static NetworkHelper* <Instance>k__BackingField;

    uint8_t pad_0000[0x68]; // 0x0000
    System.Action<System.Int32,System.Int32> OnWaveProgressUpdated; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Action<System.Int32> OnWaveIndexUpdated; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Action* OnEndWave; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Coroutine* countdownCoroutine; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Action<System.Single> OnCountdownProgress; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Action<System.Boolean> OnEndGame; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<System.UInt64> playersID; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Action* OnCloseUpgradeScreen; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Mirror.SyncDictionary<System.UInt64,System.String> endOfWaveVotes; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Action<System.String,System.Collections.Generic.List<System.String>> OnCloseEndOfWaveUpgradeScreen; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Action<System.UInt64,System.String> OnEndOfWaveVoteUpdated; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_syncTotalEnemyInWave; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_syncEnemiesKilled; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_currentWaveIndex; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_syncCurrentWaveCountdown; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    int32_t syncTotalEnemyInWave; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t syncEnemiesKilled; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool SyncFinishedLastNormalWave; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    int32_t currentWaveIndex; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float syncNextWaveCountdown; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float syncCurrentWaveCountdown; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    bool syncShow; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float syncDelay; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    bool isRogueUpgradePhaseActive; // 0x0100
    bool isEndOfWaveUpgradePhaseActive; // 0x0101

    // Methods
    static NetworkHelper* get_Instance();
    static void set_Instance(NetworkHelper* value);
    void Awake();
    void OnStartClient();
    void CmdOnEndWave(int32_t _CurrentWaveIndex);
    void RPCEndWave();
    void OnWaveIndexChanged(int32_t _OldValue, int32_t _NewValue);
    void ServerUpdateWaveProgress(int32_t _Killed, int32_t _Total);
    void OnWaveProgressChanged(int32_t _OldValue, int32_t _NewValue);
    void TargetOnEnemyKilled(NetworkConnectionToClient* _Con, MonoString* _EnemyID, Vector3 _Position, FirstPersonController* _Player, WeaponType _WeaponType);
    float GetTimeLeftBeforeWave();
    void ServerSetCountdown(float _Value);
    void ServerUpdateCountdown(float _Value);
    void OnTimeChanged(float _OldValue, float _NewValue);
    void CmdShowLoadingScreen(bool _Show, float _Delay);
    void RPCShowLoadingScreen(bool _Show, float _Delay);
    void CheckLoadingScreenOnStartClient();
    void ServerResetLoadingSyncVar();
    void RPCEndGame(bool _IsVictory);
    void add_OnCloseUpgradeScreen(Action* value);
    void remove_OnCloseUpgradeScreen(Action* value);
    void StartRogueUpgradePhase();
    void CmdOnUpgradeChosen(FirstPersonController* _Player);
    void CheckRogueUpgradeCompletion();
    void RemovePlayerFromRoguePhase(uint64_t _PlayerID);
    void RPCCloseUpgradeScreen();
    void RPCLevelUp();
    void CmdApplyUpgrade(FirstPersonController* _Player, MonoString* _UpgradeID, UpgradeRarity _UpgradeRarity);
    void TargetApplyUpgrade(NetworkConnectionToClient* _Con, FirstPersonController* _Player, MonoString* _UpgradeID, UpgradeRarity _UpgradeRarity);
    void add_OnCloseEndOfWaveUpgradeScreen(System.Action<System.String,System.Collections.Generic.List<System.String>> value);
    void remove_OnCloseEndOfWaveUpgradeScreen(System.Action<System.String,System.Collections.Generic.List<System.String>> value);
    void add_OnEndOfWaveVoteUpdated(System.Action<System.UInt64,System.String> value);
    void remove_OnEndOfWaveVoteUpdated(System.Action<System.UInt64,System.String> value);
    void StartEndOfWaveUpgradePhase(System.Collections.Generic.List<System.String> _Choices);
    void CallEndOfWaveUpgrade(System.Collections.Generic.List<System.String> _EndOfWaveUpgrades);
    void CmdOnEndOfWaveUpgradeChosen(MonoString* _UpgradeID, FirstPersonController* _Player);
    void CheckEndOfWaveCompletion();
    void RemovePlayerFromEndOfWavePhase(uint64_t _PlayerID);
    MonoString* ResolveVote(System.Collections.Generic.List<System.String>& tiedWinnerIDs);
    void RPCCloseEndOfWaveUpgradeScreen(MonoString* _WinnerUpgradeId, System.Collections.Generic.List<System.String> tiedWinnerIDs);
    void OnEndOfWaveVotesChanged(Mirror.SyncIDictionary.Operation<System.UInt64,System.String> _Op, uint64_t _Key, MonoString* _Value);
    void CmdApplyEndOfWaveUpgrade(FirstPersonController* _Player, MonoString* _UpgradeID);
    void TargetApplyEndOfWaveUpgrade(NetworkConnectionToClient* _Con, FirstPersonController* _Player, MonoString* _UpgradeID);
    void TargetOnChestPlaced(NetworkConnectionToClient* _Con);
    void TargetOnItemCollected(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    void TargetOnItemCrafted(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    void TargetOnItemRecycled(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    void TargetOnHeadshot(NetworkConnectionToClient* _Con);
    void TargetOnAttackBlocked(NetworkConnectionToClient* _Con);
    void CmdToggleGodMode(FirstPersonController* _Player, bool _isGodModeEnabled);
    void .ctor();
    bool Weaved();
    int32_t get_NetworksyncTotalEnemyInWave();
    void set_NetworksyncTotalEnemyInWave(int32_t value);
    int32_t get_NetworksyncEnemiesKilled();
    void set_NetworksyncEnemiesKilled(int32_t value);
    bool get_NetworkSyncFinishedLastNormalWave();
    void set_NetworkSyncFinishedLastNormalWave(bool value);
    int32_t get_NetworkcurrentWaveIndex();
    void set_NetworkcurrentWaveIndex(int32_t value);
    float get_NetworksyncNextWaveCountdown();
    void set_NetworksyncNextWaveCountdown(float value);
    float get_NetworksyncCurrentWaveCountdown();
    void set_NetworksyncCurrentWaveCountdown(float value);
    bool get_NetworksyncShow();
    void set_NetworksyncShow(bool value);
    float get_NetworksyncDelay();
    void set_NetworksyncDelay(float value);
    void UserCode_CmdOnEndWave__Int32(int32_t _CurrentWaveIndex);
    static void InvokeUserCode_CmdOnEndWave__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCEndWave();
    static void InvokeUserCode_RPCEndWave(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnEnemyKilled__NetworkConnectionToClient__String__Vector3__FirstPersonController__WeaponType(NetworkConnectionToClient* _Con, MonoString* _EnemyID, Vector3 _Position, FirstPersonController* _Player, WeaponType _WeaponType);
    static void InvokeUserCode_TargetOnEnemyKilled__NetworkConnectionToClient__String__Vector3__FirstPersonController__WeaponType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShowLoadingScreen__Boolean__Single(bool _Show, float _Delay);
    static void InvokeUserCode_CmdShowLoadingScreen__Boolean__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCShowLoadingScreen__Boolean__Single(bool _Show, float _Delay);
    static void InvokeUserCode_RPCShowLoadingScreen__Boolean__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCEndGame__Boolean(bool _IsVictory);
    static void InvokeUserCode_RPCEndGame__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdOnUpgradeChosen__FirstPersonController(FirstPersonController* _Player);
    static void InvokeUserCode_CmdOnUpgradeChosen__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCCloseUpgradeScreen();
    static void InvokeUserCode_RPCCloseUpgradeScreen(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCLevelUp();
    static void InvokeUserCode_RPCLevelUp(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdApplyUpgrade__FirstPersonController__String__UpgradeRarity(FirstPersonController* _Player, MonoString* _UpgradeID, UpgradeRarity _UpgradeRarity);
    static void InvokeUserCode_CmdApplyUpgrade__FirstPersonController__String__UpgradeRarity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetApplyUpgrade__NetworkConnectionToClient__FirstPersonController__String__UpgradeRarity(NetworkConnectionToClient* _Con, FirstPersonController* _Player, MonoString* _UpgradeID, UpgradeRarity _UpgradeRarity);
    static void InvokeUserCode_TargetApplyUpgrade__NetworkConnectionToClient__FirstPersonController__String__UpgradeRarity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CallEndOfWaveUpgrade__List`1(System.Collections.Generic.List<System.String> _EndOfWaveUpgrades);
    static void InvokeUserCode_CallEndOfWaveUpgrade__List`1(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdOnEndOfWaveUpgradeChosen__String__FirstPersonController(MonoString* _UpgradeID, FirstPersonController* _Player);
    static void InvokeUserCode_CmdOnEndOfWaveUpgradeChosen__String__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCCloseEndOfWaveUpgradeScreen__String__List`1(MonoString* _WinnerUpgradeId, System.Collections.Generic.List<System.String> tiedWinnerIDs);
    static void InvokeUserCode_RPCCloseEndOfWaveUpgradeScreen__String__List`1(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdApplyEndOfWaveUpgrade__FirstPersonController__String(FirstPersonController* _Player, MonoString* _UpgradeID);
    static void InvokeUserCode_CmdApplyEndOfWaveUpgrade__FirstPersonController__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetApplyEndOfWaveUpgrade__NetworkConnectionToClient__FirstPersonController__String(NetworkConnectionToClient* _Con, FirstPersonController* _Player, MonoString* _UpgradeID);
    static void InvokeUserCode_TargetApplyEndOfWaveUpgrade__NetworkConnectionToClient__FirstPersonController__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnChestPlaced__NetworkConnectionToClient(NetworkConnectionToClient* _Con);
    static void InvokeUserCode_TargetOnChestPlaced__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnItemCollected__NetworkConnectionToClient__String__Int32(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    static void InvokeUserCode_TargetOnItemCollected__NetworkConnectionToClient__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnItemCrafted__NetworkConnectionToClient__String__Int32(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    static void InvokeUserCode_TargetOnItemCrafted__NetworkConnectionToClient__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnItemRecycled__NetworkConnectionToClient__String__Int32(NetworkConnectionToClient* _Con, MonoString* _ItemID, int32_t _Count);
    static void InvokeUserCode_TargetOnItemRecycled__NetworkConnectionToClient__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnHeadshot__NetworkConnectionToClient(NetworkConnectionToClient* _Con);
    static void InvokeUserCode_TargetOnHeadshot__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetOnAttackBlocked__NetworkConnectionToClient(NetworkConnectionToClient* _Con);
    static void InvokeUserCode_TargetOnAttackBlocked__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdToggleGodMode__FirstPersonController__Boolean(FirstPersonController* _Player, bool _isGodModeEnabled);
    static void InvokeUserCode_CmdToggleGodMode__FirstPersonController__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ICrosshairTarget
{
public:

    // Methods
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    MonoString* GetInteractionStatInfo();
    float GetInteractionDistance();
};

// Namespace: <global>
class IHoldInteractable
{
public:

    // Methods
    void OnStartHold(FirstPersonController* _Owner);
    IEnumerator* OnHold(FirstPersonController* _Owner);
    void OnCancelHold(FirstPersonController* _Owner);
};

// Namespace: <global>
class IInteractable
{
public:

    // Methods
    void Interact(FirstPersonController* _Owner);
};

// Namespace: <global>
class LocalObjectBase : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    QuickOutline* QuickOutline; // 0x0020

    // Methods
    void Awake();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void InitQuickOutline(Mode _OutlineMode);
    void SetOutline(bool _B);
    void .ctor();
};

// Namespace: <global>
struct HandRequirement
{
public:
    // Static fields
    // static HandRequirement RightOnly;
    // static HandRequirement LeftOnly;
    // static HandRequirement Both;
    // static HandRequirement None;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class EquippedItem : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Animator* itemAnimator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* rightHandIKTarget; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* leftHandIKTarget; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FirstPersonController* <Player>k__BackingField; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ItemDataSO* <ItemDataSO>k__BackingField; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    HandRequirement handRequirement; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t SlotIndex; // 0x004C

    // Methods
    FirstPersonController* get_Player();
    void set_Player(FirstPersonController* value);
    ItemDataSO* get_ItemDataSO();
    void set_ItemDataSO(ItemDataSO* value);
    Transform* get_Pivot();
    Transform* get_RightHandIKTarget();
    Transform* get_LeftHandIKTarget();
    HandRequirement get_HandRequirement();
    Animator* get_ItemAnimator();
    MonoString* get_ID();
    void SetPlayer(FirstPersonController* _Player, int32_t _SlotIndex, bool _IsLocalPlayer);
    void SetItemDataSO(ItemDataSO* _ItemDataSO);
    void Show();
    void Hide();
    void .ctor();
};

// Namespace: <global>
class IAimingEquippedItem
{
public:

    // Methods
    bool CanAim();
};

// Namespace: <global>
class ICarriableOrPickable
{
public:

    // Methods
    MonoString* get_ID();
};

// Namespace: <global>
class IItemInteractable
{
public:

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
};

// Namespace: <global>
class InventorySystem : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    FirstPersonController* player; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    PlayerData* playerData; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    FPSSettingsSO* fPSSettingsSo; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Action<System.UInt64,System.Int32,System.String,System.Int32> OnEquipmentChanged; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Action<System.Int32> OnInventorySizeChanged; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Action<System.Int32,System.String,System.Int32> OnResellingBasketChanged; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<System.Int32> OnSlotSelectedUpdated; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Mirror.SyncList<InventorySystem.InventoryEntry> InventoryEntries; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t slotSelected; // 0x00A8

    // Methods
    void add_OnSlotSelectedUpdated(System.Action<System.Int32> value);
    void remove_OnSlotSelectedUpdated(System.Action<System.Int32> value);
    void LocalInit(FirstPersonController* _Owner, FPSSettingsSO* _FPSSettingsSo);
    void OnDestroy();
    bool CanAddItem(ItemDataSO* _Item);
    void ThrowCurrentEquipment(Vector3 _Origin, Vector3 _Direction);
    void RemoveCurrentEquipment();
    void RemoveEquipmentAtSlot(int32_t _SlotIndex);
    int32_t GetItemCount(MonoString* _ItemID);
    int32_t GetEquipmentSlotCount();
    bool CanAddTo(Mirror.SyncList<InventorySystem.InventoryEntry> _Entries, ItemDataSO* _Item);
    bool TryAdd(ItemDataSO* _Item, int32_t _Amount);
    bool TryRemove(int32_t _SlotIndex, int32_t _Amount);
    int32_t GetMaxItemStackCount(ItemDataSO* _Item);
    void OnScrollUp();
    void OnScrollDown();
    void OnSlotSelect(int32_t _SlotId);
    void ChangeSelectedSlot(int32_t _NewSlot);
    void OnStartClient();
    void OnInitialized();
    void CmdIncreaseInventoryItemSize(float _Value);
    void CmdSwapItems(SlotStruct _originalSlot, SlotStruct _targetSlot);
    void CmdCombineItems(SlotStruct _originalSlot, SlotStruct _targetSlot);
    Mirror.SyncList<InventorySystem.InventoryEntry> GetListForSlot(SlotStruct _slotStruct);
    void ServerInit(FirstPersonController* _Owner, PlayerData* _Data, FPSSettingsSO* _FPSSettingsSO);
    int32_t ServerAddItem(ItemDataSO* _Item, int32_t _Amount);
    void CmdRemoveItemQuantity(MonoString* _ItemID, int32_t _Amount);
    bool ServerRemoveItemFromSlot(int32_t _Slot, int32_t _Amount);
    int32_t ServerRemoveItemQuantity(ItemDataSO* _Item, int32_t _Amount);
    void ClearInventoryEntries();
    void ClearInventoryData();
    void UpdateSaveDataSlot(SlotType _slotType, int32_t _SlotIndex);
    void OnInventoryChangedCallback(Mirror.SyncList.Operation<InventorySystem.InventoryEntry> _Op, int32_t _Index, InventoryEntry _OldItem, InventoryEntry _NewItem);
    void .ctor();
    bool Weaved();
    void UserCode_CmdIncreaseInventoryItemSize__Single(float _Value);
    static void InvokeUserCode_CmdIncreaseInventoryItemSize__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSwapItems__SlotStruct__SlotStruct(SlotStruct _originalSlot, SlotStruct _targetSlot);
    static void InvokeUserCode_CmdSwapItems__SlotStruct__SlotStruct(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCombineItems__SlotStruct__SlotStruct(SlotStruct _originalSlot, SlotStruct _targetSlot);
    static void InvokeUserCode_CmdCombineItems__SlotStruct__SlotStruct(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRemoveItemQuantity__String__Int32(MonoString* _ItemID, int32_t _Amount);
    static void InvokeUserCode_CmdRemoveItemQuantity__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
struct SlotStruct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SlotType slotType; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t slotID; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    uint64_t playerID; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryContainer* container; // 0x0020

    // Methods
    void .ctor(ItemSlotBase* _itemSlotBase);
};

// Namespace: <global>
class DrinkDataSO : public ItemDataSO
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    MonoString* drinkSoundID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    float buffValue; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    StatModType buffType; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float buffDuration; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float timeToUse; // 0x008C

    // Methods
    void .ctor();
};

// Namespace: <global>
class ItemDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<ItemDataSO> items; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<CarriableDataSO> carriables; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<ItemDataSO> itemsDroppable; // 0x0028

    // Methods
    ItemDataSO* GetItemByID(MonoString* _ID);
    CarriableDataSO* GetCarriableByID(MonoString* _ID);
    ItemDataSO* GetRandomDrop();
    void .ctor();
};

// Namespace: <global>
class ItemDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* itemID; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* itemIcon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PickableItem* pickableItemPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EquippedItem* equippedItemPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UnityEngine.GameObject> visualItemPrefabs; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ItemDataSO* itemProduced; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ExchangeResourceList* itemGet; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool isStackable; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t maxStackSize; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool disableGravityOnSpawn; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float spawnForwardOffset; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    bool applyRandomImpulse; // 0x0060
    bool spawnWithVFX; // 0x0061
    bool isScrapItem; // 0x0062
    uint8_t pad_0063[0x1]; // 0x0063
    Vector2Int countRange; // 0x0064
    uint8_t pad_0065[0x7]; // 0x0065
    bool canBeExchanged; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    UpgradeRarity VfxRarity; // 0x0070

    // Methods
    MonoString* GetLocalizedName();
    MonoString* GetLocalizedString(MonoString* _entryKey);
    void .ctor();
};

// Namespace: <global>
class ExchangeResourceList
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<ExchangeResource> items; // 0x0010

    // Methods
    void .ctor();
};

// Namespace: <global>
struct ExchangeResource
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemDataSO* item; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t amount; // 0x0018
};

// Namespace: <global>
class ParchmentDataSO : public ItemDataSO
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    float maxLifetime; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float impactDamage; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float effectDamage; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    StatusEffectData statusEffectData; // 0x0084
    uint8_t pad_0085[0xF]; // 0x0085
    float radius; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    bool isDoT; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float DoTInterval; // 0x009C

    // Methods
    void .ctor();
};

// Namespace: <global>
class PickupUpgradeItemDataSO : public ItemDataSO
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    RogueLikeDatabaseSO* RogueLikeDatabaseSO; // 0x0078

    // Methods
    void .ctor();
};

// Namespace: <global>
class ScrapItemDataSO : public MonoBehaviour
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class WeaponDataSO : public ItemDataSO
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<WeaponDataSO.WeaponType,System.String> weaponTypeEntryNames;

    uint8_t pad_0000[0x78]; // 0x0000
    System.Collections.Generic.List<StatusEffectData> statusEffects; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    WeaponType weaponType; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float baseDamage; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float hitStopDuration; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool canDefend; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float shieldStaminaCost; // 0x0090

    // Methods
    float get_BaseDamage();
    WeaponType get_WType();
    System.Collections.Generic.List<StatusEffectData> get_StatusEffects();
    static MonoString* GetWeaponTypeLocalizedString(WeaponType weaponType);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ItemManager : public NetworkBehaviour
{
public:
    // Static fields
    // static ItemManager* Instance;

    uint8_t pad_0000[0x68]; // 0x0000
    ItemDatabaseSO* itemDataBase; // 0x0068

    // Methods
    ItemDataSO* GetItemDataSoByID(MonoString* _ItemID);
    CarriableDataSO* GetCarriableDataSoByID(MonoString* _CarriableID);
    void Awake();
    void OnStartClient();
    void CmdInstantiatePickableNewItem(MonoString* _ItemID, int32_t _Count, Vector3 _Position);
    void CmdDestroyPickableItem(PickableItem* _PickableItem);
    PickableItem* ServerInstantiatePickableItem(MonoString* _ItemID, int32_t _Count, Vector3 _Position, bool forceShow);
    PickableItem* ServerInstantiateEnemyDrop(Vector3 _Position);
    void CmdInstantiateCarriableObject(MonoString* _ItemID, Vector3 _Position);
    CarriableObject* ServerInstantiateCarriableObject(MonoString* _CarriableID, Vector3 _Position);
    void .ctor();
    bool Weaved();
    void UserCode_CmdInstantiatePickableNewItem__String__Int32__Vector3(MonoString* _ItemID, int32_t _Count, Vector3 _Position);
    static void InvokeUserCode_CmdInstantiatePickableNewItem__String__Int32__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdDestroyPickableItem__PickableItem(PickableItem* _PickableItem);
    static void InvokeUserCode_CmdDestroyPickableItem__PickableItem(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdInstantiateCarriableObject__String__Vector3(MonoString* _ItemID, Vector3 _Position);
    static void InvokeUserCode_CmdInstantiateCarriableObject__String__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class ItemStackBase : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Renderer[][] outlinedRenderers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<UnityEngine.GameObject> visualStackLevels; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Collider* interactionCollider; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    ItemDataSO* ItemData; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    QuickOutline* QuickOutline; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_ItemCount; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    int32_t ItemCount; // 0x0098

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void Interact(FirstPersonController* _Player);
    void Awake();
    void InitQuickOutline(Mode _Mode);
    void SetOutline(bool _Value);
    void OnItemCountChanged(int32_t _OldCount, int32_t _NewCount);
    void DisableVisuals(int32_t _OldCount, int32_t _NewCount);
    void UpdateInteractionCollider(int32_t _NewCount);
    void OnStartClient();
    bool ServerCanRemoveItem(MonoString* _ItemID, int32_t _Count);
    void ServerOnRemoveItem(int32_t _Count);
    void .ctor();
    bool Weaved();
    int32_t get_NetworkItemCount();
    void set_NetworkItemCount(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class IThrowable
{
public:

    // Methods
    void Throw(FirstPersonController* _Owner, Vector3 _Position, Vector3 _Direction, float _Force);
};

// Namespace: <global>
class MetaCurrencyItem : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FirstPersonController* autoPickupPlayerTarget; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Coroutine* autoPickupCo; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t count; // 0x0030

    // Methods
    void Init(int32_t _Count, FirstPersonController* _Player);
    void OnDestroy();
    IEnumerator* AutoPickupCo();
    void .ctor();
};

// Namespace: <global>
class PickableBomb : public PickableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    ExplosionObject* explosionObject; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Renderer* slimeRenderer; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Material* bombMaterial; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Material* baseMat; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Coroutine* animationCoroutine; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    bool isStuck; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float surfaceOffset; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float damage; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float attackRadius; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float waitBeforeExplosion; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    bool hasBeenThrown; // 0x010C

    // Methods
    void Throw(FirstPersonController* _Owner, Vector3 _Position, Vector3 _Direction, float _Force);
    void Awake();
    void OnCollisionEnter(Collision* _Collision);
    void OnDestroy();
    bool IsPickable(FirstPersonController* _Player);
    void OnStartClient();
    void StickToSurface(Collision* _Collision);
    IEnumerator* ServerExplodeCo();
    void RpcExplode(Vector3 _Position, Quaternion _Rotation);
    IEnumerator* ExplosionAnimationCo();
    float EaseInExpo(float _X);
    void .ctor();
    bool Weaved();
    bool get_NetworkisStuck();
    void set_NetworkisStuck(bool value);
    void UserCode_RpcExplode__Vector3__Quaternion(Vector3 _Position, Quaternion _Rotation);
    static void InvokeUserCode_RpcExplode__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PickableItem : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    MonoString* SyncItemID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Collider[][] mergeColliders; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    PickableItem* mergeTarget; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Rigidbody* RigidBody; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    ParticleSystem* vfxItem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ItemDataSO* <ItemDataSO>k__BackingField; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_gravityEnabled; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    uint64_t SyncPlayerID; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    int32_t syncCount; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool gravityEnabled; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float mergeRadius; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    LayerMask itemLayer; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    bool isMerging; // 0x00C8

    // Methods
    ItemDataSO* get_ItemDataSO();
    void set_ItemDataSO(ItemDataSO* value);
    void OnStartServer();
    void OnStartClient();
    void NetworkInit(ItemDataSO* _ItemDataSO, int32_t _Count);
    int32_t GetItemCount();
    bool ServerTryPickup(FirstPersonController* _Player, int32_t _CountLeft);
    void ServerApplyForce(Vector3 _Direction);
    void DisableGravity();
    IEnumerator* MergeCheckCo();
    void TryMergeWithNearby();
    bool CanMerge(PickableItem* _Other);
    void Merge(PickableItem* _Other);
    IEnumerator* MergeAnimationCo(PickableItem* _Other);
    void CleanupMergingItems();
    void OnGravityChanged(bool _OldValue, bool _NewValue);
    void Interact(FirstPersonController* _Owner);
    bool CanPickupItem(FirstPersonController* _Owner);
    void PickupItem(FirstPersonController* _Owner);
    MonoString* GetInteractionText();
    MonoString* GetVfxID();
    MonoString* GetVfxIDFromRarity(UpgradeRarity rarity);
    void Awake();
    void OnDestroy();
    void ReturnParticleToPool();
    bool IsPickable(FirstPersonController* _Player);
    bool RefreshAndValidateSO();
    void EnableVFX();
    void .ctor();
    bool Weaved();
    uint64_t get_NetworkSyncPlayerID();
    void set_NetworkSyncPlayerID(uint64_t value);
    MonoString* get_NetworkSyncItemID();
    void set_NetworkSyncItemID(MonoString* value);
    int32_t get_NetworksyncCount();
    void set_NetworksyncCount(int32_t value);
    bool get_NetworkgravityEnabled();
    void set_NetworkgravityEnabled(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PickableLamp : public PickableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    MeshRenderer* lightMesh; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Material* materialLightOn; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Light* pointLight; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    bool isStuck; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float surfaceOffset; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    bool hasBeenThrown; // 0x00F0

    // Methods
    void Throw(FirstPersonController* _Owner, Vector3 _Position, Vector3 _Direction, float _Force);
    void ServerForceLightOnState();
    void OnCollisionEnter(Collision* _Collision);
    void OnDestroy();
    void OnStartClient();
    void StickToSurface(Collision* _Collision);
    void RpcTurnOnLamp(Vector3 _Position, Quaternion _Rotation);
    void .ctor();
    bool Weaved();
    bool get_NetworkisStuck();
    void set_NetworkisStuck(bool value);
    void UserCode_RpcTurnOnLamp__Vector3__Quaternion(Vector3 _Position, Quaternion _Rotation);
    static void InvokeUserCode_RpcTurnOnLamp__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PickableUpgrade : public PickableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    PickupUpgradeItemDataSO* PickupUpgradeItemDataSO; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    RogueLikeUpgradeSO* pickupUpgradeSO; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    MonoString* SyncUpgradeID; // 0x00E0

    // Methods
    void NetworkInit(ItemDataSO* _ItemDataSO, int32_t _Count);
    void PickupItem(FirstPersonController* _Owner);
    bool CanPickupItem(FirstPersonController* _Owner);
    bool RefreshAndValidateSO();
    MonoString* GetInteractionText();
    MonoString* GetVfxID();
    void .ctor();
    bool Weaved();
    MonoString* get_NetworkSyncUpgradeID();
    void set_NetworkSyncUpgradeID(MonoString* value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ScrapPickableItem : public PickableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    int32_t syncVisualIndex; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    int32_t scrapItemBonus; // 0x00D4

    // Methods
    void OnStartClient();
    void NetworkInit(ItemDataSO* _ItemDataSO, int32_t _Count);
    bool ServerTryPickup(FirstPersonController* _Player, int32_t _CountLeft);
    void Interact(FirstPersonController* _Owner);
    void SetBonusScrapItem(int32_t _Bonus);
    bool IsPickable(FirstPersonController* _Player);
    void InstantiateVisuals(int32_t _Index);
    void .ctor();
    bool Weaved();
    int32_t get_NetworksyncVisualIndex();
    void set_NetworksyncVisualIndex(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class StorageArea : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    System.Collections.Generic.List<StorageItemStack> storageItemStacks; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<UnityEngine.Transform> storageSpawns; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    TextMeshPro* nextLevelText; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<StorageItemStack> storageItems; // 0x0090

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    void OnStartServer();
    void OnStartClient();
    void OnChargeChanged(int32_t _CurrentCharge, int32_t _MaxCharge);
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void RPCUpdateText(int32_t _CurrentCharge, int32_t _MaxCharge, int32_t _CurrentLevel);
    void .ctor();
    bool Weaved();
    void UserCode_RPCUpdateText__Int32__Int32__Int32(int32_t _CurrentCharge, int32_t _MaxCharge, int32_t _CurrentLevel);
    static void InvokeUserCode_RPCUpdateText__Int32__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class StorageItemStack : public ItemStackBase
{
public:
    uint8_t pad_0000[0xA0]; // 0x0000
    ItemDataSO* itemRequired; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    StorageArea* storageArea; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    NetworkBehaviourSyncVar ___storageAreaNetId; // 0x00B0

    // Methods
    void Awake();
    void OnStartClient();
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    void ServerOnRemoveItem(int32_t _Count);
    void SetStorageArea(StorageArea* _StorageArea);
    bool IsPlaceable(MonoString* _ItemID);
    void PlaceItem(Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    void ServerInit();
    void RpcPlayPlaceAnimation(Vector3 _Origin, Quaternion _Rotation, int32_t _PreviousCount);
    void ClearStack(MonoString* _Arg1);
    void .ctor();
    bool Weaved();
    StorageArea* get_NetworkstorageArea();
    void set_NetworkstorageArea(StorageArea* value);
    void UserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__Int32(Vector3 _Origin, Quaternion _Rotation, int32_t _PreviousCount);
    static void InvokeUserCode_RpcPlayPlaceAnimation__Vector3__Quaternion__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DiggingTool : public EquippedWeapon
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    DiggingToolDataSO* DiggingToolData; // 0x0068

    // Methods
    void SetItemDataSO(ItemDataSO* _ItemDataSO);
    void UseHit(float digMultiplier);
    void OnHit(float digMultiplier);
    bool Raycast(Transform* _cameraTransform, RaycastHit hit, int32_t layerMask);
    bool IsInLayerMask(GameObject* _Obj, LayerMask _LayerMask);
    void .ctor();
};

// Namespace: <global>
class DiggingToolDataSO : public WeaponDataSO
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    HitByTerrainType[][] hitByTerrainTypes; // 0x0098

    // Methods
    float GetHitsPerDig(ETerrainMaterialType _Mat);
    void .ctor();
};

// Namespace: <global>
class DrinkTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    DrinkDataSO* drinkDataSO; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.ParticleSystem> drinkParticles; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t drinkUse; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float currentProgress; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    bool isInUse; // 0x0068

    // Methods
    void SetItemDataSO(ItemDataSO* _ItemDataSO);
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void ApplyEffect();
    void Update();
    void .ctor();
};

// Namespace: <global>
class HealingDrinkTool : public DrinkTool
{
public:

    // Methods
    void ApplyEffect();
    void .ctor();
};

// Namespace: <global>
class SpeedDrinkTool : public DrinkTool
{
public:

    // Methods
    void ApplyEffect();
    void .ctor();
};

// Namespace: <global>
class StaminaDrinkTool : public DrinkTool
{
public:

    // Methods
    void ApplyEffect();
    void .ctor();
};

// Namespace: <global>
class CompassTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* north; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float smoothTime; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float wobbleStrength; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float currentVelocity; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float currentYRotation; // 0x0064

    // Methods
    void Update();
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class HornTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    int32_t hornUse; // 0x0050

    // Methods
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void StartHorn();
    void StopHorn();
    void .ctor();
};

// Namespace: <global>
class MegaphoneTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Tween* tweenPosition; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Tween* tweenRotation; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Vector3 usePosition; // 0x0060
    uint8_t pad_0061[0xB]; // 0x0061
    Vector3 useRotation; // 0x006C

    // Methods
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void StartUsing();
    void KillTween();
    void .ctor();
};

// Namespace: <global>
class ReviveTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* playerProjection; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* fxOnRevive; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* currentProjection; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float timeToHeal; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Vector3 playerRevivePosition; // 0x006C
    uint8_t pad_006D[0xB]; // 0x006D
    float currentProgress; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    bool isInUse; // 0x007C

    // Methods
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void Update();
    FirstPersonController* GetDeadPlayer();
    void .ctor();
};

// Namespace: <global>
class PickaxeTool : public DiggingTool
{
public:
    uint8_t pad_0000[0x70]; // 0x0000
    int32_t pickaxeDigBoolHash; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t pickaxeSpecialHoldHash; // 0x0074

    // Methods
    void OnPrimaryAction(bool _B);
    void OnSecondaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class ParchmentTool : public Tool
{
public:
    // Static fields
    // static int32_t DissolveAmount;

    uint8_t pad_0000[0x50]; // 0x0000
    MeshRenderer* parchmentMeshRenderer; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Material* disintegrateMaterialRef; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Coroutine* disintegratedCoroutine; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Material* disintegratedMaterial; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    MaterialPropertyBlock* propBlock; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ParchmentDataSO* parchmentDataSo; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    float timeToUse; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float dissolveDuration; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float currentProgress; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool isInUse; // 0x008C
    bool disintegrated; // 0x008D

    // Methods
    void SetItemDataSO(ItemDataSO* _ItemDataSO);
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void OnStart();
    void OnCharge(float _Charge);
    void OnStop();
    void Use();
    void Awake();
    void Update();
    void Disintegrate();
    IEnumerator* DisintegrateCoroutine();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ProjectileParchmentTool : public ParchmentTool
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    Transform* projectileTransform; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    MonoString* vfxID; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MonoString* projectileID; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float projectileFinalSize; // 0x00A8

    // Methods
    void OnStart();
    void Use();
    void .ctor();
};

// Namespace: <global>
class SpawnedDoTArea : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* particleID; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    NetworkIdentity* spawnerIdentity; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Collider[][] hitsBuffer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.HashSet<IDamageable> AlreadyHit; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float maxLifetime; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float radius; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float dotDelay; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float dotDamage; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    StatusEffectData statusEffectData; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    float currentLifetime; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float timeSinceLastDoT; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    DamageType damageType; // 0x0068

    // Methods
    void Init(DamageType _damageType, NetworkIdentity* _spawnerIdentity, float _radius, float _maxLifetime, float _damage, StatusEffectData _statusEffectData, float _dotDelay);
    void Update();
    void ApplyDoT();
    void ApplyEffect(IDamageable* damageable);
    void .ctor();
};

// Namespace: <global>
class SpawnedTriggerArea : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* particleID; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SphereCollider* sphereCollider; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    NetworkIdentity* spawnerIdentity; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.HashSet<IDamageable> AlreadyHit; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float maxLifetime; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float damage; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    StatusEffectData statusEffectData; // 0x0048
    uint8_t pad_0049[0xF]; // 0x0049
    float currentLifetime; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    DamageType damageType; // 0x005C

    // Methods
    void Init(DamageType _damageType, NetworkIdentity* _spawnerIdentity, float _radius, float _maxLifetime, float _damage, StatusEffectData _statusEffectData);
    void Update();
    void OnTriggerEnter(Collider* other);
    void OnTriggerExit(Collider* other);
    void ApplyEffect(IDamageable* damageable);
    void UnapplyEffect(IDamageable* damageable);
    void OnDestroy();
    void .ctor();
};

// Namespace: <global>
class ArrowDummy : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Coroutine* releaseCo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Hitbox* hitbox; // 0x0028

    // Methods
    void Spawn(Vector3 _Pos, Quaternion _Rot, Hitbox* _Hitbox);
    void OnEnemyDeath();
    IEnumerator* DestroyCo(float _Delay);
    void .ctor();
};

// Namespace: <global>
class DoTAreaSpawnerProjectile : public SpawnerProjectile
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    SpawnedDoTArea* spawnedDoTArea; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    ParchmentDataSO* parchmentDataSO; // 0x00F8

    // Methods
    void SpawnObject(Vector3 _Pos);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ExplosiveProjectile : public Projectile
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    Collider[][] hitsBuffer; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    float explosionRange; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float knockbackForce; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float knockbackUpwardForce; // 0x0100

    // Methods
    void ServerUpdateAreaExplosion(float _ExplosionArea);
    void OnTouched(Vector3 _Pos);
    void Explode(Vector3 _Pos);
    void ApplyEffect(IDamageable* damageable, Collider* hit, Vector3 _Pos);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class Projectile : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    GameObject* impactFX; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* projectileFX; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* muzzleFX; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    NetworkIdentity* SpawnerIdentity; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Coroutine* ReleasesCoroutine; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    GameObject* ProjectileFXInstance; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.HashSet<IDamageable> AlreadyHit; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Vector3 SyncVelocity; // 0x00A0
    uint8_t pad_00A1[0xB]; // 0x00A1
    bool HasExploded; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float speed; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float gravity; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float launchAngle; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float castRadius; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    LayerMask hitMask; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    DamageResult Damage; // 0x00C4
    uint8_t pad_00C5[0x7]; // 0x00C5
    DamageType DamageType; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    WeaponType WeaponType; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    Vector3 RuntimeVelocity; // 0x00D4
    uint8_t pad_00D5[0xB]; // 0x00D5
    Vector3 LastPosition; // 0x00E0

    // Methods
    void ServerInit(DamageResult _Damage, Vector3 _Position, Vector3 _Direction, NetworkIdentity* _Spawner, DamageType _Type, float _OverrideSpeed);
    void ServerInitAutoAim(DamageResult _Damage, float _LaunchAngleDeg, Vector3 _StartPos, Vector3 _TargetPos, NetworkIdentity* _Spawner, DamageType _Type, float _OverrideSpeed);
    void OnStartClient();
    void Update();
    void Move();
    void LateUpdate();
    void RaycastCollision();
    void ProcessHit(Collider* _Other, Vector3 _HitPoint);
    void OnTouched(Vector3 _Pos);
    void RpcImpactFX(Vector3 _Pos);
    IEnumerator* ReleaseCo(float _Delay);
    void OnDestroy();
    void .ctor();
    bool Weaved();
    Vector3 get_NetworkSyncVelocity();
    void set_NetworkSyncVelocity(Vector3 value);
    bool get_NetworkHasExploded();
    void set_NetworkHasExploded(bool value);
    void UserCode_RpcImpactFX__Vector3(Vector3 _Pos);
    static void InvokeUserCode_RpcImpactFX__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class SpawnerProjectile : public Projectile
{
public:

    // Methods
    void OnTouched(Vector3 _Pos);
    void SpawnObject(Vector3 _Pos);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class StuckEnemyProjectile : public Projectile
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    ArrowDummy* arrowDummyPrefab; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Vector3 startPos; // 0x00F8
    uint8_t pad_00F9[0xB]; // 0x00F9
    Vector3 targetPos; // 0x0104
    uint8_t pad_0105[0xB]; // 0x0105
    float travelTime; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    float arcHeight; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float elapsedTime; // 0x0118

    // Methods
    void ServerInitAutoAim(DamageResult _Damage, float _LaunchAngleDeg, Vector3 _StartPos, Vector3 _TargetPos, NetworkIdentity* _Spawner, DamageType _Type, float _OverrideSpeed);
    void Move();
    void ProcessHit(Collider* _Other, Vector3 _HitPoint);
    void StopProjectile();
    void RpcStick(Vector3 _Pos, Quaternion _Rot, Hitbox* _Hitbox);
    void TargetShowHit(NetworkConnection* _Conn);
    void .ctor();
    bool Weaved();
    Vector3 get_NetworkstartPos();
    void set_NetworkstartPos(Vector3 value);
    Vector3 get_NetworktargetPos();
    void set_NetworktargetPos(Vector3 value);
    float get_NetworktravelTime();
    void set_NetworktravelTime(float value);
    float get_NetworkarcHeight();
    void set_NetworkarcHeight(float value);
    void UserCode_RpcStick__Vector3__Quaternion__Hitbox(Vector3 _Pos, Quaternion _Rot, Hitbox* _Hitbox);
    static void InvokeUserCode_RpcStick__Vector3__Quaternion__Hitbox(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetShowHit__NetworkConnection(NetworkConnection* _Conn);
    static void InvokeUserCode_TargetShowHit__NetworkConnection(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class StuckProjectile : public Projectile
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    ArrowDummy* arrowDummyPrefab; // 0x00F0

    // Methods
    void ProcessHit(Collider* _Other, Vector3 _HitPoint);
    void StopProjectile();
    void RpcStick(Vector3 _Pos, Quaternion _Rot, Hitbox* _Hitbox);
    void TargetShowHit(NetworkConnection* _Conn);
    void .ctor();
    bool Weaved();
    void UserCode_RpcStick__Vector3__Quaternion__Hitbox(Vector3 _Pos, Quaternion _Rot, Hitbox* _Hitbox);
    static void InvokeUserCode_RpcStick__Vector3__Quaternion__Hitbox(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetShowHit__NetworkConnection(NetworkConnection* _Conn);
    static void InvokeUserCode_TargetShowHit__NetworkConnection(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class TriggerAreaSpawnerProjectile : public SpawnerProjectile
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    SpawnedTriggerArea* spawnedTriggerArea; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    ParchmentDataSO* parchmentDataSO; // 0x00F8

    // Methods
    void SpawnObject(Vector3 _Pos);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ThrowableTool : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Vector3 throwOffset; // 0x0050
    uint8_t pad_0051[0xB]; // 0x0051
    bool tempUsed; // 0x005C

    // Methods
    void OnPrimaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class Tool : public EquippedItem
{
public:

    // Methods
    void OnPrimaryAction(bool _B);
    void OnSecondaryAction(bool _B);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class BowTool : public EquippedWeapon
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Transform* bowHead; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* bowPosition; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ItemDataSO* projectileItemDataSO; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    MonoString* arrowID; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Coroutine* shootingCoroutine; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    float aimingDuration; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float delayBetweenArrows; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float aimingStartTime; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    bool cancelShooting; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    int32_t bowArmBoolHash; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t bowIsArcherHash; // 0x00A4

    // Methods
    void Update();
    void Show();
    void OnPrimaryAction(bool _B);
    void OnSecondaryAction(bool _B);
    void ShootArrow();
    IEnumerator* ShootArrowsSequentially(int32_t _ArrowCount, DamageResult _Damage, float _Force, Vector3 _Position, Vector3 _Direction);
    void StopSounds();
    void CancelShooting();
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class EquippedWeapon : public Tool
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PlayerWeaponDamage* weaponDamage; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    WeaponDataSO* weaponDataSO; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool canAttack; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t defendBoolHash; // 0x0064

    // Methods
    float get_Damage();
    WeaponDataSO* get_WeaponDataSO();
    WeaponType get_WeaponType();
    float get_HitStopDuration();
    float get_ShieldStaminaCost();
    void OnDestroy();
    void SetItemDataSO(ItemDataSO* _ItemDataSO);
    void SetPlayer(FirstPersonController* _Player, int32_t _SlotIndex, bool _IsLocalPlayer);
    void OnSecondaryAction(bool _B);
    void OnStaminaChanged(float currentStamina, float currentMaxStamina, bool _isInstant);
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void Hide();
    void CancelDefend();
    bool GetStatusEffectData(StatusEffectType effectType, StatusEffectData statusEffectData);
    void .ctor();
};

// Namespace: <global>
class SwordTool : public EquippedWeapon
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    int32_t currentAttackID; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t swordAttackCount; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    bool isCharging; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float chargeTimer; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    int32_t attackIndexHash; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    int32_t attackTriggerHash; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    int32_t meleeChargeHash; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    int32_t meleeAttackHash; // 0x0084

    // Methods
    void Update();
    void OnPrimaryAction(bool inputActionStarted);
    void OnSecondaryAction(bool _B);
    void DoNormalAttack();
    void DoChargedAttack();
    void Show();
    void CancelChargeAttack();
    void OnAnimationEvent(MonoString* _ID);
    void StopUsing(bool _OnEquipmentChanged);
    void .ctor();
};

// Namespace: <global>
class MainMenu : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UIDocument* mainMenuDocument; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    UIUnlockUpgradeMenu* upgradeMenu; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GlobalMissionMenu* globalMissionMenu; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SettingsScreen* settingsScreen; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    VisualTreeAsset* missionRecapTemplate; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    MainMenuScreen* mainMenuScreen; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ConnectionRoleScreen* connectionRoleScreen; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    LobbyBrowserScreen* lobbyBrowserScreen; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    BuildVersionDisplay* buildVersionDisplay; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Button* missionButton; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    VisualElement* missionBadge; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Label* missionBadgeLabel; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VisualElement* missionRecapParent; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Button* upgradeButton; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    VisualElement* upgradeBadge; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Label* upgradeBadgeLabel; // 0x0098

    // Methods
    void Awake();
    void Start();
    void OpenRunSetup(NetworkState _state);
    void OpenMultiplayer();
    void OpenUpgrades();
    void OpenMissions();
    void OpenSettings();
    void OpenMainMenu();
    void OpenLobbyBrowser();
    void RefreshAllNotifications();
    void RefreshMissionNotification();
    void RefreshMissionProgressRecap();
    void RefreshUpgradeNotification();
    void HideAllScreens();
    void .ctor();
};

// Namespace: <global>
class AppManager : public MonoBehaviour
{
public:
    // Static fields
    // static AppManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    SettingsControllerDatabaseSO* settingsControllerSO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    UILoadingScreen* loadingScreen; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AchievementData* achievementData; // 0x0030

    // Methods
    AchievementData* get_AchievementData();
    UILoadingScreen* get_UILoadingScreen();
    void ShowLoadingScreen();
    void HideLoadingScreen();
    void Awake();
    void Start();
    void Init();
    void .ctor();
};

// Namespace: <global>
class AudioManager : public MonoBehaviour
{
public:
    // Static fields
    // static AudioManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<UnityEngine.AudioSource> pool; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioMixerGroup* uiMixerGroup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    NetworkedAudioDataSo* uiAudioDataSo; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioMixerGroup* musicMixerGroup; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    AudioMixerGroup* ambienceMixerGroup; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AudioClip[][] musicClips; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    AudioClip[][] ambienceClips; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    AudioSource[][] musicSources; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    AudioSource[][] ambienceSources; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t poolSize; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float musicVolume; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float ambienceVolume; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t activeMusicIndex; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    int32_t activeAmbienceIndex; // 0x0078

    // Methods
    void Awake();
    void Start();
    AudioSource* GetFreeSource();
    void ReturnToPool(AudioSource* _Source);
    void PlayUISound(MonoString* _SoundID);
    void PlayUIButton();
    IEnumerator* PreloadAudioClips();
    void PlayMusic(AudioClip* _NewClip, float _FadeDuration);
    void PlayAmbience(AudioClip* _NewClip, float _FadeDuration);
    void Setup();
    AudioSource* SetupAudioSource(MonoString* _Name, AudioMixerGroup* _Group);
    void Init();
    void InstanceOnOnCyclePhaseChanged(CyclePhase _CyclePhase);
    IEnumerator* CrossfadeTrack(AudioSource* _FadeOutSource, AudioSource* _FadeInSource, AudioClip* _NewClip, float _FadeDuration, float _TargetVolume);
    void CreateAudioSourcePool();
    AudioSource* CreateAudioSource();
    void .ctor();
};

// Namespace: <global>
class BaseSceneManager : public MonoBehaviour
{
public:

    // Methods
    void Init();
    void .ctor();
};

// Namespace: <global>
class DissonancePlaybackManager : public NetworkBehaviour
{
public:
    // Static fields
    // static DissonancePlaybackManager* Instance;

    uint8_t pad_0000[0x68]; // 0x0000
    Mirror.SyncDictionary<System.String,System.UInt32> netIdToDissonanceId; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Mirror.SyncList<System.UInt32> PlayerUsingMegaphone; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    DissonanceComms* dissonanceComms; // 0x0078

    // Methods
    void OnStartClient();
    void CmdRegisterDissonanceId(uint32_t _NetId, MonoString* _DissonanceId);
    void CmdRegisterPlayerUsingMegaphone(uint32_t _PlayerName);
    void CmdUnregisterPlayerUsingMegaphone(uint32_t _PlayerName);
    bool IsPlayerUsingMegaphone(MonoString* _PlayerName);
    void Awake();
    IEnumerator* WaitCommsStartCo();
    void SetMuteAllRemotePlayers(bool _Mute);
    void .ctor();
    bool Weaved();
    void UserCode_CmdRegisterDissonanceId__UInt32__String(uint32_t _NetId, MonoString* _DissonanceId);
    static void InvokeUserCode_CmdRegisterDissonanceId__UInt32__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRegisterPlayerUsingMegaphone__UInt32(uint32_t _PlayerName);
    static void InvokeUserCode_CmdRegisterPlayerUsingMegaphone__UInt32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdUnregisterPlayerUsingMegaphone__UInt32(uint32_t _PlayerName);
    static void InvokeUserCode_CmdUnregisterPlayerUsingMegaphone__UInt32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class GameManager : public MonoBehaviour
{
public:
    // Static fields
    // static GameManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    BaseSceneManager* sceneManager; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    NetworkHelper* networkHelperPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemManager* itemManagerPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DifficultyManager* difficultyManagerPrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DissonancePlaybackManager* dissonancePlaybackManagerPrefab; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ProjectileManager* projectileManagerPrefab; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    DissonanceComms* dissonanceComms; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Action* OnInitialized; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Action* OnCheckInit; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.HashSet<System.Type> registeredManagers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.HashSet<System.Type> requiredManagers; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    FirstPersonController* <LocalPlayer>k__BackingField; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    bool <IsInitialized>k__BackingField; // 0x0080

    // Methods
    FirstPersonController* get_LocalPlayer();
    void set_LocalPlayer(FirstPersonController* value);
    bool get_IsInitialized();
    void set_IsInitialized(bool value);
    DissonanceComms* get_DissonanceComms();
    void SetLocalPlayer(FirstPersonController* _FirstPersonController);
    void RegisterManager(MonoBehaviour* _Manager);
    void Awake();
    void TryInitClient();
    void Init();
    void HideLoadingScreen();
    void .ctor();
};

// Namespace: <global>
class HubManager : public BaseSceneManager
{
public:
    // Static fields
    // static HubManager* Instance;


    // Methods
    void Init();
    void Awake();
    void .ctor();
};

// Namespace: <global>
class LevelManager : public BaseSceneManager
{
public:
    // Static fields
    // static LevelManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Terrain* terrain; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* diggingManagerPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DiggerMaster* diggerMaster; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DiggerMasterRuntime* diggerMasterRuntime; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Transform* playerSpawn; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    EnemyManager* enemyManager; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Wall* wall; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    King* king; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Crafter* crafter; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    CampFire* campFire; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<AutomatedBallista> automatedBallistas; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Coroutine* onPlayerDeathCoroutine; // 0x0078

    // Methods
    Wall* get_Wall();
    King* get_King();
    Crafter* get_Crafter();
    CampFire* get_CampFire();
    System.Collections.Generic.List<AutomatedBallista> get_AutomatedBallistas();
    Terrain* get_Terrain();
    DiggerMaster* get_DiggerMaster();
    DiggerMasterRuntime* get_DiggerMasterRuntime();
    EnemyManager* get_EnemyManager();
    void Init();
    System.Collections.Generic.List<FirstPersonController> GetAllPlayersAlive();
    void KillAllPlayers();
    void Awake();
    void OnDestroy();
    void OnPlayerAdded(FirstPersonController* _Player);
    void OnPlayerDeath();
    IEnumerator* AllPlayerDeadCo();
    void .ctor();
};

// Namespace: <global>
class LightingManagers : public MonoBehaviour
{
public:
    // Static fields
    // static LightingManagers* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Light* mainDirectionalLight; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LightSettingsSO* lightSettingsSo; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<PickableLamp> pickableLamps; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool dynanicLightingEnabled; // 0x0038

    // Methods
    void Awake();
    void Update();
    void .ctor();
};

// Namespace: <global>
class MetaProgressManager : public MonoBehaviour
{
public:
    // Static fields
    // static MetaProgressManager* <Instance>k__BackingField;

    uint8_t pad_0000[0x20]; // 0x0000
    MetaData* <MetaData>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RunStats* <CurrentRun>k__BackingField; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Coroutine* updateRunTimerCo; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayerArchetypeDatabaseSO* archetypeDatabase; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool isRunning; // 0x0040

    // Methods
    static MetaProgressManager* get_Instance();
    static void set_Instance(MetaProgressManager* value);
    MetaData* get_MetaData();
    void set_MetaData(MetaData* value);
    RunStats* get_CurrentRun();
    void set_CurrentRun(RunStats* value);
    void Init(MetaData* _Data);
    void StartRun();
    void TryGetGlobalMissionRewards(GlobalMissionSO* _GlobalMission);
    void EndRun(bool _Obj);
    void UpdateUpgradeMissionCompletion();
    void Awake();
    IEnumerator* UpdateCurrentRunTimerCo();
    void .ctor();
};

// Namespace: <global>
class OnboardingMissionManager : public MonoBehaviour
{
public:
    // Static fields
    // static OnboardingMissionManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    MissionDatabaseSO* missionDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MissionData* currentMission; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<MissionTrackerBase> trackers; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<MissionData> OnMissionStarted; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<System.String> OnMissionCompleted; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Action* OnOnboardingCompleted; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Action<ObjectiveData> OnObjectiveUpdated; // 0x0050

    // Methods
    void StartOnboardingMission(MonoString* _MissionID);
    void CompleteOnboarding();
    void UpdateObjective(MonoString* _ObjectiveID, bool _Completed);
    MissionData* GetCurrentMission();
    System.Collections.Generic.List<ObjectiveData> GetObjectives();
    MissionDataSO* GetMissionDataByID(MonoString* _Id);
    ObjectiveDataSO* GetObjectiveDataByID(MonoString* _Id);
    void Awake();
    void InitTrackers();
    void ClearTrackers();
    void CheckMissionCompletion();
    void CompleteMission();
    void .ctor();
};

// Namespace: <global>
class MissionData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* missionID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<ObjectiveData> objectives; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool automaticCompletion; // 0x0020

    // Methods
    void .ctor();
};

// Namespace: <global>
class ObjectiveData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* id; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* trackedID; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EObjectiveType objectiveType; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float missionTrackedValue; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool objectiveCompleted; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t goalIndex; // 0x002C

    // Methods
    void .ctor();
};

// Namespace: <global>
class ProjectileManager : public NetworkBehaviour
{
public:
    // Static fields
    // static ProjectileManager* Instance;

    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<ProjectileManager.SProjectileInfo> projectiles; // 0x0068

    // Methods
    void CmdInstantiateProjectile(NetworkIdentity* _Spawner, MonoString* _ProjectileID, DamageResult _Damage, Vector3 _Position, Vector3 _Direction, DamageType _Type);
    void CmdInstantiateProjectileAtSpeed(NetworkIdentity* _Spawner, MonoString* _ProjectileID, DamageResult _Damage, Vector3 _Position, Vector3 _Direction, DamageType _Type, float _Speed);
    void Awake();
    Projectile* GetProjectileByID(MonoString* _ID);
    void .ctor();
    bool Weaved();
    void UserCode_CmdInstantiateProjectile__NetworkIdentity__String__DamageResult__Vector3__Vector3__DamageType(NetworkIdentity* _Spawner, MonoString* _ProjectileID, DamageResult _Damage, Vector3 _Position, Vector3 _Direction, DamageType _Type);
    static void InvokeUserCode_CmdInstantiateProjectile__NetworkIdentity__String__DamageResult__Vector3__Vector3__DamageType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdInstantiateProjectileAtSpeed__NetworkIdentity__String__DamageResult__Vector3__Vector3__DamageType__Single(NetworkIdentity* _Spawner, MonoString* _ProjectileID, DamageResult _Damage, Vector3 _Position, Vector3 _Direction, DamageType _Type, float _Speed);
    static void InvokeUserCode_CmdInstantiateProjectileAtSpeed__NetworkIdentity__String__DamageResult__Vector3__Vector3__DamageType__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class ResourceManager : public MonoBehaviour
{
public:
    // Static fields
    // static ResourceManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Sprite* metaCurrencyIcon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MetaCurrencyItem* metaCurrencyItem; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Int32,System.Int32> OnMoneyChange; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float baseChanceOfMetaCurrencySpawn; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float <CurrentChanceOfMetaCurrencySpawn>k__BackingField; // 0x003C

    // Methods
    Sprite* get_MetaCurrencyIcon();
    float get_CurrentChanceOfMetaCurrencySpawn();
    void set_CurrentChanceOfMetaCurrencySpawn(float value);
    void add_OnMoneyChange(System.Action<System.Int32,System.Int32> value);
    void remove_OnMoneyChange(System.Action<System.Int32,System.Int32> value);
    bool CanSpawnMetaCurrency();
    void ResetMetaCurrencyValue(DifficultyLevel _DifficultyLevel);
    void TryInstantiateMetaCurrency(int32_t _Count, Vector3 _Position, FirstPersonController* _Player);
    static bool HasMoney(int32_t _Value);
    int32_t GetCurrentMetaCurrency();
    void AddMetaCurrency(int32_t _ChangeAmount);
    void RemoveMetaCurrency(int32_t _ChangeAmount);
    void AddChanceOfMetaCurrencySpawn(float _AddValue);
    void Awake();
    void .ctor();
};

// Namespace: <global>
class StoneWardsNetworkManager : public NetworkRoomManager
{
public:
    // Static fields
    // static StoneWardsNetworkManager* Instance;

    uint8_t pad_0000[0xE8]; // 0x0000
    FirstPersonController* playerControllerPrefab; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Collections.Generic.Dictionary<System.Int32,FirstPersonController> playerConnected; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.List<UnityEngine.GameObject> managerPrefabs; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    System.Collections.Generic.List<UnityEngine.GameObject> destructiblePrefabs; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    System.Collections.Generic.List<UnityEngine.GameObject> gameObjectPrefabs; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    ItemDatabaseSO* itemDatabase; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    EnemyDatabaseSO* enemyDatabase; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    SpatialHashing3DInterestManagement* spatialHashing3D; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    CameraDebug* cameraDebugPrefab; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    Coroutine* countdownCoroutine; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    Coroutine* loadingCoroutine; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Action<FirstPersonController> OnPlayerAdded; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    Action* OnSceneChanged; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    bool cameraMode; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    float countdownDuration; // 0x0154

    // Methods
    int32_t get_PlayerCount();
    void Awake();
    GameObject* OnRoomServerCreateRoomPlayer(NetworkConnectionToClient* conn);
    GameObject* OnRoomServerCreateGamePlayer(NetworkConnectionToClient* conn, GameObject* roomPlayer);
    void OnRoomServerPlayersReady();
    void OnRoomServerPlayersNotReady();
    IEnumerator* ServerCountdownCoroutine();
    void UpdateClientCountdowns(float timeRemaining, bool isRunning);
    void OnServerDisconnect(NetworkConnectionToClient* _Conn);
    void OnClientDisconnect();
    void LobbyCreationFailed(MonoString* _reason);
    void EnableSpatialHashing(bool _Enable);
    void ChangeScene(MonoString* _SceneName);
    void CleanupLoadingCoroutine();
    void .ctor();
};

// Namespace: <global>
struct LobbyTimerMessage
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float timeRemaining; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    bool isRunning; // 0x0014
};

// Namespace: <global>
class VFXPoolManager : public MonoBehaviour
{
public:
    // Static fields
    // static VFXPoolManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    VFXDatabaseSO* vfxDatabaseSo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,UnityEngine.Pool.ObjectPool<UnityEngine.ParticleSystem>> vfxPools; // 0x0028

    // Methods
    void Awake();
    void Start();
    ParticleSystem* CreateParticle(ParticleSystem* _prefab);
    void OnParticleRelease(ParticleSystem* _particle);
    void OnParticleGet(ParticleSystem* _particle);
    void DestroyParticle(ParticleSystem* _particle);
    ParticleSystem* GetPooledParticle(MonoString* _particleID);
    void ReturnParticleToPool(MonoString* _particleID, ParticleSystem* particle);
    void .ctor();
};

// Namespace: <global>
class VoiceManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DissonanceComms* comms; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* currentRoom; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RoomMembership roomMembership; // 0x0030

    // Methods
    void Awake();
    void OnDestroy();
    void OnSceneLoaded(Scene _Scene, LoadSceneMode _Mode);
    void UpdateRoom(MonoString* _RoomName);
    void .ctor();
};

// Namespace: <global>
class WaypointIndicatorController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* waypointIndicator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* target; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector3 offset; // 0x0030
    uint8_t pad_0031[0xB]; // 0x0031
    bool enabled; // 0x003C

    // Methods
    void Awake();
    void LateUpdate();
    void ShowTarget(Transform* _newTarget, Vector3 _customOffset);
    void HideIndicator();
    void .ctor();
};

// Namespace: <global>
class MapDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MapSO[][] maps; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* teasedMapSprite; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t teasedMapsCount; // 0x0028

    // Methods
    MapSO[][] get_Maps();
    int32_t get_TeasedMapsCount();
    Sprite* get_TeasedMapSprite();
    MapSO* GetMapSo(MonoString* Id);
    void .ctor();
};

// Namespace: <global>
class MapSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* playerSprite; // 0x0020

    // Methods
    MonoString* get_ID();
    Sprite* get_PlayerSprite();
    MonoString* GetLocalizedName();
    MonoString* GetLocalizedDescription();
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    void .ctor();
};

// Namespace: <global>
class MetaData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.Int32> TotalEnemiesKilled; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<PlayerClass,System.Int32> TotalEnemiesKilledWithCharacter; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<WeaponDataSO.WeaponType,System.Int32> TotalEnemiesKilledWithWeapon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,System.Int32> TotalItemsUsed; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.String,System.Int32> TotalItemCrafted; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,System.Int32> TotalItemRecycled; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.String,System.Int32> TotalUpgradesReached; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.Dictionary<System.String,System.Boolean> CompletedMissions; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RunStats* maxRunStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    int32_t chestOpened; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t headshotCount; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t blockDigCount; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t blockAttacks; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t critCount; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t deathCount; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    int32_t maxHp; // 0x0070

    // Methods
    int32_t get_ChestOpened();
    int32_t get_HeadshotCount();
    int32_t get_BlockDigCount();
    int32_t get_BlockAttacks();
    int32_t get_CritCount();
    int32_t get_DeathCount();
    int32_t get_MaxHp();
    RunStats* get_MaxRunStats();
    void MergeRun(RunStats* _Run);
    void AddCompletedMission(MonoString* _MissionName);
    void MergeDictionaryMax(System.Collections.Generic.Dictionary<System.String,System.Int32> _Target, System.Collections.Generic.Dictionary<System.String,System.Int32> _Source);
    void .ctor();
};

// Namespace: <global>
class RunStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.Int32> EnemiesKilled; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<PlayerClass,System.Int32> EnemiesKilledWithCharacter; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<WeaponDataSO.WeaponType,System.Int32> EnemiesKilledWithWeapon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,System.Int32> ItemsUsed; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.String,System.Int32> UpgradesLevelReached; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,System.Int32> ItemCrafted; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.String,System.Int32> ItemRecycled; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t chestOpened; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t blockDigCount; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int32_t blockAttacks; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t critCount; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t headshotCount; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t maxHp; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t deathCount; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t moneyAtStart; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float runTime; // 0x0068

    // Methods
    void StartRun();
    int32_t GetMoneyCollectedDuringRun();
    void UpdateRunTime(float _Value);
    void OnEnemyKilledWithWeapon(WeaponType _Arg1, int32_t _Arg2);
    void OnEnemyKilledWithCharacter(PlayerClass _Arg1, int32_t _Arg2);
    void OnDeath();
    void OnAttackCrit();
    void OnAttackBlocked();
    void OnDigBlock();
    void GameEventsOnOnHeadshot();
    void OnMaxHpReached(int32_t _Obj);
    void OnItemRecycled(MonoString* _Arg1, int32_t _Arg2);
    void OnChestOpened();
    void OnUpgradeAdded(MonoString* _Arg1, int32_t _Arg2);
    void OnItemCrafted(MonoString* _Arg1, int32_t _Arg2);
    void OnItemUsed(MonoString* _Arg1, int32_t _Arg2);
    void OnEnemyKilled(MonoString* _Arg1, int32_t _Arg2);
    void .ctor();
};

// Namespace: <global>
class VisualUtils
{
public:

    // Methods
    static GameObject* DeepCopyMeshes(Transform* _Original, Transform* _NewParent);
};

// Namespace: <global>
class NetworkObjectBase : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Renderer[][] outlinedRenderers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    QuickOutline* QuickOutline; // 0x0070

    // Methods
    void Awake();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionStatInfo();
    MonoString* GetInteractionInput();
    void InitQuickOutline(Mode _outlineMode);
    void SetOutline(bool _b);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class UnderIslandsNetworkAuthenticator : public NetworkAuthenticator
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    System.Collections.Generic.HashSet<Mirror.NetworkConnectionToClient> connectionsPendingDisconnect; // 0x0030

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

// Namespace: <global>
class OnboardingManager : public MonoBehaviour
{
public:
    // Static fields
    // static OnboardingManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    MissionDatabaseSO* missionDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    WaypointIndicatorController* waypointIndicator; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Transform* mineEntry; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Forge* forge; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    King* king; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Wall* wall; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Data* onboardingData; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Coroutine* kingSpeechCoroutine; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Action<OnboardingManager.OnboardingStep> OnOnboardingStepReached; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    OnboardingStep syncCurrentOnboardingStep; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool skipOnboarding; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float kingSpeechDuration; // 0x0070

    // Methods
    void add_OnOnboardingStepReached(System.Action<OnboardingManager.OnboardingStep> value);
    void remove_OnOnboardingStepReached(System.Action<OnboardingManager.OnboardingStep> value);
    void CompleteTask(OnboardingStep _CompletedStep);
    void Init();
    void Awake();
    void OnDestroy();
    void CheckNextStep();
    void SwitchState(OnboardingStep _NewValue);
    IEnumerator* KingSpeedCo();
    void OnWaveCountdownProgress(float _Obj);
    void OnLevelUp(int32_t _Obj);
    void OnEndWave();
    void OnMissionCompleted(MonoString* _MissionID);
    void .ctor();
};

// Namespace: <global>
class MissionDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MissionDataSO[][] onboardingMissionSOs; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MissionDataSO[][] missionSOs; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ObjectiveDataSO[][] objectiveDataSos; // 0x0028

    // Methods
    System.Collections.Generic.List<MissionData> GenerateOnboarding();
    System.Collections.Generic.List<MissionData> GenerateMissions(int32_t _MissionCount);
    MissionDataSO* GetMissionDataByID(MonoString* _ID);
    ObjectiveDataSO* GetObjectiveDataByID(MonoString* _ID);
    void ShuffleList(System.Collections.Generic.List<T> _List);
    void .ctor();
};

// Namespace: <global>
class MissionDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<ObjectiveDataSO> objectives; // 0x0020

    // Methods
    System.Collections.Generic.List<ObjectiveDataSO> get_Objectives();
    MonoString* get_ID();
    MonoString* GetTitle();
    MissionData* GenerateMissionData(bool _AutomaticCompletion);
    MonoString* GetLocalizedString(MonoString* _EntryKey);
    void .ctor();
};

// Namespace: <global>
class ObjectiveDataSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemDataSO* objectiveItem; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Int32> objectiveGoals; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EObjectiveType objectiveType; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool isRandomObjectiveItem; // 0x0034

    // Methods
    MonoString* get_ID();
    EObjectiveType get_ObjectiveType();
    System.Collections.Generic.List<System.Int32> get_ObjectiveGoals();
    bool get_ShowObjectiveItem();
    MonoString* GetLocalizedName(ObjectiveData* _ObjectiveData);
    ObjectiveData* GenerateObjectiveData();
    MonoString* GetObjectiveItemId();
    MonoString* GetLocalizedString(MonoString* entryKey, Object[][] args);
    void .ctor();
};

// Namespace: <global>
struct EObjectiveType
{
public:
    // Static fields
    // static EObjectiveType COLLECT_ITEM;
    // static EObjectiveType REACH_DEPTH;
    // static EObjectiveType DISCOVER_CAVE;
    // static EObjectiveType DUMMY;
    // static EObjectiveType COLLECT_ALL_ITEM;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class MissionTrackerBase
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    OnboardingMissionManager* OnboardingMissionManager; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* MissionID; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ObjectiveDataSO* <ObjectiveDataSO>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ObjectiveData* <ObjectiveData>k__BackingField; // 0x0028

    // Methods
    ObjectiveDataSO* get_ObjectiveDataSO();
    void set_ObjectiveDataSO(ObjectiveDataSO* value);
    ObjectiveData* get_ObjectiveData();
    void set_ObjectiveData(ObjectiveData* value);
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
    MonoString* GetTrackedMissionID();
};

// Namespace: <global>
class MissionTrackerCollectAllItem : public MissionTrackerBase
{
public:

    // Methods
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
    void OnItemCollected(MonoString* _ItemID, int32_t _Count);
};

// Namespace: <global>
class MissionTrackerCollectItem : public MissionTrackerBase
{
public:

    // Methods
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
    bool CheckItemsAtStart();
    void OnPlayerAdded(FirstPersonController* _Player);
    void OnItemCollected(MonoString* _ItemID, int32_t _Count);
    void OnItemRemoved(MonoString* _ItemID, int32_t _Count);
};

// Namespace: <global>
class MissionTrackerDiscoverCave : public MissionTrackerBase
{
public:

    // Methods
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
};

// Namespace: <global>
class MissionTrackerDummy : public MissionTrackerBase
{
public:

    // Methods
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
};

// Namespace: <global>
class MissionTrackerFactory
{
public:

    // Methods
    MissionTrackerBase* GetMissionTracker(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void .ctor();
};

// Namespace: <global>
class MissionTrackerReachDepth : public MissionTrackerBase
{
public:

    // Methods
    void .ctor(OnboardingMissionManager* _OnboardingMissionManager, MonoString* _MissionID, ObjectiveDataSO* _ObjectiveDataSO, ObjectiveData* _ObjectiveData);
    void StartTracking();
    void StopTracking();
    void OnNewDepthReported(float _Obj);
};

// Namespace: <global>
class PlayerClassController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Animator* playerClassAnimator; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* localToHide; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Animator* physicsAnimator; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    HumanPoseHandler* sourceHandler; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    HumanPoseHandler* targetHandler; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    HumanPose currentPose; // 0x0048
    uint8_t pad_0049[0x3F]; // 0x0049
    Transform* sourceLeftEye; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Transform* sourceRightEye; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Transform* targetLeftEye; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* targetRightEye; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    bool isInitialized; // 0x00A8

    // Methods
    Transform* get_LocalToHide();
    void Init(Animator* physicsAnimator);
    void LateUpdate();
    void .ctor();
};

// Namespace: <global>
class PlayerEquippedItemNetworkAnimator : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    PlayerEquipment* playerEquipment; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Coroutine* hitStopAnimationCoroutine; // 0x0070

    // Methods
    void CmdSetBool(int32_t _hash, bool _value);
    void RpcSetBool(int32_t _hash, bool _value);
    void HitStopAnimation(float _Duration);
    void CmdSetTrigger(int32_t _hash);
    void RpcSetTrigger(int32_t _hash);
    void CmdSetInt(int32_t _hash, int32_t _value);
    void RpcSetInt(int32_t _hash, int32_t _value);
    Animator* GetCurrentItemAnimator();
    IEnumerator* HitStopAnimationCo(float _Duration);
    void .ctor();
    bool Weaved();
    void UserCode_CmdSetBool__Int32__Boolean(int32_t _hash, bool _value);
    static void InvokeUserCode_CmdSetBool__Int32__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetBool__Int32__Boolean(int32_t _hash, bool _value);
    static void InvokeUserCode_RpcSetBool__Int32__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetTrigger__Int32(int32_t _hash);
    static void InvokeUserCode_CmdSetTrigger__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetTrigger__Int32(int32_t _hash);
    static void InvokeUserCode_RpcSetTrigger__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetInt__Int32__Int32(int32_t _hash, int32_t _value);
    static void InvokeUserCode_CmdSetInt__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetInt__Int32__Int32(int32_t _hash, int32_t _value);
    static void InvokeUserCode_RpcSetInt__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class PlayerArchetypeDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    PlayerArchetypeSO[][] playerArchetypes; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* teasedCharacterSprite; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t teasedCharacterCount; // 0x0028

    // Methods
    PlayerArchetypeSO[][] get_PlayerArchetypes();
    int32_t get_TeasedCharacterCount();
    Sprite* get_TeasedCharacterSprite();
    PlayerArchetypeSO* GetPlayerArchetype(PlayerClass playerClass);
    void .ctor();
};

// Namespace: <global>
class PlayerArchetypeManager : public MonoBehaviour
{
public:
    // Static fields
    // static PlayerArchetypeManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    PlayerArchetypeDatabaseSO* archetypeDatabase; // 0x0020

    // Methods
    void Awake();
    PlayerArchetypeSO* GetPlayerArchetype(PlayerClass playerClass);
    void .ctor();
};

// Namespace: <global>
class PlayerArchetypeSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Sprite* playerSprite; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<BaseInventory> baseInventory; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ChargeAttackStats* chargeAttackStats; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ArcherStats* archerStats; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<StatusEffectData> statusEffects; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DashStats* dashStats; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    MinerStats* minerStats; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* lobbyPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerClassController* playerClassController; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GlobalMissionSO* globalMission; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    PlayerClass playerClass; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t inventorySlotBonus; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float itemMaxStackMultiplier; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float baseMaxHealth; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float baseHealthRegen; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float baseHealthOnRevive; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float baseDefense; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float baseMinHeightFallDamage; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float baseFallDamage; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float baseMaxStamina; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float baseAttackPower; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float baseCritChance; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float baseCritDamage; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float baseChanceOfKnockback; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float baseLifeStealPercentage; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float baseBowDamageMultiplier; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float baseSwordDamageMultiplier; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float baseCritChanceToHeal; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float healValueOnCrit; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float percentageHealthForBerserk; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float baseBerserkDamageMultiplier; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float maxDistanceToGetDamageBonus; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float baseDamageBonusToNearbyEnemies; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float enemyHealthPercentageToGetBonus; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float baseDamageBonusToEnemiesAboveHp; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float baseSpeedMultiplier; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float baseSprintSpeedMultiplier; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float baseJumpHeightMultiplier; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float baseDigStrength; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t baseBonusResourceOnDig; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float baseBreakBonusBlock; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float baseProjectileSpeed; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float baseBonusDamageOnEliteBoss; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float baseDropItemChance; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    int32_t baseProjectileBonus; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    int32_t metaCurrencyCost; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    bool unlockable; // 0x00F8

    // Methods
    GlobalMissionSO* get_GlobalMission();
    MonoString* get_ID();
    MissionCategory get_Category();
    int32_t get_MetaCurrencyCost();
    bool get_Unlockable();
    PlayerClass get_PlayerClass();
    Sprite* get_PlayerSprite();
    int32_t get_InventorySlotBonus();
    float get_ItemMaxStackMultiplier();
    System.Collections.Generic.List<BaseInventory> get_BaseInventory();
    float get_BaseMaxHealth();
    float get_BaseHealthRegen();
    float get_BaseHealthOnRevive();
    float get_BaseDefense();
    float get_BaseMinHeightFallDamage();
    float get_BaseFallDamage();
    float get_BaseMaxStamina();
    float get_BaseAttackPower();
    float get_BaseCritChance();
    float get_BaseCritDamage();
    float get_BaseChanceOfKnockback();
    float get_BaseLifeStealPercentage();
    ChargeAttackStats* get_ChargeAttackStats();
    ArcherStats* get_ArcherStats();
    float get_BaseSpeedMultiplier();
    float get_BaseSprintSpeedMultiplier();
    float get_BaseJumpHeightMultiplier();
    float get_DashStaminaConsumption();
    float get_DashCooldown();
    float get_BaseDashSpeed();
    float get_BaseDashDuration();
    float get_BaseBowDamageMultiplier();
    float get_BaseSwordDamageMultiplier();
    float get_BaseDigStrength();
    int32_t get_BaseBonusResourceOnDig();
    float get_BaseBreakBonusBlock();
    float get_BaseProjectileSpeed();
    float get_BaseBonusDamageOnEliteBoss();
    MinerStats* get_MinerStats();
    float get_MaxDistanceToGetDamageBonus();
    float get_BaseDamageBonusToNearbyEnemies();
    float get_BaseCritChanceToHeal();
    int32_t get_ProjectileBonus();
    float get_HealValueOnCrit();
    float get_PercentageHealthForBerserk();
    float get_BaseBerserkDamageMultiplier();
    float get_EnemyHealthPercentageToGetBonus();
    float get_BaseDamageBonusToEnemiesAboveHp();
    float get_BaseDropItemChance();
    System.Collections.Generic.List<StatusEffectData> get_StatusEffects();
    GameObject* get_LobbyPrefab();
    PlayerClassController* get_PlayerClassController();
    MonoString* GetLocalizedTitle();
    MonoString* GetLocalizedName();
    MonoString* GetLocalizedDescription();
    bool CanUnlock(MetaData* _Data);
    Sprite* IGlobalUnlockable.get_Icon();
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    bool IsUnlocked();
    void .ctor();
};

// Namespace: <global>
struct PlayerClass
{
public:
    // Static fields
    // static PlayerClass WARRIOR;
    // static PlayerClass ARCHER;
    // static PlayerClass MINER;
    // static PlayerClass ROGUE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class DashStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float baseDashForce; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float baseDashDuration; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float dashStaminaConsumption; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float dashCooldown; // 0x001C

    // Methods
    float get_BaseDashForce();
    float get_BaseDashDuration();
    float get_DashStaminaConsumption();
    float get_DashCooldown();
    void .ctor();
};

// Namespace: <global>
class ChargeAttackStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float chargeAttackStaminaConsumption; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float attackMultiplayer; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float knockbackChanceMultiplayer; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float knockbackForceMultiplayer; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float chargeAttackRequiredTime; // 0x0020

    // Methods
    float get_ChargeAttackStaminaConsumption();
    float get_ChargeAttackMultiplayer();
    float get_ChargeAttackKnockbackChanceMultiplayer();
    float get_ChargeAttackForceMultiplayer();
    float get_ChargeAttackRequiredTime();
    void .ctor();
};

// Namespace: <global>
class ArcherStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float arrowDamageMultiplayer; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float arrowForceMultiplayer; // 0x0014

    // Methods
    float get_ArrowDamageMultiplayer();
    float get_ArrowForceMultiplayer();
    void .ctor();
};

// Namespace: <global>
class MinerStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float specialMiningStaminaConsumption; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float specialMiningMultiplier; // 0x0014

    // Methods
    float get_SpecialMiningStaminaConsumption();
    float get_SpecialMiningMultiplier();
    void .ctor();
};

// Namespace: <global>
struct BaseInventory
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemDataSO* item; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t count; // 0x0018
};

// Namespace: <global>
class CameraDebug : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FPSSettingsSO* fpsSettingsSo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Single> recordedMouseXList; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<System.Single> recordedMouseYList; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float speed; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float xRotation; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float yRotation; // 0x0040

    // Methods
    IEnumerator* Start();
    void Init();
    void Update();
    void HandleMovement();
    void HandleMouseLook();
    void .ctor();
};

// Namespace: <global>
class CameraManager : public MonoBehaviour
{
public:
    // Static fields
    // static CameraManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Camera* currentCamera; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Camera* equipmentCamera; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CinemachineCamera* vCamFPS; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    CinemachineCamera* vCamTPS; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Transform* cameraTarget; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Volume* cameraEffectVolume; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    FirstPersonController* player; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    FPSCameraController* <FpsCameraController>k__BackingField; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TPSCameraController* <TpsCameraController>k__BackingField; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    CinemachineBasicMultiChannelPerlin* cinemachinePerlin; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Tween* shakeTween; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VolumeProfile* runtimeProfile; // 0x0078

    // Methods
    FPSCameraController* get_FpsCameraController();
    void set_FpsCameraController(FPSCameraController* value);
    TPSCameraController* get_TpsCameraController();
    void set_TpsCameraController(TPSCameraController* value);
    Camera* get_MainCamera();
    Camera* get_EquipmentCamera();
    Transform* get_RaycastSource();
    void Init(FirstPersonController* _Player);
    void OnEndGame(bool _);
    void Awake();
    void OnDestroy();
    void SwitchToFPS();
    void SwitchToSpectate();
    void OnPlayerDeath();
    void OnPlayerRevive();
    void OnHealthChanged(float currentHealth, float currentMaxHealth, float healthChange);
    void ShakeCamera(float _intensity, float _time);
    void .ctor();
};

// Namespace: <global>
class CarriedDeadPlayer : public CarriedObject
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class FakePlayerSaveSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<FakePlayerSaveSO.FakeUpgrade> upgrades; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<FakePlayerSaveSO.FakeInventory> inventory; // 0x0020

    // Methods
    void ApplyFakeSave();
    void ApplyUpgrade();
    void ApplyInventory();
    void .ctor();
};

// Namespace: <global>
class FirstPersonController : public NetworkBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.List<FirstPersonController> LocalPlayers;
    // static System.Action<FirstPersonController> OnPlayerSpawned;
    // static System.Action<FirstPersonController> OnPlayerDespawned;

    uint8_t pad_0000[0x68]; // 0x0000
    Transform* fpsCameraTarget; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* tpsCameraTarget; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Transform* groundCheck; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    CharacterController* controller; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    FPSSettingsSO* fpsSettingsSo; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    PlayerArchetypeSO* playerArchetypeSO; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    PlayerStats* playerStats; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayerBuffHandler* playerBuffHandler; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerAnimator* playerAnimator; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    PlayerInteraction* playerInteraction; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    PlayerEquipment* playerEquipment; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    PlayerFX* playerFX; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    PlayerCarryHandler* playerCarryHandler; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    InventorySystem* inventorySystem; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    HeldItemRigController* heldItemRigController; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    PlayerEquippedItemNetworkAnimator* playerEquippedItemNetworkAnimator; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    FPSAudioPlayer* fpsAudioPlayer; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Transform* characterVisualsParent; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Ladder* currentLadder; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    System.Collections.Generic.List<System.Single> recordedMouseXList; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    System.Collections.Generic.List<System.Single> recordedMouseYList; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    System.Action<FirstPersonController.MovementState,FirstPersonController.MovementState> OnMovementStateChanged; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    Coroutine* mantleRoutine; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    PlayerData* playerData; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    PlayerClassController* playerClassController; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    MirrorIgnorancePlayer* dissonancePlayer; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    System.Action<DamageResult,UnityEngine.Vector3> OnShowEnemyDamage; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Action<SiegeWeapon> OnSiegeWeaponChanged; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    Action* OnPlayerDeath; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    Action* OnPlayerRevive; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    Action* OnInventoryFull; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    System.Action<ItemDataSO,System.Int32> OnAutoPickUpItem; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    MonoString* playerName; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    SmoothSyncMirror* <SmoothSyncMirror>k__BackingField; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    SiegeWeapon* <CurrentSiegeWeapon>k__BackingField; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    float wallCheckDistance; // 0x0180
    uint8_t pad_0181[0x3]; // 0x0181
    float climbStartDelay; // 0x0184
    uint8_t pad_0185[0x3]; // 0x0185
    bool jumpPressed; // 0x0188
    bool isFlying; // 0x0189
    uint8_t pad_018A[0x2]; // 0x018A
    Vector3 velocity; // 0x018C
    uint8_t pad_018D[0xB]; // 0x018D
    bool isInitialized; // 0x0198
    uint8_t pad_0199[0x3]; // 0x0199
    float lastHeight; // 0x019C
    uint8_t pad_019D[0x3]; // 0x019D
    float maxDepth; // 0x01A0
    uint8_t pad_01A1[0x3]; // 0x01A1
    float ladderProgress; // 0x01A4
    uint8_t pad_01A5[0x3]; // 0x01A5
    bool isGoingOnLadder; // 0x01A8
    uint8_t pad_01A9[0x3]; // 0x01A9
    float ladderAttachTimer; // 0x01AC
    uint8_t pad_01AD[0x3]; // 0x01AD
    Vector3 ladderAttachStartPos; // 0x01B0
    uint8_t pad_01B1[0xB]; // 0x01B1
    Vector3 ladderOffset; // 0x01BC
    uint8_t pad_01BD[0xB]; // 0x01BD
    float xRotation; // 0x01C8
    uint8_t pad_01C9[0x3]; // 0x01C9
    MovementState currentMovementState; // 0x01CC
    uint8_t pad_01CD[0x3]; // 0x01CD
    int32_t diggableTerrainLayer; // 0x01D0
    uint8_t pad_01D1[0x3]; // 0x01D1
    SurfaceFootStepType currentSurface; // 0x01D4
    uint8_t pad_01D5[0x3]; // 0x01D5
    uint64_t playerID; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    PlayerClass playerClass; // 0x01E0
    uint8_t pad_01E1[0x3]; // 0x01E1
    bool isReviving; // 0x01E4
    bool <IsClimbing>k__BackingField; // 0x01E5
    bool <IsGrounded>k__BackingField; // 0x01E6
    uint8_t pad_01E7[0x1]; // 0x01E7
    Vector3 dashDirection; // 0x01E8
    uint8_t pad_01E9[0xB]; // 0x01E9
    float dashTimer; // 0x01F4
    uint8_t pad_01F5[0x3]; // 0x01F5
    float dashDuration; // 0x01F8
    uint8_t pad_01F9[0x3]; // 0x01F9
    float lastDashTime; // 0x01FC
    uint8_t pad_01FD[0x3]; // 0x01FD
    float dashUpForce; // 0x0200
    uint8_t pad_0201[0x3]; // 0x0201
    float stepCooldown; // 0x0204

    // Methods
    bool get_IsClimbing();
    void set_IsClimbing(bool value);
    bool get_IsGrounded();
    void set_IsGrounded(bool value);
    bool get_IsSprinting();
    Vector3 get_Velocity();
    CharacterController* get_Controller();
    PlayerStats* get_PlayerStats();
    PlayerBuffHandler* get_PlayerBuffHandler();
    PlayerEquipment* get_PlayerEquipment();
    PlayerInteraction* get_PlayerInteraction();
    PlayerFX* get_PlayerFX();
    PlayerCarryHandler* get_PlayerCarryHandler();
    InventorySystem* get_InventorySystem();
    FPSSettingsSO* get_FPSSettingsSO();
    PlayerArchetypeSO* get_PlayerArchetypeSO();
    SmoothSyncMirror* get_SmoothSyncMirror();
    void set_SmoothSyncMirror(SmoothSyncMirror* value);
    SiegeWeapon* get_CurrentSiegeWeapon();
    void set_CurrentSiegeWeapon(SiegeWeapon* value);
    PlayerAnimator* get_PlayerAnimator();
    HeldItemRigController* get_HeldItemRigController();
    PlayerEquippedItemNetworkAnimator* get_PlayerEquippedItemNetworkAnimator();
    FPSAudioPlayer* get_FPSAudioPlayer();
    void LocalInit();
    void ServerInit();
    void SetLadder(Ladder* _Ladder);
    DamageResult CalculateDamage(float _baseWeaponDamage, WeaponType _weaponType, IDamageable* _damageable);
    bool CanKnockback(float chanceMultiplier);
    void SetPlayerClass(PlayerClass _PlayerClass);
    bool IsPlayerSpeaking();
    void Awake();
    void Update();
    void ControllerUpdate();
    void OnDestroy();
    bool CanTransitionToSprinting();
    bool CanTransitionToWalking();
    void CheckGroundStatus();
    void HandleMovement(bool _IsSprinting);
    void HandleLadderAttach();
    void HandleLadderClimbingMovement();
    void Jump();
    void ExitRope();
    void HandleStateTransitions();
    void LimitVelocity(float _MovementSpeed);
    void HandleCharacterHeight();
    void ApplyGravity();
    void OnJumping(bool _B);
    void OnSprintButtonPressed();
    void TryDash();
    void StartDash();
    void ApplyDrag();
    void UpdateMovementState(MovementState _NewMovementState);
    void OnDeathChanged(bool _IsDead);
    static void ClearLocalPlayers();
    void HandleDepthReached();
    void ApplyKnockback(Vector3 _Direction, float _Force, float _UpwardForce);
    void HandleMouseLook();
    Quaternion GetTargetLocalRotation();
    void UpdateFootSteps(Vector3 _velocity, bool _isRunning);
    void RecoverFallingPlayer();
    void OnStartClient();
    void OnStopClient();
    void OnStopServer();
    void OnStartLocalPlayer();
    void CmdUseReviveTool(FirstPersonController* _Player, Vector3 _Position, float _HealthPercentage);
    void TargetRevivePlayer();
    void ServerPickUpCarriableObject(CarriableObject* _CarriableObject);
    void CmdCarryCarriable(FirstPersonController* _Owner, CarriableObject* _CarriableObject);
    void CmdReleaseCarriable(FirstPersonController* _Owner, MonoString* _CarriableID, Vector3 _Origin);
    void CmdTryPlaceCarriableInInteractable(FirstPersonController* _Owner, MonoString* _ItemID, NetworkIdentity* _NetID, Vector3 _Origin);
    void CmdCarryDeadPlayer(FirstPersonController* _Owner, PlayerCarryHandler* _Target);
    void CmdReleaseDeadPlayer(FirstPersonController* _Owner, FirstPersonController* _DeadPlayer, Vector3 _Origin);
    void CmdTryPlaceDeadPlayer(FirstPersonController* _Owner, FirstPersonController* _DeadPlayer, NetworkIdentity* _NetID);
    void CmdPickupItem(FirstPersonController* _Owner, PickableItem* _PickableItem);
    void CmdPickupUpgrade(FirstPersonController* _Owner, PickableItem* _PickableItem);
    void CmdAutoPickupItem(FirstPersonController* _Owner, PickableItem* _PickableItem);
    void TargetRPCOnAutoPickupItem(MonoString* _PickableItemID, int32_t _PickableItemCount);
    void CmdTakeItemFromStack(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _Count, NetworkIdentity* _StackNetID);
    void CmdTakeItemFromCrafterSlot(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _Count, NetworkIdentity* _SlotNetID);
    void CmdTryPlaceItemInItemInteractable(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, NetworkIdentity* _NetID, Vector3 _Origin, Quaternion _Rotation);
    void CmdReleaseItem(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, Vector3 _Origin);
    void CmdRemoveEquippedItem(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count);
    void CmdThrowEquipment(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, Vector3 _Origin, Vector3 _Direction);
    void CmdNewDepthReached(float _NewDepth);
    void CmdSetSiegeWeapon(FirstPersonController* _Owner, SiegeWeapon* _SiegeWeapon);
    void TargetSetSiegeWeapon(SiegeWeapon* _SiegeWeapon);
    void CmdApplyKnockback(FirstPersonController* _Target, Vector3 _Direction, float _Force, float _UpwardForce);
    void TargetApplyKnockback(Vector3 _Direction, float _Force, float _UpwardForce);
    void ServerOnPlayerDamageEnemy(FirstPersonController* _Owner, DamageResult _DamageValue, float enemyHealth, Vector3 _Position);
    void ClientRPCShowEnemyDamage(DamageResult _Damage, Vector3 _Position);
    void TargetRPCShowEnemyDamage(DamageResult _Damage, Vector3 _Position);
    void ShowEnemyDamage(DamageResult _Damage, Vector3 _Position);
    void CmdSetPlayerName(MonoString* _playerName);
    void ServerPlaceOnReviveSpot(Vector3 _Origin);
    void RPCReviveSpot();
    void .ctor();
    static void .cctor();
    bool Weaved();
    uint64_t get_NetworkplayerID();
    void set_NetworkplayerID(uint64_t value);
    MonoString* get_NetworkplayerName();
    void set_NetworkplayerName(MonoString* value);
    PlayerClass get_NetworkplayerClass();
    void set_NetworkplayerClass(PlayerClass value);
    bool get_NetworkisReviving();
    void set_NetworkisReviving(bool value);
    void UserCode_CmdUseReviveTool__FirstPersonController__Vector3__Single(FirstPersonController* _Player, Vector3 _Position, float _HealthPercentage);
    static void InvokeUserCode_CmdUseReviveTool__FirstPersonController__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetRevivePlayer();
    static void InvokeUserCode_TargetRevivePlayer(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCarryCarriable__FirstPersonController__CarriableObject(FirstPersonController* _Owner, CarriableObject* _CarriableObject);
    static void InvokeUserCode_CmdCarryCarriable__FirstPersonController__CarriableObject(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseCarriable__FirstPersonController__String__Vector3(FirstPersonController* _Owner, MonoString* _CarriableID, Vector3 _Origin);
    static void InvokeUserCode_CmdReleaseCarriable__FirstPersonController__String__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTryPlaceCarriableInInteractable__FirstPersonController__String__NetworkIdentity__Vector3(FirstPersonController* _Owner, MonoString* _ItemID, NetworkIdentity* _NetID, Vector3 _Origin);
    static void InvokeUserCode_CmdTryPlaceCarriableInInteractable__FirstPersonController__String__NetworkIdentity__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCarryDeadPlayer__FirstPersonController__PlayerCarryHandler(FirstPersonController* _Owner, PlayerCarryHandler* _Target);
    static void InvokeUserCode_CmdCarryDeadPlayer__FirstPersonController__PlayerCarryHandler(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseDeadPlayer__FirstPersonController__FirstPersonController__Vector3(FirstPersonController* _Owner, FirstPersonController* _DeadPlayer, Vector3 _Origin);
    static void InvokeUserCode_CmdReleaseDeadPlayer__FirstPersonController__FirstPersonController__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTryPlaceDeadPlayer__FirstPersonController__FirstPersonController__NetworkIdentity(FirstPersonController* _Owner, FirstPersonController* _DeadPlayer, NetworkIdentity* _NetID);
    static void InvokeUserCode_CmdTryPlaceDeadPlayer__FirstPersonController__FirstPersonController__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPickupItem__FirstPersonController__PickableItem(FirstPersonController* _Owner, PickableItem* _PickableItem);
    static void InvokeUserCode_CmdPickupItem__FirstPersonController__PickableItem(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPickupUpgrade__FirstPersonController__PickableItem(FirstPersonController* _Owner, PickableItem* _PickableItem);
    static void InvokeUserCode_CmdPickupUpgrade__FirstPersonController__PickableItem(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAutoPickupItem__FirstPersonController__PickableItem(FirstPersonController* _Owner, PickableItem* _PickableItem);
    static void InvokeUserCode_CmdAutoPickupItem__FirstPersonController__PickableItem(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetRPCOnAutoPickupItem__String__Int32(MonoString* _PickableItemID, int32_t _PickableItemCount);
    static void InvokeUserCode_TargetRPCOnAutoPickupItem__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTakeItemFromStack__FirstPersonController__String__Int32__NetworkIdentity(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _Count, NetworkIdentity* _StackNetID);
    static void InvokeUserCode_CmdTakeItemFromStack__FirstPersonController__String__Int32__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTakeItemFromCrafterSlot__FirstPersonController__String__Int32__NetworkIdentity(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _Count, NetworkIdentity* _SlotNetID);
    static void InvokeUserCode_CmdTakeItemFromCrafterSlot__FirstPersonController__String__Int32__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdTryPlaceItemInItemInteractable__FirstPersonController__String__Int32__Int32__NetworkIdentity__Vector3__Quaternion(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, NetworkIdentity* _NetID, Vector3 _Origin, Quaternion _Rotation);
    static void InvokeUserCode_CmdTryPlaceItemInItemInteractable__FirstPersonController__String__Int32__Int32__NetworkIdentity__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseItem__FirstPersonController__String__Int32__Int32__Vector3(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, Vector3 _Origin);
    static void InvokeUserCode_CmdReleaseItem__FirstPersonController__String__Int32__Int32__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRemoveEquippedItem__FirstPersonController__String__Int32__Int32(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count);
    static void InvokeUserCode_CmdRemoveEquippedItem__FirstPersonController__String__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdThrowEquipment__FirstPersonController__String__Int32__Int32__Vector3__Vector3(FirstPersonController* _Owner, MonoString* _ItemID, int32_t _SlotSelected, int32_t _Count, Vector3 _Origin, Vector3 _Direction);
    static void InvokeUserCode_CmdThrowEquipment__FirstPersonController__String__Int32__Int32__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdNewDepthReached__Single(float _NewDepth);
    static void InvokeUserCode_CmdNewDepthReached__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetSiegeWeapon__FirstPersonController__SiegeWeapon(FirstPersonController* _Owner, SiegeWeapon* _SiegeWeapon);
    static void InvokeUserCode_CmdSetSiegeWeapon__FirstPersonController__SiegeWeapon(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetSetSiegeWeapon__SiegeWeapon(SiegeWeapon* _SiegeWeapon);
    static void InvokeUserCode_TargetSetSiegeWeapon__SiegeWeapon(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdApplyKnockback__FirstPersonController__Vector3__Single__Single(FirstPersonController* _Target, Vector3 _Direction, float _Force, float _UpwardForce);
    static void InvokeUserCode_CmdApplyKnockback__FirstPersonController__Vector3__Single__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetApplyKnockback__Vector3__Single__Single(Vector3 _Direction, float _Force, float _UpwardForce);
    static void InvokeUserCode_TargetApplyKnockback__Vector3__Single__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_ClientRPCShowEnemyDamage__DamageResult__Vector3(DamageResult _Damage, Vector3 _Position);
    static void InvokeUserCode_ClientRPCShowEnemyDamage__DamageResult__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetRPCShowEnemyDamage__DamageResult__Vector3(DamageResult _Damage, Vector3 _Position);
    static void InvokeUserCode_TargetRPCShowEnemyDamage__DamageResult__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetPlayerName__String(MonoString* _playerName);
    static void InvokeUserCode_CmdSetPlayerName__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCReviveSpot();
    static void InvokeUserCode_RPCReviveSpot(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<InventorySystem.InventoryEntry> playersInventoryData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<System.String,System.Int32> upgradesData; // 0x0018

    // Methods
    void .ctor();
};

// Namespace: <global>
class FPSCameraController : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t CurrentFOV;
    // static System.Action<System.Int32> OnFovUpdate;

    uint8_t pad_0000[0x20]; // 0x0000
    FPSSettingsSO* fpsSettingsSO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameSettingsControllerSO* gameSettingsControllerSo; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CinemachineCamera* fpsVCam; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* cameraTarget; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FirstPersonController* player; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameSettingsData* gameSettingsData; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float targetFOV; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    bool isInitialized; // 0x0054

    // Methods
    void SetCameraTarget(Transform* _Target);
    void Init(FirstPersonController* _Player, CinemachineCamera* _Camera);
    void OnMovementStateChanged(MovementState oldState, MovementState newState);
    void SpectatePlayer(FirstPersonController* _Player);
    void SpectateOther(Transform* _Target);
    void OnEnable();
    void OnDisable();
    void Update();
    void OnFpsFovChanged(int32_t fov);
    void SmoothFOV();
    void .ctor();
};

// Namespace: <global>
class ItemAnimationReceiver : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Tool* equippedTool; // 0x0020

    // Methods
    void OnAnimationEvent(MonoString* _ID);
    void .ctor();
};

// Namespace: <global>
class KingAttackHitbox : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Collider* hitbox; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Coroutine* releaseCo; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    NetworkIdentity* SpawnerIdentity; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    bool knockbackEnemy; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float knockbackForce; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float knockbackUpwardForce; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    DamageResult Damage; // 0x008C

    // Methods
    void Awake();
    void OnDestroy();
    void ServerInit(DamageResult _Damage, Vector3 _Position, Vector3 _Direction, NetworkIdentity* _SpawnerIdentity);
    void EnableHitbox();
    void DisableHitbox();
    void OnTriggerEnter(Collider* _Other);
    IEnumerator* ReleaseCo(float _Delay);
    void Release();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class LobbyPlayer : public NetworkRoomPlayer
{
public:
    // Static fields
    // static LobbyPlayer* <LocalInstance>k__BackingField;
    // static System.Action<LobbyPlayer> OnPlayerSpawned;
    // static System.Action<LobbyPlayer> OnPlayerDespawned;

    uint8_t pad_0000[0x80]; // 0x0000
    MonoString* playerName; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    MonoString* dissonancePlayerId; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Transform* visualParent; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<PlayerClass,PlayerClass> _Mirror_SyncVarHookDelegate_playerClass; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    uint64_t steamID; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerClass playerClass; // 0x00A8

    // Methods
    static LobbyPlayer* get_LocalInstance();
    static void set_LocalInstance(LobbyPlayer* value);
    static void add_OnPlayerSpawned(System.Action<LobbyPlayer> value);
    static void remove_OnPlayerSpawned(System.Action<LobbyPlayer> value);
    static void add_OnPlayerDespawned(System.Action<LobbyPlayer> value);
    static void remove_OnPlayerDespawned(System.Action<LobbyPlayer> value);
    void OnStartLocalPlayer();
    void OnStartClient();
    void OnStopClient();
    bool IsPlayerSpeaking();
    void CmdChangePlayerClass(PlayerClass newPlayerClass);
    void CmdSetPlayerName(MonoString* _playerName);
    void CmdSetDissonanceId(MonoString* _dissonanceId);
    void OnPlayerClassChanged(PlayerClass oldPlayerClass, PlayerClass newPlayerClass);
    void .ctor();
    bool Weaved();
    uint64_t get_NetworksteamID();
    void set_NetworksteamID(uint64_t value);
    MonoString* get_NetworkplayerName();
    void set_NetworkplayerName(MonoString* value);
    PlayerClass get_NetworkplayerClass();
    void set_NetworkplayerClass(PlayerClass value);
    MonoString* get_NetworkdissonancePlayerId();
    void set_NetworkdissonancePlayerId(MonoString* value);
    void UserCode_CmdChangePlayerClass__PlayerClass(PlayerClass newPlayerClass);
    static void InvokeUserCode_CmdChangePlayerClass__PlayerClass(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetPlayerName__String(MonoString* _playerName);
    static void InvokeUserCode_CmdSetPlayerName__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetDissonanceId__String(MonoString* _dissonanceId);
    static void InvokeUserCode_CmdSetDissonanceId__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerAnimator : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t IsClimbing;
    // static int32_t StrafeDirectionX;
    // static int32_t StrafeDirectionY;
    // static int32_t IsJumping;
    // static int32_t IsGrounded;
    // static int32_t IsReviving;
    // static int32_t AnimationSpeed;
    // static int32_t EmoteID;
    // static int32_t DoEmote;

    uint8_t pad_0000[0x20]; // 0x0000
    Transform* localToHide; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Animator* animator; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    NetworkAnimator* networkAnimator; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RagdollEnabler* ragdoll; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FirstPersonController* firstPersonController; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    PlayerClassController* playerClassController; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool isInitialized; // 0x0050
    bool isLocalPlayer; // 0x0051

    // Methods
    Animator* get_Animator();
    void Init(FirstPersonController* _FirstPersonController, PlayerClassController* playerClassController, bool _IsLocalPlayer);
    void ShowPlayerMesh(bool _Show);
    void UpdateReviveSpotAnimation(bool _BeginRevive);
    void Update();
    void OnMovementStateChanged(MovementState oldState, MovementState newState);
    IEnumerator* HitStopAnimationCo(float _Duration);
    void OnPlayerDeath();
    void OnPlayerRevive();
    void HandleEmoteInput();
    void PlayEmote(int32_t id);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class PlayerBuff
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CharacterStat* CharacterStat; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    PlayerBuffData buffData; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    float Elapsed; // 0x0028

    // Methods
    bool get_IsDone();
    void .ctor(CharacterStat* _characterStat, PlayerBuffData _buffData);
    void Tick(float _DeltaTime);
    void ApplyBuff();
    void RemoveBuff();
};

// Namespace: <global>
struct PlayerBuffData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    StatModifier* Modifier; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float Duration; // 0x0018
};

// Namespace: <global>
class PlayerBuffHandler : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<PlayerBuff> activeBuffs; // 0x0068

    // Methods
    void Update();
    void AddBuff(CharacterStat* characterStat, PlayerBuffData buffData);
    void RemoveBuff(PlayerBuff* playerBuff);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PlayerCarryHandler : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    GameObject* physicalCharacter; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    PlayerClassController* visualCharacter; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    CharacterController* characterController; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    QuickOutline* quickOutline; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    FirstPersonController* <Player>k__BackingField; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    uint64_t syncPlayerID; // 0x0090

    // Methods
    FirstPersonController* get_Player();
    void set_Player(FirstPersonController* value);
    void Init(FirstPersonController* _Player, PlayerClassController* _PlayerClassController);
    void Interact(FirstPersonController* _Owner);
    bool ServerTryPickup(FirstPersonController* _Owner);
    void ServerRelease(Vector3 _Origin);
    bool CanCarry();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void OnPlayerRevive();
    void OnPlayerDeath();
    void SetOutline(bool _B);
    void InitQuickOutline(GameObject* _Parent, Mode _outlineMode);
    MonoString* GetCarriableID();
    void RpcCarry();
    void RpcRelease(Vector3 _Origin);
    void .ctor();
    bool Weaved();
    uint64_t get_NetworksyncPlayerID();
    void set_NetworksyncPlayerID(uint64_t value);
    void UserCode_RpcCarry();
    static void InvokeUserCode_RpcCarry(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRelease__Vector3(Vector3 _Origin);
    static void InvokeUserCode_RpcRelease__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerEquipment : public NetworkBehaviour
{
public:
    // Static fields
    // static int32_t SLOT_PICKAXE;
    // static int32_t SLOT_HORN;
    // static int32_t SPECIAL_EQUIPMENT_COUNT;

    uint8_t pad_0000[0x68]; // 0x0000
    MonoString* carriedObjectID; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    FirstPersonController* deadPlayerCarried; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Mirror.SyncDictionary<System.Int32,System.String> SyncedEquippedItems; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* equipmentLocalParent; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* equipmentClientParent; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<ItemDataSO> specialItemDataList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.Dictionary<System.Int32,EquippedItem> items; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    EquippedItem* currentEquippedItem; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    FirstPersonController* player; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    InventorySystem* inventory; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Coroutine* holdReleaseCoroutine; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Transform* carriableHolder; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    CarriedObject* currentCarriedObject; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Action<System.Int32> OnSlotChanged; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Action<EquippedItem> OnEquippedItemChanged; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Action<CarriedObject> OnCarriableObjectChanged; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Action<System.String,System.String> _Mirror_SyncVarHookDelegate_carriedObjectID; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_syncedCurrentSlot; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    int32_t syncedCurrentSlot; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    CarryType carryType; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    int32_t <CurrentSlot>k__BackingField; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    NetworkBehaviourSyncVar ___deadPlayerCarriedNetId; // 0x0104

    // Methods
    System.Collections.Generic.List<ItemDataSO> get_SpecialItemDataList();
    int32_t get_CurrentSlot();
    void set_CurrentSlot(int32_t value);
    EquippedItem* get_CurrentEquippedItem();
    CarriedObject* get_CurrentCarriedObject();
    FirstPersonController* get_DeadPlayerCarried();
    void LocalInit(FirstPersonController* _Player, InventorySystem* _Inventory);
    MonoString* GetCurrentEquippedItemID();
    EquippedItem* GetCurrentEquippedItem();
    void CmdSetCarriedObject(MonoString* _CarriableId);
    void CmdSetCarriedDeadPlayer(MonoString* _CarriableId, FirstPersonController* _DeadPlayer);
    bool HasCarriable();
    MonoString* GetCurrentCarriableObjectID();
    bool CanCarryObject();
    void Awake();
    void OnDestroy();
    void OnPlayerDeath();
    void OnPlayerRevive();
    void OnSiegeWeaponChanged(SiegeWeapon* _Obj);
    void OnEquipmentChanged(uint64_t _PlayerID, int32_t _SlotIndex, MonoString* _ItemId, int32_t _Count);
    void OnSyncedEquipmentUpdated(Mirror.SyncIDictionary.Operation<System.Int32,System.String> _Op, int32_t _Key, MonoString* _Value);
    void CreateLocalCarriedObject(MonoString* _CarriableId);
    void DestroyLocalCarriedObject();
    void CreateLocalEquippedItem(int32_t _Slot, MonoString* _ItemId);
    void DestroyLocalEquippedItem(int32_t _Slot);
    void OnInventorySlotChanged(int32_t _NewSlot);
    void UpdateActiveItemVisual();
    void OnGameManagerInit();
    void OnHoldRelease(InputActionPhase _Phase);
    void StartHoldRelease();
    void CancelHoldRelease(bool _ReleaseAll);
    IEnumerator* HoldReleaseCoroutine();
    int32_t GetSlotIndexFromID(MonoString* _ItemId);
    static MonoString* GetIDFromItemIndex(int32_t _ItemIndex);
    static bool IsSlotSpecialItem(int32_t _slotIndex);
    void OnStartClient();
    void OnStopClient();
    void CmdEquipItem(MonoString* _ItemID, int32_t _Slot);
    void CmdChangeCurrentSlot(int32_t _NewSlot);
    void OnCurrentSlotChanged(int32_t _OldSlot, int32_t _NewSlot);
    void OnCarriedObjectChanged(MonoString* _OldID, MonoString* _NewID);
    void .ctor();
    bool Weaved();
    MonoString* get_NetworkcarriedObjectID();
    void set_NetworkcarriedObjectID(MonoString* value);
    int32_t get_NetworksyncedCurrentSlot();
    void set_NetworksyncedCurrentSlot(int32_t value);
    FirstPersonController* get_NetworkdeadPlayerCarried();
    void set_NetworkdeadPlayerCarried(FirstPersonController* value);
    CarryType get_NetworkcarryType();
    void set_NetworkcarryType(CarryType value);
    void UserCode_CmdSetCarriedObject__String(MonoString* _CarriableId);
    static void InvokeUserCode_CmdSetCarriedObject__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetCarriedDeadPlayer__String__FirstPersonController(MonoString* _CarriableId, FirstPersonController* _DeadPlayer);
    static void InvokeUserCode_CmdSetCarriedDeadPlayer__String__FirstPersonController(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdEquipItem__String__Int32(MonoString* _ItemID, int32_t _Slot);
    static void InvokeUserCode_CmdEquipItem__String__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdChangeCurrentSlot__Int32(int32_t _NewSlot);
    static void InvokeUserCode_CmdChangeCurrentSlot__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct CarryType
{
public:
    // Static fields
    // static CarryType NONE;
    // static CarryType OBJECT;
    // static CarryType DEAD_PLAYER;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PlayerFX : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    GameObject* healFX; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* levelUpFX; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    MonoString* currentEquippedParticlesID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    ParticleSystem* currentEquippedParticles; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    FirstPersonController* player; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    float chargeStartTime; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float chargeTime; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    Vector3 finalChargeSize; // 0x0098
    uint8_t pad_0099[0xB]; // 0x0099
    bool isCharging; // 0x00A4

    // Methods
    void Start();
    void OnDestroy();
    void Update();
    void OnHealthChanged(float _CurrentHealth, float _CurrentMaxHealth, float _HealthChange);
    void InstanceOnOnLevelUp(int32_t _Obj);
    void CmdGetParticleAndRelease(MonoString* _ParticleID, Vector3 _Offset, Quaternion _Rotation, Vector3 _Scale, float _Delay);
    void CmdGetEquippedItemParticle(MonoString* _ParticleID, Vector3 _Offset, Vector3 _Scale);
    void CmdChargeCurrentEquippedItemParticle(float _Time, Vector3 _FinalSize);
    void CmdPlayLevelupVFX();
    void RpcChargeCurrentEquippedItemParticle(float _Time, Vector3 _FinalSize);
    void CmdReleaseEquippedItemParticle();
    void RpcGetParticleAndRelease(MonoString* _ParticleID, Vector3 _Offset, Quaternion _Rotation, Vector3 _Scale, float _Delay);
    void RpcGetEquippedItemParticle(MonoString* _ParticleID, Vector3 _Offset, Vector3 _Scale);
    void RpcReleaseEquippedItemParticle();
    void RpcPlayLevelupVFX();
    IEnumerator* ReleaseCoroutine(MonoString* _ParticleID, ParticleSystem* _Particle, float _Delay);
    void .ctor();
    bool Weaved();
    void UserCode_CmdGetParticleAndRelease__String__Vector3__Quaternion__Vector3__Single(MonoString* _ParticleID, Vector3 _Offset, Quaternion _Rotation, Vector3 _Scale, float _Delay);
    static void InvokeUserCode_CmdGetParticleAndRelease__String__Vector3__Quaternion__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdGetEquippedItemParticle__String__Vector3__Vector3(MonoString* _ParticleID, Vector3 _Offset, Vector3 _Scale);
    static void InvokeUserCode_CmdGetEquippedItemParticle__String__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdChargeCurrentEquippedItemParticle__Single__Vector3(float _Time, Vector3 _FinalSize);
    static void InvokeUserCode_CmdChargeCurrentEquippedItemParticle__Single__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPlayLevelupVFX();
    static void InvokeUserCode_CmdPlayLevelupVFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcChargeCurrentEquippedItemParticle__Single__Vector3(float _Time, Vector3 _FinalSize);
    static void InvokeUserCode_RpcChargeCurrentEquippedItemParticle__Single__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseEquippedItemParticle();
    static void InvokeUserCode_CmdReleaseEquippedItemParticle(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcGetParticleAndRelease__String__Vector3__Quaternion__Vector3__Single(MonoString* _ParticleID, Vector3 _Offset, Quaternion _Rotation, Vector3 _Scale, float _Delay);
    static void InvokeUserCode_RpcGetParticleAndRelease__String__Vector3__Quaternion__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcGetEquippedItemParticle__String__Vector3__Vector3(MonoString* _ParticleID, Vector3 _Offset, Vector3 _Scale);
    static void InvokeUserCode_RpcGetEquippedItemParticle__String__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcReleaseEquippedItemParticle();
    static void InvokeUserCode_RpcReleaseEquippedItemParticle(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayLevelupVFX();
    static void InvokeUserCode_RpcPlayLevelupVFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class PlayerHitbox : public Hitbox
{
public:
    uint8_t pad_0000[0x70]; // 0x0000
    PlayerStats* playerStats; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Collider* col; // 0x0078

    // Methods
    void Start();
    void OnDeathChanged(bool _Obj);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PlayerSkin : public NetworkBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.HashSet<System.Int32> UsedSkins;

    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<UnityEngine.Material> materials; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Renderer* targetRenderer; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_skinIndex; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    int32_t skinIndex; // 0x0080

    // Methods
    void OnStartServer();
    void AssignSkin();
    void OnSkinChanged(int32_t _OldIndex, int32_t _NewIndex);
    void OnStopServer();
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_NetworkskinIndex();
    void set_NetworkskinIndex(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerStats : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    FirstPersonController* player; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Action<System.Single,System.Single,System.Boolean> OnStaminaChanged; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Action<System.Single,System.Single,System.Single> OnHealthChanged; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Action<System.Boolean> OnDeathChanged; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Action<System.Boolean> OnIsDefendingChanged; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Action* <OnHit>k__BackingField; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Action* <OnPreDeath>k__BackingField; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ParticleSystem* defendParticlesPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    CharacterStat* <MaxHealth>k__BackingField; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    CharacterStat* <HealthRegen>k__BackingField; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CharacterStat* <MaxStamina>k__BackingField; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    CharacterStat* <CritChance>k__BackingField; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    CharacterStat* <CritDamage>k__BackingField; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    CharacterStat* <CritChanceToHeal>k__BackingField; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    CharacterStat* <AttackPower>k__BackingField; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    CharacterStat* <Defense>k__BackingField; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    CharacterStat* <ChanceOfKnockback>k__BackingField; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    CharacterStat* <LifeStealPercentage>k__BackingField; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    CharacterStat* <SpeedMultiplier>k__BackingField; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    CharacterStat* <SprintSpeedMultiplier>k__BackingField; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    CharacterStat* <JumpHeightMultiplier>k__BackingField; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    CharacterStat* <BowDamageMultiplier>k__BackingField; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    CharacterStat* <SwordDamageMultiplier>k__BackingField; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    CharacterStat* <DigStrength>k__BackingField; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    CharacterStat* <BonusResourceCount>k__BackingField; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    CharacterStat* <ProjectileSpeed>k__BackingField; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    CharacterStat* <BonusDamageEliteBoss>k__BackingField; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    CharacterStat* <ProjectileBonus>k__BackingField; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    CharacterStat* <BerserkDamageMultiplier>k__BackingField; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    CharacterStat* <BreakBonusBlockChance>k__BackingField; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    CharacterStat* <DamageToNearbyEnemiesMultiplier>k__BackingField; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    CharacterStat* <DamageToEnemiesAboveHpMultiplier>k__BackingField; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    CharacterStat* <DropItemChance>k__BackingField; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    CharacterStat* <ItemMaxStackMultiplier>k__BackingField; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    System.Collections.Generic.Dictionary<StatusEffectType,StatusEffectData> <StatusEffects>k__BackingField; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    System.Collections.Generic.Dictionary<ETerrainMaterialType,System.Int32> <ServerResourceFailCounters>k__BackingField; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    System.Action<System.Single,System.Single> _Mirror_SyncVarHookDelegate_syncCurrentHealth; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_isDead; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_syncIsDefending; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    float syncCurrentHealth; // 0x01A0
    uint8_t pad_01A1[0x3]; // 0x01A1
    float syncMaxHealth; // 0x01A4
    uint8_t pad_01A5[0x3]; // 0x01A5
    bool isDead; // 0x01A8
    bool syncIsDefending; // 0x01A9
    uint8_t pad_01AA[0x2]; // 0x01AA
    float lastHealthRegenTime; // 0x01AC
    uint8_t pad_01AD[0x3]; // 0x01AD
    float curentHealthOnRevive; // 0x01B0
    uint8_t pad_01B1[0x3]; // 0x01B1
    float currentStamina; // 0x01B4
    uint8_t pad_01B5[0x3]; // 0x01B5
    float currentStaminaMultiplier; // 0x01B8
    uint8_t pad_01B9[0x3]; // 0x01B9
    float lastStaminaUseTime; // 0x01BC
    uint8_t pad_01BD[0x3]; // 0x01BD
    MovementState currentPlayerMovementState; // 0x01C0
    uint8_t pad_01C1[0x3]; // 0x01C1
    bool isInitialized; // 0x01C4

    // Methods
    PlayerArchetypeSO* get_playerArchetypeSO();
    Action* get_OnHit();
    void set_OnHit(Action* value);
    Action* get_OnPreDeath();
    void set_OnPreDeath(Action* value);
    IDamageable* get_Owner();
    NetworkIdentity* get_NetworkIdentity();
    DamageableType get_Type();
    CharacterStat* get_MaxHealth();
    void set_MaxHealth(CharacterStat* value);
    CharacterStat* get_HealthRegen();
    void set_HealthRegen(CharacterStat* value);
    CharacterStat* get_MaxStamina();
    void set_MaxStamina(CharacterStat* value);
    CharacterStat* get_CritChance();
    void set_CritChance(CharacterStat* value);
    CharacterStat* get_CritDamage();
    void set_CritDamage(CharacterStat* value);
    CharacterStat* get_CritChanceToHeal();
    void set_CritChanceToHeal(CharacterStat* value);
    CharacterStat* get_AttackPower();
    void set_AttackPower(CharacterStat* value);
    CharacterStat* get_Defense();
    void set_Defense(CharacterStat* value);
    CharacterStat* get_ChanceOfKnockback();
    void set_ChanceOfKnockback(CharacterStat* value);
    CharacterStat* get_LifeStealPercentage();
    void set_LifeStealPercentage(CharacterStat* value);
    CharacterStat* get_SpeedMultiplier();
    void set_SpeedMultiplier(CharacterStat* value);
    CharacterStat* get_SprintSpeedMultiplier();
    void set_SprintSpeedMultiplier(CharacterStat* value);
    CharacterStat* get_JumpHeightMultiplier();
    void set_JumpHeightMultiplier(CharacterStat* value);
    CharacterStat* get_BowDamageMultiplier();
    void set_BowDamageMultiplier(CharacterStat* value);
    CharacterStat* get_SwordDamageMultiplier();
    void set_SwordDamageMultiplier(CharacterStat* value);
    CharacterStat* get_DigStrength();
    void set_DigStrength(CharacterStat* value);
    CharacterStat* get_BonusResourceCount();
    void set_BonusResourceCount(CharacterStat* value);
    CharacterStat* get_ProjectileSpeed();
    void set_ProjectileSpeed(CharacterStat* value);
    CharacterStat* get_BonusDamageEliteBoss();
    void set_BonusDamageEliteBoss(CharacterStat* value);
    CharacterStat* get_ProjectileBonus();
    void set_ProjectileBonus(CharacterStat* value);
    CharacterStat* get_BerserkDamageMultiplier();
    void set_BerserkDamageMultiplier(CharacterStat* value);
    CharacterStat* get_BreakBonusBlockChance();
    void set_BreakBonusBlockChance(CharacterStat* value);
    CharacterStat* get_DamageToNearbyEnemiesMultiplier();
    void set_DamageToNearbyEnemiesMultiplier(CharacterStat* value);
    CharacterStat* get_DamageToEnemiesAboveHpMultiplier();
    void set_DamageToEnemiesAboveHpMultiplier(CharacterStat* value);
    CharacterStat* get_DropItemChance();
    void set_DropItemChance(CharacterStat* value);
    CharacterStat* get_ItemMaxStackMultiplier();
    void set_ItemMaxStackMultiplier(CharacterStat* value);
    System.Collections.Generic.Dictionary<StatusEffectType,StatusEffectData> get_StatusEffects();
    void set_StatusEffects(System.Collections.Generic.Dictionary<StatusEffectType,StatusEffectData> value);
    System.Collections.Generic.Dictionary<ETerrainMaterialType,System.Int32> get_ServerResourceFailCounters();
    void set_ServerResourceFailCounters(System.Collections.Generic.Dictionary<ETerrainMaterialType,System.Int32> value);
    void LocalInit(FirstPersonController* _Owner);
    void ServerInit(FirstPersonController* _Owner);
    void SetPlayer(FirstPersonController* _Player);
    bool HasStaminaLeft();
    bool HasStamina(float _Amount);
    void ConsumeStamina(float _Amount, bool _IsInstant);
    void RestoreStamina(float _Amount);
    bool CanTakeDamage(DamageType _Type);
    DamageResult CalculateDamage(float _BaseWeaponDamage, WeaponType _WeaponType, IDamageable* _Damageable);
    void TryLifeSteal(float _Damage);
    void TryApplyEffects(IDamageable* _Damageable, EquippedWeapon* weapon);
    bool CanKnockback(float chanceMultiplier);
    void UpdateStatusEffect(StatusEffectType _Type, float _ValueModifier);
    float GetStatusEffectValue(StatusEffectType _Type);
    float GetHealthPercentage();
    float GetCurrentHealth();
    void Update();
    void OnMovementStateChanged(MovementState oldState, MovementState newState);
    void HandleHealth();
    void HandleStamina();
    bool CanRegenStamina();
    float TryRegenStamina();
    void PlayerDefendAttack(NetworkIdentity* _Attacker);
    void InitCharacterStats();
    void CmdUpdateHealth(float _Amount);
    void ServerApplyDamage(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    void RPCOnHit();
    void TargetConsumeBlockStamina(NetworkConnection* _Target, float _Amount);
    void ServerRefreshSyncMaxHealth();
    void ServerUpdateHealth(float _Amount);
    void ServerRevive(float _HealthPercentage);
    void CmdUpdateIsDefending(bool _IsDefending);
    void HandleHealthChanged(float _OldValue, float _NewValue);
    void HandleDeathChanged(bool _OldValue, bool _NewValue);
    void OnSyncIsDefendingChanged(bool _OldValue, bool _NewValue);
    void .ctor();
    bool Weaved();
    float get_NetworksyncCurrentHealth();
    void set_NetworksyncCurrentHealth(float value);
    float get_NetworksyncMaxHealth();
    void set_NetworksyncMaxHealth(float value);
    bool get_NetworkisDead();
    void set_NetworkisDead(bool value);
    bool get_NetworksyncIsDefending();
    void set_NetworksyncIsDefending(bool value);
    void UserCode_CmdUpdateHealth__Single(float _Amount);
    static void InvokeUserCode_CmdUpdateHealth__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(DamageResult _Damage, WeaponType _WeaponType, NetworkIdentity* _Attacker);
    static void InvokeUserCode_ServerApplyDamage__DamageResult__WeaponType__NetworkIdentity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RPCOnHit();
    static void InvokeUserCode_RPCOnHit(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_TargetConsumeBlockStamina__NetworkConnection__Single(NetworkConnection* _Target, float _Amount);
    static void InvokeUserCode_TargetConsumeBlockStamina__NetworkConnection__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdUpdateIsDefending__Boolean(bool _IsDefending);
    static void InvokeUserCode_CmdUpdateIsDefending__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerTrigger : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FirstPersonController* <Player>k__BackingField; // 0x0020

    // Methods
    FirstPersonController* get_Player();
    void set_Player(FirstPersonController* value);
    void Awake();
    void .ctor();
};

// Namespace: <global>
class PlayerWeaponDamage : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EquippedWeapon* weapon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Collider* collider; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.HashSet<IDamageable> alreadyHit; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ParticleSystem* hitParticlesPrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool knockbackEnemy; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float knockbackForce; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float knockbackUpwardForce; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    LayerMask lineOfSightMask; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool isCurrentAttackCharged; // 0x0050

    // Methods
    void Awake();
    void OnTriggerEnter(Collider* _other);
    void EnableHitbox(bool isChargedAttack);
    void DisableHitbox();
    bool HasLineOfSight(Collider* _Other, IDamageable* _TargetDamageable);
    void .ctor();
};

// Namespace: <global>
class RagdollEnabler : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    Animator* animator; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* ragdollRoot; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    SmoothSyncMirror* smoothSync; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Rigidbody[][] rigidbodies; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    CharacterJoint[][] characterJoints; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Collider[][] colliders; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Transform[][] bones; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    BonePose[][] ragdollPose; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    BonePose[][] animPose; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Coroutine* recoverRoutine; // 0x00B0

    // Methods
    void Awake();
    void ServerEnableRagdoll();
    void ServerDisableRagdoll();
    void RpcEnableRagdollClient();
    void RpcDisableRagdollClient();
    void ActivateRagdoll();
    void DeactivateRagdoll();
    void ServerRecoverFromRagdoll();
    void RpcRecoverFromRagdoll();
    void RecoverFromRagdoll();
    void CaptureRagdollPose();
    void FreezeRagdoll();
    void PrepareAnimator();
    void CaptureAnimPose();
    IEnumerator* RecoverRoutine();
    IEnumerator* BlendRagdollToAnimation(float _Duration);
    void FinishBlend();
    void .ctor();
    bool Weaved();
    void UserCode_RpcEnableRagdollClient();
    static void InvokeUserCode_RpcEnableRagdollClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcDisableRagdollClient();
    static void InvokeUserCode_RpcDisableRagdollClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRecoverFromRagdoll();
    static void InvokeUserCode_RpcRecoverFromRagdoll(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class HandControllerContext
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Transform* rightHandRigTarget; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TwoBoneIKConstraint* rightHandIKConstraint; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Tween* rightHandIKTween; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EquippedItem* currentEquipedItem; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    FirstPersonController* <LocalPlayer>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* <CameraTransform>k__BackingField; // 0x0038

    // Methods
    FirstPersonController* get_LocalPlayer();
    void set_LocalPlayer(FirstPersonController* value);
    Transform* get_CameraTransform();
    void set_CameraTransform(Transform* value);
    void .ctor(FirstPersonController* _firstPersonController);
};

// Namespace: <global>
class HeldItemRigController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FirstPersonController* fistPersonController; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    FPSSettingsSO* fpsSettingsSO; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ChainIKConstraint* rightHandIKConstraint; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* rightHandRigTarget; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ChainIKConstraint* leftHandIKConstraint; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Transform* leftHandRigTarget; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Transform* itemHolder; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* carriableHolder; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    EquippedItem* currentEquippedItem; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    CarriedObject* currentCarriableObject; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Animator* animator; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float weightTransitionDuration; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    int32_t rightLayerIndex; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float targetRightWeight; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float targetLeftWeight; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    bool canSway; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    Vector3 currentTargetPosition; // 0x008C
    uint8_t pad_008D[0xB]; // 0x008D
    Quaternion currentTargetRotation; // 0x0098

    // Methods
    void Awake();
    void Start();
    void LateUpdate();
    void Initialize();
    void OnGameManagerInit();
    void EnableSwaying(bool _EnableSway);
    void OnEquippedItemChanged(EquippedItem* newEquippedItem);
    void OnCarriableObjectChanged(CarriedObject* newCarriableObj);
    void OnPlayerDeath();
    void OnPlayerRevive();
    void UpdateWeights();
    void UpdateItemTransform();
    void UpdateIKTargets();
    void ApplyIK(Transform* rigTarget, Transform* sourceIKTarget);
    void .ctor();
};

// Namespace: <global>
class EmptyHandState : public RightHandState
{
public:

    // Methods
    void .ctor(HandControllerContext* _context);
    void EnterState();
    void LateUpdateState();
    void ExitState();
    void OnPrimaryAction(bool _down);
    void OnSecondaryAction(bool _down);
};

// Namespace: <global>
class RightHandState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    HandControllerContext* Context; // 0x0010

    // Methods
    void .ctor(HandControllerContext* _context);
    void EnterState();
    void LateUpdateState();
    void ExitState();
    void OnPrimaryAction(bool _down);
    void OnSecondaryAction(bool _down);
};

// Namespace: <global>
class CharacterStat
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<StatModifier> _statModifiers; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* <CountUnit>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float _baseValue; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t _formatPrecision; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    FormatType _formatType; // 0x0028

    // Methods
    MonoString* get_CountUnit();
    void set_CountUnit(MonoString* value);
    float get_Value();
    void .ctor(float baseValue, FormatType formatType, int32_t formatPrecision);
    void AddModifier(StatModifier* _Mod);
    void AddOrReplaceModifier(StatModifier* _Mod);
    bool RemoveAllModifiersFromSource(MonoString* _SourceID);
    float GetValueWithModifierPreview(StatModifier* _PreviewMod);
    static MonoString* GetFormattedValue(FormatType formatType, float value, int32_t formatPrecision, MonoString* countUnit);
    MonoString* GetFormattedValue(float value);
    MonoString* ToString();
    float CalculateFinalValue(System.Collections.Generic.IEnumerable<StatModifier> mods);
};

// Namespace: <global>
struct FormatType
{
public:
    // Static fields
    // static FormatType Count;
    // static FormatType Cooldown;
    // static FormatType Multiplier;
    // static FormatType Percentage;
    // static FormatType PercentageBySecond;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct StatModType
{
public:
    // Static fields
    // static StatModType FLAT;
    // static StatModType PERCENT_ADD;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class StatModifier
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* SourceID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float Value; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    StatModType Type; // 0x001C

    // Methods
    void .ctor(float _Value, StatModType _Type, MonoString* _SourceID);
};

// Namespace: <global>
class SwayNBobScript : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    FirstPersonController* firstPersonController; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float step; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float maxStepDistance; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    Vector3 swayPos; // 0x0030
    uint8_t pad_0031[0xB]; // 0x0031
    float rotationStep; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float maxRotationStep; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    Vector3 swayEulerRot; // 0x0044
    uint8_t pad_0045[0xB]; // 0x0045
    float smooth; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float smoothRot; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float speedCurve; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    Vector3 travelLimit; // 0x005C
    uint8_t pad_005D[0xB]; // 0x005D
    Vector3 bobLimit; // 0x0068
    uint8_t pad_0069[0xB]; // 0x0069
    Vector3 bobPosition; // 0x0074
    uint8_t pad_0075[0xB]; // 0x0075
    float bobExaggeration; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    Vector3 multiplier; // 0x0084
    uint8_t pad_0085[0xB]; // 0x0085
    Vector3 bobEulerRotation; // 0x0090

    // Methods
    float get_curveSin();
    float get_curveCos();
    Vector2 get_moveInput();
    Vector2 get_lookInput();
    void Start();
    void Update();
    void Sway();
    void SwayRotation();
    void CompositePositionRotation();
    void BobOffset();
    void BobRotation();
    void .ctor();
};

// Namespace: <global>
class TPSCameraController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* cameraTarget; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Coroutine* delayCoroutine; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t currentIndex; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool inSpectatingMode; // 0x0034

    // Methods
    void SetCameraTarget(Transform* _Target);
    void SetSpectateTarget(Transform* _Target);
    void DelaySpectatingMode();
    void StopSpectatingMode();
    void Awake();
    void OnDestroy();
    IEnumerator* DelaySpectatingModeCo();
    void StartSpectateMode();
    void SelectNextValidPlayer();
    bool IsValidSpectateTarget(FirstPersonController* _Player);
    void .ctor();
};

// Namespace: <global>
class MonoBehaviorPool
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UnityEngine.Pool.ObjectPool<UnityEngine.MonoBehaviour> pool; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoBehaviour* monoBehaviorPrefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Transform* parentTransform; // 0x0020

    // Methods
    void .ctor(MonoBehaviour* _monoBehaviorPrefab, Transform* _parentTransform, int32_t _defaultCapacity, int32_t _maxSize);
    MonoBehaviour* GetMonoBehavior();
    void ReleaseMonoBehavior(MonoBehaviour* _monoBehavior);
    MonoBehaviour* CreateMonoBehavior();
    void OnMonobBehaviorRelease(MonoBehaviour* _monobehavior);
    void OnMonoBehaviorGet(MonoBehaviour* _monobehavior);
    void DestroyMonoBehavior(MonoBehaviour* _monobehavior);
};

// Namespace: <global>
class LightSettingsSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Vector2 playerYPosition; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 directionalLightIntensity; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector2 distanceToUndegroundLight; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Color SurfaceAmbientLightColor; // 0x0030
    uint8_t pad_0031[0xF]; // 0x0031
    Color UndergroundAmbientLightColor; // 0x0040
    uint8_t pad_0041[0xF]; // 0x0041
    Color LightedUndergroundLightColor; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    float surfaceFogDensity; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float undergroundFogDensity; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float fogExponent; // 0x0068

    // Methods
    void .ctor();
};

// Namespace: <global>
class ResolutionManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UniversalRenderPipelineAsset* urpAsset; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t targetHeight; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t lastScreenHeight; // 0x002C

    // Methods
    void Start();
    void Update();
    void OnDestroy();
    void OnApplicationQuit();
    void UpdateRenderScale();
    void ResetScale();
    void .ctor();
};

// Namespace: <global>
class BaseUpgradeSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* icon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t maxLevel; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    bool isServer; // 0x002C

    // Methods
    MonoString* get_LocalizationTable();
    int32_t get_MaxLevel();
    bool get_IsServer();
    MonoString* get_ID();
    Sprite* get_Icon();
    MonoString* GetLocalizedTitle();
    MonoString* GetLocalizedDescription();
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    void .ctor();
};

// Namespace: <global>
class AddAttackEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddBerserkerDamage : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddBonusResourceOnDigEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddBowDamageEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddCraftSpeedEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddCritDamageEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddCritHealEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddCritRateEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddDefenseEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddDigStrengthEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddFireChance : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddFrozenChance : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddHealthRegenEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddJumpHeightEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddKingDamageEffect : public UpgradeEffect
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    MonoString* <LocalizationTableID>k__BackingField; // 0x0028

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddKingHealthEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddKnockbackChanceEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddLifeStealEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddMaxHealthEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddMaxStaminaEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddMetaCurrencyChanceEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddMoveSpeedEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddPoisonChance : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddSprintSpeedEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddSwordDamageEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class AddWallHealthEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseBreakBonusBlockChance : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseCampFireRegen : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseDamageOnEliteMonsterEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseDamageToEnemiesAboveHpEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseDamageToNearbyEnemiesEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseDifficultyEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseDropItemChanceEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseItemStackCountMultiplierEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseProjectileCountEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class IncreaseProjectileSpeedEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class RepairWallEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class UnlockAutomatedBallistaEffect : public UpgradeEffect
{
public:

    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class UpgradeAutomatedBallistaEffect : public UpgradeEffect
{
public:
    // Static fields
    // static MonoString* UPGRADE_SOURCE;


    // Methods
    MonoString* get_LocalizationTableID();
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    void .ctor();
};

// Namespace: <global>
class UpgradeEffect : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    float baseValue; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    StatModType statType; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    bool _inverseNextValueColor; // 0x0020

    // Methods
    MonoString* get_LocalizationTableID();
    MonoString* GetDescription(MonoString* _TableName, float _BonusValue);
    void Apply(FirstPersonController* _Player, float _BonusValue);
    float GetCurrentValue();
    float GetNextValue(float _BonusValue);
    MonoString* GetFormattedValue(float value);
    MonoString* ChangeNextValueColor(float currentValue, float nextValue, MonoString* description);
    static MonoString* GetLocalizedString(MonoString* _TableKey, MonoString* _EntryKey, Object[][] _Args);
    void .ctor();
};

// Namespace: <global>
class BlockAttackMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class CraftItemMissionSO : public GlobalMissionSO
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    ItemDataSO* itemCrafted; // 0x0038

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class CritCountMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class DeathCountMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class DigBlockMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class GlobalMissionSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* id; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite* icon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MissionType missionType; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t targetValue; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t metaCurrencyReward; // 0x0030

    // Methods
    MonoString* get_ID();
    Sprite* get_Icon();
    MissionType get_MissionType();
    int32_t get_TargetValue();
    int32_t get_MetaCurrencyReward();
    float GetCurrentValue(MetaData* _Data);
    MonoString* GetDescription();
    MonoString* GetCurrentProgressText(MetaData* _Data);
    float GetCurrentProgressValue(MetaData* _Data);
    bool IsCompleted(MetaData* _Data);
    bool CanTakeReward(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
struct MissionCategory
{
public:
    // Static fields
    // static MissionCategory PICKUP;
    // static MissionCategory LEVELUP;
    // static MissionCategory CHARACTER;
    // static MissionCategory WEAPON;
    // static MissionCategory NONE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct MissionType
{
public:
    // Static fields
    // static MissionType GLOBAL;
    // static MissionType RUN;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class HeadshotMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class KillAllEnemyMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class KillAllEnemyWithCharacterMissionSO : public GlobalMissionSO
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    PlayerArchetypeSO* playerArchetype; // 0x0038

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class KillAllEnemyWithWeaponMissionSO : public GlobalMissionSO
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    WeaponType weaponType; // 0x0038

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class KillEnemyMissionSO : public GlobalMissionSO
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    EnemyDataSO* enemySO; // 0x0038

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class OpenChestMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class ReachMaxHPMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class RecycleObjectMissionSO : public GlobalMissionSO
{
public:

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class UpgradeTomeMissionSO : public GlobalMissionSO
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    RogueLikeUpgradeSO* upgradeSO; // 0x0038

    // Methods
    MonoString* GetDescription();
    float GetCurrentValue(MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class RogueLikeDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    RogueLikeUpgradeSO[][] rogueLikeUpgrades; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RogueLikeUpgradeSO[][] rogueLikeLevelupUpgrades; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RogueLikeUpgradeSO[][] rogueLikePickupUpgrades; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SResourcesValue[][] resourcesValues; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxDifferentLevelupUpgrades; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float ownedUpgradeWeightMultiplier; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t maxLevel; // 0x0040

    // Methods
    int32_t get_MaxDifferentLevelupUpgrades();
    float get_OwnedUpgradeWeightMultiplier();
    SResourcesValue[][] get_ResourcesValues();
    RogueLikeUpgradeSO[][] get_RogueLikeUpgrades();
    RogueLikeUpgradeSO[][] get_LevelupUpgrades();
    RogueLikeUpgradeSO[][] get_PickupUpgrades();
    RogueLikeUpgradeSO* GetUpgradeSOByID(MonoString* _ID);
    int32_t GetResourcesRequiredByLevel(int32_t _Level);
    bool IsMaxLevel(int32_t _Level);
    bool CanResourceChargeLevel(MonoString* _ID);
    int32_t GetResourceValueByID(MonoString* _ID);
    void RefreshRogueLikeUpgrades();
    void .ctor();
};

// Namespace: <global>
class RogueLikeUpgradeManager : public MonoBehaviour
{
public:
    // Static fields
    // static RogueLikeUpgradeManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    RogueLikeDatabaseSO* rogueLikeDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    UpgradeManager* upgradeManager; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<RogueLikeUpgradeSO> availableLevelupUpgrades; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<RogueLikeUpgradeSO> availablePickupUpgrades; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<RogueLikeUpgradeManager.ActiveRunUpgrade> activeRunUpgrades; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Action<System.Int32,System.Int32> OnChargeChanged; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Action<System.Int32> OnLevelUp; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Action<System.String> OnUpgradeAcquired; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Action<System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice>> OnUpgradeDraftGenerated; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t currentCharge; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t currentLevel; // 0x006C

    // Methods
    void add_OnChargeChanged(System.Action<System.Int32,System.Int32> value);
    void remove_OnChargeChanged(System.Action<System.Int32,System.Int32> value);
    void add_OnLevelUp(System.Action<System.Int32> value);
    void remove_OnLevelUp(System.Action<System.Int32> value);
    void add_OnUpgradeAcquired(System.Action<System.String> value);
    void remove_OnUpgradeAcquired(System.Action<System.String> value);
    void add_OnUpgradeDraftGenerated(System.Action<System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice>> value);
    void remove_OnUpgradeDraftGenerated(System.Action<System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice>> value);
    void Awake();
    void Init(UpgradeManager* _UpgradeManager);
    RogueLikeUpgradeSO* GetUpgradeSOByID(MonoString* _ID);
    void AddResources(MonoString* _ItemID, int32_t _Count);
    void RemoveResources(MonoString* _ItemID, int32_t _Count);
    void ApplyUpgrade(UpgradeDraftChoice _DraftChoice);
    int32_t GetCurrentCharge();
    int32_t GetCurrentChargeNeeded();
    int32_t GetChargeNeededForLevel(int32_t level);
    int32_t GetTotalChargeUpToLevel(int32_t level);
    int32_t GetCurrentLevel();
    bool IsMaxLevel();
    System.Collections.Generic.List<RogueLikeUpgradeManager.ActiveRunUpgrade> GetTomes();
    System.Collections.Generic.List<RogueLikeUpgradeManager.ActiveRunUpgrade> GetItems();
    void ServerUpgradeAcquired(FirstPersonController* _Player, RogueLikeUpgradeSO* _Upgrade, UpgradeRarity _UpgradeRarity);
    System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice> GenerateThreeChoices();
    RogueLikeUpgradeSO* GeneratePickupUpgradeChoice();
    void LevelUp();
    bool CanLevelUp();
    float GetUpgradeValue(RogueLikeUpgradeSO* _Upgrade, ActiveRunUpgrade* _Active);
    ActiveRunUpgrade* GetActiveUpgrade(MonoString* _ID);
    int32_t GetUpgradeCurrentLevel(MonoString* _ID);
    int32_t CountDistinct(UpgradeCategory _Category);
    System.Collections.Generic.List<RogueLikeUpgradeSO> CreateValidLevelupDraftPool();
    System.Collections.Generic.List<RogueLikeUpgradeSO> CreateValidPickupDraftPool();
    RogueLikeUpgradeSO* GetWeightedRandom(System.Collections.Generic.List<RogueLikeUpgradeSO> _Pool, bool considerOwnedUpgrades);
    System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice> GenerateThreeChoices(System.Collections.Generic.List<RogueLikeUpgradeSO> _ValidPool);
    UpgradeRarity RollRarity();
    float GetRarityWeight(UpgradeRarity _Rarity);
    void .ctor();
};

// Namespace: <global>
struct UpgradeCategory
{
public:
    // Static fields
    // static UpgradeCategory LEVELUP;
    // static UpgradeCategory PICKUP;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class RogueLikeUpgradeSO : public BaseUpgradeSO
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    UpgradeEffect* effect; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GlobalMissionSO* mission; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<PlayerClass> classExclusivity; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UpgradeCategory category; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    bool stackable; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    UpgradeRarity rarity; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    bool unlockable; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t metaCurrencyCost; // 0x0058

    // Methods
    MonoString* get_LocalizationTable();
    UpgradeEffect* get_Effect();
    UpgradeCategory get_UpgradeCategory();
    UpgradeRarity get_Rarity();
    MissionCategory get_Category();
    bool get_Unlockable();
    GlobalMissionSO* get_GlobalMission();
    int32_t get_MetaCurrencyCost();
    bool get_Stackable();
    bool CanUnlock(MetaData* _Data);
    bool CanTakeRewards(MetaData* _Data);
    MonoString* GetRarityLocalizedString(UpgradeRarity _Rarity);
    MonoString* GetLevelString(int32_t _Level);
    MonoString* GetLocalizedDescriptionWithRarity(UpgradeRarity _Rarity);
    MonoString* GetLocalizedSplitDescriptionWithRarity(UpgradeRarity _Rarity);
    float GetBonusValuePerRarity(UpgradeRarity _Rarity);
    bool IsClassValid(PlayerClass playerClass);
    void .ctor();
};

// Namespace: <global>
struct UpgradeRarity
{
public:
    // Static fields
    // static UpgradeRarity COMMON;
    // static UpgradeRarity UNCOMMON;
    // static UpgradeRarity RARE;
    // static UpgradeRarity EPIC;
    // static UpgradeRarity LEGENDARY;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class LineRope : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* startPosition; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Transform* endPosition; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Spring* spring; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    LineRenderer* lr; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    AnimationCurve* affectCurve; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Coroutine* drawCoroutine; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Vector3 currentGrapplePosition; // 0x0050
    uint8_t pad_0051[0xB]; // 0x0051
    int32_t quality; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float damper; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float strength; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float velocity; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float waveCount; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float waveHeight; // 0x0070

    // Methods
    void ResetRope();
    void LaunchRope();
    void Awake();
    IEnumerator* LaunchRopeCo();
    void DrawRope();
    void .ctor();
};

// Namespace: <global>
class Spring
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float strength; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float damper; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float target; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float velocity; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float value; // 0x0020

    // Methods
    void Update(float _DeltaTime);
    void Reset();
    void SetValue(float _Value);
    void SetTarget(float _Target);
    void SetDamper(float _Damper);
    void SetStrength(float _Strength);
    void SetVelocity(float _Velocity);
    float get_Value();
    void .ctor();
};

// Namespace: <global>
class LobbyPlayerSlotsManager : public MonoBehaviour
{
public:
    // Static fields
    // static LobbyPlayerSlotsManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Transform[][] playerSlots; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LobbyPlayer[][] playersInSlots; // 0x0028

    // Methods
    void Awake();
    Transform* GetAvailableSlot(int32_t slotIndex);
    void AssignPlayerToSlot(int32_t index, LobbyPlayer* lobbyPlayer);
    void .ctor();
};

// Namespace: <global>
class RunSettingsNetwork : public NetworkBehaviour
{
public:
    // Static fields
    // static RunSettingsNetwork* <Instance>k__BackingField;
    // static System.Action<DifficultyLevel> OnDifficultySynced;
    // static System.Action<MapSO> OnMapIdSynced;

    uint8_t pad_0000[0x68]; // 0x0000
    MonoString* currentMapID; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Action<DifficultyLevel,DifficultyLevel> _Mirror_SyncVarHookDelegate_currentDifficulty; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Action<System.String,System.String> _Mirror_SyncVarHookDelegate_currentMapID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    DifficultyLevel currentDifficulty; // 0x0080

    // Methods
    static RunSettingsNetwork* get_Instance();
    static void set_Instance(RunSettingsNetwork* value);
    static void add_OnDifficultySynced(System.Action<DifficultyLevel> value);
    static void remove_OnDifficultySynced(System.Action<DifficultyLevel> value);
    static void add_OnMapIdSynced(System.Action<MapSO> value);
    static void remove_OnMapIdSynced(System.Action<MapSO> value);
    void Awake();
    void OnStartServer();
    void OnStartClient();
    void SrvSetDifficulty(DifficultyLevel newDifficulty);
    void OnDifficultyChanged(DifficultyLevel oldDifficulty, DifficultyLevel newDifficulty);
    void SrvSetMapID(MonoString* mapID);
    void OnMapIdChanged(MonoString* oldMapID, MonoString* newMapID);
    void .ctor();
    bool Weaved();
    DifficultyLevel get_NetworkcurrentDifficulty();
    void set_NetworkcurrentDifficulty(DifficultyLevel value);
    MonoString* get_NetworkcurrentMapID();
    void set_NetworkcurrentMapID(MonoString* value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class RunSetupManager : public MonoBehaviour
{
public:
    // Static fields
    // static RunSetupManager* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    RunSetupScreen* runSetupScreen; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayerArchetypeDatabaseSO* archetypeDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MapDatabaseSO* mapDatabase; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RunSettingsNetwork* runSettingsNetworkPrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DissonanceComms* dissonanceComms; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RunSettingsNetwork* runSettingsNetwork; // 0x0048

    // Methods
    PlayerArchetypeDatabaseSO* get_ArchetypeDatabase();
    MapDatabaseSO* get_MapDatabase();
    DissonanceComms* get_DissonanceComms();
    void Awake();
    void Start();
    void Init();
    PlayerArchetypeSO* GetPlayerArchetype(PlayerClass playerClass);
    MapSO* GetMapSO(MonoString* id);
    void OnTimerMessageReceived(LobbyTimerMessage msg);
    void .ctor();
};

// Namespace: <global>
class AudioSettingsAdapter : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DissonanceComms* dissonanceComms; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioSettingsControllerSO* audioSettingsController; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VoiceBroadcastTrigger* standardVoiceTrigger; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VoiceProximityBroadcastTrigger* proximityVoiceTrigger; // 0x0038

    // Methods
    void Awake();
    void OnEnable();
    void OnDisable();
    void Start();
    void UpdateDissonanceMicrophone(MonoString* micName);
    void UpdateMicActivationMode(MicActivationMode mode);
    void .ctor();
};

// Namespace: <global>
class AudioSettingsControllerSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    AudioMixer* mainAudioMixer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.String> OnMicrophoneChanged; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<MicActivationMode> OnMicActivationModeChanged; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float baseMasterDb; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float baseFXDb; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float baseMusicDb; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float baseVoiceDb; // 0x003C

    // Methods
    void add_OnMicrophoneChanged(System.Action<System.String> value);
    void remove_OnMicrophoneChanged(System.Action<System.String> value);
    void add_OnMicActivationModeChanged(System.Action<MicActivationMode> value);
    void remove_OnMicActivationModeChanged(System.Action<MicActivationMode> value);
    static float NormalizedToDb(float normalized);
    void SetAllChannelsVolume(AudioSettingsData* audioSettingsData);
    void SetChannelVolume(AudioChannelType audioChannelType, float userNormalized);
    void SetChannelVolume(MonoString* channelName, float userNormalized, float baseDb);
    void SetMicrophone(MonoString* micName);
    void SetMicActivationMode(MicActivationMode mode);
    void .ctor();
};

// Namespace: <global>
struct AudioChannelType
{
public:
    // Static fields
    // static AudioChannelType MASTER;
    // static AudioChannelType GAME_FX;
    // static AudioChannelType SOUNDTRACK;
    // static AudioChannelType VOICE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class GameSettingsControllerSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Action<System.Int32> OnFpsFovChanged; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float mouseSensitivityMin; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mouseSensitivityMax; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float mouseSliderLowValue; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mouseSliderHighValue; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t fpsFovMin; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t fpsFovMax; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float sprintFovMultiplier; // 0x0038

    // Methods
    int32_t get_FPSFovMin();
    int32_t get_FPSFovMax();
    float get_MousesliderLowValue();
    float get_MousesliderHighValue();
    void add_OnFpsFovChanged(System.Action<System.Int32> value);
    void remove_OnFpsFovChanged(System.Action<System.Int32> value);
    void InitSettings(GameSettingsData* gameSettingsData);
    void SetLanguage(MonoString* _languageCode);
    float GetEngineSensFromUI(float uiValue);
    float GetUISensFromEngine(float engineValue);
    void SetMouseSensitivity(float mouseSensitivity);
    void SetFpsFov(int32_t fpsFov);
    int32_t GetSprintFov(int32_t fpsFov);
    void .ctor();
};

// Namespace: <global>
class GraphicsSettingsControllerSO : public ScriptableObject
{
public:

    // Methods
    void InitSettings(GraphicsSettingsData* graphicsSettingsData);
    void SetResolution(int32_t width, int32_t height, WindowModeOption windowModeOption);
    FullScreenMode ConvertToNativeMode(WindowModeOption customMode);
    void .ctor();
};

// Namespace: <global>
class Crafter : public NetworkObjectBase
{
public:
    // Static fields
    // static int32_t Working;

    uint8_t pad_0000[0x78]; // 0x0000
    System.Collections.Generic.List<UnityEngine.Transform> crafterItemStacksSpawn; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    CrafterOutputSlot* slotPrefab; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<Crafter.CraftRecipe> recipes; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<CrafterOutputSlot> outputSlots; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.Queue<Crafter.CraftTask> craftQueue; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Coroutine* craftItemCo; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    NetworkedAudioDataSo* networkedAudioDataSo; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    AudioSource* audioSource; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    MonoString* craftingSoundID; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Animator* animator; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Transform* visualItemTarget; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    CharacterStat* <ProductionSpeed>k__BackingField; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Action<System.Boolean,System.Boolean> _Mirror_SyncVarHookDelegate_isCrafting; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    int32_t itemCount; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float syncProductionSpeed; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool isCrafting; // 0x00E8

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    CharacterStat* get_ProductionSpeed();
    void set_ProductionSpeed(CharacterStat* value);
    bool IsPlaceable(MonoString* _ItemID);
    void OnAnimationEvent(MonoString* _AnimationID);
    void Awake();
    void InitializeAudio();
    void OnStartServer();
    void ServerInit();
    void ServerUpgrade(float _Value);
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    IEnumerator* CraftItemCo();
    bool CanCraftItem(CraftTask _Task);
    void CraftItem(CraftTask _Task);
    void RpcPlayPlaceAnimation(MonoString* _ItemId, Vector3 _Origin, Quaternion _Rotation);
    void OnIsCraftingChanged(bool _, bool _NewValue);
    void UpdateAudioState(bool _IsWorking);
    bool TryGetRecipe(MonoString* _ItemID, CraftRecipe _Recipe);
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_NetworkitemCount();
    void set_NetworkitemCount(int32_t value);
    float get_NetworksyncProductionSpeed();
    void set_NetworksyncProductionSpeed(float value);
    bool get_NetworkisCrafting();
    void set_NetworkisCrafting(bool value);
    void UserCode_RpcPlayPlaceAnimation__String__Vector3__Quaternion(MonoString* _ItemId, Vector3 _Origin, Quaternion _Rotation);
    static void InvokeUserCode_RpcPlayPlaceAnimation__String__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CrafterAnimationEvent : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Crafter* crafter; // 0x0020

    // Methods
    void Awake();
    void OnAnimationEvent(MonoString* _ID);
    void .ctor();
};

// Namespace: <global>
class CrafterOutputSlot : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    MonoString* itemID; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* visualTransformParent; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ItemDataSO* itemDataSO; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Collider* interactionCollider; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    QuickOutline* quickOutline; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    GameObject* currentVisualObject; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<System.String,System.String> _Mirror_SyncVarHookDelegate_itemID; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_itemCount; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t itemCount; // 0x00A8

    // Methods
    MonoString* get_ItemID();
    int32_t get_ItemCount();
    bool get_IsEmpty();
    void Awake();
    void OnCrosshairEnter();
    void OnCrosshairExit();
    MonoString* GetInteractionText();
    MonoString* GetInteractionInput();
    void Interact(FirstPersonController* _Owner);
    void UpdateInteractionCollider(int32_t _NewCount);
    void UpdateVisuals(int32_t _NewCount);
    void GenerateVisuals(GameObject* _Prefab);
    void OnStartClient();
    bool ServerCanRemoveItem(MonoString* _ItemID, int32_t _Count);
    void ServerOnRemoveItem(int32_t _Count);
    void ServerAddItem(ItemDataSO* _ItemData);
    void OnItemIDChanged(MonoString* _OldID, MonoString* _NewID);
    void OnItemCountChanged(int32_t _OldCount, int32_t _NewCount);
    void RpcAnimateFromCrafter(Vector3 _StartPos, bool _IsFirstItem);
    void InitQuickOutline(Mode _Mode);
    void SetOutline(bool _Value);
    void .ctor();
    bool Weaved();
    MonoString* get_NetworkitemID();
    void set_NetworkitemID(MonoString* value);
    int32_t get_NetworkitemCount();
    void set_NetworkitemCount(int32_t value);
    void UserCode_RpcAnimateFromCrafter__Vector3__Boolean(Vector3 _StartPos, bool _IsFirstItem);
    static void InvokeUserCode_RpcAnimateFromCrafter__Vector3__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ExcangeToolNPC : public NetworkObjectBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    Transform* spawnItemTarget; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    float itemForce; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float randomSpread; // 0x0084

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
    void ServerSpawnExchangedResources(ItemDataSO* _ItemData);
    Vector3 GetRandomUpwardDirection();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PickupItemStack : public ItemStackBase
{
public:
    uint8_t pad_0000[0xA0]; // 0x0000
    MonoString* itemID; // 0x00A0

    // Methods
    void OnStartClient();
    void ServerInit(ItemDataSO* _Item);
    void PlaceItem();
    MonoString* GetInteractionText();
    void RpcPlayPlaceAnimation(int32_t _PreviousCount);
    void .ctor();
    bool Weaved();
    MonoString* get_NetworkitemID();
    void set_NetworkitemID(MonoString* value);
    void UserCode_RpcPlayPlaceAnimation__Int32(int32_t _PreviousCount);
    static void InvokeUserCode_RpcPlayPlaceAnimation__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class WallRepairNPC : public NetworkObjectBase
{
public:
    // Static fields
    // static int32_t WorkingHash;

    uint8_t pad_0000[0x78]; // 0x0000
    ItemDataSO* ressourceNeededSO; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    NpcSpeachController* speechController; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* visualItemTarget; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    NetworkAnimator* npcAnimator; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Tween* repairTween; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Action<System.Int32,System.Int32> _Mirror_SyncVarHookDelegate_currentStonesNumber; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t stonesNumberToHeal; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    int32_t healthRegainPerHeal; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    int32_t currentStonesNumber; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float repairAnimationDuration; // 0x00B4

    // Methods
    NetworkIdentity* get_NetworkIdentity();
    int32_t get_StonesRemaining();
    bool get_IsFullHealth();
    int32_t get_HealthRegainPerHeal();
    ItemDataSO* get_RessourceNeededSO();
    bool TryPlaceItem(FirstPersonController* _Owner, Vector3 _Origin, Quaternion _Rotation, MonoString* _ItemID, int32_t _Count);
    bool IsPlaceable(MonoString* _ItemID);
    void RpcPlayPlaceAnimation(MonoString* _ItemId, Vector3 _Origin, Quaternion _Rotation);
    void ServerStartRepairAnimation();
    void OnCurrenStoneNumberChanged(int32_t _oldValue, int32_t _newValue);
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_NetworkcurrentStonesNumber();
    void set_NetworkcurrentStonesNumber(int32_t value);
    void UserCode_RpcPlayPlaceAnimation__String__Vector3__Quaternion(MonoString* _ItemId, Vector3 _Origin, Quaternion _Rotation);
    static void InvokeUserCode_RpcPlayPlaceAnimation__String__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class BurnStatusEffect : public StatusEffect
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    float damagePerSecond; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float sinceLastDamage; // 0x002C

    // Methods
    StatusEffectType get_Type();
    void .ctor(float _Dps);
    void OnApply();
    void OnTick(float _DeltaTime);
    void OnEnd();
};

// Namespace: <global>
class FreezeStatusEffect : public StatusEffect
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    IMovable* movable; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    IAnimatable* animatable; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    IAttacker* attacker; // 0x0038

    // Methods
    StatusEffectType get_Type();
    void OnApply();
    void OnTick(float _DeltaTime);
    void OnEnd();
    void .ctor();
};

// Namespace: <global>
class PoisonStatusEffect : public StatusEffect
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    float damagePerSecond; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float sinceLastDamage; // 0x002C

    // Methods
    void .ctor(float _Dps);
    StatusEffectType get_Type();
    void OnApply();
    void OnTick(float _DeltaTime);
    void OnEnd();
};

// Namespace: <global>
class SlowStatusEffect : public StatusEffect
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    IMovable* movable; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float slowPercentage; // 0x0030

    // Methods
    StatusEffectType get_Type();
    void .ctor(float _SlowPercentage);
    void OnApply();
    void OnTick(float _DeltaTime);
    void OnEnd();
};

// Namespace: <global>
class StatusEffect
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    IDamageable* Target; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    NetworkIdentity* Owner; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float Duration; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float Elapsed; // 0x0024

    // Methods
    bool get_IsDone();
    StatusEffectType get_Type();
    void Init(IDamageable* _Target, float _Duration, NetworkIdentity* owner);
    void Tick(float _DeltaTime);
    void Cancel();
    void OnApply();
    void OnTick(float _DeltaTime);
    void OnEnd();
    void .ctor();
};

// Namespace: <global>
struct StatusEffectData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    StatusEffectType Type; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float Chance; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float Value; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float Duration; // 0x001C

    // Methods
    static StatusEffectData op_Addition(StatusEffectData a, StatusEffectData b);
};

// Namespace: <global>
struct StatusEffectType
{
public:
    // Static fields
    // static StatusEffectType POISON;
    // static StatusEffectType BURN;
    // static StatusEffectType FROZEN;
    // static StatusEffectType SLOW;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class StatusEffectHandler : public NetworkBehaviour
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<StatusEffect> activeEffects; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Mirror.SyncList<StatusEffectType> syncActiveEffectEnums; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    IDamageable* target; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Action<StatusEffectType> OnEffectApplied; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Action<StatusEffectType> OnEffectRemoved; // 0x0088

    // Methods
    void AddEffect(StatusEffectData _EffectData, NetworkIdentity* _Owner);
    void Awake();
    void Update();
    void CancelEffect(StatusEffectType Type);
    void RemoveEffect(StatusEffect* _Effect);
    StatusEffect* GetActiveEffect(StatusEffectType _Type);
    bool IsEffectActive(StatusEffectType _Type);
    void RpcOnEffectApplied(StatusEffectType Type);
    void RpcOnEffectRemoved(StatusEffectType Type);
    void .ctor();
    bool Weaved();
    void UserCode_RpcOnEffectApplied__StatusEffectType(StatusEffectType Type);
    static void InvokeUserCode_RpcOnEffectApplied__StatusEffectType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOnEffectRemoved__StatusEffectType(StatusEffectType Type);
    static void InvokeUserCode_RpcOnEffectRemoved__StatusEffectType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class SteamIntegration : public MonoBehaviour
{
public:
    // Static fields
    // static SteamIntegration* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    AppManager* appManager; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool needsStatSync; // 0x0028

    // Methods
    void Awake();
    void Start();
    void LateUpdate();
    void Initialize();
    void PrintYourName();
    void SyncAchievementsWithSteam();
    uint64_t GetOwnSteamID();
    MonoString* GetOwnSteamName();
    void UpdateAchievementProgress(MonoString* achievementID, int32_t increment, int32_t requiredProgress);
    bool IsThisAchievementUnlocked(MonoString* id);
    void UnlockAchievement(MonoString* id);
    void ClearAchievementStatus(MonoString* id);
    void .ctor();
};

// Namespace: <global>
class AchievementData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.Int32> achievementProgress; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.HashSet<System.String> unlockedAchievements; // 0x0018

    // Methods
    bool IsAchievementUnlocked(MonoString* achievementID);
    void UnlockAchievement(MonoString* achievementID);
    bool UpdateAchievementProgress(MonoString* achievementID, int32_t increment, int32_t requiredProgress);
    void .ctor();
};

// Namespace: <global>
class SteamLobby : public MonoBehaviour
{
public:
    // Static fields
    // static SteamLobby* Instance;
    // static MonoString* hostAdressKey;
    // static MonoString* lobbyNameKey;
    // static MonoString* hostNameKey;
    // static MonoString* appVersionKey;

    uint8_t pad_0000[0x20]; // 0x0000
    Steamworks.Callback<Steamworks.LobbyCreated_t> LobbyCreated; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Steamworks.Callback<Steamworks.GameLobbyJoinRequested_t> JoinRequest; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Steamworks.Callback<Steamworks.LobbyEnter_t> LobbyEntered; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Steamworks.Callback<Steamworks.LobbyDataUpdate_t> LobbyDataUpdated; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MonoString* lobbyNameString; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Action<System.UInt64> OnLobbyDataUpdated; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    uint64_t currentLobbyID; // 0x0050

    // Methods
    void Awake();
    void Start();
    void InviteFriends();
    void HostLobby();
    void LeaveLobby();
    void SetLobbyVisibleToFriends();
    void OnLobbyCreated(LobbyCreated_t callback);
    void OnJoinRequest(GameLobbyJoinRequested_t callback);
    void OnlobbyEntered(LobbyEnter_t callback);
    void JoinLobby(uint64_t lobbyID);
    void OnGetLobbyData(LobbyDataUpdate_t result);
    System.Collections.Generic.List<FriendLobbyInfo> RefreshLobbyList();
    MonoString* GetLobbyName(uint64_t lobbyID);
    MonoString* GetLobbyHostName(uint64_t lobbyID);
    MonoString* GetLobbyAppVersion(uint64_t lobbyID);
    uint64_t GetLobbyMemberByIndex(int32_t _playerIndex);
    MonoString* GetFriendName(uint64_t _friendSteamID);
    void LockLobby();
    MonoString* GetLobbyDataString(uint64_t lobbyID, MonoString* key);
    void .ctor();
};

// Namespace: <global>
class FriendLobbyInfo
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* lobbyName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* lobbyPassword; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MonoString* lobbyHostName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* lobbyAppVersion; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    uint64_t friendSteamID; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    uint64_t lobbySteamID; // 0x0038

    // Methods
    void .ctor();
};

// Namespace: <global>
class SteamManager : public MonoBehaviour
{
public:
    // Static fields
    // static bool s_EverInitialized;
    // static SteamManager* s_instance;

    uint8_t pad_0000[0x20]; // 0x0000
    SteamAPIWarningMessageHook_t* m_SteamAPIWarningMessageHook; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool m_bInitialized; // 0x0028

    // Methods
    static SteamManager* get_Instance();
    static bool get_Initialized();
    static void SteamAPIDebugTextHook(int32_t nSeverity, StringBuilder* pchDebugText);
    static void InitOnPlayMode();
    void Awake();
    void OnEnable();
    void OnDestroy();
    void Update();
    void .ctor();
};

// Namespace: <global>
class BuildVersionDisplay
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Label* buildVersionLabel; // 0x0010

    // Methods
    void .ctor(VisualElement* root);
    void SetVersionText();
    MonoString* GetReadableGfxApi();
};

// Namespace: <global>
class SpeechEvents
{
public:
    // Static fields
    // static System.Action<UnityEngine.Transform,System.String,System.Single,System.Int32> OnShowSpeechBubble;
    // static System.Action<UnityEngine.Transform> OnHideSpeechBubble;

};

// Namespace: <global>
class EndWaveUpgradeScreen : public MonoBehaviour
{
public:
    // Static fields
    // static WaitForSecondsRealtime* waitForSeconds0_1;
    // static WaitForSecondsRealtime* waitForSeconds0_15;
    // static WaitForSecondsRealtime* waitForSeconds0_25;
    // static WaitForSecondsRealtime* waitForSeconds0_35;
    // static WaitForSecondsRealtime* waitForSeconds1;

    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* endWaveUpgradeCardTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* upgradeCardsParent; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* background; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WinPopup* winPopup; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Label* waitForOtherPlayerText; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Label* selectText; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<EndWaveUpgradeScreen.EndWaveUpgradeCard> endWaveUpgradeCards; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MonoString* selectedUpgradeID; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Coroutine* screenCoroutine; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    VisualElement* <endWaveUpgradeScreen>k__BackingField; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t maxCards; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    bool wasWinPopupShown; // 0x0074

    // Methods
    VisualElement* get_endWaveUpgradeScreen();
    void set_endWaveUpgradeScreen(VisualElement* value);
    bool get_HasSelectedAnUpgrade();
    void Awake();
    void Start();
    void OnInitialized();
    void OnEndOfWaveUpgradeDraftGenerated(System.Collections.Generic.List<System.String> endOfWaveUpgradesSos);
    IEnumerator* ShowCards();
    void Setup(System.Collections.Generic.List<System.String> endOfWaveUpgradesSos);
    void SpawnEmptyCards();
    void OnUpgradeCardClicked(EndOfWaveUpgradeSO* selectedUpgrade);
    void OnScreenClosed(MonoString* winnerID, System.Collections.Generic.List<System.String> tiedWinnerIDs);
    IEnumerator* HideCards(MonoString* winnerID, System.Collections.Generic.List<System.String> tiedWinnerIDs);
    void SetInputStateOnClose();
    EndWaveUpgradeCard[][] CardIDsToCards(System.Collections.Generic.List<System.String> cardIDs);
    void OnVoteCasted(uint64_t _playerID, MonoString* _upgradeID);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Hud : public MonoBehaviour
{
public:
    // Static fields
    // static Hud* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Label* interactionLabel; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* interactionStatInfoLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    UIDocument* uiDocument; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    UIRadialProgressComponent* radialProgress; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    HudCatapult* hudCatapult; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    VisualTreeAsset* inventorySlotTemplate; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    VisualTreeAsset* inventorySpecialSlotTemplate; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VisualTreeAsset* hudObjectiveSlotTemplate; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VisualTreeAsset* enemyHealthBarTemplate; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    HudMissions* hudMissions; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Label* levelUpLabel; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sequence* levelUpSequence; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VisualElement* vignetteDamageEffect; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Tween* vignetteTween; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    UIReticleSystem* uiReticleSystem; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    UIStamina* uiStamina; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    UIHealth* uiHealthBar; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    HudDamage* hudDamage; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    HudPlayerNames* hudPlayerNames; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    HudInventoryBar* hudInventoryBar; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    HudMonsterProgressionBar* hudMonsterProgressionBar; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    HudCompass* hudCompass; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    HudSpeechBubbles* hudSpeechBubbles; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    BuildVersionDisplay* buildVersionDisplay; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    EnemyHealthBarPanel* enemyHealthBarPanel; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    ICrosshairTarget* targetShowingStat; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    UIDocument* <hudDocument>k__BackingField; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    ProgressBar* <InteractionBar>k__BackingField; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    UIWallHealthBar* <UIWallHealthBar>k__BackingField; // 0x0100

    // Methods
    UIDocument* get_hudDocument();
    void set_hudDocument(UIDocument* value);
    UIRadialProgressComponent* get_RadialProgress();
    HudCatapult* get_HudCatapult();
    ProgressBar* get_InteractionBar();
    void set_InteractionBar(ProgressBar* value);
    UIReticleSystem* get_UIReticleSystem();
    UIWallHealthBar* get_UIWallHealthBar();
    void set_UIWallHealthBar(UIWallHealthBar* value);
    EnemyHealthBarPanel* get_EnemyHealthBarPanel();
    void Awake();
    void Start();
    void Update();
    void LateUpdate();
    void OnDestroy();
    void OnInitialized();
    void OnLevelUp(int32_t obj);
    void OnHold(float _Obj);
    void ShowInteractionLabel(MonoString* _interactionMessage, MonoString* interactionInput);
    void HideInteractionLabel();
    void ShowInteractionStatInfoLabel(MonoString* statInfo, ICrosshairTarget* target);
    void UpdateInteractionStatInfoLabel(MonoString* statInfo, ICrosshairTarget* target);
    void HideInteractionStatInfoLabel();
    void ShowUI(bool _Show);
    void OnHealthChanged(float currentHealth, float currentMaxHealth, float healthChange);
    void ApplyVignetteEffect(float _time);
    void .ctor();
};

// Namespace: <global>
class HudDamage
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Hud* hud; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* damageLayer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    FirstPersonController* localPlayer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<HudDamage.ActiveLabel> activeLabels; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Camera* cachedCamera; // 0x0030

    // Methods
    void .ctor(Hud* hud);
    void Init(FirstPersonController* localPlayer);
    void LateUpdate();
    void ComputeLabelWorldPosition(ActiveLabel* active);
    void OnShowEnemyDamage(DamageResult damage, Vector3 position);
};

// Namespace: <global>
class EnemyHealthBar : public UIProgressionBar
{
public:
    uint8_t pad_0000[0x48]; // 0x0000
    Label* _name; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    VisualElement* <Container>k__BackingField; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float _maxHealth; // 0x0058

    // Methods
    VisualElement* get_Container();
    void .ctor(VisualElement* container);
    void RegisterEnemy(EnemyController* controller, float currentHealth, float maxHealth);
    void Show(bool show);
    void OnHealthChanged(float health);
};

// Namespace: <global>
class EnemyHealthBarPanel
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<EnemyController,EnemyHealthBar> _activeHealthBars; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Stack<EnemyHealthBar> _freeHealthBars; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualTreeAsset* _enemyHealthBarTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* _container; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* <Container>k__BackingField; // 0x0030

    // Methods
    VisualElement* get_Container();
    void .ctor(Hud* hud, VisualTreeAsset* enemyHealthBarTemplate);
    void AddEnemyHealthBar(EnemyController* controller, float currentHealth, float maxHealth);
    void RemoveEnemyHealthBar(EnemyController* controller);
};

// Namespace: <global>
class HudCatapult : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualElement* hudRoot; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ProgressBar* chargeBar; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Label* ammoLabel; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool isInitialized; // 0x0038

    // Methods
    void SetCharge(float _Progress);
    void Start();
    void Init();
    void OnCatapultChanged(SiegeWeapon* _Obj);
    void .ctor();
};

// Namespace: <global>
class HudCompass
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Hud* hud; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    FirstPersonController* localPlayer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* hudCompassStrip; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float pixelsPerFullRotation; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float pixelsPerDegree; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float northOffsetDegrees; // 0x0030

    // Methods
    void .ctor(Hud* hud);
    void Init(FirstPersonController* localPlayer);
    void Update();
};

// Namespace: <global>
class HudInventoryBar
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualTreeAsset* slotTemplate; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualTreeAsset* specialSlotTemplate; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Hud* hud; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InventorySystem* playerInventory; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    FirstPersonController* localPlayer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InventoryBarSlot* currentSlot; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    VisualElement* inventoryBar; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    InventoryBarSlot[][] slotElements; // 0x0048

    // Methods
    void .ctor(Hud* hud, VisualTreeAsset* _SlotTemplate, VisualTreeAsset* _SpecialSlotTemplate);
    void Init(FirstPersonController* localPlayer);
    void OnSlotChanged(int32_t _Index);
    void HandleEquipmentChanged(uint64_t _playerID, int32_t _Index, MonoString* _ItemID, int32_t _Count);
    void InitSlots();
    void UpdateSlotUI(int32_t _Index, ItemDataSO* _Item, int32_t _Count);
    void RefreshAllSlots();
};

// Namespace: <global>
class HudMissions : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* hudObjectiveSlotTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* title; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* hudMissionPanel; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualElement* objectivesSlotParent; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<ObjectiveSlot> objectiveSlots; // 0x0040

    // Methods
    void Start();
    void Init();
    void OnOnboardingCompleted();
    void OnMissionChanged(MissionData* _MissionData);
    void SetObjectives();
    void .ctor();
};

// Namespace: <global>
class ObjectiveSlot : public VisualElement
{
public:
    uint8_t pad_0000[0x2C0]; // 0x0000
    VisualElement* objectiveIcon; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    Label* objectiveLabel; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    MonoString* syncObjectiveID; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    ObjectiveDataSO* objectiveDataSO; // 0x02D8

    // Methods
    void Init(ObjectiveData* _ObjectiveData, bool _isBig);
    void OnTrackedObjectiveChanged(ObjectiveData* _ObjectiveData);
    void .ctor();
};

// Namespace: <global>
class HudMonsterProgressionBar
{
public:
    // Static fields
    // static float BLINK_INTERVAL;

    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<HudMonsterProgressionBar.ProgressState,System.Action> _stateExecution; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<HudMonsterProgressionBar.ProgressState> _stateOrder; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* _monsterProgressBar; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* _monsterCountBanner; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* _monsterIcon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Label* _monsterCountLabel; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Label* _waveLabel; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Tween* _blinkTween; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Tween* _bannerCountTween; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool _readyToDisplayBanner; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t _currentStateIndex; // 0x005C

    // Methods
    ProgressState get_CurrentState();
    ProgressState get_NextState();
    void .ctor(Hud* hud);
    void Init();
    void OnWaveIndexUpdated(int32_t index);
    void OnWaveProgressUpdated(int32_t enemyKilled, int32_t totalEnemyInWave);
    void ChangeProgressBarColor(Color color);
    void AnimateBannerCount(float translateY, float scaleY);
    void GoToState(ProgressState state);
    void WaitingState();
    void BlinkingState();
    void CountingEnemyState();
    void OnCountdown(float progress);
};

// Namespace: <global>
class HudPlayerNames
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Hud* hud; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* playerNamesLayer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    FirstPersonController* localPlayer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<FirstPersonController,UnityEngine.UIElements.Label> activeNames; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float heightOffset; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float maxVisibilityDistance; // 0x0034

    // Methods
    void .ctor(Hud* hud);
    void Init(FirstPersonController* localPlayer);
    void LateUpdate();
    void AddPlayerName(FirstPersonController* player);
    void RemovePlayerName(FirstPersonController* player);
    void HandlePlayerSpawned(FirstPersonController* player);
    void HandlePlayerDespawned(FirstPersonController* player);
};

// Namespace: <global>
class HudSpeechBubbles
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* bubblesLayer; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Hud* hud; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<UnityEngine.Transform,HudSpeechBubbles.ActiveBubble> activeBubbles; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Queue<HudSpeechBubbles.ActiveBubble> bubblePool; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Camera* cachedCamera; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float heightOffset; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float minVisibilityDistance; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float maxVisibilityDistance; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float minScale; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float maxScale; // 0x0048

    // Methods
    void .ctor(Hud* hud);
    void Init();
    void ShowMessage(Transform* npcTransform, MonoString* message, float speed, int32_t bubbleMaxWidth);
    void HideMessage(Transform* npcTransform);
    void LateUpdate();
    void Dispose();
    ActiveBubble* CreateNewBubble();
};

// Namespace: <global>
class UIHealth : public UIProgressionBar
{
public:

    // Methods
    void .ctor(Hud* hud);
    void Init(FirstPersonController* localPlayer);
    void OnValueChanged(float currentHealth, float currentMaxHealth, float healthChange);
};

// Namespace: <global>
class UIProgressionBar
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* barContainer; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* mainBar; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* ghostBar; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* valuesLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Tween* mainTween; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Tween* ghostTween; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float lastprogressionValue; // 0x0040

    // Methods
    void OnValueChanged(float currentValue, float currentMaxValue, bool _isInstant);
    void .ctor();
};

// Namespace: <global>
class UIStamina : public UIProgressionBar
{
public:

    // Methods
    void .ctor(Hud* hud);
    void Init(FirstPersonController* localPlayer);
    void OnValueChanged(float currentStamina, float currentMaxStamina, bool _isInstant);
};

// Namespace: <global>
class UIMetaCurrency : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualElement* metaCurrencyContainer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* icon; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Label* text; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Tween* currentTween; // 0x0038

    // Methods
    IEnumerator* Start();
    void OnDestroy();
    void Init();
    void OnMoneyChange(int32_t _Arg1, int32_t _Arg2);
    void .ctor();
};

// Namespace: <global>
class UIReticleSystem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Hud* hud; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    FirstPersonController* localPlayer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* reticleSystemElement; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* reticleIdle; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* reticleCombat; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualElement* reticleDefensive; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    VisualElement* reticleHit; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Tween* reticleHitTween; // 0x0048

    // Methods
    void .ctor(Hud* _hud);
    void Init(FirstPersonController* _localPlayer);
    void ShowReticleHit();
    void RefreshReticle();
    void HideReticles();
    void OnIsDefendingChanged(bool _defending);
    void OnEquippedItemChanged(EquippedItem* _item);
};

// Namespace: <global>
class ChestUI
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InventoryScreen* inventoryScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InventoryContainer* container; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* chestVe; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* chestSlotParent; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Label* chestName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualElement* ChestContainer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<ItemSlotBase> ChestSlots; // 0x0040

    // Methods
    void .ctor(InventoryScreen* _InventoryScreen, MonoString* _BagContainerID);
    void Init();
    void SetContainer(InventoryContainer* _Container);
    void Dispose();
    void Show();
    void Hide();
    void RefreshAllSlots();
    void HandleInventoryChanged(int32_t _Index, MonoString* _ItemID, int32_t _Count);
    void OnInventorySizeChanged(int32_t _NewSize);
    void UpdateSlotUI(ItemDataSO* _Item, int32_t _Count, ItemSlotBase* _InventorySlot);
};

// Namespace: <global>
class InventoryBagUI
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InventoryScreen* inventoryScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    FirstPersonController* player; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* inventoryBagVE; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* equipementSlotParent; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* bagContainer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<ItemSlotBase> inventorySlots; // 0x0038

    // Methods
    void .ctor(InventoryScreen* _inventoryScreen, MonoString* _bagContainerID);
    void Init(FirstPersonController* _Player);
    void SetPlayer(FirstPersonController* _player);
    void Dispose();
    void Show();
    void Hide();
    void RefreshAllSlots();
    void HandleInventoryChanged(uint64_t _playerID, int32_t _Index, MonoString* _ItemID, int32_t _Count);
    void OnInventorySizeChanged(int32_t _NewSize);
    void UpdateSlotUI(ItemDataSO* _Item, int32_t _Count, ItemSlotBase* _InventorySlot);
};

// Namespace: <global>
class InventoryScreen : public MonoBehaviour
{
public:
    // Static fields
    // static InventoryScreen* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* inventorySlotTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* inventoryScreen; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    FirstPersonController* player; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InventorySystem* playerInventory; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FirstPersonController* otherPlayer; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    InventoryContainer* inventoryContainer; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RogueLikeUpgradeMenu* rogueLikeUpgradeMenu; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VisualElement* ghostIcon; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ItemSlotBase* originalSlot; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ItemSlotBase* selectedSlot; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    InventoryBagUI* playerInventoryBagUI; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    UIDocument* <hudDocument>k__BackingField; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Action<ItemSlotBase,ItemSlotBase> OnDrop; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    bool isDragging; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    InventoryScreenModes <currentInventoryScreenMode>k__BackingField; // 0x008C

    // Methods
    UIDocument* get_hudDocument();
    void set_hudDocument(UIDocument* value);
    InventoryScreenModes get_currentInventoryScreenMode();
    void set_currentInventoryScreenMode(InventoryScreenModes value);
    VisualTreeAsset* get_InventorySlotTemplate();
    void add_OnDrop(System.Action<ItemSlotBase,ItemSlotBase> value);
    void remove_OnDrop(System.Action<ItemSlotBase,ItemSlotBase> value);
    void Awake();
    void Start();
    void OnDestroy();
    void Init();
    void OnInputStateChanged(InputState oldState, InputState newState);
    void OpenInventoryScreen(InventoryScreenModes _inventoryScreenMode);
    void CloseInventoryScreen(bool setState);
    void RegisterNewSlot(ItemSlotBase* _Slot);
    void HandleSlotClicked(ItemSlotBase* _slot);
    void UnSelectSlot();
    void HandleDrop(ItemSlotBase* _OriginalSlot, ItemSlotBase* _ClosestSlot);
    void OnPointerDown(Vector2 _Position, ItemSlotBase* _Slot);
    void OnPointerMove(PointerMoveEvent* _Evt);
    void OnPointerUp(PointerUpEvent* _Evt);
    System.Collections.Generic.IEnumerable<ItemSlotBase> GetValidDropTargets();
    void SetGhostIconPosition(Vector2 _Position);
    void OnOpenInventory();
    void OnCloseInventory();
    void HandlePlayerDeath();
    void .ctor();
};

// Namespace: <global>
struct InventoryScreenModes
{
public:
    // Static fields
    // static InventoryScreenModes BaseInventory;
    // static InventoryScreenModes Shop;
    // static InventoryScreenModes Chest;
    // static InventoryScreenModes OTHER_PLAYER_INVENTORY;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ShopUI
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InventoryScreen* inventoryScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* shopVE; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* slotListParent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<ItemSlotBase> shopSlots; // 0x0028

    // Methods
    void .ctor(InventoryScreen* _inventoryScreen);
    void SetUpItems(System.Collections.Generic.List<ItemDataSO> _ItemDataSos);
    void Init();
    void Show();
    void Hide();
    void UpdateSlotUI(ItemDataSO* _Item, int32_t _Count, ItemSlotBase* _InventorySlot);
};

// Namespace: <global>
class ChestSlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x308]; // 0x0000
    InventoryContainer* <Container>k__BackingField; // 0x0308

    // Methods
    bool get_IsDraggable();
    InventoryContainer* get_Container();
    void set_Container(InventoryContainer* value);
    void Init(int32_t _Index);
    void SetContainer(InventoryContainer* _Container);
    void .ctor();
};

// Namespace: <global>
class InventorySlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x308]; // 0x0000
    uint64_t playerID; // 0x0308

    // Methods
    bool get_IsDraggable();
    void Init(int32_t _Index);
    void SetPlayerID(uint64_t _playerID);
    void .ctor();
};

// Namespace: <global>
class ItemSlotBase : public VisualElement
{
public:
    // Static fields
    // static float DragThreshold;

    uint8_t pad_0000[0x2C0]; // 0x0000
    VisualElement* SlotIcon; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    Label* StackLabel; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    Label* SlotIndexLabel; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    ItemDataSO* <ItemDataSO>k__BackingField; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    System.Action<UnityEngine.Vector2,ItemSlotBase> OnStartDrag; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    System.Action<ItemSlotBase> OnClicked; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    int32_t <SlotIndex>k__BackingField; // 0x02F0
    uint8_t pad_02F1[0x3]; // 0x02F1
    int32_t <ItemQuantity>k__BackingField; // 0x02F4
    uint8_t pad_02F5[0x3]; // 0x02F5
    bool isPointerDown; // 0x02F8
    bool dragStarted; // 0x02F9
    uint8_t pad_02FA[0x2]; // 0x02FA
    Vector2 pointerDownPos; // 0x02FC

    // Methods
    ItemDataSO* get_ItemDataSO();
    void set_ItemDataSO(ItemDataSO* value);
    int32_t get_SlotIndex();
    void set_SlotIndex(int32_t value);
    int32_t get_ItemQuantity();
    void set_ItemQuantity(int32_t value);
    void add_OnStartDrag(System.Action<UnityEngine.Vector2,ItemSlotBase> value);
    void remove_OnStartDrag(System.Action<UnityEngine.Vector2,ItemSlotBase> value);
    void add_OnClicked(System.Action<ItemSlotBase> value);
    void remove_OnClicked(System.Action<ItemSlotBase> value);
    bool get_IsDraggable();
    void InitBase(int32_t _index);
    void OnClick(ClickEvent* _evt);
    void OnPointerDown(PointerDownEvent* _evt);
    void OnPointerMove(PointerMoveEvent* _evt);
    void OnPointerUp(PointerUpEvent* _evt);
    void OnPointerCancel(PointerCancelEvent* _evt);
    void Set(ItemDataSO* _ItemDataSO, int32_t _Qty);
    void Remove();
    void SetContentVisibility(bool _visible);
    void .ctor();
};

// Namespace: <global>
class ShopSlot : public ItemSlotBase
{
public:

    // Methods
    bool get_IsDraggable();
    void Init(int32_t index);
    void .ctor();
};

// Namespace: <global>
class LoadingScreen : public MonoBehaviour
{
public:
    // Static fields
    // static WaitForSeconds* _waitForSeconds_02;
    // static WaitForSeconds* _waitForSeconds_04;
    // static LoadingScreen* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Label* _loadingLabel; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* _root; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* _loadingScreenElement; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Coroutine* _screenCoroutine; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Coroutine* _labelCoroutine; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t _dotsCount; // 0x0048

    // Methods
    void Awake();
    IEnumerator* LoadingAnimation();
    IEnumerator* HideScreen(Action* onAnimationEnded);
    IEnumerator* ShowScreen(Action* onAnimationEnded);
    void ShowLoadingScreen(bool show, Action* onAnimationEnded);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ConnectionRoleScreen
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MainMenu* mainMenu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* connectionRoleScreen; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Button* hostButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* joinButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* returnButton; // 0x0030

    // Methods
    void .ctor(MainMenu* mainMenu);
    void Show(bool show);
    void OnHostClicked();
    void OnJoinClicked();
    void OnReturnClicked();
};

// Namespace: <global>
class GlobalMissionButton : public VisualElement
{
public:
    uint8_t pad_0000[0x2C0]; // 0x0000
    IGlobalUnlockable* globalUnlockable; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    MetaProgressManager* metaProgressManager; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    VisualElement* missionIcon; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    Label* missionDescription; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    Label* missionProgressText; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    ProgressBar* missionProgressBar; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    Label* missionRewardText; // 0x02F0
    uint8_t pad_02F1[0x7]; // 0x02F1
    VisualElement* validationIcon; // 0x02F8
    uint8_t pad_02F9[0x7]; // 0x02F9
    Button* missionGetRewardButton; // 0x0300
    uint8_t pad_0301[0x7]; // 0x0301
    VisualElement* missionGetRewardParent; // 0x0308
    uint8_t pad_0309[0x7]; // 0x0309
    System.Action<IGlobalUnlockable,GlobalMissionButton> OnClicked; // 0x0310
    uint8_t pad_0311[0x7]; // 0x0311
    VisualElement* <Slot>k__BackingField; // 0x0318

    // Methods
    void add_OnClicked(System.Action<IGlobalUnlockable,GlobalMissionButton> value);
    void remove_OnClicked(System.Action<IGlobalUnlockable,GlobalMissionButton> value);
    VisualElement* get_Slot();
    void set_Slot(VisualElement* value);
    void Init(IGlobalUnlockable* _GlobalUnlockable, MetaProgressManager* _MetaProgressManager);
    void RefreshButton();
    void GetReward();
    void OnClick(ClickEvent* _Evt);
    void .ctor();
};

// Namespace: <global>
class GlobalMissionMenu : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* missionButtonTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GlobalMissionMenuCurrent* missionMenuCurrent; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerArchetypeDatabaseSO* archetypeDatabase; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<IGlobalUnlockable> globalUnlockables; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MainMenu* mainMenu; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UpgradeManager* upgradeManager; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    MetaProgressManager* metaProgressManager; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VisualElement* menuParent; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VisualElement* returnButton; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    VisualElement* itemsButtonListParent; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    VisualElement* tomesButtonListParent; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VisualElement* characterButtonListParent; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GlobalMissionSO* currentMission; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GlobalMissionButton* currentMissionButton; // 0x0088

    // Methods
    void Init(MainMenu* _MainMenu);
    void Show(bool _Show);
    int32_t GetClaimableMissionCount();
    System.Collections.Generic.List<IGlobalUnlockable> GetClosestMissionsToUnlock(int32_t count);
    void RetrieveMissions();
    void InitUI();
    void CreateMissionButtons();
    VisualElement* GetContainer(MissionCategory _Category);
    void UpdateSelection(GlobalMissionButton* _Button);
    void ShowMission(IGlobalUnlockable* _GlobalUnlockable, GlobalMissionButton* _Button);
    void SetDisplay(VisualElement* _Element, bool _Visible);
    void CloseMenu();
    void .ctor();
};

// Namespace: <global>
class GlobalMissionMenuCurrent : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    IGlobalUnlockable* currentUnlockable; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* missionIcon; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Label* missionTitle; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Label* missionOrigin; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Label* missionReward; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    VisualElement* missionProgressParent; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Label* missionProgressText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ProgressBar* missionProgressBar; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VisualElement* objectiveIcon; // 0x0060

    // Methods
    void Init();
    void ShowMission(IGlobalUnlockable* _GlobalUnlockable, MetaProgressManager* _MetaProgressManager);
    void ResetUpgradeDisplay();
    void ShowCompletedMission(IGlobalUnlockable* _GlobalUnlockable, MetaProgressManager* _MetaProgressManager);
    void ShowUncompletedMission(IGlobalUnlockable* _GlobalUnlockable, MetaProgressManager* _MetaProgressManager);
    void SetMission(IGlobalUnlockable* _GlobalUnlockable, MetaProgressManager* _MetaProgressManager);
    void SetDisplay(VisualElement* _Element, bool _Visible);
    void .ctor();
};

// Namespace: <global>
class GlobalMissionRecap : public VisualElement
{
public:
    uint8_t pad_0000[0x2C0]; // 0x0000
    Label* missionRewardLabel; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    Label* missionDescriptionLabel; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    Label* missionProgressLabel; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    ProgressBar* missionProgressBar; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    VisualElement* missionIcon; // 0x02E0

    // Methods
    void Init(IGlobalUnlockable* mission, MetaData* _Data);
    void .ctor();
};

// Namespace: <global>
class LobbyBrowserScreen
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MainMenu* mainMenu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* lobbyBrowserScreen; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Button* quitButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* refreshLobbiesButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ScrollView* lobbyScrollView; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UnityEngine.UIElements.Button> lobbyButtons; // 0x0038

    // Methods
    void .ctor(MainMenu* mainMenu);
    void Init();
    void Show(bool show);
    void OnLobbyDataUpdated(uint64_t lobbyID);
    void RefreshLobbyList();
    void OnLobbyClicked(FriendLobbyInfo* _lobby);
    void OnQuitBtnClicked();
    void OnRefreshBtnClicked();
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
};

// Namespace: <global>
class MainMenuScreen
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MainMenu* mainMenu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* mainMenuScreen; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Button* singlePlayerButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* multiplayerButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* upgradeButton; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Button* missionButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Button* settingsButton; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Button* quitButton; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Button* discordButton; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Button* wishlistButton; // 0x0058

    // Methods
    void .ctor(MainMenu* mainMenu);
    void OnDiscordClicked();
    void OnWishlistlicked();
    void Show(bool show);
    void OnSinglePlayerClicked();
    void OnMultiplayerClicked();
    void OnUpgradeClicked();
    void OnMissionClicked();
    void OnSettingsClicked();
    void OnQuitClicked();
};

// Namespace: <global>
class IGlobalUnlockable
{
public:

    // Methods
    MonoString* get_ID();
    MissionCategory get_Category();
    GlobalMissionSO* get_GlobalMission();
    bool get_Unlockable();
    int32_t get_MetaCurrencyCost();
    MonoString* GetLocalizedTitle();
    MonoString* GetLocalizedDescription();
    bool CanUnlock(MetaData* _Data);
    Sprite* get_Icon();
};

// Namespace: <global>
class UIUnlockUpgradeMenu : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    PlayerArchetypeDatabaseSO* archetypeDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* upgradeButtonTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<IGlobalUnlockable> unlockables; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MainMenu* mainMenu; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    UpgradeManager* upgradeManager; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    VisualElement* returnButton; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Button* buyUpgradeButton; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VisualElement* menuParent; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VisualElement* itemsButtonListParent; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    VisualElement* tomesButtonListParent; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    VisualElement* charactersButtonListParent; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    UnlockUpgradeButton* currentUpgrade; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VisualElement* upgradeObjectiveIcon; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Label* upgradeTitle; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Label* upgradeDescription; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Label* upgradePriceText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    VisualElement* upgradeMissionProgressParent; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ProgressBar* upgradeMissionProgressBar; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    UnlockUpgradeButton* currentButtonSelected; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    IGlobalUnlockable* currentUnlockableShown; // 0x00B8

    // Methods
    void Init(MainMenu* _MainMenu);
    void Show(bool _Show);
    int32_t GetBuyableUnlockablesCount();
    void InitUnlockables();
    void InitUI();
    void CreateUpgradeButtons();
    VisualElement* GetContainer(MissionCategory _Category);
    void OnTabChanged(Tab* _Tab1, Tab* _Tab2);
    void ResetUpgradeDisplay();
    void ShowUpgrade(IGlobalUnlockable* _Unlockable, UnlockUpgradeButton* _Button);
    void ShowUnlockedUpgrade(IGlobalUnlockable* _Unlockable);
    void ShowLockedUpgrade(IGlobalUnlockable* _Unlockable);
    void ShowMissionUpgrade(IGlobalUnlockable* _Unlockable);
    void ShowSimpleCost(IGlobalUnlockable* _Unlockable);
    void UpdateSelection(UnlockUpgradeButton* _Button);
    void SetIcon(IGlobalUnlockable* _Unlockable);
    void SetDisplay(VisualElement* _Element, bool _Visible);
    void TryUnlockUpgrade();
    void CloseMenu();
    void .ctor();
};

// Namespace: <global>
class UnlockUpgradeButton : public VisualElement
{
public:
    uint8_t pad_0000[0x2C0]; // 0x0000
    VisualElement* slotIcon; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    VisualElement* unlockableElement; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    Label* priceLabel; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    UpgradeManager* upgradeManager; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    IGlobalUnlockable* unlockable; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    System.Action<IGlobalUnlockable,UnlockUpgradeButton> OnClicked; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    VisualElement* <Slot>k__BackingField; // 0x02F0

    // Methods
    void add_OnClicked(System.Action<IGlobalUnlockable,UnlockUpgradeButton> value);
    void remove_OnClicked(System.Action<IGlobalUnlockable,UnlockUpgradeButton> value);
    VisualElement* get_Slot();
    void set_Slot(VisualElement* value);
    void Init(UpgradeManager* _UpgradeManager, bool _CanClick);
    void SetUpgrade(IGlobalUnlockable* _Unlockable);
    void RefreshButton();
    void OnClick(ClickEvent* _Evt);
    void .ctor();
};

// Namespace: <global>
class InventoryPopupController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* ugradeInventoryPopup; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualTreeAsset* inventorySlotTemplate; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* tomesGrid; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* itemsGrid; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Tween* showTween; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,InventoryPopupController.InventorySlot> activeSlots; // 0x0038

    // Methods
    void .ctor(VisualElement* rogueLikeUpgradeScreen, VisualTreeAsset* inventorySlotTemplate);
    void Show(bool show, float duration, float delay);
    void RefreshInventoryUI();
    void AddOrUpdateSlot(MonoString* itemId, MonoString* levelText, VisualElement* parentGrid);
};

// Namespace: <global>
class InventorySlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x308]; // 0x0000
    uint64_t playerID; // 0x0308

    // Methods
    bool get_IsDraggable();
    void Init(int32_t _Index);
    void SetPlayerID(uint64_t _playerID);
    void .ctor();
};

// Namespace: <global>
class RogueLikeUpgradeMenu : public MonoBehaviour
{
public:
    // Static fields
    // static WaitForSecondsRealtime* _waitForSeconds0_3;

    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* statRowTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* inventorySlotTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RaritySpriteGroup _backgroundSprites; // 0x0030
    uint8_t pad_0031[0x27]; // 0x0031
    RaritySpriteGroup _iconBackgroundSprites; // 0x0058
    uint8_t pad_0059[0x27]; // 0x0059
    System.Collections.Generic.Dictionary<UpgradeRarity,UnityEngine.Sprite> _backgroundRarityMap; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.Dictionary<UpgradeRarity,UnityEngine.Sprite> _iconBackgroundRarityMap; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    UpgradePopupController* upgradePopupController; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    StatsPopupController* statsController; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    InventoryPopupController* inventoryPopupController; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    RogueLikeUpgradeOption* _rerollOption; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    RogueLikeUpgradeOption* _skipOption; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Label* waitForOtherPlayerText; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Label* selectText; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    VisualElement* background; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    VisualElement* backgroundNoFade; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    UpgradeDraftChoice selectedUpgrade; // 0x00D8
    uint8_t pad_00D9[0xF]; // 0x00D9
    Coroutine* hideCoroutine; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Tween* hideStatsAndInventoryTween; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Coroutine* _rerollCoroutine; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    VisualElement* <rogueLikeUpgradeScreen>k__BackingField; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    bool isMenuOpen; // 0x0108
    bool hasSkip; // 0x0109

    // Methods
    VisualElement* get_rogueLikeUpgradeScreen();
    void set_rogueLikeUpgradeScreen(VisualElement* value);
    bool get_IsUpgradeSelected();
    void Awake();
    void Start();
    void OnInitialized();
    void OnUpgradeDraftGenerated(System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice> upgradeDraftChoices);
    void ShowSelectLabel(bool show);
    Sprite* GetBackgroundSprite(UpgradeRarity rarity);
    Sprite* GetIconBackgroundSprite(UpgradeRarity rarity);
    void ShowOnlyStatsAndInventory(bool show, float duration, bool isBackgroundFading);
    void OnRerollClicked();
    IEnumerator* Reroll();
    void OnSkipClicked();
    void EnableOptions(bool enable);
    void ShowWaitLabel(bool show);
    void ShowControllers(bool show, float duration, float delay);
    void ShowUpgradeScreen();
    IEnumerator* HideUpgradeScreen();
    void OnUpgradeClicked(UpgradeDraftChoice _DraftChoice);
    void OnScreenClosed();
    MonoString* GetLocalizedOption(MonoString* _EntryKey, Object[][] _Args);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class RogueLikeUpgradeOption
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* _onButtonClicked; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Label* _countLabel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Label* _textLabel; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* _button; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Tween* _hoverTween; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Tween* _clickTween; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool _isCursorInside; // 0x0040
    bool _isInteractable; // 0x0041
    uint8_t pad_0042[0x2]; // 0x0042
    int32_t _remainingClick; // 0x0044

    // Methods
    bool get_IsInteractable();
    void set_IsInteractable(bool value);
    void .ctor(VisualElement* root, MonoString* name, int32_t clickCount, Action* onButtonClicked);
    void RefreshCounter();
    void OnButtonClicked(MouseUpEvent* evt);
    void OnPointerEnter(PointerEnterEvent* evt);
    void OnPointerLeave(PointerLeaveEvent* evt);
    void CreateHoverTween(float scale, float duration, Ease scaleEase);
    void CreateClickTween(float duration);
    void SetTextLabel(MonoString* text);
};

// Namespace: <global>
class StatsPopupController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* statsPopup; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* statsParent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualTreeAsset* statRowTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Tween* showTween; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.String,StatRow> activeStatRows; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t emptyRowCount; // 0x0038

    // Methods
    void .ctor(VisualElement* rogueLikeUpgradeScreen, VisualTreeAsset* statRowTemplate);
    void Show(bool show, float duration, float delay);
    void InitStatsUI();
    void RefreshStatsUI();
    static void HandleStats(System.Action<System.String,System.String> handleStat);
    void AddStat(MonoString* statId, MonoString* value);
    void UpdateStat(MonoString* statId, MonoString* value);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
};

// Namespace: <global>
class StatRow
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* root; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Label* nameLabel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Label* valueLabel; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Tween* showTween; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool <IsEmpty>k__BackingField; // 0x0030

    // Methods
    bool get_IsEmpty();
    void set_IsEmpty(bool value);
    void .ctor(VisualElement* rootElement);
    void Setup(MonoString* statName, MonoString* initialValue);
    void SetupEmpty();
    void UpdateValue(MonoString* newValue);
    void Show(float duration, float delay);
};

// Namespace: <global>
class UpgradeManager : public MonoBehaviour
{
public:
    // Static fields
    // static UpgradeManager* <Instance>k__BackingField;

    uint8_t pad_0000[0x20]; // 0x0000
    RogueLikeDatabaseSO* database; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Data* data; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.String> OnUpgradeAcquired; // 0x0030

    // Methods
    static UpgradeManager* get_Instance();
    static void set_Instance(UpgradeManager* value);
    RogueLikeDatabaseSO* get_Database();
    int32_t get_SkipStartCount();
    int32_t get_RerollStartCount();
    void Init(Data* _Data);
    void UnlockUpgrade(IGlobalUnlockable* _Unlockable);
    bool IsItemUnlocked(IGlobalUnlockable* _Unlockable);
    System.Collections.Generic.List<RogueLikeUpgradeSO> GetAvailableUpgrades(UpgradeCategory upgradeCategory);
    void Awake();
    void .ctor();
};

// Namespace: <global>
class UpgradePopupController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RogueLikeUpgradeMenu* _rogueLikeUpgradeMenu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* rogueLikeUpgradePopup; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Tween* showTween; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<UpgradePopupController.UpgradeButton> upgradeButtons; // 0x0028

    // Methods
    void .ctor(RogueLikeUpgradeMenu* rogueLikeUpgradeMenu, System.Action<RogueLikeUpgradeManager.UpgradeDraftChoice> onUpgradeClicked);
    void Show(bool show, float duration, float delay);
    void ShowUpgrades(float duration, float initialDelay);
    void HideUnselectedUpgrades(UpgradeDraftChoice selectedUpgrade, float duration);
    void Setup(System.Collections.Generic.List<RogueLikeUpgradeManager.UpgradeDraftChoice> upgradeDraftChoices);
};

// Namespace: <global>
class CharacterSelectionPopup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RunSetupScreen* runSetupScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* characterSelectionPopup; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* characterSelectionParent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* characterSelectionSlotTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualElement* characterInfoPopup; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualElement* charInfoIcon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Label* charInfoName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Label* charInfoDescription; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.Dictionary<PlayerClass,CharSelectionSlot> characterSlots; // 0x0050

    // Methods
    void .ctor(RunSetupScreen* runSetupScreen, VisualTreeAsset* characterSelectionSlotTemplate);
    void Init(PlayerArchetypeDatabaseSO* archetypeDatabase, System.Action<PlayerArchetypeSO> onCharSlotClicked);
    void HandleSlotSelection(PlayerArchetypeSO* playerArchetypeSO);
    void UpdateInfoPanel(PlayerArchetypeSO* playerArchetypeSO);
};

// Namespace: <global>
class CharSelectionSlot
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* root; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* slotIcon; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* characterSlotSelection; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* nameLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerArchetypeSO* playerArchetypeSO; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<PlayerArchetypeSO> onClickCallback; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool isTeased; // 0x0040
    bool isUnlocked; // 0x0041

    // Methods
    void .ctor(VisualElement* rootElement, System.Action<PlayerArchetypeSO> onClick);
    void Setup(PlayerArchetypeSO* playerArchetypeSO, bool unlocked);
    void SetupTeased(Sprite* teasedCharacterSprite);
    void SelectSlot(bool select);
    void OnClicked(ClickEvent* evt);
};

// Namespace: <global>
class DifficultySelectionPopup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RunSetupScreen* runSetupScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* difficultyPopup; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* difficultyButtonsContainerParent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* difficultyButtonTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<RunDifficultyButton> difficultyButtons; // 0x0030

    // Methods
    void .ctor(RunSetupScreen* runSetupScreen, VisualTreeAsset* difficultyButtonTemplate);
    void Init(System.Action<DifficultyLevel> onButtonClicked);
    void UpdateSelection(DifficultyLevel selectedLevel);
};

// Namespace: <global>
class RunDifficultyButton
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* root; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* checkContent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Label* nameLabel; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* metaLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<DifficultyLevel> onClickCallback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DifficultyLevel difficultyLevel; // 0x0038

    // Methods
    DifficultyLevel get_DifficultyLevel();
    void .ctor(VisualElement* rootElement, System.Action<DifficultyLevel> onClick);
    void Setup(DifficultyLevel difficultyLevel, MonoString* localizedDifficultyString, MonoString* localizedDifficultyTier);
    void SetSelectedVisuals(bool isSelected);
    void OnClicked(ClickEvent* evt);
};

// Namespace: <global>
class MapSelectionPopup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RunSetupScreen* runSetupScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* mapSelectionPopup; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* mapSlotParent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* mapSlotTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.String,MapSelectionSlot> mapSelectionSlots; // 0x0030

    // Methods
    void .ctor(RunSetupScreen* runSetupScreen, VisualTreeAsset* mapSlotTemplate);
    void Init(MapDatabaseSO* mapDatabase, System.Action<MapSO> onMapSlotClicked);
    void HandleSlotSelection(MapSO* mapSO);
};

// Namespace: <global>
class MapSelectionSlot
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* root; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* mapSlotIcon; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* mapSlotSelection; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* mapNameLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Label* mapDescriptionLabel; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MapSO* mapSO; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<MapSO> onClickCallback; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    bool isTeased; // 0x0048

    // Methods
    void .ctor(VisualElement* rootElement, System.Action<MapSO> onClick);
    void Setup(MapSO* mapSO);
    void SetupTeased(Sprite* teasedCharacterSprite);
    void SelectSlot(bool select);
    void OnClicked(ClickEvent* evt);
};

// Namespace: <global>
class RunSetupPlayerNames
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RunSetupScreen* runSetupScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* playerNamesLayer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<LobbyPlayer,UnityEngine.UIElements.Label> activeNames; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float heightOffset; // 0x0028

    // Methods
    void .ctor(RunSetupScreen* runSetupScreen);
    void Init();
    void LateUpdate();
    void AddPlayerName(LobbyPlayer* player);
    void RemovePlayerName(LobbyPlayer* player);
    void HandlePlayerSpawned(LobbyPlayer* player);
    void HandlePlayerDespawned(LobbyPlayer* player);
};

// Namespace: <global>
class RunSetupScreen : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UIDocument* mainMenuDocument; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SettingsScreen* settingsScreen; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VisualTreeAsset* characterSelectionSlotTemplate; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VisualTreeAsset* difficultyButtonTemplate; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    VisualTreeAsset* mapSlotTemplate; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    VisualElement* root; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Label* playersLabel; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VisualElement* returnButton; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VisualElement* readyButton; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    VisualElement* inviteButton; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    VisualElement* settingsButton; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Label* readyButtonLabel; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Label* countdownLabel; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    UIConfirmationPopup* confirmationPopup; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    CharacterSelectionPopup* characterSelectionPopup; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    MapSelectionPopup* mapSelectionPopup; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    RunSetupPlayerNames* runSetupPlayerNames; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DifficultySelectionPopup* difficultySelectionPopup; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    BuildVersionDisplay* buildVersionDisplay; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Nullable<System.Boolean> lastReadyState; // 0x00B8

    // Methods
    VisualElement* get_Root();
    void Awake();
    void Start();
    void Update();
    void LateUpdate();
    void OpenSettingsMenu(bool show);
    void UpdateCountdownText(float timeRemaining, bool isRunning);
    void SetPlayerLabel();
    void OnMapSlotClicked(MapSO* mapSo);
    void ForceFirstChar();
    void OnCharSlotClicked(PlayerArchetypeSO* archetypeSo);
    void OnDifficultyButtonClicked(DifficultyLevel difficultyLevel);
    void OnDifficultySynced(DifficultyLevel difficultyLevel);
    void OnMapIdSynced(MapSO* mapSo);
    void OnReturnConfirmation();
    void OnReturnClicked();
    void OnReadyClicked();
    void OnInviteClicked();
    void OnSettingsClicked();
    void UpdateReadyButtonUI();
    MonoString* GetLocalizedString(MonoString* tableName, MonoString* _EntryKey);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    void .ctor();
};

// Namespace: <global>
class AudioTabSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SettingsScreen* settingsScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AudioSettingsData* audioSettingsData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioSettingsControllerSO* audioSettingsControllerSo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DropdownField* microphoneDropdown; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DropdownField* micModeDropdown; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Slider* masterVolumeSlider; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Slider* sfxVolumeSlider; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Slider* musicVolumeSlider; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Slider* voiceVolumeSlider; // 0x0050

    // Methods
    void .ctor(SettingsScreen* settingsScreen, AudioSettingsData* audioSettingsData, AudioSettingsControllerSO* audioSettingsControllerSo);
    void InitializeMicrophoneDropdown();
    void InitializeMicModeDropdown();
    void OnLanguageChanged(Locale* newLocale);
    void UpdateLocalizedDropdown();
    void InitializeVolumeSliders();
    void OnMicModeChanged(UnityEngine.UIElements.ChangeEvent<System.String> evt);
    void BindVolumeSlider(Slider* slider, AudioChannelType audioChannelType, System.Action<System.Single> updateDataAction);
    void OnMicrophoneChanged(UnityEngine.UIElements.ChangeEvent<System.String> evt);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
};

// Namespace: <global>
struct MicActivationMode
{
public:
    // Static fields
    // static MicActivationMode OpenMic;
    // static MicActivationMode PushToTalk;
    // static MicActivationMode Muted;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class AudioSettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* microphoneName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MicActivationMode micActivationMode; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float masterVolume; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float soundtrackVolume; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float fxVolume; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float voiceVolume; // 0x0028

    // Methods
    void .ctor();
};

// Namespace: <global>
class GameTabSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SettingsScreen* settingsScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Tab* gameTab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameSettingsData* gameSettingsData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameSettingsControllerSO* gameSettingsControllerSo; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DropdownField* languageDropdown; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SliderInt* fpsFovSlider; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Slider* mouseSensitivitySlider; // 0x0040

    // Methods
    void .ctor(SettingsScreen* settingsScreen, GameSettingsData* gameSettingsData, GameSettingsControllerSO* gameSettingsControllerSo);
    void InitFpsFovSlider();
    void OnMouseSliderValueChanged(UnityEngine.UIElements.ChangeEvent<System.Int32> evt);
    void InitializeMouseSlider();
    void OnMouseSliderValueChanged(UnityEngine.UIElements.ChangeEvent<System.Single> evt);
    void InitializeLanguageDropdown();
    void OnLanguageValueChanged(UnityEngine.UIElements.ChangeEvent<System.String> evt);
};

// Namespace: <global>
class GameSettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* languageCode; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float monseSensitivity; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t fpsFOV; // 0x001C

    // Methods
    void .ctor();
};

// Namespace: <global>
class GraphicsTabSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SettingsScreen* settingsScreen; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GraphicsSettingsData* graphicsSettingsData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GraphicsSettingsControllerSO* graphicsSettingsControllerSo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DropdownField* windowModeDropdown; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DropdownField* resolutionDropdown; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UnityEngine.Resolution> filteredResolutions; // 0x0038

    // Methods
    void .ctor(SettingsScreen* settingsScreen, GraphicsSettingsData* graphicsSettingsData, GraphicsSettingsControllerSO* graphicsSettingsControllerSo);
    void InitializeWindowModeDropDown();
    void OnLanguageChanged(Locale* newLocale);
    void UpdateLocalizedWindowModeDropdown();
    void OnWindowModeChanged(UnityEngine.UIElements.ChangeEvent<System.String> evt);
    void InitializeResolutionDropDown();
    void OnResolutionChanged(UnityEngine.UIElements.ChangeEvent<System.String> evt);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
};

// Namespace: <global>
struct WindowModeOption
{
public:
    // Static fields
    // static WindowModeOption ExclusiveFullscreen;
    // static WindowModeOption Borderless;
    // static WindowModeOption Windowed;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class GraphicsSettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    WindowModeOption windowMode; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t screenWidth; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t screenHeight; // 0x0018

    // Methods
    void .ctor();
};

// Namespace: <global>
class SettingsControllerDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    GameSettingsControllerSO* gameSettingsControllerSO; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioSettingsControllerSO* audioSettingsControllerSO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GraphicsSettingsControllerSO* graphicsSettingsControllerSO; // 0x0028

    // Methods
    GameSettingsControllerSO* get_GameSettingsControllerSO();
    AudioSettingsControllerSO* get_AudioSettingsControllerSO();
    GraphicsSettingsControllerSO* get_GraphicsSettingsControllerSO();
    void InitSettings(SettingsData* settingsData);
    void .ctor();
};

// Namespace: <global>
class SettingsScreen : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualElement* root; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* settingsScreenElement; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameTabSettings* gameTabSettings; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioTabSettings* audioTabSettings; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GraphicsTabSettings* graphicsTabSettings; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    VisualElement* returnButton; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SettingsData* settingsData; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    SettingsControllerDatabaseSO* settingsControllerDatabaseSo; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Action* ReturnClicked; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool isOpen; // 0x0068

    // Methods
    VisualElement* get_SettingsScreenElement();
    bool get_IsOpen();
    void add_ReturnClicked(Action* value);
    void remove_ReturnClicked(Action* value);
    void Awake();
    void OnReturnClicked();
    void Init(SettingsData* settingsData, Action* onReturnClicked);
    void Show(bool show);
    void .ctor();
};

// Namespace: <global>
class SettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameSettingsData* gameSettingsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AudioSettingsData* audioSettingsData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GraphicsSettingsData* graphicsSettingsData; // 0x0020

    // Methods
    void .ctor();
};

// Namespace: <global>
class UIAimingDot : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    PlayerEquipment* playerEquipment; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* gunAimingDot; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    IAimingEquippedItem* currentAimingEquipment; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool previousCanAim; // 0x0038

    // Methods
    void Start();
    void Update();
    void OnDestroy();
    void Init();
    void OnSiegeWeaponChanged(SiegeWeapon* _Obj);
    void OnEquippedItemChanged(EquippedItem* _Obj);
    void .ctor();
};

// Namespace: <global>
class UIConfirmationPopup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* _onConfirmation; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* _onCancel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VisualElement* _popupElement; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* _root; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* _yesButton; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Button* _noButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Label* _label; // 0x0040

    // Methods
    void .ctor(VisualElement* root);
    void OnConfirmationButtonClicked(MouseUpEvent* evt);
    void OnCancelButtonClicked(MouseUpEvent* evt);
    void Hide();
    void Show(MonoString* message, MonoString* confirmText, MonoString* cancelText, Action* onConfirmation, Action* onCancel);
};

// Namespace: <global>
class UIDamage : public MonoBehaviour
{
public:
    // Static fields
    // static UIDamage* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshPro* damageTextPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Queue<TMPro.TextMeshPro> mTextPool; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<UIDamage.ActiveText> mActiveTexts; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Camera* mMainCamera; // 0x0038

    // Methods
    void Awake();
    void Start();
    void Update();
    void NewDamage(int32_t _Amount, Vector3 _WorldPos);
    void .ctor();
};

// Namespace: <global>
class UIEndGameScreen : public MonoBehaviour
{
public:
    // Static fields
    // static MonoString* LOCALIZATION_TABLE;
    // static WaitForSecondsRealtime* _waitForSeconds_025;

    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* upgradeButtonTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualTreeAsset* playerCardTemplate; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Sprite* warriorIcon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite* archerIcon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Sprite* minerIcon; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Sprite* rogueIcon; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.Dictionary<PlayerClass,UnityEngine.Sprite> _classIcons; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Label* titleLabel; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Label* inventoryLabel; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    VisualElement* separator; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    VisualElement* tomesListParent; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VisualElement* itemsListParent; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VisualElement* playerCardContainer; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    VisualElement* mainContainer; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    VisualElement* background; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    VisualElement* endGameScreen; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Button* menuButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t sentCardToServerCount; // 0x00A8

    // Methods
    void Start();
    void OnDestroy();
    void Init();
    void OnEndGame(bool _Obj);
    void RefreshInventory();
    static void ShowElement(VisualElement* element);
    static void HideElement(VisualElement* element, float verticalOffset);
    void HideElements();
    IEnumerator* ShowAnimation();
    void OnMenuButtonPointerLeave(PointerLeaveEvent* evt);
    void OnMenuButtonPointerEnter(PointerEnterEvent* evt);
    void OnClickMenuButton(MouseUpEvent* evt);
    MonoString* GetLocalizedString(MonoString* _EntryKey, Object[][] _Args);
    void RegisterNetworkHandlers();
    void UnregisterNetworkHandlers();
    void OnPlayerCardSentByClient(NetworkConnectionToClient* conn, PlayerCardMessage msg);
    void OnPlayerCardReceivedFromServer(PlayerCardMessage msg);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class EndGameInventoryButton : public VisualElement
{
public:
    uint8_t pad_0000[0x2C0]; // 0x0000
    VisualElement* upgradeIcon; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    Label* upgradeText; // 0x02C8

    // Methods
    void Init(ActiveRunUpgrade* _Upgrade);
    void .ctor();
};

// Namespace: <global>
class UIInventoryFullText : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualElement* inventoryFullContainer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Label* text; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Tween* currentTween; // 0x0030

    // Methods
    void Start();
    void OnDestroy();
    void Init();
    void OnInventoryFull();
    void .ctor();
};

// Namespace: <global>
class UIItemPrompt : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VisualTreeAsset* promptTemplate; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* root; // 0x0028

    // Methods
    void Awake();
    void Start();
    void Init();
    void OnAutoPickUpItem(ItemDataSO* _Arg1, int32_t _Arg2);
    void ShowPrompt(MonoString* _Message, Texture2D* _Icon);
    void .ctor();
};

// Namespace: <global>
class UILoadingScreen : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UIDocument* permanentUI; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* loadingScreen; // 0x0028

    // Methods
    void Show();
    void Hide();
    void Awake();
    void .ctor();
};

// Namespace: <global>
class UIPauseMenu : public MonoBehaviour
{
public:
    // Static fields
    // static UIPauseMenu* Instance;

    uint8_t pad_0000[0x20]; // 0x0000
    UIConfirmationPopup* confirmationPopup; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VisualElement* pauseScreen; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* playButton; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Button* settingsButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Button* menuButton; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Button* quitButton; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Sequence* saveCompleteSequence; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    SettingsScreen* settingsScreen; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool isInitialized; // 0x0060
    bool isPauseMenuOpen; // 0x0061

    // Methods
    bool get_IsPauseMenuOpen();
    void Start();
    void OnDestroy();
    void Init();
    void OpenSettingsMenu(bool show);
    void OpenMenu(bool _Show);
    void OnClickSettingsButton();
    void OnClickContinueButton();
    void TryForceClosePauseMenu();
    void OnPauseExitButton();
    void OnPauseEnterButton();
    void OnQuitGameConfirmation();
    void OnMainMenuConfirmation();
    void OnClickMainMenuButton();
    void OnClickQuitGameButton();
    void InitButtonsConfiguration();
    void Show(bool _Show);
    MonoString* GetLocalizedString(MonoString* tableName, MonoString* _EntryKey);
    void .ctor();
};

// Namespace: <global>
class UIRadialProgressComponent : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UIRadialProgress* radialProgress; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool isInitialized; // 0x0028

    // Methods
    void Start();
    void Init();
    void ShowRadialProgressIndicator(bool _B);
    void SetProgress(float _Progress);
    void .ctor();
};

// Namespace: <global>
class UIWallHealthBar : public UIProgressionBar
{
public:
    uint8_t pad_0000[0x48]; // 0x0000
    VisualElement* container; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    WallStats* wallStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Color maxHealthColor; // 0x0058
    uint8_t pad_0059[0xF]; // 0x0059
    Color minHealthColor; // 0x0068

    // Methods
    VisualElement* get_Container();
    void .ctor(Hud* _HUD);
    void Init();
    void Show(bool _Show);
    void OnValueChanged(float _CurrentHealth, float _MaxHealth, float _Dif);
};

// Namespace: <global>
class WinPopup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VisualElement* _mainContainer; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    VisualElement* _winPopup; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Button* _continueButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* _wishlistButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Action* _onConfirmation; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool _isWhistlistClickable; // 0x0038

    // Methods
    void .ctor(VisualElement* root);
    void OnContinueButtonPointerLeave(PointerLeaveEvent* evt);
    void OnContinueButtonPointerEnter(PointerEnterEvent* evt);
    void OnContinueClickbutton(MouseUpEvent* evt);
    void OnWishlistButtonPointerLeave(PointerLeaveEvent* evt);
    void OnWishlistButtonPointerEnter(PointerEnterEvent* evt);
    void OnClickWishlistButton(MouseUpEvent* evt);
    void Close();
    void Open(Action* onConfirmation);
};

// Namespace: <global>
class VisualElementExtensions
{
public:

    // Methods
    static VisualElement* CreateChild(VisualElement* parent, String[][] classes);
    static T CreateChild(VisualElement* parent, String[][] classes);
    static T AddTo(T child, VisualElement* parent);
    static T AddClass(T visualElement, String[][] classes);
    static T WithManipulator(T visualElement, IManipulator* manipulator);
};

// Namespace: <global>
class VFXDatabaseSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    VFXEntry[][] vfxEntries; // 0x0018

    // Methods
    void .ctor();
};

// Namespace: <global>
struct VFXEntry
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* id; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ParticleSystem* prefab; // 0x0018
};

// Namespace: <global>
class DayNightManager : public NetworkBehaviour
{
public:
    // Static fields
    // static DayNightManager* Instance;
    // static int32_t CloudCoverage1;

    uint8_t pad_0000[0x68]; // 0x0000
    DayNightSettingsSO* settings; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Light* sunLight; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Light* moonLight; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Volume* dayVolume; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Volume* nightVolume; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Material* currentSkyboxMaterial; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Action<DayNightManager.CyclePhase> OnCyclePhaseChanged; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Action<DayNightManager.CyclePhase,DayNightManager.CyclePhase> _Mirror_SyncVarHookDelegate_currentPhase; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    CyclePhase currentPhase; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    double phaseStartTime; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float dayDuration; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float nightDuration; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    bool wasPaused; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    double pauseStartTime; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float dayTransitionTimer; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    bool isReturningToDay; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float returnStartAngle; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float sunAngle; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float cloudTarget; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float visualDayNightBlend; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float dayProgress; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float nightProgress; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    bool isInitialized; // 0x00F0

    // Methods
    CyclePhase get_CurrentPhase();
    void add_OnCyclePhaseChanged(System.Action<DayNightManager.CyclePhase> value);
    void remove_OnCyclePhaseChanged(System.Action<DayNightManager.CyclePhase> value);
    void Awake();
    void Start();
    void Update();
    void Init();
    void StartNewDay(float _DayDuration, float _NightDuration);
    void OnStartWave();
    void OnEndWave();
    void UpdateProgress();
    void UpdateVisualBlend();
    void RotateSun();
    void UpdateLightSettings();
    void UpdateCloudCoverage();
    void UpdatePostProcessing();
    IEnumerator* DelayFirstStartDay(float _DayDuration, float _NightDuration);
    void ForceUpdateVisuals(bool forceZeroProgress);
    void OnSyncCurrentPhaseChanged(CyclePhase old, CyclePhase newPhase);
    void .ctor();
    static void .cctor();
    bool Weaved();
    CyclePhase get_NetworkcurrentPhase();
    void set_NetworkcurrentPhase(CyclePhase value);
    double get_NetworkphaseStartTime();
    void set_NetworkphaseStartTime(double value);
    float get_NetworkdayDuration();
    void set_NetworkdayDuration(float value);
    float get_NetworknightDuration();
    void set_NetworknightDuration(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DayNightSettingsSO : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Gradient* dayColor; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Gradient* nightColor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimationCurve* sunHeightCurve; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimationCurve* sunIntensityCurve; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimationCurve* moonIntensityCurve; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    AnimationCurve* fogStartCurve; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AnimationCurve* fogEndCurve; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Gradient* nightDayFogColor; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Material* skyboxMaterial; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float nightTransitionAdvance; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float dayTransitionDuration; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float dayNightLerpSpeed; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool enableCloudCoverage; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float minCloudCoverage; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float maxCloudCoverage; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float cloudTransitionSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float fogScale; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float sunRotationY; // 0x0080

    // Methods
    void .ctor();
};

// Namespace: <global>
class PlayerInputActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InputActionAsset* <asset>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputActionMap* m_Player; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<PlayerInputActions.IPlayerActions> m_PlayerActionsCallbackInterfaces; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InputAction* m_Player_Movement; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    InputAction* m_Player_CameraLook; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InputAction* m_Player_PrimaryAction; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputAction* m_Player_SecondaryAction; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    InputAction* m_Player_Jump; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    InputAction* m_Player_SprintHold; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    InputAction* m_Player_Interact; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputAction* m_Player_Release; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    InputAction* m_Player_HoldRelease; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    InputAction* m_Player_InventoryScroll; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    InputAction* m_Player_InventorySlot0; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    InputAction* m_Player_InventorySlot1; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    InputAction* m_Player_InventorySlot2; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    InputAction* m_Player_InventorySlot3; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    InputAction* m_Player_InventorySlot4; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    InputAction* m_Player_InventorySlot5; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    InputAction* m_Player_InventorySlot6; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    InputAction* m_Player_InventorySlot7; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    InputAction* m_Player_OpenInventory; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    InputAction* m_Player_HoldInteract; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* m_Player_PauseEnter; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    InputActionMap* m_MainMenu; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<PlayerInputActions.IMainMenuActions> m_MainMenuActionsCallbackInterfaces; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    InputActionMap* m_EndScreen; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Collections.Generic.List<PlayerInputActions.IEndScreenActions> m_EndScreenActionsCallbackInterfaces; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    InputActionMap* m_Inventory; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.List<PlayerInputActions.IInventoryActions> m_InventoryActionsCallbackInterfaces; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    InputAction* m_Inventory_CloseInventory; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    InputActionMap* m_Dead; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    System.Collections.Generic.List<PlayerInputActions.IDeadActions> m_DeadActionsCallbackInterfaces; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    InputAction* m_Dead_ChangeSpectate; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    InputAction* m_Dead_PauseEnter; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    InputActionMap* m_MissionScreen; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    System.Collections.Generic.List<PlayerInputActions.IMissionScreenActions> m_MissionScreenActionsCallbackInterfaces; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    InputAction* m_MissionScreen_CloseMissionScreen; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    InputActionMap* m_PauseMenu; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    System.Collections.Generic.List<PlayerInputActions.IPauseMenuActions> m_PauseMenuActionsCallbackInterfaces; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    InputAction* m_PauseMenu_PauseExit; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    InputActionMap* m_Catapult; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    System.Collections.Generic.List<PlayerInputActions.ICatapultActions> m_CatapultActionsCallbackInterfaces; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    InputAction* m_Catapult_CameraLook; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    InputAction* m_Catapult_Movement; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    InputAction* m_Catapult_Fire; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    InputAction* m_Catapult_Leave; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    InputAction* m_Catapult_Charging; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    InputActionMap* m_UpgradeTreeMenu; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    System.Collections.Generic.List<PlayerInputActions.IUpgradeTreeMenuActions> m_UpgradeTreeMenuActionsCallbackInterfaces; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    InputAction* m_UpgradeTreeMenu_CloseUpgradeTreeMenu; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    InputActionMap* m_RogueLikeUpgradeMenu; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    System.Collections.Generic.List<PlayerInputActions.IRogueLikeUpgradeMenuActions> m_RogueLikeUpgradeMenuActionsCallbackInterfaces; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    InputActionMap* m_IntroductionScreen; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    System.Collections.Generic.List<PlayerInputActions.IIntroductionScreenActions> m_IntroductionScreenActionsCallbackInterfaces; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    InputAction* m_IntroductionScreen_Skip; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    InputActionMap* m_AlwaysOn; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    System.Collections.Generic.List<PlayerInputActions.IAlwaysOnActions> m_AlwaysOnActionsCallbackInterfaces; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    InputAction* m_AlwaysOn_PushToTalk; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    int32_t m_KeyboardandMouseSchemeIndex; // 0x01E8
    uint8_t pad_01E9[0x3]; // 0x01E9
    int32_t m_GamepadSchemeIndex; // 0x01EC

    // Methods
    InputActionAsset* get_asset();
    void .ctor();
    void Finalize();
    void Dispose();
    System.Nullable<UnityEngine.InputSystem.InputBinding> get_bindingMask();
    void set_bindingMask(System.Nullable<UnityEngine.InputSystem.InputBinding> value);
    System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> get_devices();
    void set_devices(System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> value);
    UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControlScheme> get_controlSchemes();
    bool Contains(InputAction* action);
    System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction> GetEnumerator();
    IEnumerator* System.Collections.IEnumerable.GetEnumerator();
    void Enable();
    void Disable();
    System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding> get_bindings();
    InputAction* FindAction(MonoString* actionNameOrId, bool throwIfNotFound);
    int32_t FindBinding(InputBinding bindingMask, InputAction* action);
    PlayerActions get_Player();
    MainMenuActions get_MainMenu();
    EndScreenActions get_EndScreen();
    InventoryActions get_Inventory();
    DeadActions get_Dead();
    MissionScreenActions get_MissionScreen();
    PauseMenuActions get_PauseMenu();
    CatapultActions get_Catapult();
    UpgradeTreeMenuActions get_UpgradeTreeMenu();
    RogueLikeUpgradeMenuActions get_RogueLikeUpgradeMenu();
    IntroductionScreenActions get_IntroductionScreen();
    AlwaysOnActions get_AlwaysOn();
    InputControlScheme get_KeyboardandMouseScheme();
    InputControlScheme get_GamepadScheme();
};

// Namespace: <global>
class Crt : public VolumeComponent
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    FloatParameter* scanlinesWeight; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    FloatParameter* noiseWeight; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    FloatParameter* screenBendX; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    FloatParameter* screenBendY; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    FloatParameter* vignetteAmount; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    FloatParameter* vignetteSize; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    FloatParameter* vignetteRounding; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    FloatParameter* vignetteSmoothing; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    FloatParameter* scanlinesDensity; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    FloatParameter* scanlinesSpeed; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    FloatParameter* noiseAmount; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Vector2Parameter* chromaticRed; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Vector2Parameter* chromaticGreen; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Vector2Parameter* chromaticBlue; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    FloatParameter* grilleOpacity; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    FloatParameter* grilleCounterOpacity; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    FloatParameter* grilleResolution; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    FloatParameter* grilleCounterResolution; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    FloatParameter* grilleUvRotation; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    FloatParameter* grilleBrightness; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    FloatParameter* grilleUvMidPoint; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Vector3Parameter* grilleShift; // 0x00E0

    // Methods
    bool IsActive();
    bool IsTileCompatible();
    void .ctor();
};

// Namespace: <global>
class CRTEffectController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    VolumeProfile* volumeProfile; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Crt* crt; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool isEnabled; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float scanlinesWeight; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float noiseWeight; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float screenBendX; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float screenBendY; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float vignetteAmount; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float vignetteSize; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float vignetteRounding; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float vignetteSmoothing; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float scanLinesDensity; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float scanLinesSpeed; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float noiseAmount; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    Vector2 chromaticRed; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Vector2 chromaticGreen; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector2 chromaticBlue; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float grilleOpacity; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float grilleCounterOpacity; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float grilleResolution; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float grilleCounterResolution; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float grilleBrightness; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float grilleUvRotation; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float grilleUvMidPoint; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    Vector3 grilleShift; // 0x0094

    // Methods
    void Update();
    void SetParams();
    void .ctor();
};

// Namespace: <global>
class SaveManager : public Singleton`1
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SaveContainer* saveContainer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SaveSlotManager* saveSlotManager; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool hasDoneFinalSave; // 0x0030
    bool allowSaving; // 0x0031
    uint8_t pad_0032[0x2]; // 0x0032
    int32_t <CurrentSlotIndex>k__BackingField; // 0x0034

    // Methods
    int32_t get_CurrentSlotIndex();
    void set_CurrentSlotIndex(int32_t value);
    SaveSlotManager* get_SaveSlotManager();
    bool get_HasDoneFinalSave();
    void Awake();
    void OnApplicationQuit();
    void Init();
    void LoadSlotSave(int32_t _slotIndex);
    void MigrateLegacySave();
    bool CurrentSlotHasSave();
    bool SlotHasSave(int32_t slotIndex);
    void DeleteSaveSlot(int32_t _slotID);
    void TrySave();
    bool SaveSlotContainer(SaveContainer* _saveContainer);
    void FinalSaveOnQuit();
    void SetSavingAllowed(bool _state);
    void HandleLoadedSave(int32_t _slotIndex);
    bool IsOlderVersion(MonoString* savedVersion, MonoString* currentVersion);
    void OnGameManagerInit();
    SaveContainer* SetupNewSave();
    void .ctor();
};

// Namespace: <global>
class SaveSlotManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.Int32,SaveSlotMetadata> <SlotMetas>k__BackingField; // 0x0010

    // Methods
    System.Collections.Generic.Dictionary<System.Int32,SaveSlotMetadata> get_SlotMetas();
    void set_SlotMetas(System.Collections.Generic.Dictionary<System.Int32,SaveSlotMetadata> value);
    int32_t Init();
    System.Nullable<System.Int32> GetMostRecentSlotIndex();
    MonoString* GetMetaFilePath(int32_t _slotID);
    MonoString* GetSaveFilePath(int32_t _slotID);
    void DeleteSaveSlot(int32_t _slotID);
    void .ctor();
};

// Namespace: <global>
class SaveSlotMetadata
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* saveName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    DateTime saveTime; // 0x0018

    // Methods
    void .ctor();
};

// Namespace: <global>
class SaveUtility
{
public:

    // Methods
    static T LoadOrCreate(MonoString* key, MonoString* path, System.Func<T> createNew, bool useBackup, ES3Settings* settings);
    static bool Save(MonoString* key, T data, MonoString* path, ES3Settings* settings);
};

namespace PSX
{

    // Namespace: PSX
    class CRTRenderFeature : public ScriptableRendererFeature
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        CRTPass* crtPass; // 0x0020
    
        // Methods
        void Create();
        void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void SetupRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void .ctor();
    };

    // Namespace: PSX
    class CRTPass : public ScriptableRenderPass
    {
    public:
        // Static fields
        // static MonoString* shaderPath;
        // static MonoString* k_RenderTag;
        // static int32_t MainTexId;
        // static int32_t TempTargetId;
        // static int32_t ScanLinesWeight;
        // static int32_t NoiseWeight;
        // static int32_t ScreenBendX;
        // static int32_t ScreenBendY;
        // static int32_t VignetteAmount;
        // static int32_t VignetteSize;
        // static int32_t VignetteRounding;
        // static int32_t VignetteSmoothing;
        // static int32_t ScanLinesDensity;
        // static int32_t ScanLinesSpeed;
        // static int32_t NoiseAmount;
        // static int32_t ChromaticRed;
        // static int32_t ChromaticGreen;
        // static int32_t ChromaticBlue;
        // static int32_t GrilleOpacity;
        // static int32_t GrilleCounterOpacity;
        // static int32_t GrilleResolution;
        // static int32_t GrilleCounterResolution;
        // static int32_t GrilleBrightness;
        // static int32_t GrilleUvRotation;
        // static int32_t GrilleUvMidPoint;
        // static int32_t GrilleShift;
    
        uint8_t pad_0000[0xB0]; // 0x0000
        Crt* m_Crt; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Material* crtMaterial; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RenderTargetIdentifier currentTarget; // 0x00C0
    
        // Methods
        void .ctor(RenderPassEvent evt);
        void Execute(ScriptableRenderContext context, RenderingData renderingData);
        void Setup(RenderTargetIdentifier currentTarget);
        void Render(CommandBuffer* cmd, RenderingData renderingData);
        static void .cctor();
    };

    // Namespace: PSX
    class Dithering : public VolumeComponent
    {
    public:
        uint8_t pad_0000[0x38]; // 0x0000
        IntParameter* patternIndex; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        FloatParameter* ditherThreshold; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        FloatParameter* ditherStrength; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        FloatParameter* ditherScale; // 0x0050
    
        // Methods
        bool IsActive();
        bool IsTileCompatible();
        void .ctor();
    };

    // Namespace: PSX
    class DitheringController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        VolumeProfile* volumeProfile; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Dithering* dithering; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isEnabled; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t patternIndex; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float ditherThreshold; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float ditherStrength; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float ditherScale; // 0x0040
    
        // Methods
        void Update();
        void SetParams();
        void .ctor();
    };

    // Namespace: PSX
    class DitheringRenderFeature : public ScriptableRendererFeature
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        DitheringPass* ditheringPass; // 0x0020
    
        // Methods
        void Create();
        void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void SetupRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void .ctor();
    };

    // Namespace: PSX
    class DitheringPass : public ScriptableRenderPass
    {
    public:
        // Static fields
        // static MonoString* shaderPath;
        // static MonoString* k_RenderTag;
        // static int32_t MainTexId;
        // static int32_t TempTargetId;
        // static int32_t PatternIndex;
        // static int32_t DitherThreshold;
        // static int32_t DitherStrength;
        // static int32_t DitherScale;
    
        uint8_t pad_0000[0xB0]; // 0x0000
        Dithering* dithering; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Material* ditheringMaterial; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RenderTargetIdentifier currentTarget; // 0x00C0
    
        // Methods
        void .ctor(RenderPassEvent evt);
        void Execute(ScriptableRenderContext context, RenderingData renderingData);
        void Setup(RenderTargetIdentifier currentTarget);
        void Render(CommandBuffer* cmd, RenderingData renderingData);
        static void .cctor();
    };

    // Namespace: PSX
    class Fog : public VolumeComponent
    {
    public:
        uint8_t pad_0000[0x38]; // 0x0000
        FloatParameter* fogDensity; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        FloatParameter* fogDistance; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ColorParameter* fogColor; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ColorParameter* ambientColor; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        FloatParameter* fogNear; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        FloatParameter* fogFar; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        FloatParameter* fogAltScale; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        FloatParameter* fogThinning; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        FloatParameter* noiseScale; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        FloatParameter* noiseStrength; // 0x0080
    
        // Methods
        bool IsActive();
        bool IsTileCompatible();
        void .ctor();
    };

    // Namespace: PSX
    class FogController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        VolumeProfile* volumeProfile; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Fog* fog; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isEnabled; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float fogDensity; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float fogDistance; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float fogNear; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float fogFar; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float fogAltScale; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float fogThinning; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float noiseScale; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float noiseStrength; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        Color fogColor; // 0x0054
        uint8_t pad_0055[0xF]; // 0x0055
        Color ambientColor; // 0x0064
    
        // Methods
        float get_getFogDistance();
        float setFogDistance(float value);
        void Update();
        void SetParams();
        void .ctor();
    };

    // Namespace: PSX
    class FogRenderFeature : public ScriptableRendererFeature
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        FogPass* fogPass; // 0x0020
    
        // Methods
        void Create();
        void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void SetupRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void .ctor();
    };

    // Namespace: PSX
    class FogPass : public ScriptableRenderPass
    {
    public:
        // Static fields
        // static MonoString* shaderPath;
        // static MonoString* k_RenderTag;
        // static int32_t MainTexId;
        // static int32_t TempTargetId;
        // static int32_t FogDensity;
        // static int32_t FogDistance;
        // static int32_t FogColor;
        // static int32_t AmbientColor;
        // static int32_t FogNear;
        // static int32_t FogFar;
        // static int32_t FogAltScale;
        // static int32_t FogThinning;
        // static int32_t NoiseScale;
        // static int32_t NoiseStrength;
    
        uint8_t pad_0000[0xB0]; // 0x0000
        Fog* fog; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Material* fogMaterial; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RenderTargetIdentifier currentTarget; // 0x00C0
    
        // Methods
        void .ctor(RenderPassEvent evt);
        void Execute(ScriptableRenderContext context, RenderingData renderingData);
        void Setup(RenderTargetIdentifier currentTarget);
        void Render(CommandBuffer* cmd, RenderingData renderingData);
        static void .cctor();
    };

    // Namespace: PSX
    class Pixelation : public VolumeComponent
    {
    public:
        uint8_t pad_0000[0x38]; // 0x0000
        FloatParameter* widthPixelation; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        FloatParameter* heightPixelation; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        FloatParameter* colorPrecision; // 0x0048
    
        // Methods
        bool IsActive();
        bool IsTileCompatible();
        void .ctor();
    };

    // Namespace: PSX
    class PixelationController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        VolumeProfile* volumeProfile; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Pixelation* pixelation; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isEnabled; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float widthPixelation; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float heightPixelation; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float colorPrecision; // 0x003C
    
        // Methods
        void Update();
        void SetParams();
        void .ctor();
    };

    // Namespace: PSX
    class PixelationRenderFeature : public ScriptableRendererFeature
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        PixelationPass* pixelationPass; // 0x0020
    
        // Methods
        void Create();
        void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void SetupRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
        void .ctor();
    };

    // Namespace: PSX
    class PixelationPass : public ScriptableRenderPass
    {
    public:
        // Static fields
        // static MonoString* shaderPath;
        // static MonoString* k_RenderTag;
        // static int32_t MainTexId;
        // static int32_t TempTargetId;
        // static int32_t WidthPixelation;
        // static int32_t HeightPixelation;
        // static int32_t ColorPrecison;
    
        uint8_t pad_0000[0xB0]; // 0x0000
        Pixelation* pixelation; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Material* pixelationMaterial; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RenderTargetIdentifier currentTarget; // 0x00C0
    
        // Methods
        void .ctor(RenderPassEvent evt);
        void Execute(ScriptableRenderContext context, RenderingData renderingData);
        void Setup(RenderTargetIdentifier currentTarget);
        void Render(CommandBuffer* cmd, RenderingData renderingData);
        static void .cctor();
    };

} // namespace PSX

namespace MyGameUILibrary
{

    // Namespace: MyGameUILibrary
    class UIRadialProgress : public VisualElement
    {
    public:
        // Static fields
        // static MonoString* USSClassName;
        // static MonoString* USSLabelClassName;
        // static UnityEngine.UIElements.CustomStyleProperty<UnityEngine.Color> sTrackColor;
        // static UnityEngine.UIElements.CustomStyleProperty<UnityEngine.Color> sProgressColor;
    
        uint8_t pad_0000[0x2C0]; // 0x0000
        Color mTrackColor; // 0x02C0
        uint8_t pad_02C1[0xF]; // 0x02C1
        Color mProgressColor; // 0x02D0
        uint8_t pad_02D1[0xF]; // 0x02D1
        float mProgress; // 0x02E0
    
        // Methods
        float get_Progress();
        void set_Progress(float value);
        void .ctor();
        static void CustomStylesResolved(CustomStyleResolvedEvent* _Evt);
        void UpdateCustomStyles();
        void GenerateVisualContent(MeshGenerationContext* _Context);
        static void .cctor();
    };

} // namespace MyGameUILibrary

namespace TriForge
{

    // Namespace: TriForge
    class TFFWFoliageController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float WindStrength; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool EnableTreeColorVariance; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float ColorVarianceIntensity; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float ColorVarianceBiasShift; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float ColorVarianceMin; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float ColorVarianceMax; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float BrightnessVariance; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float ColorVarianceMaskScale; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool EnableGrassColorVariance; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float GrassVarianceIntensity; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float GrassVarianceBiasShift; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float GrassVarianceMin; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float GrassVarianceMax; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float GrassBrightnessVariance; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float GrassVarianceRootInfluence; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float GrassVarianceMaskScale; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        bool EnableGrassWind; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float GrassWindRotationMapInfluence; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float GrassWindStrength; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float GrassFadeDistance; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        Vector3 WindDirection; // 0x0070
    
        // Methods
        void Update();
        void .ctor();
    };

} // namespace TriForge

namespace Dissonance.Integrations.Offline
{

    // Namespace: Dissonance.Integrations.Offline
    class OfflineCommsNetwork : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<Dissonance.RemoteChannel> _loopbackChannels; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Queue<System.Byte[]> _bufferPool; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.Queue<Dissonance.Networking.VoicePacket> _loopbackQueue; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<System.String,Dissonance.CodecSettings> PlayerJoined; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<Dissonance.Networking.VoicePacket> VoicePacketReceived; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Action<System.String> PlayerStartedSpeaking; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<System.String> PlayerStoppedSpeaking; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Action<Dissonance.Networking.NetworkMode> ModeChanged; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Action<System.String> PlayerLeft; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Action<Dissonance.Networking.TextMessage> TextPacketReceived; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Action<Dissonance.Networking.RoomEvent> PlayerEnteredRoom; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<Dissonance.Networking.RoomEvent> PlayerExitedRoom; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        bool _loopbackActive; // 0x0080
        bool _sentStartedSpeakingEvent; // 0x0081
        uint8_t pad_0082[0x2]; // 0x0082
        uint32_t _loopbackSequenceNumber; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        bool _playerJoined; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        System.Nullable<Dissonance.CodecSettings> _codecSettings; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        int32_t <LoopbackPacketCount>k__BackingField; // 0x009C
    
        // Methods
        int32_t get_LoopbackPacketCount();
        void set_LoopbackPacketCount(int32_t value);
        ConnectionStatus get_Status();
        void Initialize(MonoString* playerName, Rooms* rooms, PlayerChannels* playerChannels, RoomChannels* roomChannels, CodecSettings codecSettings);
        void BeginLoopback(RoomName channel, ChannelProperties* props);
        void EndLoopback(RoomName channel, ChannelProperties* props);
        NetworkMode get_Mode();
        void add_PlayerJoined(System.Action<System.String,Dissonance.CodecSettings> value);
        void remove_PlayerJoined(System.Action<System.String,Dissonance.CodecSettings> value);
        void add_VoicePacketReceived(System.Action<Dissonance.Networking.VoicePacket> value);
        void remove_VoicePacketReceived(System.Action<Dissonance.Networking.VoicePacket> value);
        void add_PlayerStartedSpeaking(System.Action<System.String> value);
        void remove_PlayerStartedSpeaking(System.Action<System.String> value);
        void add_PlayerStoppedSpeaking(System.Action<System.String> value);
        void remove_PlayerStoppedSpeaking(System.Action<System.String> value);
        void add_ModeChanged(System.Action<Dissonance.Networking.NetworkMode> value);
        void remove_ModeChanged(System.Action<Dissonance.Networking.NetworkMode> value);
        void add_PlayerLeft(System.Action<System.String> value);
        void remove_PlayerLeft(System.Action<System.String> value);
        void add_TextPacketReceived(System.Action<Dissonance.Networking.TextMessage> value);
        void remove_TextPacketReceived(System.Action<Dissonance.Networking.TextMessage> value);
        void add_PlayerEnteredRoom(System.Action<Dissonance.Networking.RoomEvent> value);
        void remove_PlayerEnteredRoom(System.Action<Dissonance.Networking.RoomEvent> value);
        void add_PlayerExitedRoom(System.Action<Dissonance.Networking.RoomEvent> value);
        void remove_PlayerExitedRoom(System.Action<Dissonance.Networking.RoomEvent> value);
        void SendVoice(System.ArraySegment<System.Byte> data);
        void SendText(MonoString* data, ChannelType recipientType, MonoString* recipientId);
        void Update();
        void JoinFakePlayer();
        void PumpLoopback();
        void .ctor();
    };

} // namespace Dissonance.Integrations.Offline

namespace Dissonance.Integrations.MirrorIgnorance
{

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    class MirrorIgnoranceClient : public BaseClient`3
    {
    public:
        uint8_t pad_0000[0xA8]; // 0x0000
        MirrorIgnoranceCommsNetwork* _network; // 0x00A8
    
        // Methods
        void .ctor(MirrorIgnoranceCommsNetwork* network);
        void Connect();
        void Disconnect();
        void OnMessageReceived(DissonanceNetworkMessage msg);
        void ReadMessages();
        void SendReliable(System.ArraySegment<System.Byte> packet);
        void SendUnreliable(System.ArraySegment<System.Byte> packet);
        bool Send(System.ArraySegment<System.Byte> packet, uint8_t channel);
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    class MirrorIgnoranceCommsNetwork : public BaseCommsNetwork`5
    {
    public:
        // Static fields
        // static uint8_t ReliableSequencedChannel;
        // static uint8_t UnreliableChannel;
    
        uint8_t pad_0000[0xC8]; // 0x0000
        Dissonance.Datastructures.ConcurrentPool<System.Byte[]> _loopbackBuffers; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<System.ArraySegment<System.Byte>> _loopbackQueue; // 0x00D0
    
        // Methods
        MirrorIgnoranceServer* CreateServer(Unit details);
        MirrorIgnoranceClient* CreateClient(Unit details);
        void Update();
        void Initialize();
        bool PreprocessPacketToClient(System.ArraySegment<System.Byte> packet, MirrorConn destination);
        bool PreprocessPacketToServer(System.ArraySegment<System.Byte> packet);
        static void NullMessageReceivedHandler(DissonanceNetworkMessage msg);
        void .ctor();
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    struct MirrorConn
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        NetworkConnection* Connection; // 0x0010
    
        // Methods
        void .ctor(NetworkConnection* connection);
        int32_t GetHashCode();
        MonoString* ToString();
        bool Equals(MonoObject* obj);
        bool Equals(MirrorConn other);
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    class DissonanceNetworkMessageExtensions
    {
    public:
        // Static fields
        // static int32_t BufferLength;
        // static Dissonance.Datastructures.ConcurrentPool<System.Byte[]> SerializationBuffers;
    
    
        // Methods
        static void Serialize(NetworkWriter* writer, DissonanceNetworkMessage value);
        static DissonanceNetworkMessage Deserialize(NetworkReader* reader);
        static void .cctor();
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    struct DissonanceNetworkMessage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.ArraySegment<System.Byte> Data; // 0x0010
    
        // Methods
        void .ctor(System.ArraySegment<System.Byte> packet);
        void Dispose();
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    class MirrorIgnorancePlayer : public NetworkBehaviour
    {
    public:
        // Static fields
        // static Log* Log;
    
        uint8_t pad_0000[0x68]; // 0x0000
        DissonanceComms* _comms; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        MonoString* _playerId; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool <IsTracking>k__BackingField; // 0x0078
    
        // Methods
        bool get_IsTracking();
        void set_IsTracking(bool value);
        MonoString* get_PlayerId();
        Vector3 get_Position();
        Quaternion get_Rotation();
        NetworkPlayerType get_Type();
        void OnDestroy();
        void OnEnable();
        void OnDisable();
        void OnStartLocalPlayer();
        void SetPlayerName(MonoString* playerName);
        void OnStartClient();
        void CmdSetPlayerName(MonoString* playerName);
        void RpcSetPlayerName(MonoString* playerName);
        void StartTracking();
        void StopTracking();
        void .ctor();
        static void .cctor();
        bool Weaved();
        MonoString* get_Network_playerId();
        void set_Network_playerId(MonoString* value);
        void UserCode_CmdSetPlayerName__String(MonoString* playerName);
        static void InvokeUserCode_CmdSetPlayerName__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
        void UserCode_RpcSetPlayerName__String(MonoString* playerName);
        static void InvokeUserCode_RpcSetPlayerName__String(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
        void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
        void DeserializeSyncVars(NetworkReader* reader, bool initialState);
    };

    // Namespace: Dissonance.Integrations.MirrorIgnorance
    class MirrorIgnoranceServer : public BaseServer`3
    {
    public:
        uint8_t pad_0000[0x60]; // 0x0000
        MirrorIgnoranceCommsNetwork* _network; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<Mirror.NetworkConnection> _addedConnections; // 0x0068
    
        // Methods
        void .ctor(MirrorIgnoranceCommsNetwork* network);
        void Connect();
        void OnMessageReceived(NetworkConnection* source, DissonanceNetworkMessage msg);
        void AddClient(Dissonance.Networking.ClientInfo<Dissonance.Integrations.MirrorIgnorance.MirrorConn> client);
        void Disconnect();
        void ReadMessages();
        ServerState Update();
        static bool IsConnected(NetworkConnection* conn);
        void SendReliable(MirrorConn connection, System.ArraySegment<System.Byte> packet);
        void SendUnreliable(MirrorConn connection, System.ArraySegment<System.Byte> packet);
        bool Send(System.ArraySegment<System.Byte> packet, MirrorConn connection, uint8_t channel);
    };

} // namespace Dissonance.Integrations.MirrorIgnorance

namespace Dissonance.Integrations.MirrorIgnorance.Demo
{

    // Namespace: Dissonance.Integrations.MirrorIgnorance.Demo
    class MirrorIgnorancePlayerController : public NetworkBehaviour
    {
    public:
    
        // Methods
        void Update();
        void .ctor();
        bool Weaved();
    };

} // namespace Dissonance.Integrations.MirrorIgnorance.Demo

namespace NHance.Assets
{

    // Namespace: NHance.Assets
    class NHCamera : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* focus; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* _transform; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Camera* regularCamera; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool TryToFindCharacter; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float distance; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float minDistance; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float maxDistance; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Vector3 focusOffset; // 0x0048
        uint8_t pad_0049[0xB]; // 0x0049
        float rotationSpeed; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float minVerticalAngle; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float maxVerticalAngle; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        LayerMask obstructionMask; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float horizontalSmoothTime; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float verticalSmoothTime; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float flySpeed; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool ControlsFoldout; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        Vector3 focusPoint; // 0x0074
        uint8_t pad_0075[0xB]; // 0x0075
        Vector2 orbitAngles; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Vector3 lastFocusOffset; // 0x0088
        uint8_t pad_0089[0xB]; // 0x0089
        float targetDistance; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        float zoomVelocity; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float currentXVelocity; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float currentYVelocity; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float currentZVelocity; // 0x00A4
    
        // Methods
        Vector3 get_CameraHalfExtends();
        void OnValidate();
        void Awake();
        void Update();
        void UpdateFocusPoint();
        bool ManualRotation();
        void FocusOffsetMove();
        void ConstrainAngles();
        void .ctor();
    };

} // namespace NHance.Assets

namespace NHance.Assets.StylizedCharacter.Scripts
{

    // Namespace: NHance.Assets.StylizedCharacter.Scripts
    class ItemWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        NHItem* Item; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        ItemTypeEnum Type; // 0x0018
    
        // Methods
        void .ctor(NHItem* item, ItemTypeEnum type);
    };

    // Namespace: NHance.Assets.StylizedCharacter.Scripts
    class ItemWrapperHandler
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<NHance.Assets.StylizedCharacter.Scripts.ItemWrapper> _list; // 0x0010
    
        // Methods
        NHItem* get_Item(ItemTypeEnum key);
        void set_Item(ItemTypeEnum key, NHItem* value);
        void Clear();
        void Remove(ItemTypeEnum type);
        void .ctor();
    };

} // namespace NHance.Assets.StylizedCharacter.Scripts

namespace NHance.Assets.StylizedCharacter.Scripts.Wrappers
{

    // Namespace: NHance.Assets.StylizedCharacter.Scripts.Wrappers
    class GameObjectByBoneTypeWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<NHance.Assets.StylizedCharacter.Scripts.Containers.BoneTarget> _list; // 0x0010
    
        // Methods
        Transform* get_Item(BoneType key);
        void set_Item(BoneType key, Transform* value);
        BoneTarget* Get(BoneType type);
        void Remove(BoneType type);
        void Clear();
        void .ctor();
    };

    // Namespace: NHance.Assets.StylizedCharacter.Scripts.Wrappers
    class ItemTypeToBoneTypeWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<NHance.Assets.StylizedCharacter.Scripts.Containers.ItemBoneMatch> list; // 0x0010
    
        // Methods
        BoneType get_Item(ItemTypeEnum key);
        void set_Item(ItemTypeEnum key, BoneType value);
        void Remove(ItemTypeEnum type);
        void .ctor();
    };

} // namespace NHance.Assets.StylizedCharacter.Scripts.Wrappers

namespace NHance.Assets.StylizedCharacter.Scripts.Containers
{

    // Namespace: NHance.Assets.StylizedCharacter.Scripts.Containers
    class BoneSetup
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector3 Position; // 0x0010
        uint8_t pad_0011[0xB]; // 0x0011
        Vector3 Rotation; // 0x001C
        uint8_t pad_001D[0xB]; // 0x001D
        bool Foldout; // 0x0028
    
        // Methods
        void .ctor();
    };

    // Namespace: NHance.Assets.StylizedCharacter.Scripts.Containers
    class BoneTarget
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Transform* Target; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        BoneSetup* Setup; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        BoneType Type; // 0x0020
    
        // Methods
        void .ctor(Transform* target, BoneType type);
    };

    // Namespace: NHance.Assets.StylizedCharacter.Scripts.Containers
    class ItemBoneMatch
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ItemTypeEnum ItemType; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        BoneType BoneType; // 0x0014
    
        // Methods
        void .ctor(ItemTypeEnum itemType, BoneType boneType);
    };

} // namespace NHance.Assets.StylizedCharacter.Scripts.Containers

namespace NHance.Assets.Scripts
{

    // Namespace: NHance.Assets.Scripts
    class ItemCache
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        GameObject* Item; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        ItemTypeEnum Type; // 0x0018
    
        // Methods
        void .ctor(GameObject* item, ItemTypeEnum type);
    };

    // Namespace: NHance.Assets.Scripts
    class Equipment : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* Target; // 0x0020
    
        // Methods
        void Start();
        void GetAllSkinnedMeshRenderers(System.Collections.Generic.Dictionary<System.String,UnityEngine.Transform>& map, Transform* target);
        Transform* FindBoundByName(MonoString* _name, System.Collections.Generic.Dictionary<System.String,UnityEngine.Transform> boneMap);
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts
    class NHAvatar : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        ItemWrapperHandler* Items; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObjectByItemTypeWrapper* Cache; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObjectByBoneTypeWrapper* SocketMap; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        ItemTypeToBoneTypeWrapper* itemToBoneMapper; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* rootBone; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Transform* rootGeometry; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<NHance.Assets.Scripts.BodypartWrapper> PartsMap; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Animator* _animator; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Collections.Generic.List<UnityEngine.AnimationClip> _animationClips; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        MonoString* characterPrefix; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Collections.Generic.List<UnityEngine.Material> BodyMaterialsToReplace; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.List<UnityEngine.Material> HeadMaterialsToReplace; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<UnityEngine.Material> DefaultBodyMaterial; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Collections.Generic.List<UnityEngine.Material> DefaultHeadMaterial; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<UnityEngine.Material> DefaultFemBrowsMaterial; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Collections.Generic.List<UnityEngine.Material> DefaultOrcFemBrowsMaterial; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.List<UnityEngine.Material> DefaultEyesMaterial; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        int32_t _animationIndex; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        bool FoldoutBodyPartSetup; // 0x00AC
        bool FoldoutSocketsSetup; // 0x00AD
        bool FoldoutSocketsTransformSetup; // 0x00AE
        bool FoldoutItemToBoneMapper; // 0x00AF
        bool showAnimationControls; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        Gender Gender; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        bool Auto; // 0x00B8
    
        // Methods
        Material[][] get_HeadMaterial();
        Material[][] get_EyeMaterial();
        Material[][] get_FemBrowsMaterial();
        Material[][] get_OrcBrowsMaterial();
        void Start();
        NHAvatar* SetItem(NHItem* item);
        NHAvatar* SetItems(NHItem[][] items);
        NHAvatar* ClearItems(ItemTypeEnum[][] types);
        void ClearAnotherType(NHItem* item, ItemTypeEnum anotherType);
        void ClearAnotherType(ItemTypeEnum anotherType);
        NHAvatar* Compile();
        void InitSkinMaterials();
        Material[][] GetMaterial(TargetBodyparts partType);
        Vector3 SocketPosition(NHItem* SocketItem);
        Quaternion SocketRotation(NHItem* SocketItem);
        void InitComponent(NHItem* obj);
        System.Collections.Generic.List<UnityEngine.Material> GetBodyMaterials();
        void ActivateBodyPart(GameObject* bodypart, bool enabled);
        System.Collections.Generic.List<NHance.Assets.Scripts.Enums.TargetBodyparts> GetTargetBodyparts(NHItem* item);
        NHAvatar* Clean();
        void CleanCache(ItemTypeEnum type);
        void NormalizeAnimationIndex();
        void OnGUI();
        void AutoSocketTargetSetup();
        Transform* RecursiveFindChild(Transform* parent, MonoString* childName);
        void AutoBodyPartsSetup();
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts
    class CharacterAnimator
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CharacterSettings* _settings; // 0x0010
    
        // Methods
        void .ctor(CharacterSettings* settings);
        void Update();
    };

    // Namespace: NHance.Assets.Scripts
    class CharacterEngine
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CharacterSettings* _settings; // 0x0010
    
        // Methods
        void .ctor(CharacterSettings* settings);
        void UpdateSmoothedMovementDirection();
        void ApplyJumping();
        void ApplyGravity();
        float CalculateJumpVerticalSpeed(float targetJumpHeight);
        void Update();
        void ApplyAirborn();
        void ResetIfGround();
        void ApplyRotation();
        void ApplyMovement();
        void ApplyIdle();
        void CheckGround();
    };

    // Namespace: NHance.Assets.Scripts
    class CharacterInput
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CharacterSettings* _settings; // 0x0010
    
        // Methods
        void .ctor(CharacterSettings* settings);
        void Update();
        void Walk();
        void Sprint();
        void Jump();
        void Movement();
    };

    // Namespace: NHance.Assets.Scripts
    class CharacterSettings
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CharacterController* Controller; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Animator* Animator; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Transform* Transform; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* MovementSpace; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AnimationClip* IdleAnimation; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AnimationClip* IdleLongAnimation; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        AnimationClip* JumpStartAnimation; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AnimationClip* JumpPoseAnimation; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AnimationClip* JumpEndAnimation; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        MonoString* MovementBlendName; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        MonoString* MovementValueName; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        float JumpAnimationSpeed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float LandAnimationSpeed; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        CharacterStateEnum CharacterState; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float WalkSpeed; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float RunSpeed; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float SprintSpeed; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float InAirControlAcceleration; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float JumpHeight; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float Gravity; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float SpeedSmoothing; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float RotateSpeed; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float JumpRepeatTime; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        float JumpTimeout; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float TimeSinceLastMove; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        Vector3 MoveDirection; // 0x00A0
        uint8_t pad_00A1[0xB]; // 0x00A1
        float VerticalSpeed; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        float MoveSpeed; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        CollisionFlags CollisionFlags; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        bool IsJumpingReachedApex; // 0x00B8
        bool IsMovingBack; // 0x00B9
        bool IsMoving; // 0x00BA
        uint8_t pad_00BB[0x1]; // 0x00BB
        float LastJumpButtonTime; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        float LastJumpTime; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        bool AnimationFoldout; // 0x00C4
        bool DebugFoldout; // 0x00C5
        bool IsGrounded; // 0x00C6
        uint8_t pad_00C7[0x1]; // 0x00C7
        float LastJumpStartHeight; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        Vector3 InAirVelocity; // 0x00CC
        uint8_t pad_00CD[0xB]; // 0x00CD
        float AirTime; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool IsEnabled; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        Vector2 MovementAxis; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        bool IsSprinting; // 0x00E8
        bool IsWalking; // 0x00E9
        uint8_t pad_00EA[0x2]; // 0x00EA
        Vector3 CurrentVelocity; // 0x00EC
        uint8_t pad_00ED[0xB]; // 0x00ED
        float SmoothTime; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float TransitionTime; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float NextLongIdleAnimationTime; // 0x0100
    
        // Methods
        float get_distanceToGround();
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts
    class CharacterState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CharacterSettings* _settings; // 0x0010
    
        // Methods
        void .ctor(CharacterSettings* settings);
    };

    // Namespace: NHance.Assets.Scripts
    class NHCharacterController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        CharacterSettings* settings; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        CharacterAnimator* _characterAnimator; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        CharacterEngine* _characterEngine; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        CharacterInput* _characterInput; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        CharacterState* _state; // 0x0040
    
        // Methods
        void Awake();
        void OnUpdateRotation(Quaternion rotation);
        void Update();
        void LateUpdate();
        void OnDestroy();
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts
    class BodypartWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        GameObject* Target; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        SkinnedMeshRenderer* _renderer; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        TargetBodyparts Type; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool Enabled; // 0x0024
    
        // Methods
        SkinnedMeshRenderer* get_Renderer();
        void .ctor(TargetBodyparts type, GameObject* target);
        void .ctor(TargetBodyparts type, bool enabled);
        void Clean();
    };

    // Namespace: NHance.Assets.Scripts
    class GameObjectByItemTypeWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<NHance.Assets.Scripts.ItemCache> _cache; // 0x0010
    
        // Methods
        GameObject* get_Item(ItemTypeEnum key);
        void set_Item(ItemTypeEnum key, GameObject* value);
        void Remove(ItemTypeEnum type);
        void Clear();
        void .ctor();
    };

} // namespace NHance.Assets.Scripts

namespace NHance.Assets.Scripts.Utils
{

    // Namespace: NHance.Assets.Scripts.Utils
    class ItemTypeQuery
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ItemTypeDescriptorAttribute* _options; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<NHance.Assets.Scripts.Enums.ItemTypeEnum> _exclude; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* Filter; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        OrderType _order; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Gender _excludeGender; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        SocketingType _socketingType; // 0x0030
    
        // Methods
        System.Collections.Generic.List<NHance.Assets.Scripts.Enums.ItemTypeEnum> Build();
        ItemTypeQuery* WithOrder(OrderType order);
        ItemTypeQuery* WithCategory(ItemCategory category);
        ItemTypeQuery* WithFilter(MonoString* filter);
        ItemTypeQuery* WithGender(Gender gender);
        ItemTypeQuery* ExcludeGender(Gender gender);
        ItemTypeQuery* WithNamespace(MonoString* nameSpace);
        ItemTypeQuery* Exclude(ItemTypeEnum[][] types);
        ItemTypeQuery* ItemCanBeInSocket(SocketingType type);
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts.Utils
    class UtilsAssets
    {
    public:
    };

    // Namespace: NHance.Assets.Scripts.Utils
    class UtilsAttributes
    {
    public:
    
        // Methods
        static TAttributeType GetAttribute(MemberInfo* memInfo);
        static ItemTypeDescriptorAttribute* TypeDescriptor(ItemTypeEnum type);
        static NameAttribute* TypeDescriptor(BoneType type);
        static NameAttribute* TypeDescriptor(TargetBodyparts type);
    };

    // Namespace: NHance.Assets.Scripts.Utils
    class UtilsProperties
    {
    public:
    
        // Methods
        static MonoString* GetMemberName(System.Linq.Expressions.Expression<System.Func<T,TValue>> memberAccess);
    };

} // namespace NHance.Assets.Scripts.Utils

namespace NHance.Assets.Scripts.Items
{

    // Namespace: NHance.Assets.Scripts.Items
    class NHItem : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<NHance.Assets.Scripts.Items.MaterialMapper> Mappers; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<NHance.Assets.Scripts.BodypartWrapper> Wrappers; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        ItemTypeEnum Type; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool IsTakeTwoHands; // 0x0034
        bool CopySkinMaterial; // 0x0035
    
        // Methods
        void SetDefaultTargets();
        void ClearTargets();
        System.Collections.Generic.List<NHance.Assets.Scripts.Enums.TargetBodyparts> GetPartByType();
        void .ctor();
    };

    // Namespace: NHance.Assets.Scripts.Items
    class MaterialMapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<UnityEngine.Material> Materials; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.List<NHance.Assets.Scripts.BodypartWrapper> Wrappers; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool isOpened; // 0x0020
    
        // Methods
        void .ctor();
    };

} // namespace NHance.Assets.Scripts.Items

namespace NHance.Assets.Scripts.Enums
{

    // Namespace: NHance.Assets.Scripts.Enums
    struct BoneType
    {
    public:
        // Static fields
        // static BoneType None;
        // static BoneType WeaponL;
        // static BoneType WeaponR;
        // static BoneType Quiver;
        // static BoneType BackL;
        // static BoneType BackR;
        // static BoneType BackM;
        // static BoneType BackBow;
        // static BoneType Back2HL;
        // static BoneType HipR;
        // static BoneType HipL;
        // static BoneType Head;
        // static BoneType Arrow;
        // static BoneType Shield;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct CharacterStateEnum
    {
    public:
        // Static fields
        // static CharacterStateEnum IdleStarted;
        // static CharacterStateEnum IdleInProgress;
        // static CharacterStateEnum IdleLongStared;
        // static CharacterStateEnum InAirStarted;
        // static CharacterStateEnum InAir;
        // static CharacterStateEnum LandingStarted;
        // static CharacterStateEnum LandingInProgress;
        // static CharacterStateEnum IsMovingStarted;
        // static CharacterStateEnum IsMoving;
        // static CharacterStateEnum JumpStarted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct Gender
    {
    public:
        // Static fields
        // static Gender HumanMale;
        // static Gender HumanFemale;
        // static Gender OrcMale;
        // static Gender OrcFemale;
        // static Gender DwarfMale;
        // static Gender DwarfFemale;
        // static Gender All;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct ItemCategory
    {
    public:
        // Static fields
        // static ItemCategory Item;
        // static ItemCategory Skin;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    class ItemCategoryString
    {
    public:
        // Static fields
        // static MonoString* Armor;
        // static MonoString* Head;
        // static MonoString* Weapon;
        // static System.Collections.Generic.List<System.String> Categories;
    
    
        // Methods
        static void .cctor();
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct ItemTypeEnum
    {
    public:
        // Static fields
        // static ItemTypeEnum Skin;
        // static ItemTypeEnum HeadSkin;
        // static ItemTypeEnum Eyes;
        // static ItemTypeEnum Hair;
        // static ItemTypeEnum Chest;
        // static ItemTypeEnum Cape;
        // static ItemTypeEnum Belt;
        // static ItemTypeEnum Boots;
        // static ItemTypeEnum Quiver;
        // static ItemTypeEnum WeaponL;
        // static ItemTypeEnum WeaponR;
        // static ItemTypeEnum Beard;
        // static ItemTypeEnum Brows;
        // static ItemTypeEnum Piercing;
        // static ItemTypeEnum Earrings;
        // static ItemTypeEnum ChestSkin;
        // static ItemTypeEnum GlovesSkin;
        // static ItemTypeEnum PantsSkin;
        // static ItemTypeEnum UnderwearSkin;
        // static ItemTypeEnum BodyAdditional;
        // static ItemTypeEnum Gloves;
        // static ItemTypeEnum Helmet;
        // static ItemTypeEnum Pants;
        // static ItemTypeEnum Shoulders;
        // static ItemTypeEnum FemBrows;
        // static ItemTypeEnum Shield;
        // static ItemTypeEnum BeardStyle;
        // static ItemTypeEnum BrowStyle;
        // static ItemTypeEnum Tusks;
        // static ItemTypeEnum HeadAdditional;
        // static ItemTypeEnum OrF_Piercing;
        // static ItemTypeEnum OrF_Earrings;
        // static ItemTypeEnum OrF_Tusks;
        // static ItemTypeEnum OrF_Brows;
        // static ItemTypeEnum DwM_Beard;
        // static ItemTypeEnum DwM_Moustache;
        // static ItemTypeEnum DwM_Brows;
        // static ItemTypeEnum HeadScars;
        // static ItemTypeEnum DwF_Brows;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct OrderType
    {
    public:
        // Static fields
        // static OrderType None;
        // static OrderType Ascending;
        // static OrderType Descending;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct PlayerState
    {
    public:
        // Static fields
        // static PlayerState Idle;
        // static PlayerState Walk;
        // static PlayerState Run;
        // static PlayerState Air;
        // static PlayerState StartJump;
        // static PlayerState EndJump;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct SocketingType
    {
    public:
        // Static fields
        // static SocketingType All;
        // static SocketingType CanBeInSocket;
        // static SocketingType NotCanBeInSocket;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: NHance.Assets.Scripts.Enums
    struct TargetBodyparts
    {
    public:
        // Static fields
        // static TargetBodyparts Head;
        // static TargetBodyparts Ears;
        // static TargetBodyparts Eyes;
        // static TargetBodyparts Torso;
        // static TargetBodyparts Bracers;
        // static TargetBodyparts Hands;
        // static TargetBodyparts Pants;
        // static TargetBodyparts Boots;
        // static TargetBodyparts Feet;
        // static TargetBodyparts FemBrows;
        // static TargetBodyparts Tusks;
        // static TargetBodyparts OrcFemaleBrows;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace NHance.Assets.Scripts.Enums

namespace Smooth
{

    // Namespace: Smooth
    struct Half
    {
    public:
        // Static fields
        // static Half Epsilon;
        // static Half MaxValue;
        // static Half MinValue;
        // static Half NaN;
        // static Half NegativeInfinity;
        // static Half PositiveInfinity;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint16_t internalValue; // 0x0010
    
        // Methods
        void .ctor(float value);
        void .ctor(int32_t value);
        void .ctor(int64_t value);
        void .ctor(double value);
        void .ctor(Decimal value);
        void .ctor(uint32_t value);
        void .ctor(uint64_t value);
        static Half Negate(Half half);
        static Half Add(Half half1, Half half2);
        static Half Subtract(Half half1, Half half2);
        static Half Multiply(Half half1, Half half2);
        static Half Divide(Half half1, Half half2);
        static Half op_UnaryPlus(Half half);
        static Half op_UnaryNegation(Half half);
        static Half op_Increment(Half half);
        static Half op_Decrement(Half half);
        static Half op_Addition(Half half1, Half half2);
        static Half op_Subtraction(Half half1, Half half2);
        static Half op_Multiply(Half half1, Half half2);
        static Half op_Division(Half half1, Half half2);
        static bool op_Equality(Half half1, Half half2);
        static bool op_Inequality(Half half1, Half half2);
        static bool op_LessThan(Half half1, Half half2);
        static bool op_GreaterThan(Half half1, Half half2);
        static bool op_LessThanOrEqual(Half half1, Half half2);
        static bool op_GreaterThanOrEqual(Half half1, Half half2);
        static Half op_Implicit(uint8_t value);
        static Half op_Implicit(int16_t value);
        static Half op_Implicit(wchar_t value);
        static Half op_Implicit(int32_t value);
        static Half op_Implicit(int64_t value);
        static Half op_Explicit(float value);
        static Half op_Explicit(double value);
        static Half op_Explicit(Decimal value);
        static uint8_t op_Explicit(Half value);
        static wchar_t op_Explicit(Half value);
        static int16_t op_Explicit(Half value);
        static int32_t op_Explicit(Half value);
        static int64_t op_Explicit(Half value);
        static float op_Implicit(Half value);
        static double op_Implicit(Half value);
        static Decimal op_Explicit(Half value);
        static Half op_Implicit(int8_t value);
        static Half op_Implicit(uint16_t value);
        static Half op_Implicit(uint32_t value);
        static Half op_Implicit(uint64_t value);
        static int8_t op_Explicit(Half value);
        static uint16_t op_Explicit(Half value);
        static uint32_t op_Explicit(Half value);
        static uint64_t op_Explicit(Half value);
        int32_t CompareTo(Half other);
        int32_t CompareTo(MonoObject* obj);
        bool Equals(Half other);
        bool Equals(MonoObject* obj);
        int32_t GetHashCode();
        TypeCode GetTypeCode();
        static Byte[][] GetBytes(Half value);
        static uint16_t GetBits(Half value);
        static Half ToHalf(Byte[][] value, int32_t startIndex);
        static Half ToHalf(uint16_t bits);
        static int32_t Sign(Half value);
        static Half Abs(Half value);
        static Half Max(Half value1, Half value2);
        static Half Min(Half value1, Half value2);
        static bool IsNaN(Half half);
        static bool IsInfinity(Half half);
        static bool IsNegativeInfinity(Half half);
        static bool IsPositiveInfinity(Half half);
        static Half Parse(MonoString* value);
        static Half Parse(MonoString* value, IFormatProvider* provider);
        static Half Parse(MonoString* value, NumberStyles style);
        static Half Parse(MonoString* value, NumberStyles style, IFormatProvider* provider);
        static bool TryParse(MonoString* value, Half result);
        static bool TryParse(MonoString* value, NumberStyles style, IFormatProvider* provider, Half result);
        MonoString* ToString();
        MonoString* ToString(IFormatProvider* formatProvider);
        MonoString* ToString(MonoString* format);
        MonoString* ToString(MonoString* format, IFormatProvider* formatProvider);
        float System.IConvertible.ToSingle(IFormatProvider* provider);
        TypeCode System.IConvertible.GetTypeCode();
        bool System.IConvertible.ToBoolean(IFormatProvider* provider);
        uint8_t System.IConvertible.ToByte(IFormatProvider* provider);
        wchar_t System.IConvertible.ToChar(IFormatProvider* provider);
        DateTime System.IConvertible.ToDateTime(IFormatProvider* provider);
        Decimal System.IConvertible.ToDecimal(IFormatProvider* provider);
        double System.IConvertible.ToDouble(IFormatProvider* provider);
        int16_t System.IConvertible.ToInt16(IFormatProvider* provider);
        int32_t System.IConvertible.ToInt32(IFormatProvider* provider);
        int64_t System.IConvertible.ToInt64(IFormatProvider* provider);
        int8_t System.IConvertible.ToSByte(IFormatProvider* provider);
        MonoString* System.IConvertible.ToString(IFormatProvider* provider);
        MonoObject* System.IConvertible.ToType(Type* conversionType, IFormatProvider* provider);
        uint16_t System.IConvertible.ToUInt16(IFormatProvider* provider);
        uint32_t System.IConvertible.ToUInt32(IFormatProvider* provider);
        uint64_t System.IConvertible.ToUInt64(IFormatProvider* provider);
        static void .cctor();
    };

    // Namespace: Smooth
    class HalfHelper
    {
    public:
        // Static fields
        // static UInt32[][] mantissaTable;
        // static UInt32[][] exponentTable;
        // static UInt16[][] offsetTable;
        // static UInt16[][] baseTable;
        // static SByte[][] shiftTable;
        // static UIntFloat floatToIntConverter;
    
    
        // Methods
        static uint32_t FloatToUInt(float v);
        static float UIntToFloat(uint32_t v);
        static uint32_t ConvertMantissa(int32_t i);
        static UInt32[][] GenerateMantissaTable();
        static UInt32[][] GenerateExponentTable();
        static UInt16[][] GenerateOffsetTable();
        static UInt16[][] GenerateBaseTable();
        static SByte[][] GenerateShiftTable();
        static float HalfToSingle(Half half);
        static Half SingleToHalf(float single);
        static float Decompress(uint16_t compressedFloat);
        static uint16_t Compress(float uncompressedFloat);
        static Half Negate(Half half);
        static Half Abs(Half half);
        static bool IsNaN(Half half);
        static bool IsInfinity(Half half);
        static bool IsPositiveInfinity(Half half);
        static bool IsNegativeInfinity(Half half);
        static void .cctor();
    };

    // Namespace: Smooth
    class MsgType
    {
    public:
        // Static fields
        // static int16_t SmoothSyncFromServerToNonOwners;
        // static int16_t SmoothSyncFromOwnerToServer;
    
    
        // Methods
        void .ctor();
        static void .cctor();
    };

    // Namespace: Smooth
    struct SyncMode
    {
    public:
        // Static fields
        // static SyncMode XYZ;
        // static SyncMode XY;
        // static SyncMode XZ;
        // static SyncMode YZ;
        // static SyncMode X;
        // static SyncMode Y;
        // static SyncMode Z;
        // static SyncMode NONE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: Smooth
    class SmoothControllerMirror : public MonoBehaviour
    {
    public:
        // Static fields
        // static bool isHandlerRegistered;
    
    
        // Methods
        void Awake();
        void Update();
        static void RegisterHandlers();
        void .ctor();
    };

    // Namespace: Smooth
    class SmoothSyncMirror : public NetworkBehaviour
    {
    public:
        // Static fields
        // static int32_t maxTimePower;
    
        uint8_t pad_0000[0x68]; // 0x0000
        GameObject* childObjectToSync; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        validateStateDelegate* validateStateMethod; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        StateMirror* latestValidatedState; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        StateMirror[][] stateBuffer; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Rigidbody* rb; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Rigidbody2D* rb2D; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        NetworkIdentity* netID; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* realObjectToSync; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SmoothSyncMirror[][] childObjectSmoothSyncs; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        StateMirror* targetTempState; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        NetworkStateMirror sendingTempState; // 0x00B8
        uint8_t pad_00B9[0xF]; // 0x00B9
        StateMirror* latestEndStateUsed; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        NetworkIdentity* cachedNetIdentity; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float interpolationBackTime; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        ExtrapolationMode extrapolationMode; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        bool useExtrapolationTimeLimit; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float extrapolationTimeLimit; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool useExtrapolationDistanceLimit; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float extrapolationDistanceLimit; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float sendPositionThreshold; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float sendRotationThreshold; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float sendScaleThreshold; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float sendVelocityThreshold; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float sendAngularVelocityThreshold; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float receivedPositionThreshold; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        float receivedRotationThreshold; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        float snapPositionThreshold; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float snapRotationThreshold; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        float snapScaleThreshold; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        float positionLerpSpeed; // 0x0118
        uint8_t pad_0119[0x3]; // 0x0119
        float rotationLerpSpeed; // 0x011C
        uint8_t pad_011D[0x3]; // 0x011D
        float scaleLerpSpeed; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float timeCorrectionSpeed; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        float snapTimeThreshold; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        SyncMode syncPosition; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        SyncMode syncRotation; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        SyncMode syncScale; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        SyncMode syncVelocity; // 0x0138
        uint8_t pad_0139[0x3]; // 0x0139
        SyncMode syncAngularVelocity; // 0x013C
        uint8_t pad_013D[0x3]; // 0x013D
        bool isPositionCompressed; // 0x0140
        bool isRotationCompressed; // 0x0141
        bool isScaleCompressed; // 0x0142
        bool isVelocityCompressed; // 0x0143
        bool isAngularVelocityCompressed; // 0x0144
        bool automaticallyResetTime; // 0x0145
        uint8_t pad_0146[0x2]; // 0x0146
        float <localTime>k__BackingField; // 0x0148
        uint8_t pad_0149[0x3]; // 0x0149
        float maxLocalTime; // 0x014C
        uint8_t pad_014D[0x3]; // 0x014D
        float minTimePrecision; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        int32_t localTimeResetIndicator; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        bool isSmoothingAuthorityChanges; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        TransformSource transformSource; // 0x015C
        uint8_t pad_015D[0x3]; // 0x015D
        WhenToUpdateTransform whenToUpdateTransform; // 0x0160
        uint8_t pad_0161[0x3]; // 0x0161
        float sendRate; // 0x0164
        uint8_t pad_0165[0x3]; // 0x0165
        int32_t networkChannel; // 0x0168
        uint8_t pad_0169[0x3]; // 0x0169
        bool isSyncingChild; // 0x016C
        bool setVelocityInsteadOfPositionOnNonOwners; // 0x016D
        uint8_t pad_016E[0x2]; // 0x016E
        float maxPositionDifferenceForVelocitySyncing; // 0x0170
        uint8_t pad_0171[0x3]; // 0x0171
        bool useLocalTransformOnly; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        int32_t stateCount; // 0x0178
        uint8_t pad_0179[0x3]; // 0x0179
        bool hasRigidbody; // 0x017C
        bool hasRigidbody2D; // 0x017D
        bool dontEasePosition; // 0x017E
        bool dontEaseScale; // 0x017F
        bool dontEaseRotation; // 0x0180
        uint8_t pad_0181[0x3]; // 0x0181
        float firstReceivedMessageZeroTime; // 0x0184
        uint8_t pad_0185[0x3]; // 0x0185
        float lastTimeStateWasSent; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        Vector3 lastPositionWhenStateWasSent; // 0x018C
        uint8_t pad_018D[0xB]; // 0x018D
        Quaternion lastRotationWhenStateWasSent; // 0x0198
        uint8_t pad_0199[0xF]; // 0x0199
        Vector3 lastScaleWhenStateWasSent; // 0x01A8
        uint8_t pad_01A9[0xB]; // 0x01A9
        Vector3 lastVelocityWhenStateWasSent; // 0x01B4
        uint8_t pad_01B5[0xB]; // 0x01B5
        Vector3 lastAngularVelocityWhenStateWasSent; // 0x01C0
        uint8_t pad_01C1[0xB]; // 0x01C1
        int32_t syncIndex; // 0x01CC
        uint8_t pad_01CD[0x3]; // 0x01CD
        bool forceStateSend; // 0x01D0
        bool sendAtPositionalRestMessage; // 0x01D1
        bool sendAtRotationalRestMessage; // 0x01D2
        bool sendPosition; // 0x01D3
        bool sendRotation; // 0x01D4
        bool sendScale; // 0x01D5
        bool sendVelocity; // 0x01D6
        bool sendAngularVelocity; // 0x01D7
        Vector3 latestReceivedVelocity; // 0x01D8
        uint8_t pad_01D9[0xB]; // 0x01D9
        Vector3 latestReceivedAngularVelocity; // 0x01E4
        uint8_t pad_01E5[0xB]; // 0x01E5
        float timeSpentExtrapolating; // 0x01F0
        uint8_t pad_01F1[0x3]; // 0x01F1
        bool extrapolatedLastFrame; // 0x01F4
        uint8_t pad_01F5[0x3]; // 0x01F5
        Vector3 positionLastFrame; // 0x01F8
        uint8_t pad_01F9[0xB]; // 0x01F9
        bool changedPositionLastFrame; // 0x0204
        uint8_t pad_0205[0x3]; // 0x0205
        Quaternion rotationLastFrame; // 0x0208
        uint8_t pad_0209[0xF]; // 0x0209
        bool changedRotationLastFrame; // 0x0218
        uint8_t pad_0219[0x3]; // 0x0219
        int32_t atRestThresholdCount; // 0x021C
        uint8_t pad_021D[0x3]; // 0x021D
        int32_t samePositionCount; // 0x0220
        uint8_t pad_0221[0x3]; // 0x0221
        int32_t sameRotationCount; // 0x0224
        uint8_t pad_0225[0x3]; // 0x0225
        RestState restStatePosition; // 0x0228
        uint8_t pad_0229[0x3]; // 0x0229
        RestState restStateRotation; // 0x022C
        uint8_t pad_022D[0x3]; // 0x022D
        bool hadAuthorityLastFrame; // 0x0230
        uint8_t pad_0231[0x3]; // 0x0231
        Vector3 latestTeleportedFromPosition; // 0x0234
        uint8_t pad_0235[0xB]; // 0x0235
        Quaternion latestTeleportedFromRotation; // 0x0240
        uint8_t pad_0241[0xF]; // 0x0241
        bool hasCachedNetID; // 0x0250
        bool triedToExtrapolateTooFar; // 0x0251
        uint8_t pad_0252[0x2]; // 0x0252
        float _ownerTime; // 0x0254
        uint8_t pad_0255[0x3]; // 0x0255
        float lastTimeOwnerTimeWasSet; // 0x0258
        uint8_t pad_0259[0x3]; // 0x0259
        float latestAuthorityChangeZeroTime; // 0x025C
        uint8_t pad_025D[0x3]; // 0x025D
        int32_t previousReceivedOwnerInt; // 0x0260
        uint8_t pad_0261[0x3]; // 0x0261
        int32_t ownerChangeIndicator; // 0x0264
        uint8_t pad_0265[0x3]; // 0x0265
        int32_t receivedStatesCounter; // 0x0268
    
        // Methods
        float get_localTime();
        void set_localTime(float value);
        static bool validateState(StateMirror* latestReceivedState, StateMirror* latestValidatedState);
        NetworkIdentity* get_netIdentity();
        bool get_hasAuthorityOrUnownedOnServer();
        bool get_hasControl();
        void Awake();
        void OnDestroy();
        void SetObjectToSync(GameObject* childObjectToSync);
        void Update();
        void FixedUpdate();
        void SmoothSyncUpdate();
        void OnEnable();
        void OnDisable();
        void OnSceneLoaded(Scene scene, LoadSceneMode mode);
        void OnStartAuthority();
        void ResetLocalTime();
        void OnRemoteTimeReset();
        void sendState();
        void authorityChangeUpdate();
        void applyInterpolationOrExtrapolation();
        void interpolate(float interpolationTime);
        bool extrapolate(float interpolationTime);
        void shouldTeleport(StateMirror* start, StateMirror* end, float interpolationTime, float t);
        Vector3 getPosition();
        Quaternion getRotation();
        Vector3 getScale();
        void setPosition(Vector3 position, bool isTeleporting);
        void setRotation(Quaternion rotation, bool isTeleporting);
        void setScale(Vector3 scale);
        void resetFlags();
        void addState(StateMirror* state);
        void stopEasing();
        void clearBuffer();
        void teleport();
        void teleportOwnedObjectFromOwner();
        void teleportAnyObjectFromServer(Vector3 newPosition, Quaternion newRotation, Vector3 newScale);
        void RpcNonServerOwnedTeleportFromServer(Vector3 newPosition, Vector3 newRotation, Vector3 newScale);
        void CmdTeleport(Vector3 position, Vector3 rotation, Vector3 scale, float tempOwnerTime);
        void RpcTeleport(Vector3 position, Vector3 rotation, Vector3 scale, float tempOwnerTime);
        void addTeleportState(StateMirror* teleportState);
        void forceStateSendNextFixedUpdate();
        void AssignAuthorityCallback(NetworkConnection* conn, NetworkIdentity* theNetID, bool authorityState);
        void OnStartServer();
        void OnStartClient();
        void registerClientHandlers();
        bool shouldSendPosition();
        bool shouldSendRotation();
        bool shouldSendScale();
        bool shouldSendVelocity();
        bool shouldSendAngularVelocity();
        bool get_isSyncingXPosition();
        bool get_isSyncingYPosition();
        bool get_isSyncingZPosition();
        bool get_isSyncingXRotation();
        bool get_isSyncingYRotation();
        bool get_isSyncingZRotation();
        bool get_isSyncingXScale();
        bool get_isSyncingYScale();
        bool get_isSyncingZScale();
        bool get_isSyncingXVelocity();
        bool get_isSyncingYVelocity();
        bool get_isSyncingZVelocity();
        bool get_isSyncingXAngularVelocity();
        bool get_isSyncingYAngularVelocity();
        bool get_isSyncingZAngularVelocity();
        void SendStateToNonOwners(NetworkStateMirror state);
        static void HandleSyncServer(NetworkConnectionToClient* conn, NetworkStateMirror networkState);
        static void HandleSyncClient(NetworkStateMirror networkState);
        void checkIfOwnerHasChanged(StateMirror* newState);
        float GetNetworkSendInterval();
        float get_approximateNetworkTimeOnOwner();
        void set_approximateNetworkTimeOnOwner(float value);
        void adjustOwnerTime();
        void .ctor();
        bool Weaved();
        void UserCode_RpcNonServerOwnedTeleportFromServer__Vector3__Vector3__Vector3(Vector3 newPosition, Vector3 newRotation, Vector3 newScale);
        static void InvokeUserCode_RpcNonServerOwnedTeleportFromServer__Vector3__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
        void UserCode_CmdTeleport__Vector3__Vector3__Vector3__Single(Vector3 position, Vector3 rotation, Vector3 scale, float tempOwnerTime);
        static void InvokeUserCode_CmdTeleport__Vector3__Vector3__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
        void UserCode_RpcTeleport__Vector3__Vector3__Vector3__Single(Vector3 position, Vector3 rotation, Vector3 scale, float tempOwnerTime);
        static void InvokeUserCode_RpcTeleport__Vector3__Vector3__Vector3__Single(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
        static void .cctor();
    };

    // Namespace: Smooth
    class StateMirror
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float ownerTimestamp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        Vector3 position; // 0x0014
        uint8_t pad_0015[0xB]; // 0x0015
        Quaternion rotation; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        Vector3 scale; // 0x0030
        uint8_t pad_0031[0xB]; // 0x0031
        Vector3 velocity; // 0x003C
        uint8_t pad_003D[0xB]; // 0x003D
        Vector3 angularVelocity; // 0x0048
        uint8_t pad_0049[0xB]; // 0x0049
        bool teleport; // 0x0054
        bool atPositionalRest; // 0x0055
        bool atRotationalRest; // 0x0056
        uint8_t pad_0057[0x1]; // 0x0057
        float receivedOnServerTimestamp; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float receivedTimestamp; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t localTimeResetIndicator; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        Vector3 reusableRotationVector; // 0x0064
        uint8_t pad_0065[0xB]; // 0x0065
        bool serverShouldRelayPosition; // 0x0070
        bool serverShouldRelayRotation; // 0x0071
        bool serverShouldRelayScale; // 0x0072
        bool serverShouldRelayVelocity; // 0x0073
        bool serverShouldRelayAngularVelocity; // 0x0074
    
        // Methods
        void .ctor();
        StateMirror* copyFromState(StateMirror* state);
        static StateMirror* Lerp(StateMirror* targetTempStateMirror, StateMirror* start, StateMirror* end, float t);
        void resetTheVariables();
        void copyFromSmoothSync(SmoothSyncMirror* smoothSyncScript);
    };

    // Namespace: Smooth
    struct NetworkStateMirror
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        SmoothSyncMirror* smoothSync; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        StateMirror* state; // 0x0018
    
        // Methods
        void copyFromSmoothSync(SmoothSyncMirror* smoothSyncScript);
    };

    // Namespace: Smooth
    class SyncProjectilesMessageFunctions
    {
    public:
        // Static fields
        // static uint8_t positionMask;
        // static uint8_t rotationMask;
        // static uint8_t scaleMask;
        // static uint8_t velocityMask;
        // static uint8_t angularVelocityMask;
        // static uint8_t atPositionalRestMask;
        // static uint8_t atRotationalRestMask;
    
    
        // Methods
        static void Serialize(NetworkWriter* writer, NetworkStateMirror msg);
        static NetworkStateMirror Deserialize(NetworkReader* reader);
        static uint8_t encodeSyncInformation(bool sendPosition, bool sendRotation, bool sendScale, bool sendVelocity, bool sendAngularVelocity, bool atPositionalRest, bool atRotationalRest);
        static bool shouldSyncPosition(uint8_t syncInformation);
        static bool shouldSyncRotation(uint8_t syncInformation);
        static bool shouldSyncScale(uint8_t syncInformation);
        static bool shouldSyncVelocity(uint8_t syncInformation);
        static bool shouldSyncAngularVelocity(uint8_t syncInformation);
        static bool shouldBeAtPositionalRest(uint8_t syncInformation);
        static bool shouldBeAtRotationalRest(uint8_t syncInformation);
    };

} // namespace Smooth

namespace PilotoStudio
{

    // Namespace: PilotoStudio
    class BeamEmitter : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.LineRenderer> beams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<UnityEngine.ParticleSystem> beamSystems; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* beamTarget; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* beamTargetHitFX; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<System.Single> desiredWidth; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<UnityEngine.ParticleSystem.MinMaxCurve> defaultDensity; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float beamLifetime; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float beamFormationTime; // 0x0054
    
        // Methods
        void AssignChildBeamsToArray();
        void GetChildLineRenderers();
        void GetChildBeamEmitters();
        void AssignBeamThickness();
        void OnEnable();
        IEnumerator* BeamStart();
        void CacheParticleDensity();
        void UpdateParticleDensity();
        void UpdateImpactFX();
        void PreviewBeam();
        void PlayBeam();
        IEnumerator* BeamPlayComplete();
        void StartLineRenderers();
        void PlayLineRenderers();
        void PlayEdgeSystems();
        void Update();
        void .ctor();
    };

    // Namespace: PilotoStudio
    class ParticleHandler : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* castParticle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* loopingParticle; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* endParticle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        ParticleSystem* castParticleSystem; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        ParticleSystem* loopingParticleSystem; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ParticleSystem* endParticleSystem; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float castFXDuration; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float loopDuration; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float startEmission; // 0x0058
    
        // Methods
        void OnEnable();
        void Cast();
        IEnumerator* Flow();
        IEnumerator* WaitUntilParticleSystemStops(ParticleSystem* particleSystem);
        void PlayParticles(ParticleSystem* particleSystem, float duration);
        IEnumerator* StopParticleAfterTime(ParticleSystem* particleSystem, float duration);
        void .ctor();
    };

    // Namespace: PilotoStudio
    class ParticleShowcase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.GameObject> particles; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Text* displayName; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t currentlyActive; // 0x0030
    
        // Methods
        void Start();
        void PostUpdateLogic();
        void ActivateNext();
        void ActivatePrevious();
        void Update();
        void .ctor();
    };

    // Namespace: PilotoStudio
    class Rotator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float x; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float y; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float z; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool useGlobal; // 0x002C
    
        // Methods
        void Update();
        void .ctor();
    };

    // Namespace: PilotoStudio
    class DistortionGrabber : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t OpaqueTexID;
        // static int32_t TempTexID;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Camera* _camera; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        CommandBuffer* _buffer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        ParticleSystem* _fx; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool _active; // 0x0038
    
        // Methods
        void Awake();
        void LateUpdate();
        void EnableEffect();
        void DisableEffect();
        void OnDisable();
        void .ctor();
        static void .cctor();
    };

} // namespace PilotoStudio

namespace INab.Common
{

    // Namespace: INab.Common
    class TrailTransform : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        WeaponTrailEffect* weaponTrailEffect; // 0x0020
    
        // Methods
        void Update();
        void .ctor();
    };

    // Namespace: INab.Common
    class TrailPresetSettings
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        AnimationClip* clipAsset; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool enableTrail; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float startTime; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float endTime; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float fadeInDuration_slider; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float fadeOutDuration; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float trailLengthLifetime; // 0x002C
    
        // Methods
        float get_fadeInDuration();
        void .ctor(AnimationClip* clip);
    };

    // Namespace: INab.Common
    class WeaponTrailEffect : public MonoBehaviour
    {
    public:
        // Static fields
        // static MonoString* DefaultPrefabPath;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<System.String> visualEffectAssetNames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* trailPrefab; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* instantiatedTrailPrefab; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* trailName; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* lineTipTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Transform* lineBottomTransform; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Transform* weaponMountTransform; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        UnityEvent* onTrailStartEvent; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        UnityEvent* onTrailEndEvent; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        VisualEffect* vfxComponent; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        VFXPropertyBinder* vfxBinder; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Coroutine* effectCoroutineRuntime; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<INab.Common.WeaponTrailEffect.ClipPreset> clipPresets; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Collections.Generic.List<UnityEngine.AnimationClip> animationClipList; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        String[][] animationClipsNames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        AnimationClip* currentlyPlayingClip; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Animator* currentlyUsedAnimator; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        bool debugMode; // 0x00A8
        bool enableGizmos; // 0x00A9
        bool rootMotion; // 0x00AA
        uint8_t pad_00AB[0x1]; // 0x00AB
        TrailUsageType trailUsageType; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool useEvents; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        EffectState currentEffectState; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        int32_t selectedClipIndex; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        float playbackSpeed; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        AnimationPlaybackMode animationPlaybackMode; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        bool isPlayingLoop; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float rangeOffset; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        bool pausePreviewEnabled; // 0x00CC
        bool useStop; // 0x00CD
        uint8_t pad_00CE[0x2]; // 0x00CE
        float pausePreviewFactor; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        bool autoPreviewEnabled; // 0x00D4
        bool _trailEventsAdded; // 0x00D5
        uint8_t pad_00D6[0x2]; // 0x00D6
        float trailSegmentAnimationPlaybackTime; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float fullClipAnimationPlaybackTime; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        bool isPlayingFullClip; // 0x00E0
        bool isPlayingTrailSegment; // 0x00E1
        uint8_t pad_00E2[0x2]; // 0x00E2
        float elapsedPlaybackTime; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        float playbackDuration; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float playbackDuration_PreviewStop; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        bool hasPausedPreview; // 0x00F0
        bool hasStartedTrail; // 0x00F1
        bool hasEndedTrail; // 0x00F2
        uint8_t pad_00F3[0x5]; // 0x00F3
        PlayableGraph playableGraph; // 0x00F8
        uint8_t pad_00F9[0xF]; // 0x00F9
        AnimationClipPlayable clipPlayable; // 0x0108
        uint8_t pad_0109[0xF]; // 0x0109
        bool isPlayableGraphInitialized; // 0x0118
        bool _Foldout_1; // 0x0119
        bool _Foldout_2; // 0x011A
        bool _Foldout_3; // 0x011B
        bool _Foldout_4; // 0x011C
        bool _Foldout_5; // 0x011D
        uint8_t pad_011E[0x2]; // 0x011E
        float fadeInDuration_ManualTesting; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float fadeOutDuration_ManualTesting; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        float trailLengthLifetime_ManualTesting; // 0x0128
    
        // Methods
        MonoString* get_PrefabName();
        MonoString* get_PrefabAssetPath();
        TrailPresetSettings* get_SelectedTrailPreset();
        int32_t get_animationClipsCount();
        AnimationClip* get_SelectedClip();
        int32_t FindEntryIndex(AnimationClip* clip);
        TrailPresetSettings* GetOrCreatePresetForClip(AnimationClip* clip);
        void EnsurePresetsForAllClips();
        void EventSetTrailLength(TrailEventData* data);
        void EventStartTrail(TrailEventData* data);
        void EventStopTrail(TrailEventData* data);
        void AddTrailEventsAtStart();
        void InvokeStartTrailEvent();
        void InvokeStopTrailEvent();
        void AutoPreviewStart();
        void UpdatePreviewPlayback();
        void PlayTrailSegmentPreview(bool useStop);
        void PlayFullClipPreview();
        void EvaluatePreviewPose(Animator* targetAnimator, AnimationClip* clip, float time);
        void DisposePreviewGraph();
        void _PreviewPoseAtTime(float time);
        bool _CheckSelectedPrefab();
        bool _SaveAsNewPrefab();
        void _ApplyPrefabChanges();
        bool _LoadPrefab();
        bool _InstantiateTrailPrefab();
        void _CreateDefaultLineTransforms();
        void ConfigureVFXBinders();
        void SetProperty_EffectAlive(float value);
        void SetProperty_EffectActive(bool isActive);
        void SetProperty_Length(float value);
        void SendPlayEvent();
        void SendStopEvent();
        void StartEffectCoroutine(IEnumerator* enumerator);
        IEnumerator* PlayEffectEnumerator(float fadeInDuration);
        IEnumerator* StopEffectEnumerator(float fadeOutDuration);
        void OnDisable();
        void OnDestroy();
        void OnEnable();
        void Start();
        void Update();
        void SetLengthMultiplier(float newLengthMultiplier);
        void SetNewTrailPrefab(GameObject* newTrailPrefab);
        void SetTrailLength(float trailLengthLifetime);
        void StartTrailWithLength(float fadeInDuration, float trailLengthLifetime);
        void StartTrail(float fadeInDuration);
        void StopTrail(float fadeOutDuration);
        void .ctor();
        static void .cctor();
    };

} // namespace INab.Common

namespace INab.CommonVFX
{

    // Namespace: INab.CommonVFX
    class VFXLossyTransformBinder : public VFXBinderBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        ExposedProperty* m_Property; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* Target; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        ExposedProperty* Position; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        ExposedProperty* Angles; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ExposedProperty* Scale; // 0x0048
    
        // Methods
        MonoString* get_Property();
        void set_Property(MonoString* value);
        void OnEnable();
        void OnValidate();
        void UpdateSubProperties();
        bool IsValid(VisualEffect* component);
        void UpdateBinding(VisualEffect* component);
        MonoString* ToString();
        void .ctor();
    };

} // namespace INab.CommonVFX

namespace INab.Demo
{

    // Namespace: INab.Demo
    class BasicRigidBodyPush : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        LayerMask pushLayers; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool canPush; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float strength; // 0x0028
    
        // Methods
        void OnControllerColliderHit(ControllerColliderHit* hit);
        void PushRigidBodies(ControllerColliderHit* hit);
        void .ctor();
    };

    // Namespace: INab.Demo
    class FirstPersonController : public MonoBehaviour
    {
    public:
        // Static fields
        // static float _threshold;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* CinemachineCameraTarget; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        CharacterController* _controller; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* _mainCamera; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float MoveSpeed; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float SprintSpeed; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float RotationSpeed; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float SpeedChangeRate; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float JumpHeight; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float Gravity; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float JumpTimeout; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float FallTimeout; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        bool Grounded; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float GroundedOffset; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float GroundedRadius; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        LayerMask GroundLayers; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float TopClamp; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float BottomClamp; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float _cinemachineTargetPitch; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float _speed; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float _rotationVelocity; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float _verticalVelocity; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float _terminalVelocity; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float _jumpTimeoutDelta; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float _fallTimeoutDelta; // 0x0088
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void LateUpdate();
        void GroundedCheck();
        void CameraRotation();
        void Move();
        void JumpAndGravity();
        static float ClampAngle(float lfAngle, float lfMin, float lfMax);
        void OnDrawGizmosSelected();
        void .ctor();
    };

    // Namespace: INab.Demo
    class TrailAnimationEventsShowcase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        WeaponTrailEffect* trailEffect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float trailLength; // 0x0028
    
        // Methods
        void CallStartTrail(float fadeInDuration);
        void CallEndTrail(float fadeOutDuration);
        void .ctor();
    };

    // Namespace: INab.Demo
    class TrailAPIShowcase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        WeaponTrailEffect* trailEffect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* trailPrefab1; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* trailPrefab2; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float trailLength; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float fadeInDuration; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float fadeOutDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float lengthMultiplier; // 0x0044
    
        // Methods
        void SetLengthPropertyWithSlider(float newValue);
        void SetTrailLength();
        void StartTrail();
        void EndTrail();
        void ChangeLengthMultiplier();
        void SetNewTrailPrefab(GameObject* newPrefab);
        void SetTrailPrefab1();
        void SetTrailPrefab2();
        void .ctor();
    };

    // Namespace: INab.Demo
    class RotateAroundAxisTrail : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float rotationSpeed; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3 axis; // 0x0024
        uint8_t pad_0025[0xB]; // 0x0025
        bool updateInEditor; // 0x0030
    
        // Methods
        void Update();
        void .ctor();
    };

    // Namespace: INab.Demo
    class RuntimeAnimatorPlayer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.GameObject> trailPrefabs; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        WeaponTrailEffect* weaponTrailEffect; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Animator* currentlyUsedAnimator; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<UnityEngine.AnimationClip> animationClipList; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        String[][] animationClipsNames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TextMeshProUGUI* clipNameText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TextMeshProUGUI* trailsPrefabName; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.GameObject> cameras; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float trailLengthMultiplier; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float animationSpeed; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t selectedTrailPrefab; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool useAnimations; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t selectedClipIndex; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool useCameras; // 0x0074
    
        // Methods
        int32_t get_AnimationClipsCount();
        AnimationClip* get_SelectedClip();
        void Start();
        void OnEnable();
        void FindAnimations();
        void PlaySelected();
        void ChangedSlider(float value);
        void ChangedAnimationSpeedSlider(float value);
        void Update();
        void SetActiveCamera(int32_t index);
        void .ctor();
    };

    // Namespace: INab.Demo
    class ShowcaseAutoPlay : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.GameObject> trailCategories; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t selectedClipIndex; // 0x0028
    
        // Methods
        void SetActiveCategory();
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: INab.Demo
    class ShowcaseSpawnerTrail : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.GameObject> trailPrefabs; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* mesh; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* parentTransform; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<UnityEngine.GameObject> spawnedObjects; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Vector3 axis; // 0x0040
        uint8_t pad_0041[0xB]; // 0x0041
        float stepDistance; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        Vector3 defaulLocalRotation; // 0x0050
        uint8_t pad_0051[0xB]; // 0x0051
        float trailLength; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float rotationSpeed; // 0x0060
    
        // Methods
        void OnEnable();
        void OnValidate();
        void SpawnPrefabs();
        void AddTestPrefab();
        void DestroyPrefabs();
        void PlayAll();
        void StopAll();
        void ChangleLengthAll();
        void ChangleRotationSpeedAll();
        void PauseAll();
        void GetPrefabsFromChildren();
        void .ctor();
    };

} // namespace INab.Demo

namespace ETFXPEL
{

    // Namespace: ETFXPEL
    class ParticleEffectsLibrary : public MonoBehaviour
    {
    public:
        // Static fields
        // static ParticleEffectsLibrary* GlobalAccess;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Vector3[][] ParticleEffectSpawnOffsets; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Single[][] ParticleEffectLifetimes; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject[][] ParticleEffectPrefabs; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* effectNameString; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<UnityEngine.Transform> currentActivePEList; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t TotalEffects; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t CurrentParticleEffectIndex; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t CurrentParticleEffectNum; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        Vector3 spawnPosition; // 0x0054
    
        // Methods
        void Awake();
        void Start();
        MonoString* GetCurrentPENameString();
        void PreviousParticleEffect();
        void NextParticleEffect();
        void SpawnParticleEffect(Vector3 positionInWorldToSpawn);
        void .ctor();
    };

    // Namespace: ETFXPEL
    struct ButtonTypes
    {
    public:
        // Static fields
        // static ButtonTypes NotDefined;
        // static ButtonTypes Previous;
        // static ButtonTypes Next;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: ETFXPEL
    class PEButtonScript : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Button* myButton; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ButtonTypes ButtonType; // 0x0028
    
        // Methods
        void Start();
        void OnPointerEnter(PointerEventData* eventData);
        void OnPointerExit(PointerEventData* eventData);
        void OnButtonClicked();
        void .ctor();
    };

    // Namespace: ETFXPEL
    class UICanvasManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static UICanvasManager* GlobalAccess;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Text* PENameText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Text* ToolTipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool MouseOverButton; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        RaycastHit rayHit; // 0x0034
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void UpdateToolTip(ButtonTypes toolTipType);
        void ClearToolTip();
        void SelectPreviousPE();
        void SelectNextPE();
        void SpawnCurrentParticleEffect();
        void UIButtonClick(ButtonTypes buttonTypeClicked);
        void .ctor();
    };

} // namespace ETFXPEL

namespace EpicToonFX
{

    // Namespace: EpicToonFX
    class ETFXEffectController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] effects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* currentEffect; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Text* effectNameText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Text* effectIndexText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        ETFXMouseOrbit* etfxMouseOrbit; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t effectIndex; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        bool disableLights; // 0x004C
        bool disableSound; // 0x004D
        uint8_t pad_004E[0x2]; // 0x004E
        float startDelay; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float respawnDelay; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        bool slideshowMode; // 0x0058
        bool autoRotation; // 0x0059
        uint8_t pad_005A[0x2]; // 0x005A
        float autoRotationSpeed; // 0x005C
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void FixedUpdate();
        void InitializeLoop();
        void NextEffect();
        void PreviousEffect();
        void CleanCurrentEffect();
        IEnumerator* EffectLoop();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXEffectControllerPooled : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] effects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<UnityEngine.GameObject> effectsPool; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* currentEffect; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Text* effectNameText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Text* effectIndexText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ETFXMouseOrbit* etfxMouseOrbit; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t effectIndex; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        bool disableLights; // 0x0054
        bool disableSound; // 0x0055
        uint8_t pad_0056[0x2]; // 0x0056
        float startDelay; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float respawnDelay; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        bool slideshowMode; // 0x0060
        bool autoRotation; // 0x0061
        uint8_t pad_0062[0x2]; // 0x0062
        float autoRotationSpeed; // 0x0064
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void FixedUpdate();
        void InitializeLoop();
        void NextEffect();
        void PreviousEffect();
        void CleanCurrentEffect();
        IEnumerator* EffectLoop();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXEffectCycler : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<UnityEngine.GameObject> listOfEffects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t effectIndex; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float loopLength; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float startDelay; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool disableLights; // 0x0034
        bool disableSound; // 0x0035
    
        // Methods
        void Start();
        void PlayEffect();
        IEnumerator* EffectLoop();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXFireProjectile : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] projectiles; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Text* missileNameText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Toggle* fullAutoButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Slider* speedSlider; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* spawnPosition; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* gunPrefab; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* instantiatedGun; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool cleanUpMissileName; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t currentProjectile; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float speed; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float spawnOffset; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float fireRate; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool isFullAuto; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float gunOffset; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool canShoot; // 0x0074
    
        // Methods
        void Start();
        void Update();
        IEnumerator* Shoot();
        void ShootProjectile();
        void UpdateGunPositionAndRotation();
        void nextEffect();
        void previousEffect();
        void UpdateDisplayName();
        MonoString* CleanUpMissileName(MonoString* name);
        void OnSpeedSliderChanged(float value);
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXLoopScript : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* chosenEffect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float loopTimeLimit; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool disableLights; // 0x002C
        bool disableSound; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        float spawnScale; // 0x0030
    
        // Methods
        void Start();
        void PlayEffect();
        IEnumerator* EffectLoop();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXMouseOrbit : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* target; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ETFXEffectController* etfxEffectController; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        ETFXEffectControllerPooled* etfxEffectControllerPooled; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float distance; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float xSpeed; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float ySpeed; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float yMinLimit; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float yMaxLimit; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float distanceMin; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float distanceMax; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float smoothTime; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float rotationYAxis; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float rotationXAxis; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float velocityX; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float maxVelocityX; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float velocityY; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float autoRotationSmoothing; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool isAutoRotating; // 0x0070
    
        // Methods
        void Start();
        void Update();
        void FixedUpdate();
        static float ClampAngle(float angle, float min, float max);
        void InitializeAutoRotation();
        void SetAutoRotationSpeed(float rotationSpeed);
        void StopAutoRotation();
        IEnumerator* AutoRotate();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXProjectileScript : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* impactParticle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* projectileParticle; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* muzzleParticle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject[][] trailParticles; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Rigidbody* rb; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Transform* myTransform; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        SphereCollider* sphereCollider; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float colliderRadius; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float collideOffset; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float destroyTimer; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool destroyed; // 0x0064
    
        // Methods
        void Start();
        void FixedUpdate();
        void DestroyMissile();
        void RotateTowardsDirection(bool immediate);
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXSceneManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool GUIHide; // 0x0020
        bool GUIHide2; // 0x0021
        bool GUIHide3; // 0x0022
        bool GUIHide4; // 0x0023
    
        // Methods
        void LoadScene2DDemo();
        void LoadSceneCards();
        void LoadSceneCombat();
        void LoadSceneDecals();
        void LoadSceneDecals2();
        void LoadSceneEmojis();
        void LoadSceneEmojis2();
        void LoadSceneExplosions();
        void LoadSceneExplosions2();
        void LoadSceneFire();
        void LoadSceneOnomatopoeia();
        void LoadSceneFireworks();
        void LoadSceneFlares();
        void LoadSceneMagic();
        void LoadSceneMagic2();
        void LoadSceneMagic3();
        void LoadSceneMainDemo();
        void LoadSceneMissiles();
        void LoadScenePortals();
        void LoadScenePortals2();
        void LoadScenePowerups();
        void LoadScenePowerups2();
        void LoadScenePowerups3();
        void LoadSceneSparkles();
        void LoadSceneSwordCombat();
        void LoadSceneSwordCombat2();
        void LoadSceneMoney();
        void LoadSceneHealing();
        void LoadSceneWind();
        void LoadSceneWater();
        void LoadSceneFruit();
        void Update();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXSpriteBouncer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float scaleAmount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float scaleDuration; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Vector3 startScale; // 0x0028
        uint8_t pad_0029[0xB]; // 0x0029
        float scaleTimer; // 0x0034
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class TargetEffects
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        GameObject* hitParticle; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        GameObject* respawnParticle; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.List<UnityEngine.GameObject> deathParticles; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* destroySound; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioClip* respawnSound; // 0x0030
    
        // Methods
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXTarget : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TargetEffects* effects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Renderer* targetRenderer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Collider* targetCollider; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioSource* audioSource; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        int32_t hitsToDestroy; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float respawnTime; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool enableSquashAndStretch; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float duration; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        Vector3 squashScale; // 0x0050
        uint8_t pad_0051[0xB]; // 0x0051
        Vector3 stretchScale; // 0x005C
        uint8_t pad_005D[0xB]; // 0x005D
        int32_t currentHits; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Vector3 originalScale; // 0x006C
    
        // Methods
        void Start();
        void SpawnTarget();
        IEnumerator* Respawn();
        void OnHit();
        IEnumerator* SquashAndStretch();
        void DestroyTarget();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXLightFade : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Light* li; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float life; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        OnLifeEnd onLifeEnd; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float initIntensity; // 0x0030
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXPitchRandomizer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float randomPercent; // 0x0020
    
        // Methods
        void Start();
        void .ctor();
    };

    // Namespace: EpicToonFX
    class ETFXRotation : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Vector3 rotateVector; // 0x0020
        uint8_t pad_0021[0xB]; // 0x0021
        spaceEnum rotateSpace; // 0x002C
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

} // namespace EpicToonFX

namespace Synty.AnimationBaseLocomotion.Samples
{

    // Namespace: Synty.AnimationBaseLocomotion.Samples
    class SampleCameraController : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t _LAG_DELTA_TIME_ADJUSTMENT;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* _syntyCharacter; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Camera* _mainCamera; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* _playerTarget; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Transform* _lockOnTarget; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        InputReader* _inputReader; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Transform* _syntyCamera; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool _invertCamera; // 0x0050
        bool _hideCursor; // 0x0051
        bool _isLockedOn; // 0x0052
        uint8_t pad_0053[0x1]; // 0x0053
        float _mouseSensitivity; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float _cameraDistance; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float _cameraHeightOffset; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float _cameraHorizontalOffset; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float _cameraTiltOffset; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Vector2 _cameraTiltBounds; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        float _positionalCameraLag; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float _rotationalCameraLag; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float _cameraInversion; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float _lastAngleX; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float _lastAngleY; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        Vector3 _lastPosition; // 0x0084
        uint8_t pad_0085[0xB]; // 0x0085
        float _newAngleX; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float _newAngleY; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        Vector3 _newPosition; // 0x0098
        uint8_t pad_0099[0xB]; // 0x0099
        float _rotationX; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        float _rotationY; // 0x00A8
    
        // Methods
        void Start();
        void Update();
        void LockOn(bool enable, Transform* newLockOnTarget);
        Vector3 GetCameraPosition();
        Vector3 GetCameraForward();
        Vector3 GetCameraForwardZeroedY();
        Vector3 GetCameraForwardZeroedYNormalised();
        Vector3 GetCameraRightZeroedY();
        Vector3 GetCameraRightZeroedYNormalised();
        float GetCameraTiltX();
        void .ctor();
    };

    // Namespace: Synty.AnimationBaseLocomotion.Samples
    class SampleObjectLockOn : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Material* _highlightMat; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Material* _targetMat; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* _highlightOrb; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MeshRenderer* _meshRenderer; // 0x0038
    
        // Methods
        void Start();
        void OnTriggerEnter(Collider* otherCollider);
        void OnTriggerExit(Collider* otherCollider);
        void Highlight(bool enable, bool targetLock);
        void .ctor();
    };

    // Namespace: Synty.AnimationBaseLocomotion.Samples
    class SamplePlayerAnimationController : public MonoBehaviour
    {
    public:
        // Static fields
        // static float _ANIMATION_DAMP_TIME;
        // static float _STRAFE_DIRECTION_DAMP_TIME;
    
        uint8_t pad_0000[0x20]; // 0x0000
        SampleCameraController* _cameraController; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        InputReader* _inputReader; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Animator* _animator; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        CharacterController* _controller; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* _rearRayPos; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Transform* _frontRayPos; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AnimationCurve* _headLookXCurve; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AnimationCurve* _bodyLookXCurve; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        AnimationCurve* _leanCurve; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<UnityEngine.GameObject> _currentTargetCandidates; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        GameObject* _currentLockOnTarget; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Transform* _targetLockOnPos; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int32_t _movementInputTappedHash; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t _movementInputPressedHash; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        int32_t _movementInputHeldHash; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        int32_t _shuffleDirectionXHash; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        int32_t _shuffleDirectionZHash; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        int32_t _moveSpeedHash; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        int32_t _currentGaitHash; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        int32_t _isJumpingAnimHash; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        int32_t _fallingDurationHash; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t _inclineAngleHash; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        int32_t _strafeDirectionXHash; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t _strafeDirectionZHash; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        int32_t _forwardStrafeHash; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        int32_t _cameraRotationOffsetHash; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        int32_t _isStrafingHash; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t _isTurningInPlaceHash; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        int32_t _isCrouchingHash; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        int32_t _isWalkingHash; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        int32_t _isStoppedHash; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        int32_t _isStartingHash; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        int32_t _isGroundedHash; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        int32_t _leanValueHash; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        int32_t _headLookXHash; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t _headLookYHash; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        int32_t _bodyLookXHash; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        int32_t _bodyLookYHash; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        int32_t _locomotionStartDirectionHash; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        bool _alwaysStrafe; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float _walkSpeed; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float _runSpeed; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float _sprintSpeed; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float _speedChangeDamping; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float _rotationSmoothing; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float _cameraRotationOffset; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        float _buttonHoldThreshold; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        float _shuffleDirectionX; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float _shuffleDirectionZ; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        float _capsuleStandingHeight; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        float _capsuleStandingCentre; // 0x0118
        uint8_t pad_0119[0x3]; // 0x0119
        float _capsuleCrouchingHeight; // 0x011C
        uint8_t pad_011D[0x3]; // 0x011D
        float _capsuleCrouchingCentre; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float _forwardStrafeMinThreshold; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        float _forwardStrafeMaxThreshold; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        float _forwardStrafe; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        LayerMask _groundLayerMask; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        float _inclineAngle; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        float _groundedOffset; // 0x0138
        uint8_t pad_0139[0x3]; // 0x0139
        float _jumpForce; // 0x013C
        uint8_t pad_013D[0x3]; // 0x013D
        float _gravityMultiplier; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        float _fallingDuration; // 0x0144
        uint8_t pad_0145[0x3]; // 0x0145
        bool _enableHeadTurn; // 0x0148
        uint8_t pad_0149[0x3]; // 0x0149
        float _headLookDelay; // 0x014C
        uint8_t pad_014D[0x3]; // 0x014D
        float _headLookX; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float _headLookY; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        bool _enableBodyTurn; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        float _bodyLookDelay; // 0x015C
        uint8_t pad_015D[0x3]; // 0x015D
        float _bodyLookX; // 0x0160
        uint8_t pad_0161[0x3]; // 0x0161
        float _bodyLookY; // 0x0164
        uint8_t pad_0165[0x3]; // 0x0165
        bool _enableLean; // 0x0168
        uint8_t pad_0169[0x3]; // 0x0169
        float _leanDelay; // 0x016C
        uint8_t pad_016D[0x3]; // 0x016D
        float _leanValue; // 0x0170
        uint8_t pad_0171[0x3]; // 0x0171
        float _leansHeadLooksDelay; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        bool _animationClipEnd; // 0x0178
        uint8_t pad_0179[0x3]; // 0x0179
        AnimationState _currentState; // 0x017C
        uint8_t pad_017D[0x3]; // 0x017D
        bool _cannotStandUp; // 0x0180
        bool _crouchKeyPressed; // 0x0181
        bool _isAiming; // 0x0182
        bool _isCrouching; // 0x0183
        bool _isGrounded; // 0x0184
        bool _isLockedOn; // 0x0185
        bool _isSliding; // 0x0186
        bool _isSprinting; // 0x0187
        bool _isStarting; // 0x0188
        bool _isStopped; // 0x0189
        bool _isStrafing; // 0x018A
        bool _isTurningInPlace; // 0x018B
        bool _isWalking; // 0x018C
        bool _movementInputHeld; // 0x018D
        bool _movementInputPressed; // 0x018E
        bool _movementInputTapped; // 0x018F
        float _currentMaxSpeed; // 0x0190
        uint8_t pad_0191[0x3]; // 0x0191
        float _locomotionStartDirection; // 0x0194
        uint8_t pad_0195[0x3]; // 0x0195
        float _locomotionStartTimer; // 0x0198
        uint8_t pad_0199[0x3]; // 0x0199
        float _lookingAngle; // 0x019C
        uint8_t pad_019D[0x3]; // 0x019D
        float _newDirectionDifferenceAngle; // 0x01A0
        uint8_t pad_01A1[0x3]; // 0x01A1
        float _speed2D; // 0x01A4
        uint8_t pad_01A5[0x3]; // 0x01A5
        float _strafeAngle; // 0x01A8
        uint8_t pad_01A9[0x3]; // 0x01A9
        float _strafeDirectionX; // 0x01AC
        uint8_t pad_01AD[0x3]; // 0x01AD
        float _strafeDirectionZ; // 0x01B0
        uint8_t pad_01B1[0x3]; // 0x01B1
        GaitState _currentGait; // 0x01B4
        uint8_t pad_01B5[0x3]; // 0x01B5
        Vector3 _currentRotation; // 0x01B8
        uint8_t pad_01B9[0xB]; // 0x01B9
        Vector3 _moveDirection; // 0x01C4
        uint8_t pad_01C5[0xB]; // 0x01C5
        Vector3 _previousRotation; // 0x01D0
        uint8_t pad_01D1[0xB]; // 0x01D1
        Vector3 _velocity; // 0x01DC
        uint8_t pad_01DD[0xB]; // 0x01DD
        float _targetMaxSpeed; // 0x01E8
        uint8_t pad_01E9[0x3]; // 0x01E9
        float _fallStartTime; // 0x01EC
        uint8_t pad_01ED[0x3]; // 0x01ED
        float _rotationRate; // 0x01F0
        uint8_t pad_01F1[0x3]; // 0x01F1
        float _initialLeanValue; // 0x01F4
        uint8_t pad_01F5[0x3]; // 0x01F5
        float _initialTurnValue; // 0x01F8
        uint8_t pad_01F9[0x3]; // 0x01F9
        Vector3 _cameraForward; // 0x01FC
        uint8_t pad_01FD[0xB]; // 0x01FD
        Vector3 _targetVelocity; // 0x0208
    
        // Methods
        void Start();
        void ActivateAim();
        void DeactivateAim();
        void AddTargetCandidate(GameObject* newTarget);
        void RemoveTarget(GameObject* targetToRemove);
        void ToggleLockOn();
        void EnableLockOn(bool enable);
        void ToggleWalk();
        void EnableWalk(bool enable);
        void ActivateSprint();
        void DeactivateSprint();
        void ActivateCrouch();
        void DeactivateCrouch();
        void ActivateSliding();
        void DeactivateSliding();
        void CapsuleCrouchingSize(bool crouching);
        void SwitchState(AnimationState newState);
        void EnterState(AnimationState stateToEnter);
        void ExitCurrentState();
        void Update();
        void UpdateAnimatorController();
        void EnterBaseState();
        void CalculateInput();
        void Move();
        void ApplyGravity();
        void CalculateMoveDirection();
        void CalculateGait();
        void FaceMoveDirection();
        void CheckIfStopped();
        void CheckIfStarting();
        void UpdateStrafeDirection(float TargetZ, float TargetX);
        void GroundedCheck();
        void GroundInclineCheck();
        void CeilingHeightCheck();
        void ResetFallingDuration();
        void UpdateFallingDuration();
        void CheckEnableTurns();
        void CheckEnableLean();
        void CalculateRotationalAdditives(bool leansActivated, bool headLookActivated, bool bodyLookActivated);
        float CalculateSmoothedValue(float mainVariable, float newValue, float maxRateChange, float smoothness, AnimationCurve* referenceCurve, float referenceValue, bool isMultiplier);
        float VariableOverrideDelayTimer(float timeVariable);
        void UpdateBestTarget();
        void EnterLocomotionState();
        void UpdateLocomotionState();
        void ExitLocomotionState();
        void LocomotionToJumpState();
        void EnterJumpState();
        void UpdateJumpState();
        void ExitJumpState();
        void EnterFallState();
        void UpdateFallState();
        void EnterCrouchState();
        void UpdateCrouchState();
        void ExitCrouchState();
        void CrouchToJumpState();
        void SwitchToLocomotionState();
        void .ctor();
    };

} // namespace Synty.AnimationBaseLocomotion.Samples

namespace Synty.AnimationBaseLocomotion.Samples.InputSystem
{

    // Namespace: Synty.AnimationBaseLocomotion.Samples.InputSystem
    class InputReader : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Controls* _controls; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Action* onAimActivated; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Action* onAimDeactivated; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Action* onCrouchActivated; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Action* onCrouchDeactivated; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Action* onJumpPerformed; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Action* onLockOnToggled; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* onSprintActivated; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Action* onSprintDeactivated; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Action* onWalkToggled; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Vector2 _mouseDelta; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Vector2 _moveComposite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        float _movementInputDuration; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        bool _movementInputDetected; // 0x0084
    
        // Methods
        void OnEnable();
        void OnDisable();
        void OnLook(CallbackContext context);
        void OnMove(CallbackContext context);
        void OnJump(CallbackContext context);
        void OnToggleWalk(CallbackContext context);
        void OnSprint(CallbackContext context);
        void OnCrouch(CallbackContext context);
        void OnAim(CallbackContext context);
        void OnLockOn(CallbackContext context);
        void .ctor();
    };

} // namespace Synty.AnimationBaseLocomotion.Samples.InputSystem

namespace Polyart
{

    // Namespace: Polyart
    class FirstPersonController_Polyart : public MonoBehaviour
    {
    public:
        // Static fields
        // static FirstPersonController_Polyart* instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Interactable_Dreamscape* currentInteractable; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioSource* footstepAudioSource; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioClip[][] woodClips; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioClip[][] stoneClips; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        AudioClip[][] waterClips; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AudioClip[][] grassClips; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Camera* playerCamera; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        CharacterController* characterController; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool <CanMove>k__BackingField; // 0x0060
        bool canSprint; // 0x0061
        bool canJump; // 0x0062
        bool canCrouch; // 0x0063
        bool canHeadBob; // 0x0064
        bool canInteract; // 0x0065
        bool useFootsteps; // 0x0066
        uint8_t pad_0067[0x1]; // 0x0067
        KeyCode sprintKey; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        KeyCode jumpKey; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        KeyCode crouchKey; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        KeyCode interactKey; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        Vector3 interactionRayPoint; // 0x0078
        uint8_t pad_0079[0xB]; // 0x0079
        float interactionDistance; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        LayerMask interactionLayer; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float walkSpeed; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float sprintSpeed; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float crouchSpeed; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        float lookSpeedX; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float lookSpeedY; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float lowerLookLimit; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float upperLookLimit; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        float jumpForce; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        float gravity; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        float crouchHeight; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float standinghHeight; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        float timeToCrouch; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        Vector3 crouchCenter; // 0x00BC
        uint8_t pad_00BD[0xB]; // 0x00BD
        Vector3 standingCenter; // 0x00C8
        uint8_t pad_00C9[0xB]; // 0x00C9
        bool isCrouching; // 0x00D4
        bool duringCrouchAnim; // 0x00D5
        uint8_t pad_00D6[0x2]; // 0x00D6
        float walkBobSpeed; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float walkBobAmount; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float sprintBobSpeed; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float sprintBobAmount; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        float baseStepSpeed; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float crouchStepMultiplier; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float sprintStepMultiplier; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float footstepTimer; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float defaultYPos; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float timer; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        Vector3 moveDirection; // 0x0100
        uint8_t pad_0101[0xB]; // 0x0101
        Vector2 currentInput; // 0x010C
        uint8_t pad_010D[0x7]; // 0x010D
        float rotationX; // 0x0114
    
        // Methods
        bool get_CanMove();
        void set_CanMove(bool value);
        bool get_isSprinting();
        bool get_ShouldJump();
        bool get_ShouldCrouch();
        float get_GetCurrentOffset();
        void Awake();
        void Start();
        void Update();
        void HandleMovementInput();
        void HandleHeadBob();
        void HandleMouseLook();
        void HandleJump();
        void HandleCrouch();
        void ApplyFinalMovements();
        IEnumerator* CrouchStand();
        void HandleInteractionCheck();
        void HandleFootsteps();
        void HandleInteractionInput();
        void .ctor();
    };

    // Namespace: Polyart
    class Interactable_Dreamscape : public MonoBehaviour
    {
    public:
    
        // Methods
        void Awake();
        void OnInteract();
        void OnFocus();
        void OnLoseFocus();
        void .ctor();
    };

    // Namespace: Polyart
    class TestInteractable : public Interactable_Dreamscape
    {
    public:
    
        // Methods
        void OnFocus();
        void OnInteract();
        void OnLoseFocus();
        void .ctor();
    };

    // Namespace: Polyart
    class SceneEntrance : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* lastExitName; // 0x0020
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Polyart
    class SceneExit : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* sceneToLoad; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* exitName; // 0x0028
    
        // Methods
        void OnTriggerEnter(Collider* other);
        void .ctor();
    };

    // Namespace: Polyart
    class MillRotate : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float x; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float rotationSpeed; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float y; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float z; // 0x002C
    
        // Methods
        void Start();
        void FixedUpdate();
        void .ctor();
    };

    // Namespace: Polyart
    class Cull_Lights : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* playerController; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Light* lightSource; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float lightCullDistance; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float shadowCullDistance; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        bool shadowsEnabled; // 0x0038
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Polyart
    class Cull_Particles : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* particle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool isEnabled; // 0x0028
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Polyart
    class Flythrough : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* sun; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* rimLight; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Camera* mycamera; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float moveSpeed; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        Quaternion baseSunTransform; // 0x003C
        uint8_t pad_003D[0xF]; // 0x003D
        Quaternion baseRimLightTransform; // 0x004C
        uint8_t pad_004D[0xF]; // 0x004D
        float sunX; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float sunY; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float sunZ; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float defaultFov; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float baseSpeed; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float runSpeed; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float dashSpeed; // 0x0074
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Polyart
    class FPS_Counter : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GUIStyle* textStyle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float updateInterval; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float accum; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t frames; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float timeleft; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float fps; // 0x0038
    
        // Methods
        void Start();
        void Update();
        void OnGUI();
        void .ctor();
    };

    // Namespace: Polyart
    class SmoothMouseLook : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<System.Single> rotArrayX; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<System.Single> rotArrayY; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RotationAxes axes; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float sensitivityX; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float sensitivityY; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float minimumX; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float maximumX; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float minimumY; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float maximumY; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float rotationX; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float rotationY; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float rotAverageX; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float rotAverageY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float frameCounter; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        Quaternion originalRotation; // 0x0060
    
        // Methods
        void Update();
        void Start();
        static float ClampAngle(float angle, float min, float max);
        void .ctor();
    };

} // namespace Polyart

namespace ShatterStone
{

    // Namespace: ShatterStone
    class DemoClickInteraction : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Camera* mainCamera; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* oreNodeTag; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* orePickupTag; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float maxDistance; // 0x0038
    
        // Methods
        void Update();
        void .ctor();
    };

    // Namespace: ShatterStone
    class MiningNodeAudio : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip[][] impactClips; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip[][] shatterClips; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioSource* audioSource; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float volume; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        Vector2 pitchRange; // 0x003C
    
        // Methods
        void Awake();
        void PlayImpactSound();
        void PlayShatterSound();
        void PlayRandomClip(AudioClip[][] clipArray);
        void .ctor();
    };

    // Namespace: ShatterStone
    struct OreNodeBounds
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float minX; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float maxX; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float minZ; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float maxZ; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float centerY; // 0x0020
    
        // Methods
        void .ctor(float minX, float maxX, float minZ, float maxZ, float centerY);
    };

    // Namespace: ShatterStone
    class OreNode : public MonoBehaviour
    {
    public:
        // Static fields
        // static float DelayDestroySeconds;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* pieces; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* refinedPickup; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AnimationCurve* knockCurve; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MiningNodeAudio* nodeAudio; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Collider* nodeCollider; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Renderer[][] childRenderers; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t dropOnHit; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t hitsToDestroy; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int32_t dropOnDestroy; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        Vector3 knockAngle; // 0x005C
        uint8_t pad_005D[0xB]; // 0x005D
        float knockDuration; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool enableRespawn; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float respawnDelay; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool cacheVisualBoundaries; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        OreNodeBounds nodeBounds; // 0x0078
        uint8_t pad_0079[0x13]; // 0x0079
        int32_t hitIndex; // 0x008C
    
        // Methods
        void Start();
        void Interact();
        void Interact(int32_t hits);
        void oreHit();
        int32_t GetDropCount(int32_t hits);
        bool ShouldCalculateNodeBounds();
        OreNodeBounds CalculateNodeBounds();
        void InflictHit(int32_t dropCount);
        Vector3 CalculateRandomDropPosition(OreNodeBounds bounds);
        void ReplaceNodeVisualsWithBrokenOne();
        IEnumerator* Animate();
        void ResetNode(float respawnDelay);
        IEnumerator* ResetAsync(float respawnDelay);
        void RevertToInitialState();
        IEnumerator* DelayDestroy();
        void .ctor();
    };

    // Namespace: ShatterStone
    class PickaxeTrigger : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool hasEntered; // 0x0020
    
        // Methods
        void OnTriggerEnter(Collider* other);
        void OnTriggerExit(Collider* other);
        void .ctor();
    };

    // Namespace: ShatterStone
    class PickupController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        AnimationCurve* jumpCurve; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip[][] pickupClips; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioSource* audioSource; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float jumpDuration; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float jumpDistance; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float jumpHeight; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float spinRate; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool enableDespawn; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float timeToDespawn; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float volume; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        Vector2 pitchRange; // 0x0054
        uint8_t pad_0055[0x7]; // 0x0055
        bool jumpTrigger; // 0x005C
    
        // Methods
        void Awake();
        void Update();
        IEnumerator* SpawnAnimate();
        void CollectItem();
        IEnumerator* CollectDestroy(Transform* target);
        void PlayRandomClip(AudioClip[][] clipArray);
        void DespawnItem();
        IEnumerator* DespawnTimer();
        void .ctor();
    };

    // Namespace: ShatterStone
    class ShatterCleanUp : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<ShatterStone.ShatterCleanUp.PieceData> pieces; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float delayBeforeShrink; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float shrinkDuration; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float randomStartOffset; // 0x0030
    
        // Methods
        void Start();
        void CollectPiecesRecursive(Transform* current);
        IEnumerator* HandleShrink();
        void .ctor();
    };

} // namespace ShatterStone

namespace Biostart.DayNight
{

    // Namespace: Biostart.DayNight
    class DayNightCycle : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Light* sun; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Light* moon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Gradient* dayColor; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Gradient* nightColor; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        AnimationCurve* sunIntensityCurve; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AnimationCurve* moonIntensityCurve; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AnimationCurve* fogDensityCurve; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Gradient* nightDayFogColor; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float currentTimeOfDay; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float fogScale; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float sunRotationY; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float sunRotationSeconds; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float rotationSpeedMultiplier; // 0x0070
    
        // Methods
        void Start();
        void UpdateCycle();
        void SetSunRotation(float timeOfDay);
        void UpdatePosition();
        void UpdateFX();
        void OnValidate();
        void .ctor();
    };

    // Namespace: Biostart.DayNight
    class DayNightCycleWeather : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* timeDisplay; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Light* sun; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Light* moon; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Gradient* dayColor; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Gradient* nightColor; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AnimationCurve* sunIntensityCurve; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AnimationCurve* moonIntensityCurve; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AnimationCurve* fogDensityCurve; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Gradient* nightDayFogColor; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<Biostart.DayNight.WeatherEffect> weatherEffects; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Material* skyboxMaterial; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float currentTimeOfDay; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t currentDay; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t maxDay; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        bool enableCloudCoverage; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float minCloudCoverage; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float maxCloudCoverage; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float randomChangeInterval; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float coverageSecondPeriod; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        float currentRandomCoverage; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float timeSinceLastChange; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float fogScale; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float sunRotationY; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        float sunRotationSeconds; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        float rotationSpeedMultiplier; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        float cloudChangeSpeed; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float defaultCloudCoverage; // 0x00B4
    
        // Methods
        void Start();
        void Update();
        void UpdateCycle();
        void UpdateRandomCloudCoverage();
        void SetSunRotation(float timeOfDay);
        void UpdatePosition();
        void UpdateFX();
        void SetCurrentDay(int32_t day);
        MonoString* ConvertRangeToTime(float timeValue);
        void TriggerWeatherEffects(MonoString* currentTime, int32_t currentDay);
        bool IsTimeInRange(MonoString* currentTime, MonoString* startTime, MonoString* endTime);
        void OnApplicationQuit();
        void OnValidate();
        void .ctor();
    };

    // Namespace: Biostart.DayNight
    class DailyEffectSchedule
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<System.Int32> days; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoString* startTriggerTime; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        MonoString* endTriggerTime; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MonoString* startCloudCoverageTime; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* endCloudCoverageTime; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool enableCloudCoverage; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float cloudCoverage; // 0x003C
    
        // Methods
        void .ctor();
    };

    // Namespace: Biostart.DayNight
    class WeatherEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* effectName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        GameObject* effectObject; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.List<Biostart.DayNight.DailyEffectSchedule> dailySchedules; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool isStopping; // 0x0028
    
        // Methods
        IEnumerator* ActivateEffect(Material* skyboxMaterial, float changeSpeed);
        IEnumerator* DeactivateEffect(Material* skyboxMaterial, float changeSpeed, float defaultCloudCoverage);
        bool CheckEffectComplete();
        bool IsStopping();
        void .ctor();
    };

} // namespace Biostart.DayNight

namespace LayerLab.CasualGame
{

    // Namespace: LayerLab.CasualGame
    class PanelView : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] otherPanels; // 0x0020
    
        // Methods
        void OnEnable();
        void OnDisable();
        void .ctor();
    };

} // namespace LayerLab.CasualGame

namespace LayerLab.GUIScripts
{

    // Namespace: LayerLab.GUIScripts
    class PanelControl : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TextMeshProUGUI* _textTitle; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<UnityEngine.GameObject> defaultPanels; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<UnityEngine.GameObject> otherPanels; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Transform* panelTransformDefault; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* panelTransformOther; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* buttonPrev; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Button* buttonNext; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        int32_t _page; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool _isReady; // 0x005C
        bool <IsOtherMode>k__BackingField; // 0x005D
    
        // Methods
        bool get_IsOtherMode();
        void set_IsOtherMode(bool value);
        void OnValidate();
        void Reset();
        void Start();
        void Update();
        void Click_Prev();
        void Click_Next();
        void SetArrowActive();
        void CheckControl();
        void Click_Mode();
        void SetMode();
        void .ctor();
    };

} // namespace LayerLab.GUIScripts

namespace InputIcons
{

    // Namespace: InputIcons
    class II_UITKChangingTextExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        UIDocument* uiDoc; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Label* textToChange; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* labelID; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* textOne; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        MonoString* textTwo; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        float timer; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t displayNumber; // 0x004C
    
        // Methods
        void Start();
        void Update();
        void ChangeText();
        void .ctor();
    };

    // Namespace: InputIcons
    class II_UITKChangingTextOnTemplateExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        VisualElement* root; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        VisualTreeAsset* templateAsset; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        VisualElement* displayContainer; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* assetName; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        UIDocument* uiDoc; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Label* textToChange; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        MonoString* labelID; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        MonoString* textOne; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        MonoString* textTwo; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool templateShown; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float timer; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t displayNumber; // 0x0070
    
        // Methods
        void Awake();
        void Start();
        void Update();
        System.Threading.Tasks.Task<UnityEngine.UIElements.VisualTreeAsset> GetTemplateAsset();
        void ShowTemplate();
        void ChangeText();
        void .ctor();
    };

} // namespace InputIcons

namespace GogoGaga.OptimizedRopesAndCables
{

    // Namespace: GogoGaga.OptimizedRopesAndCables
    class CameraMove : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform[][] cameraPoses; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float speed; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t current; // 0x002C
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: GogoGaga.OptimizedRopesAndCables
    class PointsAssignExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* point1; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* point2; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Rope* rope; // 0x0030
    
        // Methods
        void Update();
        void .ctor();
    };

    // Namespace: GogoGaga.OptimizedRopesAndCables
    class Rope : public MonoBehaviour
    {
    public:
        // Static fields
        // static float StartPointWeight;
        // static float EndPointWeight;
        // static float valueThreshold;
        // static float velocityThreshold;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnPointsChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* startPoint; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* midPoint; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Transform* endPoint; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        LineRenderer* lineRenderer; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t linePoints; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float stiffness; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float damping; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float ropeLength; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float ropeWidth; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float midPointWeight; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float midPointPosition; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        Vector3 currentValue; // 0x0064
        uint8_t pad_0065[0xB]; // 0x0065
        Vector3 currentVelocity; // 0x0070
        uint8_t pad_0071[0xB]; // 0x0071
        Vector3 targetValue; // 0x007C
        uint8_t pad_007D[0xB]; // 0x007D
        Vector3 <otherPhysicsFactors>k__BackingField; // 0x0088
        uint8_t pad_0089[0xB]; // 0x0089
        bool isFirstFrame; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        Vector3 prevStartPointPosition; // 0x0098
        uint8_t pad_0099[0xB]; // 0x0099
        Vector3 prevEndPointPosition; // 0x00A4
        uint8_t pad_00A5[0xB]; // 0x00A5
        float prevMidPointPosition; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float prevMidPointWeight; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        float prevLineQuality; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        float prevRopeWidth; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        float prevstiffness; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float prevDampness; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float prevRopeLength; // 0x00C8
    
        // Methods
        void add_OnPointsChanged(Action* value);
        void remove_OnPointsChanged(Action* value);
        Transform* get_StartPoint();
        Transform* get_MidPoint();
        Transform* get_EndPoint();
        Vector3 get_otherPhysicsFactors();
        void set_otherPhysicsFactors(Vector3 value);
        bool get_IsPrefab();
        void Start();
        void OnValidate();
        void InitializeLineRenderer();
        void Update();
        bool AreEndPointsValid();
        void SetSplinePoint();
        float CalculateYFactorAdjustment(float weight);
        Vector3 GetMidPoint();
        Vector3 GetRationalBezierPoint(Vector3 p0, Vector3 p1, Vector3 p2, float t, float w0, float w1, float w2);
        Vector3 GetPointAt(float t);
        void FixedUpdate();
        void SimulatePhysics();
        void OnDrawGizmos();
        void SetStartPoint(Transform* newStartPoint, bool instantAssign);
        void SetMidPoint(Transform* newMidPoint, bool instantAssign);
        void SetEndPoint(Transform* newEndPoint, bool instantAssign);
        void RecalculateRope();
        void NotifyPointsChanged();
        bool IsPointsMoved();
        bool IsRopeSettingsChanged();
        void .ctor();
    };

    // Namespace: GogoGaga.OptimizedRopesAndCables
    class RopeMesh : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Material* material; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Rope* rope; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MeshFilter* meshFilter; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MeshRenderer* meshRenderer; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Mesh* ropeMesh; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<UnityEngine.Vector3> vertices; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.Int32> triangles; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.Vector2> uvs; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t OverallDivision; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float ropeWidth; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t radialDivision; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float tilingPerMeter; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool isStartOrEndPointMissing; // 0x0070
    
        // Methods
        void OnValidate();
        void Awake();
        void OnEnable();
        void OnDisable();
        void InitializeComponents();
        void CheckEndPoints();
        void SubscribeToRopeEvents();
        void UnsubscribeFromRopeEvents();
        void CreateRopeMesh(Vector3[][] points, float radius, int32_t segmentsPerWire);
        void GenerateMesh();
        void Update();
        void DelayedGenerateMesh();
        void OnDestroy();
        void .ctor();
    };

    // Namespace: GogoGaga.OptimizedRopesAndCables
    class RopeWindEffect : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Rope* rope; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool perpendicularWind; // 0x0028
        bool flipWindDirection; // 0x0029
        uint8_t pad_002A[0x2]; // 0x002A
        float windDirectionDegrees; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Vector3 windDirection; // 0x0030
        uint8_t pad_0031[0xB]; // 0x0031
        float windForce; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float appliedWindForce; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float windSeed; // 0x0044
    
        // Methods
        void Awake();
        void Start();
        void Update();
        void FixedUpdate();
        void GenerateWind();
        void SimulatePhysics();
        void .ctor();
    };

} // namespace GogoGaga.OptimizedRopesAndCables

namespace Digger
{

    // Namespace: Digger
    class FlyCamera : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float lookSpeed; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float moveSpeed; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float rotationX; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float rotationY; // 0x002C
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Digger
    class README : public MonoBehaviour
    {
    public:
    
        // Methods
        void .ctor();
    };

    // Namespace: Digger
    class DiggerNavMeshUsageExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        DiggerNavMeshRuntime* diggerNavMeshRuntime; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        KeyCode keyToUpdateNavMesh; // 0x0028
    
        // Methods
        void Start();
        void Update();
        void .ctor();
    };

    // Namespace: Digger
    class DiggerRuntimeSplineExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* playerTransform; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        SplineWalker* splineWalker; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float step; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float minY; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float maxY; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float altitudeVariationFrequency; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float horizontalVariationFrequency; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float splineStep; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t stepCount; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        BrushType brush; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float brushSize; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float opacity; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        KeyCode createCaveKey; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool isCreatingCave; // 0x005C
    
        // Methods
        void Awake();
        void Update();
        Awaitable* CreateRandomCave(Vector3 position);
        Awaitable* CreateSplineAndDigCaveCoroutine(Vector3 startPosition, float minYValue, float maxYValue, float altFreq, float horizFreq, int32_t seed1, int32_t seed2, int32_t seed3);
        void .ctor();
    };

    // Namespace: Digger
    class DiggerRuntimeUsageExample : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        CustomBrush* customBrush; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        DiggerMasterRuntime* diggerMasterRuntime; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool editAsynchronously; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        BrushType brush; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ActionType action; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t textureIndex; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float size; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float opacity; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        KeyCode keyToPersistData; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        KeyCode keyToDeleteData; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        KeyCode keyToClearScene; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        bool showModificationResults; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        ModificationResult lastResult; // 0x0058
    
        // Methods
        void Start();
        void Update();
        void OnModificationComplete(ModificationResult result);
        void OnGUI();
        void .ctor();
    };

    // Namespace: Digger
    class NavTest : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* destination; // 0x0020
    
        // Methods
        void OnEnable();
        void .ctor();
    };

    // Namespace: Digger
    class TextureDetector : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.List<UnityEngine.Vector4> uvs;
    
        uint8_t pad_0000[0x20]; // 0x0000
        MonoString* texture; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        DiggerMaster* diggerMaster; // 0x0028
    
        // Methods
        void Start();
        void Update();
        static int32_t GetTextureIndex(RaycastHit hit, Terrain* terrain);
        static float4 GetTexcoord(Mesh* mesh, int32_t baseVertexIndex, int32_t channel);
        static Single[][] GetTextureMix(Vector3 worldPos, Terrain* terrain);
        static int32_t GetTerrainTextureIndex(Vector3 worldPos, Terrain* terrain);
        static int32_t GetMeshTextureIndex(float4[][] controls);
        void .ctor();
        static void .cctor();
    };

} // namespace Digger

namespace Digger.Modules.Core.Sources.Generators
{

    // Namespace: Digger.Modules.Core.Sources.Generators
    class CustomVoxelGeneratorEditor : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        System.Collections.Generic.List<Digger.Modules.Core.Sources.Generators.CustomVoxelGeneratorEditor.DepthLayer> depthLayers; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        System.Collections.Generic.List<Digger.Modules.Core.Sources.Generators.CustomVoxelGeneratorEditor.NoiseLayer> noiseLayers; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float worldReferenceY; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Vector3 worldReference; // 0x002C
    
        // Methods
        JobHandle GenerateVoxels(Single[][] heightArray, int3 chunkVoxelPosition, int32_t sizeVox, float3 heightmapScale, Unity.Collections.NativeArray<System.Single> heights, Unity.Collections.NativeArray<Digger.Modules.Core.Sources.Voxel> voxels, bool refreshOnly);
        void .ctor();
    };

} // namespace Digger.Modules.Core.Sources.Generators

namespace Digger.Modules.Core.Sources.Jobs
{

    // Namespace: Digger.Modules.Core.Sources.Jobs
    struct CustomVoxelGenerationJob
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int3 ChunkVoxelPosition; // 0x0010
        uint8_t pad_0011[0xB]; // 0x0011
        int32_t SizeVox; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t SizeVox2; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float3 HeightmapScale; // 0x0024
        uint8_t pad_0025[0xB]; // 0x0025
        int32_t RefreshOnly; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t DepthLayerCount; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Unity.Collections.NativeArray<System.Single> DepthThresholds; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Unity.Collections.NativeArray<System.Int32> DepthTextures; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Unity.Collections.NativeArray<System.Single> DepthDestructible; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        int32_t NoiseLayerCount; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Unity.Collections.NativeArray<System.Single> NoiseScales; // 0x0070
        uint8_t pad_0071[0xF]; // 0x0071
        Unity.Collections.NativeArray<System.Int32> NoiseOctaves; // 0x0080
        uint8_t pad_0081[0xF]; // 0x0081
        Unity.Collections.NativeArray<System.Single> NoisePersistences; // 0x0090
        uint8_t pad_0091[0xF]; // 0x0091
        Unity.Collections.NativeArray<System.Single> NoiseDestructible; // 0x00A0
        uint8_t pad_00A1[0xF]; // 0x00A1
        Unity.Collections.NativeArray<System.Int32> NoiseTextureIndices; // 0x00B0
        uint8_t pad_00B1[0xF]; // 0x00B1
        Unity.Collections.NativeArray<System.Int32> NoiseBlendModes; // 0x00C0
        uint8_t pad_00C1[0xF]; // 0x00C1
        Unity.Collections.NativeArray<System.Single> NoiseThresholds; // 0x00D0
        uint8_t pad_00D1[0xF]; // 0x00D1
        Unity.Collections.NativeArray<System.Single> Heights; // 0x00E0
        uint8_t pad_00E1[0xF]; // 0x00E1
        Unity.Collections.NativeArray<Digger.Modules.Core.Sources.Voxel> Voxels; // 0x00F0
        uint8_t pad_00F1[0xF]; // 0x00F1
        float WorldReferenceY; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        Vector3 WorldReference; // 0x0104
        uint8_t pad_0105[0xB]; // 0x0105
        Unity.Collections.NativeArray<System.Single> NoiseMinDepths; // 0x0110
        uint8_t pad_0111[0xF]; // 0x0111
        Unity.Collections.NativeArray<System.Single> NoiseMaxDepths; // 0x0120
        uint8_t pad_0121[0xF]; // 0x0121
        Unity.Collections.NativeArray<System.Single> NoiseDepthFades; // 0x0130
    
        // Methods
        void Execute(int32_t index);
        float ComputeStrengthAt(int3 pi);
        uint32_t ComputeTextureIndexAt(int3 pi);
        float Noise3D(float3 position, int32_t octaves, float persistence);
        float CreateNoiseValue(float3 _p, int32_t _i);
        static float3 MakeLayerOffset(uint32_t worldSeed, int32_t layerId);
        static float3 SnapToGridWorld(float3 p, float gridSize);
        static float CellRandom01(int3 cell, uint32_t seed);
        static float CellRandomSigned(int3 cell, uint32_t seed);
    };

} // namespace Digger.Modules.Core.Sources.Jobs

namespace BKPureNature
{

    // Namespace: BKPureNature
    class BK_EnvironmentManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Light* directionalLight; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Gradient* sunColorGradient; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Gradient* fogColorGradient; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Gradient* cloudColorGradient; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Gradient* scatteringColorGradient; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Gradient* ambientColorGradient; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Mesh* quadMesh; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Matrix4x4[][] matrices; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Material* cloudsMaterial; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool overrideSunColor; // 0x0068
        bool overrideFogColor; // 0x0069
        bool overrideCloudColor; // 0x006A
        bool overrideAmbientColor; // 0x006B
        float baseWindPower; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float baseWindSpeed; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float burstsPower; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float burstsSpeed; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float burstsScale; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float microPower; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float microSpeed; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float microFrequency; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float renderDistance; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float Altitude; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float volumeSize; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        int32_t volumeSamples; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        float volumeOffset; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        bool hasIssuedMaterialWarning; // 0x00A0
    
        // Methods
        void Awake();
        void Update();
        void UpdateEnvironment();
        void UpdateCloudsVolume();
        void UpdateLighting();
        void .ctor();
    };

    // Namespace: BKPureNature
    class BK_FreeCamera : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float movementSpeed; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float fastMovementSpeed; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float freeLookSensitivity; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float zoomSensitivity; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float fastZoomSensitivity; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        bool looking; // 0x0034
    
        // Methods
        void Update();
        void OnDisable();
        void StartLooking();
        void StopLooking();
        void .ctor();
    };

    // Namespace: BKPureNature
    class GodraysController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Light* directionalLight; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ParticleSystem[][] particleSystems; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool affectAllChildren; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        Quaternion lastLightRotation; // 0x0034
    
        // Methods
        void Start();
        void Update();
        void FindChildParticles();
        void UpdateParticles();
        void UpdateRotation(ParticleSystem* ps);
        void UpdateAlpha(ParticleSystem* ps);
        void .ctor();
    };

    // Namespace: BKPureNature
    class TerrainParticleFollow : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Terrain* terrain; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ParticleSystem* particleSystem; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Particle[][] particles; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float yOffset; // 0x0038
    
        // Methods
        void Start();
        void LateUpdate();
        void OnValidate();
        void .ctor();
    };

} // namespace BKPureNature

namespace Bitgem.VFX.StylisedWater
{

    // Namespace: Bitgem.VFX.StylisedWater
    class WaterVolumeBase : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t MAX_TILES_X;
        // static int32_t MAX_TILES_Y;
        // static int32_t MAX_TILES_Z;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Mesh* mesh; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        MeshFilter* meshFilter; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Boolean[,,] tiles; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isDirty; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        TileFace IncludeFaces; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        TileFace IncludeFoam; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float TileSize; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool ShowDebug; // 0x0048
        bool RealtimeUpdates; // 0x0049
    
        // Methods
        void ensureReferences();
        System.Nullable<System.Single> GetHeight(Vector3 _position);
        void Rebuild();
        void GenerateTiles(System.Boolean[,,]& _tiles);
        void Validate();
        void OnValidate();
        void Update();
        void .ctor();
    };

    // Namespace: Bitgem.VFX.StylisedWater
    class WaterVolumeBox : public WaterVolumeBase
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        Vector3 Dimensions; // 0x0050
    
        // Methods
        void GenerateTiles(System.Boolean[,,]& _tiles);
        void Validate();
        void .ctor();
    };

    // Namespace: Bitgem.VFX.StylisedWater
    class WaterVolumeHelper : public MonoBehaviour
    {
    public:
        // Static fields
        // static WaterVolumeHelper* instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        WaterVolumeBase* WaterVolume; // 0x0020
    
        // Methods
        static WaterVolumeHelper* get_Instance();
        System.Nullable<System.Single> GetHeight(Vector3 _position);
        void Awake();
        void .ctor();
    };

    // Namespace: Bitgem.VFX.StylisedWater
    class WaterVolumeTransforms : public WaterVolumeBase
    {
    public:
    
        // Methods
        void OnDrawGizmos();
        void OnTransformChildrenChanged();
        void GenerateTiles(System.Boolean[,,]& _tiles);
        void .ctor();
    };

    // Namespace: Bitgem.VFX.StylisedWater
    class WateverVolumeFloater : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        WaterVolumeHelper* WaterVolumeHelper; // 0x0020
    
        // Methods
        void Update();
        void .ctor();
    };

} // namespace Bitgem.VFX.StylisedWater

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
        static EntityStateMessageUnreliableBaseline _Read_Mirror.EntityStateMessageUnreliableBaseline(NetworkReader* reader);
        static void _Write_Mirror.EntityStateMessageUnreliableBaseline(NetworkWriter* writer, EntityStateMessageUnreliableBaseline value);
        static EntityStateMessageUnreliableDelta _Read_Mirror.EntityStateMessageUnreliableDelta(NetworkReader* reader);
        static void _Write_Mirror.EntityStateMessageUnreliableDelta(NetworkWriter* writer, EntityStateMessageUnreliableDelta value);
        static NetworkPingMessage _Read_Mirror.NetworkPingMessage(NetworkReader* reader);
        static void _Write_Mirror.NetworkPingMessage(NetworkWriter* writer, NetworkPingMessage value);
        static NetworkPongMessage _Read_Mirror.NetworkPongMessage(NetworkReader* reader);
        static void _Write_Mirror.NetworkPongMessage(NetworkWriter* writer, NetworkPongMessage value);
        static ServerRequest _Read_Mirror.Discovery.ServerRequest(NetworkReader* reader);
        static void _Write_Mirror.Discovery.ServerRequest(NetworkWriter* writer, ServerRequest value);
        static ServerResponse _Read_Mirror.Discovery.ServerResponse(NetworkReader* reader);
        static void _Write_Mirror.Discovery.ServerResponse(NetworkWriter* writer, ServerResponse value);
        static LobbyTimerMessage _Read_LobbyTimerMessage(NetworkReader* reader);
        static void _Write_LobbyTimerMessage(NetworkWriter* writer, LobbyTimerMessage value);
        static AuthRequestMessage _Read_UnderIslandsNetworkAuthenticator/AuthRequestMessage(NetworkReader* reader);
        static void _Write_UnderIslandsNetworkAuthenticator/AuthRequestMessage(NetworkWriter* writer, AuthRequestMessage value);
        static AuthResponseMessage _Read_UnderIslandsNetworkAuthenticator/AuthResponseMessage(NetworkReader* reader);
        static void _Write_UnderIslandsNetworkAuthenticator/AuthResponseMessage(NetworkWriter* writer, AuthResponseMessage value);
        static PlayerCardMessage _Read_UIEndGameScreen/PlayerCardMessage(NetworkReader* reader);
        static PlayerClass _Read_PlayerClass(NetworkReader* reader);
        static void _Write_UIEndGameScreen/PlayerCardMessage(NetworkWriter* writer, PlayerCardMessage value);
        static void _Write_PlayerClass(NetworkWriter* writer, PlayerClass value);
        static void _Write_UnityEngine.KeyCode(NetworkWriter* writer, KeyCode value);
        static KeyCode _Read_UnityEngine.KeyCode(NetworkReader* reader);
        static void _Write_SurfaceFootStepType(NetworkWriter* writer, SurfaceFootStepType value);
        static SurfaceFootStepType _Read_SurfaceFootStepType(NetworkReader* reader);
        static void _Write_DamageResult(NetworkWriter* writer, DamageResult value);
        static void _Write_WeaponDataSO/WeaponType(NetworkWriter* writer, WeaponType value);
        static DamageResult _Read_DamageResult(NetworkReader* reader);
        static WeaponType _Read_WeaponDataSO/WeaponType(NetworkReader* reader);
        static InventoryEntry _Read_InventorySystem/InventoryEntry(NetworkReader* reader);
        static void _Write_InventorySystem/InventoryEntry(NetworkWriter* writer, InventoryEntry value);
        static DiggingHit* _Read_DiggingManager/DiggingHit(NetworkReader* reader);
        static BrushType _Read_Digger.Modules.Core.Sources.BrushType(NetworkReader* reader);
        static ActionType _Read_Digger.Modules.Core.Sources.ActionType(NetworkReader* reader);
        static float3 _Read_Unity.Mathematics.float3(NetworkReader* reader);
        static void _Write_DiggingManager/DiggingHit(NetworkWriter* writer, DiggingHit* value);
        static void _Write_Digger.Modules.Core.Sources.BrushType(NetworkWriter* writer, BrushType value);
        static void _Write_Digger.Modules.Core.Sources.ActionType(NetworkWriter* writer, ActionType value);
        static void _Write_Unity.Mathematics.float3(NetworkWriter* writer, float3 value);
        static SDiggingPattern _Read_DiggingManager/SDiggingPattern(NetworkReader* reader);
        static void _Write_DiggingManager/SDiggingPattern(NetworkWriter* writer, SDiggingPattern value);
        static void _Write_DifficultyLevel(NetworkWriter* writer, DifficultyLevel value);
        static DifficultyLevel _Read_DifficultyLevel(NetworkReader* reader);
        static void _Write_StatusEffectData(NetworkWriter* writer, StatusEffectData value);
        static void _Write_StatusEffectType(NetworkWriter* writer, StatusEffectType value);
        static StatusEffectData _Read_StatusEffectData(NetworkReader* reader);
        static StatusEffectType _Read_StatusEffectType(NetworkReader* reader);
        static void _Write_UpgradeRarity(NetworkWriter* writer, UpgradeRarity value);
        static UpgradeRarity _Read_UpgradeRarity(NetworkReader* reader);
        static void _Write_System.Collections.Generic.List`1<System.String>(NetworkWriter* writer, System.Collections.Generic.List<System.String> value);
        static System.Collections.Generic.List<System.String> _Read_System.Collections.Generic.List`1<System.String>(NetworkReader* reader);
        static void _Write_SlotStruct(NetworkWriter* writer, SlotStruct value);
        static void _Write_SlotStruct/SlotType(NetworkWriter* writer, SlotType value);
        static SlotStruct _Read_SlotStruct(NetworkReader* reader);
        static SlotType _Read_SlotStruct/SlotType(NetworkReader* reader);
        static void _Write_DamageType(NetworkWriter* writer, DamageType value);
        static DamageType _Read_DamageType(NetworkReader* reader);
        static void _Write_CarryType(NetworkWriter* writer, CarryType value);
        static CarryType _Read_CarryType(NetworkReader* reader);
        static void _Write_DayNightManager/CyclePhase(NetworkWriter* writer, CyclePhase value);
        static CyclePhase _Read_DayNightManager/CyclePhase(NetworkReader* reader);
        static void InitReadWriters();
    };

} // namespace Mirror
