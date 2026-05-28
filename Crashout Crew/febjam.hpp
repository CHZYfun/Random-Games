// Namespace: <global>
class AggroEditorSettings : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    ContractObject* overrideGymContract; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool setSeed; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t seed; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool enableDemoBuild; // 0x0028
    bool enableReleaseDebugTools; // 0x0029
    bool startWithLatency; // 0x002A
    uint8_t pad_002B[0x1]; // 0x002B
    int32_t latency; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t packetLoss; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool startWithGraphsEnabled; // 0x0034

    // Methods
    static AggroEditorSettings* GetSettings();
    static bool TryGetSettings(AggroEditorSettings* settings);
    void .ctor();
};

// Namespace: <global>
class AnimationSFX : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* _transform; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerUpgrades* playerUpgrades; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    StudioEventEmitter* forkGrabSFX; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    StudioEventEmitter* forkGrabSFXUpgraded; // 0x0068

    // Methods
    void Awake();
    void PlaySpatialSFX(MonoString* ev);
    void PlaySFX(MonoString* ev);
    void PlayForkGrabSFX();
    void .ctor();
};

// Namespace: <global>
class AudioObject : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    ContractPlaylist[][] contractPlaylists; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    DeckCard`1[][] lobbyPlayerJoined; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DeckCard`1[][] breakRoomInitial; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DeckCard`1[][] breakRoom; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DeckCard`1[][] crashOut; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DeckCard`1[][] shiftStart; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    DeckCard`1[][] organizationStartInitial; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    DeckCard`1[][] organizationStart; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    DeckCard`1[][] shiftWon; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    DeckCard`1[][] shiftLost; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    DeckCard`1[][] gameWon; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    DeckCard`1[][] incorrectOrder; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    DeckCard`1[][] timerWarningPhase1A; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    DeckCard`1[][] timerWarningPhase3A; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    DeckCard`1[][] timerWarningPhase4A; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    DeckCard`1[][] timerWarningPhase1B; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DeckCard`1[][] timerWarningPhase3B; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DeckCard`1[][] timerWarningPhase4B; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    EventReference lobbyTitleMusic; // 0x00A8

    // Methods
    void .ctor();
};

// Namespace: <global>
class FMODEntityEventListener : public EntityEventListenerBase
{
public:
    uint8_t pad_0000[0x78]; // 0x0000
    EventReference eventReference; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    bool isPositional; // 0x0088

    // Methods
    void OnEvent();
    void .ctor();
};

// Namespace: <global>
class PlayerListener : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* target; // 0x0050

    // Methods
    void OnUpdatePresentationEarly();
    void .ctor();
};

// Namespace: <global>
class PuddleForkliftSfx : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    AoEEffects* aoeEffects; // 0x0050

    // Methods
    void OnUpdateSimulation();
    void .ctor();
};

// Namespace: <global>
class VoiceManager : public AggroManagerBase`1
{
public:
    // Static fields
    // static int32_t SETTING_AUDIO_INPUT;
    // static int32_t VOIP_SETTING_ID;

    uint8_t pad_0000[0x50]; // 0x0000
    DissonanceComms* comms; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VoiceBroadcastTrigger* broadcast; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VoicePlayer[][] voicePlayers; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<VoiceManager.Player> _players; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<System.Int32> _indices; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VoicePlayerState* _localPlayerVoicePlayerState; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VECTOR[][] _customRollOff; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    float startingVolume; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float maxDistance; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float minDistanceVolume; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float radioDistance; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    bool _isRestrictedByPlatform; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    uint32_t _inputSettingVersion; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    uint32_t _pttVersion; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    uint32_t _pttInputVersion; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float radioAmplitudeThreshold; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float radioCooldown; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    EventReference radioInSfx; // 0x00B0
    uint8_t pad_00B1[0xF]; // 0x00B1
    EventReference radioOutSfx; // 0x00C0

    // Methods
    bool get_isMuted();
    bool get_isVoiceCommsRestricted();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnPlayerJoinedSession(VoicePlayerState* player);
    void OnPlayerLeftSession(VoicePlayerState* player);
    VoicePlayerState* GetLocalPlayerVoicePlayerState();
    VoicePlayerState* GetVoicePlayerStateFromEntity(Entity entityToCheck);
    void AddPlayer(VoicePlayerState* voice);
    bool MutedByPlatform(uint64_t platformId);
    bool MutedByPlatform(MonoString* playFabId);
    void RemovePlayer(VoicePlayerState* voice);
    void OnUpdatePresentation();
    void StartEvent(MonoString* label, EventInstance sfx);
    void StopEvent(MonoString* label, EventInstance sfx);
    static bool CheckResult(MonoString* label, RESULT result);
    bool HasPlayer(MonoString* playerName);
    bool IsMuted(MonoString* playerName);
    void ToggleMute(MonoString* playerName);
    float GetVolume(MonoString* playerName);
    void SetVolume(MonoString* playerName, float volume);
    void SetVoiceSetting(VoipSetting setting);
    int32_t GetPlayerIndex(MonoString* playerName);
    void VerifyPlayerExists(MonoString* playerName);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class VoiceOverManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Aggro.Core.Deck<System.Byte> _lobbyPlayerJoinedDeck; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Aggro.Core.Deck<System.Byte> _breakRoomInitialDeck; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Aggro.Core.Deck<System.Byte> _breakRoomDeck; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Aggro.Core.Deck<System.Byte> _crashOutDeck; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Aggro.Core.Deck<System.Byte> _shiftStartDeck; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Aggro.Core.Deck<System.Byte> _organizationStartInitialDeck; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Aggro.Core.Deck<System.Byte> _organizationStartDeck; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Aggro.Core.Deck<System.Byte> _shiftWonDeck; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Aggro.Core.Deck<System.Byte> _shiftLostDeck; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Aggro.Core.Deck<System.Byte> _gameWonDeck; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Aggro.Core.Deck<System.Byte> _incorrectOrderDeck; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Aggro.Core.Deck<System.Byte> _timerWarningPhase1ADeck; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Aggro.Core.Deck<System.Byte> _timerWarningPhase3ADeck; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Aggro.Core.Deck<System.Byte> _timerWarningPhase4ADeck; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    Aggro.Core.Deck<System.Byte> _timerWarningPhase1BDeck; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Aggro.Core.Deck<System.Byte> _timerWarningPhase3BDeck; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    Aggro.Core.Deck<System.Byte> _timerWarningPhase4BDeck; // 0x0118

    // Methods
    void OnEntityCreated();
    void ServerPlayLobbyPlayerJoined();
    void ServerPlayInitialBreakRoom();
    void ServerPlayBreakRoom();
    void RequestPlayCrashOut();
    void ServerPlayCrashOut();
    void ServerShiftStart();
    void ServerOrganizationStartInitial();
    void ServerOrganizationStart();
    void ServerShiftWon();
    void ServerShiftLost();
    void ServerGameWon();
    void ServerIncorrectOrder();
    void ServerTimerWarningPhase(int32_t phase, bool isA);
    void CmdPlayCrashOut();
    void RpcPlayLobbyPlayerJoined(uint8_t index);
    void RpcPlayBreakRoomInitial(uint8_t index);
    void RpcPlayBreakRoom(uint8_t index);
    void RpcPlayCrashOut(uint8_t index);
    void RpcShiftStart(uint8_t index);
    void RpcOrganizationStartInitial(uint8_t index);
    void RpcOrganizationStart(uint8_t index);
    void RpcShiftWon(uint8_t index);
    void RpcShiftLost(uint8_t index);
    void RpcGameWon(uint8_t index);
    void RpcIncorrectOrder(uint8_t index);
    void RpcTimerWarningPhase(uint8_t phase, bool isA, uint8_t index);
    Aggro.Core.Deck<System.Byte> ServerBuildDeck(DeckCard`1[][] cards, int32_t seed);
    void TryPlay(DeckCard`1[][] cards, int32_t index);
    void .ctor();
    bool Weaved();
    void UserCode_CmdPlayCrashOut();
    static void InvokeUserCode_CmdPlayCrashOut(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayLobbyPlayerJoined__Byte(uint8_t index);
    static void InvokeUserCode_RpcPlayLobbyPlayerJoined__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayBreakRoomInitial__Byte(uint8_t index);
    static void InvokeUserCode_RpcPlayBreakRoomInitial__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayBreakRoom__Byte(uint8_t index);
    static void InvokeUserCode_RpcPlayBreakRoom__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayCrashOut__Byte(uint8_t index);
    static void InvokeUserCode_RpcPlayCrashOut__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcShiftStart__Byte(uint8_t index);
    static void InvokeUserCode_RpcShiftStart__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOrganizationStartInitial__Byte(uint8_t index);
    static void InvokeUserCode_RpcOrganizationStartInitial__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOrganizationStart__Byte(uint8_t index);
    static void InvokeUserCode_RpcOrganizationStart__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcShiftWon__Byte(uint8_t index);
    static void InvokeUserCode_RpcShiftWon__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcShiftLost__Byte(uint8_t index);
    static void InvokeUserCode_RpcShiftLost__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcGameWon__Byte(uint8_t index);
    static void InvokeUserCode_RpcGameWon__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcIncorrectOrder__Byte(uint8_t index);
    static void InvokeUserCode_RpcIncorrectOrder__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTimerWarningPhase__Byte__Boolean__Byte(uint8_t phase, bool isA, uint8_t index);
    static void InvokeUserCode_RpcTimerWarningPhase__Byte__Boolean__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class ActionOnStacked : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x98]; // 0x0000
    Entity _performingOn; // 0x0098
    uint8_t pad_0099[0x1F]; // 0x0099
    bool healOnStacked; // 0x00B8
    bool damageActivateOnStacked; // 0x00B9
    uint8_t pad_00BA[0x2]; // 0x00BA
    float durationBeforeAction; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    bool preventActionWhenDamaged; // 0x00C0
    bool damageSelfWithAction; // 0x00C1
    uint8_t pad_00C2[0x2]; // 0x00C2
    Timer _timer; // 0x00C4

    // Methods
    bool get_isPerformingAction();
    Entity get_performingOn();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    Entity get_Network_performingOn();
    void set_Network_performingOn(Entity value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ActivatedKicked : public EntityBehaviourBase
{
public:

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
};

// Namespace: <global>
class ActivatedSlipout : public EntityBehaviourBase
{
public:

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
};

// Namespace: <global>
class AoEEffects : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Transform* aoeVFXTransform; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    StudioEventEmitter* sfxEmitter; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* sfxPlayerEffectedParameter; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float radius; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    PlayerEffectContext playerContext; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float stressRate; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool stressImpactAdd; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float nitroRate; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    int32_t vehicleSpeedPercentage; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    bool checkTractionUpgrade; // 0x00C8
    bool _hasVisual; // 0x00C9
    bool playerEffected; // 0x00CA
    uint8_t pad_00CB[0x1]; // 0x00CB
    float _paramValue; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float paramSmoothingSpeed; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    LiquidTrailEffect liquidTrailEffect; // 0x00D4

    // Methods
    bool get__hasCheckTractionUpgrade();
    void ServerSetPlayerEffectedThisFrame();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void OnInitializeBehaviour();
    void OnUpdatePresentationLate();
    LiquidTrailEffect GetLiquidTrailEffect();
    float GetStressRate();
    bool ShouldAddStressOnImpact();
    int32_t GetVehicleSpeedPercentage(PlayerUpgrades* upgrades);
    float GetNitroRate();
    PlayerEffectContext GetPlayerContext();
    void OnDrawGizmos();
    void .ctor();
    bool Weaved();
    bool get_NetworkplayerEffected();
    void set_NetworkplayerEffected(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Bonkable : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<GrabbableHolder> _holders;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x98]; // 0x0000
    float bonkForce; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float bonkRadius; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float bonkUpwardsModifierDegrees; // 0x00A0

    // Methods
    void RequestBonk();
    void CmdBonk();
    void ServerBonk();
    void RpcShelfKnocked();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_CmdBonk();
    static void InvokeUserCode_CmdBonk(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcShelfKnocked();
    static void InvokeUserCode_RpcShelfKnocked(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class BounceSpawn : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static float DOT_UP_THRESHOLD;

    uint8_t pad_0000[0x98]; // 0x0000
    TagQuery* tagQuery; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* prefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* vfxPrefab; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    bool checkForPuddles; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float minDistanceFromOtherPuddles; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    bool onlyWithGround; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float impulseThresholdForSpawn; // 0x00BC

    // Methods
    void CollisionEnter(Collision* collision);
    void RpcBounceSpawned();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcBounceSpawned();
    static void InvokeUserCode_RpcBounceSpawned(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class BoxBlower : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ParticleSystem* system; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    StudioEventEmitter* sfx; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool _effectsOnPrevious; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class BoxCharge : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<UnityEngine.Vector3> _dirs1;
    // static float EPSILON;
    // static float EPSILON_SQR;
    // static float VERTICAL_LIMIT_FOR_CHARGE;
    // static float STUCK_DURATION;
    // static float STUCK_DISTANCE;
    // static System.Collections.Generic.List<UnityEngine.Vector3> _dirs2;
    // static Collider[][] _colliders;
    // static int32_t IDLE;
    // static int32_t READY;
    // static int32_t RUNNING;
    // static int32_t DIZZY;

    uint8_t pad_0000[0x98]; // 0x0000
    System.Collections.Generic.HashSet<Aggro.Core.Entity> _serverCollidedWith; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ParticleSystem* chargingParticles; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Animator* animator; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* chargeLoopEmitter; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float speed; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float acceleration; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float icyAcceleration; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float rotateSpeedDegrees; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t maxNumberOfRaycasts; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float minimumDegreesToRotate; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    Vector2 startRotatingMinMaxDuration; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float preferredMinDistance; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float startChargingDuration; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float dizzyDuration; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float activatedRotationSpeed; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float collisionSpeedThreshold; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float collisionAheadOffset; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float collisionRadius; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float kickForce; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    float kickUpwardsModifier; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float playerForce; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float stackedOnSpeedMultiplier; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    Vector3 _syncDir; // 0x0104
    uint8_t pad_0105[0xB]; // 0x0105
    ChargeState _syncState; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    Timer _serverTimer; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    Vector3 _serverStuckPos; // 0x0118
    uint8_t pad_0119[0xB]; // 0x0119
    Vector3 _debugFromPos; // 0x0124
    uint8_t pad_0125[0xB]; // 0x0125
    Vector3 _debugTargetPos; // 0x0130
    uint8_t pad_0131[0xB]; // 0x0131
    Vector3 _debugTargetDir; // 0x013C

    // Methods
    ChargeState get_state();
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    void DebugCheckRot(MonoString* label);
    void ServerStopCharging();
    bool ServerShouldGoBackToWaiting(float beltSpeed);
    void ServerBoxActivated(ActivationContext context);
    void ServerBoxStackedOn();
    void .ctor();
    static void .cctor();
    bool Weaved();
    Vector3 get_Network_syncDir();
    void set_Network_syncDir(Vector3 value);
    ChargeState get_Network_syncState();
    void set_Network_syncState(ChargeState value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class BoxCollisionSfx : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    EventReference sfx; // 0x0098
    uint8_t pad_0099[0xF]; // 0x0099
    EventReference destroySfx; // 0x00A8
    uint8_t pad_00A9[0xF]; // 0x00A9
    float impulseThreshold; // 0x00B8

    // Methods
    void OnEntityDestroyed();
    void CollisionEnter(Collision* collision);
    void PlaySfx();
    void PlayDestroySfx();
    void RpcPlaySfx();
    void .ctor();
    bool Weaved();
    void UserCode_RpcPlaySfx();
    static void InvokeUserCode_RpcPlaySfx(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class BoxDebug : public EntityBehaviourBase
{
public:
    // Static fields
    // static bool debugEnabled;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* sleepContainer; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* awakeContainer; // 0x0058

    // Methods
    static void RuntimeInit();
    void OnEntityCreated();
    void .ctor();
};

// Namespace: <global>
class BoxDestroySystem : public EntityObjectSystemBase`1
{
public:
    // Static fields
    // static float KILL_FLOOR_Y;
    // static float KILL_CEIL_Y;


    // Methods
    void OnUpdateObjectSystem(Aggro.Core.QueryResults<Grabbable> results);
    void .ctor();
};

// Namespace: <global>
class BoxExtinguisher : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem* system; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    StudioEventEmitter* sfx; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    bool _effectsOnPrevious; // 0x00A8

    // Methods
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class BoxHaunted : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _grabbables;

    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem* hauntedParticle; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    AnimationCurve* liftCurve; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Single[][] stackGravityMultipliers; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    AnimationCurve* horizontalCurve; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    AnimationCurve* angularCurve; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* ghostLaunchVFX; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    StudioEventEmitter* hauntedSfxEmitter; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float liftDuration; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float liftAcceleration; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float targetHeight; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float horizontalAcceleration; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float horizontalSinScale; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float angularAcceleration; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float angularSinScale; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float launchSpeed; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    Haunting _syncHaunting; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    int32_t _launchedSeed; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    int32_t _initSeed; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float _horizontalSinOffset; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float _angularSinOffset; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    Vector3 _launchDir; // 0x0108

    // Methods
    bool get_isHaunted();
    void OnEntityDestroyed();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void ServerStartHaunted(int32_t seed);
    void ServerStopHaunting();
    void ServerBoxActivated(ActivationContext context);
    void ServerBoxStackedOn();
    void .ctor();
    static void .cctor();
    bool Weaved();
    Haunting get_Network_syncHaunting();
    void set_Network_syncHaunting(Haunting value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class BoxHeldSpawner : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* prefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Animator* animator; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* animatorTriggerOnSpawn; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* sfxEmitter; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float spawnEveryInSeconds; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool checkPlayerSpeed; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    Vector2 spawnMinMaxSpeed; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Vector2 spawnMinMaxAngularSpeed; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float spawnDistanceUpOffset; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float spawnDistanceOutOffset; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    Vector2 upwardsModifierMinMaxDegrees; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    bool inheritFire; // 0x00E0
    bool _syncCanThrow; // 0x00E1
    uint8_t pad_00E2[0x2]; // 0x00E2
    Timer _spawnTimer; // 0x00E4

    // Methods
    bool get_canThrow();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void RpcOnSpawned();
    void .ctor();
    bool Weaved();
    bool get_Network_syncCanThrow();
    void set_Network_syncCanThrow(bool value);
    void UserCode_RpcOnSpawned();
    static void InvokeUserCode_RpcOnSpawned(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class BoxNavMeshUtility : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    NavMeshSurface* _navMeshSurface; // 0x0020

    // Methods
    void PrepareForBake();
    void .ctor();
};

// Namespace: <global>
class BoxProps : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PhysicMaterial* normalPhysicsMaterial; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PhysicMaterial* bouncyPhysicsMaterial; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Collider* boxCollider; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    MonoString* onTrashCompactedId; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float heavyMass; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    bool _infoIsSafe; // 0x0074
    bool _physMatSet; // 0x0075
    bool <serverIsSafe>k__BackingField; // 0x0076

    // Methods
    bool get_serverIsSafe();
    void set_serverIsSafe(bool value);
    void OnEntityStart();
    void OnUpdateSimulationEarly();
    void SetPhysicsMaterial(PhysicMaterial* physMat);
    void ResetPhysicsMaterial();
    void .ctor();
};

// Namespace: <global>
class BoxRoboVacuum : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static float HEIGHT;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    bool onlyDestroyTrash; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    EnabledStrategy strategy; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float vacuumRadius; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float vacuumMaxTrashForce; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float vacuumMaxBoxForce; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float blowerMaxPlayerForce; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Ease vacuumForceEase; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float upwardsHeight; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float destroyRadius; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool _syncIsCurrentlyVacuuming; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    Vector2 _syncVacuumingPos; // 0x00C0

    // Methods
    bool get_isCurrentlyVacuuming();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncIsCurrentlyVacuuming();
    void set_Network_syncIsCurrentlyVacuuming(bool value);
    Vector2 get_Network_syncVacuumingPos();
    void set_Network_syncVacuumingPos(Vector2 value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class BoxScrubber : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    MeshRenderer* liquidMeshRenderer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MaterialPropertyBlock* _block; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Entity _serverPuddle; // 0x00A8
    uint8_t pad_00A9[0x1F]; // 0x00A9
    StudioEventEmitter* scrubbingSfx; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Rigidbody* sfxRb; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    bool isAlwaysScrubbing; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float scrubRadius; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    bool _syncIsScrubbing; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float scrubSpeedMultiplier; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool controlAnimator; // 0x00E8
    bool showHotkeyHint; // 0x00E9

    // Methods
    bool get_isScrubbing();
    void OnInitializeBehaviour();
    void OnEntityDestroyed();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void ServerSetScrubbing();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncIsScrubbing();
    void set_Network_syncIsScrubbing(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class IBoxUsable
{
public:
};

// Namespace: <global>
class BoxStation : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Single[][] CAMERA_FACING_ANGLES;
    // static Single[][] FOUR_FACING_ANGLES;
    // static Single[][] EIGHT_FACING_ANGLES;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* stationPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* previewPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* warehousePlacedAchievement; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    RotationStrategy rotationStrategy; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float stationCheckSizeX; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float stationCheckSizeZ; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool checkForBoxesAndPlayers; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    EventReference placementSFXEvent; // 0x00C0

    // Methods
    Single[][] GetAngles();
    int32_t GetDefaultAngleIndex();
    void OnDrawGizmosSelected();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class BoxVacuum : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ParticleSystem* system; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    StudioEventEmitter* sfx; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool _effectsOnPrevious; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class BoxWander : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static float VELOCITY_THRESHOLD;
    // static float STOP_WANDERING_THRESHOLD;
    // static float LOOK_AHEAD_RADIUS;
    // static float VERTICAL_LIMIT_FOR_WANDER;
    // static float STUCK_DURATION;
    // static float STUCK_DISTANCE_MULTIPLIER;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    float speed; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float backUpSpeed; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float acceleration; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float icyAcceleration; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    Vector2 startWanderingMinMaxDuration; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float targetRadius; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float targetOffset; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float rotationSlerpAmount; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool stopWhenStackedOn; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float stackedOnSpeedMultiplier; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool disableWhenShiftOver; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float lookAheadDistance; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float avoidColliderDegrees; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float noiseOffset; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float noiseScale; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t _syncWanderingSeed; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    Timer _serverTimer; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    Vector3 _serverStuckPos; // 0x00E0
    uint8_t pad_00E1[0xB]; // 0x00E1
    float _speedMultiplier; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    Vector3 _debugFromPos; // 0x00F0
    uint8_t pad_00F1[0xB]; // 0x00F1
    Vector3 _debugTargetPos; // 0x00FC
    uint8_t pad_00FD[0xB]; // 0x00FD
    Vector3 _debugTargetDir; // 0x0108
    uint8_t pad_0109[0xB]; // 0x0109
    Vector3 _debugForward; // 0x0114
    uint8_t pad_0115[0xB]; // 0x0115
    Vector3 _debugToInfoDir; // 0x0120
    uint8_t pad_0121[0xB]; // 0x0121
    Vector3 _debugRandomPos; // 0x012C

    // Methods
    bool get_isWandering();
    void OnEntityCreated();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void UpdateVelocity(Rigidbody* rb, Vector3 fwd, Vector3 targetFwd);
    void MultiplySpeed(float multiplier);
    void ServerStopWander();
    void OnUpdatePresentation();
    void GetInfo(Vector3 pos, Vector3 fwd, bool checkForBoxes, Vector3 localPos);
    bool IsDirBlocked(Vector3 pos, Vector3 dir, bool checkForBoxes);
    void OnDrawGizmos();
    void ServerBoxActivated(ActivationContext context);
    void ServerBoxStackedOn();
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_Network_syncWanderingSeed();
    void set_Network_syncWanderingSeed(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CollisionDetection : public EntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<ICollisionEnter> _collisions;


    // Methods
    void OnCollisionEnter(Collision* collision);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ICollisionEnter
{
public:

    // Methods
    void CollisionEnter(Collision* collision);
};

// Namespace: <global>
class ActivatedFirework : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static float NOISE_SAMPLE_DISTANCE;
    // static int32_t FLASHING_ID;

    uint8_t pad_0000[0x98]; // 0x0000
    MeshRenderer* fireworkMeshRenderer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ParticleSystem* fireworkSmokeVFX; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ParticleSystem* fireworkSparksVFX; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* fireworkExplodeVFX; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    StudioEventEmitter* sfxFuseLoop; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    StudioEventEmitter* sfxIgnite; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    StudioEventEmitter* sfxTravelLoop; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float force; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float ignitionTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float explosionTime; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float rotateDownDegrees; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float noiseScale; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float noiseAngleDegrees; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float fireExplodeRadius; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    State _syncState; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    int32_t _syncSeed; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    Timer _timer; // 0x00F4

    // Methods
    State get_state();
    void OnUpdatePresentation();
    void RpcOnIgnite();
    void OnUpdateSimulation();
    void ServerBoxActivated(ActivationContext context);
    void ServerExplode();
    bool ServerFlammableCanBePutOut();
    void ServerFlammablePutOut();
    void .ctor();
    static void .cctor();
    bool Weaved();
    State get_Network_syncState();
    void set_Network_syncState(State value);
    int32_t get_Network_syncSeed();
    void set_Network_syncSeed(int32_t value);
    void UserCode_RpcOnIgnite();
    static void InvokeUserCode_RpcOnIgnite(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ActivatedShiftEffect : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    bool pauseShift; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float pauseDuration; // 0x0054

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
};

// Namespace: <global>
class ActivatedSpawn : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* prefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* vfxPrefab; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    MonoString* achievementStatId; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t spawnCount; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float spawnDistanceNoise; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float spawnExplosionForce; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float spawnExplosionUpwardsModifierDegrees; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool inheritFire; // 0x0078

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
};

// Namespace: <global>
class ActivatedSpawnPuddle : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* puddlePrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    bool spawnOverTime; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float overTimeDuration; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float overTimeSpawnEvery; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    Timer _serverOverTimeTimer; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Timer _serverSpawnEveryTimer; // 0x00B0

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void OnUpdateSimulation();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ActivatedSplash : public EntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* vfxPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float splashRadius; // 0x0058

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void OnDrawGizmosSelected();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ActivatedVFX : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* prefab; // 0x0050

    // Methods
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
};

// Namespace: <global>
class BoxActivator : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<IBoxActivated> _activations;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* boxDestructionVFX; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    bool onlyActivateOnce; // 0x00A0
    bool destroySelfOnActivation; // 0x00A1
    uint8_t pad_00A2[0x2]; // 0x00A2
    ActivationContextMask activationMask; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float activationCooldown; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float slowDownActivateSpeedThreshold; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float softPaddingVelocityMultiplier; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    bool _syncActivated; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Vector3 _velocity; // 0x00B8
    uint8_t pad_00B9[0xB]; // 0x00B9
    bool _serverIsActivatable; // 0x00C4
    bool _serverIgnoreActivation; // 0x00C5
    uint8_t pad_00C6[0x2]; // 0x00C6
    int32_t _serverFrameCanActivate; // 0x00C8

    // Methods
    bool get_activated();
    bool get_hasActivationCooldown();
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void ServerSetActivatable(bool activatable);
    void RequestActivate(ActivationContext context);
    void CmdActivate(ActivationContext context, NetworkConnectionToClient* conn);
    void ServerActivate(ActivationContext context);
    static void ActivateDevCmd(DevCmdArg[][] args);
    static String[][] ActivateBoxDevComplete();
    void CollisionEnter(Collision* collision);
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncActivated();
    void set_Network_syncActivated(bool value);
    void UserCode_CmdActivate__ActivationContext__NetworkConnectionToClient(ActivationContext context, NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdActivate__ActivationContext__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct ActivationContext
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ActivationContextType type; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Entity causer; // 0x0018
    uint8_t pad_0019[0x1F]; // 0x0019
    NetworkConnectionToClient* connection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ActivationContextSubType subType; // 0x0040

    // Methods
    void .ctor(ActivationContextType type);
    void .ctor(ActivationContextType type, ActivationContextSubType subType);
};

// Namespace: <global>
struct ActivationContextType
{
public:
    // Static fields
    // static ActivationContextType Kicked;
    // static ActivationContextType Impact;
    // static ActivationContextType Explosion;
    // static ActivationContextType Fire;
    // static ActivationContextType Bees;
    // static ActivationContextType DevCmd;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
struct ActivationContextSubType
{
public:
    // Static fields
    // static ActivationContextSubType None;
    // static ActivationContextSubType Meteor;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
struct ActivationContextMask
{
public:
    // Static fields
    // static ActivationContextMask Kicked;
    // static ActivationContextMask Impact;
    // static ActivationContextMask Explosion;
    // static ActivationContextMask Fire;
    // static ActivationContextMask DevCmd;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class BoxDevCmds
{
public:

    // Methods
    static void BoxDevCmd(DevCmdArg[][] args);
    static String[][] HealthBoxDevComplete();
};

// Namespace: <global>
class BoxForm : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t ChangeForm;

    uint8_t pad_0000[0x98]; // 0x0000
    MonoString* correctFormAchievement; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MonoString* correctFormMeteorAchievement; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject[][] forms; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* visualParent; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* changeFormVFX; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Animator* animator; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    ChangeStrategy strategy; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    bool canOnlyBeShippedInCorrectForm; // 0x00CC
    bool onceInCorrectFormStayInCorrectForm; // 0x00CD
    uint8_t pad_00CE[0x2]; // 0x00CE
    int32_t correctFormIndex; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    int32_t startIndex; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t _serverCurrentFormIndex; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float scaleEffectTimeSeconds; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    Ease scaleEffectEaseIn; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    Ease scaleEffectEaseOut; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float scaleEffectStrength; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    bool parentVfxToTransform; // 0x00EC

    // Methods
    void OnEntityCreated();
    void RpcFormChanged(int32_t newIndex);
    bool ServerCanBeShipped();
    IEnumerator* FormChangeScaleCo();
    void ServerBoxActivated(ActivationContext context);
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcFormChanged__Int32(int32_t newIndex);
    static void InvokeUserCode_RpcFormChanged__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class BoxHealth : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* undamagedContainer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* damagedContainer; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* damagedVfx; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Renderer[][] damagedEnableRenderers; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    bool takeDamageOnActivation; // 0x00B8
    DamageMask allowedMask; // 0x00B9
    DamageMask _syncDamage; // 0x00BA
    bool useProceduralDamaged; // 0x00BB
    bool useProceduralBurnt; // 0x00BC

    // Methods
    DamageMask get_damage();
    bool get_isDamaged();
    void OnEntityCreated();
    void OnUpdatePresentation();
    void RequestTakeDamage(DamageType type);
    void CmdTakeDamage(DamageType type);
    void ServerTakeDamage(DamageType type);
    void ServerHeal();
    void ServerBoxActivated(ActivationContext context);
    static void HealthDevCmd(DevCmdArg[][] args);
    static String[][] HealthBoxDevComplete();
    void .ctor();
    bool Weaved();
    DamageMask get_Network_syncDamage();
    void set_Network_syncDamage(DamageMask value);
    void UserCode_CmdTakeDamage__DamageType(DamageType type);
    static void InvokeUserCode_CmdTakeDamage__DamageType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct DamageType
{
public:
    // Static fields
    // static DamageType Damaged;
    // static DamageType Burnt;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
struct DamageMask
{
public:
    // Static fields
    // static DamageMask None;
    // static DamageMask Damaged;
    // static DamageMask Burnt;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class Exploder : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static int32_t WARNING;
    // static int32_t SPEED;
    // static int32_t FLASHING;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* vfxPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* intactObject; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MeshRenderer* flashingMeshRenderer; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    bool startInWarningState; // 0x00B0
    bool destroyOnShiftChange; // 0x00B1
    bool canBePutOut; // 0x00B2
    uint8_t pad_00B3[0x1]; // 0x00B3
    float warningDuration; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float explosionRadius; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float explosionBoxForce; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float explosionBoxForceRadius; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float explosionBoxForceUpwardsModifier; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float explosionPlayerForce; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    ActivationContextSubType activationSubType; // 0x00CC
    ExplodeState _state; // 0x00CD
    uint8_t pad_00CE[0x2]; // 0x00CE
    float _warningSecondsRemaining; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    Timer _timer; // 0x00D4

    // Methods
    ExplodeState get_explodeState();
    float get_warningSecondsRemaining();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void ServerBoxActivated(ActivationContext context);
    bool ServerFlammableCanBePutOut();
    void ServerFlammablePutOut();
    void .ctor();
    static void .cctor();
    bool Weaved();
    ExplodeState get_Network_state();
    void set_Network_state(ExplodeState value);
    float get_Network_warningSecondsRemaining();
    void set_Network_warningSecondsRemaining(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class IBoxActivated
{
public:

    // Methods
    void ServerBoxActivated(ActivationContext context);
};

// Namespace: <global>
class IBoxStackedOn
{
public:

    // Methods
    void ServerBoxStackedOn();
};

// Namespace: <global>
class PuddleManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static int32_t <puddleVersion>k__BackingField;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    System.Collections.Generic.List<PuddleManager.Blob> _blobs; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    float distanceThresholdForBlob; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float breakBlobYThreshold; // 0x00A4

    // Methods
    static int32_t get_puddleVersion();
    static void set_puddleVersion(int32_t value);
    void OnUpdateSimulation();
    void ServerSpawnPuddleInternal(GameObject* prefab, Vector3 pos, bool isWater, float minDistanceFromOtherPuddles, GameObject* vfx);
    void ServerSpawnPuddle(GameObject* prefab, Vector3 position);
    void RpcSpawnBlob(GameObject* prefab, Vector3 position);
    static void BumpVersion();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcSpawnBlob__GameObject__Vector3(GameObject* prefab, Vector3 position);
    static void InvokeUserCode_RpcSpawnBlob__GameObject__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class FireSystem : public EntityObjectSystemBase`1
{
public:

    // Methods
    bool ShouldRun();
    void OnUpdateObjectSystem(Aggro.Core.QueryResults<Flammable> results);
    void .ctor();
};

// Namespace: <global>
class Flammable : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static float PUDDLE_HEIGHT_THRESHOLD;

    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem[][] smokingParticles; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ParticleSystem[][] onFireParticles; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    StudioEventEmitter* fireIgniteSFX; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* fireLoopSFX; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float spreadRadius; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool destroySelfAfterOnFire; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float heatingUpDuration; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float smokingDuration; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float onFireDuration; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float onFireSavableDuration; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float puddleSetFireRadius; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float puddleSetFireCheckEvery; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float playerSpreadRadius; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float stressValueRate; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    FireState _state; // 0x00E0
    bool _serverIsBeingSpreadTo; // 0x00E1
    uint8_t pad_00E2[0x2]; // 0x00E2
    int32_t _serverSpeedPercentage; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool _viewPlaying; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    Timer _timer; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    Timer _puddleTimer; // 0x00F0

    // Methods
    FireState get_fireState();
    bool get_isOnFire();
    void OnEntityDestroyed();
    void OnUpdateSimulationEarly();
    void ServerSystemProcessHeatSurrounding();
    void ServerSystemProcessFire();
    bool ServerTryCheckForPuddles();
    void RpcIgnited();
    void OnUpdatePresentation();
    void RequestSetFire();
    void CmdSetFire();
    void ServerSetFire();
    void RequestClearFire();
    void CmdClearFire();
    void ServerClearFire();
    bool CanBePutOut();
    void ServerIsBeingSpreadTo(int32_t speedPercentage);
    void OnDrawGizmosSelected();
    static void FireDevCmd(DevCmdArg[][] args);
    static String[][] FireBoxDevComplete();
    void ServerBoxActivated(ActivationContext context);
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    bool ServerFlammableCanBePutOut();
    void ServerFlammablePutOut();
    void .ctor();
    static void .cctor();
    bool Weaved();
    FireState get_Network_state();
    void set_Network_state(FireState value);
    void UserCode_RpcIgnited();
    static void InvokeUserCode_RpcIgnited(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetFire();
    static void InvokeUserCode_CmdSetFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdClearFire();
    static void InvokeUserCode_CmdClearFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct FireState
{
public:
    // Static fields
    // static FireState None;
    // static FireState HeatingUp;
    // static FireState Smoking;
    // static FireState OnFireSavable;
    // static FireState OnFireBurnt;
    // static FireState Burnt;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class IFlammable
{
public:

    // Methods
    bool ServerFlammableCanBePutOut();
    void ServerFlammablePutOut();
};

// Namespace: <global>
class GlobalAction : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    bool preventCrashOut; // 0x0098
    bool _hasChargesLeft; // 0x0099

    // Methods
    bool get_hasChargesLeft();
    void OnEntityCreated();
    bool TryRequestConsumeCharge();
    void CmdConsumeCharge();
    void ServerConsumeCharge();
    void .ctor();
    bool Weaved();
    bool get_Network_hasChargesLeft();
    void set_Network_hasChargesLeft(bool value);
    void UserCode_CmdConsumeCharge();
    static void InvokeUserCode_CmdConsumeCharge(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class GlobalEffects : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float stressRate; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    bool stressImpactAdd; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t vehicleSpeedPercentage; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t nitroChargePercentage; // 0x005C

    // Methods
    float GetStressRate();
    bool ShouldAddStressOnImpact();
    int32_t GetVehicleSpeedPercentage();
    int32_t GetNitroChargePercentage();
    void .ctor();
};

// Namespace: <global>
class Grabbable : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<UnityEngine.Collider> _colliders;
    // static float POSITION_CORRECTION_THRESHOLD;
    // static float POSITION_CORRECTION_THRESHOLD_SQR;
    // static float DOT_45_DEGREES;
    // static int32_t MAX_STACK_COUNT;
    // static System.Collections.Generic.List<GrabbableHolder> _holders;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;
    // static System.Collections.Generic.List<Grabbable.BoxSpring> _boxSprings;
    // static System.Collections.Generic.List<IBoxStackedOn> _boxStackedOns;
    // static System.Collections.Generic.List<UnityEngine.Vector3> _positions;
    // static int32_t SELECTED;
    // static bool _loggedException;

    uint8_t pad_0000[0x98]; // 0x0000
    Collider* physicsCollider; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    SpringData[][] springs; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Renderer[][] boxMeshRenderers; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* stackTrigger; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Entity syncHeldByPlayer; // 0x00B8
    uint8_t pad_00B9[0x1F]; // 0x00B9
    Mirror.SyncList<Aggro.Core.Entity> _stack; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    NetworkIdentity* _baseGrabbable; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    MaterialPropertyBlock* boxMpb; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Spring[][] _springs; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.Queue<Grabbable.IgnoredCollision> _ignoredQueue; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Entity <serverPlayerEntity>k__BackingField; // 0x0100
    uint8_t pad_0101[0x1F]; // 0x0101
    Entity <serverHolderEntity>k__BackingField; // 0x0120
    uint8_t pad_0121[0x1F]; // 0x0121
    bool canBeStackedOn; // 0x0140
    uint8_t pad_0141[0x3]; // 0x0141
    float placementForce; // 0x0144
    uint8_t pad_0145[0x3]; // 0x0145
    float placementUpwardsModifier; // 0x0148
    uint8_t pad_0149[0x3]; // 0x0149
    float placementIgnoreColliderDuration; // 0x014C
    uint8_t pad_014D[0x3]; // 0x014D
    float breakStackSpringDistance; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    float breakStackForceAmount; // 0x0154
    uint8_t pad_0155[0x3]; // 0x0155
    EventReference pickUpSfx; // 0x0158
    uint8_t pad_0159[0xF]; // 0x0159
    int32_t _stackLevel; // 0x0168
    uint8_t pad_0169[0x3]; // 0x0169
    int32_t _stackSlotsRemaining; // 0x016C
    uint8_t pad_016D[0x3]; // 0x016D
    bool _syncCanPutBoxOn; // 0x0170
    uint8_t pad_0171[0x3]; // 0x0171
    int32_t syncStackIndex; // 0x0174
    uint8_t pad_0175[0x3]; // 0x0175
    bool syncHeldInHolder; // 0x0178
    bool _isKinematic; // 0x0179
    bool _isInteractable; // 0x017A
    bool _serverIsOutbounding; // 0x017B
    int32_t <serverHolderId>k__BackingField; // 0x017C
    uint8_t pad_017D[0x3]; // 0x017D
    Vector3 <stackCorrectionVelocity>k__BackingField; // 0x0180
    uint8_t pad_0181[0xB]; // 0x0181
    Vector3 <stackCorrectionTorque>k__BackingField; // 0x018C
    uint8_t pad_018D[0xB]; // 0x018D
    bool <tutorialStackBroken>k__BackingField; // 0x0198
    uint8_t pad_0199[0x3]; // 0x0199
    uint32_t ____baseGrabbableNetId; // 0x019C

    // Methods
    int32_t get_stackLevel();
    bool get_isKinematic();
    bool get_isInteractable();
    bool get_serverIsOutbounding();
    bool get_isBase();
    bool get_isInStack();
    bool get_isInStackAndNotBase();
    bool get_canPutBoxOn();
    Entity get_serverPlayerEntity();
    void set_serverPlayerEntity(Entity value);
    Entity get_serverHolderEntity();
    void set_serverHolderEntity(Entity value);
    int32_t get_serverHolderId();
    void set_serverHolderId(int32_t value);
    Vector3 get_stackCorrectionVelocity();
    void set_stackCorrectionVelocity(Vector3 value);
    Vector3 get_stackCorrectionTorque();
    void set_stackCorrectionTorque(Vector3 value);
    Entity get_baseEntity();
    bool get_tutorialStackBroken();
    void set_tutorialStackBroken(bool value);
    void OnInitializeBehaviour();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void CorrectInStack(int32_t index, bool torqueOnly, Vector3 toLeft, Vector3 toRight, Vector3 toFwd, Vector3 toBack);
    bool ShouldBreakStack(Vector3 toLeft, Vector3 toRight, Vector3 toFwd, Vector3 toBack);
    void Correct(Spring spring, Vector3 from, Vector3 to, bool torqueOnly, Vector3 velocity);
    void GetGroundedSpringPositions(float springDistanceMultiplier, Vector3 left, Vector3 right, Vector3 fwd, Vector3 back);
    void GetBottomBoxSpringPositions(float springDistanceMultiplier, Vector3 left, Vector3 right, Vector3 fwd, Vector3 back);
    void GetTopBoxSpringPositions(float springDistanceMultiplier, Vector3 left, Vector3 right, Vector3 fwd, Vector3 back);
    void MarkIsCandidate();
    void ServerFixStack(Vector3 startPos, Quaternion rotation);
    void ServerFixStack(Vector3 startPos, Vector3 velocity, Quaternion rotation);
    void ServerAddToStack(Grabbable* other);
    void ServerSplitStackAtMe();
    void ServerSplitStack(int32_t index);
    void ServerBreakStackAtMe();
    void RpcBreakStack(Entity e1, Entity e2, Entity e3, Entity e4, RoomType room);
    int32_t ServerGetStackIndex(Grabbable* grabbable);
    int32_t ServerGetStackIndex();
    void RpcQueueEvBrokeEntireStack();
    void ServerBreakEntireStack();
    void ServerPlayerGrabbed(PlayerGrabber* grabber);
    void RpcSetPlaceInPlayerGrabber(Entity player, Entity e2, Entity e3, Entity e4);
    void ServerPlayerPrepareForStacked();
    void RpcPlayerPrepareForStacked(Entity e2, Entity e3, Entity e4, RoomType room);
    void ServerPlaceInHolder(GrabbableHolder* holder);
    void RpcPlaceInHolder(Entity holderEntity, int32_t holderId, Entity e2, Entity e3, Entity e4, RoomType room);
    void ServerRemoveFromHolder();
    void RpcRemoveFromHolder(Entity e2, Entity e3, Entity e4, RoomType room);
    void ServerBackFromOutbound();
    void RpcReadyFromInbound(Entity e2, Entity e3, Entity e4, RoomType room);
    void ServerReadyForOutboundTransition(GrabbableHolder* holder);
    void RpcReadyForOutboundTransition(Entity holderEntity, int32_t holderId, Entity e2, Entity e3, Entity e4);
    void ServerSetInteractable(bool interactable);
    void RpcSetInteractable(bool interactable);
    void ServerPlayerDropped(Vector3 position, Vector3 velocity, Quaternion rotation);
    void RpcPlayerDropped(Entity e2, Entity e3, Entity e4, RoomType room);
    void ServerGetStack(Entity e2, Entity e3, Entity e4);
    void ServerGetStackAtIndex(int32_t index, Entity e1, Entity e2, Entity e3, Entity e4);
    void ServerAddPlacementForce(Entity from, Vector3 origin);
    void IgnoreCollision(Entity ignore);
    void RpcIgnoreCollision(Entity ignore);
    void SetKinematic(Entity e, Transform* container, int32_t stackIndex, bool interactable, bool colliders);
    void SetPhysics(Entity e, RoomType room);
    int32_t GetStackCount();
    void GetStack(System.Collections.Generic.List<Aggro.Core.Entity> stack);
    void GetStack(System.Collections.Generic.List<Grabbable> stack);
    bool CanAddToStack(Grabbable* grabbable);
    bool ServerIsBeingHeldByPlayer();
    Entity ServerGetHoldingPlayer();
    bool ServerIsBeingHeldByHolder();
    void SetBaseGrabbable(Grabbable* grabbable);
    void OnUpdateSimulationEarly();
    void SetColliders(Entity e, bool colliders);
    bool TryGetHolder(Entity target, int32_t id, GrabbableHolder* holder);
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_Network_stackLevel();
    void set_Network_stackLevel(int32_t value);
    int32_t get_Network_stackSlotsRemaining();
    void set_Network_stackSlotsRemaining(int32_t value);
    bool get_Network_syncCanPutBoxOn();
    void set_Network_syncCanPutBoxOn(bool value);
    int32_t get_NetworksyncStackIndex();
    void set_NetworksyncStackIndex(int32_t value);
    Entity get_NetworksyncHeldByPlayer();
    void set_NetworksyncHeldByPlayer(Entity value);
    bool get_NetworksyncHeldInHolder();
    void set_NetworksyncHeldInHolder(bool value);
    NetworkIdentity* get_Network_baseGrabbable();
    void set_Network_baseGrabbable(NetworkIdentity* value);
    void UserCode_RpcBreakStack__Entity__Entity__Entity__Entity__RoomType(Entity e1, Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcBreakStack__Entity__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcQueueEvBrokeEntireStack();
    static void InvokeUserCode_RpcQueueEvBrokeEntireStack(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetPlaceInPlayerGrabber__Entity__Entity__Entity__Entity(Entity player, Entity e2, Entity e3, Entity e4);
    static void InvokeUserCode_RpcSetPlaceInPlayerGrabber__Entity__Entity__Entity__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayerPrepareForStacked__Entity__Entity__Entity__RoomType(Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcPlayerPrepareForStacked__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlaceInHolder__Entity__Int32__Entity__Entity__Entity__RoomType(Entity holderEntity, int32_t holderId, Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcPlaceInHolder__Entity__Int32__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRemoveFromHolder__Entity__Entity__Entity__RoomType(Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcRemoveFromHolder__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcReadyFromInbound__Entity__Entity__Entity__RoomType(Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcReadyFromInbound__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcReadyForOutboundTransition__Entity__Int32__Entity__Entity__Entity(Entity holderEntity, int32_t holderId, Entity e2, Entity e3, Entity e4);
    static void InvokeUserCode_RpcReadyForOutboundTransition__Entity__Int32__Entity__Entity__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetInteractable__Boolean(bool interactable);
    static void InvokeUserCode_RpcSetInteractable__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayerDropped__Entity__Entity__Entity__RoomType(Entity e2, Entity e3, Entity e4, RoomType room);
    static void InvokeUserCode_RpcPlayerDropped__Entity__Entity__Entity__RoomType(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcIgnoreCollision__Entity(Entity ignore);
    static void InvokeUserCode_RpcIgnoreCollision__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class GrabbableHolder : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Grabbable> _grabbables;

    uint8_t pad_0000[0x98]; // 0x0000
    TagQuery* tagQuery; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* holdingVisual; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Transform* container; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Entity _syncOnlyCanHold; // 0x00B0
    uint8_t pad_00B1[0x1F]; // 0x00B1
    Entity _serverHeldEntity; // 0x00D0
    uint8_t pad_00D1[0x1F]; // 0x00D1
    PlacementHintVisuals* placementHintVisuals; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    int32_t id; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    bool canBePlacedInByPlayer; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    int32_t maximumStackHeight; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    bool isHoldingAnItem; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    int32_t holderLevel; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    bool isInteractable; // 0x010C

    // Methods
    Entity get_serverHeldEntity();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    bool CanSetItem(Grabbable* item, bool fromPlayer);
    bool ServerTrySetItem(Grabbable* item, bool fromPlayer);
    void ServerRemoveItem();
    void ServerOnlyHold(Entity item);
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_NetworkisHoldingAnItem();
    void set_NetworkisHoldingAnItem(bool value);
    int32_t get_NetworkholderLevel();
    void set_NetworkholderLevel(int32_t value);
    bool get_NetworkisInteractable();
    void set_NetworkisInteractable(bool value);
    Entity get_Network_syncOnlyCanHold();
    void set_Network_syncOnlyCanHold(Entity value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class GrabbableHolderTrigger : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GrabbableHolder* <holder>k__BackingField; // 0x0050

    // Methods
    GrabbableHolder* get_holder();
    void set_holder(GrabbableHolder* value);
    void OnInitializeBehaviour();
    void .ctor();
};

// Namespace: <global>
class HeldEffects : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PlayerEffectContext context; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    bool disableWhenBoosting; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float stressRate; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    bool stressRateChangeOnlyWhenDrifting; // 0x005C
    bool stressImpactAdd; // 0x005D
    uint8_t pad_005E[0x2]; // 0x005E
    int32_t vehicleSpeedPercentage; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t nitroCapacityPercentage; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t nitroChargePercentage; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t heavyTagVehicleSpeedPercentage; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    bool ghost; // 0x0070

    // Methods
    float GetStressRate(Entity heldBy);
    bool GetGhost();
    bool ShouldAddStressOnImpact(Entity heldBy);
    int32_t GetVehicleSpeedPercentage(Entity heldBy);
    int32_t GetNitroCapacityPercentage(Entity heldBy);
    int32_t GetNitroChargePercentage(Entity heldBy);
    void .ctor();
};

// Namespace: <global>
class Junk : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* cycledVfx; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.LinkedListNode<Aggro.Core.Entity> _node; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool registerWithServerSpawner; // 0x0060

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void ServerJunkBeingCycled();
    void .ctor();
};

// Namespace: <global>
class KickedBonk : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float playerForce; // 0x0050

    // Methods
    void OnLocalPlayerKicked(Entity player);
    void .ctor();
};

// Namespace: <global>
class NetworkBoxWanderSystem : public EntitySystemBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<UnityEngine.Vector3> _playerPositions;

    uint8_t pad_0000[0x40]; // 0x0000
    Aggro.Core.ObjectQuery<VehicleController> _controllers; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Aggro.Core.ObjectQuery<BoxWander> _wanders; // 0x0048

    // Methods
    void OnCreateSystem();
    void OnUpdateSystem();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Perishable : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float lifetimeDuration; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float _normalizedLifeRemaining; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    Timer _lifeTimer; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    bool _wasDamaged; // 0x00A4

    // Methods
    float get_normalizedLifeRemaining();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
    float get_Network_normalizedLifeRemaining();
    void set_Network_normalizedLifeRemaining(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PhysicsStackCorrectionPostSystem : public EntityObjectSystemBase`1
{
public:

    // Methods
    void OnUpdateObjectSystem(Aggro.Core.QueryResults<Grabbable> results);
    void .ctor();
};

// Namespace: <global>
class PhysicsStackCorrectionPreSystem : public EntityObjectSystemBase`1
{
public:

    // Methods
    void OnUpdateObjectSystem(Aggro.Core.QueryResults<Grabbable> results);
    void .ctor();
};

// Namespace: <global>
class PlacementHintVisuals : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* hintObject; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* hintCannotPlaceObject; // 0x0058

    // Methods
    void OnUpdatePresentationEarly();
    void .ctor();
};

// Namespace: <global>
class Puddle : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static int32_t AnimatedVisualScale;
    // static int32_t Active;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* blobPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* splashVfxPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.HashSet<Mirror.NetworkConnectionToClient> _connections; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<Puddle.PuddleData> _puddleDatas; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    MeshRenderer* puddleMeshRenderer; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Animator* puddleAnimator; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    GameObject* destroyedByLavaVFX; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    GameObject* cleanedVFX; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    bool isWater; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float washUpRadius; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    bool canBeWashedAway; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float minDistanceFromOtherPuddles; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float timeToScrubbedUp; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    bool isLiquid; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float animatedVisualScale; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    bool isDestroyedByLava; // 0x00F4
    uint8_t _syncCleanCount; // 0x00F5
    uint8_t pad_00F6[0x2]; // 0x00F6
    float _syncNormalizedCleanTime; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    bool _hasTriedWash; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    Timer _serverTimer; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    int32_t _puddleVersion; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float _cachedRadius; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t _serverRobotCleanCount; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    bool destroying; // 0x0110

    // Methods
    bool get_isBeingCleaned();
    float get_normalizedCleanTime();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void DestroyPuddle(PuddleDestroyStyle destroyStyle);
    void RpcPlayDestroyAnim();
    IEnumerator* DestroyPuddleCo();
    void PuddleCollidingChanged();
    void OnUpdatePresentationEarly();
    void ServerIncrementCleaning(NetworkConnectionToClient* conn);
    void ServerDecrementCleaning(NetworkConnectionToClient* conn);
    void ServerIncrementCleaningRobot();
    void ServerDecrementCleaningRobot();
    int32_t GetCleanSpeedPercentage();
    void .ctor();
    static void .cctor();
    bool Weaved();
    uint8_t get_Network_syncCleanCount();
    void set_Network_syncCleanCount(uint8_t value);
    float get_Network_syncNormalizedCleanTime();
    void set_Network_syncNormalizedCleanTime(float value);
    void UserCode_RpcPlayDestroyAnim();
    static void InvokeUserCode_RpcPlayDestroyAnim(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PuddleBlobVisual : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    AnimationCurve* animationCurve; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float _lifetime; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float animationLengthSeconds; // 0x005C

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PuddleSlipOut : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float radius; // 0x0050

    // Methods
    void OnDrawGizmosSelected();
    void .ctor();
};

// Namespace: <global>
class ShiftOrderObject : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    GameObject* prefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* orderVisualPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite* UIImage; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool hasMaxOutboundCount; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t maxOutboundCount; // 0x0034

    // Methods
    bool TryGetAssetId(uint32_t assetId);
    bool GetCanBeStackedOn();
    void .ctor();
};

// Namespace: <global>
class SpecialDelivery : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    bool isWildCard; // 0x0050

    // Methods
    void .ctor();
};

// Namespace: <global>
class StackTape : public EntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Grabbable> _grabbables;

    uint8_t pad_0000[0x50]; // 0x0000
    Transform* aZPos; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* aZNeg; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Transform* aXPos; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Transform* aXNeg; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* bZPos; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Transform* bZNeg; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* bXPos; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* bXNeg; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Renderer[][] tapeRenderers; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* poofPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    bool _active; // 0x00A0

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnBrokeEntireStack(Entity e, EvBrokeEntireStack ev);
    void OnUpdatePresentationLate();
    void SetTransform(Transform* a, Transform* b);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class StartingStack : public EntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Grabbable> _children;


    // Methods
    void OnEntityStart();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class IncomingPreview : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<OrderCount> _orderCounts; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* orderVisualContainer; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Transform> boxOrderVisualTransforms; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t minCount; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float speed; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float spacing; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float maxDistance; // 0x0074

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnInboundChanged(EvInboundOrdersChanged ev);
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class SoccerGoal : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Transform* ballResetTransform; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* soccerBall; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* goalVFX; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* poofVFX; // 0x00B0

    // Methods
    void OnTriggerEnter(Collider* other);
    void ScoreGoal(Grabbable* grabbable);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class CosmeticGlobalData : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    CostumeObject[][] costumes; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ColorChoice[][] colors; // 0x0020

    // Methods
    void .ctor();
};

// Namespace: <global>
class CostumeObject : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    MonoString* costumeName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<UnityEngine.Sprite> costumeTextures; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool startsUnlocked; // 0x0028

    // Methods
    void .ctor();
};

// Namespace: <global>
class AutoPlayManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    System.Collections.Generic.List<OutboundBay> _bays; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<GrabbableHolder> _holders; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<OutboundBay.Order> _orders; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<Mirror.NetworkConnectionToClient> _connections; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.List<Aggro.Core.Entity> _grabbables; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    float delayLobby; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float delayBreakRoom; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float delayOrganization; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float completeBaysSecondsRemaining; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float forceFailedSendEvery; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    Timer _lobbyTimer; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    Timer _serverTimer; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    bool _syncAutoPlaying; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    int32_t _contractIndex; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    bool _lobbyRequested; // 0x00E4
    bool _breakRoomRequested; // 0x00E5
    bool _organizationRequested; // 0x00E6

    // Methods
    bool get_autoPlaying();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void ServerEnableAutoPlay();
    static void AutoPlayDevCmd(DevCmdArg[][] args);
    void .ctor();
    bool Weaved();
    bool get_Network_syncAutoPlaying();
    void set_Network_syncAutoPlaying(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DebugHideUI : public MonoBehaviour
{
public:

    // Methods
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class DebugManager : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t _targetFPS;
    // static int32_t _simMS;

    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* graphContainer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* versionText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GUIStyle* _style; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    NetworkManagerMode _networkMode; // 0x0038

    // Methods
    void Awake();
    void Update();
    void OnInputControlGained();
    void OnInputControlLost();
    void OnConsoleClosed();
    void LateUpdate();
    void FixedUpdate();
    static void DebugDevCmd(DevCmdArg[][] args);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class DevCmdHideUI : public MonoBehaviour
{
public:

    // Methods
    static void HideUI(DevCmdArg[][] args);
    void .ctor();
};

// Namespace: <global>
class DevCmdOptionModifier : public DevCmdOptionUIBase
{
public:

    // Methods
    bool TryGetInitial(MonoString* optionStr, bool isEnd);
    System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
    MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
    void .ctor();
};

// Namespace: <global>
class DevCmdOptionOneDeep : public DevCmdOptionUIBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    MonoString* mainLabel; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Entry[][] entries; // 0x0030

    // Methods
    bool TryGetInitial(MonoString* optionStr, bool isEnd);
    System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
    MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
    void .ctor();
};

// Namespace: <global>
class DevCmdOptionSpawn : public DevCmdOptionUIBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    MonoString* mainLabel; // 0x0028

    // Methods
    bool TryGetInitial(MonoString* optionStr, bool isEnd);
    System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
    MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
    void .ctor();
};

// Namespace: <global>
class DevCmdSpawn : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<System.String,UnityEngine.GameObject> _nameToPrefab;
    // static GameObject[][] _prefabs;

    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* uiCategory; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* uiOverridenName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool uiOverrideName; // 0x0030
    bool spawnOnGround; // 0x0031

    // Methods
    static void RuntimeInitialize();
    static bool TryGetPrefab(MonoString* name, GameObject* prefab);
    static GameObject[][] GetPrefabs();
    static void SpawnDevCmd(DevCmdArg[][] args);
    static String[][] SpawnDevCmdComplete();
    static void CheckCreateCache();
    void .ctor();
};

// Namespace: <global>
class DevCmdUtil
{
public:

    // Methods
    static bool TryGetEntityFromDevCmdName(MonoString* devCmdName, Entity entity);
    static String[][] GetEntityNames();
};

// Namespace: <global>
class Bees : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _candidates;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    Entity _syncTargeting; // 0x0098
    uint8_t pad_0099[0x1F]; // 0x0099
    Entity _serverTargeting; // 0x00B8
    uint8_t pad_00B9[0x1F]; // 0x00B9
    Aggro.Core.ObjectQuery<BoxHealth> _boxQueries; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Aggro.Core.ObjectQuery<PlayerEffects> _playerQueries; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    GameObject* beeDisperseVFX; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    StudioEventEmitter* beeAttackSfx; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    StudioEventEmitter* beeAggroSfx; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    StudioEventEmitter* beeBuzzSfx; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    Canvas* aggroSymbolCanvas; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    RectTransform* aggroContainer; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    GameObject* aggroSymbol; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    float initialSearchRadius; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    float speed; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    float damagingDistance; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    float timeUntilDamaged; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    float pauseDuration; // 0x0130
    uint8_t pad_0131[0x3]; // 0x0131
    float giveUpDuration; // 0x0134
    uint8_t pad_0135[0x3]; // 0x0135
    float blowBeesAwayDuration; // 0x0138
    uint8_t pad_0139[0x3]; // 0x0139
    float playerStressValueRate; // 0x013C
    uint8_t pad_013D[0x3]; // 0x013D
    float playerStressDistance; // 0x0140
    uint8_t pad_0141[0x3]; // 0x0141
    float noTargetSpeed; // 0x0144
    uint8_t pad_0145[0x3]; // 0x0145
    float noTargetNoiseScale; // 0x0148
    uint8_t pad_0149[0x3]; // 0x0149
    float achievementKeepAwayDuration; // 0x014C
    uint8_t pad_014D[0x3]; // 0x014D
    State _serverState; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    Timer _serverTimer; // 0x0154
    uint8_t pad_0155[0x3]; // 0x0155
    Timer _serverDestroyingTimer; // 0x0158
    uint8_t pad_0159[0x3]; // 0x0159
    bool _serverIsDestroying; // 0x015C
    uint8_t pad_015D[0x3]; // 0x015D
    Timer _serverKeepAwayTimer; // 0x0160

    // Methods
    Entity get_targeting();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void RpcOnAttack();
    void OnUpdatePresentationLate();
    Vector2 SetTargetPosition(Vector3 worldPos);
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void ServerIsBeingDestroyed();
    void ServerDestroyedImmediate();
    void .ctor();
    static void .cctor();
    bool Weaved();
    Entity get_Network_syncTargeting();
    void set_Network_syncTargeting(Entity value);
    void UserCode_RpcOnAttack();
    static void InvokeUserCode_RpcOnAttack(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DeathManager : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<DeathManager.Entry> _queue; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<DeathManager.DyingEntry> _queueDying; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<DeathManager.DyingEntry> _dyings; // 0x0060

    // Methods
    void OnEntityDestroyed();
    void ClearDyings();
    void QueueDeath(Entity entity, DeathContext context);
    void QueueDeathForce(Entity entity);
    void QueueDying(GameObject* gobj, DeathContext context);
    void QueueDying(DyingBehaviour* behaviour, DeathContext context);
    void QueueDying(PoolableReference poolable, DeathContext context);
    void OnUpdateSimulation();
    void .ctor();
};

// Namespace: <global>
class DeathSystemGroup : public EntitySystemGroupBase
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class DyingBehaviour : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<IDyingBehaviour> _dyings; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<IDyingBehaviour> _stillDying; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    DeathContext _context; // 0x0060

    // Methods
    void Awake();
    void StartDying(DeathContext context);
    void UpdateDying();
    bool IsDoneDying();
    void .ctor();
};

// Namespace: <global>
class IDyingBehaviour
{
public:

    // Methods
    void StartDying(DeathContext context);
    void UpdateDying(DeathContext context);
    bool IsDoneDying(DeathContext context);
    void FinishedDying(DeathContext context);
};

// Namespace: <global>
struct DeathContext
{
public:
};

// Namespace: <global>
class NetworkTransformFollow : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Transform* _transform; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* _parent; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* _notFollowingName; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    MonoString* _followingName; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    bool disableWhenOwner; // 0x00B8
    bool disableWhenKinematic; // 0x00B9
    bool controlRigidbodyInterpolation; // 0x00BA
    uint8_t pad_00BB[0x1]; // 0x00BB
    float positionInterpolateSpeed; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float rotationSlerpSpeed; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float positionSnapDistance; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float <speedMultiplier>k__BackingField; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    bool _hasProcessed; // 0x00CC

    // Methods
    float get_speedMultiplier();
    void set_speedMultiplier(float value);
    void OnInitializeBehaviour();
    void OnEntityStart();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    bool ShouldProcess();
    void ServerTeleported();
    void RpcTeleported();
    void .ctor();
    bool Weaved();
    void UserCode_RpcTeleported();
    static void InvokeUserCode_RpcTeleported(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class RadialForce : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    ForceType forceType; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float forceAmount; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float radius; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    Ease forceEase; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    bool destroyNearbyBoxes; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float destroyDistance; // 0x00AC

    // Methods
    bool get_showDestroyDistance();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class TimedLifetime : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float lifetimeDuration; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float _syncNormalizedLifetime; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    Timer _serverTimer; // 0x00A0

    // Methods
    float get_normalizedLifetime();
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
    float get_Network_syncNormalizedLifetime();
    void set_Network_syncNormalizedLifetime(float value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class AchievementManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.List<GrabbableHolder> _holders;
    // static MonoString* ACH_FORKLIFT_UPGRADED;
    // static MonoString* STAT_CRASHOUT_COUNT;
    // static MonoString* STAT_BOOST_COUNT;
    // static MonoString* STAT_BOXES_SHIPPED;
    // static MonoString* STAT_EXPLOSIVES_SHIPPED;
    // static MonoString* STAT_ANIMALS_SHIPPED;
    // static MonoString* STAT_DRIFT_DISTANCE;
    // static MonoString* STAT_FIRE_EXTINGUISHED;
    // static MonoString* STAT_TRASH_DESTROYED;
    // static MonoString* STAT_TRASH_MONEY;
    // static MonoString* STAT_BONUS_SHIPPED;
    // static MonoString* STAT_BANANA_SLIPS;
    // static MonoString* STAT_MESSES_CLEANED;
    // static MonoString* STAT_TIPTAP_MINUTES;
    // static MonoString* ACH_HOARDER;
    // static MonoString* ACH_FORKLIFT_SUPER_UPGRADED;
    // static MonoString* ACH_NO_CRASHOUT_SHIFT;
    // static MonoString* ACH_NO_CRASHOUT_CONTRACT;
    // static MonoString* ACH_BELLS_SOME;
    // static MonoString* ACH_BELLS_ALL;
    // static MonoString* ACH_UNLOCKED_CONTRACTS;
    // static MonoString* ACH_UNLOCKED_COSTUMES;
    // static MonoString* ACH_SRANK_FIRST;
    // static MonoString* ACH_SRANK_LAST;
    // static MonoString* ACH_SHELF_FULL;
    // static MonoString* ACH_ZOOKEEPER;
    // static MonoString* ACH_CHICKEN_JOCKEY;
    // static MonoString* ACH_BEE_KEEPAWAY;
    // static MonoString* ACH_BREAKROOM_GOAL;
    // static MonoString* ACH_TIPTAP_SHARE;
    // static MonoString* ACH_TIPTAP_FIRST;
    // static MonoString* ACH_TIPTAP_PRO;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _shelves;

    uint8_t pad_0000[0x98]; // 0x0000
    String[][] achievementIds; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.Dictionary<System.String,System.Int16> _idToIndex; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    bool _hasSentFullShelfAchievement; // 0x00A8

    // Methods
    void OnInitializeBehaviour();
    void OnUpdatePresentation();
    void RpcSendFullShelfAchievement();
    static void PlatformDevCmd(DevCmdArg[][] args);
    void ServerAddStat(MonoString* id, int32_t count);
    void ServerAddStat(NetworkConnectionToClient* target, MonoString* id, int32_t count);
    void ServerUnlockAchievement(MonoString* id);
    void ServerUnlockAchievement(NetworkConnectionToClient* target, MonoString* id);
    void RpcAddCount(int16_t index, int16_t count);
    void RpcAddCount(NetworkConnectionToClient* target, int16_t index, int16_t count);
    void RpcUnlockAchievement(int16_t index);
    void RpcUnlockAchievement(NetworkConnectionToClient* target, int16_t index);
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcSendFullShelfAchievement();
    static void InvokeUserCode_RpcSendFullShelfAchievement(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcAddCount__Int16__Int16(int16_t index, int16_t count);
    static void InvokeUserCode_RpcAddCount__Int16__Int16(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcAddCount__NetworkConnectionToClient__Int16__Int16(NetworkConnectionToClient* target, int16_t index, int16_t count);
    static void InvokeUserCode_RpcAddCount__NetworkConnectionToClient__Int16__Int16(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcUnlockAchievement__Int16(int16_t index);
    static void InvokeUserCode_RpcUnlockAchievement__Int16(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcUnlockAchievement__NetworkConnectionToClient__Int16(NetworkConnectionToClient* target, int16_t index);
    static void InvokeUserCode_RpcUnlockAchievement__NetworkConnectionToClient__Int16(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class AudioManager
{
public:
    // Static fields
    // static bool _initialized;
    // static VCA _gameVCA;
    // static VCA _musicVCA;
    // static VCA _sfxVCA;
    // static VCA _uiVCA;
    // static VCA _voVCA;
    // static Bus _voBus;
    // static EventInstance _SNAPSHOT_MONO;
    // static EventInstance _lobbyTitleInstance;


    // Methods
    static EventInstance get_SNAPSHOT_MONO();
    static void RuntimeInit();
    static void Initialize();
    static void SetGameVolume(float value);
    static void SetMusicVolume(float value);
    static void SetSfxVolume(float value);
    static void SetUIVolume(float value);
    static void SetVOVolume(float value);
    static void SetMonoAudio(bool value);
    static void PlaySfx(EventReference eventRef, Entity entity);
    static void PlaySfx(EventReference eventRef, Transform* transform);
    static void PlaySfx(EventReference eventRef, Vector3 position);
    static void PlaySfx(EventReference eventRef);
    static bool IsPlayingVO();
    static void PlayVO(EventReference eventRef);
    static void Log(MonoString* msg, MonoObject* obj);
    static MonoString* GetEventName(EventReference eventReference);
    static bool TryGetEventInstance(EventReference eventRef, EventInstance sfx);
    static void LogError(MonoString* msg);
    static void LogException(Exception* e);
    static bool CheckResult(RESULT result);
    static void CheckStart(EventInstance instance);
    static void CheckStop(EventInstance instance);
    static void CheckSetPlayState(EventInstance instance, bool start);
    static void CheckSet3DAttributes(EventInstance instance, Transform* transform, Vector3 velocity);
    static void PlayLobbyTitleMusic();
    static void StopLobbyTitleMusic();
};

// Namespace: <global>
class Bootstrap : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    BootstrapType type; // 0x0020

    // Methods
    void Start();
    IEnumerator* BootstrapCo();
    void .ctor();
};

// Namespace: <global>
class BoxManager : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.LinkedList<Aggro.Core.Entity> _serverList; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    UnityEngine.Pool.ObjectPool<System.Collections.Generic.LinkedListNode<Aggro.Core.Entity>> _pool; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t maxJunkCount; // 0x0060

    // Methods
    System.Collections.Generic.LinkedListNode<Aggro.Core.Entity> ServerAddSpawnedJunk(Entity junk);
    void ServerRemoveSpawnedJunk(System.Collections.Generic.LinkedListNode<Aggro.Core.Entity> node);
    void .ctor();
};

// Namespace: <global>
class CollisionManager : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<VehicleController> allVehicles;
    // static System.Collections.Generic.List<CollisionManager.CollisionEvent> collisionEvents;
    // static System.Collections.Generic.List<VehicleController> vehiclesInCollisions;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    Aggro.Core.ObjectQuery<VehicleController> vehicleQuery; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* collisionVfxPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float impulseThresholdForStress; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    LayerMask playerCollisionMask; // 0x00AC

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulationLate();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class CustomInputSetting : public AggroSettingBase
{
public:
    uint8_t pad_0000[0x48]; // 0x0000
    MonoString* _default; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    MonoString* <value>k__BackingField; // 0x0050

    // Methods
    MonoString* get_value();
    void set_value(MonoString* value);
    void .ctor(MonoString* defaultValue);
    void SetToDefault();
    void SaveToPrefs(MonoString* preferencesKey);
    void LoadFromPrefs(MonoString* preferencesKey);
    void SetValue(MonoString* value);
};

// Namespace: <global>
class CustomInputSettingUI : public AggroSettingUI
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* inputText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Selectable* selectable; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CustomInputSetting* _setting; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool _releaseControl; // 0x0038

    // Methods
    void Set(AggroSettingBase* setting);
    void Refresh();
    void OnListeningForInput();
    void OnAnyButtonPress(InputControl* control);
    void LateUpdate();
    void .ctor();
};

// Namespace: <global>
class GameDevCmds
{
public:

    // Methods
    static void QuitDevCmd(DevCmdArg[][] args);
};

// Namespace: <global>
class GameManager : public MonoBehaviour
{
public:
    // Static fields
    // static GameNextType _next;
    // static NetMsgGameManagerLoad _msg;
    // static bool _isReadyToStart;
    // static GameManager* _instance;
    // static ContractObject* <selectedRunContract>k__BackingField;

    uint8_t pad_0000[0x20]; // 0x0000
    ContractObject[][] contracts; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ContractObject[][] demoContracts; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ContractObject* gymContract; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    EntityWorld* _world; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InitializationUpdateSystemGroup* _initGroup; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SimulationUpdateSystemGroup* _simGroup; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    PresentationUpdateSystemGroup* _presGroup; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PresentationLateUpdateSystemGroup* _presLateGroup; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<ContractObject> _sortedContracts; // 0x0060

    // Methods
    static ContractObject* get_selectedRunContract();
    static void set_selectedRunContract(ContractObject* value);
    void Start();
    ContractObject[][] GetContracts();
    void OnDestroy();
    IEnumerator* GameCo();
    IEnumerator* WaitForAllPlayersCo();
    void OnGameManagerLoad(NetMsgGameManagerLoad msg);
    void OnGameManagerReady(NetMsgGameManagerReady msg);
    static int32_t GenerateSeed();
    void InitializeLobby(int32_t seed);
    void InitializeRun(MonoString* sceneName, ContractObject* contract, int32_t seed);
    void InitializeTutorial(MonoString* sceneName, int32_t seed);
    void InitializeGym(MonoString* sceneName, int32_t seed);
    Room* CheckCreateRoom(Room* room, RoomType roomType);
    void Update();
    void LateUpdate();
    void FixedUpdate();
    static void Next(GameNextType next);
    static void NextRun();
    static void GetAllContracts(System.Collections.Generic.List<ContractObject> contracts);
    static ContractObject[][] GetAllContracts();
    void PrintEventRegistrations();
    static void GetAllUnlockedContracts(int32_t bells, System.Collections.Generic.List<ContractObject> contracts);
    void .ctor();
};

// Namespace: <global>
struct GameNextType
{
public:
    // Static fields
    // static GameNextType None;
    // static GameNextType ServerLobby;
    // static GameNextType ServerRun;
    // static GameNextType ClientMsg;
    // static GameNextType QuitTitle;
    // static GameNextType QuitApplication;
    // static GameNextType QuitInvite;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct NetMsgGameManagerLoad
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool isRun; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* sceneName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t seed; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int8_t contractIndex; // 0x0024
};

// Namespace: <global>
struct NetMsgGameManagerReady
{
public:
};

// Namespace: <global>
struct GameSettings
{
public:
    // Static fields
    // static GameSettings <current>k__BackingField;
    // static uint16_t DEFAULT_PORT;

    uint8_t pad_0000[0x10]; // 0x0000
    GameLoadType loadType; // 0x0010
    NetworkType networkType; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    MonoString* address; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    uint16_t port; // 0x0020
    uint8_t pad_0021[0x1]; // 0x0021
    bool allowFriends; // 0x0022
    uint8_t pad_0023[0x5]; // 0x0023
    MonoString* scene; // 0x0028

    // Methods
    static bool get_hasSettings();
    static GameSettings get_current();
    static void set_current(GameSettings value);
    static void Set(GameSettings gameSettings);
    static void Clear();
    static void Initialize();
};

// Namespace: <global>
struct GameLoadType
{
public:
    // Static fields
    // static GameLoadType None;
    // static GameLoadType Gym;
    // static GameLoadType Lobby;
    // static GameLoadType Tutorial;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
struct NetworkType
{
public:
    // Static fields
    // static NetworkType Host;
    // static NetworkType Join;
    // static NetworkType SinglePlayer;
    // static NetworkType HostPlatform;
    // static NetworkType JoinPlatform;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class GameUtil
{
public:
    // Static fields
    // static MonoString* GAME_SCENE;
    // static MonoString* RUN_SCENE;
    // static MonoString* LOBBY_SCENE;
    // static MonoString* TITLE_SCENE;
    // static MonoString* TUTORIAL_SCENE;
    // static MonoString* DEBUG_SCENE;
    // static int32_t PLAYER_COUNT;
    // static int32_t BELL_COUNT_PER_CONTRACT;
    // static int32_t SHIFT_COUNT;
    // static int32_t MODIFIER_1_AFTER;
    // static int32_t MODIFIER_2_AFTER;
    // static Room* _warehouseRoom;
    // static MonoString* IPADDRESSPORTEXTRACTION;
    // static Room* _breakroomRoom;
    // static Room* _lobbyRoom;
    // static RoomType _activeRoom;
    // static bool _gameInitialized;
    // static Aggro.Core.ObjectQuery<PlayerPosition> _playerPositionsQuery;
    // static Aggro.Core.ObjectQuery<PlayerGrabber> _playerGrabberQuery;
    // static System.Collections.Generic.List<UnityEngine.Transform> _transforms;
    // static System.Collections.Generic.List<UnityEngine.Vector3> _vectors;
    // static EntityWorld* <world>k__BackingField;
    // static MonoString* <currentWarehouseSceneName>k__BackingField;
    // static ContractObject* <contract>k__BackingField;
    // static ShiftOrderObject[][] <orders>k__BackingField;
    // static int32_t <seed>k__BackingField;
    // static Camera* <mainCamera>k__BackingField;
    // static Camera* <uiCamera>k__BackingField;
    // static GameError <gameError>k__BackingField;
    // static bool <isUnloadingScene>k__BackingField;
    // static int32_t <buildNumber>k__BackingField;
    // static MonoString* <buildHash>k__BackingField;
    // static MonoString* <gameVersionFull>k__BackingField;


    // Methods
    static EntityWorld* get_world();
    static void set_world(EntityWorld* value);
    static EntityManager* get_entityManager();
    static bool get_isReady();
    static bool get_isLobby();
    static bool get_isRun();
    static MonoString* get_currentWarehouseSceneName();
    static void set_currentWarehouseSceneName(MonoString* value);
    static ContractObject* get_contract();
    static void set_contract(ContractObject* value);
    static ShiftOrderObject[][] get_orders();
    static void set_orders(ShiftOrderObject[][] value);
    static int32_t get_seed();
    static void set_seed(int32_t value);
    static Camera* get_mainCamera();
    static void set_mainCamera(Camera* value);
    static Camera* get_uiCamera();
    static void set_uiCamera(Camera* value);
    static GameError get_gameError();
    static void set_gameError(GameError value);
    static bool get_isUnloadingScene();
    static void set_isUnloadingScene(bool value);
    static int32_t get_buildNumber();
    static void set_buildNumber(int32_t value);
    static MonoString* get_buildHash();
    static void set_buildHash(MonoString* value);
    static MonoString* get_gameVersionFull();
    static void set_gameVersionFull(MonoString* value);
    static bool get_isTutorial();
    static bool get_isGym();
    static bool get_isDemo();
    static void RuntimeInit();
    static IEnumerator* InitializeGameCo();
    static void Initialize(EntityWorld* world);
    static void InitializeLobby(Camera* mainCamera, Camera* uiCamera, Room* lobbyRoom, int32_t seed);
    static void InitializeContractRun(MonoString* sceneName, ContractObject* contract, Camera* mainCamera, Camera* uiCamera, Room* warehouseRoom, Room* breakroomRoom, int32_t seed);
    static void InitializeTutorial(MonoString* sceneName, Camera* mainCamera, Camera* uiCamera, Room* warehouseRoom, int32_t seed);
    static void InitializeGym(MonoString* sceneName, ContractObject* contract, Camera* mainCamera, Camera* uiCamera, Room* warehouseRoom, int32_t seed);
    static void UninitializeWorld();
    static void UninitializeLobby();
    static void UninitializeGame();
    static Entity GetLocalPlayer();
    static bool TryGetLocalPlayer(Entity player);
    static RoomType GetCurrentRoomType();
    static Transform* GetCurrentContainer();
    static Transform* GetContainer(RoomType type);
    static void OnTeleported(NetMsgTeleported msg);
    static void ServerTeleportPlayers(RoomType roomType, int32_t seed);
    static void ServerPlayersResetState();
    static bool ServerPlayersGrabbersEmpty();
    static void ServerTeleportBox(Entity box, Vector3 position, Quaternion rotation);
    static void LocalPlayerResetState();
    static void JoinLobby(PlatformGameJoin invite);
    static float GetDifficultyMultiplier();
    static void .cctor();
};

// Namespace: <global>
struct RoomType
{
public:
    // Static fields
    // static RoomType None;
    // static RoomType BreakRoom;
    // static RoomType Warehouse;
    // static RoomType Lobby;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct NetMsgTeleported
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RoomType roomType; // 0x0010
};

// Namespace: <global>
struct GameError
{
public:
    // Static fields
    // static GameError None;
    // static GameError ClientDisconnected;
    // static GameError ClientCantConnect;
    // static GameError ClientVersionMismatch;
    // static GameError HostFailed;
    // static GameError ClientCantConnectLobbyFull;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class LobbyManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* firstSelectedButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<ContractObject> _allContracts; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<LobbyPlayer> _serverAvailablePlayers; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    String[][] _sceneBuildIndices; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float durationBeforeFade; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    int32_t _syncContractIndex; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    int32_t _syncHostTotalBells; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool _serverTransitioning; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    uint64_t _saveVersion; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    LobbyState _state; // 0x00D0

    // Methods
    int32_t get_hostTotalBells();
    LobbyState get_state();
    void OnEntityCreated();
    void OnEntityStart();
    void OnEntityDestroyed();
    int32_t GetContractIndex();
    ContractObject* GetContract();
    bool IsCurrentContractUnlocked();
    void OnUpdateSimulation();
    void CheckForAndUpdateTotalBells();
    void RequestCycleLeft();
    void RequestCycleRight();
    void CmdCycleLeft();
    void CmdCycleRight();
    void ServerSetContract();
    void DevCmdStartWarehouse();
    void CmdStartDevCmd();
    IEnumerator* TransitionToRunCo();
    void RpcRunStarting();
    void RpcFade();
    IEnumerator* ClientFadeForLoadCo();
    void ServerAddPlayer(NetworkConnectionToClient* conn, int32_t playerIndex);
    void ServerDisconnected(NetworkConnectionToClient* conn, int32_t playerIndex);
    void ServerStartContract(int32_t contractIndex);
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
    bool Weaved();
    int32_t get_Network_syncContractIndex();
    void set_Network_syncContractIndex(int32_t value);
    int32_t get_Network_syncHostTotalBells();
    void set_Network_syncHostTotalBells(int32_t value);
    void UserCode_CmdCycleLeft();
    static void InvokeUserCode_CmdCycleLeft(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCycleRight();
    static void InvokeUserCode_CmdCycleRight(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdStartDevCmd();
    static void InvokeUserCode_CmdStartDevCmd(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRunStarting();
    static void InvokeUserCode_RpcRunStarting(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcFade();
    static void InvokeUserCode_RpcFade(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class LobbyPlayer : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t PlayerAssigned;

    uint8_t pad_0000[0x98]; // 0x0000
    Animator* animator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t lobbyPlayerIndex; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    bool _syncHasPlayerAssigned; // 0x00A4
    bool _previouslyAssigned; // 0x00A5
    uint8_t pad_00A6[0x2]; // 0x00A6
    EventReference joinSfx; // 0x00A8

    // Methods
    bool get_hasPlayerAssigned();
    void OnUpdatePresentation();
    void ServerPlayerAssigned();
    void ServerPlayerUnassigned();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncHasPlayerAssigned();
    void set_Network_syncHasPlayerAssigned(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class LobbyPlayerClient : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Info _syncInfo; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    bool _init; // 0x00A0

    // Methods
    Info get_info();
    void OnEntityCreated();
    void OnStartLocalPlayer();
    void OnUpdateSimulation();
    void .ctor();
    bool Weaved();
    Info get_Network_syncInfo();
    void set_Network_syncInfo(Info value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class NavAreaManager : public AggroManagerBase`1
{
public:
    // Static fields
    // static float VELOCITY_SPEED_SQR;
    // static float POSITION_DIST_SQR;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* poofVFX; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float boxFixWaitDuration; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float boxFixDistanceCheck; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    bool _debugFixed; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    Vector3 _debugPos; // 0x0064
    uint8_t pad_0065[0xB]; // 0x0065
    Quaternion _debugRot; // 0x0070

    // Methods
    Vector3 get_debugFixPos();
    void OnUpdateSimulation();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Options
{
public:
    // Static fields
    // static bool IS_CONSOLE;
    // static bool _initialized;
    // static int32_t DRIVING;
    // static int32_t GAME_ACTIONS;
    // static int32_t TIPTAP_ACTIONS;
    // static int32_t DRIVING_MASK;
    // static int32_t GAME_ACTIONS_MASK;
    // static int32_t TIPTAP_ACTIONS_MASK;
    // static int32_t ALL_ACTIONS_MASK;
    // static int32_t GAME_ONLY_ACTIONS_MASK;
    // static OptionsInputController* _inputController;
    // static int32_t RENDER_SCALE_ID;
    // static int32_t RENDER_SCALE_SHADER_ID;
    // static int32_t UseUIWobble;


    // Methods
    static float get_renderScale();
    static void RuntimeInit();
    static void Initialize();
    static void AddGameSettings();
    static void AddVideoSettings();
    static void AddAudioSettings();
    static void AddControlsSettings();
    static void .cctor();
};

// Namespace: <global>
class PlayersManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.List<Mirror.NetworkIdentity> _identities;
    // static System.Collections.Generic.List<PlayersManager.VoteOption> _votes;
    // static System.Collections.Generic.HashSet<Mirror.NetworkIdentity> _set;

    uint8_t pad_0000[0x98]; // 0x0000
    Mirror.SyncList<Mirror.NetworkIdentity> _syncAllPlayers; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Mirror.SyncHashSet<Mirror.NetworkIdentity> _syncPlayersProceeding; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Mirror.SyncDictionary<Mirror.NetworkIdentity,PlayersManager.VoteOption> _syncPlayersVoting; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float proceedDuration; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    Timer _serverProceedTimer; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    bool _serverProceedUseTimer; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    Timer _serverVoteTimer; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    VoteOption _serverCurrentVote; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float _syncNormalizedProceedValue; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float _syncNormalizedVoteValue; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    bool <serverSuppressProceed>k__BackingField; // 0x00CC

    // Methods
    bool get_serverSuppressProceed();
    void set_serverSuppressProceed(bool value);
    bool get_proceededLastTimer();
    int32_t get_playerCount();
    void OnUpdateSimulation();
    int32_t GetNumberPlayersProceeding();
    void GetAllPlayerProceeds(System.Collections.Generic.List<PlayersManager.PlayerProceed> playerProceeds);
    void GetAllPlayerVotes(System.Collections.Generic.List<PlayersManager.PlayerVote> playerVotes);
    bool GetAmIProceeding();
    VoteOption GetMyVote();
    float GetNormalizedProceedValue();
    float GetNormalizedVoteValue();
    IEnumerator* ServerPlayerProceedReadyCo(bool useTimer);
    IEnumerator* ServerPlayerVoteCo();
    VoteOption ServerGetWinningVote();
    void ServerStartProceed(bool useTimer);
    void ServerStartVote();
    bool ServerProcessProceed();
    bool ServerProcessVote();
    void ServerResetProceeding();
    void ServerResetVote();
    void ServerResetAll();
    bool ServerIsReadyToProceed();
    bool ServerIsReadyToVote();
    void RequestProceed();
    void RequestCancel();
    void RequestVote(VoteOption option);
    void CmdRequestProceedShift(NetworkConnectionToClient* conn);
    void CmdRequestCancelProceedShift(NetworkConnectionToClient* conn);
    void CmdRequestVote(VoteOption option, NetworkConnectionToClient* conn);
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_Network_syncNormalizedProceedValue();
    void set_Network_syncNormalizedProceedValue(float value);
    float get_Network_syncNormalizedVoteValue();
    void set_Network_syncNormalizedVoteValue(float value);
    void UserCode_CmdRequestProceedShift__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdRequestProceedShift__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRequestCancelProceedShift__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdRequestCancelProceedShift__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRequestVote__VoteOption__NetworkConnectionToClient(VoteOption option, NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdRequestVote__VoteOption__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ProcessEventsSystem : public EntitySystemBase
{
public:

    // Methods
    void OnUpdateSystem();
    void .ctor();
};

// Namespace: <global>
class ProcessPresentationCoroutinesSystem : public EntitySystemBase
{
public:

    // Methods
    void OnUpdateSystem();
    void .ctor();
};

// Namespace: <global>
class ProcessSimulationCoroutinesSystem : public EntitySystemBase
{
public:

    // Methods
    void OnUpdateSystem();
    void .ctor();
};

// Namespace: <global>
class Room : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Transform* <instantiateContainer>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RoomType containerType; // 0x0028

    // Methods
    Transform* get_instantiateContainer();
    void set_instantiateContainer(Transform* value);
    void Awake();
    void .ctor();
};

// Namespace: <global>
class SaveData
{
public:
    // Static fields
    // static System.Collections.Generic.List<ContractObject> _contractObjects;
    // static int32_t SAVE_VERSION;

    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* _currentCostume; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MonoString* _lastContractPlayed; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,SaveData.ContractData> _contracts; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,SaveData.CostumeData> _costumes; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.String,SaveData.TipTapData> _tipTaps; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    uint64_t _version; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t _colorIndex; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t _saveVersion; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t _contractCount; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    bool _debugUnlock; // 0x004C

    // Methods
    uint64_t GetVersion();
    int32_t GetSaveVersion();
    int32_t GetColorIndex();
    void SetColorIndex(int32_t index);
    int32_t GetContractCount();
    void IncrementContractCount();
    bool TryGetLastPlayedContract(ContractObject* contract);
    void SetLastPlayedContract(ContractObject* contract);
    bool HasBeatenContract(ContractObject* contract);
    int32_t GetTotalBells();
    void ClearContracts();
    void SetContractBellCount(ContractObject* contract, int32_t bellCount);
    void SetContractBellCountIfHigher(ContractObject* contract, int32_t bellCount);
    bool TryGetContractBellCount(ContractObject* contract, int32_t bells);
    void SetContractScoreIfHigher(ContractObject* contract, ContractScore score);
    void SetContractScore(ContractObject* contract, ContractScore score);
    bool TryGetContractTime(ContractObject* contract, int32_t milliseconds);
    bool TryGetContractTime(ContractObject* contract, TimeSpan timeSpan);
    void SetContractTimeIfHigher(ContractObject* contract, int32_t milliseconds);
    void SetContractTime(ContractObject* contract, int32_t milliseconds);
    bool TryGetContractScore(ContractObject* contract, ContractScore score);
    bool IsCostumeUnlocked(CostumeObject* costume);
    void UnlockCostume(CostumeObject* costume);
    void SetCurrentCostume(CostumeObject* costume);
    bool TryGetCurrentCostume(CostumeObject* costume);
    CostumeObject[][] GetUnlockedCostumes();
    void GetUnlockedCostumes(System.Collections.Generic.List<CostumeObject> list);
    void TipTapSeen(TipTapObject* tipTap);
    void TipTapShared(TipTapObject* tipTap);
    void TipTapLiked(TipTapObject* tipTap);
    bool IsTipTapLiked(TipTapObject* tipTap);
    bool IsTipTapSeen(TipTapObject* tipTap);
    bool IsTipTapShared(TipTapObject* tipTap);
    void DebugUnlock();
    bool IsDebugUnlocked();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class SaveManager
{
public:
    // Static fields
    // static SaveData* <data>k__BackingField;
    // static int32_t BUILD_SAVE_INDEX;
    // static int32_t EDITOR_SAVE_INDEX;
    // static bool <isSaveLoading>k__BackingField;
    // static int32_t _saveIndex;


    // Methods
    static SaveData* get_data();
    static void set_data(SaveData* value);
    static bool get_isSaveLoading();
    static void set_isSaveLoading(bool value);
    static int32_t get_saveIndex();
    static bool get_isInitialized();
    static void Initialize();
    static void InitializeNewGame(int32_t saveIndex);
    static Task* InitializeLoadGameAsync(int32_t saveIndex);
    static void InitializeWithBlob(int32_t saveIndex, MonoString* json);
    static void Uninitialize();
    static Task* DeleteGameAsync(int32_t saveIndex);
    static bool DoesGameExist(int32_t saveIndex);
    static void SaveGame();
    static Task* SaveGameAsync();
    static void SaveGameImmediate();
    static MonoString* GetSaveBlob();
    static MonoString* GetFilePath(int32_t saveIndex);
    static void SaveDevCmd(DevCmdArg[][] args);
    static void .cctor();
};

// Namespace: <global>
class ButtonShift : public EntityBehaviourBase
{
public:

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnOrganizationPeriodStart(EvOrganizationPeriodStart ev);
    void OnShiftStart(EvShiftStart ev);
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
    void .ctor();
};

// Namespace: <global>
class IShiftChanged
{
public:

    // Methods
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
};

// Namespace: <global>
class PlayerPosition : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RoomType roomType; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    PositionSubType subType; // 0x0054

    // Methods
    bool Evaluate(RoomType type);
    void .ctor();
};

// Namespace: <global>
class ShiftManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static int32_t PAYOUT_INCREMENT;

    uint8_t pad_0000[0x98]; // 0x0000
    TimerBonus[][] truckBonuses; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Int32[][] scoreLetterGradeMaxRange; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Mirror.SyncList<ShiftManager.OrderCountNet> _syncInboundOrders; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<CostumeObject> _costumesUnlocked; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Aggro.Core.ObjectQuery<IShiftChanged> _shiftChangeQuery; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Aggro.Core.ObjectQuery<Shop> _shopQuery; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Aggro.Core.ObjectQuery<PlayerGrabber> _grabbersQuery; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    PlayerResult[][] _serverPlayerResults; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    ContractScore[][] _shiftScores; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<System.String> _devScoreShiftResults; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float organizationalDuration; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float shiftFinishedPauseBeforeCameraDuration; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float shiftFinishedWaitAfterCameraDuration; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float shiftWonCameraMoveDuration; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    float shiftLostCameraMoveDuration; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float cleanUpWaitDuration; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    int32_t startingMoney; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    int32_t truckDamageBoxDockPercentage; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float scoreMultiplierOnePlayer; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    float scoreMultiplierTwoPlayers; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float scoreMultiplierThreePlayers; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    int32_t achievementHoarderAmount; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    int32_t achievementSomeBellsAmount; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    EventReference breakRoomMusic; // 0x011C
    uint8_t pad_011D[0xF]; // 0x011D
    EventReference reportMusic; // 0x012C
    uint8_t pad_012D[0xF]; // 0x012D
    EventReference lockedInMusic; // 0x013C
    uint8_t pad_013D[0xF]; // 0x013D
    int32_t testBoxPayout; // 0x014C
    uint8_t pad_014D[0x3]; // 0x014D
    int32_t testBoxCount; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    int32_t testWildCardCount; // 0x0154
    uint8_t pad_0155[0x3]; // 0x0155
    int32_t testDamageCount; // 0x0158
    uint8_t pad_0159[0x3]; // 0x0159
    int32_t testPlayerCount; // 0x015C
    uint8_t pad_015D[0x3]; // 0x015D
    float testTimerNormalized; // 0x0160
    uint8_t pad_0161[0x3]; // 0x0161
    int32_t _syncTrucksCompleted; // 0x0164
    uint8_t pad_0165[0x3]; // 0x0165
    int32_t _syncMoney; // 0x0168
    uint8_t pad_0169[0x3]; // 0x0169
    float _syncSecondsRemaining; // 0x016C
    uint8_t pad_016D[0x3]; // 0x016D
    int8_t _syncPlayListIndex; // 0x0170
    bool _syncLockedIn; // 0x0171
    ShiftPhase _shiftPhase; // 0x0172
    uint8_t pad_0173[0x1]; // 0x0173
    int32_t _trucksThisShift; // 0x0174
    uint8_t pad_0175[0x3]; // 0x0175
    int32_t _currentShift; // 0x0178
    uint8_t pad_0179[0x3]; // 0x0179
    bool _serverTimerDebugPaused; // 0x017C
    bool _serverFailed; // 0x017D
    uint8_t pad_017E[0x2]; // 0x017E
    float _serverStrikeOutDuration; // 0x0180
    uint8_t pad_0181[0x3]; // 0x0181
    int32_t _serverPayPerBox; // 0x0184
    uint8_t pad_0185[0x3]; // 0x0185
    int32_t _serverPlayerCount; // 0x0188
    uint8_t pad_0189[0x3]; // 0x0189
    int32_t _serverShiftFrames; // 0x018C
    uint8_t pad_018D[0x3]; // 0x018D
    Vector3 _serverLastPosition; // 0x0190
    uint8_t pad_0191[0xB]; // 0x0191
    bool _transitioning; // 0x019C
    bool _proceeding; // 0x019D
    uint8_t pad_019E[0x2]; // 0x019E
    int32_t _seed; // 0x01A0
    uint8_t pad_01A1[0x3]; // 0x01A1
    float _serverShiftScore; // 0x01A4
    uint8_t pad_01A5[0x3]; // 0x01A5
    float _serverShiftMaxScore; // 0x01A8
    uint8_t pad_01A9[0x3]; // 0x01A9
    bool _sentHoarderAchievement; // 0x01AC
    uint8_t pad_01AD[0x3]; // 0x01AD
    int32_t _startingBellCount; // 0x01B0
    uint8_t pad_01B1[0x3]; // 0x01B1
    System.Nullable<ContractScore> _debugScore; // 0x01B4
    uint8_t pad_01B5[0x3]; // 0x01B5
    Timer _serverTimer; // 0x01B8
    uint8_t pad_01B9[0x3]; // 0x01B9
    Timer _serverPauseTimer; // 0x01BC
    uint8_t pad_01BD[0x3]; // 0x01BD
    Timer _serverLockedInTimer; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    EventInstance _breakRoomMusicInstance; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    EventInstance _shiftInstance; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    EventInstance _reportMusicInstance; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    EventInstance _lockedInMusicInstance; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    bool <serverHasShiftPaused>k__BackingField; // 0x01E8

    // Methods
    bool get_serverTimersPaused();
    bool get_playersLockedIn();
    float get_secondsRemaining();
    int32_t get_secondsRemainingInt();
    bool get_isTransitioning();
    bool get_serverHasShiftPaused();
    void set_serverHasShiftPaused(bool value);
    ContractScore[][] get_shiftScores();
    void OnEntityCreated();
    void OnStartServer();
    void OnEntityDestroyed();
    void OnInboundOrdersChanged(Mirror.SyncList.Operation<ShiftManager.OrderCountNet> op, int32_t index, OrderCountNet value);
    void OnEntityStart();
    ShiftPhase GetShiftPhase();
    int32_t GetTrucksCompleted();
    void ServerTruckCompleted(Vector3 position, float timerNormalized, int32_t boxCount, int32_t damageCount, int32_t wildCardCount, int32_t explosiveCount, int32_t animalCount);
    void TestShip();
    void CalculateMonies(int32_t boxCount, int32_t wildCardCount, int32_t damageCount, float timerNormalized, int32_t payPerBox, int32_t moneyMade, int32_t basePay, int32_t timerPay, int32_t damageDock);
    float CalculateScore(int32_t boxCount, int32_t damageCount, float timerNormalized, float playerMultiplier, float rawScore);
    void ServerFailRun(Vector3 position);
    int32_t GetOutboundsTotalThisShift();
    int32_t GetCurrentShift();
    int32_t GetMoney();
    void GetInboundOrderCounts(System.Collections.Generic.List<OrderCount> counts);
    void ServerAddMoney(int32_t amount);
    void RpcMoneyAdded(int32_t amount);
    void RpcBoxesShipped(int16_t moneyMade, int16_t basePay, int16_t timerPay, int16_t damagePay, uint8_t boxCount, uint8_t wildCardCount, uint8_t explosiveCount, uint8_t animalCount, uint8_t damageCount, bool wasEarlySend);
    void ServerEndOrganizationalPeriod();
    float ServerGetStrikeOutDuration();
    void OnUpdateSimulation();
    IEnumerator* TransitionBreakRoomToShiftCo(int32_t seed);
    IEnumerator* TransitionShiftToShiftWon(int32_t seed);
    void RpcProceed();
    IEnumerator* TransitionShiftToGameWon(int32_t seed);
    ContractScore GetScore(float scorePercentage);
    void PrintShiftScore(ContractScore shiftScore);
    IEnumerator* TransitionShiftToQuotaLost(int32_t seed);
    IEnumerator* ServerCollectPlayerResults();
    void OnUpdatePresentation();
    void ServerSendShiftMessageToAll();
    void RpcShiftChangedAll(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void RpcTransitionBreakRoomToFade();
    IEnumerator* ClientTransitionBreakRoomToFadeCo();
    void RpcTransitionFadeToShift();
    IEnumerator* ClientTransitionFadeToShiftCo();
    void RpcTransitionShiftToShiftWon(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    void RpcTransitionShiftToShiftWonPhase1(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    void RpcTransitionShiftToShiftWonPhase2(uint8_t shiftCount);
    IEnumerator* ClientTransitionShiftToShiftWonCo(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    IEnumerator* ClientTransitionShiftToShiftWonPhase1Co(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    IEnumerator* ClientTransitionShiftToShiftWonPhase2Co(uint8_t shiftCount);
    IEnumerator* ClientShiftWonPhase1Co(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    IEnumerator* ClientShiftWonPhase2Co(uint8_t bellCount);
    void RpcTransitionShiftToGameWon(uint8_t shiftCount, ContractScore score, ContractScore shiftScore, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    IEnumerator* ClientTransitionShiftToGameWonCo(uint8_t bellCount, ContractScore score, ContractScore shiftScore, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    void RpcTransitionShiftToGameLost(uint8_t shiftCount, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    IEnumerator* ClientTransitionShiftToGameLostCo(uint8_t shiftCount, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    void RpcTransitionFadeToBreakRoom();
    IEnumerator* ClientTransitionFadeToBreakRoom();
    void RpcTransitionToLobby();
    void ShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void ServerPauseTimers(float duration, bool setShiftPaused);
    void ServerLockIn(float duration);
    void ServerPrepareShift();
    void OnInputControlGained();
    void OnInputControlLost();
    ContractObject[][] GetUnlockedContracts();
    void UnlockCostumes(ContractObject* contract, int32_t bellCount);
    float GetScoreMultiplier(int32_t playerCount);
    void RpcRequestPlayerResults(NetworkConnectionToClient* target, uint8_t playerIndex);
    void CmdPlayerResults(uint8_t playerIndex, PlayerResult result);
    void CheckSaveFileAchievements();
    static void ShiftDevCmd(DevCmdArg[][] args);
    void ServerForceShiftForward();
    void CmdShiftDevCmdNext();
    void CmdShiftDevCmdWinShift(ContractScore score);
    void CmdShiftDevCmdLoseShift();
    void CmdShiftOutboundDevCmd();
    void CmdShiftInboundDevCmd();
    void CmdShiftDevCmdMoneyAdd(int32_t amount);
    void CmdShiftDevCmdPauseToggle();
    void .ctor();
    bool Weaved();
    int32_t get_Network_syncTrucksCompleted();
    void set_Network_syncTrucksCompleted(int32_t value);
    int32_t get_Network_syncMoney();
    void set_Network_syncMoney(int32_t value);
    float get_Network_syncSecondsRemaining();
    void set_Network_syncSecondsRemaining(float value);
    int8_t get_Network_syncPlayListIndex();
    void set_Network_syncPlayListIndex(int8_t value);
    bool get_Network_syncLockedIn();
    void set_Network_syncLockedIn(bool value);
    void UserCode_RpcMoneyAdded__Int32(int32_t amount);
    static void InvokeUserCode_RpcMoneyAdded__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcBoxesShipped__Int16__Int16__Int16__Int16__Byte__Byte__Byte__Byte__Byte__Boolean(int16_t moneyMade, int16_t basePay, int16_t timerPay, int16_t damagePay, uint8_t boxCount, uint8_t wildCardCount, uint8_t explosiveCount, uint8_t animalCount, uint8_t damageCount, bool wasEarlySend);
    static void InvokeUserCode_RpcBoxesShipped__Int16__Int16__Int16__Int16__Byte__Byte__Byte__Byte__Byte__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcProceed();
    static void InvokeUserCode_RpcProceed(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcShiftChangedAll__ShiftPhase__Int32__Int32(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    static void InvokeUserCode_RpcShiftChangedAll__ShiftPhase__Int32__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionBreakRoomToFade();
    static void InvokeUserCode_RpcTransitionBreakRoomToFade(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionFadeToShift();
    static void InvokeUserCode_RpcTransitionFadeToShift(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionShiftToShiftWon__Byte__ContractScore__Vector3(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    static void InvokeUserCode_RpcTransitionShiftToShiftWon__Byte__ContractScore__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionShiftToShiftWonPhase1__Byte__ContractScore__Vector3(uint8_t shiftCount, ContractScore score, Vector3 lastOutboundPos);
    static void InvokeUserCode_RpcTransitionShiftToShiftWonPhase1__Byte__ContractScore__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionShiftToShiftWonPhase2__Byte(uint8_t shiftCount);
    static void InvokeUserCode_RpcTransitionShiftToShiftWonPhase2__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionShiftToGameWon__Byte__ContractScore__ContractScore__Int32__Vector3__PlayerResult[](uint8_t shiftCount, ContractScore score, ContractScore shiftScore, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    static void InvokeUserCode_RpcTransitionShiftToGameWon__Byte__ContractScore__ContractScore__Int32__Vector3__PlayerResult[](NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionShiftToGameLost__Byte__Int32__Vector3__PlayerResult[](uint8_t shiftCount, int32_t shiftMilliseconds, Vector3 lastOutboundPos, PlayerResult[][] playerResults);
    static void InvokeUserCode_RpcTransitionShiftToGameLost__Byte__Int32__Vector3__PlayerResult[](NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionFadeToBreakRoom();
    static void InvokeUserCode_RpcTransitionFadeToBreakRoom(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTransitionToLobby();
    static void InvokeUserCode_RpcTransitionToLobby(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRequestPlayerResults__NetworkConnectionToClient__Byte(NetworkConnectionToClient* target, uint8_t playerIndex);
    static void InvokeUserCode_RpcRequestPlayerResults__NetworkConnectionToClient__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPlayerResults__Byte__PlayerResult(uint8_t playerIndex, PlayerResult result);
    static void InvokeUserCode_CmdPlayerResults__Byte__PlayerResult(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftDevCmdNext();
    static void InvokeUserCode_CmdShiftDevCmdNext(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftDevCmdWinShift__ContractScore(ContractScore score);
    static void InvokeUserCode_CmdShiftDevCmdWinShift__ContractScore(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftDevCmdLoseShift();
    static void InvokeUserCode_CmdShiftDevCmdLoseShift(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftOutboundDevCmd();
    static void InvokeUserCode_CmdShiftOutboundDevCmd(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftInboundDevCmd();
    static void InvokeUserCode_CmdShiftInboundDevCmd(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftDevCmdMoneyAdd__Int32(int32_t amount);
    static void InvokeUserCode_CmdShiftDevCmdMoneyAdd__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdShiftDevCmdPauseToggle();
    static void InvokeUserCode_CmdShiftDevCmdPauseToggle(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct EvOrganizationPeriodStart
{
public:
};

// Namespace: <global>
struct EvShiftStart
{
public:
};

// Namespace: <global>
struct EvShiftWon
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t shift; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ContractScore score; // 0x0014

    // Methods
    void .ctor(int32_t shift, ContractScore score);
};

// Namespace: <global>
struct EvShiftLost
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t shift; // 0x0010

    // Methods
    void .ctor(int32_t shift);
};

// Namespace: <global>
struct ShiftPhase
{
public:
    // Static fields
    // static ShiftPhase None;
    // static ShiftPhase BreakRoom;
    // static ShiftPhase Organizational;
    // static ShiftPhase Shift;
    // static ShiftPhase Failed;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
struct PlayerResult
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Color color; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    int16_t crashOuts; // 0x0020
    uint8_t pad_0021[0x1]; // 0x0021
    int16_t nitroCount; // 0x0022
    uint8_t pad_0023[0x1]; // 0x0023
    int32_t driftDistanceCount; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    uint8_t upgradeCount; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* name; // 0x0030
};

// Namespace: <global>
struct ShiftResult
{
public:
    // Static fields
    // static ShiftResult QuotaWon;
    // static ShiftResult QuotaLost;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct OrderCount
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ShiftOrderObject* order; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t count; // 0x0018
};

// Namespace: <global>
struct EvInboundOrdersChanged
{
public:
};

// Namespace: <global>
struct ContractScore
{
public:
    // Static fields
    // static ContractScore D;
    // static ContractScore C;
    // static ContractScore B;
    // static ContractScore A;
    // static ContractScore S;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class ShiftProceedArea : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t UV1_WIPE;

    uint8_t pad_0000[0x50]; // 0x0000
    MeshRenderer* zoneMesh; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image[][] playerImages; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Sprite* playerMissing; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Sprite* playerHere; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Aggro.Core.ObjectQuery<VehicleController> _vehicleQuery; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    MaterialPropertyBlock* _zoneMpb; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    StudioEventEmitter* proceedSfxEmitter; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Bounds areaBounds; // 0x0088
    uint8_t pad_0089[0x17]; // 0x0089
    bool _requested; // 0x00A0

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Stinger : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Animator* anim; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float stingerDuration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float extraConsoleTime; // 0x002C

    // Methods
    void Start();
    IEnumerator* StingerCo();
    void .ctor();
};

// Namespace: <global>
struct SystemOrder
{
public:
    // Static fields
    // static SystemOrder Physics;
    // static SystemOrder Death;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class InputSystemGroup : public EntitySystemGroupBase
{
public:

    // Methods
    bool ShouldUpdateGroup();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class TimeSystem : public EntitySystemBase
{
public:

    // Methods
    void OnStartRunning();
    void OnUpdateSystem();
    void .ctor();
};

// Namespace: <global>
class GraphDebug
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<System.String,GraphDebug.Graph> graphIdMap;
    // static float LineThickness;
    // static GameObject* graphHandler;
    // static Material* defaultMaterial;


    // Methods
    static void GraphValue(MonoString* id, Vector2 point, Color color);
    static void RedrawGraph();
    static Graph* MaybeAddNewGraph(MonoString* id, Color color);
    static void .cctor();
};

// Namespace: <global>
class AggroInputManager
{
public:
    // Static fields
    // static AggroInput* input;
    // static float ANALOG_THRESHOLD_SQR;
    // static System.Collections.Generic.List<IInputController> _controllers;
    // static bool _managingControllers;
    // static UIRequest _request;
    // static Gamepad* _prevController;
    // static System.Collections.Generic.List<AggroInputManager.Vibration> _vibrations;
    // static OverlayInputController* _overlayInputController;
    // static int32_t SETTINGS_CONTROLLERSHAKE;
    // static bool _hideMouseCursor;
    // static InputMode <mode>k__BackingField;
    // static bool <enabled>k__BackingField;
    // static int32_t <version>k__BackingField;
    // static Message _queuedDisconnectMessage;


    // Methods
    static InputMode get_mode();
    static void set_mode(InputMode value);
    static bool get_enabled();
    static void set_enabled(bool value);
    static bool get_isPlayerInControl();
    static int32_t get_version();
    static void set_version(int32_t value);
    static InputBinding get_kbmInputBinding();
    static InputBinding get_gamepadInputBinding();
    static void Initialize();
    static void Enable();
    static void Disable();
    static void OnDeviceChange(InputDevice* device, InputDeviceChange change);
    static void EnableUIModule();
    static void DisableUIModule();
    static void HideMouseCursor();
    static void ResetMouseCursor();
    static void PushController(IInputController* controller);
    static bool RemoveController(IInputController* controller);
    static bool HasControl(IInputController* controller);
    static bool IsControllerInStack(IInputController* controller);
    static IInputController* GetActiveController();
    static void ChangeMode(InputMode requestedMode);
    static void Update();
    static void ConsiderInputModeChange();
    static void Vibrate(float lowFrequency, float highFrequency, float duration);
    static void VibrateForFrame(float lowFrequency, float highFrequency);
    static void Vibrate(VibrateStrength strength);
    static void VibrateForFrame(VibrateStrength strength);
    static void PauseVibrations();
    static void ResumeVibrations();
    static void ResetVibrations();
    static InputBinding GetKbmCompositeBinding(MonoString* bindingName);
    static void .cctor();
};

// Namespace: <global>
class IInputController
{
public:

    // Methods
    void OnInputControlGained();
    void OnInputControlLost();
};

// Namespace: <global>
class InputGlobalData : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    VibrateStrengthValue[][] vibrateStrengthValues; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VibrateStrengthFrameValue[][] vibrateStrengthFrameValues; // 0x0020

    // Methods
    void GetVibrateValues(VibrateStrength strength, float lowFrequency, float highFrequency, float duration);
    void GetVibrateFrameValues(VibrateStrength strength, float lowFrequency, float highFrequency);
    void .ctor();
};

// Namespace: <global>
struct VibrateStrength
{
public:
    // Static fields
    // static VibrateStrength None;
    // static VibrateStrength Low;
    // static VibrateStrength Medium;
    // static VibrateStrength High;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class InputModeSwap : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject[][] gamePadEnable; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject[][] kbmEnable; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputMode _prevMode; // 0x0060

    // Methods
    void OnEnable();
    void OnUpdatePresentationLate();
    void SetGameObjects();
    void .ctor();
};

// Namespace: <global>
class CostumeUnlockUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Image* icon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* bellsRequiredText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* lockedContainer; // 0x0030

    // Methods
    void .ctor();
};

// Namespace: <global>
class CycleOptionUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Animator* animator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Animator* selectableAnimator; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    EaseUI* cycleLeftEaseUI; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    EaseUI* cycleRightEaseUI; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject[][] keyboardObjects; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject[][] GamepadObjects; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    bool selected; // 0x0080
    bool hover; // 0x0081
    bool wasLastSelected; // 0x0082

    // Methods
    void OnUpdatePresentation();
    void OnSelect(BaseEventData* eventData);
    void OnDeselect(BaseEventData* eventData);
    void OnPointerEnter(PointerEventData* eventData);
    void OnPointerExit(PointerEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class LobbyButtonsUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Selectable* inviteFriendsButton; // 0x0050

    // Methods
    void OnUpdatePresentation();
    void OpenInviteFriends();
    void .ctor();
};

// Namespace: <global>
class LobbyCamera : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* originalTransform; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform[][] playerTargetTransforms; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Camera* _camera; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Volume* zoomedVolume; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    bool zoomIn; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t _playerIndex; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float camSpeed; // 0x0078

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentationEarly();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class LobbyContractVisualManager : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Locked;
    // static int32_t UV1Offset;

    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<ContractObject> _contracts; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* orderVisualStack; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Transform* contractVisualGroup; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    MeshRenderer[][] conveyorRenderers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t selectedContractIndex; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float _currentOffset; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float speed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float offset; // 0x007C

    // Methods
    void SetUp();
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class LobbyOrderVisualStack : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Lean;

    uint8_t pad_0000[0x50]; // 0x0000
    Transform[][] slots; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform[][] tape; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Animator* _animator; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Vector3 _lastPos; // 0x0068
    uint8_t pad_0069[0xB]; // 0x0069
    float maxSpeed; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float lerpSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float _speed; // 0x007C

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class LobbyReadyUpUI : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Punch;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* readyUpCheck; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Animator* readyUpAnimator; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image* fill; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    StudioEventEmitter* showSFX; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    StudioEventEmitter* hideSFX; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    StudioEventEmitter* failToReadySFX; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    StudioEventEmitter* checkReadyUpSFX; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    StudioEventEmitter* uncheckReadyUpSFX; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    StudioEventEmitter* proceedFillSFX; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* lockParent; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ContractSelectionUI* contractSelectionUI; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    bool _selected; // 0x00A8
    bool _hover; // 0x00A9
    uint8_t pad_00AA[0x2]; // 0x00AA
    float hideSpeed; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    bool _requested; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float highPos; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float lowPos; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    bool wasUp; // 0x00BC
    bool previouslyProceeding; // 0x00BD

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void ToggleProceed();
    void OnUpdatePresentationLate();
    void OnSelect(BaseEventData* eventData);
    void OnDeselect(BaseEventData* eventData);
    void OnPointerEnter(PointerEventData* eventData);
    void OnPointerExit(PointerEventData* eventData);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class LobbySelectedZoomIn : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    bool wasLastSelected; // 0x0050

    // Methods
    void OnUpdatePresentation();
    void OnPointerEnter(PointerEventData* eventData);
    void OnPointerExit(PointerEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class TotalBellCountUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TextMeshProUGUI* _text; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<ContractObject> _contracts; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t _total; // 0x0060

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class AggroDebug
{
public:

    // Methods
    static void LogQuota(MonoString* msg, MonoObject* context);
    static void LogQuotaWarning(MonoString* msg, MonoObject* context);
};

// Namespace: <global>
class CCTags
{
public:
    // Static fields
    // static Tag TAG_SOGGY;
    // static Tag TAG_JUNK;
    // static Tag TAG_BOUNCY;
    // static Tag TAG_HEAVY;
    // static Tag TAG_VOLATILE;
    // static Tag TAG_FRAGILE;
    // static Tag TAG_SLOWSPLAYER;
    // static Tag TAG_EXPLOSIVE;
    // static Tag TAG_ANIMAL;
    // static Tag TAG_WATER;


    // Methods
    static void .cctor();
};

// Namespace: <global>
class DillyAnimation : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Yay;

    uint8_t pad_0000[0x50]; // 0x0000
    Animator* dillyAnimator; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnTransaction(EvMoneyTransaction ev);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class EntityUtil
{
public:

    // Methods
    static Entity Instantiate(GameObject* prefab);
    static Entity Instantiate(GameObject* prefab, Vector3 position);
    static Entity Instantiate(GameObject* prefab, Vector3 position, Quaternion rotation);
    static Entity Instantiate(GameObject* prefab, Transform* parent);
    static Entity Instantiate(GameObject* prefab, Transform* parent, Vector3 position);
    static Entity Instantiate(GameObject* prefab, Transform* parent, Vector3 position, Quaternion rotation);
    static void Destroy(Entity entity);
    static void SetContextForScene(Scene scene, RoomType roomType);
    static bool IsMarkedForDeath(Entity entity);
};

// Namespace: <global>
struct EntityContextComp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RoomType roomType; // 0x0010
};

// Namespace: <global>
struct MarkedForDeathComp
{
public:
};

// Namespace: <global>
class Layers
{
public:
    // Static fields
    // static int32_t MISC;
    // static int32_t BOX;
    // static int32_t PLAYER_ENVIRONMENT;
    // static int32_t GRABBABLE_HOLDER;
    // static int32_t ENVIRONMENT;
    // static int32_t STATION_BLOCKER;
    // static int32_t AOE;
    // static int32_t GROUND;
    // static int32_t PUDDLE;
    // static int32_t STATION;
    // static int32_t CONVEYOR_BELT;
    // static int32_t DEFAULT;
    // static int32_t NON_PLAYER;
    // static int32_t SHOP_ITEM;
    // static int32_t MOVING_SIDEWALK;
    // static int32_t MISC_MASK;
    // static int32_t DEFAULT_MASK;
    // static int32_t BOX_MASK;
    // static int32_t SHOP_ITEM_MASK;
    // static int32_t PLAYER_ENVIRONMENT_MASK;
    // static int32_t GRABBABLE_HOLDER_MASK;
    // static int32_t ENVIRONMENT_MASK;
    // static int32_t STATION_BLOCKER_MASK;
    // static int32_t AOE_MASK;
    // static int32_t GROUND_MASK;
    // static int32_t PUDDLE_MASK;
    // static int32_t STATION_MASK;
    // static int32_t CONVEYOR_BELT_MASK;
    // static int32_t NON_PLAYER_MASK;
    // static int32_t MOVING_SIDEWALK_MASK;
    // static int32_t FLAMMABLE_MASK;

};

// Namespace: <global>
class PlayerMessageManager : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.LinkedList<PlayerMessageManager.Message> messageQueue;
    // static PlayerMessageManager* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* container; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* clickCatch; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    EaseUI* easeUI; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* errorTitle; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    LocalizedText* locText; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    bool proceed; // 0x0048
    bool busy; // 0x0049

    // Methods
    void Awake();
    IEnumerator* NoticeCo(Message msg);
    void OnInputControlGained();
    void OnContinue();
    static void DequeueMessage(Message message);
    static void PauseMessages();
    void OnInputControlLost();
    static void ProcessQueuedMessages();
    static Message QueueMessage(MonoString* locID, bool highPriority, bool isError, bool allowDuplicates);
    static Message QueueErrorMessage(GameError error);
    static Message QueueErrorMessage(JoinListError error);
    static void ClearMessageQueue();
    void TestQueueMessage();
    void TestQueueMessageHighPriority();
    void TestErrorMessage();
    void TestClearMessageQueue();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class SelectionBase : public MonoBehaviour
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class TextTagData : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> _tagsToColors; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    StringBuilder* _builder; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Color color_dilly; // 0x0028
    uint8_t pad_0029[0xF]; // 0x0029
    Color color_drift; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    Color color_stress; // 0x0048
    uint8_t pad_0049[0xF]; // 0x0049
    Color color_grab; // 0x0058
    uint8_t pad_0059[0xF]; // 0x0059
    Color color_inputOutput; // 0x0068
    uint8_t pad_0069[0xF]; // 0x0069
    Color color_fired; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    Color color_fire; // 0x0088
    uint8_t pad_0089[0xF]; // 0x0089
    Color color_mess; // 0x0098

    // Methods
    System.Collections.Generic.Dictionary<System.String,System.String> get_tagsToColors();
    void InitColorDictionary();
    MonoString* ParseText(MonoString* text);
    static MonoString* GetColorTag(Color color);
    void .ctor();
};

// Namespace: <global>
struct Timer
{
public:
    // Static fields
    // static int32_t FRAME_INCREMENT;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t raw; // 0x0010

    // Methods
    void .ctor(int32_t frames);
    void .ctor(float duration);
    void SetTimer(int32_t frames);
    void SetTimerIfGreater(int32_t frames);
    void SetTimerIfLess(int32_t frames);
    void SetTimerIfLess(float duration);
    void AddToTimer(int32_t frames);
    void AddToTimer(float duration);
    void SetTimer(float duration);
    void SetTimerIfGreater(float duration);
    void DecrementTimer(int32_t speedPercentage);
    void IncrementTimer(int32_t speedPercentage);
    bool IsFinished();
    float GetSecondsRemaining(int32_t speedPercentage);
    int32_t GetFramesRemaining(int32_t speedPercentage);
    float GetTotalSeconds();
    int32_t GetTotalFrames();
    void Clear();
    static Timer Max(Timer timer1, Timer timer2);
    static Timer Min(Timer timer1, Timer timer2);
    int32_t CompareTo(Timer other);
};

// Namespace: <global>
class TimeUtil
{
public:
    // Static fields
    // static int32_t FRAMES_PER_SECOND;
    // static float FIXED_DELTA_TIME;
    // static double FIXED_DELTA_TIME_DBL;
    // static float FIXED_DELTA_TIME_SQR;
    // static int32_t FRAMES_PER_SECOND_ANIM;
    // static float FIXED_DELTA_TIME_ANIM;
    // static int32_t FRAMES_PER_ANIM_FRAME;
    // static int32_t frame;


    // Methods
    static float get_elapsedTimeInFrame();
    static double get_elapsedTimeInFrameAsDouble();
    static int32_t FramesForTime(float duration);
    static int32_t FramesForTime(double duration);
    static int32_t FramesForTimeAnim(float duration);
    static int32_t FramesForTimeAnim(double duration);
    static float GetFrameFixedTimeAnim(float duration);
    static double GetFrameFixedTimeAnim(double duration);
};

// Namespace: <global>
class UnityExtensions
{
public:

    // Methods
    static void SetParentAndReset(Transform* t, Transform* parent);
    static Vector4 XYZW(Vector3 pos);
    static MonoString* ToStringFull(Vector3 v);
};

// Namespace: <global>
class Cactus : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _players;
    // static Collider[][] _colliders;
    // static int32_t Attack;
    // static int32_t Pull;
    // static int32_t Grow;
    // static int32_t SELECTED;
    // static int32_t Selected;
    // static int32_t Nervous;

    uint8_t pad_0000[0x98]; // 0x0000
    Animator* animator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.Queue<Cactus.Debounce> _serverDebounceQueue; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.HashSet<Aggro.Core.Entity> _serverDebounceSet; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float spawningDuration; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float destroyDuration; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float pluckingDuration; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float playerForce; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float playerAttackRadius; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float maxPlayerDistance; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float boxCheckRadius; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float boxCheckHeight; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float boxForce; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float boxForceUpwardsModifierDegrees; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    EventReference spawnSFXEvent; // 0x00D8
    uint8_t pad_00D9[0xF]; // 0x00D9
    EventReference attackSFXEvent; // 0x00E8
    uint8_t pad_00E9[0xF]; // 0x00E9
    EventReference destroySFXEvent; // 0x00F8
    uint8_t pad_00F9[0xF]; // 0x00F9
    float debounceDuration; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    float _syncSpawningTimeNormalized; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float _syncPlayerDistanceNormalized; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    State _syncState; // 0x0114
    bool _syncIsPlucking; // 0x0115
    uint8_t pad_0116[0x2]; // 0x0116
    Timer _serverTimer; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    bool _serverAttacked; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    int32_t _localPlayerDebounceFrame; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    bool _destroyRequested; // 0x0124
    bool _serverIsPlucking; // 0x0125

    // Methods
    State get_state();
    float get_spawningTimeNormalized();
    float get_playerDistanceNormalized();
    bool get_isPlucking();
    void OnEntityCreated();
    void OnUpdatePresentationEarly();
    void OnUpdatePresentationLate();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void OnUpdatePresentation();
    void MarkIsCandidate();
    void RequestAttack();
    void RequestDestroy();
    void ServerIsPlucking();
    void CmdDestroy(NetworkConnectionToClient* conn);
    void ServerDestroy(NetworkConnectionToClient* conn);
    void CmdCactusAttack();
    void RpcCactusSpawned();
    void RpcCactusAttack();
    void RpcCactusDestroying();
    void RpcDestroyDenied(NetworkConnectionToClient* conn);
    void OnDrawGizmos();
    void ServerIsBeingDestroyed();
    void ServerDestroyedImmediate();
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_Network_syncSpawningTimeNormalized();
    void set_Network_syncSpawningTimeNormalized(float value);
    float get_Network_syncPlayerDistanceNormalized();
    void set_Network_syncPlayerDistanceNormalized(float value);
    State get_Network_syncState();
    void set_Network_syncState(State value);
    bool get_Network_syncIsPlucking();
    void set_Network_syncIsPlucking(bool value);
    void UserCode_CmdDestroy__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdDestroy__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdCactusAttack();
    static void InvokeUserCode_CmdCactusAttack(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcCactusSpawned();
    static void InvokeUserCode_RpcCactusSpawned(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcCactusAttack();
    static void InvokeUserCode_RpcCactusAttack(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcCactusDestroying();
    static void InvokeUserCode_RpcCactusDestroying(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcDestroyDenied__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_RpcDestroyDenied__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class FaultyWiringLight : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Light* _light; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class LavaVisual : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ModifierLavaVisualManager* modifierLavaVisualManager; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    StudioEventEmitter* lavaActiveLoopSFX; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    StudioEventEmitter* lavaBuildLoopSFX; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ParticleSystem* lavaActiveParticle; // 0x0068

    // Methods
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class ModifierArtManager : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ModifierArtStyleSet[][] modifierArtStyleSets; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MeshRenderer* _meshRenderer; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Material> originalMaterials; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t _seed; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    ModifierArtStyle _currentStyle; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    int32_t sideMatIndex; // 0x0070

    // Methods
    void OnEntityCreated();
    void ResetArtStyle();
    void SetArtStyle(ModifierArtStyle style);
    ModifierArtStyleSet GetSetFromStyle(ModifierArtStyle style);
    void OnModifierAdded(ModifierBase* modifier);
    void .ctor();
};

// Namespace: <global>
class ModifierBase : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Sprite* modifierIcon; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MonoString* modifierName; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* modifierDescription; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    MonoString* contractCompleteAchievement; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    ModifierFlags flags; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    ModifierArtStyle modifierArtStyle; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float patienceMultiplier; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float payoutMultiplier; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t hazardPay; // 0x00C8

    // Methods
    bool Evaluate();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
struct ModifierFlags
{
public:
    // Static fields
    // static ModifierFlags None;
    // static ModifierFlags Icy;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ModifierArtStyle
{
public:
    // Static fields
    // static ModifierArtStyle None;
    // static ModifierArtStyle Meadow;
    // static ModifierArtStyle Moon;
    // static ModifierArtStyle Desert;
    // static ModifierArtStyle Snow;
    // static ModifierArtStyle FaultyWiring;
    // static ModifierArtStyle GarbageDay;
    // static ModifierArtStyle HauntedHouse;
    // static ModifierArtStyle Volcano;
    // static ModifierArtStyle Mines;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class ModifierBoxes : public ModifierBase
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    ShiftOrderObject* order; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Aggro.Core.Deck<System.Boolean> _serverDeck; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    int32_t cardCountChange; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t cardCountNoChange; // 0x00E4

    // Methods
    void OnEntityCreated();
    bool Evaluate();
    bool TryReplaceOrder(ShiftOrderObject* replace);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ModifierFaultyWiring : public ModifierBase
{
public:
    // Static fields
    // static int32_t LightsOff;

    uint8_t pad_0000[0xD0]; // 0x0000
    StudioEventEmitter* lightsTurnOnSfx; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    StudioEventEmitter* lightsTurnOffSfx; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    float transitionTime; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float lightsOffValue; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    Vector2 lightsOnRange; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Vector2 lightsOffRange; // 0x00F0

    // Methods
    IEnumerator* LightsOffCo();
    IEnumerator* LightsOnCo();
    IEnumerator* LightsResetCo();
    void OnUpdatePresentation();
    void OnEntityCreated();
    void RpcLightsTurnedOn();
    void RpcLightsTurnedOff();
    void OnEntityDestroyed();
    void ServerResetLights();
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_NetworklightsOffValue();
    void set_NetworklightsOffValue(float value);
    void UserCode_RpcLightsTurnedOn();
    static void InvokeUserCode_RpcLightsTurnedOn(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcLightsTurnedOff();
    static void InvokeUserCode_RpcLightsTurnedOff(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ModifierHaunted : public ModifierBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<BoxHaunted> _haunteds;
    // static float SPEED_THRESHOLD_SQR;

    uint8_t pad_0000[0xD0]; // 0x0000
    float delayAfterShiftStart; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    Vector2 hauntTimeRange; // 0x00D4
    uint8_t pad_00D5[0x7]; // 0x00D5
    Vector2Int hauntCountRange; // 0x00DC
    uint8_t pad_00DD[0x7]; // 0x00DD
    Timer _serverTimer; // 0x00E4

    // Methods
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class ModifierLava : public ModifierBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0xD0]; // 0x0000
    Vector3[][] _serverPositions; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Mirror.SyncList<UnityEngine.Vector2> _syncPositions; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    ModifierLavaVisualManager* modifierLavaVisualManager; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float lavaRadius; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float boxMinHeightThreshold; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    int32_t boxHeatUpSpeedPercentage; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float stressValueRate; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    float warningDuration; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float lavaDuration; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float cooldownDuration; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float delayAfterShiftStart; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    Vector2 spawnTimeRange; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Vector2 spawnDensityRange; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    float exclusionCheckRadius; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float shrinkGridSpaceDistance; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    float positionNoise; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    State _syncState; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    Timer _serverTimer; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    int32_t _serverNextPosIndex; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    float warningHapticDuration; // 0x0130
    uint8_t pad_0131[0x3]; // 0x0131
    float warningHapticLowFrequency; // 0x0134
    uint8_t pad_0135[0x3]; // 0x0135
    float warningHapticHighFrequency; // 0x0138

    // Methods
    State get_state();
    void OnEntityCreated();
    void OnStartClient();
    void OnAddPosition(int32_t index);
    void OnClearPositions();
    void RpcAddShake();
    void TestRumble();
    void OnUpdateSimulation();
    void GetPositions(System.Collections.Generic.List<UnityEngine.Vector3> positions);
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void .ctor();
    static void .cctor();
    bool Weaved();
    State get_Network_syncState();
    void set_Network_syncState(State value);
    void UserCode_RpcAddShake();
    static void InvokeUserCode_RpcAddShake(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ModifierLavaVisualManager : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t LavaAmount;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* lavaVisualPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<Aggro.Core.PoolableEntityReference> _lavaVisuals; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Vector3> _lavaPositions; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    State state; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float _currentScale; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float _currentLavaAmount; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float scaleSpeed; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float lavaSpeed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float normalizedWarningTime; // 0x007C

    // Methods
    void OnUpdatePresentation();
    void UpdateSpawnPositions();
    void AddLavaVisual(Vector3 lavaPosition);
    void ClearLavaVisuals();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ModifierManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject[][] modifierPrefabs; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject[][] demoModifierPrefabs; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ModifierBase* _currentModifier; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Aggro.Core.Deck<UnityEngine.GameObject> _serverDeck; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    MonoString* <modifierAchievement1>k__BackingField; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    MonoString* <modifierAchievement2>k__BackingField; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Sprite* <modifierSeen1>k__BackingField; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Sprite* <modifierSeen2>k__BackingField; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float onePlayerMultiplier; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float twoPlayerMultiplier; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float threePlayerMultiplier; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float fourPlayerMultiplier; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float shiftTwoMultiplier; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float shiftThreeMultiplier; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float shiftFourMultiplier; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float shiftFiveMultiplier; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    ModifierArtStyle _syncOverrideArtStyle; // 0x00F8

    // Methods
    MonoString* get_modifierAchievement1();
    void set_modifierAchievement1(MonoString* value);
    MonoString* get_modifierAchievement2();
    void set_modifierAchievement2(MonoString* value);
    Sprite* get_modifierSeen1();
    void set_modifierSeen1(Sprite* value);
    Sprite* get_modifierSeen2();
    void set_modifierSeen2(Sprite* value);
    ModifierArtStyle get_overrideArtStyle();
    ModifierBase* get_currentModifier();
    void OnEntityCreated();
    IEnumerator* ServerSelectModifierCo();
    void ServerAlertModifierChanged();
    void RpcModifierChanged(NetBehaviourId id);
    bool TryGetModifier(ModifierBase* modifier);
    bool TryGetModiferAs(T& modifier);
    bool HasFlags(ModifierFlags flags);
    ModifierFlags GetFlags();
    ModifierArtStyle GetArtStyle();
    float GetPatienceMultiplier();
    float GetPayoutMultiplier();
    void RpcStartVote(GameObject* modifierObjA, GameObject* modifierObjB);
    void RpcVoteEnded(NetBehaviourId modifier);
    void CmdSetModifier(GameObject* prefab);
    void CmdSetOverrideArtStyle(ModifierArtStyle style);
    void RpcSetModifier(NetBehaviourId modifier);
    GameObject[][] GetModifierPrefabs();
    static void ModifierDevCmd(DevCmdArg[][] args);
    static String[][] ModifierDevCmdComplete();
    void .ctor();
    bool Weaved();
    ModifierArtStyle get_Network_syncOverrideArtStyle();
    void set_Network_syncOverrideArtStyle(ModifierArtStyle value);
    void UserCode_RpcModifierChanged__NetBehaviourId(NetBehaviourId id);
    static void InvokeUserCode_RpcModifierChanged__NetBehaviourId(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcStartVote__GameObject__GameObject(GameObject* modifierObjA, GameObject* modifierObjB);
    static void InvokeUserCode_RpcStartVote__GameObject__GameObject(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcVoteEnded__NetBehaviourId(NetBehaviourId modifier);
    static void InvokeUserCode_RpcVoteEnded__NetBehaviourId(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetModifier__GameObject(GameObject* prefab);
    static void InvokeUserCode_CmdSetModifier__GameObject(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSetOverrideArtStyle__ModifierArtStyle(ModifierArtStyle style);
    static void InvokeUserCode_CmdSetOverrideArtStyle__ModifierArtStyle(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSetModifier__NetBehaviourId(NetBehaviourId modifier);
    static void InvokeUserCode_RpcSetModifier__NetBehaviourId(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class IModifierAdded
{
public:

    // Methods
    void OnModifierAdded(ModifierBase* modifier);
};

// Namespace: <global>
class ModifierMaterialManager : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Material* _originalMaterial; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ModifierMaterialStyle[][] modifierMaterialStyles; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    MeshRenderer[][] meshRenderers; // 0x0060

    // Methods
    void OnModifierAdded(ModifierBase* modifier);
    void .ctor();
};

// Namespace: <global>
class ModifierMoreInbound : public ModifierBase
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    DeckCard`1[][] inboundCards; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Aggro.Core.Deck<UnityEngine.GameObject> _serverDeck; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    float inboundCountMultiplier; // 0x00E0

    // Methods
    void OnEntityCreated();
    GameObject* ServerGetInboundPrefab();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class ModifierPostProcessingManager : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Volume* _volume; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnModifierAdded(ModifierBase* modifier);
    void .ctor();
};

// Namespace: <global>
class ModifierRoomSpawn : public ModifierBase
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    GameObject* spawnPrefab; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<UnityEngine.Vector3> _serverSpawnLocs; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<Aggro.Core.Entity> _serverInstances; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float delayAfterShiftStart; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    Vector2 spawnTimeRange; // 0x00EC
    uint8_t pad_00ED[0x7]; // 0x00ED
    Vector2 spawnDensityRange; // 0x00F4
    uint8_t pad_00F5[0x7]; // 0x00F5
    float spawnInDuration; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float spawnCheckRadius; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    bool continuousSpawn; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float exclusionCheckRadius; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    float shrinkGridSpaceDistance; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float positionNoise; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    bool trackSpawnedInstances; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float maxInstancesDensity; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    bool destroyInstancesOnBreakRoom; // 0x011C
    bool destroyInstancesOnModifierDestroyed; // 0x011D
    uint8_t pad_011E[0x2]; // 0x011E
    int32_t _syncSecondsUntilNextSpawn; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    State _syncState; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    Timer _serverTimer; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    int32_t _serverSpawnCount; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    int32_t _serverNextSpawnIndex; // 0x0130
    uint8_t pad_0131[0x3]; // 0x0131
    int32_t _serverSpawned; // 0x0134

    // Methods
    int32_t get_secondsUntilNextSpawn();
    State get_state();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void OnDrawGizmos();
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void .ctor();
    bool Weaved();
    int32_t get_Network_syncSecondsUntilNextSpawn();
    void set_Network_syncSecondsUntilNextSpawn(int32_t value);
    State get_Network_syncState();
    void set_Network_syncState(State value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ModifierSimple : public ModifierBase
{
public:

    // Methods
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class Pollen : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float pollenRadius; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float forceDrag; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float wanderSpeed; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float wanderMaxRadius; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float wanderCircleAhead; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float wanderCircleRadius; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Vector3 _serverRootPos; // 0x00B0
    uint8_t pad_00B1[0xB]; // 0x00B1
    Vector3 _serverWanderDir; // 0x00BC
    uint8_t pad_00BD[0xB]; // 0x00BD
    Vector3 _serverForceVelocity; // 0x00C8

    // Methods
    void OnEntityStart();
    void OnUpdateSimulation();
    void AddForce(Vector3 force);
    void OnDrawGizmosSelected();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class RoomPositionsUtil
{
public:

    // Methods
    static Vector3[][] GeneratePositions(float shrinkGridSpaceDistance, float positionNoise, float exclusionCheckRadius, int32_t seed);
};

// Namespace: <global>
class AggroNetworkManager : public NetworkManager
{
public:
    // Static fields
    // static bool _receivedMsg;
    // static NetMsgGameSettings _msg;
    // static bool _suppressDisconnect;
    // static bool _hasSendServerClientMsg;
    // static bool <allowingConnections>k__BackingField;
    // static Aggro.Core.ObjectQuery<Aggro.Core.EntityBehaviour> _behaviourQuery;
    // static Aggro.Core.ObjectQuery<PlayerPosition> _positionQuery;
    // static int32_t _playerSpawned;
    // static System.Collections.Generic.List<Mirror.NetworkConnectionToClient> _orderedConnections;
    // static System.Collections.Generic.List<PlayerPosition> _positions;
    // static bool <isSinglePlayer>k__BackingField;

    uint8_t pad_0000[0xA0]; // 0x0000
    Transport* normalTransport; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Transport* platformTransport; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Transport* gdkTransport; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.Dictionary<Mirror.NetworkConnectionToClient,System.String> _connectedClients; // 0x00B8

    // Methods
    static bool get_allowingConnections();
    static void set_allowingConnections(bool value);
    static NetworkManagerMode get_networkMode();
    static bool get_isSinglePlayer();
    static void set_isSinglePlayer(bool value);
    void Awake();
    static void StartHost(NetworkTransportType transportType, uint16_t port);
    static void StartSinglePlayer();
    static void EnableHost();
    static void DisableHost();
    static System.Threading.Tasks.Task<ClientConnectionResult> StartClientAsync(NetworkTransportType transportType, MonoString* adddress, uint16_t port);
    static void Disconnect();
    void OnServerConnect(NetworkConnectionToClient* conn);
    void OnServerDisconnect(NetworkConnectionToClient* conn);
    void OnClientConnect();
    void OnClientDisconnect();
    void OnStartServer();
    void OnStartClient();
    void OnDestroy();
    void OnServerPlayerJoined(NetworkConnectionToClient* conn, NetMsgServerPlayerJoined msg);
    void OnGameSettingsMsg(NetMsgGameSettings msg);
    void OnPlayerJoined(NetMsgPlayerJoined msg);
    void OnPlayerLeft(NetMsgPlayerLeft msg);
    IEnumerator* HandleClientConnectCo(NetworkConnectionToClient* conn);
    static void SetCurrentLobbyPlayers();
    static void RemoveCurrentLocalPlayers();
    static void SpawnPlayers();
    static GameObject* ServerGetSpawnedPlayer();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
struct NetMsgGameSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Guid versionGuid; // 0x0010
};

// Namespace: <global>
struct NetMsgServerPlayerJoined
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* playerName; // 0x0010
};

// Namespace: <global>
struct NetMsgPlayerJoined
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* playerName; // 0x0010
};

// Namespace: <global>
struct NetMsgPlayerLeft
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* playerName; // 0x0010
};

// Namespace: <global>
struct ClientConnectionResult
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Result result; // 0x0010

    // Methods
    bool get_isSuccess();
    static ClientConnectionResult Failed();
    static ClientConnectionResult FailedVersionMismatch();
    static ClientConnectionResult Success();
};

// Namespace: <global>
struct NetworkTransportType
{
public:
    // Static fields
    // static NetworkTransportType Normal;
    // static NetworkTransportType Platform;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EvPlayerJoined
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* playerName; // 0x0010
};

// Namespace: <global>
struct EvPlayerLeft
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* playerName; // 0x0010
};

// Namespace: <global>
class NetworkDevCmds : public NetworkAggroManagerBase`1
{
public:

    // Methods
    void CmdAllBoxesTakeDamage();
    void CmdBoxTakeDamage(Entity box);
    void CmdAllBoxesHeal();
    void CmdBoxHeal(Entity box);
    void CmdAllBoxesActivate();
    void CmdBoxActivate(Entity box);
    void CmdBoxSetFire(Entity box);
    void CmdBoxClearFire(Entity box);
    void CmdAllBoxesSetFire();
    void CmdAllBoxesClearFire();
    void CmdSpawnPrefab(MonoString* prefabName, Vector3 position, Quaternion rotation);
    static void NetworkDevCmd(DevCmdArg[][] args);
    void .ctor();
    bool Weaved();
    void UserCode_CmdAllBoxesTakeDamage();
    static void InvokeUserCode_CmdAllBoxesTakeDamage(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdBoxTakeDamage__Entity(Entity box);
    static void InvokeUserCode_CmdBoxTakeDamage__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAllBoxesHeal();
    static void InvokeUserCode_CmdAllBoxesHeal(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdBoxHeal__Entity(Entity box);
    static void InvokeUserCode_CmdBoxHeal__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAllBoxesActivate();
    static void InvokeUserCode_CmdAllBoxesActivate(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdBoxActivate__Entity(Entity box);
    static void InvokeUserCode_CmdBoxActivate__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdBoxSetFire__Entity(Entity box);
    static void InvokeUserCode_CmdBoxSetFire__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdBoxClearFire__Entity(Entity box);
    static void InvokeUserCode_CmdBoxClearFire__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAllBoxesSetFire();
    static void InvokeUserCode_CmdAllBoxesSetFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAllBoxesClearFire();
    static void InvokeUserCode_CmdAllBoxesClearFire(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdSpawnPrefab__String__Vector3__Quaternion(MonoString* prefabName, Vector3 position, Quaternion rotation);
    static void InvokeUserCode_CmdSpawnPrefab__String__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class NetworkPlayerClientToServer : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    MonoString* syncPlayerName; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MonoString* syncClientName; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    MonoString* syncPlayFabId; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    uint8_t syncColorIndex; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    uint64_t syncPlatformId; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    bool syncIsHost; // 0x00C0

    // Methods
    void OnStartAuthority();
    void OnUpdateSimulation();
    void .ctor();
    bool Weaved();
    MonoString* get_NetworksyncPlayerName();
    void set_NetworksyncPlayerName(MonoString* value);
    MonoString* get_NetworksyncClientName();
    void set_NetworksyncClientName(MonoString* value);
    uint8_t get_NetworksyncColorIndex();
    void set_NetworksyncColorIndex(uint8_t value);
    uint64_t get_NetworksyncPlatformId();
    void set_NetworksyncPlatformId(uint64_t value);
    MonoString* get_NetworksyncPlayFabId();
    void set_NetworksyncPlayFabId(MonoString* value);
    bool get_NetworksyncIsHost();
    void set_NetworksyncIsHost(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class NetworkPlayerManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* playerPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MirrorIgnoranceCommsNetwork* comms; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<Aggro.Core.Entity> _serverPlayers; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Aggro.Core.ObjectQuery<NetworkPlayerServerToClient> _query; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float updateStatsEvery; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    Timer _serverTimer; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    int32_t _order; // 0x00C0

    // Methods
    void OnEntityCreated();
    void OnEntityStart();
    void OnUpdateSimulation();
    void ServerPlayerJoined(NetworkConnectionToClient* conn);
    void ServerPlayerLeft(NetworkConnectionToClient* conn);
    void PopulatePlayerStats(System.Collections.Generic.List<NetworkPlayerManager.PlayerStats> stats);
    bool TryGetHostNameAndColor(MonoString* name, int32_t colorIndex);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class NetworkPlayerServerToClient : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    int16_t syncPing; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    int32_t syncOrder; // 0x009C

    // Methods
    void OnEntityCreated();
    void .ctor();
    bool Weaved();
    int16_t get_NetworksyncPing();
    void set_NetworksyncPing(int16_t value);
    int32_t get_NetworksyncOrder();
    void set_NetworksyncOrder(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class NetworkSerialization
{
public:
};

// Namespace: <global>
class ButtonLockIn : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float lockInDuration; // 0x0050

    // Methods
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
    void .ctor();
};

// Namespace: <global>
class ButtonOutboundBay : public EntityBehaviourBase
{
public:

    // Methods
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
    void .ctor();
};

// Namespace: <global>
class ButtonPauseShiftTimers : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float pauseDuration; // 0x0050

    // Methods
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
    void .ctor();
};

// Namespace: <global>
class ButtonRerollShop : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static StringBuilder* _builder;

    uint8_t pad_0000[0x98]; // 0x0000
    FloaterUI* _floaterUI; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t costForReroll; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t rerollCostIncrement; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float rerollCooldown; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    int32_t _syncTimesRerolled; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Timer _serverTimer; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    int32_t _prevCost; // 0x00B4

    // Methods
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void RPCShopRerolled();
    void ClientButtonPressed();
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void .ctor();
    static void .cctor();
    bool Weaved();
    int32_t get_Network_syncTimesRerolled();
    void set_Network_syncTimesRerolled(int32_t value);
    void UserCode_RPCShopRerolled();
    static void InvokeUserCode_RPCShopRerolled(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ButtonWarehouseSprinklers : public NetworkEntityBehaviourBase
{
public:

    // Methods
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class IWarehouseButton
{
public:

    // Methods
    WarehouseButtonState ServerGetButtonState();
    void ServerButtonPressed(NetworkConnectionToClient* conn);
    void ClientButtonPressed();
};

// Namespace: <global>
struct WarehouseButtonState
{
public:
    // Static fields
    // static WarehouseButtonState Unpressed;
    // static WarehouseButtonState Pressed;
    // static WarehouseButtonState Destroying;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class PhysicsMaterialOnModifier : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PhysicMaterial* icyMaterial; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PhysicMaterial* _defaultMaterial; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnModifierAdded(ModifierBase* modifier);
    void SetPhysicsMaterial(PhysicMaterial* mat);
    void .ctor();
};

// Namespace: <global>
class PhysicsSystemGroup : public EntitySystemGroupBase
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class PhysicsUpdateSystem : public EntitySystemBase
{
public:

    // Methods
    void OnUpdateSystem();
    void .ctor();
};

// Namespace: <global>
class WarehouseButton : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t FLASHING_PROPERTY_ID;

    uint8_t pad_0000[0x98]; // 0x0000
    Transform* buttonObject; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* destroyLocation; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject[][] destroyedPrefabs; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject[][] destroyedVFX; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Renderer* buttonRenderer; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    float pressDistanceThreshold; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float minimumPressDuration; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    bool destroyOnPressed; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float destroyRadius; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    WarehouseButtonState _syncState; // 0x00D0
    bool _pressed; // 0x00D1
    bool _receivedResponse; // 0x00D2
    uint8_t pad_00D3[0x1]; // 0x00D3
    Vector3 _originalPosition; // 0x00D4
    uint8_t pad_00D5[0xB]; // 0x00D5
    Timer _serverTimer; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    EventReference buttonClick; // 0x00E4
    uint8_t pad_00E5[0x13]; // 0x00E5
    EventInstance _clickInstance; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Color blankColor; // 0x0100
    uint8_t pad_0101[0xF]; // 0x0101
    Color activatedColor; // 0x0110
    uint8_t pad_0111[0xF]; // 0x0111
    EventReference pushSfx; // 0x0120

    // Methods
    WarehouseButtonState get_buttonState();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void CmdRequestPress(NetworkConnectionToClient* conn);
    void RpcRequestProcessed(NetworkConnectionToClient* target, bool accepted);
    void RpcButtonPressed();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
    bool Weaved();
    WarehouseButtonState get_Network_syncState();
    void set_Network_syncState(WarehouseButtonState value);
    void UserCode_CmdRequestPress__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdRequestPress__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRequestProcessed__NetworkConnectionToClient__Boolean(NetworkConnectionToClient* target, bool accepted);
    static void InvokeUserCode_RpcRequestProcessed__NetworkConnectionToClient__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcButtonPressed();
    static void InvokeUserCode_RpcButtonPressed(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class CameraController : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Volume* freeCamPost; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Camera* _cam; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TipTapPhoneVisual* _localTipTapPhoneVisual; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Transform* _transform; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Entity _lockedTarget; // 0x0070
    uint8_t pad_0071[0x1F]; // 0x0071
    Vector3 offset; // 0x0090
    uint8_t pad_0091[0xB]; // 0x0091
    float fov; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float vcFovAffectThresholdSpeed; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float fovMaxSpeedOffset; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float fovLerpSpeed; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float lerpSpeed; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    Ease focusEase; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float freeFixedSpeed; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float freeFixedLerpSpeed; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float freeCamMouseSensitivity; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float freeCamYRotationLimitDegrees; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float freeCamPositionLerpSpeed; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float freeCamRotationSlerpSpeed; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float freeCamForwardSpeed; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float freeCamSideSpeed; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float _targetFOV; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    Mode _mode; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    bool _snapToPlayer; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    Quaternion _originalRot; // 0x00E0
    uint8_t pad_00E1[0xF]; // 0x00E1
    Vector3 _freePos; // 0x00F0
    uint8_t pad_00F1[0xB]; // 0x00F1
    float _freeCamYaw; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float _freeCamPitch; // 0x0100

    // Methods
    Mode get_mode();
    void OnEntityCreated();
    void OnUpdatePresentation();
    void FollowPlayer();
    void SnapToPlayer();
    void SetToPosition(Vector3 targetPosition);
    IEnumerator* SetFocusPositionCo(Vector3 targetPosition, float duration);
    void LockToEntity(Entity e);
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class CameraRenderTexture : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RTHandle* _rtHandle; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float _prevRenderScale; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t _prevScreenWidth; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t _prevScreenHeight; // 0x0060

    // Methods
    RTHandle* get_rtHandle();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void CreateRenderTexture();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class CameraShake : public AggroManagerBase`1
{
public:
    // Static fields
    // static int32_t SETTING_SCREENSHAKE;

    uint8_t pad_0000[0x50]; // 0x0000
    Transform* shakeTarget; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ShakeStrengthValue[][] shakeStrengths; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<CameraShake.Shake> _shakes; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Quaternion _originalRot; // 0x0068

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void AddShake(float amount, float duration, float scale);
    void AddShake(ShakeStrength strength);
    void AddShakeFromPosition(ShakeStrength strength, Vector3 position);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
struct ShakeStrength
{
public:
    // Static fields
    // static ShakeStrength None;
    // static ShakeStrength Small;
    // static ShakeStrength Medium;
    // static ShakeStrength Large;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ColorChangeUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    StudioEventEmitter* changeColorSFX; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool selected; // 0x0058

    // Methods
    void Cycle(int32_t dir);
    void OnUpdatePresentation();
    void OnSelect(BaseEventData* eventData);
    void OnDeselect(BaseEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class ContractSelectionUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* contractGroup; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<ContractObject> _contracts; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* contractUIPrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* randomContractUIPrefab; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    StudioEventEmitter* showSFX; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    StudioEventEmitter* hideSFX; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    StudioEventEmitter* failToChangePageSFX; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    LobbyContractVisualManager* lobbyContractVisualManager; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    LobbyReadyUpUI* lobbyReadyUpUI; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* hostName; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Image* hostIcon; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t selectedContractIndex; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float offsetDistance; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float _currentOffset; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    Ease ease; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float speed; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float hideSpeed; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    bool hide; // 0x00C0
    bool selected; // 0x00C1
    bool hover; // 0x00C2
    uint8_t pad_00C3[0x1]; // 0x00C3
    EventReference changeContractLeftSfx; // 0x00C4
    uint8_t pad_00C5[0xF]; // 0x00C5
    EventReference changeContractRightSfx; // 0x00D4
    uint8_t pad_00D5[0xF]; // 0x00D5
    bool _wasUp; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    int32_t detectedHostBellCount; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    int32_t previousContractIndex; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    uint64_t _saveVersion; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    float highPos; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float lowPos; // 0x00FC

    // Methods
    void OnUpdatePresentationEarly();
    void OnUpdateSimulation();
    void OnEntityStart();
    void CheckForRedraw();
    void SetUp();
    void Cycle(int32_t direction);
    void OnUpdatePresentation();
    void OnUpdatePresentationLate();
    void OnPointerEnter(PointerEventData* eventData);
    void OnPointerExit(PointerEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class CostumeChangeUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    StudioEventEmitter* changeCostumeSFX; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Int32[][] _unlockedCostumeIndicies; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool selected; // 0x0060

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void Cycle(int32_t dir);
    void OnSelect(BaseEventData* eventData);
    void OnDeselect(BaseEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class NitroController : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    VehicleController* vc; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayerUpgrades* playerUpgrades; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    EventReference[][] nitroChargeUpSfxEvents; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float nitroPower; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float maxNitroSpeed; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    EventReference nitroLoopRef; // 0x00B8
    uint8_t pad_00B9[0xF]; // 0x00B9
    EventReference nitroLoopUpgradedRef; // 0x00C8
    uint8_t pad_00C9[0xF]; // 0x00C9
    EventReference nitroActivateRef; // 0x00D8
    uint8_t pad_00D9[0xF]; // 0x00D9
    EventReference nitroActivateUpgradedRef; // 0x00E8
    uint8_t pad_00E9[0xF]; // 0x00E9
    float _nitroSFXSpeedSync; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    bool nitroActiveSync; // 0x00FC
    bool _nitroInput; // 0x00FD
    uint8_t pad_00FE[0x2]; // 0x00FE
    int32_t nitroCharges; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float nitroBuildUpLevel; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float nitroBurnProgress; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t maxNitroCharges; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float nitroBuildUpSpeed; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    float nitroBuildUpDecaySpeed; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float nitroBuildUpThreshold; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float nitroBurnSpeed; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    float nitroLerpSpeed; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    float perChargeMultiplier; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    EventInstance nitroLoopInstance; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    EventInstance nitroLoopUpgradedInstance; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    int32_t <nitroUseCount>k__BackingField; // 0x0138

    // Methods
    int32_t get_nitroUseCount();
    void set_nitroUseCount(int32_t value);
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnStartLocalPlayer();
    void OnUpdateSimulation();
    int32_t LocalPlayerGetChargeCount();
    void LocalPlayerActivateNitro();
    void LocalPlayerStopNitro();
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
    float get_Network_nitroSFXSpeedSync();
    void set_Network_nitroSFXSpeedSync(float value);
    bool get_NetworknitroActiveSync();
    void set_NetworknitroActiveSync(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PingController : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem* honkParticleSystem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayerColorManager* _playerColorManager; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    EventReference beepEventReference; // 0x00A8
    uint8_t pad_00A9[0xF]; // 0x00A9
    EventInstance beepInstance; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    bool beeping; // 0x00C0
    bool _wasBeeping; // 0x00C1

    // Methods
    void OnEntityCreated();
    void OnStartLocalPlayer();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
    bool get_Networkbeeping();
    void set_Networkbeeping(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerAllergies : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Pollen> _pollens;
    // static int32_t Sneeze;
    // static int32_t InPollen;

    uint8_t pad_0000[0x98]; // 0x0000
    StudioEventEmitter* sneezeBuild; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    float preparingToSneezeDuration; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float sneezingDuration; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float sneezeBackwardsForce; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    Timer _localPlayerTimer; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    State _localPlayerState; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    EventReference sneezeSFXEvent; // 0x00B4

    // Methods
    void CmdPlaySneezeSFX();
    void CmdPlaySneezeBuildSFX();
    void RpcPlaySneezeSFX();
    void RpcPlaySneezeBuildSFX();
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_CmdPlaySneezeSFX();
    static void InvokeUserCode_CmdPlaySneezeSFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPlaySneezeBuildSFX();
    static void InvokeUserCode_CmdPlaySneezeBuildSFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlaySneezeSFX();
    static void InvokeUserCode_RpcPlaySneezeSFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlaySneezeBuildSFX();
    static void InvokeUserCode_RpcPlaySneezeBuildSFX(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class PlayerAnimation : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Uproot;
    // static int32_t Sneeze;

    uint8_t pad_0000[0x98]; // 0x0000
    NetworkAnimator* networkAnimator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    VehicleController* vc; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerGrabber* playerGrabber; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Animator* animator; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    PlayerStress* playerStress; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    NitroController* nitroController; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    MeshRenderer* cursewordRenderer; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    float headLookSpeed; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float _headLookTarget; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float leanSpeed; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    bool tiptapActive; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float tiptapActiveProgress; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float taptapTransitionSpeed; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float bonkBlendSpeed; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    int32_t bonkLayerIndex; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    int32_t turnLayerIndex; // 0x00F0

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnUpdatePresentationLate();
    void PlayGrabDenied();
    void PlaySlipOut();
    void PlayUpRoot();
    void PlaySneeze();
    void PlayBonk();
    void RpcPlayBonk();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcPlayBonk();
    static void InvokeUserCode_RpcPlayBonk(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class PlayerBlower : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static float HEIGHT;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    float blowerRadius; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float blowerArcDegrees; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float blowerMaxBoxForce; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float blowerMaxPlayerForce; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float blowerMaxPollenForce; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    Ease blowerForceEase; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float upwardsHeight; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    bool _syncIsCurrentlyBlowing; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Vector2 _syncBlowingPos; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Vector2 _syncBlowingFwd; // 0x00C0

    // Methods
    bool get_isCurrentlyBlowing();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncIsCurrentlyBlowing();
    void set_Network_syncIsCurrentlyBlowing(bool value);
    Vector2 get_Network_syncBlowingPos();
    void set_Network_syncBlowingPos(Vector2 value);
    Vector2 get_Network_syncBlowingFwd();
    void set_Network_syncBlowingFwd(Vector2 value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerCensor : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    PlayerStress* _playerStress; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* playerCensorVisual; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    VoicePlayerState* _voice; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    AnimationCurve* bleepVisualCurve; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    StudioEventEmitter* bleepEventEmitter; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    float bleepDelay; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float bleepTime; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float bleepCooldown; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float voipAmplitudeBleepThreshold; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    bool bleeping; // 0x00D0
    bool busy; // 0x00D1

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentationEarly();
    void OnUpdatePresentation();
    IEnumerator* BleepCo();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PlayerColorManager : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t MAINCOLORID;
    // static int32_t NICKFLASHID;
    // static int32_t FLASHINGID;

    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<ColorChoice> playerColors; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<ColorChoice> playerUIColors; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Renderer> playerRendersToUpdate; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<UnityEngine.Renderer> vehicleRendersToUpdate; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    PlayerColorManagerNetwork* playerColorManagerNetwork; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    int32_t activePlayerColorIndex; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float _flash; // 0x007C

    // Methods
    Color get_currentColor();
    void OnEntityCreated();
    Color GetPlayerColor(bool ui);
    void OnUpdatePresentation();
    void UpdateRenderers();
    void Flash();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ColorChoice
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    MonoString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Color color; // 0x0018

    // Methods
    void .ctor(MonoString* name, Color color);
};

// Namespace: <global>
class PlayerColorManagerNetwork : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    PlayerColorManager* playerColorManager; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t activePlayerColorIndex; // 0x00A0

    // Methods
    void SetPlayerColorIndex(int32_t index);
    void CycleToNextPlayerColor(int32_t dir);
    void OnEntityCreated();
    void OnStartLocalPlayer();
    void OnUpdatePresentationEarly();
    void CmdPlayFlash();
    void RpcPlayFlash();
    void .ctor();
    bool Weaved();
    int32_t get_NetworkactivePlayerColorIndex();
    void set_NetworkactivePlayerColorIndex(int32_t value);
    void UserCode_CmdPlayFlash();
    static void InvokeUserCode_CmdPlayFlash(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayFlash();
    static void InvokeUserCode_RpcPlayFlash(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerCostumeManager : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Costume[][] costumes; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.GameObject> currentlyActiveFrames; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Int32[][] unlockedCostumeIndicies; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    PlayerCostumeManagerNetwork* playerCostumeManagerNetwork; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t currentCostumeID; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t currentUnlockedCostumeIndex; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    ExpressionClip currentExpression; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float frameSpeed; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float animationTime; // 0x0080

    // Methods
    void OnUpdatePresentation();
    int32_t GetIndexFromCostumeObject(CostumeObject* costumeObject);
    void OnEntityCreated();
    void SetUpUnlockedIndicies();
    void ResetAllCostumesButton();
    void ResetAllCostumes();
    void UpdateCostume();
    Costume* GetCurrentCostume();
    void .ctor();
};

// Namespace: <global>
class PlayerCostumeManagerNetwork : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    PlayerCostumeManager* costumeManager; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t currentCostumeID; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    uint64_t _saveVersion; // 0x00A8

    // Methods
    void OnStartLocalPlayer();
    void OnEntityCreated();
    void OnUpdatePresentationEarly();
    void SetCostumeIndex(int32_t index);
    void InitializeCostumeFromSaveData();
    void .ctor();
    bool Weaved();
    int32_t get_NetworkcurrentCostumeID();
    void set_NetworkcurrentCostumeID(int32_t value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerDriftSparks : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float tick; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float tickTime; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float scale; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float scaleOffset; // 0x005C

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerEffects : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;
    // static float MIN_HOLD_DURATION;
    // static Collider[][] _colliders;
    // static System.Collections.Generic.List<UnityEngine.Vector3> _positions;

    uint8_t pad_0000[0x98]; // 0x0000
    Aggro.Core.ObjectQuery<GlobalEffects> _globalQuery; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* becomeVisibleVfxPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* becomeInvisibleVfxPrefab; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* sfxPuddleDrivingSfxEmitter; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    VehicleController* _vehicleController; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    float maxRadiusCheck; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    int32_t minVehiclePercentage; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t lockedInSpeedPercentage; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float _stressChangeRateMin; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float _stressChangeRateMax; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    bool _stressImpactAdd; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t _vehicleSpeedPercentageRaw; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t _vehicleSpeedPercentageMin; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    int32_t _vehicleSpeedPercentageMax; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t _nitroChargePercentageRaw; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float _nitroChangeRateMax; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    Vector3 _accumForce; // 0x00EC
    uint8_t pad_00ED[0xB]; // 0x00ED
    PlayerEffectContext _syncContext; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    LiquidTrailEffect activeLiquidTrailEffect; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    bool playerInLiquidPuddle; // 0x0100
    bool syncInvisible; // 0x0101
    bool _previouslyInvisible; // 0x0102
    uint8_t pad_0103[0x1]; // 0x0103
    Timer _holdTimer; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    int32_t _prevHoldSpeedPercentage; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t _holdSpeedPercentage; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    float sfxPuddleVol; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    float sfxPuddleVolInSpeed; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float sfxPuddleVolOutSpeed; // 0x0118

    // Methods
    PlayerEffectContext get_context();
    void OnEntityCreated();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void AddStressChangeRateMinMax(float value);
    float GetStressChangeRate();
    void SetAddStressOnImpact();
    bool ShouldAddStressOnImpact();
    void AddNitroChangeRateMax(float value);
    float GetNitroChangeRate();
    void AddVehicleSpeedPercentageRaw(int32_t percentage);
    void AddVehicleSpeedPercentageMinMax(int32_t percentage);
    float GetVehicleSpeedMultiplier();
    void AddNitroChargePercentageRaw(int32_t percentage);
    float GetNitroChargeMultiplier();
    void AddForce(Vector3 force);
    void AddContext(PlayerEffectContext context);
    void .ctor();
    static void .cctor();
    bool Weaved();
    PlayerEffectContext get_Network_syncContext();
    void set_Network_syncContext(PlayerEffectContext value);
    bool get_NetworksyncInvisible();
    void set_NetworksyncInvisible(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct PlayerEffectContext
{
public:
    // Static fields
    // static PlayerEffectContext None;
    // static PlayerEffectContext Fire;
    // static PlayerEffectContext Ooze;
    // static PlayerEffectContext Oil;
    // static PlayerEffectContext Water;
    // static PlayerEffectContext Egg;
    // static PlayerEffectContext Honey;
    // static PlayerEffectContext Battery;
    // static PlayerEffectContext Anvil;
    // static PlayerEffectContext Bees;
    // static PlayerEffectContext Shield;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PlayerEffectsSystemGroup : public EntitySystemGroupBase
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class PlayerEffectsVisual : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PlayerEffects* playerEffects; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ParticleSystem* fire; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ParticleSystem* ooze; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ParticleSystem* lockedIn; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    ParticleSystem* battery; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject[][] ghostDisableObjects; // 0x0078

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerEnvironmentCollision : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* collisionDustVfxPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Entity _bonked; // 0x00A0
    uint8_t pad_00A1[0x1F]; // 0x00A1
    PlayerAnimation* playerAnimation; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    PlayerColorManagerNetwork* PlayerColorManagerNetwork; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    StudioEventEmitter* collisionSFX; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    LayerMask stressCollisionLayers; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float speedThreshold; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float debounceTimeSeconds; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float sfxImpulseThreshold; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    Timer _debounceTimer; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    Vector3 _velocity; // 0x00EC
    uint8_t pad_00ED[0xB]; // 0x00ED
    bool _collided; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float _impulseSqr; // 0x00FC

    // Methods
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void OnCollisionEnter(Collision* collision);
    void CmdPlayCollisionSfx();
    void RpcPlayCollisionSfx();
    void .ctor();
    bool Weaved();
    void UserCode_CmdPlayCollisionSfx();
    static void InvokeUserCode_CmdPlayCollisionSfx(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlayCollisionSfx();
    static void InvokeUserCode_RpcPlayCollisionSfx(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class PlayerExtinguisher : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static float EXTINGUISH_HEIGHT;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    float extinguishRadius; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float extinguishArcDegrees; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    bool _syncIsCurrentlyExtinguishing; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    Vector2 _syncExtinguishingPos; // 0x00A4
    uint8_t pad_00A5[0x7]; // 0x00A5
    Vector2 _syncExtinguishingFwd; // 0x00AC

    // Methods
    bool get_isCurrentlyExtinguishing();
    void OnUpdateSimulation();
    void RpcFiresExtinguished(NetworkConnectionToClient* conn, uint8_t count);
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncIsCurrentlyExtinguishing();
    void set_Network_syncIsCurrentlyExtinguishing(bool value);
    Vector2 get_Network_syncExtinguishingPos();
    void set_Network_syncExtinguishingPos(Vector2 value);
    Vector2 get_Network_syncExtinguishingFwd();
    void set_Network_syncExtinguishingFwd(Vector2 value);
    void UserCode_RpcFiresExtinguished__NetworkConnectionToClient__Byte(NetworkConnectionToClient* conn, uint8_t count);
    static void InvokeUserCode_RpcFiresExtinguished__NetworkConnectionToClient__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerFloaterHandler : public EntityBehaviourBase
{
public:

    // Methods
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void .ctor();
};

// Namespace: <global>
class PlayerFloaterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Entity playerEntity; // 0x0050
    uint8_t pad_0051[0x1F]; // 0x0051
    Image* icon; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    FloaterUI* floaterUI; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    float maxDistance; // 0x0080

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerGrabber : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _collidersArray;
    // static float MAX_RTT;
    // static float HINT_CHECK_HEIGHT;
    // static float OVERLAP_CHECK_DIST_SQR;
    // static System.Collections.Generic.List<UnityEngine.Collider> _colliders;
    // static System.Collections.Generic.List<Grabbable> _grabbables;
    // static System.Collections.Generic.List<GrabbableHolder> _holders;
    // static System.Collections.Generic.List<ShopHolder> _shopHolders;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;
    // static System.Collections.Generic.HashSet<Aggro.Core.Entity> _entitySet;
    // static System.Collections.Generic.HashSet<System.UInt32> _ids;

    uint8_t pad_0000[0x98]; // 0x0000
    Transform* grabbedContainer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* checkThrowFrom; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerGrabberData _data; // 0x00A8
    uint8_t pad_00A9[0x67]; // 0x00A9
    Entity serverGrabbed; // 0x0110
    uint8_t pad_0111[0x1F]; // 0x0111
    Entity syncGrabTarget; // 0x0130
    uint8_t pad_0131[0x1F]; // 0x0131
    PlayerAnimation* playerAnimation; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    GameObject[][] zookeeperStack; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    GameObject[][] chickenJockeyStack; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    System.Collections.Generic.HashSet<Mirror.NetworkConnectionToClient> _serverChickenJockeySent; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    System.Collections.Generic.List<UnityEngine.Vector3> _debugGrabCandidates; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    float grabCandidateCheckRadius; // 0x0178
    uint8_t pad_0179[0x3]; // 0x0179
    float grabShopCheckRadius; // 0x017C
    uint8_t pad_017D[0x3]; // 0x017D
    float grabCandidateCheckAngle; // 0x0180
    uint8_t pad_0181[0x3]; // 0x0181
    float grabCandidatePriorityProjectedDistance; // 0x0184
    uint8_t pad_0185[0x3]; // 0x0185
    float grabReleaseVelocityUpwardsModifierLowered; // 0x0188
    uint8_t pad_0189[0x3]; // 0x0189
    float grabReleaseVelocityUpwardsModifierRaised; // 0x018C
    uint8_t pad_018D[0x3]; // 0x018D
    float grabReleaseVelocityForwardMultiplier; // 0x0190
    uint8_t pad_0191[0x3]; // 0x0191
    float grabReleaseVelocityBackwardsMultiplier; // 0x0194
    uint8_t pad_0195[0x3]; // 0x0195
    bool syncLiftRaised; // 0x0198
    bool hasCandidate; // 0x0199
    uint8_t pad_019A[0x2]; // 0x019A
    EventReference upBoopRef; // 0x019C
    uint8_t pad_019D[0xF]; // 0x019D
    EventReference downBoopRef; // 0x01AC
    uint8_t pad_01AD[0xF]; // 0x01AD
    EventReference emptyBoopRef; // 0x01BC
    uint8_t pad_01BD[0xF]; // 0x01BD
    EventReference slideNoiseRef; // 0x01CC
    uint8_t pad_01CD[0x13]; // 0x01CD
    EventInstance upInstance; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    EventInstance downInstance; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    EventInstance emptyInstance; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    EventInstance slideNoiseInstance; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    bool _sentZookeeperAchievement; // 0x0200

    // Methods
    PlayerGrabState get_grabState();
    Entity get_localPlayerGrabTarget();
    Entity get_localPlayerHintTarget();
    int32_t get_localPlayerHintId();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    void OnUpdatePresentationLate();
    void RequestPlayerDropBoxes(bool breakStack, bool checkUpgrade);
    void LocalPlayerDropBoxes(bool breakStack, bool checkUpgrade);
    void RpcPlayerDropBoxes(bool breakStack, bool checkUpgrade);
    void ServerDropBoxesSimple();
    void RpcDropBoxesSimple();
    void UpdateGrab();
    void UpdateLift();
    void UpdateInput();
    bool IsGrabBusy();
    void PopulateCandidates(System.Collections.Generic.List<UnityEngine.Collider> list, int32_t layer);
    void UpgradeGrabTarget();
    bool TryFindGrabTarget(bool raisedOnly, Entity target, int32_t id, int32_t grabLevel);
    bool TryFindGrabTarget(bool raisedOnly, float dist, Entity target, int32_t id, int32_t grabLevel);
    void UpdateHintTarget();
    bool TryGetHintTarget(bool raisedOnly, Entity target, int32_t id, int32_t hintLevel);
    bool TryGetHintTarget(bool raisedOnly, float dist, Entity target, int32_t id, int32_t hintLevel);
    void CmdRequestGrab(Entity e);
    void CmdReleaseGrabLocation(Entity e, Vector3 position, Vector3 fromPosition, Quaternion rotation, Vector3 velocity, bool breakStacks);
    void CmdReleaseGrabLocationOthers(Entity e, Vector3 position, Vector3 fromPosition, Quaternion rotation, Vector3 velocity, bool breakStacks);
    void CmdReleaseGrabTarget(Entity e, Entity target, int32_t targetId, Vector3 position, Quaternion rotation, Vector3 velocity, NetworkConnectionToClient* conn);
    void RpcGotChickenJockey(NetworkConnectionToClient* conn);
    void ServerSetBox(Entity box, Entity ignore);
    void LocalPlayerSetKickDebounce(Entity e);
    void ServerSetVelocity(Grabbable* grabbable, Vector3 velocity);
    void RpcRequestGranted(Entity e);
    Vector3 GetReleaseVelocity();
    void RpcRequestDenied();
    bool TryGetShopHolderGrabTarget(ShopHolder* holder);
    void OnServerOwnerDisconnecting();
    void OnDrawGizmosSelected();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_NetworksyncLiftRaised();
    void set_NetworksyncLiftRaised(bool value);
    Entity get_NetworksyncGrabTarget();
    void set_NetworksyncGrabTarget(Entity value);
    void UserCode_RpcPlayerDropBoxes__Boolean__Boolean(bool breakStack, bool checkUpgrade);
    static void InvokeUserCode_RpcPlayerDropBoxes__Boolean__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcDropBoxesSimple();
    static void InvokeUserCode_RpcDropBoxesSimple(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRequestGrab__Entity(Entity e);
    static void InvokeUserCode_CmdRequestGrab__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseGrabLocation__Entity__Vector3__Vector3__Quaternion__Vector3__Boolean(Entity e, Vector3 position, Vector3 fromPosition, Quaternion rotation, Vector3 velocity, bool breakStacks);
    static void InvokeUserCode_CmdReleaseGrabLocation__Entity__Vector3__Vector3__Quaternion__Vector3__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseGrabLocationOthers__Entity__Vector3__Vector3__Quaternion__Vector3__Boolean(Entity e, Vector3 position, Vector3 fromPosition, Quaternion rotation, Vector3 velocity, bool breakStacks);
    static void InvokeUserCode_CmdReleaseGrabLocationOthers__Entity__Vector3__Vector3__Quaternion__Vector3__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdReleaseGrabTarget__Entity__Entity__Int32__Vector3__Quaternion__Vector3__NetworkConnectionToClient(Entity e, Entity target, int32_t targetId, Vector3 position, Quaternion rotation, Vector3 velocity, NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdReleaseGrabTarget__Entity__Entity__Int32__Vector3__Quaternion__Vector3__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcGotChickenJockey__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_RpcGotChickenJockey__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRequestGranted__Entity(Entity e);
    static void InvokeUserCode_RpcRequestGranted__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRequestDenied();
    static void InvokeUserCode_RpcRequestDenied(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct PlayerGrabState
{
public:
    // Static fields
    // static PlayerGrabState NotGrabbing;
    // static PlayerGrabState Requested;
    // static PlayerGrabState RequestGranted;
    // static PlayerGrabState Grabbed;
    // static PlayerGrabState ReleasingGrab;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct PlayerLiftState
{
public:
    // Static fields
    // static PlayerLiftState LoweredContext;
    // static PlayerLiftState RaisedContext;
    // static PlayerLiftState RaisedExplicit;
    // static PlayerLiftState LoweredNotUsable;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PlayerLiftVisual : public EntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x50]; // 0x0000
    Transform* target; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VehicleController* _vehicleController; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    NitroController* _nitroController; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float raiseHeight; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float raiseLowerDuration; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    Ease raiseLoserEase; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float _time; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool _prevIsRaised; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    Vector3 _origPosition; // 0x007C
    uint8_t pad_007D[0xB]; // 0x007D
    float velOffset; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float stackPower; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float velRotOffset; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    Vector3 _stackBend; // 0x0094
    uint8_t pad_0095[0xB]; // 0x0095
    float stackBendLerpSpeed; // 0x00A0

    // Methods
    void OnInitializeBehaviour();
    void OnEntityCreated();
    void OnUpdatePresentationLate();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class PlayerLiquidTrailEffectsVisual : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ParticleSystem[][] trailParticles; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerEffects* playerEffects; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float trailAmount; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float trailDecaySpeed; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    Color color; // 0x0068

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerScrubber : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    Entity _currentlyScrubbing; // 0x0098
    uint8_t pad_0099[0x1F]; // 0x0099
    Entity _syncIsCurrentlyScrubbingWithBox; // 0x00B8
    uint8_t pad_00B9[0x1F]; // 0x00B9
    Entity _serverCurrentScrubbing; // 0x00D8
    uint8_t pad_00D9[0x1F]; // 0x00D9
    int32_t scrubbingVehicleSpeedPercentage; // 0x00F8

    // Methods
    void OnUpdateSimulation();
    void CheckStopScrubbing();
    bool IsScrubbing(int32_t speedPercentage);
    void CmdStartScrubbing(Entity target);
    void CmdStopScrubbing();
    void ServerStopScrubbing();
    void OnServerOwnerDisconnecting();
    void .ctor();
    static void .cctor();
    bool Weaved();
    Entity get_Network_syncIsCurrentlyScrubbingWithBox();
    void set_Network_syncIsCurrentlyScrubbingWithBox(Entity value);
    void UserCode_CmdStartScrubbing__Entity(Entity target);
    static void InvokeUserCode_CmdStartScrubbing__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdStopScrubbing();
    static void InvokeUserCode_CmdStopScrubbing(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class PlayerSlipOut : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    float speedThresholdToSlipOut; // 0x0098

    // Methods
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class PlayerStationPlacer : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static Vector3[][] _corners;

    uint8_t pad_0000[0x98]; // 0x0000
    StudioEventEmitter* startPickUpSFX; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Entity _placingBoxStation; // 0x00A0
    uint8_t pad_00A1[0x1F]; // 0x00A1
    Entity _previewEntity; // 0x00C0
    uint8_t pad_00C1[0x1F]; // 0x00C1
    MonoString* _placedAchievement; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Entity <pickUpCandidate>k__BackingField; // 0x00E8
    uint8_t pad_00E9[0x1F]; // 0x00E9
    GameObject* placementVFX; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    float pickUpDistance; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    float pickUpRadius; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    float placeMaxDistanceFromPlayer; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float placeSnapSize; // 0x011C
    uint8_t pad_011D[0x3]; // 0x011D
    bool _isPickingUp; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    int32_t _angleIndex; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    int32_t _inputRotate; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    bool _inputPickingUp; // 0x012C
    bool _inputStartPickUp; // 0x012D
    bool _inputPlace; // 0x012E
    bool _gizmoEnabled; // 0x012F
    Quaternion _gizmoRotation; // 0x0130
    uint8_t pad_0131[0xF]; // 0x0131
    Vector3 _gizmoLocation; // 0x0140
    uint8_t pad_0141[0xB]; // 0x0141
    Vector3 _gizmoSize; // 0x014C
    uint8_t pad_014D[0xB]; // 0x014D
    Vector3 _gizmoPlayerPos; // 0x0158

    // Methods
    Entity get_pickUpCandidate();
    void set_pickUpCandidate(Entity value);
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    void CmdPlaceStation(Entity boxEntity, Vector3 position, Quaternion rotation);
    void RpcPlacementConfirmed(EventReference eventRef, Vector3 position);
    void CmdStartPickingUp(Entity stationEntity);
    void CmdStopPickingUp(Entity stationEntity);
    bool CanPlaceStation(Entity boxEntity, Vector3 playerPos, Vector3 placeDir, Quaternion rotation, Vector3 placementPos);
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_CmdPlaceStation__Entity__Vector3__Quaternion(Entity boxEntity, Vector3 position, Quaternion rotation);
    static void InvokeUserCode_CmdPlaceStation__Entity__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlacementConfirmed__EventReference__Vector3(EventReference eventRef, Vector3 position);
    static void InvokeUserCode_RpcPlacementConfirmed__EventReference__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdStartPickingUp__Entity(Entity stationEntity);
    static void InvokeUserCode_CmdStartPickingUp__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdStopPickingUp__Entity(Entity stationEntity);
    static void InvokeUserCode_CmdStopPickingUp__Entity(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
struct StationData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool hasSpawnedBox; // 0x0010
};

// Namespace: <global>
class IStation
{
public:

    // Methods
    void ServerPlaced();
    void ServerIsBeingPickedUp();
};

// Namespace: <global>
class PlayerStress : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    VehicleController* vc; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayerEffects* playerEffects; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float stressDecayCooldown; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float stressDecayRate; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float stressCrashOutDuration; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float stressBumpAddAmount; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float crashOutInvulnerableDuration; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float _syncStressValue; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float _syncStressNormalizedValue; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool _syncCrashingOut; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float _localPlayerStressRate; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    Timer _localPlayerTimer; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    Timer _localInvulTimer; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    bool syncInvulnerable; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t <crashOutCount>k__BackingField; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t <shiftCrashOutCount>k__BackingField; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    ShakeStrength collisionShakeStrength; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    EventReference crashOutSfx; // 0x00E4
    uint8_t pad_00E5[0x13]; // 0x00E5
    EventInstance _crashOutSfxInstance; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    EventReference crashoutVO; // 0x0100
    uint8_t pad_0101[0xF]; // 0x0101
    bool _pauseDecay; // 0x0110

    // Methods
    float get_stressNormalizedValue();
    bool get_crashingOut();
    int32_t get_crashOutCount();
    void set_crashOutCount(int32_t value);
    int32_t get_shiftCrashOutCount();
    void set_shiftCrashOutCount(int32_t value);
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnUpdatePresentationEarly();
    void RequestBumpStress();
    void LocalPlayerBumpStress();
    void TutorialPrepareForStress();
    void TutorialFinishedWithStress();
    void ServerBumpStress();
    void RpcBumpStress();
    void RequestAddStress(float value, bool sendEvent);
    void LocalPlayerAddStress(float value, bool sendEvent);
    float LocalPlayerGetStressBarAmount();
    void ServerAddStress(float value, bool sendEvent);
    void RpcAddStress(float value, bool sendEvent);
    void RequestCrashOut();
    void LocalPlayerCrashOut();
    void ServerCrashOut();
    void RpcCrashOut();
    void LocalPlayerAddStressRate(float rate);
    void RequestStopCrashOut();
    void LocalPlayerStopCrashOut();
    void ServerStopCrashOut();
    void RpcStopCrashOut();
    void RequestClearStress();
    void LocalPlayerClearStress();
    void ServerClearStress();
    void RpcClearStress();
    void CmdAddCrashOut();
    void RpcCrashedOut();
    static void StressDevCmd(DevCmdArg[][] args);
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void .ctor();
    bool Weaved();
    float get_Network_syncStressValue();
    void set_Network_syncStressValue(float value);
    float get_Network_syncStressNormalizedValue();
    void set_Network_syncStressNormalizedValue(float value);
    bool get_Network_syncCrashingOut();
    void set_Network_syncCrashingOut(bool value);
    bool get_NetworksyncInvulnerable();
    void set_NetworksyncInvulnerable(bool value);
    void UserCode_RpcBumpStress();
    static void InvokeUserCode_RpcBumpStress(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcAddStress__Single__Boolean(float value, bool sendEvent);
    static void InvokeUserCode_RpcAddStress__Single__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcCrashOut();
    static void InvokeUserCode_RpcCrashOut(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcStopCrashOut();
    static void InvokeUserCode_RpcStopCrashOut(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcClearStress();
    static void InvokeUserCode_RpcClearStress(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdAddCrashOut();
    static void InvokeUserCode_CmdAddCrashOut(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcCrashedOut();
    static void InvokeUserCode_RpcCrashedOut(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct EvLocalPlayerStressAdded
{
public:
};

// Namespace: <global>
class PlayerStressVisual : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t CrashingOut;

    uint8_t pad_0000[0x98]; // 0x0000
    PlayerStress* playerStress; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* collisionStressVFX; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ParticleSystem* sweatingVFX; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    ParticleSystem* crashingOutVFX; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    AnimationCurve* stressScreenEffectCurve; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Transform* playerUITransform; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    float sweatingEmmissionRatio; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    Vector2 sweatingSpeedRange; // 0x00CC
    uint8_t pad_00CD[0x7]; // 0x00CD
    int32_t sweatingStressThreshold; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float stressScreenEffectTime; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float crashingOutEffect; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float crashingOutEffectGrowSpeed; // 0x00E0

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnLocalPlayerStressAdded(EvLocalPlayerStressAdded ev);
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class PlayerUpgrades : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem* vfxSystem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t speedUpVehicleSpeedPercentage; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t nitroChargePercentage; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float blastProtectedStressAddAmount; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float stressBarUpAmount; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float stressDecayCooldownUpgraded; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    int32_t achievementSuperUpgradedCount; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    int32_t _syncUpgrades; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    int32_t <upgradeCount>k__BackingField; // 0x00BC

    // Methods
    int32_t get_upgradeCount();
    void set_upgradeCount(int32_t value);
    bool HasUpgrade(PlayerUpgrade upgrade);
    void ServerSetUpgrade(PlayerUpgrade upgrade);
    void CmdAddUpgrade(PlayerUpgrade upgrade);
    void CmdRemoveUpgrade(PlayerUpgrade upgrade);
    void RpcUpgradeReceived();
    void OnUpdateSimulationEarly();
    static void UpgradeDevCmd(DevCmdArg[][] args);
    void .ctor();
    bool Weaved();
    int32_t get_Network_syncUpgrades();
    void set_Network_syncUpgrades(int32_t value);
    void UserCode_CmdAddUpgrade__PlayerUpgrade(PlayerUpgrade upgrade);
    static void InvokeUserCode_CmdAddUpgrade__PlayerUpgrade(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdRemoveUpgrade__PlayerUpgrade(PlayerUpgrade upgrade);
    static void InvokeUserCode_CmdRemoveUpgrade__PlayerUpgrade(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcUpgradeReceived();
    static void InvokeUserCode_RpcUpgradeReceived(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct PlayerUpgrade
{
public:
    // Static fields
    // static PlayerUpgrade SpeedUp;
    // static PlayerUpgrade Traction;
    // static PlayerUpgrade FireResistance;
    // static PlayerUpgrade StrongGrabbers;
    // static PlayerUpgrade BlastProtection;
    // static PlayerUpgrade NitroChargeUp;
    // static PlayerUpgrade NitroCountUp;
    // static PlayerUpgrade StressDecayUp;
    // static PlayerUpgrade StressAmountUp;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class PlayerUpgradesVisual : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* _container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerUpgrade upgrade; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    ContainerStrategy strategy; // 0x005C

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerVacuum : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static float HEIGHT;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* objectDestroyVFX; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<PlayerVacuum.DestroyCandidate> _serverCandidates; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float vacuumRadius; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float vacuumArcDegrees; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float vacuumMaxTrashForce; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float vacuumMaxBoxForce; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float vacuumMaxPlayerForce; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float vacuumMaxPollenForce; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    Ease vacuumForceEase; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float upwardsHeight; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float destroyForwardDistance; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float destroyRadius; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float destroyDuration; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float destroyPhysicsDrag; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    bool _syncIsCurrentlyVacuuming; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    Vector2 _syncVacuumingPos; // 0x00DC
    uint8_t pad_00DD[0x7]; // 0x00DD
    Vector2 _syncVacuumingFwd; // 0x00E4

    // Methods
    bool get_isCurrentlyVacuuming();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void RpcTrashDestroyed(NetworkConnectionToClient* conn, uint8_t count);
    void OnDrawGizmosSelected();
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_Network_syncIsCurrentlyVacuuming();
    void set_Network_syncIsCurrentlyVacuuming(bool value);
    Vector2 get_Network_syncVacuumingPos();
    void set_Network_syncVacuumingPos(Vector2 value);
    Vector2 get_Network_syncVacuumingFwd();
    void set_Network_syncVacuumingFwd(Vector2 value);
    void UserCode_RpcTrashDestroyed__NetworkConnectionToClient__Byte(NetworkConnectionToClient* conn, uint8_t count);
    static void InvokeUserCode_RpcTrashDestroyed__NetworkConnectionToClient__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class IMiscObject
{
public:

    // Methods
    void ServerIsBeingDestroyed();
    void ServerDestroyedImmediate();
};

// Namespace: <global>
class PlayerVoiceAnimation : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    VoicePlayerState* _voice; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Animator* animator; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    VehicleController* vc; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float headLookSpeed; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float playerVoiceAnimationThreshold; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float playerVoiceLerpSpeed; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float _speechTimer; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float speechMinActiveTimeSeconds; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool isPuppet; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t expressionSpeakLayer; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    int32_t faceSpeakLayer; // 0x00CC

    // Methods
    void OnUpdatePresentationEarly();
    void OnUpdatePresentation();
    void OnUpdatePresentationLate();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class SimplePlayer : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float speed; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    Vector3 _movement; // 0x009C

    // Methods
    void OnUpdatePresentation();
    void OnUpdateSimulation();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class TipTapAssetFolder : public AssetFolder`1
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class TipTapGlobalData : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    TipTapAssetFolder* tipTaps; // 0x0018

    // Methods
    void .ctor();
};

// Namespace: <global>
class TipTapManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    System.Collections.Generic.List<TipTapObject> _available; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<TipTapObject> _availableSeen; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<TipTapObject> _availableUnseen; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<TipTapObject> sharedTipTaps; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.List<TipTapObject> collectedTipTaps; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.List<TipTapObject> liveTipTaps; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    int32_t tipTapsPerShift; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    double _tipTapSeconds; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    double _tipTapSecondsThisShift; // 0x00D8

    // Methods
    void OnStartClient();
    void GenerateCollectedTipTaps();
    void RefreshLiveFeed();
    void RequestShareTipTap(TipTapObject* tipTap);
    void CmdShareTipTap(NetScrobId id, NetworkConnectionToClient* conn);
    void RpcTipTapShared(NetworkConnectionToClient* target, Entity sharer, NetScrobId id);
    void LocalTipTapShared(Entity sharer, NetScrobId id);
    void TestTipTapShared();
    void Like(TipTapObject* tipTap);
    void Seen(TipTapObject* tipTap);
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void ShiftCompleted(bool contractCompleted, bool wonContract);
    void AddToTipTapSeconds(float dt);
    void .ctor();
    bool Weaved();
    void UserCode_CmdShareTipTap__NetScrobId__NetworkConnectionToClient(NetScrobId id, NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdShareTipTap__NetScrobId__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTipTapShared__NetworkConnectionToClient__Entity__NetScrobId(NetworkConnectionToClient* target, Entity sharer, NetScrobId id);
    static void InvokeUserCode_RpcTipTapShared__NetworkConnectionToClient__Entity__NetScrobId(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class TipTapObject : public NetworkScriptableObject
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* username; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* description; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* likeStatId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UnityEngine.Video.VideoClip> videoClips; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Sprite* thumbnail; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t likeCount; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float volume; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int32_t activeIndex; // 0x0050

    // Methods
    void .ctor();
};

// Namespace: <global>
class TipTapPage : public EntityBehaviourBase
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class TipTapPhoneVisual : public AggroManagerBase`1
{
public:
    // Static fields
    // static int32_t Active;
    // static int32_t Share;
    // static int32_t Like;
    // static int32_t Up;
    // static int32_t Down;

    uint8_t pad_0000[0x50]; // 0x0000
    Animator* handAnimator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MeshRenderer* phoneRenderer; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    PlayerStress* _playerStress; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Renderer* handRenderer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Volume* postVolume; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VehicleController* _vehicleController; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Transform* gForceTransform; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    TipTapVideoContainer[][] tipTapVideoContainers; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    AnimationCurve* swipeCurve; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    AnimationCurve* swipeDownFailedCurve; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* timeText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject[][] batteryLevelObjects; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Random _random; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float postVolumeAdaptSpeed; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float gForceAffect; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float gForceAffectMax; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float gForceAffectSpeed; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    bool tiptapOpen; // 0x00C4
    bool swiping; // 0x00C5
    uint8_t pad_00C6[0x2]; // 0x00C6
    int32_t _positionInFeed; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    int32_t currentVideoContainerIndex; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    int32_t tipTapPageHeight; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float swipeTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float failedSwipeTime; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    EventReference swipeSFX; // 0x00DC
    uint8_t pad_00DD[0xF]; // 0x00DD
    EventReference swipeFailSFX; // 0x00EC
    uint8_t pad_00ED[0xF]; // 0x00ED
    EventReference shareSFX; // 0x00FC
    uint8_t pad_00FD[0xF]; // 0x00FD
    EventReference likeSFX; // 0x010C

    // Methods
    void OpenTipTap();
    void CloseTipTap();
    IEnumerator* SwipeCo(int32_t direction);
    IEnumerator* SwipeDownFailedCo();
    void SwipeUp();
    void SwipeDown();
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class TipTapVideoContainer : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t VOLSFX_ID;
    // static int32_t VOLGAME_ID;

    uint8_t pad_0000[0x50]; // 0x0000
    LocalizedText* usernameLoc; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    LocalizedText* descriptionLoc; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TextMeshProUGUI* likeCountTextMeshProUGUI; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    RawImage* screenRawImage; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    RenderTexture* screenRenderTexture; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Texture2D* exampleTexture; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VideoPlayer* videoPlayer; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Transform* likeButton; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Image* likeButtonImage; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Transform* shareButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Image* shareButtonImage; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Color likeButtonUnlikedColor; // 0x00A8
    uint8_t pad_00A9[0xF]; // 0x00A9
    Color likeButtonLikedColor; // 0x00B8
    uint8_t pad_00B9[0xF]; // 0x00B9
    Color shareButtonUnsharedColor; // 0x00C8
    uint8_t pad_00C9[0xF]; // 0x00C9
    Color shareButtonSharedColor; // 0x00D8
    uint8_t pad_00D9[0xF]; // 0x00D9
    float buttonAnimTime; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    Ease buttonEaseIn; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    Ease buttonEaseOut; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float buttonAnimStrength; // 0x00F4

    // Methods
    IEnumerator* ButtonPressCo(Transform* buttonPressed, Image* image, Color originalColor, Color newColor, bool keepColor);
    void PlayLikeAnim();
    void PlayShareAnim();
    void SetUpAndPlay(TipTapObject* tipTapObject);
    void Stop();
    MonoString* GetLikeCountString(int32_t likeCount);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class TitlePlayer : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t PlayerAssigned;

    uint8_t pad_0000[0x50]; // 0x0000
    Animator* animator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* namePlatePrefab; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* namePlate; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    NamePlateUI* _ui; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* namePlateTransform; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    PlayerColorManager* playerColorManager; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Camera* uiCamera; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Camera* mainCamera; // 0x0088

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    Vector2 SetTargetPosition(Vector3 worldPos);
    void OnEntityDestroyed();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class VehicleController : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<UnityEngine.Collider> _colliders;
    // static System.Collections.Generic.List<ILocalPlayerKicked> _localPlayerKicks;
    // static System.Collections.Generic.List<UnityEngine.Material> _materials;
    // static int32_t INVERTREVERSE_SETTING_ID;

    uint8_t pad_0000[0x98]; // 0x0000
    PlayerAnimation* playerAnimation; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Rigidbody* rb; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerEffects* playerEffects; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    BoxCollider* playerCrashCollider; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    PlayerUpgrades* playerUpgrades; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    AnimationCurve* handlingCurve; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    AnimationCurve* coldStorageHandlingCurve; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    NitroController* nitroController; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Collider* kickCollider; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    AnimationCurve* kickLookOutAheadCurve; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    AnimationCurve* kickCurve; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Aggro.Core.ObjectQuery<VehicleController> vehicleQuery; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Transform* _kickColliderTransform; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    GameObject* collisionParticles; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    ParticleSystem* crashoutVfx; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    TrailRenderer[][] trailRenderers; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    ParticleSystem[][] driftParticles; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    Material* skidMaterial; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    Material* skidMaterialIce; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    StudioEventEmitter* reversingSfxEmitter; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    StudioEventEmitter* slipOutSFX; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    float reverseVelocityThreshold; // 0x0140
    uint8_t pad_0141[0x3]; // 0x0141
    float playerCrashSpeedThreshold; // 0x0144
    uint8_t pad_0145[0x3]; // 0x0145
    float playerCrashOutDirChangeDebounce; // 0x0148
    uint8_t pad_0149[0x3]; // 0x0149
    float minSteeringInputToDrift; // 0x014C
    uint8_t pad_014D[0x3]; // 0x014D
    float minDriftSteeringAngleDeg; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    float minSpeedToDrift; // 0x0154
    uint8_t pad_0155[0x3]; // 0x0155
    float minDriftInputToDrift; // 0x0158
    uint8_t pad_0159[0x3]; // 0x0159
    float gasPower; // 0x015C
    uint8_t pad_015D[0x3]; // 0x015D
    float brakePower; // 0x0160
    uint8_t pad_0161[0x3]; // 0x0161
    float maxSpeedForward; // 0x0164
    uint8_t pad_0165[0x3]; // 0x0165
    float maxSpeedReverse; // 0x0168
    uint8_t pad_0169[0x3]; // 0x0169
    float drag; // 0x016C
    uint8_t pad_016D[0x3]; // 0x016D
    float coldStorageDrag; // 0x0170
    uint8_t pad_0171[0x3]; // 0x0171
    float coldStorageDragWithChains; // 0x0174
    uint8_t pad_0175[0x3]; // 0x0175
    float turnSpeed; // 0x0178
    uint8_t pad_0179[0x3]; // 0x0179
    float driftTurnSpeed; // 0x017C
    uint8_t pad_017D[0x3]; // 0x017D
    float driftTurnMultiplier; // 0x0180
    uint8_t pad_0181[0x3]; // 0x0181
    float driftTurnOutStrength; // 0x0184
    uint8_t pad_0185[0x3]; // 0x0185
    float turnTractionRecoverySpeed; // 0x0188
    uint8_t pad_0189[0x3]; // 0x0189
    float groundTractionRecoverySpeed; // 0x018C
    uint8_t pad_018D[0x3]; // 0x018D
    float gasSteeringMaxDeg; // 0x0190
    uint8_t pad_0191[0x3]; // 0x0191
    float reverseSteeringMinDegForward; // 0x0194
    uint8_t pad_0195[0x3]; // 0x0195
    float reverseSteeringMinDegReverse; // 0x0198
    uint8_t pad_0199[0x3]; // 0x0199
    Vector2 kickForce; // 0x019C
    uint8_t pad_019D[0x7]; // 0x019D
    float kickForce2StackHighMultiplier; // 0x01A4
    uint8_t pad_01A5[0x3]; // 0x01A5
    float kickForce3StackHighMultiplier; // 0x01A8
    uint8_t pad_01A9[0x3]; // 0x01A9
    float kickForce4StackHighMultiplier; // 0x01AC
    uint8_t pad_01AD[0x3]; // 0x01AD
    float kickForceUpwardsModifierDegrees; // 0x01B0
    uint8_t pad_01B1[0x3]; // 0x01B1
    float kickMaxSpeed; // 0x01B4
    uint8_t pad_01B5[0x3]; // 0x01B5
    float kickMaxLookOutAhead; // 0x01B8
    uint8_t pad_01B9[0x3]; // 0x01B9
    float kickVehicleSpeedMultiplier; // 0x01BC
    uint8_t pad_01BD[0x3]; // 0x01BD
    float kickVehicleSpeedSlowsPlayerMultiplier; // 0x01C0
    uint8_t pad_01C1[0x3]; // 0x01C1
    float kickDebounce; // 0x01C4
    uint8_t pad_01C5[0x3]; // 0x01C5
    float kickForceActivationThreshold; // 0x01C8
    uint8_t pad_01C9[0x3]; // 0x01C9
    Vector3 gForce; // 0x01CC
    uint8_t pad_01CD[0xB]; // 0x01CD
    Vector3 _previousVelocity; // 0x01D8
    uint8_t pad_01D9[0xB]; // 0x01D9
    ControlType _controlType; // 0x01E4
    uint8_t pad_01E5[0x3]; // 0x01E5
    Vector3 _lastPosition; // 0x01E8
    uint8_t pad_01E9[0xB]; // 0x01E9
    float <distanceDrifted>k__BackingField; // 0x01F4
    uint8_t pad_01F5[0x3]; // 0x01F5
    VehicleInput input; // 0x01F8
    uint8_t pad_01F9[0x17]; // 0x01F9
    Vector2 initialSteerInputDir; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    float travelSign; // 0x0218
    uint8_t pad_0219[0x3]; // 0x0219
    float driftSign; // 0x021C
    uint8_t pad_021D[0x3]; // 0x021D
    bool drifting; // 0x0220
    bool wasDrifting; // 0x0221
    bool trailsEnabled; // 0x0222
    uint8_t pad_0223[0x1]; // 0x0223
    float turnTraction; // 0x0224
    uint8_t pad_0225[0x3]; // 0x0225
    float groundTraction; // 0x0228
    uint8_t pad_0229[0x3]; // 0x0229
    bool coldStorage; // 0x022C
    uint8_t pad_022D[0x3]; // 0x022D
    EventReference engineRef; // 0x0230
    uint8_t pad_0231[0xF]; // 0x0231
    EventReference engineUpgradedRef; // 0x0240
    uint8_t pad_0241[0xF]; // 0x0241
    EventReference skrrNoiseRef; // 0x0250
    uint8_t pad_0251[0xF]; // 0x0251
    EventReference skrrNoiseIceRef; // 0x0260
    uint8_t pad_0261[0xF]; // 0x0261
    bool syncReversing; // 0x0270
    bool _crashingOut; // 0x0271
    uint8_t pad_0272[0x2]; // 0x0272
    float crashoutMaxSpeed; // 0x0274
    uint8_t pad_0275[0x3]; // 0x0275
    float crashoutTurnSpeed; // 0x0278
    uint8_t pad_0279[0x3]; // 0x0279
    Vector2 crashoutRandomDirTimeRangeSec; // 0x027C
    uint8_t pad_027D[0x7]; // 0x027D
    float crashoutCoworkerVisionRange; // 0x0284
    uint8_t pad_0285[0x3]; // 0x0285
    float _crashoutRandomDirTimer; // 0x0288
    uint8_t pad_0289[0x3]; // 0x0289
    Vector3 _crashoutRandomDir; // 0x028C
    uint8_t pad_028D[0xB]; // 0x028D
    bool _crashoutForward; // 0x0298
    uint8_t pad_0299[0x3]; // 0x0299
    Timer _crashoutDirChangeTimer; // 0x029C
    uint8_t pad_029D[0x3]; // 0x029D
    bool slippingOutSync; // 0x02A0
    uint8_t pad_02A1[0x3]; // 0x02A1
    float _slippingTimer; // 0x02A4
    uint8_t pad_02A5[0x3]; // 0x02A5
    float minSlippingTimeSeconds; // 0x02A8
    uint8_t pad_02A9[0x3]; // 0x02A9
    float minSlipoutExitVelocity; // 0x02AC
    uint8_t pad_02AD[0x3]; // 0x02AD
    float slipOutDrag; // 0x02B0
    uint8_t pad_02B1[0x3]; // 0x02B1
    float slipOutTurnSpeed; // 0x02B4
    uint8_t pad_02B5[0x3]; // 0x02B5
    Vector3 velocitySync; // 0x02B8
    uint8_t pad_02B9[0xB]; // 0x02B9
    Vector3 previousFoward; // 0x02C4
    uint8_t pad_02C5[0xB]; // 0x02C5
    float timeAtLastCollision; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    EventInstance engineInstance; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    EventInstance engineUpgradedInstance; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    EventInstance skrrNoiseInstance; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    EventInstance skrrNoiseIceInstance; // 0x02F0

    // Methods
    float get_distanceDrifted();
    void set_distanceDrifted(float value);
    Vector3 GetSteeringInput();
    float GetTurnDirForVisual();
    float GetAccelerationInput();
    float GetBrakeInput();
    float GetDriftInput();
    bool CheckForDrifting();
    float GetCrashoutAcceleration();
    Vector3 GetCrashoutSteering();
    float SetTurnTraction();
    float GetGroundTraction();
    void OnDriftStart();
    void OnDriftStop();
    void ApplySteering();
    void ApplyAcceleration();
    void ApplyBrake();
    void OnUpdatePresentation();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnStartLocalPlayer();
    void OnUpdateSimulationEarly();
    void OnUpdateSimulation();
    void OnUpdateSimulationLate();
    void UpdateKickForce();
    void CmdAddKickForce(Entity e, Vector3 force, Vector3 position);
    void RpcTakeForce(Vector3 force);
    void RpcSlipOut(bool isBananaSlip);
    void RequestSlipOut(bool isBananaSlip);
    void LocalPlayerSlipOut(bool isBananaSlip);
    void LocalPlayerTakeForce(Vector3 force);
    void CrashingOut();
    void CrashingOutFinished();
    void OnCollisionEnter(Collision* collision);
    void .ctor();
    static void .cctor();
    bool Weaved();
    bool get_NetworktrailsEnabled();
    void set_NetworktrailsEnabled(bool value);
    bool get_NetworksyncReversing();
    void set_NetworksyncReversing(bool value);
    bool get_NetworkslippingOutSync();
    void set_NetworkslippingOutSync(bool value);
    Vector3 get_NetworkvelocitySync();
    void set_NetworkvelocitySync(Vector3 value);
    void UserCode_CmdAddKickForce__Entity__Vector3__Vector3(Entity e, Vector3 force, Vector3 position);
    static void InvokeUserCode_CmdAddKickForce__Entity__Vector3__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcTakeForce__Vector3(Vector3 force);
    static void InvokeUserCode_RpcTakeForce__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcSlipOut__Boolean(bool isBananaSlip);
    static void InvokeUserCode_RpcSlipOut__Boolean(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ILocalPlayerKicked
{
public:

    // Methods
    void OnLocalPlayerKicked(Entity player);
};

// Namespace: <global>
class WarehouseSprinklerRainEffect : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    EmissionModule _emission; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class Billboard : public EntityBehaviourBase
{
public:

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class CameraRenderTextureFeature : public ScriptableRendererFeature
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    CameraRenderTextureRenderPass* _pass; // 0x0020

    // Methods
    void Create();
    void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
    void Dispose(bool disposing);
    void .ctor();
};

// Namespace: <global>
class ClothSimCollisionHandler : public EntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x50]; // 0x0000
    Cloth* cloth; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    BoxCollider* bc; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ClothSphereColliderPair[][] _pairs; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    LayerMask layerMask; // 0x0068

    // Methods
    void OnUpdateSimulation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class EaseTransformOnEnable : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float timeSeconds; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    Ease ease; // 0x0054

    // Methods
    void OnEntityCreated();
    IEnumerator* Grow();
    void .ctor();
};

// Namespace: <global>
class EaseUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image* fadeImage; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    LayoutElement* layoutElement; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Ease ease; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float durationSec; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    bool startHidden; // 0x0068
    bool transitioning; // 0x0069
    bool blorb; // 0x006A
    bool visible; // 0x006B
    float animSpeed; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float animStrength; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float _animTime; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    bool show; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float delay; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float _timer; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float _fadeImageOriginalOpacity; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    bool useUnscaledDeltaTime; // 0x0088

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void EaseIn();
    IEnumerator* EaseInCo();
    IEnumerator* EaseOutCo();
    void EaseOut();
    void .ctor();
};

// Namespace: <global>
class FadeManager : public MonoBehaviour
{
public:
    // Static fields
    // static float defaultFadeTime;
    // static FadeManager* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Image[][] fadeImages; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Canvas* canvas; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    StudioEventEmitter* fadeControlEmitter; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Action* _callback; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Ease ease; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    bool busy; // 0x0044

    // Methods
    void Awake();
    void OnDestroy();
    void OnSceneLoaded(Scene scene, LoadSceneMode mode);
    void FadeIn(float fadeTimeSec);
    void FadeOut(float fadeTimeSec);
    IEnumerator* FadeInInternalCo(float fadeTimeSec);
    IEnumerator* FadeOutInternalCo(float fadeTimeSec);
    static void SetFaded();
    static void SetUnfaded();
    static IEnumerator* FadeInCo();
    static IEnumerator* FadeOutCo();
    static bool IsFaded();
    void .ctor();
};

// Namespace: <global>
class InitializeRendererFeaturePass : public ScriptableRendererFeature
{
public:
    // Static fields
    // static int32_t UNSCALED_TIME;


    // Methods
    void Create();
    void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class InputIconText : public GlobalScriptableObject`1
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    System.Collections.Generic.List<InputIconText.InputActionIconSet> inputActionIconSets; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,InputIconText.InputActionIconSet> inputActionIcons; // 0x0020

    // Methods
    System.Collections.Generic.Dictionary<System.String,InputIconText.InputActionIconSet> GetInputActionIconSets();
    void RebuildDictionary();
    void OnBeforeSerialize();
    void OnAfterDeserialize();
    void .ctor();
};

// Namespace: <global>
class InputIconTextHandler : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    MonoString* _previousText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MonoString* text; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    MonoString* _gamePadCache; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    MonoString* _keyboardCache; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    InputMode _previousInputMode; // 0x0070

    // Methods
    void OnUpdatePresentation();
    void OnValidate();
    void OnEntityCreated();
    void UpdateTextMesh();
    void UpdateTextCaches();
    MonoString* GetCompiledActionString(MonoString* actionString);
    MonoString* GetCompiledIconString(MonoString* iconString, MonoString* modeString);
    void .ctor();
};

// Namespace: <global>
class LockedInVisual : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t LockedIn;


    // Methods
    void OnUpdatePresentation();
    void OnEntityDestroyed();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class MaterialPropertyManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MaterialPropertyBlock* mpb; // 0x0020

    // Methods
    void Awake();
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class MaterialUtil
{
public:
    // Static fields
    // static MaterialPropertyBlock* _block;
    // static int32_t MAIN_COLOR_ID;


    // Methods
    static void Initialize();
    static void SetPropertyBlockFloat(Renderer* meshRenderer, MonoString* name, float value);
    static void SetPropertyBlockFloat(Renderer* meshRenderer, int32_t nameId, float value);
    static void SetPropertyBlockInt(Renderer* meshRenderer, MonoString* name, int32_t value);
    static void SetPropertyBlockInt(Renderer* meshRenderer, int32_t nameId, int32_t value);
    static void SetPropertyBlockVector(Renderer* meshRenderer, MonoString* name, Vector3 value);
    static void SetPropertyBlockVector(Renderer* meshRenderer, int32_t nameId, Vector3 value);
    static void SetPropertyBlockVectorArray(Renderer* meshRenderer, MonoString* name, Vector4[][] value);
    static void SetPropertyBlockVectorArray(Renderer* meshRenderer, int32_t nameId, Vector4[][] value);
    static void SetPropertyBlockFloatArray(Renderer* meshRenderer, MonoString* name, Single[][] value);
    static void SetPropertyBlockFloatArray(Renderer* meshRenderer, int32_t nameId, Single[][] value);
    static void SetPropertyBlockColor(Renderer* meshRenderer, MonoString* name, Color value);
    static void SetPropertyBlockColor(Renderer* meshRenderer, int32_t nameId, Color value);
    static void .cctor();
};

// Namespace: <global>
class NotifAnimator : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float lifeTimeSeconds; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float easeInTimeSeconds; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float easeOutTimeSeconds; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    Ease easeIn; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    Ease easeOut; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float _timeAlive; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float delay; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool animate; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    EventReference sfx; // 0x0070

    // Methods
    void OnEntityCreated();
    IEnumerator* AnimateCo();
    void .ctor();
};

// Namespace: <global>
class OrientTransform : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    float speed; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    Vector3 dir; // 0x0054
    uint8_t pad_0055[0xB]; // 0x0055
    Vector3 up; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PostProcessingSettings : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t DEPTHOFFIELD_SETTING_ID;
    // static int32_t BLOOM_SETTING_ID;

    uint8_t pad_0000[0x50]; // 0x0000
    Volume* _volume; // 0x0050

    // Methods
    void OnEntityCreated();
    static void SetDepthOfFieldAllPosts(bool option);
    static void SetBloomAllPosts(bool option);
    void SetDepthOfField(bool option);
    void SetBloom(bool option);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class SetPositionOnEnable : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    bool xPos; // 0x0020
    bool yPos; // 0x0021
    bool zPos; // 0x0022
    uint8_t pad_0023[0x1]; // 0x0023
    Vector3 pos; // 0x0024

    // Methods
    void OnEnable();
    void .ctor();
};

// Namespace: <global>
class SingleBufferFeature : public ScriptableRendererFeature
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Settings* settings; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CustomRenderPass* m_ScriptablePass; // 0x0028

    // Methods
    void Create();
    void AddRenderPasses(ScriptableRenderer* renderer, RenderingData renderingData);
    void Dispose(bool disposing);
    void .ctor();
};

// Namespace: <global>
class UICamera : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t FXAA_SETTING_ID;

    uint8_t pad_0000[0x50]; // 0x0000
    UniversalAdditionalCameraData* _cameraData; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    uint32_t settingVersion; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class VFX : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    PoolableEntityReference _me; // 0x0050
    uint8_t pad_0051[0x37]; // 0x0051
    Transform[][] floorTransforms; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    bool destroySelf; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float destroyAfterSeconds; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float _startTime; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    bool <debug>k__BackingField; // 0x009C

    // Methods
    bool get_debug();
    void set_debug(bool value);
    void OnEntityCreated();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class ContractObject : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    GameObject* randomBoxVisualPrefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MonoString* title; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ShiftOrderObject[][] orders; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MonoString* bigWarehouse; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MonoString* smallWarehouse; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    String[][] bigWarehouses; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    String[][] smallWarehouses; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ContractShift* shift1; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ContractShift* shift2; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ContractShift* shift3; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ContractShift* shift4; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    ContractShift* shift5; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    DeckCard`1[][] shopCards; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Unlock[][] unlocks; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GameObject[][] demoVisualPrefabs; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    ContractType type; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    int32_t bellsRequired; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float modifierMultiplier; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    int32_t randomBoxCount; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float multiplierForOnePlayer; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float multiplierForTwoPlayers; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float multiplierForThreePlayers; // 0x00A8

    // Methods
    bool get_isDemoLocked();
    ContractShift* GetContractShift(int32_t shift);
    float GetPlayerMultiplier(int32_t playerCount);
    void .ctor();
};

// Namespace: <global>
struct ContractType
{
public:
    // Static fields
    // static ContractType Explicit;
    // static ContractType Random;
    // static ContractType DemoLocked;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ContractShift
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Order[][] orders; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Inbound[][] inbound; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Outbound[][] outbound; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ContractObject* owner; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float truckPatienceDuration; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t payOutAmount; // 0x0034

    // Methods
    int32_t GetInboundInventoryCount(float multiplier);
    int32_t GetOutboundInventoryCount(float multiplier);
    int32_t GetTotalPayout(float multiplier);
    int32_t GetTotalPayout(float multiplier, int32_t outboundCount);
    void .ctor();
};

// Namespace: <global>
class Shop : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<ShopItemObject,System.Int32> _current;
    // static System.Collections.Generic.List<ShopHolder> _holders;
    // static System.Collections.Generic.Queue<ShopItemObject> _required;
    // static System.Collections.Generic.List<ShopHolder> _saleCandidates;

    uint8_t pad_0000[0x98]; // 0x0000
    ShopInventoryObject* inventory; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.Dictionary<ShopItemObject,System.Int32> _purchased; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.HashSet<ShopItemObject> _extraAddedSet; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Aggro.Core.Deck<Shop.ShopCard> _serverDeck; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Aggro.Core.Deck<ShopItemObject> _serverRandomDeck; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    int32_t _serverStockGenCount; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    int32_t _serverSeed; // 0x00C4

    // Methods
    void OnEntityCreated();
    void ServerGenerateShopStock();
    bool CanAddShopItem(ShopItemObject* candidate, int32_t holderIndex);
    void ServerItemPurchased(ShopItemObject* item);
    void ServerReroll();
    void .ctor();
    static void .cctor();
    bool Weaved();
};

// Namespace: <global>
class ShopHolder : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static StringBuilder* _builder;

    uint8_t pad_0000[0x98]; // 0x0000
    Transform* itemContainer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Collider* trigger; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Transform* spawnPos; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Transform* spawnThrowDir; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* transactionVFX; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* purchaseVFX; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    FloaterUI* _floaterUI; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Action<ShopItemObject> _onPurchased; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Entity _shopItemEntity; // 0x00D8
    uint8_t pad_00D9[0x1F]; // 0x00D9
    GameObject* rerollVFX; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    int32_t id; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float saleMultiplier; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float spawnThrowForce; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    NetScrobId _syncItem; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    bool _syncOnSale; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    int32_t _cachedCost; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    EventReference purchaseDeniedSfx; // 0x0118

    // Methods
    bool get_OnSale();
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdatePresentationEarly();
    int32_t GetCost(int32_t cost);
    void OnUpdatePresentation();
    void ServerSetItem(ShopItemObject* item, System.Action<ShopItemObject> onPurchased);
    void ServerSetOnSale();
    bool TryGetShopItem(ShopItemObject* item);
    void RequestPurchase();
    bool LocalPlayerCanPurchase();
    void CmdRequestPurchase(NetworkConnectionToClient* conn);
    void RpcItemPurchased(int32_t price);
    void RpcRequestDenied(NetworkConnectionToClient* target);
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void OnShopReroll(EvShopReroll evShopReroll);
    void .ctor();
    static void .cctor();
    bool Weaved();
    NetScrobId get_Network_syncItem();
    void set_Network_syncItem(NetScrobId value);
    bool get_Network_syncOnSale();
    void set_Network_syncOnSale(bool value);
    void UserCode_CmdRequestPurchase__NetworkConnectionToClient(NetworkConnectionToClient* conn);
    static void InvokeUserCode_CmdRequestPurchase__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcItemPurchased__Int32(int32_t price);
    static void InvokeUserCode_RpcItemPurchased__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcRequestDenied__NetworkConnectionToClient(NetworkConnectionToClient* target);
    static void InvokeUserCode_RpcRequestDenied__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class ShopHolderTrigger : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ShopHolder* <holder>k__BackingField; // 0x0050

    // Methods
    ShopHolder* get_holder();
    void set_holder(ShopHolder* value);
    void OnInitializeBehaviour();
    void .ctor();
};

// Namespace: <global>
class ShopInventoryObject : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    DeckCard`1[][] cards; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t inventoryDeckSize; // 0x0020

    // Methods
    Aggro.Core.Deck<ShopItemObject> CreateRandomDeck(int32_t seed);
    void .ctor();
};

// Namespace: <global>
class ShopItemObject : public NetworkScriptableObject
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MonoString* itemName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MonoString* itemDescription; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Sprite* icon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* shopItemPrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* worldItemPrefab; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ShopItemType type; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t cost; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool uniqueInStock; // 0x0050
    bool limitTotalPurchases; // 0x0051
    uint8_t pad_0052[0x2]; // 0x0052
    int32_t limitCount; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool hasRequiredNumberInShop; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t requiredNumberInShop; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t onPurchaseAddCount; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    PlayerUpgrade upgrade; // 0x0064

    // Methods
    void .ctor();
};

// Namespace: <global>
struct ShopItemType
{
public:
    // Static fields
    // static ShopItemType Station;
    // static ShopItemType Upgrade;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ShopItemUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RectTransform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* nameText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TextMeshProUGUI* descriptionText; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float easeSpeed; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Ease easeIn; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    Ease easeOut; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    bool viewing; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float currentScale; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float scale; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    Vector3 targetWorldPos; // 0x0080
    uint8_t pad_0081[0xB]; // 0x0081
    Vector3 offset; // 0x008C

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class BeltUtil
{
public:
    // Static fields
    // static float RADIUS;
    // static RaycastHit[][] _hits;


    // Methods
    static Vector3 GetMovingSideWalkVelocity(Vector3 position);
    static void .cctor();
};

// Namespace: <global>
class Booststrip : public EntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static float DEBOUNCE_DURATION;
    // static float VELOCITY_CHECK;
    // static float VELOCITY_CHECK_SQR;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x50]; // 0x0000
    BoxCollider* boostBounds; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* _transform; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<Booststrip.BoxEntry> _boxEntries; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.HashSet<Aggro.Core.Entity> _boxSet; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float boxForceAmount; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float boxForceUpwardsModifier; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    Bounds _bounds; // 0x0078
    uint8_t pad_0079[0x17]; // 0x0079
    Timer _debouncePlayerTimer; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    bool <tutorialBoostStripUsed>k__BackingField; // 0x0094

    // Methods
    bool get_tutorialBoostStripUsed();
    void set_tutorialBoostStripUsed(bool value);
    void OnEntityCreated();
    void OnUpdateSimulation();
    void BoostNonPlayerEntity(Entity e, Vector3 force);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ConveyorBelt : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ConveyorBeltMovement movement; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float forwardsSpeed; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float rotationClockwiseSpeedDegrees; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    bool drawGizmos; // 0x005C
    bool disableInBreakRoom; // 0x005D

    // Methods
    void OnUpdateSimulation();
    void OnDrawGizmos();
    void .ctor();
};

// Namespace: <global>
class SprinklerManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* puddlePrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Aggro.Core.ObjectQuery<IFlammable> _query; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<UnityEngine.Vector3> _serverPuddleLocs; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    NetworkConnectionToClient* _serverCauser; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float timeUntilFireOut; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float timeUntilSprinklersDone; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float puddleDensity; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float puddleShrinkGridSpaceDistance; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float puddlePositionNoise; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float puddleExclusionCheckRadius; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    State _syncState; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    Timer _serverTimer; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t _serverPuddleSpawnCount; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t _serverPuddleTotalCount; // 0x00DC

    // Methods
    State get_state();
    void OnEntityStart();
    void OnUpdateSimulation();
    void ServerTurnOn(NetworkConnectionToClient* conn);
    void RpcFiresExtinguished(NetworkConnectionToClient* conn, int16_t count);
    void .ctor();
    bool Weaved();
    State get_Network_syncState();
    void set_Network_syncState(State value);
    void UserCode_RpcFiresExtinguished__NetworkConnectionToClient__Int16(NetworkConnectionToClient* conn, int16_t count);
    static void InvokeUserCode_RpcFiresExtinguished__NetworkConnectionToClient__Int16(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Station : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<GrabbableHolder> _holders;

    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* boxPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* packUpShakeTransform; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* pickupVFX; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* pickUpWobbleSFX; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    float pickUpDuration; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    Vector3 shakeAxis; // 0x00BC
    uint8_t pad_00BD[0xB]; // 0x00BD
    float packUpShakeSpeed; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float packUpShakeIntensity; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float visualScalar; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float scaleThreshold; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    Ease shrinkEase; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    uint8_t _syncPickUpCount; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float _syncNormalizedTime; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    bool _syncCanBePickedUp; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    Timer _serverTimer; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    bool _wasBeingPickedUp; // 0x00EC

    // Methods
    bool get_canBePickedUp();
    bool get_isBeingPickedUp();
    float get_normalizedPickUpTime();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void ServerIncrementPickUp();
    void ServerDecrementPickUp();
    void ServerSetUnpickable();
    void .ctor();
    static void .cctor();
    bool Weaved();
    uint8_t get_Network_syncPickUpCount();
    void set_Network_syncPickUpCount(uint8_t value);
    float get_Network_syncNormalizedTime();
    void set_Network_syncNormalizedTime(float value);
    bool get_Network_syncCanBePickedUp();
    void set_Network_syncCanBePickedUp(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class StationBox : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* boxPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* boxDestructionVFX; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Entity _serverBox; // 0x00A8
    uint8_t pad_00A9[0x1F]; // 0x00A9
    bool destroyAndRecreate; // 0x00C8
    bool spawnImmediatelyWhenDestroyed; // 0x00C9

    // Methods
    void ServerPlaced();
    void ServerIsBeingPickedUp();
    void OnEntityDestroyed();
    void OnUpdateSimulation();
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void ServerSpawnBox();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class StationBoxDestroyer : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Destroying;

    uint8_t pad_0000[0x98]; // 0x0000
    Animator* animator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* poofVFX; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Transform* poofVFXTransform; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float destroyDuration; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    int32_t moneyGainedOnDestroy; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float _syncNormalizedTime; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    DestroyerState _syncState; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    Timer _serverTimer; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    EventReference pressSfx; // 0x00C4

    // Methods
    float get_normalizedTime();
    DestroyerState get_state();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    void RpcTrashDestroyed();
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_Network_syncNormalizedTime();
    void set_Network_syncNormalizedTime(float value);
    DestroyerState get_Network_syncState();
    void set_Network_syncState(DestroyerState value);
    void UserCode_RpcTrashDestroyed();
    static void InvokeUserCode_RpcTrashDestroyed(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class StationEMP : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float radius; // 0x0098

    // Methods
    void ServerPrevented(Vector3 preventPosition);
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class StationPreview : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Renderer[][] renderers; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Color valid; // 0x0058
    uint8_t pad_0059[0xF]; // 0x0059
    Color invalid; // 0x0068

    // Methods
    void SetPlacement(Vector3 position, Quaternion rotation, bool isValid);
    void .ctor();
};

// Namespace: <global>
class StationShelf : public EntityBehaviourBase
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class StationSprinkler : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<IFlammable> _flammables;
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x98]; // 0x0000
    ParticleSystem* activeParticleSystem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* puddlePrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float detectionRadius; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float putOutRadius; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float warmUpDuration; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float preventingDuration; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Vector2 puddleMinMaxRadius; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    int32_t puddleCount; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    SprinklerPreventionState _syncState; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    Timer _serverTimer; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    int32_t _serverPuddleCount; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    int32_t _serverPutOutCount; // 0x00D0

    // Methods
    SprinklerPreventionState get_state();
    void OnUpdateSimulation();
    void RpcFiresPutOut(uint8_t count);
    void OnUpdatePresentation();
    void ServerGetOnFireBoxes(System.Collections.Generic.List<IFlammable> entities, float radius);
    void .ctor();
    static void .cctor();
    bool Weaved();
    SprinklerPreventionState get_Network_syncState();
    void set_Network_syncState(SprinklerPreventionState value);
    void UserCode_RpcFiresPutOut__Byte(uint8_t count);
    static void InvokeUserCode_RpcFiresPutOut__Byte(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class StationTeleporter : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static int32_t ScreenParamID;
    // static int32_t Teleport;

    uint8_t pad_0000[0x98]; // 0x0000
    MeshRenderer* screenRenderer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Animator* animator; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ParticleSystem[][] particles; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    StudioEventEmitter* loopSfx; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    EventReference teleportSfx; // 0x00B8

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    bool HasBoxes();
    void OnUpdatePresentationLate();
    void RpcOnTeleport();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcOnTeleport();
    static void InvokeUserCode_RpcOnTeleport(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
class StationTeleporterManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;

    uint8_t pad_0000[0x98]; // 0x0000
    System.Collections.Generic.List<StationTeleporter> _warehouseTeleporters; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<StationTeleporter> _breakroomTeleporters; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float teleportDuration; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float _syncNormalizedTeleportTime; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    State _syncState; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    Timer _serverTimer; // 0x00B4

    // Methods
    float get_normalizedTeleportTime();
    State get_state();
    void OnUpdateSimulation();
    void ServerProcessTeleportation(System.Collections.Generic.List<StationTeleporter> teleporters);
    void OnUpdatePresentation();
    void ServerAddStation(StationTeleporter* teleporter);
    void ServerRemoveStation(StationTeleporter* teleporter);
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_Network_syncNormalizedTeleportTime();
    void set_Network_syncNormalizedTeleportTime(float value);
    State get_Network_syncState();
    void set_Network_syncState(State value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class Title : public MonoBehaviour
{
public:
    // Static fields
    // static bool _checkedPendingInvite;

    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* startingSelected; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* versionText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* devContainer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Button* devPlatformHostButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    TMP_InputField* devJoinInputField; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    TextMeshProUGUI* devGlobalIpText; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    TextMeshProUGUI* devLocalIpText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EntityWorld* _world; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* _prevSelectedObject; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Button* hostGameButton; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Button* joinGameButton; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Button[][] releaseButtons; // 0x0078

    // Methods
    void Start();
    IEnumerator* StartCo();
    void Update();
    void LateUpdate();
    void OnDestroy();
    void OnSinglePlayer();
    void OnGameHost();
    void OnGameJoin();
    void OnDevHost();
    void OnDevPlatformHost();
    void OnDevJoin();
    void OnTutorial();
    void OnQuitGame();
    IEnumerator* SinglePlayerCo();
    IEnumerator* HostCo(bool isPlatformHost);
    IEnumerator* DevJoinCo();
    IEnumerator* TutorialCo();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class BoxSafeZone : public EntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;

    uint8_t pad_0000[0x50]; // 0x0000
    Transform* _transform; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulationEarly();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ContractUtil
{
public:

    // Methods
    static int32_t GetOutboundMaxNumberOfFrames(Outbound[][] outbound);
    static int32_t GetTruckCount(Outbound[][] outbound);
};

// Namespace: <global>
class InboundBay : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static Collider[][] _colliders;
    // static System.Collections.Generic.List<InboundBay.Order> _orderList;

    uint8_t pad_0000[0x98]; // 0x0000
    Transform* inboundTransform; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Transform* notifTransform; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.Queue<InboundBay.Order> _orders; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    float inboundCheckRadius; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    BayState <serverState>k__BackingField; // 0x00B4

    // Methods
    BayState get_serverState();
    void set_serverState(BayState value);
    void OnUpdateSimulation();
    void ServerBringInOrders(System.Collections.Generic.List<ShiftOrderObject> orders, int32_t seed);
    void RpcQueueEvInboundArrived();
    void OnDrawGizmos();
    void .ctor();
    static void .cctor();
    bool Weaved();
    void UserCode_RpcQueueEvInboundArrived();
    static void InvokeUserCode_RpcQueueEvInboundArrived(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
};

// Namespace: <global>
struct EvInboundArrived
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 worldPosition; // 0x0010
};

// Namespace: <global>
class Inventory
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<Inventory.Item> _items; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<ShiftOrderObject,System.Int32> _orderToIndex; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Random _random; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t <itemCount>k__BackingField; // 0x0024

    // Methods
    int32_t get_itemCount();
    void set_itemCount(int32_t value);
    void .ctor(int32_t seed);
    void .ctor();
    Inventory* CreateCopy();
    void Add(ShiftOrderObject* order);
    void Remove(ShiftOrderObject* order);
    ShiftOrderObject* RemoveRandom();
    bool TryGetCount(ShiftOrderObject* order, int32_t count);
    bool Has(ShiftOrderObject* order);
    void ClearOrder(ShiftOrderObject* order);
    Item[][] GetItems();
    void GetItems(System.Collections.Generic.List<Inventory.Item> items);
};

// Namespace: <global>
class OutboundBay : public NetworkEntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<GrabbableHolder> _holders;
    // static System.Collections.Generic.List<Aggro.Core.Entity> _entities;
    // static System.Collections.Generic.Dictionary<System.UInt32,System.Int32> _idToCount;
    // static int32_t BAY_OPEN_ID;
    // static int32_t ALARM_ON_ID;
    // static int32_t ACCEPTED_ID;
    // static int32_t Alarm;

    uint8_t pad_0000[0x98]; // 0x0000
    Transform* cameraTargetLocation; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Mirror.SyncDictionary<System.UInt32,OutboundBay.Count> _outboundOrder; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    NetworkConnectionToClient* _serverSender; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<Aggro.Core.Entity> _stacks; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    TruckTimerFloaterUI* _truckTimerFloaterUI; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    MonoString* bayID; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Transform* timerFloaterTarget; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Transform* orderFloaterTarget; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float orderDeniedTimerReduction; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float animationDuration; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    BayState _syncState; // 0x00E0
    bool _syncIsBayOpen; // 0x00E1
    uint8_t pad_00E2[0x2]; // 0x00E2
    float _syncNormalizedStrikeTime; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float _syncSecondsRemaining; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    bool _syncStrikeTimerPaused; // 0x00EC
    bool _syncHasWildCard; // 0x00ED
    uint8_t _syncIncorrectCount; // 0x00EE
    bool _cachedHasWildCard; // 0x00EF
    int32_t _cachedIncorrectCount; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    Timer _serverTimer; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    Timer _serverStrikeTimer; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    Timer _serverPauseTimer; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    uint32_t <version>k__BackingField; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    bool <tutorialOutboundSent>k__BackingField; // 0x0104

    // Methods
    BayState get_state();
    float get_normalizedStrikeTime();
    float get_secondsRemaining();
    int32_t get_secondsRemainingInt();
    bool get_hasWildCard();
    float get_serverSecondsRemaining();
    bool get_strikeTimerPaused();
    uint32_t get_version();
    void set_version(uint32_t value);
    bool get_tutorialOutboundSent();
    void set_tutorialOutboundSent(bool value);
    void OnInitializeBehaviour();
    void OnUpdateSimulation();
    void OnUpdatePresentation();
    bool ServerHasWildCard();
    static int32_t CompareHolders(GrabbableHolder* a, GrabbableHolder* b);
    void OnOrderChanged(Mirror.SyncIDictionary.Operation<System.UInt32,OutboundBay.Count> op, uint32_t k, Count v);
    void GetOutboundOrder(System.Collections.Generic.List<OutboundBay.Order> orders);
    int32_t GetIncorrectBoxCount();
    void ServerSetOutboundOrder(System.Collections.Generic.List<ShiftOrderObject> orders);
    bool ServerIsHandlingOrder();
    void ServerRequestSendOutbound(NetworkConnectionToClient* conn, bool forceCompleted);
    void RPCPlayBonusParticles();
    void ServerDevCmdComplete();
    void ServerSetInteractable(bool interactable);
    void RpcOutboundDeniedTargeted(NetworkConnectionToClient* target);
    void RpcOutboundDenied();
    void RpcOutboundAccepted(int32_t truckCount);
    void ServerSetActivatable(bool activatable);
    void ServerPauseTimer(float duration);
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void .ctor();
    static void .cctor();
    bool Weaved();
    BayState get_Network_syncState();
    void set_Network_syncState(BayState value);
    bool get_Network_syncIsBayOpen();
    void set_Network_syncIsBayOpen(bool value);
    float get_Network_syncNormalizedStrikeTime();
    void set_Network_syncNormalizedStrikeTime(float value);
    float get_Network_syncSecondsRemaining();
    void set_Network_syncSecondsRemaining(float value);
    bool get_Network_syncStrikeTimerPaused();
    void set_Network_syncStrikeTimerPaused(bool value);
    bool get_Network_syncHasWildCard();
    void set_Network_syncHasWildCard(bool value);
    uint8_t get_Network_syncIncorrectCount();
    void set_Network_syncIncorrectCount(uint8_t value);
    void UserCode_RPCPlayBonusParticles();
    static void InvokeUserCode_RPCPlayBonusParticles(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOutboundDeniedTargeted__NetworkConnectionToClient(NetworkConnectionToClient* target);
    static void InvokeUserCode_RpcOutboundDeniedTargeted__NetworkConnectionToClient(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOutboundDenied();
    static void InvokeUserCode_RpcOutboundDenied(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcOutboundAccepted__Int32(int32_t truckCount);
    static void InvokeUserCode_RpcOutboundAccepted__Int32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
struct EvIncorrectOrderSent
{
public:
};

// Namespace: <global>
struct EvCorrectOrderSent
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t numberOfTrucksCompleted; // 0x0010
};

// Namespace: <global>
class TutorialTimerHandler : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TruckTimerFloaterUI* _truckTimerFloaterUI; // 0x0020

    // Methods
    void TestTimerDemo();
    IEnumerator* TutorialStartTimerDemoCo();
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void .ctor();
};

// Namespace: <global>
class WarehouseExclusionZone : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* _t; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool allowRadiusChecking; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnDrawGizmos();
    void RemoveOverlapping(System.Collections.Generic.List<UnityEngine.Vector3> serverSpawnLocs, float exclusionCheckRadius);
    void .ctor();
};

// Namespace: <global>
class WarehouseInclusionZone : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* _t; // 0x0050

    // Methods
    void OnEntityCreated();
    Bounds GetBounds();
    bool IsInBounds(Vector3 worldPos);
    void OnDrawGizmos();
    void .ctor();
};

// Namespace: <global>
class WarehouseManager : public NetworkAggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.List<ShiftOrderObject> _orders1;
    // static float ISSUE_HIT_WAIT_TIME;
    // static int32_t TRUCK_BAY_SLOTS_MAX;
    // static System.Collections.Generic.List<ShiftOrderObject> _orders2;
    // static System.Collections.Generic.List<System.Boolean> _bools;
    // static System.Collections.Generic.Dictionary<ShiftOrderObject,System.Int32> _orderCounts;

    uint8_t pad_0000[0x98]; // 0x0000
    ShiftOrderObject* bingBongOrder; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Inventory* _serverInventory; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.Queue<ShiftOrderObject> _serverDestroyed; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.Dictionary<System.UInt32,ShiftOrderObject> _idToBoxes; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.Queue<WarehouseManager.Step> _serverInboundQueue; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.Queue<WarehouseManager.Step> _serverOutboundQueue; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Aggro.Core.Deck<ShiftOrderObject> _serverInboundDeck; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Aggro.Core.Deck<InboundBay> _serverDeckInboundBay; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Aggro.Core.Deck<OutboundBay> _serverDeckOutboundBay; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Aggro.Core.ObjectQuery<OutboundBay> _outboundQuery; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Collections.Generic.HashSet<ShiftOrderObject> _serverOrdersSeen; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Collections.Generic.List<ShiftOrderObject> _ordersSeen; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    int32_t cardCountPerBay; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float bingBongChance; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    Timer _serverInboundTimer; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    Timer _serverOutboundTimer; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    int32_t _serverInvSeed; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t _serverInboundSeed; // 0x010C
    uint8_t pad_010D[0x3]; // 0x010D
    int32_t _serverInboundCount; // 0x0110
    uint8_t pad_0111[0x3]; // 0x0111
    int32_t _serverOutboundEmissionCount; // 0x0114
    uint8_t pad_0115[0x3]; // 0x0115
    int32_t _serverPlayerCount; // 0x0118
    uint8_t pad_0119[0x3]; // 0x0119
    float timerParam; // 0x011C

    // Methods
    ShiftOrderObject[][] get_ordersSeen();
    int32_t get_serverOutboundEmissionCount();
    bool get_serverIsFinishedEmittingOutbound();
    void OnInitializeBehaviour();
    void OnEntityStart();
    void OnUpdateSimulation();
    void ServerUpdateInbound();
    void ServerUpdateOutbound();
    void ServerPrepareForShift(int32_t shift, int32_t numberOfTrucks, int32_t numberOfBoxesShipped, OrderCount[][] inboundOrders);
    void ServerDevCmdCompleteOutbounds();
    void ServerDevCmdBringOutbound();
    void ServerDevCmdBringInbound();
    void ServerBoxCreated(Entity e);
    void ServerOrderAdded(ShiftOrderObject* order);
    void ServerBoxDestroyed(Entity e);
    void ServerOrderRemoved(ShiftOrderObject* order);
    bool ServerHasOrder(ShiftOrderObject* order);
    void RpcOrderSeen(uint32_t id);
    bool TryGetOrderObject(GameObject* obj, ShiftOrderObject* order);
    void TutorialSetOrders(System.Collections.Generic.List<ShiftOrderObject> orders);
    void AddToOrders(ShiftOrderObject* order);
    void .ctor();
    static void .cctor();
    bool Weaved();
    float get_NetworktimerParam();
    void set_NetworktimerParam(float value);
    void UserCode_RpcOrderSeen__UInt32(uint32_t id);
    static void InvokeUserCode_RpcOrderSeen__UInt32(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class DialogueManager : public AggroManagerBase`1
{
public:
    // Static fields
    // static int32_t Show;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    LocalizedText* localizedText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TextMeshProUGUI* dialogueText; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* portraitIdle; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* portraitTalk; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* portraitNod; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* portraitLaugh; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Animator* animator; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    float timeBetweenCharacters; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float sfxRate; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    EventReference characterSfx; // 0x0098
    uint8_t pad_0099[0xF]; // 0x0099
    EventReference completeSfx; // 0x00A8

    // Methods
    void OnEntityCreated();
    IEnumerator* PlayDialogueCo(DialogueObject* dialogue);
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class DialogueObject : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    String[][] dialogues; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PortraitType[][] portraitTypes; // 0x0020

    // Methods
    void .ctor();
};

// Namespace: <global>
class TutorialContainer : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ContainerType type; // 0x0058

    // Methods
    void OnEntityCreated();
    void CheckShow(ContainerType type);
    void CheckHide(ContainerType type);
    void .ctor();
};

// Namespace: <global>
class TutorialGate : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Open1;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* gateCollider; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Animator* animator; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    FloaterUI* _floaterUI; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool _opened; // 0x0068

    // Methods
    void Open(bool cameraPan);
    void Close();
    void OnUpdatePresentationEarly();
    IEnumerator* OpenCo(bool cameraPan);
    IEnumerator* CloseCo();
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class TutorialGoal : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Show1;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* checkedContainer; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image* timer; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Animator* animator; // 0x0068

    // Methods
    void OnEntityCreated();
    void Show();
    void Hide();
    void Checked();
    void SetTimer(float normalizedValue);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class TutorialManager : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Canvas* canvas; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    DialogueObject* welcomeDialogue; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    DialogueObject* basicControlsMoveForwardDialogue; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    TutorialGoal* basicControlsMoveForwardGoal; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    DialogueObject* basicControlsReverseDialogue; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    TutorialGoal* basicControlsReverseGoal; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    DialogueObject* basicControlsDriftDialogue; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    DialogueObject* basicControlsDriftChargingDialogue; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TutorialGoal* basicControlsDriftGoal; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogueObject* basicControlsNitroDialogue; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TutorialGoal* basicControlsNitroGoal; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogueObject* basicControlsOutroDialogue; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TutorialGate* basicControlGate; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    DialogueObject* stressCollisionPreDialogue; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    TutorialGoal* stressCollisionGoal; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Booststrip* stressBooststrip; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TutorialGate* stressMidGateA; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TutorialGate* stressMidGateB; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    DialogueObject* stressCollisionPostDialogue; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    DialogueObject* stressBarExplainDialogue; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    DialogueObject* stressCrashOutPreDialogue; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    DialogueObject* stressCrashOutPostDialogue; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    DialogueObject* stressOutroDialogue; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    TutorialGate* stressGate; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    GameObject[][] boxStuffBoxes; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    Transform* boxCameraTransform; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    DialogueObject* boxStuffIntroDialogue; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    DialogueObject* boxStuffStackTwoDialogue; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    TutorialGoal* boxStuffStackTwoGoal; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    DialogueObject* boxStuffStackThreeDialogue; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    TutorialGoal* boxStuffStackThreeGoal; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    DialogueObject* boxStuffUnstackDialogue; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    TutorialGoal* boxStuffStackUnstackGoal; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    DialogueObject* boxStuffIncorrectUnstackingDialogue; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    Transform[][] boxStuffRespawnPositions; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    DialogueObject* boxStuffOutroDialogue; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    TutorialGate* boxStuffGate; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    DialogueObject* trucksIntroDialogue; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    DialogueObject* trucksIncomingDialogue; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    DialogueObject* trucksOutgoingDialogue; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    TutorialGoal* trucksGoal; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    InboundBay* trucksInboundBay; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    OutboundBay* trucksOutboundBay; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    Transform* trucksTimerCameraLoc; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    Transform* trucksInboundLoc; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    DialogueObject* trucksOutroDialogue; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    System.Collections.Generic.List<ShiftOrderObject> trucksInboundOrders; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    System.Collections.Generic.List<ShiftOrderObject> trucksOutboundOrders; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    TutorialTimerHandler* tutorialTimerHandler; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    Aggro.Core.ObjectQuery<TutorialSpawn> _spawnQuery; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    Aggro.Core.ObjectQuery<TutorialContainer> _containerQuery; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    float delayAfterChecked; // 0x01E8
    uint8_t pad_01E9[0x3]; // 0x01E9
    float basicControlsIntroDelay; // 0x01EC
    uint8_t pad_01ED[0x3]; // 0x01ED
    float basicControlsMoveForwardDuration; // 0x01F0
    uint8_t pad_01F1[0x3]; // 0x01F1
    float basicControlsMoveForwardAccelerationThreshold; // 0x01F4
    uint8_t pad_01F5[0x3]; // 0x01F5
    float basicControlsReverseDuration; // 0x01F8
    uint8_t pad_01F9[0x3]; // 0x01F9
    float basicControlsReverseAccelerationThreshold; // 0x01FC
    uint8_t pad_01FD[0x3]; // 0x01FD
    float basicControlsDriftDuration; // 0x0200
    uint8_t pad_0201[0x3]; // 0x0201
    float stressCrashOutDelayBeforeBombsEarly; // 0x0204
    uint8_t pad_0205[0x3]; // 0x0205
    float stressCrashOutDelayBeforeBombsLate; // 0x0208
    uint8_t pad_0209[0x3]; // 0x0209
    float stressCrashOutDelayBeforeDialogue; // 0x020C
    uint8_t pad_020D[0x3]; // 0x020D
    float trucksCameraPanDuration; // 0x0210
    uint8_t pad_0211[0x3]; // 0x0211
    bool _trigger; // 0x0214

    // Methods
    void OnEntityCreated();
    void StartTutorial();
    IEnumerator* RunTutorialCo();
    IEnumerator* BasicControlsCo();
    IEnumerator* BasicControlsMoveForwardCo();
    IEnumerator* BasicControlsReverseCo();
    IEnumerator* BasicControlsDriftCo();
    IEnumerator* BasicControlsNitroCo();
    IEnumerator* StressCo();
    IEnumerator* StressCollisionCo();
    IEnumerator* BoxStuffCo();
    IEnumerator* BoxStuffStackTwoCo();
    IEnumerator* BoxStuffStackThreeCo();
    IEnumerator* BoxStuffUnstackCo();
    IEnumerator* TruckCo();
    bool BoxStuffAllInStack();
    bool BoxStuffAllOutOfStack();
    bool BoxStuffWasStackBroken();
    void BoxStuffRestackBoxes();
    void BoxStuffSetTutorialCheck();
    IEnumerator* WaitForTriggerCo(bool releaseControl);
    void TutorialTriggerEntered();
    void SendSpawn(SpawnType type);
    void SendShow(ContainerType type);
    void SendHide(ContainerType type);
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class TutorialSpawn : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* prefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    SpawnType type; // 0x0058

    // Methods
    void CheckSpawn(SpawnType type);
    void .ctor();
};

// Namespace: <global>
class TutorialTrigger : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* _transform; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool _sent; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnDrawGizmos();
    void .ctor();
};

// Namespace: <global>
class AnimateDecalMaterialFloatProperty : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    MonoString* propertyName; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    DecalProjector* _decalProjector; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Material* _newMaterial; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float value; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t _propertyID; // 0x006C

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class AnimateMaterialPropertyUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    MonoString* propertyName; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* image; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Material* material; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float value; // 0x0068

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class AreaNameUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    EaseUI* parkingLot; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EaseUI* breakroom; // 0x0058

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class CameraSpaceCanvas : public EntityBehaviourBase
{
public:

    // Methods
    void OnEntityCreated();
    void Update();
    void .ctor();
};

// Namespace: <global>
class ClickCatchUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    UnityEvent* onClick; // 0x0020

    // Methods
    void OnPointerClick(PointerEventData* eventData);
    void .ctor();
};

// Namespace: <global>
class ContractUI : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Hide;

    uint8_t pad_0000[0x50]; // 0x0000
    LocalizedText* localizedText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* lockedText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject[][] bells; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ScoreBubble[][] scoreBubbles; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* contractBoxIconPrefab; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* contractPlusTextPrefab; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    ContractSelectionUI* contractSelectionUI; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GameObject* lockedContainer; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    GameObject* unlockedContainer; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* demoLockedContainer; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* bellsRequiredContainer; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* bellsRequiredText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    EaseUI* cycleLeftEaseUI; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    EaseUI* cycleRightEaseUI; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject[][] keyboardObjects; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    GameObject[][] gamepadObjects; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Transform* finalGradeContainer; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Image* finalGradeImage; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Image* finalGradeDillyImage; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Sprite[][] gradeSprites; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Sprite[][] gradeDillySprites; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    TextMeshProUGUI* rightGamePadHint; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Image* rightMouseButton; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    TextMeshProUGUI* contractNumText; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Transform* cosmeticUnlockContainer; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    GameObject* costumeUnlockPrefab; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    System.Collections.Generic.List<CostumeUnlockUI> _costumeUnlockUIs; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    Unlock[][] _unlocks; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    Material* cosutmeUnlockedUIMaterial; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    Material* cosutmeLockedUIMaterial; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    TextMeshProUGUI* bestTimeText; // 0x0140

    // Methods
    void SetUp(MonoString* title, int32_t highBellScore, ContractScore highContractScore, bool locked, bool isDemoLocked, int32_t bellsRequired, Unlock[][] unlocks, int32_t contractNum, TimeSpan contractTime);
    void OnUpdatePresentationEarly();
    void OnUpdatePresentation();
    void Cycle(int32_t amount);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class ContractUnlockedBoxUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Image* icon; // 0x0020

    // Methods
    void Sync(ShiftOrderObject* order);
    void .ctor();
};

// Namespace: <global>
class ContractUnlockedUI : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t POPULATE_AMOUNT;

    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* container; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LocalizedText* contractName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* boxTemplate; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* kbmContainer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* gamepadContainer; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<Aggro.Core.PoolableReference<ContractUnlockedBoxUI>> _boxes; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    EaseUI* easeUI; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* clickCatch; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool _continue; // 0x0060

    // Methods
    void Awake();
    IEnumerator* ShowUnlockCo(ContractObject* contract);
    void OnContinue();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class ControllerNoticeUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* clickCatch; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    EaseUI* easeUI; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool _continue; // 0x0068

    // Methods
    void Awake();
    IEnumerator* NoticeCo();
    void OnInputControlGained();
    void OnContinue();
    void OnInputControlLost();
    void TestNotice();
    void ShowNotice();
    void .ctor();
};

// Namespace: <global>
class CostumeUnlockedUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* container; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LocalizedText* costumeName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Image* costumeIcon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* kbmContainer; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* gamepadContainer; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    EaseUI* easeUI; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* clickCatch; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool _continue; // 0x0058

    // Methods
    void Awake();
    IEnumerator* ShowUnlockCo(CostumeObject* costume);
    void OnContinue();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class CreditsUI : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Show;
    // static int32_t Hide;

    uint8_t pad_0000[0x50]; // 0x0000
    Animator* animator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    StudioEventEmitter* creditsOST; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float fastForwardMultiplier; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float scrollTime; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float scrollTimer; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool active; // 0x006C

    // Methods
    void OnUpdatePresentation();
    void ShowCredits();
    void HideCredits();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class EnableOnlyGamepadOnConsole : public MonoBehaviour
{
public:

    // Methods
    void Awake();
    void .ctor();
};

// Namespace: <global>
class EnableOnSelectUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* objectToEnable; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    bool hover; // 0x0058

    // Methods
    void OnPointerEnter(PointerEventData* eventData);
    void OnPointerExit(PointerEventData* eventData);
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class FloaterManagerUI : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RectTransform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<FloaterUI> floaters; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Vector3 targetOffset; // 0x0060
    uint8_t pad_0061[0xB]; // 0x0061
    Vector2 edgeOffset; // 0x006C
    uint8_t pad_006D[0x7]; // 0x006D
    float arrowOffset; // 0x0074

    // Methods
    FloaterUI* AddFloater(GameObject* floaterUIPrefab);
    void RemoveFloater(FloaterUI* floaterToRemove);
    void OnUpdatePresentation();
    void UpdateFloaters();
    void .ctor();
};

// Namespace: <global>
class FloaterPopulator : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* floaterUIPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    FloaterUI* _floaterUI; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Transform* targetTransform; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool AddFloaterOnEntityCreated; // 0x0068
    bool continuouslyUpdate; // 0x0069
    bool excludeLocalPlayer; // 0x006A
    uint8_t pad_006B[0x1]; // 0x006B
    VisibleRoomTypesMask visibleRoomTypeMask; // 0x006C

    // Methods
    void OnUpdatePresentationLate();
    void OnEntityCreated();
    void AddFloater();
    void HideAndRemoveFloater();
    void RemoveFloater();
    void OnEntityDestroyed();
    void .ctor();
};

// Namespace: <global>
class FloaterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* arrow; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.Transform> visibleOnScreenTransforms; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Transform> visibleOffScreenTransforms; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<UnityEngine.Transform> extraTransforms; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector3 targetWorldPosition; // 0x0070
    uint8_t pad_0071[0xB]; // 0x0071
    bool onScreen; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    Vector3 offset; // 0x0080
    uint8_t pad_0081[0xB]; // 0x0081
    Ease orderEase; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    float floaterScaleSpeed; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float _floaterScale; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float _orderScale; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float _extrasScale; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    bool visible; // 0x00A0
    bool hideByDefault; // 0x00A1
    bool _destroyOnceHidden; // 0x00A2
    bool useLifeTime; // 0x00A3
    float lifeTimeSeconds; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float _lifeTime; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float scaleMultiplier; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    bool extrasVisible; // 0x00B0
    bool alwaysVisible; // 0x00B1

    // Methods
    void OnEntityCreated();
    void SetVisibleThisFrame();
    void HideAndRemove();
    void OnUpdatePresentation();
    void OnUpdatePresentationLate();
    void .ctor();
};

// Namespace: <global>
class GameMenuUI : public AggroManagerBase`1
{
public:
    // Static fields
    // static float PAUSE_SPEED;

    uint8_t pad_0000[0x50]; // 0x0000
    Button* inviteFriendsButton; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* container; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    SettingsUI* settings; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* optionButton; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Button* giveUpButton; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject[][] disableOnClose; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* _prevSelectedGameObject; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Animator* anim; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Coroutine* _disableCoroutine; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool _animating; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    EventReference openSfx; // 0x009C
    uint8_t pad_009D[0xF]; // 0x009D
    EventReference closeSfx; // 0x00AC

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnInviteFriends();
    void GiveUpAndReturn();
    void OnQuitToTitle();
    void OpenOptions();
    void Close();
    void OnInputControlGained();
    void OnInputControlLost();
    void OnUpdatePresentation();
    IEnumerator* DisableContainerRoutine();
    void .ctor();
};

// Namespace: <global>
class GDKDisplayUserHandle : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TMP_Text* text; // 0x0020

    // Methods
    void Awake();
    void .ctor();
};

// Namespace: <global>
class HapticFeedbackPlayer : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    bool shakeOnEntityCreated; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    ShakeStrength shakeStrength; // 0x0054

    // Methods
    void OnEntityCreated();
    void Shake();
    void .ctor();
};

// Namespace: <global>
class HazardIconManagerUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<HazardIconUI> hazardIcons; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RectTransform* container; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Transform* group; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    PlayerEffectContext testPlayerEffectContext; // 0x0068

    // Methods
    void OnUpdatePresentationLate();
    void UpdateIcon(PlayerEffectContext checkContext, HazardIconUI* icon);
    void .ctor();
};

// Namespace: <global>
class HazardIconUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EaseUI* easeUI; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayerEffectContext playerEffectContext; // 0x0028

    // Methods
    void .ctor();
};

// Namespace: <global>
class HotkeyHintsUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RectTransform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RectTransform* placeHintTransform; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RectTransform* pickUpHintTransform; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    RectTransform* useHintTransform; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    EaseUI* pickUpEaseUI; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    EaseUI* placeEaseUI; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    EaseUI* useEaseUI; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    EaseUI* taptapEaseUI; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TipTapPhoneVisual* tipTapPhoneVisual; // 0x0090

    // Methods
    void OnUpdatePresentationLate();
    Vector2 SetTargetPosition(Vector3 worldPos);
    void .ctor();
};

// Namespace: <global>
class IFloaterPopulator
{
public:

    // Methods
    void AddedFloater(FloaterUI* floaterAdded);
    void RemovedFloater();
};

// Namespace: <global>
class IncomingNotifFloaterManagerUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* incomingNotifFloaterPrefab; // 0x0050

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnInboundArrived(EvInboundArrived ev);
    void .ctor();
};

// Namespace: <global>
class IncomingPreviewBoardUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* incomingPreviewItemPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* itemContainer; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void ClearItems();
    void OnEvInboundOrdersChanged(EvInboundOrdersChanged ev);
    void .ctor();
};

// Namespace: <global>
class InputSwapSprite : public MonoBehaviour
{
public:

    // Methods
    void Start();
    void Update();
    void .ctor();
};

// Namespace: <global>
class ModifierChoiceButtonUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image[][] players; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* iconA; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image* timer; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Transform* timerParent; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Transform* container; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    LocalizedText* titleText; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    LocalizedText* descText; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    TextMeshProUGUI* bonusPayText; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    VoteOption voteOption; // 0x0090

    // Methods
    void OnUpdatePresentation();
    void OnPointerClick(PointerEventData* eventData);
    void Vote();
    void .ctor();
};

// Namespace: <global>
class ModifierChoiceManagerUI : public AggroManagerBase`1
{
public:
    // Static fields
    // static System.Collections.Generic.List<PlayersManager.PlayerVote> _playerVotes;

    uint8_t pad_0000[0x50]; // 0x0000
    Image[][] undecidedPlayers; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* container; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ModifierChoiceButtonUI* choiceButtonA; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    ModifierChoiceButtonUI* choiceButtonB; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    EaseUI* easeUI; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    StudioEventEmitter* voteProgressSfx; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    StudioEventEmitter* modifierChoiceSnapshot; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    EventReference voteSfx; // 0x0088

    // Methods
    void OnEntityCreated();
    void SetUpModifiers(ModifierBase* modifierA, ModifierBase* modifierB);
    void EndVote();
    void OnUpdatePresentation();
    void RefreshVotes();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class MoneyUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* text; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t _prevMoney; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class NamePlateHandler : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    MonoString* nameText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    PlayerColorManager* playerColorManager; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* namePlatePrefab; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* namePlate; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    NamePlateUI* ui; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Transform* playerUITransform; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    bool nameSet; // 0x00C8
    bool proceeding; // 0x00C9

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnEntityDestroyed();
    void .ctor();
    bool Weaved();
    MonoString* get_NetworknameText();
    void set_NetworknameText(MonoString* value);
    bool get_Networkproceeding();
    void set_Networkproceeding(bool value);
    void SerializeSyncVars(NetworkWriter* writer, bool forceAll);
    void DeserializeSyncVars(NetworkReader* reader, bool initialState);
};

// Namespace: <global>
class NamePlateUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* player; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* nameTextUI; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Entity playerEntity; // 0x0060
    uint8_t pad_0061[0x1F]; // 0x0061
    PlayerColorManager* playerColorManager; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Canvas* canvas; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    RectTransform* container; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* readyUpParent; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* readyUpCheck; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float offset; // 0x00A8

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentationLate();
    Vector2 SetTargetPosition(Vector3 worldPos);
    void .ctor();
};

// Namespace: <global>
class NetworkPlayerUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* playerName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Slider* volumeSlider; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TextMeshProUGUI* ping; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Image* pingImage; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Image* buttonIcon; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    MonoString* <voiceName>k__BackingField; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Color goodPingColor; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    Color mediumPingColor; // 0x0060
    uint8_t pad_0061[0xF]; // 0x0061
    Color badPingColor; // 0x0070
    uint8_t pad_0071[0xF]; // 0x0071
    int32_t mediumPingThreshold; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    int32_t badPingThreshold; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    int32_t _prevPing; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    uint64_t _platformId; // 0x0090

    // Methods
    MonoString* get_voiceName();
    void set_voiceName(MonoString* value);
    void Sync(PlayerStats stats);
    void OnSliderVolumeChanged(float value);
    void OnSliderUpdateSelected();
    void OnClick();
    Selectable* GetSelectable();
    bool IsSelectable();
    void OnSelectedPlayer();
    void OnDeselectedPlayer();
    void .ctor();
};

// Namespace: <global>
class NetworkUI : public EntityBehaviourBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<NetworkPlayerManager.PlayerStats> _playerStats;

    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* playerTemplate; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Selectable* exitSelectable; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<Aggro.Core.PoolableReference<NetworkPlayerUI>> _uis; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<UnityEngine.UI.Selectable> _selectables; // 0x0070

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void SetNavigation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class NitroBarUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RectTransform* rect; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* fill; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image* outline; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Image* shadow; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Image* flash; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Gradient* colorGradient; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Gradient* outlineGradient; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    int32_t SHAKE_ID; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool isFull; // 0x008C

    // Methods
    void OnInitializeBehaviour();
    void SetFull();
    void SetEmpty();
    void GrowBar();
    void ShrinkBar();
    void NitroShrinkBar();
    void DisableFlash();
    void SetFill(float fillAmount, bool nitroActive);
    void .ctor();
};

// Namespace: <global>
class NitroHintUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    NitroController* _nitroController; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EaseUI* easeUI; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool hintEnabled; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class NitroUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    NitroBarUI[][] nitroBars; // 0x0050

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class NotificationManagerUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* shiftStartNotifPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* shiftWonNotifPrefab; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* shiftLostNotifPrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* orderIncorrectNotifPrefab; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* organizationPeriodStartNotifPrefab; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* transactionNotificaionPrefab; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* valueLostPrefab; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GameObject* playerJoinedNotifPrefab; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    RectTransform* pushNotificationContainer; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    int32_t testInt; // 0x0098

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnPlayerJoined(EvPlayerJoined ev);
    void OnPlayerLeft(EvPlayerLeft ev);
    void OnMoneyTransaction(EvMoneyTransaction evMoneyTransaction);
    void OnShiftWon(EvShiftWon ev);
    void OnShiftLost(EvShiftLost ev);
    void OnOrganizationStart(EvOrganizationPeriodStart ev);
    void OnIncorrectOrderSent(EvIncorrectOrderSent ev);
    void OnShiftStart(EvShiftStart evShiftStart);
    GameObject* RunNotif(GameObject* notif, Transform* parent);
    void Test();
    void .ctor();
};

// Namespace: <global>
class OrderRequestItemUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Image* icon; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* amountText; // 0x0028

    // Methods
    void .ctor();
};

// Namespace: <global>
class OutboundTruckFloaterManagerUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<TruckTimerFloaterUI> truckTimerFloaters; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<TruckOrderFloaterUI> truckOrderFloaters; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* truckTimerFloaterPrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* truckOrderFloaterPrefab; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Aggro.Core.ObjectQuery<OutboundBay> _bayQuery; // 0x0070

    // Methods
    void OnEntityCreated();
    void OnShiftStarted(EvShiftStart ev);
    void .ctor();
};

// Namespace: <global>
class PlayerProceedUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image* proceedProgressFill; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* pressNotice; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* readyIndicator; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<UnityEngine.GameObject> playerParents; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<UnityEngine.UI.Image> playerIcons; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite* playerHere; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Sprite* playerGone; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    EaseUI* easeUI; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<PlayersManager.PlayerProceed> _playerProceeds; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool _active; // 0x0098

    // Methods
    void Show();
    void Hide();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerStressBarUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image* fastFill; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* slowFill; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Transform* barParent; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    EaseUI* easeUI; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float teststress; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    Vector2 fillbarMinMax; // 0x0074
    uint8_t pad_0075[0x7]; // 0x0075
    float slowFillSpeed; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float previousFastFillAmount; // 0x0080

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class PlayerStressUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image* stressExpressionImage; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Sprite[][] stressExpressions; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image[][] stressPips; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Image* stressExpressionBG; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    PlayerStress* playerStress; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Material[][] pipMaterials; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Boolean[][] isStressed; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Color stressColor; // 0x0088
    uint8_t pad_0089[0xF]; // 0x0089
    Color stressFullColor; // 0x0098
    uint8_t pad_0099[0xF]; // 0x0099
    Color blankColor; // 0x00A8
    uint8_t pad_00A9[0xF]; // 0x00A9
    Color flashColor; // 0x00B8
    uint8_t pad_00B9[0xF]; // 0x00B9
    float stressShakeStrength; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    Ease pipAddInEase; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    Ease pipAddOutEase; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float pipAddTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float pipAddStrength; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    Ease pipRemoveInEase; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    Ease pipRemoveOutEase; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float pipRemoveTime; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    float pipRemoveStrength; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    float pipInactiveScale; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    float pipActiveScale; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    float pipCrashoutScale; // 0x00F4

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnEntityDestroyed();
    IEnumerator* PipAddAnimationCo(Image* pip);
    IEnumerator* PipRemoveAnimationCo(Image* pip);
    void .ctor();
};

// Namespace: <global>
class PlayerWorldUI : public NetworkEntityBehaviourBase
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject* selfCareIndicator; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    VehicleController* vehicleController; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    PlayerStress* playerStress; // 0x00A8

    // Methods
    void OnUpdatePresentation();
    void .ctor();
    bool Weaved();
};

// Namespace: <global>
class PopUpUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* popUpTransform; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* acknowledgementImage; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Ease ease; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float easeSpeed; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float acknowledgementHoldTimeSec; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float _acknowledgementHoldTimer; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float _scale; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    bool isOpen; // 0x0074

    // Methods
    void TestOpen();
    void Open();
    void TriggerPopUp();
    void close();
    void OnUpdatePresentation();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class PushNotificationUI : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* text; // 0x0020

    // Methods
    void .ctor();
};

// Namespace: <global>
class QuotaReportUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<UnityEngine.GameObject> stepObjects; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.GameObject> finalStepObjects; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RectTransform* reportContainer; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    TextMeshProUGUI* reportTitle; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    TextMeshProUGUI* fulfillmentText; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject[][] allPlayerCrashoutCounts; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    TextMeshProUGUI[][] allPlayerCrashoutTexts; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Image[][] allPlayerIconImages; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    DetailRow[][] detailRows; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* payoutText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Image* quotaPassStamp; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Image* quotaFailStamp; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Animator* animator; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Image[][] playerImages; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Sprite* playerMissing; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Sprite* playerHere; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Image* proceedFilBar; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    GameObject* proceedParent; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<PlayerResult> _playerResults; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float stepTime; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    int32_t indexToInsertCrashoutCounts; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    Ease easeIn; // 0x00F0
    uint8_t pad_00F1[0x3]; // 0x00F1
    Ease easeOut; // 0x00F4
    uint8_t pad_00F5[0x3]; // 0x00F5
    float showReportTimeSec; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    float hideYoffset; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    int32_t stepIndex; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    EventReference passSfx; // 0x0104
    uint8_t pad_0105[0xF]; // 0x0105
    EventReference failSfx; // 0x0114
    uint8_t pad_0115[0xF]; // 0x0115
    bool _readyToProceed; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    ShiftResult _shiftResult; // 0x0128

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void UpdatePlayerProceedUI(System.Collections.Generic.List<PlayerResult> playerResults);
    void UpdateUIData(ShiftResult result, int32_t moneyGained, int32_t totalMoney, int32_t trucksDeliveredThisShift, int32_t trucksDelivered, System.Collections.Generic.List<PlayerResult> playerResults);
    void Show(ShiftResult result, int32_t moneyGained, int32_t totalMoney, int32_t trucksDelivered, System.Collections.Generic.List<PlayerResult> playerResults);
    void TestShow();
    void Hide();
    void HideStepObjects();
    IEnumerator* ShowReportCo();
    IEnumerator* QuotaReportSequenceCo();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class RandomArt : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Sprite[][] sprites; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Image[][] images; // 0x0028

    // Methods
    void Start();
    void .ctor();
};

// Namespace: <global>
class ReceiptUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    AnimationCurve* receiptStartScaleCurve; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    AnimationCurve* receiptShowInfoCurve; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    AnimationCurve* receiptHideInfoCurve; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    AnimationCurve* receiptHideScaleCurve; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    TextMeshProUGUI* moneyMadeText; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    TextMeshProUGUI* basePayText; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    TextMeshProUGUI* timerPayText; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    TextMeshProUGUI* damagePayText; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TextMeshProUGUI* boxCountText; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* wildCardCountText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* damageCountText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    VerticalLayoutGroup* receiptGroup; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* container; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* jokerUI; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* brokenUI; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    float receiptStartTime; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float receiptShowInfoTime; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float receiptOnScreenTime; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float receiptHideInfoTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    float receiptHideScaleTime; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    Color green; // 0x00DC
    uint8_t pad_00DD[0xF]; // 0x00DD
    Color red; // 0x00EC
    uint8_t pad_00ED[0xF]; // 0x00ED
    float receiptSpacing; // 0x00FC
    uint8_t pad_00FD[0x3]; // 0x00FD
    float hideOffset; // 0x0100

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void StartReceiptSequence(EvTruckShipped ev);
    void Test();
    IEnumerator* ReceiptStartCo();
    IEnumerator* ReceiptShowInfoCo();
    IEnumerator* ReceiptHideInfoCo();
    IEnumerator* ReceiptLeaveCo();
    void .ctor();
};

// Namespace: <global>
class RemoveOnConsole : public MonoBehaviour
{
public:

    // Methods
    void .ctor();
};

// Namespace: <global>
class ReportUI : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Animator* animator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.Transform> bells; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Transform> bellCrossOuts; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    CostumeUnlockedUI* costumeUnlockedUI; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    ContractUnlockedUI* contractUnlockedUI; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    LocalizedText* contractTitleText; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Image[][] boxImages; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Image[][] modifierAImages; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Image[][] modifierBImages; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<PlayerResult> testPlayerResults; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    ContractObject* testContract; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* testModifierA; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* testModifierB; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.List<UnityEngine.GameObject> playerIconObjects; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> playerNameTexts; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Collections.Generic.List<UnityEngine.GameObject> crashoutCountObjects; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Collections.Generic.List<UnityEngine.GameObject> nitroCountObjects; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<UnityEngine.GameObject> driftCountObjects; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<UnityEngine.GameObject> upgradeCountObjects; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> crashoutCountTexts; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> nitroCountTexts; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> driftCountTexts; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> upgradeCountTexts; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    System.Collections.Generic.List<UnityEngine.UI.Image> playerIconImages; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    System.Collections.Generic.List<UnityEngine.UI.Image> playerHighlightImages; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    StudioEventEmitter* clipboardInSFX; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    StudioEventEmitter* clipboardOutSFX; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    StudioEventEmitter* bellSFX; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    StudioEventEmitter* crashoutSFX; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    StudioEventEmitter* nitroSFX; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    StudioEventEmitter* driftSFX; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    StudioEventEmitter* upgradeSFX; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    StudioEventEmitter* passStampSFX; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    StudioEventEmitter* failStampSFX; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    StudioEventEmitter* bellFailSFXEmitter; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    StudioEventEmitter* winSFX; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    PlayerProceedUI* playerProceedUI; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    EaseUI* newRecord; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    ParticleSystem[][] confettiBursts; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    ParticleSystem* confettiRain; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    Transform* finalGradeContainer; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    Image* finalGradeImage; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    Image* finalGradeDillyImage; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    Sprite[][] gradeSprites; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    Sprite[][] gradeDillySprites; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    Image[][] gradeImages; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    TextMeshProUGUI* bestTimeText; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    float tallyTime; // 0x01C8
    uint8_t pad_01C9[0x3]; // 0x01C9
    float animLengthSeconds; // 0x01CC
    uint8_t pad_01CD[0x3]; // 0x01CD
    float animLengthStamp; // 0x01D0
    uint8_t pad_01D1[0x3]; // 0x01D1
    Ease ease; // 0x01D4
    uint8_t pad_01D5[0x3]; // 0x01D5
    Ease easeStamp; // 0x01D8
    uint8_t pad_01D9[0x3]; // 0x01D9
    float animStrength; // 0x01DC
    uint8_t pad_01DD[0x3]; // 0x01DD
    bool testPass; // 0x01E0
    uint8_t pad_01E1[0x3]; // 0x01E1
    int32_t testCurrentShift; // 0x01E4
    uint8_t pad_01E5[0x3]; // 0x01E5
    EventReference gradeFSfx; // 0x01E8
    uint8_t pad_01E9[0xF]; // 0x01E9
    EventReference gradeDSfx; // 0x01F8
    uint8_t pad_01F9[0xF]; // 0x01F9
    EventReference gradeCSfx; // 0x0208
    uint8_t pad_0209[0xF]; // 0x0209
    EventReference gradeBSfx; // 0x0218
    uint8_t pad_0219[0xF]; // 0x0219
    EventReference gradeASfx; // 0x0228
    uint8_t pad_0229[0xF]; // 0x0229
    EventReference gradeSSfx; // 0x0238
    uint8_t pad_0239[0xF]; // 0x0239
    bool _skipped; // 0x0248
    bool _gotNewRecord; // 0x0249
    uint8_t pad_024A[0x2]; // 0x024A
    int32_t previousHighScore; // 0x024C
    uint8_t pad_024D[0x3]; // 0x024D
    ContractScore previousHighContractScore; // 0x0250

    // Methods
    IEnumerator* StartSequenceCo(bool passed, int32_t currentShift, ContractObject* contract, ContractScore score, TimeSpan shiftTime, ContractScore[][] shiftScores, Sprite* modifierSeen1, Sprite* modifierSeen2, ShiftOrderObject[][] ordersSeen, PlayerResult[][] playerResults, CostumeObject[][] costumesUnlocked, ContractObject[][] contractsUnlocked);
    void Hide();
    IEnumerator* HideCo();
    void SetUp(bool passed, int32_t currentShift, ContractObject* contractObject, Sprite* modifierA, Sprite* modifierB, ShiftOrderObject[][] ordersSeen, PlayerResult[][] playerResults, ContractScore contractScore, ContractScore[][] shiftScores, TimeSpan contractTime);
    IEnumerator* FullSequenceCo(bool passed, int32_t currentShift, ContractScore contractScore, PlayerResult[][] playerResults, CostumeObject[][] costumesUnlocked, ContractObject[][] contractsUnlocked);
    IEnumerator* GrowRevealCo(Transform* revealTransform, Ease revealEase, float animLength);
    IEnumerator* AddUpCountCo(MonoString* prefix, MonoString* suffix, TextMeshProUGUI[][] texts, Int32[][] starts, Int32[][] ends, StudioEventEmitter* sfxEvent, float sfxRate, bool invertPitchDirection);
    void OnUpdatePresentation();
    void OnInputControlGained();
    void OnInputControlLost();
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void .ctor();
};

// Namespace: <global>
class SettingSpriteImage : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    MonoString* _setting; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Image* _image; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t _settingId; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    uint32_t _saveVersion; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t _inputVersion; // 0x0068

    // Methods
    void OnInitializeBehaviour();
    void OnUpdatePresentationLate();
    void .ctor();
};

// Namespace: <global>
class SettingSpriteText : public EntityBehaviourBase
{
public:
    // Static fields
    // static Regex* REGEX;

    uint8_t pad_0000[0x50]; // 0x0000
    MonoString* _text; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TMP_Text* _tmpText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool _isDirty; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    uint32_t _globalSaveVersion; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t _inputVersion; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Language _prevLanguage; // 0x006C

    // Methods
    void OnInitializeBehaviour();
    void OnUpdatePresentationLate();
    void SetText(MonoString* text);
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class SettingsUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* clickCatch; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* settingsParent; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnClosed();
    void OnUpdatePresentation();
    void OpenSettings();
    void CloseSettings();
    void OnInputControlGained();
    void OnInputControlLost();
    void .ctor();
};

// Namespace: <global>
class ShiftCounterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TextMeshProUGUI* shiftCounterText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* container; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t _prevShift; // 0x0060

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class ShiftFinishedNotifUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    System.Collections.Generic.List<UnityEngine.Transform> bells; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.Transform> bellCrossOuts; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ReportUI* rUI; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Sprite[][] gradeSprites; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Image[][] gradeImages; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    bool passed; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    Ease ease; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    EventReference bellPassSfx; // 0x0080
    uint8_t pad_0081[0xF]; // 0x0081
    EventReference bellFailSfx; // 0x0090
    uint8_t pad_0091[0xF]; // 0x0091
    EventReference gradeFSfx; // 0x00A0
    uint8_t pad_00A1[0xF]; // 0x00A1
    EventReference gradeDSfx; // 0x00B0
    uint8_t pad_00B1[0xF]; // 0x00B1
    EventReference gradeCSfx; // 0x00C0
    uint8_t pad_00C1[0xF]; // 0x00C1
    EventReference gradeBSfx; // 0x00D0
    uint8_t pad_00D1[0xF]; // 0x00D1
    EventReference gradeASfx; // 0x00E0
    uint8_t pad_00E1[0xF]; // 0x00E1
    EventReference gradeSSfx; // 0x00F0
    uint8_t pad_00F1[0xF]; // 0x00F1
    float animLengthSeconds; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float animStrength; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    float bellDelay; // 0x0108

    // Methods
    void SetUp(int32_t currentShift);
    IEnumerator* RevealCo(int32_t currentShift, EventReference bellSfx, EventReference gradeSfx);
    IEnumerator* GrowRevealCo(Transform* revealTransform, Ease revealEase, float animLength, EventReference sfxEvent);
    void .ctor();
};

// Namespace: <global>
class ShiftInfoTruckUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* checkMark; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* xMark; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    AnimationCurve* curve; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    float animationTime; // 0x0070

    // Methods
    IEnumerator* BlorbleCo();
    void .ctor();
};

// Namespace: <global>
class ShiftInfoUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* shiftInfoTruckUIPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<ShiftInfoTruckUI> truckUIs; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t numberOfOrdersTotal; // 0x0060

    // Methods
    void OnEntityCreated();
    void OnEntityDestroyed();
    void OnUpdatePresentation();
    void SetUpShiftInfo();
    void DestroyTruckUIs();
    void OnShiftChanged(ShiftPhase phase, int32_t shift, int32_t outboundsRequired);
    void OnCorrectOrderSent(EvCorrectOrderSent ev);
    void .ctor();
};

// Namespace: <global>
class ShiftStartButtonFloaterManagerUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Aggro.Core.ObjectQuery<ButtonShift> buttonShiftQuery; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* buttonShiftFloaterPrefab; // 0x0058

    // Methods
    void OnEntityCreated();
    void OnOrganizationStart(EvOrganizationPeriodStart ev);
    void .ctor();
};

// Namespace: <global>
class ShopInfoFloaterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TextMeshProUGUI* costText; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* saleGameObject; // 0x0058

    // Methods
    void .ctor();
};

// Namespace: <global>
class ShopPanelUI : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RectTransform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* itemPriceText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    LocalizedText* itemNameLocalizedText; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    LocalizedText* itemDescLocalizedText; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Image* itemIcon; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Image* priceBackground; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* purchasedIndicator; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    StudioEventEmitter* slideInSFXEmitter; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    StudioEventEmitter* slideOutSFXEmitter; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* buyHintGameObject; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* onSaleObject; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* oldTextSale; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Data currentData; // 0x00B0
    uint8_t pad_00B1[0x27]; // 0x00B1
    Data nextData; // 0x00D8
    uint8_t pad_00D9[0x27]; // 0x00D9
    float animationTime; // 0x0100
    uint8_t pad_0101[0x3]; // 0x0101
    float hideOffset; // 0x0104
    uint8_t pad_0105[0x3]; // 0x0105
    bool shouldDisplay; // 0x0108
    bool isTransitioning; // 0x0109
    bool isVisible; // 0x010A
    uint8_t pad_010B[0x1]; // 0x010B
    Color canAffordColor; // 0x010C
    uint8_t pad_010D[0xF]; // 0x010D
    Color cannotAffordColor; // 0x011C
    uint8_t pad_011D[0xF]; // 0x011D
    int32_t _prevPrice; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    Ease ease; // 0x0130

    // Methods
    void OnEntityCreated();
    void OnUpdatePresentation();
    void OnUpdatePresentationLate();
    void SetVisibleThisFrame();
    void SetData(Data data);
    IEnumerator* SlideInCo();
    IEnumerator* SlideOutCo();
    void .ctor();
};

// Namespace: <global>
class startShiftFloaterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Image[][] timerImages; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float exitTimeSeconds; // 0x0058

    // Methods
    void OnUpdatePresentationEarly();
    void .ctor();
};

// Namespace: <global>
class SwipeUpHintUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TipTapPhoneVisual* taptap; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EaseUI* easeUI; // 0x0058

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class TapTapHintUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TipTapPhoneVisual* taptap; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    EaseUI* easeUI; // 0x0058

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class TimerPausedUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    EaseUI* pauseEaseUI; // 0x0050

    // Methods
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class TipTapNotificationManager : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    GameObject* notificationPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* container; // 0x0058

    // Methods
    void SpawnNotification(Entity sharerEntity, TipTapObject* tiptap);
    void .ctor();
};

// Namespace: <global>
class TipTapNotificationUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Transform* container; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* notificationTextMesh; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Image* thumbailImage; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float lifeTime; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float spawnAnimationTime; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    Ease spawnEase; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float destroyAnimationTime; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    Ease DestroyEase; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float destroySlideAwayDistance; // 0x007C

    // Methods
    void OnEntityCreated();
    void SetUp(NotificationData notificationData);
    IEnumerator* SpawnCo();
    IEnumerator* WaitForDestroyCo();
    IEnumerator* DestroyCo();
    void .ctor();
};

// Namespace: <global>
class TitleImageLoc : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t SETTINGLANGUAGE_ID;

    uint8_t pad_0000[0x50]; // 0x0000
    Image* titleImage; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Sprite[][] titleSprites; // 0x0058

    // Methods
    void OnUpdatePresentation();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class TransactionUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    TextMeshProUGUI* text; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Transform* followTransform; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float delaySec; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t amount; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    Color spendColor; // 0x0068
    uint8_t pad_0069[0xF]; // 0x0069
    Color earnColor; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    float _startTime; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float destroyAfterSeconds; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    bool destroySelf; // 0x0090

    // Methods
    void OnEntityCreated();
    void OnUpdateSimulation();
    void OnUpdatePresentationLate();
    Vector2 SetTargetPosition(Vector3 worldPos);
    void .ctor();
};

// Namespace: <global>
class TruckOrderFloaterUI : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    FloaterUI* floaterUI; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    OutboundBay* assignedOutboundBay; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.GameObject> orderRequestItemUIs; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<OutboundBay.Order> orderItems; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* orderRequestItemUITemplate; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Transform* orderRequestItemContainer; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject[][] orderBubbles; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Sprite* wrongBoxSprite; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    uint32_t previousTruckBayVersion; // 0x0090

    // Methods
    void OnUpdatePresentationEarly();
    void UpdateOrderRequestItemUI();
    void .ctor();
};

// Namespace: <global>
class TruckTimerFloaterUI : public EntityBehaviourBase
{
public:
    // Static fields
    // static int32_t Warn;
    // static int32_t Emergency;

    uint8_t pad_0000[0x50]; // 0x0000
    FloaterUI* floaterUI; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    OutboundBay* assignedOutboundBay; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TextMeshProUGUI* bayNumberText; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Animator* animator; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Image[][] timerImages; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Image[][] timerStages; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    DialogueObject* timerDemoIntroDialogue; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    DialogueObject* timerDemoBonusDialogue; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    DialogueObject* timerDemoDontFailDialogue; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    ParticleSystem* bonusParticles; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    StudioEventEmitter* warningSfx; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    int32_t _previousStage; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    bool tutorial; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float normalizedTime; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float tutorialDemoTimeSec; // 0x00B4

    // Methods
    IEnumerator* TutorialRunTimerDemoCo();
    IEnumerator* TimerSequence(float start, float end);
    void PlayBonusParticles();
    void OnUpdatePresentationEarly();
    void .ctor();
    static void .cctor();
};

// Namespace: <global>
class Tutorial : public EntityBehaviourBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    BoxCollider* activationBoxCollider; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MonoString* description; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    VideoClip* videoClip; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    LayerMask playerCollisionMask; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool _playerInBoundsLastFrame; // 0x006C

    // Methods
    bool GetPlayerInBounds();
    void OnUpdatePresentation();
    void .ctor();
};

// Namespace: <global>
class TutorialWindowUI : public AggroManagerBase`1
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    EaseUI* easeUI; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    VideoPlayer* videoPlayer; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputIconTextHandler* textHandler; // 0x0060

    // Methods
    void OnUpdatePresentationEarly();
    void SetVisibleThisFrame();
    void .ctor();
};

// Namespace: <global>
class VFXManager : public NetworkAggroManagerBase`1
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    GameObject[][] prefabs; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.Dictionary<UnityEngine.GameObject,System.Int32> _prefabToIndex; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Aggro.Core.StructQuery<VFXManager.VfxComp> _query; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    int32_t populateCount; // 0x00B0

    // Methods
    void OnInitializeBehaviour();
    void Play(GameObject* prefab, Vector3 position);
    void Play(GameObject* prefab, Vector3 position, Quaternion rotation);
    void CmdPlay(int16_t index, Vector3 position, Quaternion rotation);
    void RpcPlay(int16_t index, Vector3 position, Quaternion rotation);
    void CmdPlay(int16_t index, Vector3 position);
    void RpcPlay(int16_t index, Vector3 position);
    void PlayInternal(int16_t index, Vector3 position, Quaternion rotation);
    void ReleaseAll();
    void .ctor();
    bool Weaved();
    void UserCode_CmdPlay__Int16__Vector3__Quaternion(int16_t index, Vector3 position, Quaternion rotation);
    static void InvokeUserCode_CmdPlay__Int16__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlay__Int16__Vector3__Quaternion(int16_t index, Vector3 position, Quaternion rotation);
    static void InvokeUserCode_RpcPlay__Int16__Vector3__Quaternion(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_CmdPlay__Int16__Vector3(int16_t index, Vector3 position);
    static void InvokeUserCode_CmdPlay__Int16__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    void UserCode_RpcPlay__Int16__Vector3(int16_t index, Vector3 position);
    static void InvokeUserCode_RpcPlay__Int16__Vector3(NetworkBehaviour* obj, NetworkReader* reader, NetworkConnectionToClient* senderConnection);
    static void .cctor();
};

// Namespace: <global>
class AggroInput
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InputActionAsset* <asset>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputActionMap* m_Game; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<AggroInput.IGameActions> m_GameActionsCallbackInterfaces; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InputAction* m_Game_GrabRelease; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    InputAction* m_Game_RaiseLower; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InputAction* m_Game_Steering; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputAction* m_Game_Gas; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    InputAction* m_Game_Brake; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    InputAction* m_Game_Boost; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    InputAction* m_Game_ToggleSteeringStyle; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputAction* m_Game_StationPlace; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    InputAction* m_Game_Drift; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    InputAction* m_Game_Beep; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    InputAction* m_Game_DMenuLeft; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    InputAction* m_Game_DMenuRight; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    InputAction* m_Game_OpenGameMenu; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    InputAction* m_Game_UseBox; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    InputAction* m_Game_TapTapMouseAxis; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    InputAction* m_Game_ToggleTipTap; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    InputAction* m_Game_SwipeUpTipTap; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    InputAction* m_Game_SwipeDownTipTap; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    InputAction* m_Game_SwipeRightTipTap; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    InputAction* m_Game_SwipeLeftTipTap; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* m_Game_StationRotateClockwise; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    InputAction* m_Game_StationRotateCounterClockwise; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    InputActionMap* m_Game1; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<AggroInput.IGame1Actions> m_Game1ActionsCallbackInterfaces; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    InputAction* m_Game1_GrabRelease; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    InputAction* m_Game1_RaiseLower; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    InputAction* m_Game1_Steering; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    InputAction* m_Game1_Gas; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    InputAction* m_Game1_Brake; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    InputAction* m_Game1_Boost; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    InputAction* m_Game1_ToggleSteeringStyle; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    InputAction* m_Game1_StationPlace; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    InputAction* m_Game1_Drift; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    InputAction* m_Game1_Beep; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    InputAction* m_Game1_DMenuLeft; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    InputAction* m_Game1_DMenuRight; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    InputAction* m_Game1_OpenGameMenu; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    InputAction* m_Game1_UseBox; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    InputAction* m_Game1_TapTapMouseAxis; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    InputAction* m_Game1_ToggleTipTap; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    InputAction* m_Game1_SwipeUpTipTap; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    InputAction* m_Game1_SwipeDownTipTap; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    InputAction* m_Game1_SwipeRightTipTap; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    InputAction* m_Game1_SwipeLeftTipTap; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    InputAction* m_Game1_StationRotateClockwise; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    InputAction* m_Game1_StationRotateCounterClockwise; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    InputActionMap* m_Game2; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    System.Collections.Generic.List<AggroInput.IGame2Actions> m_Game2ActionsCallbackInterfaces; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    InputAction* m_Game2_GrabRelease; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    InputAction* m_Game2_RaiseLower; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    InputAction* m_Game2_Steering; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    InputAction* m_Game2_Gas; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    InputAction* m_Game2_Brake; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    InputAction* m_Game2_Boost; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    InputAction* m_Game2_ToggleSteeringStyle; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    InputAction* m_Game2_StationPlace; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    InputAction* m_Game2_Drift; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    InputAction* m_Game2_Beep; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    InputAction* m_Game2_DMenuLeft; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    InputAction* m_Game2_DMenuRight; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    InputAction* m_Game2_OpenGameMenu; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    InputAction* m_Game2_UseBox; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    InputAction* m_Game2_TapTapMouseAxis; // 0x0218
    uint8_t pad_0219[0x7]; // 0x0219
    InputAction* m_Game2_ToggleTipTap; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    InputAction* m_Game2_SwipeUpTipTap; // 0x0228
    uint8_t pad_0229[0x7]; // 0x0229
    InputAction* m_Game2_SwipeDownTipTap; // 0x0230
    uint8_t pad_0231[0x7]; // 0x0231
    InputAction* m_Game2_SwipeRightTipTap; // 0x0238
    uint8_t pad_0239[0x7]; // 0x0239
    InputAction* m_Game2_SwipeLeftTipTap; // 0x0240
    uint8_t pad_0241[0x7]; // 0x0241
    InputAction* m_Game2_StationRotateClockwise; // 0x0248
    uint8_t pad_0249[0x7]; // 0x0249
    InputAction* m_Game2_StationRotateCounterClockwise; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    InputActionMap* m_Game3; // 0x0258
    uint8_t pad_0259[0x7]; // 0x0259
    System.Collections.Generic.List<AggroInput.IGame3Actions> m_Game3ActionsCallbackInterfaces; // 0x0260
    uint8_t pad_0261[0x7]; // 0x0261
    InputAction* m_Game3_GrabRelease; // 0x0268
    uint8_t pad_0269[0x7]; // 0x0269
    InputAction* m_Game3_RaiseLower; // 0x0270
    uint8_t pad_0271[0x7]; // 0x0271
    InputAction* m_Game3_Steering; // 0x0278
    uint8_t pad_0279[0x7]; // 0x0279
    InputAction* m_Game3_Gas; // 0x0280
    uint8_t pad_0281[0x7]; // 0x0281
    InputAction* m_Game3_Brake; // 0x0288
    uint8_t pad_0289[0x7]; // 0x0289
    InputAction* m_Game3_Boost; // 0x0290
    uint8_t pad_0291[0x7]; // 0x0291
    InputAction* m_Game3_ToggleSteeringStyle; // 0x0298
    uint8_t pad_0299[0x7]; // 0x0299
    InputAction* m_Game3_StationPlace; // 0x02A0
    uint8_t pad_02A1[0x7]; // 0x02A1
    InputAction* m_Game3_Drift; // 0x02A8
    uint8_t pad_02A9[0x7]; // 0x02A9
    InputAction* m_Game3_Beep; // 0x02B0
    uint8_t pad_02B1[0x7]; // 0x02B1
    InputAction* m_Game3_DMenuLeft; // 0x02B8
    uint8_t pad_02B9[0x7]; // 0x02B9
    InputAction* m_Game3_DMenuRight; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    InputAction* m_Game3_OpenGameMenu; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    InputAction* m_Game3_UseBox; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    InputAction* m_Game3_TapTapMouseAxis; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    InputAction* m_Game3_ToggleTipTap; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    InputAction* m_Game3_SwipeUpTipTap; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    InputAction* m_Game3_SwipeDownTipTap; // 0x02F0
    uint8_t pad_02F1[0x7]; // 0x02F1
    InputAction* m_Game3_SwipeRightTipTap; // 0x02F8
    uint8_t pad_02F9[0x7]; // 0x02F9
    InputAction* m_Game3_SwipeLeftTipTap; // 0x0300
    uint8_t pad_0301[0x7]; // 0x0301
    InputAction* m_Game3_StationRotateClockwise; // 0x0308
    uint8_t pad_0309[0x7]; // 0x0309
    InputAction* m_Game3_StationRotateCounterClockwise; // 0x0310
    uint8_t pad_0311[0x7]; // 0x0311
    InputActionMap* m_Debug; // 0x0318
    uint8_t pad_0319[0x7]; // 0x0319
    System.Collections.Generic.List<AggroInput.IDebugActions> m_DebugActionsCallbackInterfaces; // 0x0320
    uint8_t pad_0321[0x7]; // 0x0321
    InputAction* m_Debug_ToggleConsoleGamePad; // 0x0328
    uint8_t pad_0329[0x7]; // 0x0329
    InputAction* m_Debug_ToggleConsoleKBM; // 0x0330
    uint8_t pad_0331[0x7]; // 0x0331
    InputAction* m_Debug_ToggleDebugGraphs; // 0x0338
    uint8_t pad_0339[0x7]; // 0x0339
    InputAction* m_Debug_PrintGraphicsRaycast; // 0x0340
    uint8_t pad_0341[0x7]; // 0x0341
    InputAction* m_Debug_ToggleFreeCam; // 0x0348
    uint8_t pad_0349[0x7]; // 0x0349
    InputActionMap* m_PopUp; // 0x0350
    uint8_t pad_0351[0x7]; // 0x0351
    System.Collections.Generic.List<AggroInput.IPopUpActions> m_PopUpActionsCallbackInterfaces; // 0x0358
    uint8_t pad_0359[0x7]; // 0x0359
    InputAction* m_PopUp_Close; // 0x0360
    uint8_t pad_0361[0x7]; // 0x0361
    InputActionMap* m_QuotaReport; // 0x0368
    uint8_t pad_0369[0x7]; // 0x0369
    System.Collections.Generic.List<AggroInput.IQuotaReportActions> m_QuotaReportActionsCallbackInterfaces; // 0x0370
    uint8_t pad_0371[0x7]; // 0x0371
    InputAction* m_QuotaReport_Continue; // 0x0378
    uint8_t pad_0379[0x7]; // 0x0379
    InputAction* m_QuotaReport_Skip; // 0x0380
    uint8_t pad_0381[0x7]; // 0x0381
    InputActionMap* m_UnlockMenu; // 0x0388
    uint8_t pad_0389[0x7]; // 0x0389
    System.Collections.Generic.List<AggroInput.IUnlockMenuActions> m_UnlockMenuActionsCallbackInterfaces; // 0x0390
    uint8_t pad_0391[0x7]; // 0x0391
    InputAction* m_UnlockMenu_Continue; // 0x0398
    uint8_t pad_0399[0x7]; // 0x0399
    InputActionMap* m_OptionsMenu; // 0x03A0
    uint8_t pad_03A1[0x7]; // 0x03A1
    System.Collections.Generic.List<AggroInput.IOptionsMenuActions> m_OptionsMenuActionsCallbackInterfaces; // 0x03A8
    uint8_t pad_03A9[0x7]; // 0x03A9
    InputAction* m_OptionsMenu_BackOut; // 0x03B0
    uint8_t pad_03B1[0x7]; // 0x03B1
    InputActionMap* m_GameMenu; // 0x03B8
    uint8_t pad_03B9[0x7]; // 0x03B9
    System.Collections.Generic.List<AggroInput.IGameMenuActions> m_GameMenuActionsCallbackInterfaces; // 0x03C0
    uint8_t pad_03C1[0x7]; // 0x03C1
    InputAction* m_GameMenu_BackOut; // 0x03C8
    uint8_t pad_03C9[0x7]; // 0x03C9
    InputAction* m_GameMenu_OpenProfile; // 0x03D0
    uint8_t pad_03D1[0x7]; // 0x03D1
    InputActionMap* m_ChoiceMenu; // 0x03D8
    uint8_t pad_03D9[0x7]; // 0x03D9
    System.Collections.Generic.List<AggroInput.IChoiceMenuActions> m_ChoiceMenuActionsCallbackInterfaces; // 0x03E0
    uint8_t pad_03E1[0x7]; // 0x03E1
    InputAction* m_ChoiceMenu_OpenGameMenu; // 0x03E8
    uint8_t pad_03E9[0x7]; // 0x03E9
    InputAction* m_ChoiceMenu_ChooseLeft; // 0x03F0
    uint8_t pad_03F1[0x7]; // 0x03F1
    InputAction* m_ChoiceMenu_ChooseRight; // 0x03F8
    uint8_t pad_03F9[0x7]; // 0x03F9
    InputActionMap* m_Lobby; // 0x0400
    uint8_t pad_0401[0x7]; // 0x0401
    System.Collections.Generic.List<AggroInput.ILobbyActions> m_LobbyActionsCallbackInterfaces; // 0x0408
    uint8_t pad_0409[0x7]; // 0x0409
    InputAction* m_Lobby_ChooseLeft; // 0x0410
    uint8_t pad_0411[0x7]; // 0x0411
    InputAction* m_Lobby_ChooseRight; // 0x0418
    uint8_t pad_0419[0x7]; // 0x0419
    InputAction* m_Lobby_Confirm; // 0x0420
    uint8_t pad_0421[0x7]; // 0x0421
    InputAction* m_Lobby_BackOut; // 0x0428
    uint8_t pad_0429[0x7]; // 0x0429
    InputAction* m_Lobby_OpenGameMenu; // 0x0430
    uint8_t pad_0431[0x7]; // 0x0431
    InputActionMap* m_Dialogue; // 0x0438
    uint8_t pad_0439[0x7]; // 0x0439
    System.Collections.Generic.List<AggroInput.IDialogueActions> m_DialogueActionsCallbackInterfaces; // 0x0440
    uint8_t pad_0441[0x7]; // 0x0441
    InputAction* m_Dialogue_Complete; // 0x0448
    uint8_t pad_0449[0x7]; // 0x0449
    InputActionMap* m_Credits; // 0x0450
    uint8_t pad_0451[0x7]; // 0x0451
    System.Collections.Generic.List<AggroInput.ICreditsActions> m_CreditsActionsCallbackInterfaces; // 0x0458
    uint8_t pad_0459[0x7]; // 0x0459
    InputAction* m_Credits_FastForward; // 0x0460
    uint8_t pad_0461[0x7]; // 0x0461
    InputAction* m_Credits_Exit; // 0x0468
    uint8_t pad_0469[0x7]; // 0x0469
    InputActionMap* m_DebugCam; // 0x0470
    uint8_t pad_0471[0x7]; // 0x0471
    System.Collections.Generic.List<AggroInput.IDebugCamActions> m_DebugCamActionsCallbackInterfaces; // 0x0478
    uint8_t pad_0479[0x7]; // 0x0479
    InputAction* m_DebugCam_Move; // 0x0480
    uint8_t pad_0481[0x7]; // 0x0481
    InputAction* m_DebugCam_Look; // 0x0488
    uint8_t pad_0489[0x7]; // 0x0489
    InputAction* m_DebugCam_Modifier; // 0x0490
    uint8_t pad_0491[0x7]; // 0x0491
    InputAction* m_DebugCam_ZoomIn; // 0x0498
    uint8_t pad_0499[0x7]; // 0x0499
    InputAction* m_DebugCam_ZoomOut; // 0x04A0
    uint8_t pad_04A1[0x7]; // 0x04A1
    InputActionMap* m_Always; // 0x04A8
    uint8_t pad_04A9[0x7]; // 0x04A9
    System.Collections.Generic.List<AggroInput.IAlwaysActions> m_AlwaysActionsCallbackInterfaces; // 0x04B0
    uint8_t pad_04B1[0x7]; // 0x04B1
    InputAction* m_Always_PTT; // 0x04B8
    uint8_t pad_04B9[0x7]; // 0x04B9
    int32_t m_GamepadSchemeIndex; // 0x04C0
    uint8_t pad_04C1[0x3]; // 0x04C1
    int32_t m_KBMSchemeIndex; // 0x04C4

    // Methods
    InputActionAsset* get_asset();
    void .ctor();
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
    GameActions get_Game();
    Game1Actions get_Game1();
    Game2Actions get_Game2();
    Game3Actions get_Game3();
    DebugActions get_Debug();
    PopUpActions get_PopUp();
    QuotaReportActions get_QuotaReport();
    UnlockMenuActions get_UnlockMenu();
    OptionsMenuActions get_OptionsMenu();
    GameMenuActions get_GameMenu();
    ChoiceMenuActions get_ChoiceMenu();
    LobbyActions get_Lobby();
    DialogueActions get_Dialogue();
    CreditsActions get_Credits();
    DebugCamActions get_DebugCam();
    AlwaysActions get_Always();
    InputControlScheme get_GamepadScheme();
    InputControlScheme get_KBMScheme();
};

namespace Stations
{

    // Namespace: Stations
    class DMenuSelector : public EntityBehaviourBase
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        BoxCollider* activationBoxCollider; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        FloaterUI* _floaterUI; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        LayerMask playerCollisionMask; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool localPlayerWithinBounds; // 0x0064
    
        // Methods
        bool GetPlayerInBounds();
        void OnUpdatePresentation();
        void AddedFloater(FloaterUI* floaterAdded);
        void RemovedFloater();
        void .ctor();
    };

    // Namespace: Stations
    class IDMenuSelector
    {
    public:
    
        // Methods
        void LeftPressed();
        void RightPressed();
        void UpPressed();
        void DownPressed();
    };

} // namespace Stations

namespace Rendering
{

    // Namespace: Rendering
    class ShaderGlobalsManager : public EntityBehaviourBase
    {
    public:
        // Static fields
        // static int32_t INSIDE;
    
        uint8_t pad_0000[0x50]; // 0x0000
        float inside; // 0x0050
    
        // Methods
        void OnUpdatePresentation();
        void SetGloabls();
        void .ctor();
        static void .cctor();
    };

} // namespace Rendering

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
        static void _Write_BoxCharge/ChargeState(NetworkWriter* writer, ChargeState value);
        static ChargeState _Read_BoxCharge/ChargeState(NetworkReader* reader);
        static void _Write_BoxHaunted/Haunting(NetworkWriter* writer, Haunting value);
        static Haunting _Read_BoxHaunted/Haunting(NetworkReader* reader);
        static void _Write_ActivatedFirework/State(NetworkWriter* writer, State value);
        static State _Read_ActivatedFirework/State(NetworkReader* reader);
        static void _Write_ActivationContext(NetworkWriter* writer, ActivationContext value);
        static void _Write_ActivationContextType(NetworkWriter* writer, ActivationContextType value);
        static void _Write_ActivationContextSubType(NetworkWriter* writer, ActivationContextSubType value);
        static ActivationContext _Read_ActivationContext(NetworkReader* reader);
        static ActivationContextType _Read_ActivationContextType(NetworkReader* reader);
        static ActivationContextSubType _Read_ActivationContextSubType(NetworkReader* reader);
        static void _Write_DamageType(NetworkWriter* writer, DamageType value);
        static DamageType _Read_DamageType(NetworkReader* reader);
        static void _Write_DamageMask(NetworkWriter* writer, DamageMask value);
        static DamageMask _Read_DamageMask(NetworkReader* reader);
        static void _Write_Exploder/ExplodeState(NetworkWriter* writer, ExplodeState value);
        static ExplodeState _Read_Exploder/ExplodeState(NetworkReader* reader);
        static void _Write_FireState(NetworkWriter* writer, FireState value);
        static FireState _Read_FireState(NetworkReader* reader);
        static void _Write_LobbyPlayerClient/Info(NetworkWriter* writer, Info value);
        static Info _Read_LobbyPlayerClient/Info(NetworkReader* reader);
        static VoteOption _Read_PlayersManager/VoteOption(NetworkReader* reader);
        static void _Write_PlayersManager/VoteOption(NetworkWriter* writer, VoteOption value);
        static OrderCountNet _Read_ShiftManager/OrderCountNet(NetworkReader* reader);
        static void _Write_ShiftManager/OrderCountNet(NetworkWriter* writer, OrderCountNet value);
        static void _Write_ShiftPhase(NetworkWriter* writer, ShiftPhase value);
        static ShiftPhase _Read_ShiftPhase(NetworkReader* reader);
        static void _Write_ContractScore(NetworkWriter* writer, ContractScore value);
        static ContractScore _Read_ContractScore(NetworkReader* reader);
        static void _Write_PlayerResult[](NetworkWriter* writer, PlayerResult[][] value);
        static void _Write_PlayerResult(NetworkWriter* writer, PlayerResult value);
        static PlayerResult[][] _Read_PlayerResult[](NetworkReader* reader);
        static PlayerResult _Read_PlayerResult(NetworkReader* reader);
        static void _Write_Cactus/State(NetworkWriter* writer, State value);
        static State _Read_Cactus/State(NetworkReader* reader);
        static void _Write_ModifierLava/State(NetworkWriter* writer, State value);
        static State _Read_ModifierLava/State(NetworkReader* reader);
        static void _Write_ModifierArtStyle(NetworkWriter* writer, ModifierArtStyle value);
        static ModifierArtStyle _Read_ModifierArtStyle(NetworkReader* reader);
        static void _Write_ModifierRoomSpawn/State(NetworkWriter* writer, State value);
        static State _Read_ModifierRoomSpawn/State(NetworkReader* reader);
        static void _Write_WarehouseButtonState(NetworkWriter* writer, WarehouseButtonState value);
        static WarehouseButtonState _Read_WarehouseButtonState(NetworkReader* reader);
        static void _Write_PlayerEffectContext(NetworkWriter* writer, PlayerEffectContext value);
        static PlayerEffectContext _Read_PlayerEffectContext(NetworkReader* reader);
        static void _Write_PlayerUpgrade(NetworkWriter* writer, PlayerUpgrade value);
        static PlayerUpgrade _Read_PlayerUpgrade(NetworkReader* reader);
        static void _Write_SprinklerManager/State(NetworkWriter* writer, State value);
        static State _Read_SprinklerManager/State(NetworkReader* reader);
        static void _Write_StationBoxDestroyer/DestroyerState(NetworkWriter* writer, DestroyerState value);
        static DestroyerState _Read_StationBoxDestroyer/DestroyerState(NetworkReader* reader);
        static void _Write_StationSprinkler/SprinklerPreventionState(NetworkWriter* writer, SprinklerPreventionState value);
        static SprinklerPreventionState _Read_StationSprinkler/SprinklerPreventionState(NetworkReader* reader);
        static void _Write_StationTeleporterManager/State(NetworkWriter* writer, State value);
        static State _Read_StationTeleporterManager/State(NetworkReader* reader);
        static Count _Read_OutboundBay/Count(NetworkReader* reader);
        static void _Write_OutboundBay/Count(NetworkWriter* writer, Count value);
        static void _Write_OutboundBay/BayState(NetworkWriter* writer, BayState value);
        static BayState _Read_OutboundBay/BayState(NetworkReader* reader);
        static void InitReadWriters();
    };

} // namespace Mirror
