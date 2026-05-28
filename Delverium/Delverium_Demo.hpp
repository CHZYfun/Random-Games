// ============================================================
// Image: Assembly-CSharp.dll
// ============================================================

namespace Microsoft.CodeAnalysis
{

    // Namespace: Microsoft.CodeAnalysis
    class EmbeddedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x2C25C0
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x2C25C0
    };

} // namespace System.Runtime.CompilerServices

// Namespace: <global>
class AmbientBiomeAudio
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EventInstance mEventInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    uint32_t mListenerMask; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool mInstanceEnabled; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mPauseTimer; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool mPaused; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Il2CppString* mParameterName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float mBlendValue; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mPendingBlendValue; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    Vector3 mBlendDir; // 0x0038
    uint8_t pad_0039[0xB]; // 0x0039
    Vector3 mPendingBlendDir; // 0x0044
    uint8_t pad_0045[0xB]; // 0x0045
    float mBlendTimer; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float mBlendTimerMax; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    WorldText* mDebugText; // 0x0058

    // Methods
    void .ctor(ViewController* primaryViewController, Il2CppString* parameterName);  // RVA: 0x2C11E0
    void Initialise(ViewController* primaryViewController, Il2CppString* parameterName);  // RVA: 0x2C1090
    void EnableInstance(bool enable);  // RVA: 0x2C0C90
    void PauseInstance(bool pause);  // RVA: 0x2C1140
    void UpdatePause(float dt);  // RVA: 0x2C11A0
    void InitialiseDebugText(PlayerController* playerController);  // RVA: 0x2C0E90
    void Clear();  // RVA: 0x2C0BA0
    void ClearPendingBlendValue();  // RVA: 0x2C0B50
    void AddBlendValue(float blendValue, Vector3 blendDir);  // RVA: 0x2C0230
    void ApplyBlendValue(ViewController* primaryViewController, float blendSum, float dt, bool clear);  // RVA: 0x2C0280
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AmbientBiomeAudio> <>9__5_0;


    // Methods
    static void .cctor();  // RVA: 0x2D74A0
    void .ctor();  // RVA: 0x2C1750
    int32_t <Update>b__5_0(AmbientBiomeAudio* a, AmbientBiomeAudio* b);  // RVA: 0x2D7470
};

// Namespace: <global>
class AmbientAudioHelper
{
public:
    // Static fields
    // static int32_t cMaxBlendCount;

    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,AmbientBiomeAudio> mAmbientBiomeAudioMap; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<AmbientBiomeAudio> mAmbientBiomeAudioList; // 0x0018

    // Methods
    void Initialise();  // RVA: 0x2BF960
    void Clear();  // RVA: 0x2BF780
    void Update(float dt);  // RVA: 0x2BFB50
    void .ctor();  // RVA: 0x2C0160
};

// Namespace: <global>
class Animal : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    DynamicItemState* mDynamicState; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float mDefense; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float childSpawnTimer; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    int8_t mPlayerIndex; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Pen* mPen; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    AnimatedSpriteObject* mAnimStateObject; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    AnimState* mAnimState; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Il2CppString* mIdleAnim; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    Il2CppString* mWalkAnim; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Vector3 mDirection; // 0x0110
    uint8_t pad_0111[0xB]; // 0x0111
    Vector3 mRepulsion; // 0x011C
    uint8_t pad_011D[0xB]; // 0x011D
    BehaviourStateController* mBehaviourStateController; // 0x0128

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x2C8910
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x2C6310
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x2C5EE0
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x2C7590
    void TransitionFrom(Item* previousItem, float newAge, bool instant);  // RVA: 0x2C7B20
    void SetOwnership(int8_t _playerIndex);  // RVA: 0x2C7620
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x2C6AE0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x2C7440
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x2C68A0
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x2C6FA0
    void Delete();  // RVA: 0x2C57C0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x2C5800
    static void SpawnChild(int8_t sourceClientIndex, AnimalSpawnChild msg);  // RVA: 0x2C7900
    static Item* SpawnChild(ItemDescriptor* itemDescr, ItemState state, int8_t levelId, Vector3 spawnPos, int8_t playerIndex, Params onlineParams);  // RVA: 0x2C7720
    bool IsValidChildSpawnTile(Level* level, int32_t col, int32_t row);  // RVA: 0x2C6810
    Vector3 GetChildSpawnDropPosition(PlaceableDescriptor* childDescriptor, ItemState itemState);  // RVA: 0x2C5F00
    void Age(float dt, bool instant);  // RVA: 0x2C4F50
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x2C85C0
    void UpdateMove(float dt);  // RVA: 0x2C8170
    void UpdateRemote(float dt);  // RVA: 0x2C82A0
    void UpdateAnimEvents(Vector3 moveDir);  // RVA: 0x2C7D70
    void ApplyKnockback(Vector3 sourcePos, float knockback);  // RVA: 0x2C55B0
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float knockback, bool wouldKill);  // RVA: 0x2C70C0
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x2C55F0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x2C7130
    bool CanDespawn(bool checkAuthority);  // RVA: 0x2C56C0
    bool UpdateDespawnTimer(bool despawn, Player* nearbyPlayer, float dt);  // RVA: 0x2C8160
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x2C56F0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x2C6B40
    ItemState GetPlacementType();  // RVA: 0x2C6300
    void Unplace(ContainerItem* newParent);  // RVA: 0x2C7CB0
    static void Drop(int8_t sourceClientIndex, AnimalDrop msg);  // RVA: 0x2C5D50
    void Drop(Player* player, int8_t levelId, Vector3 worldPos, int8_t dropParent);  // RVA: 0x2C5930
    void DropImplementation(Player* player, GameTile* dropTile, Vector3 worldPos, int8_t dropParent, Vector3 dropVelocity);  // RVA: 0x2C58A0
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x2C75C0
    Vector2 GetDirection();  // RVA: 0x2C62E0
    void .ctor();  // RVA: 0x2C87E0
};

// Namespace: <global>
class AttachmentTypeAngleOffset
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AttachmentType type; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float angle; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float angleDeg; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class PivotPointDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Vector3 anchorPos; // 0x0020
    uint8_t pad_0021[0xB]; // 0x0021
    Vector3 offset; // 0x002C
    uint8_t pad_002D[0xB]; // 0x002D
    Vector3 anchorPosPPU; // 0x0038
    uint8_t pad_0039[0xB]; // 0x0039
    Vector3 offsetPPU; // 0x0044

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase);  // RVA: 0x2D7330
    void .ctor();  // RVA: 0x2D73A0
};

// Namespace: <global>
class AttachmentPointDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector3 anchorPos; // 0x0018
    uint8_t pad_0019[0xB]; // 0x0019
    Vector3 offset; // 0x0024
    uint8_t pad_0025[0xB]; // 0x0025
    Il2CppString* pivotPointName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PivotPointDescriptor* pivotPoint; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float uvFacing; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float angleStart; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float angleEnd; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float angleStartDeg; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float angleEndDeg; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    AttachmentTypeAngleOffset[][] attachmentTypeAngleOffsets; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float depth; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    bool zWrite; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    Il2CppString* spriteName; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t facingIndex; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    Vector3 anchorPosPPU; // 0x0074
    uint8_t pad_0075[0xB]; // 0x0075
    Vector3 offsetPPU; // 0x0080
    uint8_t pad_0081[0xF]; // 0x0081
    SpriteDescriptor* spriteDescriptor; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    float defaultAttachmentTypeAngleOffset; // 0x0098

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, SpriteDescriptor* parentSpriteDescriptor, Vector3 parentOffset, PivotPointCollection* pivotPointCollection);  // RVA: 0x2CB250
    float GetAttachmentTypeAngleOffset(AttachmentType weaponType);  // RVA: 0x2CB090
    static PivotPointDescriptor* GetPrefixedPivotPoint(Il2CppString* prefix, PivotPointDescriptor* referenceDescr);  // RVA: 0x2CB120
    void .ctor();  // RVA: 0x2CB500
};

// Namespace: <global>
struct KeyFrameState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 offset; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    float alpha; // 0x001C
};

// Namespace: <global>
class AnimatedSubSpriteDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* spriteName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float uvFacing; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector3 offset; // 0x001C
    uint8_t pad_001D[0xB]; // 0x001D
    float alpha; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float angleDeg; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float depth; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool zWrite; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t layerMax; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool applyColourTint; // 0x003C
    bool lerpNextKeyFrame; // 0x003D
    uint8_t pad_003E[0x2]; // 0x003E
    SpriteDescriptor* spriteDescriptor; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector3 offsetPPU; // 0x0048
    uint8_t pad_0049[0xB]; // 0x0049
    float angle; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    AnimatedSubSpriteDescriptor* nextSubSpriteKeyFrame; // 0x0058

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, AnimatedSubSpriteDescriptor* _nextSubSpriteKeyFrame);  // RVA: 0x2CAF40
    void .ctor();  // RVA: 0x2CB010
};

// Namespace: <global>
class AnimatedSpriteKeyFrameDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* spriteName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float duration; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float uvFacing; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    Vector3 offset; // 0x0020
    uint8_t pad_0021[0xB]; // 0x0021
    bool lerpNextKeyFrame; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    AttachmentPointDescriptor[][] attachmentPoints; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimatedSubSpriteDescriptor[][] subSpriteDescriptors; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteDescriptor* spriteDescriptor; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector3 offsetPPU; // 0x0048
    uint8_t pad_0049[0xB]; // 0x0049
    float keyFrameStartTime; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float keyFrameEndTime; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    AnimatedSpriteKeyFrameDescriptor* nextKeyFrame; // 0x0060

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, PivotPointCollection* pivotPointCollection, float currentDuration, AnimatedSpriteKeyFrameDescriptor* _nextKeyFrame);  // RVA: 0x2C9010
    Vector3 GetLerpedOffset(float animTime);  // RVA: 0x2C8DA0
    float GetLerpValue(float animTime);  // RVA: 0x2C8D70
    KeyFrameState GetLerpedSubSprite(int32_t subSpriteIndex, float lerpVal, AnimatedSubSpriteDescriptor* subSpriteDescriptor);  // RVA: 0x2C8E70
    void .ctor();  // RVA: 0x2C9260
};

// Namespace: <global>
class AnimatedSpriteDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    AnimatedSpriteKeyFrameDescriptor[][] keyFrames; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float totalDuration; // 0x0028

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, PivotPointCollection* pivotPointCollection);  // RVA: 0x2C8C60
    AnimatedSpriteKeyFrameDescriptor* GetKeyFrame(float time);  // RVA: 0x2C8920
    AnimatedSpriteKeyFrameDescriptor* GetKeyFrame(float time, float frameTime);  // RVA: 0x2C8990
    SpriteDescriptor* GetSprite(float time, Vector2 facing);  // RVA: 0x2C8BE0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
struct AnimType
{
public:
    // Static fields
    // static AnimType Idle;
    // static AnimType Walk;
    // static AnimType Run;
    // static AnimType Place;
    // static AnimType Aim;
    // static AnimType Water;
    // static AnimType Attack;
    // static AnimType PreAttack;
    // static AnimType PostAttack;
    // static AnimType Spawn;
    // static AnimType ChildSpawn;
    // static AnimType ChildIdle;
    // static AnimType ChildAttack;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AnimCompareType
{
public:
    // Static fields
    // static AnimCompareType Default;
    // static AnimCompareType Force;
    // static AnimCompareType OneHigherPriorityOrLess;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EventType
{
public:
    // Static fields
    // static EventType Audio;
    // static EventType Contact;
    // static EventType Effect;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class AnimEvent
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float time; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    EventType type; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Il2CppString* name; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector3 position; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimFacingDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* animatedSpriteName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 minFacing; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 maxFacing; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float depth; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimatedSpriteDescriptor* animatedSpriteDescriptor; // 0x0030

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, AnimatedSpriteDatabase* animatedSpriteDatabase, Il2CppString* animatedSpritePrefix);  // RVA: 0x2C1760
    bool TestFacing(Vector2 facing);  // RVA: 0x2C19A0
    bool TestFacingValid(Vector2 facing);  // RVA: 0x2C1940
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* nextAnimName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t priority; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimFacingDescriptor[][] animFacings; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimEvent[][] events; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float duration; // 0x0038

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, AnimatedSpriteDatabase* animatedSpriteDatabase, Il2CppString* animSpritePrefix);  // RVA: 0x2C1430
    AnimFacingDescriptor* GetFacingDescriptor(Vector2 facing);  // RVA: 0x2C1390
    void GetAnimEvents(System.Collections.Generic.List<AnimEvent>& animEvents, float startTime, float endTime);  // RVA: 0x2C12A0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimGroupDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* referenceSpriteName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* referenceAnimSpritePrefix; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool renderReference; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimDescriptor[][] animDescriptors; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SpriteDescriptor* referenceSpriteDescriptor; // 0x0038

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, AnimatedSpriteDatabase* animatedSpriteDatabase);  // RVA: 0x2C1AA0
    void Update(float dt, System.Collections.Generic.List<AnimEvent>& animEvents);  // RVA: 0x2C1B90
    AnimDescriptor* GetAnimDescriptor(Il2CppString* animName);  // RVA: 0x2C19E0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimSetDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    AnimGroupDescriptor[][] animGroupDescriptors; // 0x0020

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, AnimatedSpriteDatabase* animatedSpriteDatabase);  // RVA: 0x2C25D0
    void Update(float dt, System.Collections.Generic.List<AnimEvent>& animEvents);  // RVA: 0x2C2740
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class AnimGroupLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* groupName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* animSpritePrefix; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* attachmentPointPrefix; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* offsetSpriteName; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimGroupOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,AnimatedSpriteDescriptor> prefixedSpriteDescriptors; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<System.String,PivotPointDescriptor> prefixedPivotPoints; // 0x0018

    // Methods
    void Initialise(ItemDatabase* itemDatabase, AnimGroupDescriptor* animGroupDescriptor, AnimGroupLookup* animGroupOverride);  // RVA: 0x2C1DE0
    AnimatedSpriteDescriptor* GetPrefixedSprite(Il2CppString* prefix, Il2CppString* suffix);  // RVA: 0x2C1CC0
    PivotPointDescriptor* GetPrefixedPivotPoint(Il2CppString* prefix, Il2CppString* suffix);  // RVA: 0x2C1BA0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AnimLookupDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* baseAnimationSetName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimGroupLookup[][] animGroupLookups; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<AnimGroupOverride> animGroupOverrides; // 0x0030

    // Methods
    void CreateBaseLookup(Il2CppString* _name, Il2CppString* _animSetName);  // RVA: 0x2C2280
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x2C22E0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class AnimSetSpriteRefOverride : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    AnimLookupDescriptor* animLookupDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimSetDescriptor* animSetDescriptor; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SpriteDescriptor* refSpriteDescriptor; // 0x0030

    // Methods
    void .ctor(ItemDatabase* itemDatabase, Il2CppString* descriptorName);  // RVA: 0x2C27A0
};

// Namespace: <global>
struct AnimStateLayerParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector2 offsetUV; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t renderFlags; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Color32 tintColour; // 0x001C

    // Methods
    void .ctor(Vector2 _offssetUV, int32_t _renderFlags, Color32 _tintColour);  // RVA: 0x2C4270
};

// Namespace: <global>
class AnimState : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    float animTime; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float animSpeed; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    AnimDescriptor* currentAnimDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimFacingDescriptor* currentFacingDescriptor; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimatedSpriteDescriptor* currentSpriteDescriptor; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimatedSpriteKeyFrameDescriptor* currentKeyFrameDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 facing; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    bool facingLocked; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    Vector2 referenceUV; // 0x004C
    uint8_t pad_004D[0xB]; // 0x004D
    System.Collections.Generic.List<AnimState.AnimStateLayerParams> layerParams; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    AnimGroupOverride* animGroupOverride; // 0x0060

    // Methods
    void Initialise(AnimGroupDescriptor* animGroupDescriptor, AnimGroupOverride* _animGroupOverride);  // RVA: 0x2C4650
    static AnimatedSpriteDescriptor* GetPrefixedSprite(Il2CppString* prefix, Il2CppString* suffix);  // RVA: 0x2C4530
    AttachmentPointDescriptor* GetAttachmentPoint(Il2CppString* name, PivotPointDescriptor* pivotPointDescr);  // RVA: 0x2C42F0
    AnimatedSpriteDescriptor* GetCurrentSpriteDescriptor(AnimFacingDescriptor* facingDescriptor);  // RVA: 0x2C4490
    void UpdateReferenceSprite(SpriteDescriptor* referenceSpriteDescriptor);  // RVA: 0x2C4E50
    void SetSpriteLayerParams(Vector2 offset, int32_t renderFlags, Color32 colour, int32_t index);  // RVA: 0x2C4AB0
    void SetSpriteLayerParams(SpriteDescriptor* offsetSpriteDescriptor, int32_t renderFlags, Color32 colour, int32_t index, int32_t additionalReferenceIndex);  // RVA: 0x2C4C10
    void ClearSpriteLayer(int32_t index);  // RVA: 0x2C4280
    void SetFacing(Vector2 _facing, bool _facingLocked);  // RVA: 0x2C48D0
    void .ctor();  // RVA: 0x2C4E80
};

// Namespace: <global>
class AnimSetState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AnimSetDescriptor* mAnimSet; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<AnimState> mCurrentAnimStates; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AnimState* lockedFacingState; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* lockedFacingName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* mIdleAnim; // 0x0030

    // Methods
    void Initialise(AnimSetDescriptor* animSet, AnimLookupDescriptor* animLookup);  // RVA: 0x2C30C0
    bool HasAnimDescriptor(Il2CppString* animName);  // RVA: 0x2C2FF0
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x2C35E0
    void LockFacing(Vector2 facing, Il2CppString* lockingAnimName);  // RVA: 0x2C3450
    void UnlockFacing(bool testCurrentFacingAnims);  // RVA: 0x2C3790
    bool UpdateAnimGroup(float dt, System.Collections.Generic.List<AnimEvent>& animEvents, int32_t animGroupIndex);  // RVA: 0x2C3890
    bool Update(float dt, System.Collections.Generic.List<AnimEvent>& animEvents);  // RVA: 0x2C3F50
    void UpdateSpriteOffset(SpriteDatabase* spriteDatabase, Il2CppString* groupName, Il2CppString* offsetSpriteName);  // RVA: 0x2C3AE0
    void UpdateSpriteOffset(SpriteDatabase* spriteDatabase, SpriteDescriptor* offsetSpriteDescriptor);  // RVA: 0x2C3D20
    void UpdateSpriteOffsets(SpriteDatabase* spriteDatabase, AnimLookupDescriptor* animLookupDescriptor);  // RVA: 0x2C3E90
    AttachmentPointDescriptor* GetAttachmentPoint(Il2CppString* name, PivotPointDescriptor* pivotPointDescr);  // RVA: 0x2C2F30
    Vector3 GetAttachmentPointPos(SpritesRenderer* renderer, Vector3 objectPos, Il2CppString* name);  // RVA: 0x2C2C00
    float GetAttachmentPointAngle(Il2CppString* name);  // RVA: 0x2C2A20
    void .ctor();  // RVA: 0x2C41F0
};

// Namespace: <global>
class AnimatedSpriteObject : public SpriteObjectBase
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    Vector2 facing; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimSetState* mAnimSetState; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<AnimEvent> mAnimEvents; // 0x0040

    // Methods
    void Initialise(AnimLookupDescriptor* animLookupdescriptor, AnimSetDescriptor* animSetDescriptor, SpriteDatabase* spriteDatabase, SpriteDescriptor* spriteRefOverride);  // RVA: 0x2C93F0
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x2C9A90
    bool Update(float dt);  // RVA: 0x2CADA0
    AnimState* GetAnimState(Il2CppString* groupName);  // RVA: 0x2C92D0
    void Render(GameRendering* gameRendering, Vector3 position, int32_t renderFlags);  // RVA: 0x2C9680
    void SortedRender(SpritesRenderer* renderer, float depth, bool flat, int32_t renderFlags, float emissiveFactor);  // RVA: 0x2CA400
    void SortedRenderUI(SpritesRenderer* renderer, Vector3 _position, Vector2 _facing, int32_t renderFlags);  // RVA: 0x2C9C30
    void .ctor();  // RVA: 0x2CAE20
};

// Namespace: <global>
struct MusicState
{
public:
    // Static fields
    // static MusicState Silence;
    // static MusicState Explore;
    // static MusicState FlutterBoss;
    // static MusicState CriticalError;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class MusicHelper
{
public:
    // Static fields
    // static float SILENCE_COOLDOWN;

    uint8_t pad_0000[0x10]; // 0x0000
    MusicState mMusicState; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    MusicState mPendingMusicState; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float mSilenceStateCooldown; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float mMusicProximity; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mMusicIntensity; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool mFirstPlay; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float mBiome; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.Single,System.Boolean> mBiomeMusicTriggered; // 0x0030

    // Methods
    void Initialise(float initialBiomeValue);  // RVA: 0x2D6D40
    void ResetMusicState();  // RVA: 0x2D6F40
    bool CombatMusicActive();  // RVA: 0x2D6D00
    void SetBiome(float biomeValue);  // RVA: 0x2D6F50
    void SetMusicState(MusicState newMusicState, bool maxStateOnly);  // RVA: 0x2D7110
    void SetMaxMusicProximity(float musicProximity);  // RVA: 0x2D70F0
    void AddMusicIntensity(float musicIntensity);  // RVA: 0x2D6C40
    float GetMusicIntensity();  // RVA: 0x2D6D30
    void Update(float dt);  // RVA: 0x2D7190
    void UpdateMusicState(float dt);  // RVA: 0x2D7120
    void ApplyMusicState(MusicState newMusicState);  // RVA: 0x2D6C50
    void .ctor();  // RVA: 0x2D72B0
};

// Namespace: <global>
struct AudioEventType
{
public:
    // Static fields
    // static AudioEventType NONE;
    // static AudioEventType ATTACK;
    // static AudioEventType IMPACT;
    // static AudioEventType CONTACT;
    // static AudioEventType DESTROY;
    // static AudioEventType NPC_IDLE;
    // static AudioEventType NPC_MOVEMENT;
    // static AudioEventType NPC_HURT;
    // static AudioEventType NPC_DEATH;
    // static AudioEventType NPC_ALERT;
    // static AudioEventType NPC_ATTACK;
    // static AudioEventType PLAYER_MOVEMENT;
    // static AudioEventType PLAYER_HURT;
    // static AudioEventType PLAYER_DEATH;
    // static AudioEventType PROJECTILE_FLY;
    // static AudioEventType PLACE;
    // static AudioEventType CUSTOM;
    // static AudioEventType GLOBAL;
    // static AudioEventType OPEN;
    // static AudioEventType CLOSE;
    // static AudioEventType COLLECT;
    // static AudioEventType WATER;
    // static AudioEventType CONSUME;
    // static AudioEventType TELEPORT_IN;
    // static AudioEventType TELEPORT_OUT;
    // static AudioEventType WAYSHRINE_ACTIVATE;
    // static AudioEventType PLAYER_RESPAWN;
    // static AudioEventType PLAYER_SLEEP;
    // static AudioEventType STAIRS_DOWN;
    // static AudioEventType STAIRS_UP;
    // static AudioEventType NPC_MOVEMENT_LOOPING;
    // static AudioEventType MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AudioMovementType
{
public:
    // Static fields
    // static AudioMovementType NORMAL;
    // static AudioMovementType LOOPING;
    // static AudioMovementType NONE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class AudioPathLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* eventName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventPath; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct AudioParamType
{
public:
    // Static fields
    // static AudioParamType NONE;
    // static AudioParamType BIOME;
    // static AudioParamType SURFACE;
    // static AudioParamType WEAPON_TYPE;
    // static AudioParamType MATERIAL_TYPE;
    // static AudioParamType PROJECTILE_TYPE;
    // static AudioParamType NPC_TYPE;
    // static AudioParamType SEED_TYPE;
    // static AudioParamType ANIMAL_TYPE;
    // static AudioParamType CUSTOM;
    // static AudioParamType GLOBAL;
    // static AudioParamType CONSUME_TYPE;
    // static AudioParamType CONSUME_EFFECT;
    // static AudioParamType ELEMENT_TYPE;
    // static AudioParamType SOURCE_MATERIAL_TYPE;
    // static AudioParamType ARMOUR_MATERIAL_TYPE;
    // static AudioParamType MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AudioParamSource
{
public:
    // Static fields
    // static AudioParamSource PRIMARY;
    // static AudioParamSource SECONDARY;
    // static AudioParamSource TARGET;
    // static AudioParamSource MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class AudioParameter
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioParamType type; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* name; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* label; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioParamSource source; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float value; // 0x002C

    // Methods
    void .ctor();  // RVA: 0x2C1750
    void .ctor(AudioParamType _type, AudioParamSource _source, Il2CppString* _name, Il2CppString* _label, float _value);  // RVA: 0x2D5A80
    void UpdateData(AudioParamType _type, AudioParamSource _source, Il2CppString* _name, Il2CppString* _label, float _value);  // RVA: 0x2D59F0
    void UpdateOverrideData(AudioLabel* _label);  // RVA: 0x2D5A40
};

// Namespace: <global>
class AudioEventData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioEventType eventType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<AudioParameter> audioParameters; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Collections.Generic.Dictionary<System.String,AudioParameter>> audioSourceParameterMaps; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t audioParameterCount; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x2CBEF0
    void AddAudioParameterDefault(AudioParamDefault* paramDefault);  // RVA: 0x2CBB00
    void AddAudioParameterDefault(AudioLabel* audioLabel, AudioParamSource sourceType);  // RVA: 0x2CBC50
    AudioParameter* GetAudioParameter(Il2CppString* paramName, AudioParamSource sourceType);  // RVA: 0x2CBE50
    void Clear();  // RVA: 0x2CBDA0
    void .ctor();  // RVA: 0x2CC0F0
};

// Namespace: <global>
class AudioLabel
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* label; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* parameter; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float value; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    AudioParamType paramType; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2CCCC0
    void .ctor(Il2CppString* _label, Il2CppString* _parameter, float _value);  // RVA: 0x2CCCE0
    void Initialise(AudioParamType paramType, float defaultValue);  // RVA: 0x2CCB00
};

// Namespace: <global>
class AudioEventDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioEventType eventType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventNameOverride; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioParamSource eventParamSource; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* eventName; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AudioEventOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioEventDetails* eventData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<AudioParameter> paramOverrides; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<AudioLabel> paramOverrideList; // 0x0020

    // Methods
    void Initialise(System.Collections.Generic.List<AudioParameter> generalParamOverrides);  // RVA: 0x2CC340
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct RangeFloat
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float min; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float max; // 0x0014

    // Methods
    void .ctor(float _min, float _max);  // RVA: 0x2D7460
    bool Evaluate(float value);  // RVA: 0x2D7430
};

// Namespace: <global>
class AudioEventDataOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AudioParameter> paramOverrides; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<AudioLabel> paramOverrideList; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<AudioEventOverride> eventOverrides; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Collections.Generic.Dictionary<AudioEventType,AudioEventOverride>> eventOverrideMaps; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AudioMovementType audioMovementType; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    RangeFloat idleTimeRange; // 0x0034

    // Methods
    void Initialise();  // RVA: 0x2CB980
    void InitialiseParamOverrides();  // RVA: 0x2CB910
    void InitialiseEventOverrides();  // RVA: 0x2CB5A0
    void .ctor();  // RVA: 0x2CBA80
};

// Namespace: <global>
class AudioParameterTable
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioParamType parameterType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* mParameterName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,AudioLabel> mLookupTable; // 0x0020

    // Methods
    void .ctor(AudioParamType _parameterType, Il2CppString* _parameterName);  // RVA: 0x2CCAC0
    void PopulateTable(Il2CppString* parameterName);  // RVA: 0x2D5710
    void PopulateTable(Il2CppString* parameterName, Il2CppString* eventName);  // RVA: 0x2D5460
    void AddAudioLabelLookup(Il2CppString* label, Il2CppString* parameterName, int32_t value);  // RVA: 0x2D5210
    Il2CppString* GetLabelFromValue(int32_t value);  // RVA: 0x2D52E0
};

// Namespace: <global>
class AudioParameterLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioParamType parameterType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* parameterName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioParameterTable* lookupTable; // 0x0028

    // Methods
    void .ctor(AudioParamType _parameterType, Il2CppString* _parameterName, Il2CppString* _eventName);  // RVA: 0x2D51B0
    void Initialise();  // RVA: 0x2D50F0
};

// Namespace: <global>
class AudioParamLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioParamType paramType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* paramName; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AudioParamDefault
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioParamSource sourceType; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    AudioParamType paramType; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Il2CppString* paramLabel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* paramName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioLabel* audioLabel; // 0x0028

    // Methods
    void Initialise(Il2CppString* eventName);  // RVA: 0x2D4F00
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AudioEventLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioEventType eventType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<AudioParamDefault> parameterDefaults; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.String,AudioParamDefault> parameterDefaultsMap; // 0x0028

    // Methods
    void Initialise();  // RVA: 0x2CC1C0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AudioEventParameterMap
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AudioEventType eventType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* eventName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,AudioParameterTable> parameterNameMap; // 0x0020

    // Methods
    void .ctor(AudioEventType _eventType, Il2CppString* _eventName);  // RVA: 0x2CCAC0
    void Initialise();  // RVA: 0x2CC490
    float GetParameterValue(Il2CppString* parameterName, Il2CppString* parameterLabel, float defaultValue);  // RVA: 0x2CC3C0
    void PopulateGlobalParams();  // RVA: 0x2CC920
    void PopulateEventParams();  // RVA: 0x2CC660
};

// Namespace: <global>
class AudioTriggerCooldown
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mLookup; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float mCooldown; // 0x0014

    // Methods
    void Initialise(int32_t lookup);  // RVA: 0x2D5AF0
    bool Update(float dt);  // RVA: 0x2D5B00
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AudioManager : public MonoBehaviour
{
public:
    // Static fields
    // static float PARAM_NONE;
    // static float PARAM_UNINITIALISED;
    // static AudioManager* instance;
    // static StringBuilder* bankPathStringBuilder;
    // static AudioEventData* sEventData;
    // static System.Collections.Generic.List<AudioParameterLookup> sAudioParameterLookupTables;

    uint8_t pad_0000[0x20]; // 0x0000
    StudioEventEmitter* mMusicEmitter; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    StudioEventEmitter* mAmbienceEmitter; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AudioNPCHelper* mAudioNPCHelper; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AmbientAudioHelper* mAmbientAudioHelper; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MusicHelper* mMusicHelper; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.String> mBuiltInBanks; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<AudioPathLookup> mAudioEventPaths; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<AudioParamLookup> mParamDefinitions; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<AudioEventLookup> mDefaultAudioEventMap; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.Dictionary<System.String,AudioEventParameterMap> mEventParameterMaps; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<AudioEventParameterMap> mEventParameterList; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<AudioEventLookup> mDefaultAudioEventList; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.Dictionary<System.String,System.String> mAudioEventPathMap; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.Dictionary<System.Int32,AudioTriggerCooldown> mAudioTriggerCooldowns; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    SimplePool<AudioTriggerCooldown> mAudioTriggerCooldownPool; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<AudioTriggerCooldown> mPendingAudioTriggerCooldownDeletes; // 0x0098

    // Methods
    void Initialise(Il2CppString* modPath);  // RVA: 0x2CDCE0
    void InitialiseEventParameterMaps();  // RVA: 0x2CDA70
    void InitialiseAudioEventPathMap();  // RVA: 0x2CD960
    void Clear();  // RVA: 0x2CCDE0
    void PostCreateWorld(float initialBiomeValue);  // RVA: 0x2D0CF0
    void LogEventParameterMaps();  // RVA: 0x2CECF0
    bool ToggleMusic();  // RVA: 0x2D0F80
    void ResetMusicState();  // RVA: 0x2D0E30
    void SetMusicState(MusicState newMusicState);  // RVA: 0x2D0F20
    void SetMaxMusicProximity(float musicProximity);  // RVA: 0x2D0EF0
    void AddMusicIntensity(float musicIntensity);  // RVA: 0x2CCDB0
    float GetMusicIntensity();  // RVA: 0x2CD870
    void SetBiome(float biomeValue);  // RVA: 0x2D0E60
    void UpdateAudio(float dt, bool running);  // RVA: 0x2D3D10
    void UpdateAudioTriggerCooldowns(float dt);  // RVA: 0x2D3A60
    bool ProcessAudioTriggerCooldown(int32_t playerIndex, AudioEventType eventType);  // RVA: 0x2D0D50
    AudioEventParameterMap* GetEventParamaterMap(AudioEventType eventType, Il2CppString* eventName, bool createNew);  // RVA: 0x2CD420
    Il2CppString* GetAudioEventPath(Il2CppString* eventName);  // RVA: 0x2CCEA0
    float GetEventParameterValue(Il2CppString* eventName, Il2CppString* paramName, Il2CppString* paramLabel);  // RVA: 0x2CD750
    bool PopulateEventData(AudioEventType eventType, AudioEventDataOverride* primaryOverrides, AudioEventDataOverride* targetOverrides);  // RVA: 0x2D0060
    bool PopulateEventData(AudioEventType eventType, AudioEventDataOverride* primaryOverrides, AudioEventDataOverride* targetOverrides, AudioEventDataOverride* targetArmourOverrides);  // RVA: 0x2CFF20
    void PopulateDefaultEventData(AudioEventType eventType);  // RVA: 0x2CF9F0
    void OverrideDefaultEventData(AudioEventType eventType, AudioEventDataOverride* eventDataOverrides, AudioParamSource sourceType);  // RVA: 0x2CF820
    void OverrideDefaultEventData(System.Collections.Generic.List<AudioLabel> eventParamOverrides, AudioParamSource sourceType);  // RVA: 0x2CF630
    void PopulateEventDataValues();  // RVA: 0x2CFD70
    void LoadBanks(Il2CppString* modPath);  // RVA: 0x2CEB90
    void LoadBank(Il2CppString* bankName, Il2CppString* modPath, bool loadStringsFile);  // RVA: 0x2CE570
    AudioEventType GetAudioEventType(Il2CppString* eventName);  // RVA: 0x2CCF20
    AudioParamType GetAudioParamType(Il2CppString* paramName);  // RVA: 0x2CD170
    Il2CppString* GetParamName(AudioParamType parameterType);  // RVA: 0x2CD890
    AudioParamLookup* GetAudioParamLookup(AudioParamType parameterType);  // RVA: 0x2CD0C0
    AudioLabel* GetAudioLabel(AudioParamType parameterType, Il2CppString* label);  // RVA: 0x2CCFF0
    void PopulateParamOverrides(System.Collections.Generic.List<AudioParameter> paramOverrides, System.Collections.Generic.List<AudioLabel>& paramLabelOverrides);  // RVA: 0x2D0AB0
    AudioParameter* GetAudioParameterOverride(System.Collections.Generic.List<AudioParameter> paramOverrides, AudioParamType paramType);  // RVA: 0x2CD2A0
    void PopulateEventOverrideData(AudioEventOverride* audioEventOverride, System.Collections.Generic.List<AudioParameter> fallbackParamOverrides);  // RVA: 0x2D0170
    AudioEventLookup* GetDefaultAudioEventLookup(AudioEventType eventType);  // RVA: 0x2CD3C0
    static void TriggerAudio(int8_t sourceClientIndex, TriggerAudio msg);  // RVA: 0x2D1420
    static void TriggerOneShotAudioOnline(AudioEventType eventType, Vector3 eventPosition, int32_t level);  // RVA: 0x2D22B0
    static void Trigger2DAudio(Il2CppString* eventName, Il2CppString* parameterName, float parameterValue);  // RVA: 0x2D1000
    static void TriggerOneShotAudio(Il2CppString* eventName, Vector3 eventPosition, int32_t level, Il2CppString* parameterName, float parameterValue, LogLevel logLevel);  // RVA: 0x2D3630
    static void TriggerOneShotAudio(AudioEventType eventType, Vector3 eventPosition, int32_t level, AudioEventDataOverride* primaryOverrides, AudioEventDataOverride* targetOverrides, Il2CppString* parameterName, float parameterValue, LogLevel logLevel, int8_t playerTriggerCooldown);  // RVA: 0x2D2D60
    static void TriggerOneShotAudio(AudioEventType eventType, Vector3 eventPosition, int32_t level, AudioEventDataOverride* primaryOverrides, AudioEventDataOverride* targetOverrides, AudioEventDataOverride* targetArmourOverrides, LogLevel logLevel, int8_t playerTriggerCooldown);  // RVA: 0x2D24A0
    static bool TriggerInstancedAudio(EventInstance eventInstance, Il2CppString* eventName, Vector3 eventPosition, int32_t level, Il2CppString* parameterName, float parameterValue, Il2CppString* parameterName2, float parameterValue2);  // RVA: 0x2D1560
    static bool TriggerInstancedAudio(EventInstance eventInstance, AudioEventType eventType, Vector3 eventPosition, int32_t level, AudioEventDataOverride* primaryOverrides, AudioEventDataOverride* targetOverrides, Il2CppString* parameterName, float parameterValue, LogLevel logLevel);  // RVA: 0x2D1AB0
    static void UpdateInstancedAudio(EventInstance eventInstance, Vector3 eventPosition, int32_t level);  // RVA: 0x2D3E90
    static void StopInstancedAudio(EventInstance eventInstance, STOP_MODE stopMode);  // RVA: 0x2D0F40
    static bool IsPlaying(EventInstance eventInstance);  // RVA: 0x2CE530
    static float GetBusVolume(Il2CppString* busID);  // RVA: 0x2CD350
    static void SetBusVolume(Il2CppString* busID, float volume);  // RVA: 0x2D0E80
    void .ctor();  // RVA: 0x2D4390
    static void .cctor();  // RVA: 0x2D3F70
};

// Namespace: <global>
class AudioNPCHelper
{
public:
    // Static fields
    // static float minTriggerTime;
    // static float maxTriggerTime;

    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* mEventName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float mTriggerTimer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<Item> mTriggerItems; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    NPC* mNPC; // 0x0028

    // Methods
    void Initialise();  // RVA: 0x2D4760
    void Clear();  // RVA: 0x2D46F0
    void Update(float dt);  // RVA: 0x2D4AB0
    void .ctor();  // RVA: 0x2D4E50
};

// Namespace: <global>
struct BehaviourType
{
public:
    // Static fields
    // static BehaviourType NoChange;
    // static BehaviourType SimpleIdle;
    // static BehaviourType FollowPlayer;
    // static BehaviourType Retreat;
    // static BehaviourType Charge;
    // static BehaviourType PendingDespawn;
    // static BehaviourType Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class BehaviourState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    BehaviourStateController* mBehaviourStateController; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Item* mItem; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t mBehaviourTypeState; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mTimer; // 0x0024

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2D6BD0
    void Reset();  // RVA: 0x2D6C10
    void Update(float dt);  // RVA: 0x2D6C20
    void UpdateMusicIntensity(bool forceIfNoTarget);  // RVA: 0x2C1B90
    void EvaluateNearbyTargets(float dt);  // RVA: 0x2C1B90
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2BF6A0
    Vector3 CalculateMoveVector(float dt, float moveDist, float moveModifier, Vector3 moveDir, Vector2 facing);  // RVA: 0x2D5B30
    float GetModifiedFollowDistance(float distance, Player* player);  // RVA: 0x2D6AD0
    Player* FindClosestPlayer(float maxDistance, int32_t maxLadderDistance, Item* existingTarget, float closestPlayerDistance, Vector3 closestPlayerPosition);  // RVA: 0x2D6780
    GameTile* CalculateTargetPath(Vector3 desiredDir, Vector2Int pathSource, int32_t targetMinDistance, int32_t targetMaxDistance, float targetMaxCost, float maxAngleRange);  // RVA: 0x2D6100
    GameTile* CalculateTargetRetreatPath(Vector3 desiredDir, Vector2Int pathSource, int32_t targetMinDistance, float targetMaxCost, float maxAngleRange);  // RVA: 0x2D6530
    Vector3 CalculateTargetPathDirection(float moveDist, int32_t targetMinDistance, float targetMaxCost, GameTile* pathTargetTile);  // RVA: 0x2D5B70
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct SimpleIdleBehaviourType
{
public:
    // Static fields
    // static SimpleIdleBehaviourType Idle;
    // static SimpleIdleBehaviourType RandomWalk;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class SimpleIdleBehaviourState : public BehaviourState
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    Vector2 mDestDir; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameTile* mAnchorTile; // 0x0030

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2F0A20
    void Reset();  // RVA: 0x2F0A70
    void SetIdle();  // RVA: 0x2F0B10
    void SetRandom();  // RVA: 0x2F0B60
    void Update(float dt);  // RVA: 0x2F0D10
    void EvaluateNearbyTargets(float dt);  // RVA: 0x2F0960
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2F08F0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
struct ComplexIdleBehaviourType
{
public:
    // Static fields
    // static ComplexIdleBehaviourType Idle;
    // static ComplexIdleBehaviourType RandomWalk;
    // static ComplexIdleBehaviourType RandomWalkSimple;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ComplexIdleBehaviourState : public BehaviourState
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    GameTile* mTargetTile; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameTile* mAnchorTile; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 mDestDir; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float mRetargetTimer; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mBlockedTimer; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector2 mBlockedPos; // 0x0048

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2E2010
    void Reset();  // RVA: 0x2E2080
    void SetIdle();  // RVA: 0x2E2160
    void AutoUpdateAnchorTile();  // RVA: 0x2E1940
    void SetWalk();  // RVA: 0x2E2620
    void SetRandom();  // RVA: 0x2E21D0
    void Update(float dt);  // RVA: 0x2E2A40
    void EvaluateBlockedMovement(float dt);  // RVA: 0x2E1D70
    void EvaluateNearbyTargets(float dt);  // RVA: 0x2E1ED0
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2E1A60
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
struct FollowPlayerBehaviourType
{
public:
    // Static fields
    // static FollowPlayerBehaviourType FollowPlayer;
    // static FollowPlayerBehaviourType PendingIgnore;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class FollowPlayerBehaviourState : public BehaviourState
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    float mCurrentTargetDistance; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector3 mCurrentTargetPosition; // 0x002C
    uint8_t pad_002D[0xB]; // 0x002D
    GameTile* mTargetTile; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float mLosMoveModifier; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mDistRetreatOffset; // 0x0044

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2EEFB0
    void UpdateMusicIntensity(bool forceIfNoTarget);  // RVA: 0x2EF020
    void Reset();  // RVA: 0x2EEFE0
    void Update(float dt);  // RVA: 0x2EF4C0
    bool HasLOS(PlaceableItem* target, float maxLosDist);  // RVA: 0x2EEF00
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2EE860
    Vector3 CalculateMoveVector(float dt, float moveDist, float moveModifier, Vector3 moveDir, Vector2 facing);  // RVA: 0x2EE320
    void EvaluateNearbyTargets(float dt);  // RVA: 0x2EECE0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class ChargeBehaviourState : public BehaviourState
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    Vector2 mTargetDir; // 0x0028

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2DF550
    void UpdateMusicIntensity(bool forceIfNoTarget);  // RVA: 0x2DF5A0
    void Reset();  // RVA: 0x2DF560
    void SetCharge(Vector2 targetDir);  // RVA: 0x2DF570
    void Update(float dt);  // RVA: 0x2DF780
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2DF530
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
struct RetreatBehaviourType
{
public:
    // Static fields
    // static RetreatBehaviourType PendingRetreat;
    // static RetreatBehaviourType Retreat;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class RetreatBehaviourState : public BehaviourState
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    GameTile* mTargetTile; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector3 mRetreatDir; // 0x0030

    // Methods
    void Initialise(Item* item, BehaviourStateController* behaviourStateController);  // RVA: 0x2F0530
    void Reset();  // RVA: 0x2F0580
    void Update(float dt);  // RVA: 0x2F05B0
    Vector3 CalculateTargetPathDirection(float moveDist, float moveModifier);  // RVA: 0x2F0180
    void EvaluateNearbyTargets(float dt);  // RVA: 0x2F0340
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class BehaviourStateController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<GameTile> pathList; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Item* mItem; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    MovementBehaviourDescriptor* mBehaviourParams; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BehaviourType mCurrentBehaviourType; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<BehaviourState> mBehaviours; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float mTime; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool mFleeing; // 0x003C
    bool mInitialised; // 0x003D
    uint8_t pad_003E[0x2]; // 0x003E
    Player* mPendingFollowTarget; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Player* mFollowTarget; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Player* mRetreatTarget; // 0x0050

    // Methods
    void .ctor();  // RVA: 0x2DA150
    void Reset();  // RVA: 0x2D90D0
    void Initialise(Item* item, MovementBehaviourDescriptor* _behaviourParams);  // RVA: 0x2D8BB0
    void SetAnchor(GameTile* anchorTile);  // RVA: 0x2D9190
    GameTile* GetAnchor();  // RVA: 0x2D89C0
    bool SetFollowTarget(Player* player, bool sendOnline);  // RVA: 0x2D96F0
    Player* GetFollowTarget();  // RVA: 0x2D8A70
    BehaviourState* SetState(BehaviourType behaviourType);  // RVA: 0x2D9BD0
    void Update(float dt);  // RVA: 0x2DA080
    Vector3 CalculateMoveDirection(float dt, float moveDist, float moveModifier, Vector2 facing);  // RVA: 0x2D87F0
    void SetIdle(bool startMoving);  // RVA: 0x2D9A90
    void SetPendingFollowPlayer(Player* player);  // RVA: 0x2D9B70
    void SetFollowPlayer(Player* player, bool testCanChange, bool isLoading);  // RVA: 0x2D9350
    void SetCharge(Vector2 targetDir);  // RVA: 0x2D92A0
    void SetRetreat(Player* player, bool flee);  // RVA: 0x2D9B80
    void SetPendingDespawn();  // RVA: 0x2D9B60
    void OnPlayerRemoved(Player* player);  // RVA: 0x2D8EE0
    void OnPlayerDeath(Player* player);  // RVA: 0x2D8DE0
    void ReceivePlayerDamage(int8_t playerIndex);  // RVA: 0x2D9050
    void UpdateMusicIntensity(bool forceIfNoTarget);  // RVA: 0x2D9CD0
    bool HasPathToPlayer(Player* player);  // RVA: 0x2D8A80
    void UpdatePathsToLocalPlayers();  // RVA: 0x2D9D60
};

// Namespace: <global>
class BehaviourManager : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t sPendingRetreatProcessedCount;

    uint8_t pad_0000[0x20]; // 0x0000
    BehaviourDatabase* mBehaviourDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    WorldManager* mWorld; // 0x0028

    // Methods
    void Initialise(WorldManager* world);  // RVA: 0x2D7DF0
    void FixedUpdate();  // RVA: 0x2D7CA0
    void InitialiseBehaviour(Item* item, BehaviourStateController* state, Il2CppString* behaviourName);  // RVA: 0x2D7CE0
    void SetBehaviour(Item* item, BehaviourStateController* state, Il2CppString* behaviourName);  // RVA: 0x2D7E70
    float UpdateBehaviourState(BehaviourStateController* state, float dt, bool forceIfNoTarget);  // RVA: 0x2D7EC0
    Vector3 UpdateBehaviourState(float moveModifier, Item* item, BehaviourStateController* state, float moveDist, float dt, bool updateState, Vector2 facing);  // RVA: 0x2D7FB0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class BehaviourPhaseController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Boss* mBoss; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float mCurrentPhaseTime; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BehaviourPhaseDescriptor* mCurrentPhase; // 0x0020

    // Methods
    void Initialise(Boss* boss, Il2CppString* initialPhaseName);  // RVA: 0x2D82D0
    void RefreshBehaviour();  // RVA: 0x2D8530
    void SetPhase(int32_t phaseId);  // RVA: 0x2D86B0
    void UpdatePhaseRemote(float dt);  // RVA: 0x2D8760
    bool UpdatePhase(float dt, bool canSwitchPhase);  // RVA: 0x2D8770
    void Save(Stream* stream);  // RVA: 0x2D85D0
    void Load(Stream* stream, int32_t version);  // RVA: 0x2D8380
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct BossEffect
{
public:
    // Static fields
    // static BossEffect SpawnChild;
    // static BossEffect PreFire;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Boss : public Enemy
{
public:
    // Static fields
    // static System.Collections.Generic.List<Item> mLoot;

    uint8_t pad_0000[0x1D8]; // 0x0000
    BehaviourPhaseController* mPhaseController; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    System.Collections.Generic.List<Effect> mEffects; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    System.Collections.Generic.List<Enemy> mMobs; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    System.Collections.Generic.List<OnlineItem.Params> mPendingLoadMobs; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    System.Collections.Generic.HashSet<System.SByte> mDamageSourcePlayers; // 0x01F8

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x2DB250
    bool CanEngageTargets();  // RVA: 0x2DAAE0
    ProjectileWeapon* GetCurrentProjectileWeapon();  // RVA: 0x2DAF30
    void InitialiseEnemyPlacement();  // RVA: 0x2DB0E0
    float GetDynamicDamageModifier(int8_t playerIndex);  // RVA: 0x2DAFB0
    DamageSource GetContactDamageSourceOverride();  // RVA: 0x2DAE80
    void AddDamageSourcePlayer(int8_t playerIndex);  // RVA: 0x2DA4A0
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float knockback, bool wouldKill);  // RVA: 0x2DBE30
    void SpawnItemDrops(int32_t sourcePlayerIndex);  // RVA: 0x2DCB90
    void SpawnItemDropsLootBag(int32_t sourcePlayerIndex, int32_t mpLootIndex);  // RVA: 0x2DC720
    LootBagItem* SpawnBossLootBag(int8_t levelId, Vector3 spawnPosition, int8_t ownerIndex, Params onlineParams);  // RVA: 0x2DC5F0
    void OnEnemyRemoved(Enemy* enemy);  // RVA: 0x2DB980
    void OnRemoved();  // RVA: 0x2DB9E0
    void Delete();  // RVA: 0x2DACA0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x2DAD10
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x2DBF00
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x2DB4D0
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x2DBBE0
    static void TriggerEffect(int8_t sourceClientIndex, BossTriggerEffect msg);  // RVA: 0x2DCCB0
    void TriggerEffect(BossEffect effectType);  // RVA: 0x2DCD30
    void EffectEnded(Effect* effect);  // RVA: 0x2DAD60
    void ClearEffects();  // RVA: 0x2DAB50
    void UpdateAudio(float dt);  // RVA: 0x2C1B90
    void UpdatePhase(float dt);  // RVA: 0x2DD060
    void UpdatePhaseRemote(float dt);  // RVA: 0x2DD030
    bool EvaluatePhaseTransition(PhaseTransition* transition);  // RVA: 0x2DADD0
    static void SetPhase(int8_t sourceClientIndex, BossPhase msg);  // RVA: 0x2DC310
    void SetPhase(int32_t phaseId);  // RVA: 0x2DC510
    void ProcessPhaseChange();  // RVA: 0x2C1B90
    static void AddMob(int8_t sourceClientIndex, BossAddMob msg);  // RVA: 0x2DA9E0
    void AddMob(Enemy* mob, int8_t attachIndex);  // RVA: 0x2DA500
    void .ctor();  // RVA: 0x2DD330
    static void .cctor();  // RVA: 0x2DD2A0
};

// Namespace: <global>
struct CalendarTime
{
public:
    // Static fields
    // static float sMaxTime;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t day; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float time; // 0x0014

    // Methods
    void .ctor(int32_t _day, float _time);  // RVA: 0x2DE390
    void TrimTime();  // RVA: 0x2DE230
    bool ModifyTime(float dt);  // RVA: 0x2DDFF0
    void CeilingTime(float _time);  // RVA: 0x2DDCA0
    float TotalTime();  // RVA: 0x2DE1C0
    static float GetTimeDelta(float time1, float time2);  // RVA: 0x2DDED0
    float GetTimeDelta(float _time);  // RVA: 0x2DDE30
    float GetNextTimeDelta(float _time);  // RVA: 0x2DDE10
    bool Equals(Il2CppObject* obj);  // RVA: 0x2DDCE0
    bool Equals(CalendarTime c);  // RVA: 0x2DDCC0
    int32_t GetHashCode();  // RVA: 0x2DDD90
    static bool op_Equality(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE480
    static bool op_Inequality(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE560
    static bool op_LessThan(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE640
    static bool op_GreaterThan(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE530
    static bool op_LessThanOrEqual(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE610
    static bool op_GreaterThanOrEqual(CalendarTime lhs, CalendarTime rhs);  // RVA: 0x2DE500
    static CalendarTime op_Addition(CalendarTime a, CalendarTime b);  // RVA: 0x2DE400
    static CalendarTime op_Subtraction(CalendarTime a, CalendarTime b);  // RVA: 0x2DE670
    Il2CppString* ToString();  // RVA: 0x2DE140
    void Save(Stream* stream);  // RVA: 0x2DE070
    void Load(Stream* stream, int32_t version);  // RVA: 0x2DDF10
    static void .cctor();  // RVA: 0x2DE350
};

// Namespace: <global>
class CalendarManager : public MonoBehaviour
{
public:
    // Static fields
    // static CalendarManager* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    CalendarTime mCurrentTime; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mStartDayLimit; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mStartTime; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float mStartDelay; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mTimeScale; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float mStartTimer; // 0x0038

    // Methods
    void Initialise();  // RVA: 0x2DD680
    void Save(Stream* stream);  // RVA: 0x2DD9B0
    void Load(Stream* stream, int32_t version, bool setStartDayLimit);  // RVA: 0x2DD820
    void ResetTime();  // RVA: 0x2DD930
    void UpdateTime(int8_t sourceClientIndex, CalendarUpdate msg);  // RVA: 0x2DDC00
    void UpdateTime(float dt);  // RVA: 0x2DDA80
    bool IsNight();  // RVA: 0x2DD760
    bool IsWithinTime(float startTime, float endTime);  // RVA: 0x2DD7F0
    CalendarUpdate CreateUpdateMessage();  // RVA: 0x2DD640
    void .ctor();  // RVA: 0x2DDC20
};

// Namespace: <global>
struct DeathPenalty
{
public:
    // Static fields
    // static DeathPenalty NONE;
    // static DeathPenalty MONEY;
    // static DeathPenalty INVENTORY;
    // static DeathPenalty PERMADEATH;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct CharacterSettingsTable
{
public:
    // Static fields
    // static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String,System.String>> sPenaltyOptions;

    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int16_t hairIndex; // 0x0018
    uint8_t pad_0019[0x1]; // 0x0019
    int16_t hairColourIndex; // 0x001A
    uint8_t pad_001B[0x1]; // 0x001B
    int16_t skinColourIndex; // 0x001C
    uint8_t pad_001D[0x1]; // 0x001D
    int16_t bodyIndex; // 0x001E
    uint8_t pad_001F[0x1]; // 0x001F
    DeathPenalty deathPenalty; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* headEquipment; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* torsoEquipment; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* legsEquipment; // 0x0038

    // Methods
    static CharacterSettingsTable Default();  // RVA: 0x2DE770
    void Save(Stream* stream);  // RVA: 0x2DF010
    void Load(Stream* stream, int32_t version);  // RVA: 0x2DE810
    bool ProcessPlayerDeathPenalty(Player* player);  // RVA: 0x2DEB80
    static void .cctor();  // RVA: 0x2DF1E0
};

// Namespace: <global>
struct InternalClassType
{
public:
    // Static fields
    // static InternalClassType SpriteObject;
    // static InternalClassType AnimatedSpriteObject;
    // static InternalClassType AnimState;
    // static InternalClassType SurfaceTileObject;
    // static InternalClassType HealthBar;
    // static InternalClassType VendorItem;
    // static InternalClassType VendorItemBought;
    // static InternalClassType ItemList;
    // static InternalClassType PathfindingResult;
    // static InternalClassType Room;
    // static InternalClassType Pen;
    // static InternalClassType ItemReference;
    // static InternalClassType StatusEffect;
    // static InternalClassType SpecialSpawnGroupInstance;
    // static InternalClassType MaxInternalClassType;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ClassFactory
{
public:
    // Static fields
    // static ClassFactory* instance;
    // static System.Collections.Generic.List<System.String> sClassTypeLookup;

    uint8_t pad_0000[0x10]; // 0x0000
    ObjectPoolFactory* mObjectFactory; // 0x0010

    // Methods
    static int8_t GetClassTypeIndex(Il2CppString* classTypeName);  // RVA: 0x2DF7F0
    void .ctor();  // RVA: 0x2E18D0
    void Initialise();  // RVA: 0x2DF970
    IPoolable* Get(int8_t id);  // RVA: 0x2DF950
    IPoolable* FindTrackedItem(int8_t id, int32_t uniqueId);  // RVA: 0x2DF7D0
    void Return(IPoolable* poolable);  // RVA: 0x2E0990
    void LogGameState();  // RVA: 0x2E0910
    static void .cctor();  // RVA: 0x2E09B0
};

// Namespace: <global>
class PlayerConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float regenTimer; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float regenSpeed; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float moveSpeed; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float animSpeed; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float maxRaycastVertOffset; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float maxInteractionDist; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float moveSpeedOverride; // 0x0028

    // Methods
    float MoveSpeed();  // RVA: 0x2F00D0
    void .ctor();  // RVA: 0x2F0140
};

// Namespace: <global>
class AnimalConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool spawn; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t max; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2D7C70
};

// Namespace: <global>
class EnemyConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float repulsionOffset; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float repulsionRadiusModifier; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float repulsionModifier; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool spawn; // 0x001C

    // Methods
    bool CanSpawnEnemies();  // RVA: 0x2E6790
    void .ctor();  // RVA: 0x2E6800
};

// Namespace: <global>
class BossConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool spawn; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x2DA490
};

// Namespace: <global>
class NPCConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool spawn; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float respawnTimer; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float reassignTimer; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2EFD70
};

// Namespace: <global>
class WorldConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t maxCols; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t maxRows; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float growthModifier; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float pathfindingQuality; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float timeModifier; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float wateredDuration; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float timeModifierOverride; // 0x0028

    // Methods
    float TimeModifier();  // RVA: 0x2F0F90
    void .ctor();  // RVA: 0x2F1000
};

// Namespace: <global>
class CameraConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float minZoom; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float maxZoom; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t maxTiles; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector4 projMat; // 0x001C
    uint8_t pad_001D[0xF]; // 0x001D
    Vector2 obliqueness; // 0x002C

    // Methods
    void .ctor();  // RVA: 0x2DE6F0
};

// Namespace: <global>
class AudioConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool enabled; // 0x0010
    bool musicEnabled; // 0x0011
    bool ambienceEnabled; // 0x0012
    bool sfxEnabled; // 0x0013

    // Methods
    void .ctor();  // RVA: 0x2D7C90
};

// Namespace: <global>
class GraphicsConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t lightBoundsPadding; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x2EFD30
};

// Namespace: <global>
class PlatformConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool multiplayerEnabled; // 0x0010
    bool resetStats; // 0x0011

    // Methods
    void .ctor();  // RVA: 0x2DA490
};

// Namespace: <global>
class KnockbackConstants
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float verticalKnockbackBase; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float verticalKnockbackModifier; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float verticalKnockbackAccel; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float knockbackSlide; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float invulnerableTime; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2EFD40
};

// Namespace: <global>
class ConstantsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerConstants* player; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    NPCConstants* npc; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BossConstants* boss; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyConstants* enemy; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimalConstants* animal; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WorldConstants* world; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    CameraConstants* camera; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AudioConstants* audio; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GraphicsConstants* graphics; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlatformConstants* platform; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    KnockbackConstants* knockback; // 0x0060

    // Methods
    void CopyData(ConstantsData* sourceData);  // RVA: 0x2E2E10
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class Constants : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t GameSaveVersion;
    // static int32_t GameSaveOriginalVersionPlayerWarning;
    // static int32_t GameSaveOriginalVersionWorldWarning;
    // static int32_t GameSaveVersion_ReassignNPCs;
    // static int32_t GameSaveVersion_TreeSpriteUpdate;
    // static int32_t GameSaveVersion_WorldGuid;
    // static int32_t GameSaveVersion_WaterTileTypes;
    // static int32_t GameSaveVersion_WorldGenerateUpdate;
    // static int32_t GameSaveVersion_SeedGameTileRandom;
    // static int32_t GameSaveVersion_SaveCompression;
    // static int32_t GameSaveVersion_QuestManager;
    // static int32_t GameSaveVersion_SavePlayerHeldItem;
    // static int32_t GameSaveVersion_AddedWorldOptions;
    // static int32_t GameSaveVersion_AddedWaypoints;
    // static Constants* instance;
    // static int32_t GameSaveVersion_FEPlayerEquipmentSerialisation;
    // static int32_t GameSaveVersion_AddedBuildTargetTypes;
    // static int32_t GameSaveVersion_DroppedItemState;
    // static int32_t GameSaveVersion_AdditionalLevelData;
    // static int32_t GameSaveVersion_NewSaveVersioning;
    // static int32_t GameSaveVersion_PlayerDebugPositionData;
    // static int32_t GameSaveVersion_WateredTileData;
    // static int32_t GameSaveVersion_TargetTeleporterId;
    // static int32_t GameSaveVersion_UpdatedSerialisation;
    // static int32_t GameSaveVersion_SerialisationOptionsAdded;
    // static int32_t GameSaveVersion_WorldEventsAdded;
    // static int32_t GameSaveVersion_AnimalSerialisationAdded;
    // static int32_t SetPieceSaveVersion;
    // static int32_t StatsVersion;
    // static GameTargetType GameTargetType;
    // static int32_t GameVersion;
    // static int32_t GameSaveVersion_OnlineSave;

    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* xmlFilename; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* mUserRelativeFilename; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ConstantsData* data; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x2E32A0
    void ImportXML();  // RVA: 0x2E3090
    void Clear();  // RVA: 0x2E2F30
    void ExportXML();  // RVA: 0x2E2FC0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class CraftingManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    RecipeDatabase* recipeDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ItemManager* itemManager; // 0x0028

    // Methods
    void Initialise();  // RVA: 0x2E36A0
    bool HasIngredient(int32_t id, ContainerItem* parent, int32_t quantity, bool spend);  // RVA: 0x2E3590
    bool CanCraft(Il2CppString* name, Player* player, int32_t quantityToCraft);  // RVA: 0x2E3410
    Item* Craft(Il2CppString* name, Player* player, uint16_t quantity, bool forceRefreshIngredients, bool logFailure);  // RVA: 0x2E3480
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class Descriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool demoContent; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t id; // 0x001C

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class DescriptorGroup`1 : public Descriptor
{
public:
    System.Collections.Generic.List<T> items; // 0x0000

    // Methods
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class DescriptorCollection`1
{
public:
    Il2CppString* xmlFilename; // 0x0000
    System.Collections.Generic.List<T> items; // 0x0000
    Il2CppString* xmlModPath; // 0x0000
    Il2CppString* xmlAssetPath; // 0x0000
    int32_t firstId; // 0x0000
    int32_t lastId; // 0x0000

    // Methods
    Il2CppString* GetXMLAssetPath(bool refresh);
    Il2CppString* GetXMLModdedPath();  // RVA: 0x17A1D0
    void RefreshXMLPaths();  // RVA: 0x1868E0
    bool Initialise(int32_t _firstId);  // RVA: 0x1788C0
    void Initialise(DescriptorCollection<T> source);  // RVA: 0x175530
    void Add(T item);  // RVA: 0x203C40
    T Get(int32_t id);  // RVA: 0x203C40
    T Get(Il2CppString* name);  // RVA: 0x203C40
    T Get(Il2CppString* name, int32_t index);  // RVA: 0x203C40
    int32_t GetCount(Il2CppString* name);  // RVA: 0x1803D0
    void ImportXML(Il2CppString* modPath);  // RVA: 0x175530
    void ExportXML();  // RVA: 0x1868E0
    void ExportJSON();  // RVA: 0x1868E0
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class DescriptorDatabase`1
{
public:
    System.Collections.Generic.List<DescriptorCollection<T>> collections; // 0x0000

    // Methods
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class Particle : public IRenderPoolable
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    ParticleDescriptor* mDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float mAge; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector3 mPosition; // 0x002C
    uint8_t pad_002D[0xB]; // 0x002D
    Vector3 mVelocity; // 0x0038
    uint8_t pad_0039[0xB]; // 0x0039
    float mGravity; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Color32 mColour; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float mAlpha; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int8_t mLevel; // 0x0050

    // Methods
    void Initialise(ParticleDescriptor* descriptor, int8_t level, Vector3 position, Vector3 velocity, float gravity, Color32 color);  // RVA: 0x2EFD90
    bool Update(float dt);  // RVA: 0x2EFF40
    void Render(SpritesRenderer* renderer);  // RVA: 0x2EFE40
    void .ctor();  // RVA: 0x2F00C0
};

// Namespace: <global>
class Emitter : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    EmitterDescriptor* mDescriptor; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t mParticleIndex; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mSpawnTime; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float mParticlesPerSecondVariance; // 0x0028

    // Methods
    void Initialise(EmitterDescriptor* descriptor);  // RVA: 0x2E66A0
    void UpdateParticlesPerSecondVariance();  // RVA: 0x2E6720
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class Effect : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    EffectsManager* mManager; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EffectDescriptor* mDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<Emitter> mEmitters; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Color32 mPrimaryColour; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Item* mItem; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector3 mPosition; // 0x0040
    uint8_t pad_0041[0xB]; // 0x0041
    Vector3 mPositionOffset; // 0x004C
    uint8_t pad_004D[0xB]; // 0x004D
    Vector3 mDirection; // 0x0058
    uint8_t pad_0059[0xB]; // 0x0059
    float mAge; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    bool mAttached; // 0x0068
    int8_t mLevel; // 0x0069
    bool mEnabled; // 0x006A
    uint8_t pad_006B[0x1]; // 0x006B
    uint32_t mUpdateFrame; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    LightObject* mLightObject; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<Particle> mActiveParticles; // 0x0078

    // Methods
    void Initialise(EffectDescriptor* descriptor, EffectsManager* manager);  // RVA: 0x2E37F0
    bool Trigger(int8_t level, Vector3 position, Vector3 direction);  // RVA: 0x2E3ED0
    bool Trigger(int8_t level, Vector3 position, Vector3 direction, Color32 primaryColour);  // RVA: 0x2E3E20
    bool Trigger(Item* item, Vector3 positionOffset);  // RVA: 0x2E3F80
    void AddVisibleParticles(int8_t level, RectInt bounds);  // RVA: 0x2E36C0
    bool Update(float dt, bool addParticles, int8_t level, RectInt bounds, bool forceAnchor);  // RVA: 0x2E40C0
    bool Update(float dt, bool updateParticleRenderPos, int8_t level, bool forceAnchor);  // RVA: 0x2E4130
    void Stop();  // RVA: 0x2E3CD0
    void Kill();  // RVA: 0x2E3B20
    void .ctor();  // RVA: 0x2E4F00
};

// Namespace: <global>
class Footstep : public IPoolable
{
public:
    // Static fields
    // static float mDuration;

    uint8_t pad_0000[0x18]; // 0x0000
    int8_t mLevelId; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector2 mPosition; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    float mRadius; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float mMovementDirFactor; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mAge; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float mNormalisedRadius; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mStrength; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float mMinDist; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float mMinDistSqr; // 0x003C

    // Methods
    void Initialise(int8_t levelId, Vector2 position, Vector2 movement, float radius);  // RVA: 0x2EFB00
    bool Update(float dt);  // RVA: 0x2EFCA0
    float IntersectStrength(Vector2 position, float radius);  // RVA: 0x2EFBC0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class EffectsManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    EffectDatabase* mEffectDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LightManager* mLightManager; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ObjectPool* mParticlePool; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ObjectPool* mEmitterPool; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ObjectPool* mEffectPool; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ObjectPool* mFootstepPool; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float mExpectedDeltaTime; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float mParticleSoftLimitMin; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float mParticleSoftLimitMax; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float mParticleCountLastFrame; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float mParticleCountModifier; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float mParticleDeltaModifier; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float mParticleRateModifier; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<Particle> mVisibleParticles; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<Effect> mDetachedEffects; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<Footstep> mFootsteps; // 0x0080

    // Methods
    void Initialise();  // RVA: 0x2E55B0
    void Clear();  // RVA: 0x2E4FD0
    Effect* TriggerEffect(Il2CppString* name, int8_t level, Vector3 position, Vector3 direction);  // RVA: 0x2E5BC0
    Effect* TriggerEffect(Il2CppString* name, int8_t level, Vector3 position, Vector3 direction, Color32 primaryColour);  // RVA: 0x2E59D0
    Effect* TriggerEffect(Il2CppString* name, Item* item, Vector3 positionOffset);  // RVA: 0x2E5DB0
    void UpdateEffects(GameRendering* gameRendering, float dt, int8_t level, RectInt bounds);  // RVA: 0x2E60F0
    void PostUpdateEffects();  // RVA: 0x2E57B0
    bool UpdateEffect(Effect* effect, float dt, int8_t level, RectInt bounds, bool forceAnchor);  // RVA: 0x2E6060
    void StopEffect(Effect* effect);  // RVA: 0x2E5880
    System.Collections.Generic.List<Particle> GetVisibleParticles();  // RVA: 0x2E55A0
    void CreateFootstep(GameTile* gameTile, Vector3 position, Vector2 movement, float radius);  // RVA: 0x2E5160
    void UpdateFootsteps(float dt);  // RVA: 0x2E6340
    float GetIntersectingFootstepEffectStrength(int8_t levelId, Vector2 position, float radius);  // RVA: 0x2E54B0
    void .ctor();  // RVA: 0x2E64F0
};

// Namespace: <global>
class Enemy : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    DynamicItemState* mDynamicState; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float mDefense; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float mKnockbackModifier; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    float mWeaponContactOffset; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float mWeaponAttackSpeed; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool mIsAttacking; // 0x00E8
    bool mIsAiming; // 0x00E9
    uint8_t pad_00EA[0x6]; // 0x00EA
    Weapon* mWeapon; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    ProjectileWeapon* mProjectileWeapon; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    WeaponAttackStats mContactAttackStats; // 0x0100
    uint8_t pad_0101[0x27]; // 0x0101
    WeaponAttackStats mWeaponAttackStats; // 0x0128
    uint8_t pad_0129[0x27]; // 0x0129
    float mAimTimer; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    float mLungeTimer; // 0x0154
    uint8_t pad_0155[0x3]; // 0x0155
    int32_t mCurrentAttackBurst; // 0x0158
    uint8_t pad_0159[0x3]; // 0x0159
    int32_t mRemainingAttackBursts; // 0x015C
    uint8_t pad_015D[0x3]; // 0x015D
    float mAttackCooldown; // 0x0160
    uint8_t pad_0161[0x3]; // 0x0161
    float weaponDropChance; // 0x0164
    uint8_t pad_0165[0x3]; // 0x0165
    AnimatedSpriteObject* mAnimStateObject; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    AnimState* mAnimState; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    Il2CppString* mIdleAnim; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    Il2CppString* mWalkAnim; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    Il2CppString* mAttackAnim; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    Vector3 mDirection; // 0x0190
    uint8_t pad_0191[0xB]; // 0x0191
    float mAttackAnimSpeed; // 0x019C
    uint8_t pad_019D[0x3]; // 0x019D
    Vector3 mRepulsion; // 0x01A0
    uint8_t pad_01A1[0xF]; // 0x01A1
    BehaviourStateController* mBehaviourStateController; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    Il2CppString* mBehaviourName; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    SpawnCooldownDescriptor* mSpawnCooldownDesc; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    Player* mLastNearbyPlayer; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    float mDespawnTimer; // 0x01D0
    uint8_t pad_01D1[0x3]; // 0x01D1
    float audioMoveRestartTimer; // 0x01D4

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x2EE310
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x2E98A0
    void InitialiseAnimations();  // RVA: 0x2E8D50
    void InitialiseEnemyPlacement();  // RVA: 0x2E9380
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x2EA6C0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x2EA3E0
    ItemState GetPlacementType();  // RVA: 0x2C6300
    void InitialiseContactStats();  // RVA: 0x2E9220
    void InitialiseWeaponStats(Weapon* weapon);  // RVA: 0x2E9600
    void EquipRandomWeapon();  // RVA: 0x2E7570
    void EquipWeapon(WeaponDescriptor* descr, Params onlineParams);  // RVA: 0x2E78E0
    void EquipWeapon(Weapon* weapon);  // RVA: 0x2E7A50
    void SetSpawnGroupDescriptor(int32_t index);  // RVA: 0x2EBC60
    ProjectileWeapon* GetCurrentProjectileWeapon();  // RVA: 0x2E8D10
    bool ShouldSerialise(int32_t worldSerialisationFlags);  // RVA: 0x2EBCF0
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x2EA340
    void SendPreTransferAuthorityState(int8_t pendingClientIndex);  // RVA: 0x2EB680
    static void SetAuthorityState(int8_t sourceClientIndex, EnemyAuthorityState msg);  // RVA: 0x2EBA60
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x2EB480
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x2E9F20
    bool CanDespawn(bool checkAuthority);  // RVA: 0x2E6D90
    bool UpdateDespawnTimer(bool despawn, Player* closestLocalPlayer, float dt);  // RVA: 0x2ECAF0
    Player* GetLastNearbyPlayer();  // RVA: 0x2E8D40
    bool CanUseTeleporter();  // RVA: 0x2E7220
    bool CanShowHighlightText(Player* player);  // RVA: 0x2E71C0
    void Delete();  // RVA: 0x2E7260
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x2E72C0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x2EE020
    bool CanEngageTargets();  // RVA: 0x2E6DB0
    bool CanHitTarget(PlaceableItem* target, float maxDist);  // RVA: 0x2E6DC0
    void UpdateMove(float dt);  // RVA: 0x2ECDF0
    Vector3 UpdateLunge(Vector3 moveDir, float dt);  // RVA: 0x2ECC20
    void UpdateMusicIntensity(float proximity, float nearbyOnlinePlayerModifier);  // RVA: 0x2EDA10
    Il2CppString* GetCurrentAnim();  // RVA: 0x2E8CE0
    void UpdateRemote(float dt);  // RVA: 0x2EDB40
    void UpdateAnimEvents(Vector3 moveDir);  // RVA: 0x2EC260
    static void Attack(int8_t sourceClientIndex, EnemyAttack msg);  // RVA: 0x2E6BA0
    void Attack(int8_t levelId, Vector3 position, Vector3 direction);  // RVA: 0x2E6820
    static void RequestFireProjectile(int8_t sourceClientIndex, EnemyRequestFireProjectile msg);  // RVA: 0x2EB2E0
    static void FireProjectile(int8_t sourceClientIndex, EnemyFireProjectile msg);  // RVA: 0x2E8A70
    ProjectileItem* FireProjectile(Vector3 origin, Vector3 aimDir, int32_t burstCounter, Params inProjectileParams);  // RVA: 0x2E7F00
    static void SpawnProjectile(int8_t sourceClientIndex, EnemySpawnProjectile msg);  // RVA: 0x2EC210
    static ProjectileItem* SpawnProjectile(Il2CppString* projectileName, int8_t levelId, Vector3 spawnPos, Vector2 aimDir, Params onlineParams);  // RVA: 0x2EBD90
    DamageSource GetContactDamageSourceOverride();  // RVA: 0x2E8CB0
    void UpdateCollisions();  // RVA: 0x2EC830
    void ApplyKnockback(Vector3 sourcePos, float knockback);  // RVA: 0x2C55B0
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float damageModifier, float knockback, ItemDescriptor* damageSourceDescriptor, Player* reparentOnDeath, DamageSource damageSource);  // RVA: 0x2EA6E0
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x2E6CA0
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x2E8B40
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x2EB7C0
    bool SetAnim(AnimType animType, float animSpeed, AnimCompareType animCompareType, bool sendOnline);  // RVA: 0x2EB7F0
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x2EBC00
    Vector2 GetDirection();  // RVA: 0x2E8D20
    bool CanChangeFollowTarget();  // RVA: 0x2E6D60
    BehaviourStateController* GetBehaviourStateController();  // RVA: 0x2E8CA0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x2EA8C0
    void .ctor();  // RVA: 0x2EE180
};

// Namespace: <global>
class FPSCounter : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float lastTime; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float frameCount; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float currentFPS; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TextMeshProUGUI* fpsText; // 0x0030

    // Methods
    void Start();  // RVA: 0x3DA980
    void Update();  // RVA: 0x3DAAB0
    void SetText(Il2CppString* text);  // RVA: 0x3DA8C0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class GameLog
{
public:
    // Static fields
    // static int32_t MAX_MESSAGE_LENGTH;
    // static StringBuilder* sPrefixStringBuilder;
    // static int32_t CHAR_BLOCK_SIZE;
    // static StringBuilder* sLogMessageStringBuilder;
    // static StringBuilder* sUnityHandlerStringBuilder;
    // static Char[][] sCharArray;
    // static Byte[][] sByteArray;
    // static FileStream* sFileStream;
    // static Stopwatch* sLogStopWatch;


    // Methods
    static void Open(Il2CppString* path, Il2CppString* filename);  // RVA: 0x3DCBC0
    static void Close();  // RVA: 0x3DAE70
    static bool CanLogMessage(LogType logType, LogLevel logLevel);  // RVA: 0x3DADA0
    static StringBuilder* GetStringBuilder();  // RVA: 0x3DB1A0
    static StringBuilder* CreateLogMessagePrefix(LogLevel logLevel);  // RVA: 0x3DAF40
    static void LogMessageInternal(StringBuilder* logMessageStringBuilder, LogLevel logLevel, bool suppressStackTrace);  // RVA: 0x3DB460
    static void LogMessageToDebugLogger(StringBuilder* logMessageStringBuilder, LogLevel logLevel);  // RVA: 0x3DB620
    static void LogMessageToLogFile(StringBuilder* logMessageStringBuilder, Il2CppString* stackTrace, LogLevel logLevel);  // RVA: 0x3DB740
    static void WriteStringBuilderToLog(StringBuilder* stringBuilder);  // RVA: 0x3DCE50
    static void WriteStringToLog(Il2CppString* stringMessage);  // RVA: 0x3DD020
    static void HandleDebugLogMessageCallback(Il2CppString* logString, Il2CppString* stackTrace, LogType type);  // RVA: 0x3DB200
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message);  // RVA: 0x3DC320
    static void LogMessage(LogType logType, LogLevel logLevel, StringBuilder* message);  // RVA: 0x3DC840
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message1, Il2CppString* message2);  // RVA: 0x3DC3F0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message1, Il2CppString* message2, Il2CppString* message3);  // RVA: 0x3DC0F0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message1, Il2CppString* message2, Il2CppString* message3, Il2CppString* message4);  // RVA: 0x3DB8B0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message1, Il2CppString* message2, Il2CppString* message3, Il2CppString* message4, Il2CppString* message5);  // RVA: 0x3DCA80
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message1, Il2CppString* message2, Il2CppString* message3, Il2CppString* message4, Il2CppString* message5, Il2CppString* message6);  // RVA: 0x3DBAF0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, float floatValue);  // RVA: 0x3DBE60
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, uint64_t ulongValue);  // RVA: 0x3DBD50
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue);  // RVA: 0x3DBC40
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, Il2CppString* message2, int32_t intValue);  // RVA: 0x3DB9D0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue, Il2CppString* message2, int32_t intValue2);  // RVA: 0x3DC1F0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue, Il2CppString* message2, int32_t intValue2, Il2CppString* message3, int32_t intValue3);  // RVA: 0x3DBF90
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue, Il2CppString* message2, int32_t intValue2, Il2CppString* message3, int32_t intValue3, Il2CppString* message4, int32_t intValue4);  // RVA: 0x3DC4E0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue, Il2CppString* message2, int32_t intValue2, Il2CppString* message3, int32_t intValue3, Il2CppString* message4, int32_t intValue4, Il2CppString* message5, int32_t intValue5);  // RVA: 0x3DC8D0
    static void LogMessage(LogType logType, LogLevel logLevel, Il2CppString* message, int32_t intValue, Il2CppString* message2, int32_t intValue2, Il2CppString* message3, int32_t intValue3, Il2CppString* message4, int32_t intValue4, Il2CppString* message5, int32_t intValue5, Il2CppString* message6, int32_t intValue6);  // RVA: 0x3DC660
    static void LogException(LogType logType, LogLevel logLevel, Exception* e, Il2CppString* prefix1, Il2CppString* prefix2, Il2CppString* prefix3);  // RVA: 0x3DB320
    void .ctor();  // RVA: 0x2C1750
    static void .cctor();  // RVA: 0x3DD170
};

// Namespace: <global>
class ItemList : public ITrackedPoolable
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<Item> mItems; // 0x0020

    // Methods
    void DeleteAll();  // RVA: 0x3E26F0
    void .ctor();  // RVA: 0x3E27D0
};

// Namespace: <global>
struct TraversalType
{
public:
    // Static fields
    // static TraversalType Invalid;
    // static TraversalType Clear;
    // static TraversalType DeepWater;
    // static TraversalType Water;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PathfindingResult : public ITrackedPoolable
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameTile* mGameTile; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float mExpiryTime; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Single[][] mPathCost; // 0x0030

    // Methods
    void Initialise(GameTile* gameTile);  // RVA: 0x3F0160
    void Reset();  // RVA: 0x3F0190
    bool Update(float dt);  // RVA: 0x3F01A0
    void Delete();  // RVA: 0x3F0140
    void .ctor();  // RVA: 0x3F01C0
};

// Namespace: <global>
struct TileParams
{
public:
    // Static fields
    // static TileParams Const;
    // static TileParams River;
    // static TileParams Ocean;
    // static TileParams Tilled;
    // static TileParams SaveMask;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t value__; // 0x0010
};

// Namespace: <global>
struct TileSaveParams
{
public:
    // Static fields
    // static TileSaveParams Object;
    // static TileSaveParams Surface;
    // static TileSaveParams Items;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t value__; // 0x0010
};

// Namespace: <global>
struct TileStateFlags
{
public:
    // Static fields
    // static TileStateFlags Marked;
    // static TileStateFlags Watered;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t value__; // 0x0010
};

// Namespace: <global>
struct TileAdjacencyFlags
{
public:
    // Static fields
    // static TileAdjacencyFlags W;
    // static TileAdjacencyFlags N;
    // static TileAdjacencyFlags E;
    // static TileAdjacencyFlags S;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct PathfindingType
{
public:
    // Static fields
    // static PathfindingType Normal;
    // static PathfindingType NormalDoors;
    // static PathfindingType Flying;
    // static PathfindingType Ghost;
    // static PathfindingType Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class GameTile
{
public:
    // Static fields
    // static int8_t tilledGroundType;
    // static MiniTileTypeDescriptor* sTilledDescriptor;
    // static Byte[][] sByteArray;
    // static System.Collections.Generic.List<MiniTileTypeDescriptor> sMiniTileTypeDescriptors;

    uint8_t pad_0000[0x10]; // 0x0000
    ItemBase* mChildObject; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Item* mSurfaceObject; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t mItemListId; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t mPathfindingId; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    uint8_t mParams; // 0x0028
    int8_t mLevelId; // 0x0029
    uint8_t mRandVal; // 0x002A
    uint8_t mVisibility; // 0x002B
    int8_t mGroundType; // 0x002C
    int8_t mBiomeType; // 0x002D
    uint8_t mTileStateFlags; // 0x002E
    uint8_t pad_002F[0x1]; // 0x002F
    int16_t mChildObjectId; // 0x0030
    uint8_t pad_0031[0x1]; // 0x0031
    int16_t mSurfaceType; // 0x0032
    uint8_t pad_0033[0x1]; // 0x0033
    int16_t mX; // 0x0034
    uint8_t pad_0035[0x1]; // 0x0035
    int16_t mY; // 0x0036
    uint8_t pad_0037[0x1]; // 0x0037
    int16_t mNearestNeighbourPathFlagsNormal; // 0x0038
    uint8_t pad_0039[0x1]; // 0x0039
    int16_t mNearestNeighbourPathFlagsNormalDoors; // 0x003A
    uint8_t pad_003B[0x1]; // 0x003B
    int16_t mNearestNeighbourPathFlagsFlying; // 0x003C
    uint8_t pad_003D[0x1]; // 0x003D
    int16_t mNearestNeighbourPathFlagsGhost; // 0x003E

    // Methods
    static void InitialiseStatic(MiniTileDatabase* miniTileDatabase);  // RVA: 0x3DDE20
    void .ctor();  // RVA: 0x3E00A0
    void .ctor(int8_t levelId, int16_t x, int16_t y);  // RVA: 0x3E0130
    void Clear();  // RVA: 0x3DD530
    void Copy(GameTile* gameTile, bool includeTileType);  // RVA: 0x3DD6B0
    void SetChildObject(int16_t childObjectId, ItemBase* childObject);  // RVA: 0x3DFBF0
    bool IsValid();  // RVA: 0x3DE190
    int32_t MaxAxisDist(GameTile* gameTile);  // RVA: 0x3DEEB0
    int8_t GroundType();  // RVA: 0x3DDDB0
    float get_MoveCost();  // RVA: 0x3E0460
    float get_Height();  // RVA: 0x3E0380
    TraversalType get_TraversalType();  // RVA: 0x3E0540
    float get_AudioSurface();  // RVA: 0x3E01E0
    Vector2 get_ChildPos();  // RVA: 0x3E0350
    void Save(Stream* stream);  // RVA: 0x3DF940
    void SaveWithSpawnId(FileStream* fStream);  // RVA: 0x3DF690
    void Load(Stream* fStream, int32_t version, int8_t levelId, ItemIndexTable* tileIndexTable, ItemIndexTable* biomeIndexTable, ItemIndexTable* itemIndexTable);  // RVA: 0x3DEBC0
    void Initialise(int32_t _mX, int32_t _mY, Params onlineParams);  // RVA: 0x3DDF30
    void UpdateItemsPreSave();  // RVA: 0x3DFFC0
    void SaveObjects(Stream* stream, bool saveObjectState, int32_t worldSerialisationFlags);  // RVA: 0x3DF2D0
    void LoadObjects(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool clearExistingObjects, int32_t worldSerialisationFlags, System.Collections.Generic.Dictionary<System.Int32,System.Int32> spawnTemplateConversions);  // RVA: 0x3DE290
    void PostLoadObjects(int32_t worldSerialisationFlags);  // RVA: 0x3DEFA0
    void Delete();  // RVA: 0x3DD7C0
    void SetPathCost(float cost, int32_t playerPathfindingIndex);  // RVA: 0x3DFC10
    float GetPathCost(int8_t localPlayerIndex, int32_t pathfindingType);  // RVA: 0x3DDAC0
    void SetPathFindingAdjacencyFlags(GameTile* destTile, int32_t playerPathfindingIndex, PathfindingType pathfindingType);  // RVA: 0x3DFE50
    GameTile* GetPathfindingAdjacencyTarget(int8_t localPlayerIndex, int32_t pathfindingType);  // RVA: 0x3DDC00
    static int32_t GetTileAdjacencyFlags(int32_t sourceCol, int32_t sourceRow, int32_t destCol, int32_t destRow);  // RVA: 0x3DDCE0
    static void GetTileAdjacencyFromFlag(int32_t adjacencyFlag, int32_t colOffset, int32_t rowOffset);  // RVA: 0x3DDD70
    static int32_t GetTileAdjacencyFlags(Vector3 dir);  // RVA: 0x3DDD10
    ItemList* GetItemList();  // RVA: 0x3DD9F0
    void AddItem(Item* item);  // RVA: 0x3DD3A0
    void RemoveItem(Item* item);  // RVA: 0x3DF180
    bool ContainsItem(Item* item);  // RVA: 0x3DD5A0
    static void .cctor();  // RVA: 0x3DFFF0
};

// Namespace: <global>
struct InputButtonIndex
{
public:
    // Static fields
    // static InputButtonIndex Core_Close;
    // static InputButtonIndex Core_ScrollUp;
    // static InputButtonIndex Core_ScrollDown;
    // static InputButtonIndex Menu_Up;
    // static InputButtonIndex Menu_Down;
    // static InputButtonIndex Menu_Left;
    // static InputButtonIndex Menu_Right;
    // static InputButtonIndex Menu_Select;
    // static InputButtonIndex Menu_Back;
    // static InputButtonIndex Menu_TabLeft;
    // static InputButtonIndex Menu_TabRight;
    // static InputButtonIndex Common_Primary;
    // static InputButtonIndex Common_Rotate;
    // static InputButtonIndex Common_AutoCursor;
    // static InputButtonIndex Common_Quickbar_1;
    // static InputButtonIndex Common_Quickbar_2;
    // static InputButtonIndex Common_Quickbar_3;
    // static InputButtonIndex Common_Quickbar_4;
    // static InputButtonIndex Common_Quickbar_5;
    // static InputButtonIndex Common_Quickbar_6;
    // static InputButtonIndex Common_Quickbar_7;
    // static InputButtonIndex Common_Quickbar_8;
    // static InputButtonIndex Common_Quickbar_9;
    // static InputButtonIndex Common_Quickbar_10;
    // static InputButtonIndex Common_Interact;
    // static InputButtonIndex Common_Inventory;
    // static InputButtonIndex Common_Map;
    // static InputButtonIndex Common_CycleLeft;
    // static InputButtonIndex Common_CycleRight;
    // static InputButtonIndex Common_ZoomIn;
    // static InputButtonIndex Common_ZoomOut;
    // static InputButtonIndex HUD_KB_Modifier_1;
    // static InputButtonIndex HUD_KB_Modifier_2;
    // static InputButtonIndex HUD_GP_Modifier_1;
    // static InputButtonIndex HUD_GP_Modifier_2;
    // static InputButtonIndex HUD_Select;
    // static InputButtonIndex HUD_KB_Use;
    // static InputButtonIndex HUD_Take1;
    // static InputButtonIndex HUD_Take10;
    // static InputButtonIndex HUD_Drop;
    // static InputButtonIndex HUD_Store;
    // static InputButtonIndex HUD_Trash;
    // static InputButtonIndex HUD_TabLeft;
    // static InputButtonIndex HUD_TabRight;
    // static InputButtonIndex HUD_PageLeft;
    // static InputButtonIndex HUD_PageRight;
    // static InputButtonIndex Game_Torch;
    // static InputButtonIndex MAXInputButtonIndex;
    // static InputButtonIndex IGNORED;
    // static InputButtonIndex Common_Movement;
    // static InputButtonIndex Common_Facing;
    // static InputButtonIndex MAXInputAxisIndex;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct DisplayButtonIndex
{
public:
    // Static fields
    // static DisplayButtonIndex None;
    // static DisplayButtonIndex Common_Primary;
    // static DisplayButtonIndex Common_Rotate;
    // static DisplayButtonIndex Common_GP_AutoCursor;
    // static DisplayButtonIndex Common_KB_Interact;
    // static DisplayButtonIndex Common_KB_Inventory;
    // static DisplayButtonIndex Common_KB_Map;
    // static DisplayButtonIndex Common_KB_CycleLeft;
    // static DisplayButtonIndex Common_KB_CycleRight;
    // static DisplayButtonIndex Common_KB_ZoomIn;
    // static DisplayButtonIndex Common_KB_ZoomOut;
    // static DisplayButtonIndex Game_Torch;
    // static DisplayButtonIndex Game_GP_Inventory;
    // static DisplayButtonIndex Game_GP_Map;
    // static DisplayButtonIndex Game_GP_ZoomIn;
    // static DisplayButtonIndex Game_GP_ZoomOut;
    // static DisplayButtonIndex Game_GP_Interact;
    // static DisplayButtonIndex Game_GP_CycleLeft;
    // static DisplayButtonIndex Game_GP_CycleRight;
    // static DisplayButtonIndex HUD_KB_Modifier_1;
    // static DisplayButtonIndex HUD_KB_Modifier_2;
    // static DisplayButtonIndex HUD_GP_Modifier_1;
    // static DisplayButtonIndex HUD_GP_Modifier_2;
    // static DisplayButtonIndex HUD_Select;
    // static DisplayButtonIndex HUD_KB_Use;
    // static DisplayButtonIndex HUD_GP_Interact;
    // static DisplayButtonIndex HUD_GP_Back;
    // static DisplayButtonIndex HUD_Take1;
    // static DisplayButtonIndex HUD_Take10;
    // static DisplayButtonIndex HUD_Drop;
    // static DisplayButtonIndex HUD_Store;
    // static DisplayButtonIndex HUD_Trash;
    // static DisplayButtonIndex HUD_GP_CycleLeft;
    // static DisplayButtonIndex HUD_GP_CycleRight;
    // static DisplayButtonIndex MAX_DISPLAY_BUTTON_INDEX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct InputActionFlags
{
public:
    // Static fields
    // static InputActionFlags None;
    // static InputActionFlags MouseInsideGameArea;
    // static InputActionFlags MouseOutsideGameArea;
    // static InputActionFlags IsModifier;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class DisplayButtonData
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.String,System.String>> sControllerIm
    uint8_t pad_0000[0x10]; // 0x0000
    DisplayButtonIndex mDisplayButtonIndex; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputAction* mInputAction; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InputActionFlags mInputActionFlags; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* mDisplayName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* mPath; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SpriteDescriptor* mButtonSpriteDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DisplayButtonIndex mModifierIndex; // 0x0040

    // Methods
    void .ctor(DisplayButtonIndex displayButtonIndex);  // RVA: 0x3DA840
    void Initialise(InputAction* action, InputActionFlags inputActionFlags, PlayerInputState* inputState, System.Collections.Generic.List<DisplayButtonData> currentDisplayDataList);  // RVA: 0x3D9A40
    void Refresh(PlayerInputState* inputState, System.Collections.Generic.List<DisplayButtonData> currentDisplayDataList);  // RVA: 0x3D9A90
    void Reset();  // RVA: 0x3D9E90
    int32_t GetNextCoreBindingIndex(int32_t startIndex);  // RVA: 0x3D98E0
    void UpdateModifierIndex(System.Collections.Generic.List<DisplayButtonData> currentDisplayDataList, Il2CppString* modifierPath);  // RVA: 0x3D9F10
    static void .cctor();  // RVA: 0x3D9FF0
};

// Namespace: <global>
class ButtonLookupData
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<System.String,ButtonLookupData> sInputButtonLookupTable;

    uint8_t pad_0000[0x10]; // 0x0000
    InputButtonIndex inputButtonIndex; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    DisplayButtonIndex displayButtonIndex; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    InputActionFlags inputActionFlags; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* actionStringID; // 0x0020

    // Methods
    void .ctor(InputButtonIndex _inputButtonIndex, DisplayButtonIndex _displayButtonIndex, InputActionFlags _inputActionFlags, Il2CppString* _actionStringID);  // RVA: 0x3D9880
    static void .cctor();  // RVA: 0x3D7A80
};

// Namespace: <global>
class PlayerButtonState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerInputState* mPlayerInputState; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool mClearNextUpdate; // 0x0018
    bool mPressed; // 0x0019
    bool mRetriggeredThisFrame; // 0x001A
    uint8_t pad_001B[0x1]; // 0x001B
    int32_t mRetriggerCount; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mRetriggerTimer; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool mPressedLastFrame; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    System.Collections.Generic.List<UnityEngine.InputSystem.InputAction> mActions; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t mInputSourceType; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Type* releaseOnly; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputActionFlags mInputActionFlags; // 0x0040

    // Methods
    void .ctor();  // RVA: 0x3F1410
    void .ctor(PlayerInputState* playerInputState);  // RVA: 0x3F1490
    bool ActionPerformedThisFrame();  // RVA: 0x3F05D0
    bool ActionReleasedThisFrame();  // RVA: 0x3F06A0
    bool ActionInProgress(Il2CppString* actionName);  // RVA: 0x3F04C0
    float GetMagnitude();  // RVA: 0x3F07F0
    bool Get(int32_t controllerTypeFilter);  // RVA: 0x3F0AA0
    bool GetDown(int32_t controllerTypeFilter, bool includeRetrigger);  // RVA: 0x3F0790
    bool GetReleased(int32_t controllerTypeFilter);  // RVA: 0x3F09C0
    void LateUpdate();  // RVA: 0x3F0AC0
    void Reset();  // RVA: 0x3F1280
    void OnFocusLost();  // RVA: 0x3F0E40
    void RegisterAction(InputAction* action, InputActionFlags inputActionFlags);  // RVA: 0x3F1130
    bool CheckMouseGameArea();  // RVA: 0x3F0750
    void OnPerformed(CallbackContext context);  // RVA: 0x3F0E50
    void OnCanceled(CallbackContext context);  // RVA: 0x3F0D00
};

// Namespace: <global>
class PlayerAxisState : public PlayerButtonState
{
public:
    uint8_t pad_0000[0x48]; // 0x0000
    Vector2 value; // 0x0048

    // Methods
    void .ctor(PlayerInputState* playerInputState);  // RVA: 0x3F0420
    void OnPerformed(CallbackContext context);  // RVA: 0x3F03A0
    void OnCanceled(CallbackContext context);  // RVA: 0x3F0220
};

// Namespace: <global>
struct AimType
{
public:
    // Static fields
    // static AimType None;
    // static AimType Mouse;
    // static AimType AimStick;
    // static AimType MoveStick;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ControllerType
{
public:
    // Static fields
    // static ControllerType None;
    // static ControllerType Mouse;
    // static ControllerType Keyboard;
    // static ControllerType Gamepad;
    // static ControllerType MouseKeyboard;
    // static ControllerType Any;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PlayerInputState
{
public:
    // Static fields
    // static float cDeadZone;

    uint8_t pad_0000[0x10]; // 0x0000
    Vector2 mMoveDir; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 mAveragedMoveDir; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool mAiming; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mAimAngle; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Vector2 mAimDir; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float mAimLength; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    Vector2 mPlaceVectorRaw; // 0x0034
    uint8_t pad_0035[0x7]; // 0x0035
    Vector2 mPlaceVector; // 0x003C
    uint8_t pad_003D[0x7]; // 0x003D
    Vector2 mManualPlaceOffset; // 0x0044
    uint8_t pad_0045[0x7]; // 0x0045
    AimType mAimType; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool mUsePlacementCursor; // 0x0050
    bool mAutoCursorMode; // 0x0051
    uint8_t pad_0052[0x2]; // 0x0052
    int32_t mPlacementOrientation; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    Vector3 mMousePosCheck; // 0x0058
    uint8_t pad_0059[0xB]; // 0x0059
    Vector3 mMouseWorldPos; // 0x0064
    uint8_t pad_0065[0xB]; // 0x0065
    PlayerController* mPlayerController; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    int8_t mLocalPlayerIndex; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<UnityEngine.InputSystem.InputDevice> mInputDevices; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    InputUser mInputUser; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool mAttackPressed; // 0x008C
    bool mAimAttackPressed; // 0x008D
    bool mControlInGameArea; // 0x008E
    bool mUseKeyboardFacing; // 0x008F
    System.Collections.Generic.List<PlayerButtonState> mButtonStates; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<PlayerAxisState> mAxisStates; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t mCurrentInputTypes; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.Dictionary<System.String,SpriteDescriptor> mControllerImageSprites; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<DisplayButtonData> mDisplayButtonData; // 0x00B0

    // Methods
    void .ctor(int8_t localPlayerIndex, int32_t controllerIndex);  // RVA: 0x3F55F0
    void Reset();  // RVA: 0x3F3D00
    void SetInputUser(InputUser inputUser);  // RVA: 0x3F3D70
    void RefreshControllerSprites();  // RVA: 0x3F2C10
    void RefreshCurrentDeviceTypes();  // RVA: 0x3F2FD0
    void RegisterActionMap(InputActionMap* inputActionMap, bool updateDisplayData);  // RVA: 0x3F3820
    void RefreshDisplayButtonData();  // RVA: 0x3F3780
    InputDevice* GetFirstGamepadInputDevice();  // RVA: 0x3F22A0
    void RefreshCurrentInputTypes();  // RVA: 0x3F35B0
    void SetPlayerController(PlayerController* playerController);  // RVA: 0x3F4110
    void LateUpdate();  // RVA: 0x3F2790
    void ClearButtonPressStates();  // RVA: 0x3F1930
    void ResetDevices();  // RVA: 0x3F3C30
    DisplayButtonData* GetButtonDisplayData(DisplayButtonIndex index);  // RVA: 0x3F1DD0
    void Update();  // RVA: 0x3F4350
    void UpdateMouseEnabledState();  // RVA: 0x3F41C0
    bool CalculateMouseEnabledState();  // RVA: 0x3F15B0
    void SetMouseEnabled(bool enabled);  // RVA: 0x3F3DF0
    Vector2 GetAxis(InputButtonIndex axisIndex);  // RVA: 0x3F1D60
    int32_t GetAxisInputSource(InputButtonIndex axisIndex);  // RVA: 0x3F1D00
    int32_t GetButtonInputSource(InputButtonIndex buttonIndex);  // RVA: 0x3F1F10
    bool GetButtonDown(InputButtonIndex buttonIndex, int32_t controllerTypeFilter, bool includeRetrigger, bool testMouseInsideGameArea);  // RVA: 0x3F1E30
    bool GetCloseButtonDown(int32_t controllerTypeFilter);  // RVA: 0x3F21B0
    bool GetMenuSelectButtonDown();  // RVA: 0x3F25C0
    bool GetMenuUpButtonDown(bool includeFELeft);  // RVA: 0x3F2690
    bool GetMenuDownButtonDown(bool includeFERight);  // RVA: 0x3F23A0
    bool GetMenuLeftButtonDown(bool includeRetrigger);  // RVA: 0x3F24A0
    bool GetMenuRightButtonDown(bool includeRetrigger);  // RVA: 0x3F2530
    void ResetButtonRetrigger(InputButtonIndex buttonIndex);  // RVA: 0x3F3BC0
    bool GetButtonReleased(InputButtonIndex buttonIndex, int32_t controllerTypeFilter);  // RVA: 0x3F1FE0
    bool GetButton(InputButtonIndex buttonIndex, int32_t controllerTypeFilter, bool testMouseInsideGameArea);  // RVA: 0x3F2100
    float GetButtonMagnitude(InputButtonIndex buttonIndex);  // RVA: 0x3F1F70
    Vector2 MoveDir();  // RVA: 0x3F2B20
    bool ControlInGameArea(bool testAimType, bool testGameObject);  // RVA: 0x3F19E0
    bool AttackPressed();  // RVA: 0x3F1590
    bool AimAttackPressed();  // RVA: 0x3F1540
    bool UseKeyboardFacing();  // RVA: 0x3F55D0
    bool Aiming();  // RVA: 0x3F1580
    void SetPlaceVector(Vector2 placeVector, float placementLimit);  // RVA: 0x3F3F60
    Vector2 PlaceVector(float placementLimit);  // RVA: 0x3F2B40
    bool CursorOverPlacementTile(Vector2 playerPos);  // RVA: 0x3F1C40
    AimType CursorAimType();  // RVA: 0x3F1C30
    int32_t PlacementOrientation();  // RVA: 0x3F2C00
    Vector3 MouseWorldPos();  // RVA: 0x3F2B00
    bool UsePlacementCursor();  // RVA: 0x3F55E0
    bool UseAimingCursor();  // RVA: 0x3F5500
    bool AutoCursorMode();  // RVA: 0x3F15A0
    float AimLength();  // RVA: 0x3F1570
    float AimAngle();  // RVA: 0x3F1530
    Vector2 AimDir();  // RVA: 0x3F1550
};

// Namespace: <global>
struct ControllerRegistrationMode
{
public:
    // Static fields
    // static ControllerRegistrationMode PrimaryPlayer;
    // static ControllerRegistrationMode AdditionalPlayers;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class InputManager : public MonoBehaviour
{
public:
    // Static fields
    // static InputManager* instance;
    // static int32_t MaxLocalPlayers;

    uint8_t pad_0000[0x20]; // 0x0000
    bool mLogInput; // 0x0020
    bool mAutoCursor; // 0x0021
    bool mMouseEnabled; // 0x0022
    uint8_t pad_0023[0x5]; // 0x0023
    GameObject* controllerCanvasPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ControllerCanvas* mControllerCanvas; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float mControllerCanvasCooldown; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool mIsFocused; // 0x003C
    bool mIgnoreNewPlayers; // 0x003D
    uint8_t pad_003E[0x2]; // 0x003E
    ControllerRegistrationMode mControllerRegistrationMode; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<PlayerInputState> mPlayerInputStates; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<UnityEngine.InputSystem.InputDevice> mPairedDevices; // 0x0050

    // Methods
    void Initialise();  // RVA: 0x3E0BE0
    void InitialiseControllerCanvas(PlayerInputState* playerInputState);  // RVA: 0x3E0990
    void HideControllerCanvas(float canvasCooldown);  // RVA: 0x3E08E0
    bool IsControllerCanvasActive();  // RVA: 0x3E0FB0
    void SetIgnoreNewPlayers(bool ignore);  // RVA: 0x3E1BC0
    void OnUnpairedDeviceUsed(InputControl* inputControl, InputEventPtr inputEventPtr);  // RVA: 0x3E10D0
    bool ReassignGamepad(InputDevice* device);  // RVA: 0x3E16C0
    void SetControllerRegistrationMode(ControllerRegistrationMode mode);  // RVA: 0x3E1BB0
    void SetPlayerDevice(int32_t localPlayerIndex, InputDevice* device);  // RVA: 0x3E1BD0
    Il2CppString* GetBindingOverrideString(InputUser inputUser);  // RVA: 0x3E07C0
    void ApplyBindingOverrideString(InputActionAsset* inputActionAsset, Il2CppString* bindingOverrideString);  // RVA: 0x3E07A0
    void ApplyBindingOverrideString(InputUser inputUser, Il2CppString* bindingOverrideString);  // RVA: 0x3E06D0
    void UnpairDevice(PlayerInputState* playerInputState, InputDevice* device);  // RVA: 0x3E21D0
    void RemoveUser(int32_t playerIndex);  // RVA: 0x3E18B0
    void AddPlayer(int8_t localPlayerIndex, int32_t controllerIndex);  // RVA: 0x3E0600
    PlayerInputState* GetPlayerInputState(int32_t playerIndex);  // RVA: 0x3E0880
    void LateUpdate();  // RVA: 0x3E1040
    void Update();  // RVA: 0x3E2290
    bool IsFocused();  // RVA: 0x3E1030
    void Platform_OnPlatformFocusChanged(bool platformHasFocus);  // RVA: 0x3E15D0
    void .ctor();  // RVA: 0x3E2490
};

// Namespace: <global>
class ItemBase : public IRenderPoolable
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameTile* gameTile; // 0x0020

    // Methods
    Item* GetItem();  // RVA: 0x3094F0
    ItemDescriptor* GetDescriptor();  // RVA: 0x3094F0
    ItemDescriptor* GetCurrentDescriptor();  // RVA: 0x3094F0
    void Delete();  // RVA: 0x2C1B90
    void Destroy(bool despawned, int32_t playerIndex);  // RVA: 0x2C1B90
    SpriteObjectBase* GetIconObject();  // RVA: 0x3094F0
    SpriteObjectBase* GetDroppedObject();  // RVA: 0x3094F0
    bool HasPropertyFlags(ItemPropertyFlags _itemPropertyFlags);  // RVA: 0x360690
    bool HasInteractionFlags(ItemInteractionFlags _itemInteractionFlags);  // RVA: 0x360690
    bool HasRenderFlags(ItemRenderFlags _itemRenderFlags);  // RVA: 0x360690
    Vector3 GetPosition();  // RVA: 0x3E2630
    float GetRadius();  // RVA: 0x3E26E0
    bool CanInteract(Player* player);  // RVA: 0x360690
    bool CanShowHighlightText(Player* player);  // RVA: 0x360690
    Il2CppString* GetHighlightText();  // RVA: 0x3E2560
    void UpdateItemPreSave();  // RVA: 0x2C1B90
    Params GetOnlineParams();  // RVA: 0x3E25E0
    void .ctor();  // RVA: 0x2F00C0
};

// Namespace: <global>
class ItemReference : public ItemBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    Item* mReferenceItem; // 0x0028

    // Methods
    void Initialise(Item* referenceItem, GameTile* _gameTile);  // RVA: 0x3E2B40
    Item* GetItem();  // RVA: 0x3E2A40
    ItemDescriptor* GetDescriptor();  // RVA: 0x3E29B0
    ItemDescriptor* GetCurrentDescriptor();  // RVA: 0x3E2980
    void Delete();  // RVA: 0x3E2880
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3E28F0
    SpriteObjectBase* GetIconObject();  // RVA: 0x3E2A10
    SpriteObjectBase* GetDroppedObject();  // RVA: 0x3E29E0
    bool HasPropertyFlags(ItemPropertyFlags _itemPropertyFlags);  // RVA: 0x3E2AE0
    bool HasInteractionFlags(ItemInteractionFlags _itemInteractionFlags);  // RVA: 0x3E2AB0
    bool HasRenderFlags(ItemRenderFlags _itemRenderFlags);  // RVA: 0x3E2B10
    float GetRadius();  // RVA: 0x3E2A80
    bool CanInteract(Player* player);  // RVA: 0x3E2850
    Params GetOnlineParams();  // RVA: 0x3E2A50
    void .ctor();  // RVA: 0x2F00C0
};

// Namespace: <global>
struct OnlineItemClassType
{
public:
    // Static fields
    // static OnlineItemClassType OnlineItem;
    // static OnlineItemClassType OnlineAnimatedItem;
    // static OnlineItemClassType OnlineMovableItem;
    // static OnlineItemClassType OnlineHostBossItem;
    // static OnlineItemClassType OnlineTransferableItem;
    // static OnlineItemClassType OnlineTransferableMovableItem;
    // static OnlineItemClassType OnlinePathToPlayerItem;
    // static OnlineItemClassType Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct Params
{
public:
    // Static fields
    // static Params Null;
    // static Params Local;
    // static Params Offline;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t onlineID; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int8_t clientIndex; // 0x0014
    uint8_t pad_0015[0x1]; // 0x0015
    int16_t itemDescrId; // 0x0016

    // Methods
    int32_t CopyBytes(Byte[][] destBytes, int32_t offset);  // RVA: 0x3EF9F0
    void .ctor(int8_t clientIndex, uint32_t onlineID);  // RVA: 0x3F0030
    bool Equals(Il2CppObject* other);  // RVA: 0x3EFB00
    bool Equals(Params other);  // RVA: 0x3EFAE0
    static bool op_Equality(Params x, Params y);  // RVA: 0x3F0040
    static bool op_Inequality(Params x, Params y);  // RVA: 0x3F00C0
    int32_t GetHashCode();  // RVA: 0x3EFC30
    StringBuilder* AppendTo(StringBuilder* stringBuilder);  // RVA: 0x3EF870
    Il2CppString* ToString();  // RVA: 0x3EFE60
    static Params FromLoadFlags(int32_t worldSerialisationFlags);  // RVA: 0x3EFBB0
    void Save(Stream* stream);  // RVA: 0x3EFD90
    void Load(Stream* stream);  // RVA: 0x3EFC70
    static void .cctor();  // RVA: 0x3EFF70
};

// Namespace: <global>
class OnlineItem : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    int8_t mClientIndex; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    uint32_t mOnlineID; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int16_t mItemDescrId; // 0x0020
    uint8_t pad_0021[0x1]; // 0x0021
    int8_t mCollectorPlayerIndex; // 0x0022

    // Methods
    void SetParams(Params onlineParams);  // RVA: 0x3EE4E0
    void Initialise(Params onlineParams);  // RVA: 0x3EE290
    void Replace(OnlineItem* oldItem);  // RVA: 0x3EE3D0
    void Save(Stream* stream);  // RVA: 0x3EE410
    void Load(Stream* stream);  // RVA: 0x3EE2B0
    Params GetParams();  // RVA: 0x3EE200
    int8_t GetAuthorityClientIndex();  // RVA: 0x3EE1F0
    int8_t GetPendingClientIndex();  // RVA: 0x3EE280
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class OnlineAnimatedItem : public OnlineItem
{
public:
    // Static fields
    // static float MIN_ANIM_SPEED_THRESOLD;
    // static float MIN_DIRECTION_THRESOLD;

    uint8_t pad_0000[0x28]; // 0x0000
    float mAnimSpeed; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 mDirection; // 0x002C

    // Methods
    void ResetAnim();  // RVA: 0x3EE120
    void Initialise(Params onlineParams);  // RVA: 0x3EE0B0
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x3EE0E0
    bool ShouldSendAnimUpdate(float animSpeed);  // RVA: 0x3EE130
    void UpdateAnim(float animSpeed);  // RVA: 0x3EE1C0
    bool ShouldSendDirectionUpdate(Vector2 direction);  // RVA: 0x3EE180
    void UpdateDirection(Vector2 direction);  // RVA: 0x3EE1D0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class OnlineMovableItem : public OnlineAnimatedItem
{
public:
    // Static fields
    // static float MIN_POSITION_UPDATE_TIME;
    // static float MAX_UPDATE_TIME;
    // static float MOVE_UPDATE_THRESHOLD;
    // static float SNAP_MAGNITUDE_MIN;
    // static float SQR_SNAP_MAGNITUDE_MIN;
    // static float SNAP_MAGNITUDE_MAX;
    // static float SQR_SNAP_MAGNITUDE_MAX;
    // static float ADJUSTMENT_TIME;
    // static float CLOSE_ENOUGH_MAGNITUDE;
    // static float SQR_CLOSE_ENOUGH_MAGNITUDE;
    // static float MOVE_VECTOR_UPDATE_TIME;
    // static bool sAltAdjustment;

    uint8_t pad_0000[0x38]; // 0x0000
    float mLastMovableUpdateTime; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    Vector2 mPosition; // 0x003C
    uint8_t pad_003D[0x7]; // 0x003D
    Vector2 mMoveVector; // 0x0044
    uint8_t pad_0045[0x7]; // 0x0045
    Vector2 mPositionAdjustmentVelocity; // 0x004C
    uint8_t pad_004D[0x7]; // 0x004D
    float mPositionAdjustmentTime; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    Vector2 mOldMoveVector; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    float mMoveVectorUpdateTime; // 0x0060

    // Methods
    void ResetMovement();  // RVA: 0x3EEAA0
    void Initialise(Params onlineParams);  // RVA: 0x3EEA00
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x3EEA30
    void AltUpdate(Vector3 currentPosition, Vector3 newPosition, Vector3 newMoveDir);  // RVA: 0x3EE6F0
    Vector3 AltAdjustedMoveVector(float dt);  // RVA: 0x3EE600
    bool ShouldSendMovementUpdate(Vector3 newPosition, Vector3 newMoveDir);  // RVA: 0x3EEBC0
    void Update(Vector3 currentPosition, Vector3 newPosition, Vector3 newMoveDir);  // RVA: 0x3EECF0
    Vector3 AdjustedMoveVector(float dt);  // RVA: 0x3EE500
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class IOnlineAuthority
{
public:

    // Methods
    void SetAuthorityClientIndex(int8_t clientIndex);
    void SetPendingClientIndex(int8_t clientIndex);
};

// Namespace: <global>
class IOnlinePathToPlayer
{
public:

    // Methods
    bool HasPath(int8_t playerIndex);
    void SetHasPath(int8_t playerIndex);
    void ClearHasPath(int8_t playerIndex);
};

// Namespace: <global>
class OnlineTransferableItem : public OnlineItem
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    int8_t mAuthorityClient; // 0x0028
    int8_t mPendingClient; // 0x0029

    // Methods
    int8_t GetAuthorityClientIndex();  // RVA: 0x3EF380
    void SetAuthorityClientIndex(int8_t clientIndex);  // RVA: 0x3EF5C0
    int8_t GetPendingClientIndex();  // RVA: 0x3EF390
    void SetPendingClientIndex(int8_t clientIndex);  // RVA: 0x3EF5D0
    void Initialise(Params onlineParams);  // RVA: 0x3EF3A0
    void Replace(OnlineItem* oldItem);  // RVA: 0x3EF4A0
    void Save(Stream* stream);  // RVA: 0x3EF520
    void Load(Stream* stream);  // RVA: 0x3EF3D0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class OnlineTransferableMovableItem : public OnlineMovableItem
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    int8_t mAuthorityClient; // 0x0068
    int8_t mPendingClient; // 0x0069

    // Methods
    int8_t GetAuthorityClientIndex();  // RVA: 0x3EF5E0
    void SetAuthorityClientIndex(int8_t clientIndex);  // RVA: 0x3EF850
    int8_t GetPendingClientIndex();  // RVA: 0x3EF5F0
    void SetPendingClientIndex(int8_t clientIndex);  // RVA: 0x3EF860
    void Initialise(Params onlineParams);  // RVA: 0x3EF600
    void Replace(OnlineItem* oldItem);  // RVA: 0x3EF730
    void Save(Stream* stream);  // RVA: 0x3EF7B0
    void Load(Stream* stream);  // RVA: 0x3EF660
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class OnlinePathToPlayerItem : public OnlineTransferableMovableItem
{
public:
    uint8_t pad_0000[0x70]; // 0x0000
    System.Collections.Generic.HashSet<System.SByte> mPlayerPaths; // 0x0070

    // Methods
    void Initialise(Params onlineParams);  // RVA: 0x3EF170
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x3EF200
    bool HasPath(int8_t playerIndex);  // RVA: 0x3EF110
    void SetHasPath(int8_t playerIndex);  // RVA: 0x3EF2A0
    void ClearHasPath(int8_t playerIndex);  // RVA: 0x3EF0B0
    void .ctor();  // RVA: 0x3EF300
};

// Namespace: <global>
struct ItemState
{
public:
    // Static fields
    // static ItemState Void;
    // static ItemState Uninitialised;
    // static ItemState None;
    // static ItemState Preview;
    // static ItemState Child;
    // static ItemState Dropping;
    // static ItemState Dropped;
    // static ItemState Collecting;
    // static ItemState World;
    // static ItemState Placed;
    // static ItemState PlacedSurface;
    // static ItemState PlacedAttached;
    // static ItemState Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Item : public ItemBase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    ItemDescriptor* descriptor; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SpriteObjectBase* spriteObject; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Effect* mEffect; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ContainerItem* parent; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    uint16_t stackCount; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    Vector3 position; // 0x004C
    uint8_t pad_004D[0xB]; // 0x004D
    float radius; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    Vector3 velocity; // 0x005C
    uint8_t pad_005D[0xB]; // 0x005D
    float transition; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Vector3 mDropPosition; // 0x006C
    uint8_t pad_006D[0xB]; // 0x006D
    float mFadeInTime; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float renderHeightOffset; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float positionHeightOffset; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    uint32_t mUpdateFrame; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    ItemState state; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    int8_t mLevelId; // 0x008C
    int8_t mDropParent; // 0x008D
    uint8_t physicalState; // 0x008E
    bool mPostUpdateTile; // 0x008F
    OnlineItem* mOnlineItem; // 0x0090

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x3094F0
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3E5600
    void ActivatePreview();  // RVA: 0x3E2BF0
    void SetFadeIn(bool fadeIn, float defaultFade);  // RVA: 0x3EA0C0
    Item* GetItem();  // RVA: 0x3E5080
    ItemDescriptor* GetDescriptor();  // RVA: 0x3E2A40
    ItemDescriptor* GetCurrentDescriptor();  // RVA: 0x3E2A40
    SpriteObjectBase* GetIconObject();  // RVA: 0x3E4FE0
    Vector3 GetInteractableIconPosition();  // RVA: 0x3E5000
    SpriteObjectBase* GetDroppedObject();  // RVA: 0x3E4FB0
    bool HasPropertyFlags(ItemPropertyFlags _itemPropertyFlags);  // RVA: 0x3E55C0
    bool HasInteractionFlags(ItemInteractionFlags _itemInteractionFlags);  // RVA: 0x3E55A0
    bool HasRenderFlags(ItemRenderFlags _itemRenderFlags);  // RVA: 0x3E55E0
    Vector3 GetPosition();  // RVA: 0x3E5190
    float GetRadius();  // RVA: 0x3E51B0
    static void SetDirection(int8_t sourceClientIndex, ItemSetDirection msg);  // RVA: 0x3E9D70
    void SetDirectionOnLoad(Vector2 newDirection, int32_t worldSerialisationFlags);  // RVA: 0x3E9D50
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x3E9E40
    Vector2 GetDirection();  // RVA: 0x2BF0D0
    static void SetFollowTarget(int8_t sourceClientIndex, ItemFollowTarget msg);  // RVA: 0x3EA130
    bool CanChangeFollowTarget();  // RVA: 0x2E6DB0
    BehaviourStateController* GetBehaviourStateController();  // RVA: 0x3094F0
    static void ProcessBehaviourFollowPlayer(int8_t sourceClientIndex, BehaviourFollowPlayer msg);  // RVA: 0x3E73E0
    static void SetHasPathToPlayer(int8_t sourceClientIndex, HasPathToPlayer msg);  // RVA: 0x3EA2B0
    bool ShouldSerialise(int32_t worldSerialisationFlags);  // RVA: 0x3EAD90
    void SetDescriptorParams(ItemDescriptor* descr);  // RVA: 0x3E9D10
    Params GetOnlineParams();  // RVA: 0x3E50B0
    uint32_t GetOnlineID();  // RVA: 0x3E5090
    bool HasAuthority();  // RVA: 0x3E5510
    int8_t GetAuthorityClient();  // RVA: 0x3E4E00
    bool IsClientAuthority(int8_t clientIndex);  // RVA: 0x3E5B60
    static void TransferAuthority(int8_t sourceClientIndex, ItemTransferAuthority msg);  // RVA: 0x3EC840
    bool RequestTransferAuthority(int8_t clientIndex);  // RVA: 0x3E8D80
    bool IsTransferringAuthority();  // RVA: 0x3E5BA0
    void UpdateAuthority();  // RVA: 0x3ECEB0
    void SetAuthorityClient(int8_t clientIndex);  // RVA: 0x3E9A40
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x3E6B70
    void SendPreTransferAuthorityState(int8_t pendingClientIndex);  // RVA: 0x2C1B90
    static void SaveItem(Stream* stream, int32_t worldSerialisationFlags, Item* item, bool rootObject);  // RVA: 0x3E9110
    static Item* LoadItem(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, int32_t worldSerialisationFlags, bool rootObject);  // RVA: 0x3E5C50
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x3E9270
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3E5EB0
    Item* LoadAsChild(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3E5C00
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x2C1B90
    bool CanStack(Item* item, bool checkMaxStack);  // RVA: 0x3E3040
    bool CanStack(uint16_t amount);  // RVA: 0x3E30F0
    int32_t GetStackableCount(Item* item);  // RVA: 0x3E5470
    static void SetStackCount(int8_t sourceClientIndex, ItemSetStackCount msg);  // RVA: 0x3EAA80
    void SetStackCount(uint16_t _stackCount);  // RVA: 0x3EA980
    Item* SetParent(ContainerItem* parentContainer, int32_t startIndex);  // RVA: 0x3EA530
    static void Use(int8_t sourceClientIndex, ItemUse msg);  // RVA: 0x3EDC10
    bool Use(Player* player, bool sendOnline);  // RVA: 0x3ED870
    Vector3 GetPlacementTilePos(Vector3 worldPos);  // RVA: 0x3E5130
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3E6BA0
    void TriggerPlacedEffect();  // RVA: 0x3ECB70
    void StopPlacedEffect();  // RVA: 0x3EBC70
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x360690
    ItemState GetPlacementType();  // RVA: 0x2FA5E0
    bool CanUnplace(Player* player, float unplaceDamage, bool autoUnplace, Item* replacementItem);  // RVA: 0x360690
    bool CanInteract(Player* player);  // RVA: 0x3E3010
    void Reparent(ContainerItem* newParent, bool hasDropAuthority, bool canReturnToParent);  // RVA: 0x3E8BA0
    void Unplace(ContainerItem* newParent);  // RVA: 0x3ECDF0
    void Void();  // RVA: 0x3EDE60
    static void Drop(int8_t sourceClientIndex, ItemDrop msg);  // RVA: 0x3E4AC0
    static void PlayerDrop(int8_t sourceClientIndex, ItemPlayerDrop msg);  // RVA: 0x3E6F50
    void Drop(Player* player, int8_t levelId, Vector3 worldPos, int8_t dropParent);  // RVA: 0x3E4470
    void DropImplementation(Player* player, GameTile* dropTile, Vector3 worldPos, int8_t dropParent, Vector3 dropVelocity);  // RVA: 0x3E41F0
    void FinishDropping(Vector3 dropPos);  // RVA: 0x3E4CF0
    void RemoveFromGameTile();  // RVA: 0x3E7510
    void AttachToGameTile(GameTile* _gameTile);  // RVA: 0x3E2C10
    static void VoidPlacedItems(GameTile* targetTile, ItemState placementType);  // RVA: 0x3EDD70
    void SetState(ItemState _state, GameTile* _gameTile);  // RVA: 0x3EAC90
    void SetState(ItemState _state, Vector3 _position, GameTile* _gameTile);  // RVA: 0x3EAB90
    void SetPosition(Vector3 newPos);  // RVA: 0x3EA730
    void SetPosition(Vector3 newPos, GameTile* _gameTile);  // RVA: 0x3EA810
    void EffectEnded(Effect* effect);  // RVA: 0x3E4CD0
    void DeleteOnlineItem(bool isReplacing);  // RVA: 0x3E3A50
    void Delete();  // RVA: 0x3E3E20
    static void Destroy(int8_t sourceClientIndex, ItemDestroy msg);  // RVA: 0x3E40D0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3E3FA0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x3ED2D0
    bool CanBeCollected(Player* player);  // RVA: 0x2E6DB0
    static void Collect(int8_t sourceClientIndex, ItemCollect msg);  // RVA: 0x3E3140
    Item* Collect(ContainerItem* parentContainer, int8_t clientIndex, bool isLootBagProcess);  // RVA: 0x3E3370
    static void StopCollect(int8_t sourceClientIndex, ItemStopCollect msg);  // RVA: 0x3EBA20
    void StopCollect(Vector3 dropPosition, GameTile* dropTile, int8_t clientIndex);  // RVA: 0x3EB6E0
    void PostUpdate();  // RVA: 0x3E71B0
    void UpdateEffects(GameRendering* gameRendering, float dt, int8_t level, RectInt bounds, bool forceAnchor);  // RVA: 0x3ED130
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x3E2F50
    void TileableRender(Level* level, GameRendering* gameRendering, SurfaceTileTypeDescriptor* surfaceDescriptor, float alpha, bool forceVisible, int32_t renderFlags, float renderDepth);  // RVA: 0x3EC1E0
    void TileableRender(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags);  // RVA: 0x3EC540
    void RenderDoorJambs(SpritesRenderer* renderer, float alpha, bool forceVisible, SurfaceTileTypeDescriptor* doorJambDescriptor, bool flat, int32_t renderFlags);  // RVA: 0x3E79E0
    void SpriteObjectRender(GameRendering* gameRendering, int32_t renderFlags);  // RVA: 0x3EAEE0
    float GetRenderDepth(SurfaceTileDatabase* surfaceDatabase);  // RVA: 0x3E51C0
    void RenderSpriteElement(SpritesRenderer* renderer, SpriteDescriptor* spriteDescriptor, Vector3 _position, float skew, int32_t renderFlags);  // RVA: 0x3E82D0
    void RenderSpriteElement(SpritesRenderer* renderer, SpriteDescriptor* spriteDescriptor, Vector3 _position, float skew, float alpha, int32_t renderFlags);  // RVA: 0x3E8030
    bool PreviewRender(GameRendering* gameRendering, GameTile* previewTile, int32_t renderFlags);  // RVA: 0x3E72B0
    bool CanRender(int8_t playerIndex);  // RVA: 0x2E6DB0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x3E8570
    void RenderAmbientShadows(GameRendering* gameRendering, SpriteDescriptor* shadowDescriptor);  // RVA: 0x3E78C0
    void SortedRender(GameRendering* gameRendering, SpritesRenderer* renderer, float depth, float alpha, bool forceVisible, bool flat, int32_t renderFlags, float emissiveFactor, bool calcRenderPos);  // RVA: 0x3EADB0
    static void Stack(int8_t sourceClientIndex, ItemStack msg);  // RVA: 0x3EB2B0
    Item* Stack(Item* item, ContainerItem* parent, int32_t startIndex);  // RVA: 0x3EB590
    static void StackSome(int8_t sourceClientIndex, ItemStackSome msg);  // RVA: 0x3EAF30
    Item* StackSome(Item* item, int32_t numToStack);  // RVA: 0x3EB1A0
    bool DestroyFromStack();  // RVA: 0x3E3F50
    Item* UnStack(int32_t count, Params onlineParams);  // RVA: 0x3ECC60
    void Interact(Item* item);  // RVA: 0x3E5A50
    int32_t GetBuyCost(float modifier);  // RVA: 0x3E4E80
    bool CanBuyQuantity(uint16_t quantity);  // RVA: 0x3E2FD0
    int32_t GetSellCost(float modifier);  // RVA: 0x3E5330
    int32_t BehaviourGetTileFilters();  // RVA: 0x3094F0
    bool BehaviourShouldForceMove();  // RVA: 0x360690
    int32_t BehaviourMaxPathNodeDistance(MovementBehaviourDescriptor* behaviourParams, int32_t defaultValue);  // RVA: 0x3E2F40
    GameTile* BehaviourGetPriorityTile(PathfindingProcessor* pathfindingProcessor, float maxCost, int32_t tileFilters, float maxAngleRange);  // RVA: 0x3094F0
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x3E4DD0
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x360690
    static void SetAnim(int8_t sourceClientIndex, ItemSetAnim msg);  // RVA: 0x3E9970
    bool SetAnim(AnimType animType, float animSpeed, AnimCompareType animCompareType, bool sendOnline);  // RVA: 0x3E9630
    static void Move(int8_t sourceClientIndex, ItemMove msg);  // RVA: 0x3E6A70
    void Move(Vector3 newPosition, Vector3 moveVector);  // RVA: 0x3E6380
    static void Teleport(int8_t sourceClientIndex, ItemTeleport msg);  // RVA: 0x3EBCF0
    void Teleport(GameTile* teleportTarget);  // RVA: 0x3EBDF0
    static void SetRenderHeightOffset(int8_t sourceClientIndex, ItemRenderHeight msg);  // RVA: 0x3EA910
    static void SetPositionHeightOffset(int8_t sourceClientIndex, ItemPositionHeight msg);  // RVA: 0x3EA690
    void SetPositionHeightOffset(float offset);  // RVA: 0x3EA720
    void .ctor();  // RVA: 0x3EE010
};

// Namespace: <global>
class SpriteRenderCopy : public IRenderPoolable
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Item* mItemRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CompositeSpriteElement* compositeSprite; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector3 mPosition; // 0x0030
    uint8_t pad_0031[0xB]; // 0x0031
    float mGlitchOverlayAlpha; // 0x003C

    // Methods
    void Render(GameRendering* gameRendering, int8_t levelId, int32_t renderFlags);  // RVA: 0x407AC0
    void .ctor();  // RVA: 0x2F00C0
};

// Namespace: <global>
class Equipment : public Item
{
public:

    // Methods
    void .ctor();  // RVA: 0x3F5C90
};

// Namespace: <global>
class ConsumableItem : public Item
{
public:

    // Methods
    void .ctor();  // RVA: 0x3F5C90
};

// Namespace: <global>
struct WeaponState
{
public:
    // Static fields
    // static WeaponState Idle;
    // static WeaponState Prefire;
    // static WeaponState Fire;
    // static WeaponState Recoil;
    // static WeaponState Prereload;
    // static WeaponState Reload;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct WeaponAttackStats
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float mDamage; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float mRange; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float mKnockback; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float mUnplaceDamage; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mChopDamage; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mDigDamage; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float mCatchDamage; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemDescriptor* mSourceDescriptor; // 0x0030

    // Methods
    static WeaponAttackStats Default(ItemDescriptor* defaultDescriptor);  // RVA: 0x40E940
    static WeaponAttackStats EnemyDefault(ItemDescriptor* defaultDescriptor);  // RVA: 0x40EA10
};

// Namespace: <global>
class Weapon : public Item
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    WeaponState weaponState; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float weaponRotationOffset; // 0x009C

    // Methods
    WeaponAttackStats GetAttackStats();  // RVA: 0x40EA50
    Vector2 GetProjectileDirection(Vector2 aimDir, float angle);  // RVA: 0x40EB60
    void .ctor();  // RVA: 0x3F5C90
};

// Namespace: <global>
class ProjectileWeapon : public Weapon
{
public:
    uint8_t pad_0000[0xA0]; // 0x0000
    Vector3 spawnOffset; // 0x00A0
    uint8_t pad_00A1[0xB]; // 0x00A1
    Vector3 recoilOffset; // 0x00AC
    uint8_t pad_00AD[0xB]; // 0x00AD
    float maxRange; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    float mFireSpeed; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float mPreFireTime; // 0x00C0
    uint8_t pad_00C1[0x3]; // 0x00C1
    float mFireTime; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float mRecoilTime; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float mPreReloadTime; // 0x00CC
    uint8_t pad_00CD[0x3]; // 0x00CD
    float mReloadTime; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float mFireStateTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    AnimType mIdleAnimType; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    AnimatedSpriteObject* mAnimStateObject; // 0x00E0

    // Methods
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x406ED0
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x4072C0
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x4070B0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x4074C0
    void SetWeaponIdleAnim(AnimType idleAnimType);  // RVA: 0x4072F0
    void Fire(float fireSpeed);  // RVA: 0x406EB0
    WeaponState UpdateFire(float dt);  // RVA: 0x407350
    Vector3 GetWeaponOffset();  // RVA: 0x406F40
    void .ctor();  // RVA: 0x407520
};

// Namespace: <global>
class ProjectileItem : public Item
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Vector3 currentVelocity; // 0x0098
    uint8_t pad_0099[0xB]; // 0x0099
    Vector3 spawnPos; // 0x00A4
    uint8_t pad_00A5[0xB]; // 0x00A5
    float damage; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float knockback; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    float maxRange; // 0x00B8
    uint8_t pad_00B9[0x3]; // 0x00B9
    int8_t playerIndex; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    float aoeRadius; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    EventInstance audioFlyInstance; // 0x00C8

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x406EA0
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x405880
    bool ShouldSerialise(int32_t worldSerialisationFlags);  // RVA: 0x406000
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x405CD0
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x405930
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x405C80
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x405F90
    Vector2 GetDirection();  // RVA: 0x405860
    void SetDescriptorParams(ItemDescriptor* descr);  // RVA: 0x405F40
    void SetWorldSpawnState(int8_t _playerIndex, Vector3 _spawnPos);  // RVA: 0x405FC0
    void AddToWorld(Vector3 pos);  // RVA: 0x404CC0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x406950
    void TriggerImpact(Item* impactedItem, bool hitStaticItem);  // RVA: 0x4066B0
    static void TriggerImpactEffects(int8_t sourceClientIndex, ProjectileImpactEffects msg);  // RVA: 0x4065A0
    void TriggerImpactEffects(ItemDescriptor* staticItemDescr, Vector3 impactPos);  // RVA: 0x4060A0
    static void DealDamage(int8_t sourceClientIndex, ProjectileDealDamage msg);  // RVA: 0x404E60
    void DealDamage(PlaceableItem* damagedItem, int8_t playerIndex, Vector3 sourcePos, float damage, float damageModifier, float knockback);  // RVA: 0x4050E0
    void Delete();  // RVA: 0x4055E0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x405640
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x404E00
    void .ctor();  // RVA: 0x406DE0
};

// Namespace: <global>
class PlaceableItem : public Item
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    float health; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float maxHealth; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    Vector3 mKnockbackDirection; // 0x00A0
    uint8_t pad_00A1[0xB]; // 0x00A1
    float mKnockbackStrength; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float mKnockbackTimer; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float mAge; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Item* mTransitionItem; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    CalendarTime mLastUpdateTime; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    HealthBar* healthBar; // 0x00C8

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3FF490
    float GetHealthRatio();  // RVA: 0x3FF2A0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3FFA60
    void Unplace(ContainerItem* newParent);  // RVA: 0x4036B0
    static void TriggerTransition(int8_t sourceClientIndex, TriggerTransition msg);  // RVA: 0x402D50
    Item* TriggerTransition(PlaceableDescriptor* targetTransition, float newAge, bool instant, bool sendItemUpdate, bool loading);  // RVA: 0x402EC0
    void TransitionFrom(Item* previousItem, float newAge, bool instant);  // RVA: 0x402890
    void SetDescriptorParams(ItemDescriptor* descr);  // RVA: 0x401D60
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x401C10
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3FF8A0
    void CreateHealthBar();  // RVA: 0x3FEF70
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x404AE0
    void UpdateItemPreSave();  // RVA: 0x404330
    void Age(float dt, bool instant);  // RVA: 0x3FEC70
    void UpdateTransitions(float dt, bool instant);  // RVA: 0x4046D0
    PlaceableDescriptor* GetNextTransitionState(PlaceableDescriptor* currentState, int32_t steps);  // RVA: 0x3FF2C0
    PlaceableDescriptor* GetTransitionState(PlaceableDescriptor* currentState, float age);  // RVA: 0x3FF390
    bool CanDespawn(bool checkAuthority);  // RVA: 0x360690
    bool UpdateDespawnTimer(bool attemptDespawn, Player* nearbyPlayer, float dt);  // RVA: 0x360690
    Player* GetLastNearbyPlayer();  // RVA: 0x3094F0
    bool CanUseTeleporter();  // RVA: 0x2E6DB0
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x2E6DB0
    bool CanUnplace(Player* player, float unplaceDamage, bool autoUnplace, Item* replacementItem);  // RVA: 0x3FEE40
    float UpdateKnockbackVelocity(Vector3 knockbackVelocity, float knockbackProgress);  // RVA: 0x404520
    Vector3 UpdateBehaviourMovement(BehaviourStateController* behaviourStateController, Vector3 repulsion, float moveSpeed, float moveAnimSpeed, bool canMove, bool canProjectileHitTarget, bool useFacing, bool facingFixed, float dt);  // RVA: 0x403730
    Vector3 UpdateLunge(Vector3 moveDir, float dt);  // RVA: 0x2BF6A0
    void UpdateFollowTeleport(BehaviourStateController* behaviourStateController, Level* level);  // RVA: 0x4040C0
    void UpdateAnimEvents(Vector3 moveDir);  // RVA: 0x2C1B90
    void StopOnlineMovement();  // RVA: 0x4027E0
    System.ValueTuple<AudioEventDataOverride,AudioEventDataOverride> GetAudioData();  // RVA: 0x3FF200
    void TriggerDestroyEffect(Vector3 contactPos, Vector3 contactDir);  // RVA: 0x402B40
    void ApplyKnockback(Vector3 sourcePos, float knockback);  // RVA: 0x3FED10
    void UpdateDynamicKnockbackTimer();  // RVA: 0x404030
    float GetDamagedHealthMinimum();  // RVA: 0x3FF280
    float GetDynamicDamageModifier(int8_t playerIndex);  // RVA: 0x3FF290
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float knockback, bool wouldKill);  // RVA: 0x3FFB70
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float damageModifier, float knockback, ItemDescriptor* damageSourceDescriptor, Player* reparentOnDeath, DamageSource damageSource);  // RVA: 0x3FFCD0
    static void UnplaceDestroyed(int8_t sourceClientIndex, UnplaceDestroyed msg);  // RVA: 0x403500
    void UnplaceDestroyed(Player* reparentOnDeath);  // RVA: 0x4035D0
    static void Kill(int8_t sourceClientIndex, Kill msg);  // RVA: 0x3FF5F0
    void Kill(int32_t playerIndex);  // RVA: 0x3FF740
    void KillImplementation(int32_t playerIndex);  // RVA: 0x3FF5D0
    void TriggerDamageVOXAudio(AudioEventType eventType);  // RVA: 0x4029E0
    void Delete();  // RVA: 0x3FF0B0
    void SpawnItemDrops(int32_t sourcePlayerIndex);  // RVA: 0x4027C0
    void SpawnItemDropsImplementation(int32_t sourcePlayerIndex, bool force, System.Collections.Generic.List<Item> spawnedList, int32_t mpLootIndex);  // RVA: 0x401DD0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3FF110
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x401180
    void RenderAmbientShadows(GameRendering* gameRendering, SpriteDescriptor* shadowDescriptor);  // RVA: 0x4002A0
    bool RenderCharacter(GameRendering* gameRendering, float alpha, int32_t renderFlags, PlayerSpriteHelper* spriteHelper, Weapon* weapon, bool isAiming, bool isAttacking);  // RVA: 0x400590
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class DynamicItemState
{
public:
    // Static fields
    // static System.Collections.Generic.List<System.String> sAudioInstancesToDelete;

    uint8_t pad_0000[0x10]; // 0x0000
    PlaceableItem* mItem; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float mAudioIdleTimer; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,FMOD.Studio.EventInstance> mAudioInstances; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float mMoveSpeed; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mAnimSpeed; // 0x002C

    // Methods
    void Initialise(PlaceableItem* item);  // RVA: 0x3FA240
    void Delete();  // RVA: 0x3F9F20
    void Destroy(bool despawned);  // RVA: 0x3FA0B0
    void Update(float dt);  // RVA: 0x3FAD10
    void UpdateIdleAudio(float dt);  // RVA: 0x3FA650
    void ResetIdleAudioTime();  // RVA: 0x3FA280
    void TriggerInstancedAudio(Il2CppString* lookup, AudioEventType audioEventType, AudioEventDataOverride* audioData, LogLevel logLevel);  // RVA: 0x3FA4B0
    void TriggerInstancedAudio(Il2CppString* lookup, Il2CppString* eventName);  // RVA: 0x3FA2F0
    void UpdateInstancedAudio(float dt);  // RVA: 0x3FA920
    void .ctor();  // RVA: 0x3FADE0
    static void .cctor();  // RVA: 0x3FAD50
};

// Namespace: <global>
class OrientableItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    int8_t mOrientation; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<ItemReference> mItemReferences; // 0x00D8

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3FE3D0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3FE620
    void Unplace(ContainerItem* newParent);  // RVA: 0x3FEB50
    Vector3 GetInteractableIconPosition();  // RVA: 0x3FE2F0
    void SetOrientation(int8_t orientation, bool preview);  // RVA: 0x3FE8F0
    void CreateItemReferences();  // RVA: 0x3FDFD0
    void RemoveItemReferences();  // RVA: 0x3FE730
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x3FE820
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3FE4F0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3FE2A0
    void .ctor();  // RVA: 0x3FEB90
};

// Namespace: <global>
class VegetationItem : public PlaceableItem
{
public:

    // Methods
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x40B510
    Item* LoadAsChild(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x40B310
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x40B090
    bool CanGrow();  // RVA: 0x40B000
    Item* Grow(int32_t steps, bool instant);  // RVA: 0x40B1B0
    bool PendingUpdates();  // RVA: 0x40B660
    void Age(float dt, bool instant);  // RVA: 0x40ACD0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x40B950
    void RenderSpriteElement(SpritesRenderer* renderer, SpriteDescriptor* spriteDescriptor, Vector3 _position, float skew, int32_t renderFlags);  // RVA: 0x40B6C0
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class VegetationGroupItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    float age; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    float mVGLastUpdateTime; // 0x00D4
    uint8_t pad_00D5[0x3]; // 0x00D5
    int32_t mCurrentState; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    SpriteObjectBase* transitionObject; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    float transitionValue; // 0x00E8

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x409260
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x40A140
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x409530
    Item* LoadAsChild(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x409340
    void Delete();  // RVA: 0x408C00
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x408CB0
    ItemDescriptor* GetCurrentDescriptor();  // RVA: 0x408D60
    bool HasPropertyFlags(ItemPropertyFlags _itemPropertyFlags);  // RVA: 0x4090E0
    bool HasInteractionFlags(ItemInteractionFlags _itemInteractionFlags);  // RVA: 0x409020
    bool HasRenderFlags(ItemRenderFlags _itemRenderFlags);  // RVA: 0x4091A0
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x408AE0
    bool CanGrow();  // RVA: 0x408A40
    float GetVegetationStateAgeThreshold(int32_t stage);  // RVA: 0x408E00
    bool Grow(int32_t steps, bool force, float dt);  // RVA: 0x408ED0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x4097E0
    bool PendingUpdates();  // RVA: 0x409780
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x40A820
    void SetSpriteObject(SpriteObjectBase* _spriteObject);  // RVA: 0x40A2C0
    void UpdateVegetationState(int32_t newState, bool instant, bool onLoad, float dt);  // RVA: 0x40A380
    void TriggerGrow();  // RVA: 0x40A350
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x409F90
    void RenderAmbientShadows(GameRendering* gameRendering, SpriteDescriptor* shadowDescriptor);  // RVA: 0x4098F0
    void RenderSpriteElement(SpritesRenderer* renderer, SpriteDescriptor* spriteDescriptor, Vector3 _position, float skew, int32_t renderFlags);  // RVA: 0x409CB0
    void .ctor();  // RVA: 0x3FB650
};

// Namespace: <global>
class FlatSurfaceItem : public PlaceableItem
{
public:

    // Methods
    bool CanUnplace(Player* player, float unplaceDamage, bool autoUnplace, Item* replacementItem);  // RVA: 0x3FB6D0
    Vector3 GetPlacementTilePos(Vector3 worldPos);  // RVA: 0x3FB720
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3FB790
    ItemState GetPlacementType();  // RVA: 0x3FB780
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class InteractableItem : public ContainerItem
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    SpriteDescriptor* mOpenSpriteDescriptor; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    bool mOpenState; // 0x00E8

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3FBCD0
    void Unplace(ContainerItem* newParent);  // RVA: 0x3FC750
    static void Interact(int8_t sourceClientIndex, ItemInteract msg);  // RVA: 0x3FBFC0
    void Interact(Item* item);  // RVA: 0x3FC600
    void Interact(Player* player, int8_t clientIndex);  // RVA: 0x3FC160
    void EndInteraction(Player* player);  // RVA: 0x3FB910
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x3FC8C0
    void SpriteObjectRender(GameRendering* gameRendering, int32_t renderFlags);  // RVA: 0x3FC6C0
    void .ctor();  // RVA: 0x3FC910
};

// Namespace: <global>
class LootBagItem : public ContainerItem
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    int8_t mPlayerIndex; // 0x00E0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3FDB70
    void SetOwnership(int8_t _playerIndex);  // RVA: 0x3FDF20
    void DropImplementation(Player* player, GameTile* dropTile, Vector3 worldPos, int8_t dropParent, Vector3 dropVelocity);  // RVA: 0x3FDA40
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3FD830
    bool ShouldSerialise(int32_t worldSerialisationFlags);  // RVA: 0x3FDF30
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x3FDE40
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3FDC00
    int32_t MaxCapacity();  // RVA: 0x3FDD30
    bool CanBeCollected(Player* player);  // RVA: 0x3FD000
    Item* Collect(ContainerItem* parentContainer, int8_t clientIndex, bool isLootBagProcess);  // RVA: 0x3FD050
    bool CanRender(int8_t playerIndex);  // RVA: 0x3FD030
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x3FDD40
    float GetDespawnAlpha();  // RVA: 0x3FDB20
    void Age(float dt, bool instant);  // RVA: 0x3FCDF0
    static void AddBossItemToLootBag(int8_t sourceClientIndex, BossLootBagAdd msg);  // RVA: 0x3FCA40
    void AddBossItemToLootBag(LootBagItem* lootBag, Item* item);  // RVA: 0x3FCC60
    void .ctor();  // RVA: 0x3FDF80
};

// Namespace: <global>
class TeleporterItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    Il2CppString* mId; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Il2CppString* mTargetId; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    int32_t mDestLevel; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t mDestX; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    int32_t mDestY; // 0x00E8

    // Methods
    void Interact(Item* item);  // RVA: 0x407DA0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x408610
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x408040
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x408520
    void .ctor();  // RVA: 0x4087A0
};

// Namespace: <global>
class SpawnTemplateItem : public InteractableItem
{
public:
    uint8_t pad_0000[0xF0]; // 0x0000
    int32_t mSpawnTemplateId; // 0x00F0

    // Methods
    int32_t CalculateSpawnTemplateId();  // RVA: 0x407580
    void UpdateSpawnTemplateId();  // RVA: 0x407A00
    void SetSpawnTemplateId(int32_t spawnTemplateId);  // RVA: 0x4077B0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x4076D0
    void SaveChildren(Stream* stream, int32_t worldSerialisationFlags, System.Collections.Generic.List<Item> childList);  // RVA: 0x2C1B90
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x4075A0
    void LoadChildren(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, System.Collections.Generic.List<Item> childList, int32_t worldSerialisationFlags);  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x3FC910
};

// Namespace: <global>
class TileEditItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    int32_t mTileType; // 0x00D0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x408830
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x408950
    ItemState GetPlacementType();  // RVA: 0x408820
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class FittingItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    SpriteDescriptor* mOrientedSpriteDescriptor; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    int32_t mOrientation; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    Vector3 mEffectOffset; // 0x00DC

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3FAE60
    void SetOrientation(int32_t orientation, WallItem* wallItem, bool preview);  // RVA: 0x3FB020
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3FAFA0
    void Unplace(ContainerItem* newParent);  // RVA: 0x3FB620
    void OnRemoved();  // RVA: 0x3FAF20
    void SpriteObjectRender(GameRendering* gameRendering, int32_t renderFlags);  // RVA: 0x3FB590
    void .ctor();  // RVA: 0x3FB650
};

// Namespace: <global>
class WindowItem : public PlaceableItem
{
public:

    // Methods
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class WallItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    System.Collections.Generic.Dictionary<System.Int32,FittingItem> mFittings; // 0x00D0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x40C400
    bool CanUnplace(Player* player, float unplaceDamage, bool autoUnplace, Item* replacementItem);  // RVA: 0x3FB6D0
    void Void();  // RVA: 0x40E620
    void Delete();  // RVA: 0x40BBC0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x40BD80
    bool IsFittingOrientationValid(int32_t orientation);  // RVA: 0x40C4F0
    void UpdateFittingSlots();  // RVA: 0x40E2A0
    FittingItem* GetFitting(int32_t orientation);  // RVA: 0x40C380
    int32_t GetFittingOrientation(Item* fitting);  // RVA: 0x40C220
    void VoidFitting(int32_t orientation);  // RVA: 0x40E5E0
    bool CanPlaceFitting(Item* fitting, int32_t orientation, bool canRemoveExisting);  // RVA: 0x40BAC0
    FittingItem* PlaceFitting(Item* fitting, int32_t orientation, Params onlineParams);  // RVA: 0x40CAF0
    static void RemoveFitting(int8_t sourceClientIndex, RemoveFitting msg);  // RVA: 0x40CE00
    FittingItem* RemoveFitting(int32_t orientation);  // RVA: 0x40CD10
    FittingItem* FindUnplaceFittingAuto(int32_t resultingOrientation);  // RVA: 0x40C160
    FittingItem* UnplaceFitting(ContainerItem* newParent, int32_t orientation);  // RVA: 0x40DD70
    void UnplaceDestroyed(Player* reparentOnDeath);  // RVA: 0x40D9D0
    void Unplace(ContainerItem* newParent);  // RVA: 0x40DE80
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x40D1B0
    bool RenderPreview(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x40CEA0
    void TileableRender(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags);  // RVA: 0x40D7B0
    void UpdateEffects(GameRendering* gameRendering, float dt, int8_t level, RectInt bounds, bool forceAnchor);  // RVA: 0x40E0A0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x40D740
    void SaveFittings(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x40D470
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x40CA50
    void LoadFittings(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, int32_t worldSerialisationFlags);  // RVA: 0x40C700
    void .ctor();  // RVA: 0x40E860
};

// Namespace: <global>
class DoorItem : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    int32_t mClosedSpriteId; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    int32_t mOpenSpriteId; // 0x00D4

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3F94C0
    void UpdateOpenState();  // RVA: 0x3F99B0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x3F9E70
    void TileableRender(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags);  // RVA: 0x3F97B0
    float GetRenderDepth(SurfaceTileDatabase* surfaceDatabase);  // RVA: 0x3F9400
    bool AdjTileHasDoorConnector(GameTile* _gameTile);  // RVA: 0x3F9200
    bool CanPlace(GameTile* _gameTile);  // RVA: 0x3F92B0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3F96D0
    void .ctor();  // RVA: 0x3F9EB0
};

// Namespace: <global>
class ItemSortComparer
{
public:

    // Methods
    int32_t Compare(Item* left, Item* right);  // RVA: 0x3FC960
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class ContainerItem : public PlaceableItem
{
public:
    // Static fields
    // static ItemSortComparer* itemSortComparer;

    uint8_t pad_0000[0xD0]; // 0x0000
    System.Collections.Generic.List<Item> children; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    int8_t mAccessPlayerIndex; // 0x00D8

    // Methods
    bool get_CanChildrenStack();  // RVA: 0x2E6DB0
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState newState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3F7450
    void Delete();  // RVA: 0x3F68C0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3F6B70
    bool CanUnplace(Player* player, float unplaceDamage, bool autoUnplace, Item* replacementItem);  // RVA: 0x3F66A0
    void Unplace(ContainerItem* newParent);  // RVA: 0x3F9080
    void Void();  // RVA: 0x3F9090
    bool CanPlayerAccess(int8_t playerIndex);  // RVA: 0x3F6680
    bool IsPlayerAccessing();  // RVA: 0x3F74E0
    bool CanInteract(Player* player);  // RVA: 0x3F6610
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x3F8090
    void SaveChildren(Stream* stream, int32_t worldSerialisationFlags, System.Collections.Generic.List<Item> childList);  // RVA: 0x3F7F00
    static void SaveChildList(Stream* stream, int32_t worldSerialisationFlags, System.Collections.Generic.List<Item> childList);  // RVA: 0x3F7DA0
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3F77C0
    static void LoadChildList(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, System.Collections.Generic.List<Item> childList, int32_t worldSerialisationFlags, ContainerItem* _parent);  // RVA: 0x3F74F0
    void LoadChildren(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, System.Collections.Generic.List<Item> childList, int32_t worldSerialisationFlags);  // RVA: 0x3F7730
    static void DeleteChildren(System.Collections.Generic.List<Item> childList);  // RVA: 0x3F67E0
    static void DestroyChildren(System.Collections.Generic.List<Item> childList, bool despawned);  // RVA: 0x3F6A30
    Item* AutoStackCurrency(Item* item);  // RVA: 0x3F64E0
    static void AddChildAutoStack(int8_t sourceClientIndex, ContainerAddChildAutoStack msg);  // RVA: 0x3F5FF0
    Item* AddChildAutoStack(Item* item, int32_t startIndex);  // RVA: 0x3F5EF0
    Item* AddChild(Item* item, bool autoStack, int32_t startIndex);  // RVA: 0x3F6190
    int32_t MaxCapacity();  // RVA: 0x3F7920
    Item* AddNewChild(Item* item, int32_t startIndex);  // RVA: 0x3F6340
    void RefreshChildCapacity();  // RVA: 0x2C1B90
    bool AddChildAtIndex(Item* item, int32_t index);  // RVA: 0x3F5CA0
    bool RemoveChildAtIndex(int32_t index);  // RVA: 0x3F7930
    void RemoveChild(Item* child);  // RVA: 0x3F7990
    int32_t GetChildIndex(Item* child);  // RVA: 0x3F6FA0
    Item* TakeFirstChild(int32_t itemId, bool pickup);  // RVA: 0x3F84E0
    static void TakeItem(int8_t sourceClientIndex, ContainerTakeItem msg);  // RVA: 0x3F87C0
    Item* TakeItem(ContainerItem* existingContainer, Item* existingItem, int32_t existingSlot, int32_t slot);  // RVA: 0x3F8630
    static void TakeXItem(int8_t sourceClientIndex, ContainerTakeXItem msg);  // RVA: 0x3F8B00
    Item* TakeXItem(ContainerItem* existingContainer, Item* existingItem, int32_t existingSlot, int32_t slot, uint16_t quantity, Params onlineParams);  // RVA: 0x3F89E0
    static void ReturnItem(int8_t sourceClientIndex, ContainerReturnItem msg);  // RVA: 0x3F7C00
    Item* ReturnItem(Item* item, int32_t slot);  // RVA: 0x3F7A60
    int32_t ChildCount();  // RVA: 0x3F67A0
    Item* GetChild(int32_t index);  // RVA: 0x3F7160
    Item* GetChild(Il2CppString* name);  // RVA: 0x3F7050
    Item* GetChildById(int32_t id);  // RVA: 0x3F6E90
    Item* GetChildById(int32_t id, uint16_t canStackCount);  // RVA: 0x3F6D10
    Item* GetStackableChildById(int32_t id);  // RVA: 0x3F7290
    int32_t GetFirstEmptyChildIndex(int32_t minIndex);  // RVA: 0x3F71E0
    static void SortItems(int8_t sourceClientIndex, ContainerSortItems msg);  // RVA: 0x3F8190
    void SortItems(int32_t start);  // RVA: 0x3F82A0
    static void TransferAllFrom(int8_t sourceClientIndex, ContainerTransferAll msg);  // RVA: 0x3F8D30
    void TransferAllFrom(ContainerItem* sourceContainerItem, int32_t sourceStartIndex, int32_t startIndex);  // RVA: 0x3F8F60
    void .ctor();  // RVA: 0x3F9120
    static void .cctor();  // RVA: 0x3F90A0
};

// Namespace: <global>
class ReservedItems : public ContainerItem
{
public:

    // Methods
    bool get_CanChildrenStack();  // RVA: 0x360690
    int32_t MaxCapacity();  // RVA: 0x425370
    Item* AddChildAutoStack(Item* item, int32_t startIndex);  // RVA: 0x425360
    void .ctor();  // RVA: 0x425380
};

// Namespace: <global>
class ClientOnlineItems
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.UInt32,Item> mItems; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    uint32_t mHighestOnlineID; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4109E0
};

// Namespace: <global>
class ItemManager : public MonoBehaviour
{
public:
    // Static fields
    // static ItemManager* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    ItemDatabase* itemDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Wallet* mWallet; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    uint32_t mLastOnlineID; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ObjectPoolFactory* mOnlineItemFactory; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.SByte,ClientOnlineItems> mOnlineItems; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.Dictionary<OnlineItem.Params,System.String> mGraveyard; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<Item> mVoidedItems; // 0x0050

    // Methods
    void Awake();  // RVA: 0x416EE0
    void Initialise();  // RVA: 0x419380
    void Clear();  // RVA: 0x416F80
    void SetLastOnlineID(uint32_t id);  // RVA: 0x419C50
    uint32_t GetHighestOnlineID(int8_t clientIndex);  // RVA: 0x419270
    void AddOnlineItem(Item* item);  // RVA: 0x416BA0
    void RemoveOnlineItem(OnlineItem* onlineItem);  // RVA: 0x4195F0
    void PreLoadOnlineItem(Item* item);  // RVA: 0x4195B0
    void PostLoadOnlineItem(Item* item);  // RVA: 0x419580
    Params GetNextLocalParams();  // RVA: 0x419300
    void CreateOnlineItem(Item* item, Params onlineParams);  // RVA: 0x4174F0
    void DestroyOnlineItem(OnlineItem* onlineItem);  // RVA: 0x419250
    void ReplaceOnlineItem(Item* oldItem, Item* newItem);  // RVA: 0x419820
    T FindOnlineItem(Params onlineParams, bool ignoreMissing);  // RVA: 0x203C40
    T FindOptionalOnlineItem(Params onlineParams, bool ignoreMissing);  // RVA: 0x203C40
    static void Create(int8_t sourceClientIndex, ItemCreate msg);  // RVA: 0x418EA0
    Item* Create(Il2CppString* name, ItemState state, int8_t levelId, Vector3 position, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x418930
    Item* Create(Il2CppString* name, ItemState state, GameTile* gameTile, int8_t levelId, Vector3 position, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x418AD0
    Item* Create(int32_t id, ItemState state, GameTile* gameTile, int8_t levelId, Vector3 position, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x419190
    Item* Create(ItemDescriptor* itemDescr, ItemState state, GameTile* gameTile, int8_t levelId, Vector3 position, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x418B90
    static void SpawnBossLootBag(int8_t sourceClientIndex, BossLootBagSpawn msg);  // RVA: 0x419C60
    LootBagItem* SpawnBossLootBag(ItemDescriptor* itemDescr, int8_t levelId, Vector3 spawnPosition, int8_t ownerIndex, Params onlineParams);  // RVA: 0x419E90
    Item* CreateTemplateSpawn(int32_t templateId, GameTile* gameTile, int8_t levelId, Vector3 position, bool loading);  // RVA: 0x417C00
    SpriteObjectBase* CreateAnimatedSpriteObject(Descriptor* descriptor);  // RVA: 0x4170C0
    SpriteObjectBase* CreateSpriteObject(Descriptor* descriptor);  // RVA: 0x4177D0
    HealthBar* CreateHealthBar(float heightOffset);  // RVA: 0x417400
    VendorItem* CreateVendorItem();  // RVA: 0x418880
    VendorItem* CreateVendorItem(VendorStockItem vendorStockDetails, VendorItem* vendorItem, Params itemParams, bool loading);  // RVA: 0x418690
    VendorItemBought* CreateVendorItemBought();  // RVA: 0x4185E0
    VendorItemBought* CreateVendorItemBought(Item* item, int32_t cost, VendorItemBought* vendorItem);  // RVA: 0x4184B0
    void ReturnItem(Item* poolable);  // RVA: 0x4199C0
    void Return(IPoolable* poolable);  // RVA: 0x419BD0
    void .ctor();  // RVA: 0x41A1B0
};

// Namespace: <global>
class CharacterEnemy : public Enemy
{
public:
    uint8_t pad_0000[0x1D8]; // 0x0000
    PlayerSpriteHelper* mSpriteHelper; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    CharacterSettingsTable characterSettings; // 0x01E0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x40FE90
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x40FA30
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x410240
    Il2CppString* GetCurrentAnim();  // RVA: 0x40FCA0
    bool SetAnim(AnimType animType, float animSpeed, AnimCompareType animCompareType, bool sendOnline);  // RVA: 0x4102C0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x4100E0
    void InitialiseEnemyPlacement();  // RVA: 0x40FCE0
    void SpawnItemDrops(int32_t sourcePlayerIndex);  // RVA: 0x410320
    void .ctor();  // RVA: 0x4103D0
};

// Namespace: <global>
class ChildEnemy : public Enemy
{
public:
    uint8_t pad_0000[0x1D8]; // 0x0000
    bool mAttached; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    Boss* mBoss; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    float mData; // 0x01E8
    uint8_t pad_01E9[0x3]; // 0x01E9
    float mData2; // 0x01EC

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x4104A0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x410690
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x410580
    void Attach(bool attach, Boss* boss);  // RVA: 0x410440
    bool CanDespawn(bool checkAuthority);  // RVA: 0x410460
    void UpdateMove(float dt);  // RVA: 0x410760
    void UpdateRemote(float dt);  // RVA: 0x410790
    void .ctor();  // RVA: 0x4109D0
};

// Namespace: <global>
class OnlineHostBossItem : public OnlineMovableItem
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    float mRenderHeightOffset; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float mPositionHeightOffset; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    System.Collections.Generic.HashSet<System.SByte> mPlayerPaths; // 0x0070

    // Methods
    void Initialise(Params onlineParams);  // RVA: 0x425190
    void OnAuthorityChanged(int8_t localClientIndex, int8_t oldClientIndex);  // RVA: 0x425200
    bool HasPath(int8_t playerIndex);  // RVA: 0x425130
    void SetHasPath(int8_t playerIndex);  // RVA: 0x425280
    void ClearHasPath(int8_t playerIndex);  // RVA: 0x4250D0
    void .ctor();  // RVA: 0x4252E0
};

// Namespace: <global>
class CriticalErrorBoss : public Boss
{
public:
    // Static fields
    // static int32_t cMaxBursts;
    // static int32_t cMaxChildBursts;
    // static float cInitialFireCooldown;
    // static float cFireCooldown;
    // static float cFireChildCooldown;
    // static int32_t cNumChildren;
    // static float cChildSpeed;
    // static float cChildRespawnTimer;
    // static float cChildSpawnPauseTimer;
    // static float cChildMaxSpawnsInARow;

    uint8_t pad_0000[0x200]; // 0x0000
    Vector3 mPrevMoveVector; // 0x0200
    uint8_t pad_0201[0xB]; // 0x0201
    float mChildDist; // 0x020C
    uint8_t pad_020D[0x3]; // 0x020D
    float mStateTimer; // 0x0210
    uint8_t pad_0211[0x3]; // 0x0211
    int32_t mStateCounter; // 0x0214
    uint8_t pad_0215[0x3]; // 0x0215
    float mChildTimer; // 0x0218
    uint8_t pad_0219[0x3]; // 0x0219
    float mChildRotation; // 0x021C
    uint8_t pad_021D[0x3]; // 0x021D
    int32_t mBurstCount; // 0x0220
    uint8_t pad_0221[0x3]; // 0x0221
    int32_t mChildSpawnedCount; // 0x0224
    uint8_t pad_0225[0x3]; // 0x0225
    int32_t mPendingChildSpawnId; // 0x0228
    uint8_t pad_0229[0x3]; // 0x0229
    float mChildSpawnPauseTimer; // 0x022C
    uint8_t pad_022D[0x3]; // 0x022D
    float mChildSpawnsInARow; // 0x0230

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x413850
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x410F50
    void InitialiseEnemyPlacement();  // RVA: 0x410DC0
    void OnEnemyRemoved(Enemy* enemy);  // RVA: 0x411200
    void Delete();  // RVA: 0x410A60
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x410B30
    void SpawnProgressionKey();  // RVA: 0x411990
    void KillImplementation(int32_t playerIndex);  // RVA: 0x411110
    void ProcessPhaseChange();  // RVA: 0x4112E0
    void UpdateAudio(float dt);  // RVA: 0x411D70
    void UpdateMove(float dt);  // RVA: 0x4132F0
    void UpdateRemote(float dt);  // RVA: 0x413480
    void SetPositionHeightOffset(float offset);  // RVA: 0x411300
    void UpdateSpawnPhase(float dt);  // RVA: 0x413780
    void UpdateDefaultPhase(float dt);  // RVA: 0x4132B0
    void UpdateChildCirclePhase(float dt);  // RVA: 0x412AD0
    void UpdateBossMove(float dt);  // RVA: 0x4120B0
    void UpdateBossMoveRemote(float dt);  // RVA: 0x412070
    void UpdateChildren(float dt);  // RVA: 0x412D00
    bool UpdateBossFire(float dt);  // RVA: 0x411F70
    void SpawnChildProjectiles();  // RVA: 0x411560
    void SpawnProjectile(Enemy* source, Il2CppString* projectileName, int32_t burstIndex);  // RVA: 0x411A20
    void SpawnChildEffect(int32_t childSpawnId);  // RVA: 0x411550
    void SpawnChild();  // RVA: 0x411800
    void .ctor();  // RVA: 0x4137B0
};

// Namespace: <global>
class WateredTileState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameTile* mGameTile; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float mAge; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float mDuration; // 0x001C

    // Methods
    void Initialise(GameTile* gameTile, float duration);  // RVA: 0x425430
    float GetAlpha();  // RVA: 0x4253F0
    void Extend(float newDuration);  // RVA: 0x4253D0
    void Save(Stream* stream);  // RVA: 0x425740
    void Load(Stream* stream, Level* level);  // RVA: 0x425470
    void OnWateredStateChange();  // RVA: 0x425610
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct TileAdjacencyFlags
{
public:
    // Static fields
    // static TileAdjacencyFlags W;
    // static TileAdjacencyFlags N;
    // static TileAdjacencyFlags E;
    // static TileAdjacencyFlags S;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Level
{
public:
    // Static fields
    // static SimplePool<WateredTileState> sWateredTileStatePool;
    // static System.Collections.Generic.List<GameTile> sAdjacentGameTiles;
    // static System.Collections.Generic.List<System.Int32> sSurfaceGroups;

    uint8_t pad_0000[0x10]; // 0x0000
    int8_t mLevelId; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameTile[][][] mGameTiles; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Unity.Collections.NativeArray<UnityEngine.Vector2> uvRects; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    bool mInitialised; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.LinkedList<WateredTileState> mWateredTileLinkedList; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<GameTile,WateredTileState> mWateredTileNodes; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t mRows; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t mCols; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int32_t mMaxExtents; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    RectInt mRect; // 0x0054
    uint8_t pad_0055[0x13]; // 0x0055
    Il2CppString* mLevelGeneratorName; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    LevelDescriptor* mLevelDescriptor; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    int32_t mRandomSeed; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Random* mRandom; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    SpawnGroupDescriptor* mSpawnGroupDescriptorOverride; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Vector2 mGlitchSource; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<TeleporterItem> mTeleporters; // 0x0098

    // Methods
    void .ctor(int16_t levelCols, int16_t levelRows, Il2CppString* levelGeneratorName, LevelDescriptor* levelDescriptor);  // RVA: 0x423BB0
    void Initialise();  // RVA: 0x420260
    void InitialiseRandom(int32_t seed);  // RVA: 0x4201C0
    uint8_t GetGameTileRandom();  // RVA: 0x41E610
    void CreateTerrainMesh();  // RVA: 0x41DF10
    void RefreshTileMesh(int32_t col, int32_t row);  // RVA: 0x421C20
    void UpdateItemsPreSave();  // RVA: 0x422D30
    void Save(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x422270
    void SaveVisibility(Stream* stream, uint8_t visibilityIndex);  // RVA: 0x421DE0
    static void LoadVisibility(FileStream* fStream, uint8_t visibilityIndex, Level* level);  // RVA: 0x420B80
    void SaveWateredTiles(Stream* stream);  // RVA: 0x422030
    void LoadWateredTiles(Stream* stream, int32_t version);  // RVA: 0x420DA0
    void ClearWateredTiles();  // RVA: 0x41DC20
    void Clear();  // RVA: 0x41DD50
    void Delete();  // RVA: 0x41E120
    static Level* LoadLevel(Stream* stream, int32_t version, int8_t levelId);  // RVA: 0x420770
    void Load(Stream* stream, int32_t version, int32_t worldSerialisationFlags);  // RVA: 0x421110
    void FloodFillOcean();  // RVA: 0x41E170
    bool ProcessOceanTile(System.Collections.Generic.Queue<GameTile> oceanTiles);  // RVA: 0x421B20
    void AddOceanTile(System.Collections.Generic.Queue<GameTile> oceanTiles, int32_t col, int32_t row);  // RVA: 0x41DB60
    void PostLoadObjects(int32_t worldSerialisationFlags);  // RVA: 0x421A70
    void VerifyGameTiles();  // RVA: 0x423120
    void LogGameState();  // RVA: 0x421910
    TraversalType GetTraversalType(int32_t col, int32_t row);  // RVA: 0x41E7E0
    int32_t GetTileType(int32_t col, int32_t row);  // RVA: 0x41E770
    bool HasCompatibleSurfaceGroup(int32_t col, int32_t row, System.Collections.Generic.Dictionary<System.Int32,System.Boolean> compatibleSurfaceGroups);  // RVA: 0x41FE20
    bool HasSurfaceGroup(int32_t col, int32_t row, int32_t surfaceGroup);  // RVA: 0x420080
    int32_t GetTileIndex(int32_t col, int32_t row);  // RVA: 0x41E760
    static void SetWatered(int8_t sourceClientIndex, LevelWater msg);  // RVA: 0x422830
    void SetWatered(int32_t col, int32_t row);  // RVA: 0x422990
    void SetUnWatered(int32_t col, int32_t row);  // RVA: 0x422750
    float GetWateredAlpha(int32_t col, int32_t row);  // RVA: 0x41FCB0
    void SetTilled(int32_t col, int32_t row);  // RVA: 0x422610
    void SetUnTilled(int32_t col, int32_t row);  // RVA: 0x4226B0
    void UpdateTime(float dt);  // RVA: 0x422DE0
    void UpdateTiles(float dt);  // RVA: 0x422DE0
    GameTile* GetGameTile(Vector3 position, bool logErrors);  // RVA: 0x41E650
    GameTile* GetGameTile(int32_t col, int32_t row, bool logErrors);  // RVA: 0x41E680
    System.Collections.Generic.List<GameTile> GetAdjacentGameTiles(GameTile* gameTile);  // RVA: 0x41E340
    GameTile* GetValidGameTileSpiral(int32_t col, int32_t row, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds);  // RVA: 0x41F730
    GameTile* GetValidGameTileSpiral(int32_t col, int32_t row, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds, Vector2Int dirVec);  // RVA: 0x41F2D0
    GameTile* GetValidGameTileSpiral(int32_t col, int32_t row, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds, int32_t validMargin, int32_t validMarginIterations);  // RVA: 0x41F620
    GameTile* GetValidGameTileSpiral(int32_t col, int32_t row, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds, Vector2Int dirVec, int32_t validMargin, int32_t validMarginIterations);  // RVA: 0x41F800
    bool ValidateWindow(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow);  // RVA: 0x422F80
    GameTile* GetValidGameTileSpiral(int8_t localPlayerIndex, int32_t pathfindingType, int32_t col, int32_t row, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds);  // RVA: 0x41FBB0
    GameTile* GetValidGameTileSpiral(int8_t localPlayerIndex, int32_t pathfindingType, int32_t col, int32_t row, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight, bool ignorePlayerBounds, Vector2Int dirVec);  // RVA: 0x41EEC0
    GameTile* GetValidGameTileInDir(int32_t col, int32_t row, Vector2 dir, bool targetValid);  // RVA: 0x41EA00
    static void TrimBounds(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, int32_t cols, int32_t rows);  // RVA: 0x422BF0
    void TrimBounds(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow);  // RVA: 0x422C30
    Vector2Int GetTrimmedCenter(Vector2Int centerPos, int32_t width, int32_t height);  // RVA: 0x41E850
    bool ItemsItersectTile(int32_t col, int32_t row, int32_t margin, Item* exclude, System.Collections.Generic.List<Item> intersectingItems);  // RVA: 0x4203B0
    static void .cctor();  // RVA: 0x423A50
};

// Namespace: <global>
class LoadState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* mState; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t mLevelId; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mCol; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mRow; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* mDesc; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t mDescCol; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t mDescRow; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    Il2CppString* mPrevDesc; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mPrevDescCol; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t mPrevDescRow; // 0x0044

    // Methods
    void SetState(Il2CppString* newState);  // RVA: 0x4250C0
    void SetDesc(Il2CppString* desc);  // RVA: 0x425040
    void SetLevel(int32_t levelId);  // RVA: 0x4250B0
    void SetGameTile(int32_t col, int32_t row);  // RVA: 0x4250A0
    void UpdateGameTile(int32_t col, int32_t row);  // RVA: 0x4250A0
    void LogState();  // RVA: 0x424E00
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class LevelManager : public MonoBehaviour
{
public:
    // Static fields
    // static LevelManager* instance;
    // static int32_t cMaxPathfindingUpdatesPerFrame;

    uint8_t pad_0000[0x20]; // 0x0000
    int32_t mOriginalSaveVersion; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    GameTargetType mOriginalSaveTargetType; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    MiniTileDatabase* mMiniTileDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* mTileRendererPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemIndexTable* mLevelDescriptorIndexTable; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ItemIndexTable* mTileIndexTable; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ItemIndexTable* mBiomeIndexTable; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ItemIndexTable* mItemIndexTable; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ItemIndexTable* mNPCIndexTable; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ItemIndexTable* mQuestIndexTable; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.Dictionary<System.Int32,Level> mLevels; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.Dictionary<System.String,TeleporterItem> mTeleporters; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    bool mRelinkTeleporters; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<PathfindingResult> pathfindingResultsToUpdate; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    float mPathfindingUpdateDeltaTime; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    int32_t mCurrentPathfindingUpdateIndex; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    LoadState* mLoadState; // 0x0090

    // Methods
    void Awake();  // RVA: 0x41A480
    void FixedUpdate();  // RVA: 0x41A7F0
    Level* AllocateMemory(int8_t levelId, Il2CppString* levelGeneratorName, LevelDescriptor* levelDescriptor, int16_t levelCols, int16_t levelRows);  // RVA: 0x41A3A0
    Level* AddLevel(int8_t levelId, Level* level);  // RVA: 0x41A330
    Level* GetLevel(int32_t levelId);  // RVA: 0x41AC80
    Level* ValidateLevel(int32_t levelId, int32_t cols, int32_t rows);  // RVA: 0x41D0F0
    Level* GetLevel(Il2CppString* levelName);  // RVA: 0x41ACF0
    Level* GetFirstLevelByType(Il2CppString* levelType);  // RVA: 0x41A9D0
    void InitialiseTeleporters();  // RVA: 0x41B060
    void PopulateTeleporters();  // RVA: 0x41C0D0
    void LinkTeleporters();  // RVA: 0x41B090
    TeleporterItem* GetTeleporter(Il2CppString* id);  // RVA: 0x41AFF0
    int32_t GetMaxLevelIndex();  // RVA: 0x41AE90
    GameTile* GetGameTile(int32_t levelId, int32_t col, int32_t row);  // RVA: 0x41AB80
    void VerifyLevels();  // RVA: 0x41D1E0
    void LogGameState();  // RVA: 0x41BC80
    void Clear();  // RVA: 0x41A520
    void OnDestroy();  // RVA: 0x41BF70
    void UpdateTime(float dt);  // RVA: 0x41CBB0
    void Load(Stream* stream, WorldMetaData* worldMetaData, int32_t version, int32_t worldSerialisationFlags);  // RVA: 0x41B770
    void UpdateWorldGeneration(int32_t version, int32_t cols, int32_t rows);  // RVA: 0x41CE80
    void LoadVisibility(FileStream* fStream, uint8_t visibilityIndex);  // RVA: 0x41B540
    void UpdateItemsPreSave();  // RVA: 0x41CA80
    void Save(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x41C6A0
    void SaveGameTilePosition(Stream* stream, GameTile* gameTile);  // RVA: 0x41C2E0
    GameTile* LoadGameTilePosition(Stream* stream, bool stub);  // RVA: 0x41B2D0
    void SaveVisibility(FileStream* fStream, uint8_t visibilityIndex);  // RVA: 0x41C430
    static void WriteToFile(Single[][][] heightMap, Il2CppString* filename);  // RVA: 0x41D300
    void WriteToFile(GameTile[][][] gameTiles);  // RVA: 0x41D4E0
    void .ctor();  // RVA: 0x41D8D0
};

// Namespace: <global>
class AmbientShadowRenderObject
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Material* mMaterial; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<UnityEngine.Vector3> mVertices; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<UnityEngine.Vector2> mUVs; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Int32> mTriangles; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MeshFilter* mMeshFilter; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Mesh* mMesh; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mNumAmbientShadows; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t mMaxAmbientShadows; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Matrix4x4[][] mAmbientShadowMatrices; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<UnityEngine.Vector4> mAmbientShadowUVs; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<System.Single> mAlphas; // 0x0058

    // Methods
    void .ctor(Material* material, int32_t maxAmbientShadows);  // RVA: 0x40F6E0
    void Clear();  // RVA: 0x40F020
    void Initialise();  // RVA: 0x40F6D0
    void CreateMesh();  // RVA: 0x40F090
    bool AddAmbientShadow(Vector3 position, Vector2 size, Rect uvRect, float alpha);  // RVA: 0x40ED80
};

// Namespace: <global>
struct SpriteRenderLayer
{
public:
    // Static fields
    // static SpriteRenderLayer Surface;
    // static SpriteRenderLayer Shadow;
    // static SpriteRenderLayer World;
    // static SpriteRenderLayer Overlay;
    // static SpriteRenderLayer Count;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct BlockerData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t levelId; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mX; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mY; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t surfaceId; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool tileable; // 0x0028

    // Methods
    void .ctor(Item* item);  // RVA: 0x40F970
};

// Namespace: <global>
class GameRendering : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t maxBlockers;
    // static int32_t maxLightCasters;
    // static int32_t maxVisibleLights;
    // static int32_t maxVisibleGlows;
    // static int32_t maxVisibleAmbiantShadows;

    uint8_t pad_0000[0x20]; // 0x0000
    CommandBuffer* mCommandBuffer1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* mShadowMapInitialTexture; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RenderTexture* mShadowMapFinalTexture; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RenderTexture* mShadowMapDarkInitialTexture; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RenderTexture* mShadowMapDarkFinalTexture; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RenderTexture* mLightMapTexture; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RenderTexture* mAmbientShadowTexture; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Material* mShadowMapMaterial; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Material* mShadowMapDarkMaterial; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Material* mLightMaterial; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Material* mGlowMaterial; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Material* mDarkMaterial; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Material* mAmbientShadowMaterial; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Mesh* mShadowMapOptimiseMesh; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Material* mShadowMapOptimiseMaterial; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Material* mShadowMapDarkOptimiseMaterial; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Material* mFogMaterial; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    ViewController* mViewController; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Vector3 mCameraTilePos; // 0x00B0
    uint8_t pad_00B1[0xF]; // 0x00B1
    MiniTileRenderer* mMiniTileRenderer; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Collections.Generic.List<SpritesRenderer> mSpriteRenderers; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Collections.Generic.List<BlockerData> mBlockerItems; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<UnityEngine.Vector3> mBlockerEdges; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.List<UnityEngine.Vector3> mBlockerVertices; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Collections.Generic.List<UnityEngine.Vector2> mBlockerNormals; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    Mesh* mBlockerMesh; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.List<System.Int32> mBlockerIndices; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Matrix4x4[][] mShadowMatrices; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    LightRenderObject* mLight; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    LightRenderObject* mGlow; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    LightRenderObject* mDark; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    AmbientShadowRenderObject* mAmbientShadow; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    Color mTintColour; // 0x0128
    uint8_t pad_0129[0xF]; // 0x0129
    Color mAmbientColour; // 0x0138
    uint8_t pad_0139[0xF]; // 0x0139
    float mLightScaler; // 0x0148
    uint8_t pad_0149[0x3]; // 0x0149
    float mShadowScaler; // 0x014C
    uint8_t pad_014D[0x3]; // 0x014D
    float mLightBoundsScaler; // 0x0150
    uint8_t pad_0151[0x3]; // 0x0151
    Color mFogColour; // 0x0154
    uint8_t pad_0155[0xF]; // 0x0155
    float mFogBaseVal; // 0x0164
    uint8_t pad_0165[0x3]; // 0x0165
    float mFogLayerMod; // 0x0168
    uint8_t pad_0169[0x3]; // 0x0169
    float mFogHeightMin; // 0x016C
    uint8_t pad_016D[0x3]; // 0x016D
    float mFogHeightMax; // 0x0170
    uint8_t pad_0171[0x3]; // 0x0171
    float mFogFalloff; // 0x0174
    uint8_t pad_0175[0x3]; // 0x0175
    int32_t mShaderVariant; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    MaterialPropertyBlock* mMaterialPropertyBlock; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    float mPPU; // 0x0188
    uint8_t pad_0189[0x3]; // 0x0189
    float mClampStepSize; // 0x018C

    // Methods
    void Awake();  // RVA: 0x413C10
    void Initialise(int32_t layerMask, ViewController* viewController);  // RVA: 0x414B10
    void Begin();  // RVA: 0x413EE0
    void End();  // RVA: 0x414A70
    Vector3 ConvertToRenderPos(Vector3 worldPos);  // RVA: 0x414950
    void AddBlockerItem(Item* blocker);  // RVA: 0x4138C0
    void AddLightObject(LightObject* lightObject, Vector3 lightPosition);  // RVA: 0x413B50
    void AddGlowObject(LightObject* lightObject, Vector3 lightPosition, float lightIntensity);  // RVA: 0x413B00
    void AddAmbientShadowObject(Vector3 position, Vector2 size, Rect uvRect, float alpha);  // RVA: 0x413860
    void UpdateAmbientColour();  // RVA: 0x416700
    void BuildLightBlockerMesh();  // RVA: 0x4141F0
    void SetGlobalShaderParams(CommandBuffer* commandBuffer);  // RVA: 0x416250
    void SetShaderVariant(int32_t variant);  // RVA: 0x416630
    void OnPreRender();  // RVA: 0x415680
    static Mesh* MakeFullscreenRenderMesh();  // RVA: 0x415220
    void .ctor();  // RVA: 0x416930
};

// Namespace: <global>
class LightRenderObject
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Material* mMaterial; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<UnityEngine.Vector3> mVertices; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<UnityEngine.Vector2> mUVs; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Int32> mTriangles; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MeshFilter* mMeshFilter; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Mesh* mMesh; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mNumVisibleLights; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t mMaxVisibleLights; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    bool mUseShadowMap; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Matrix4x4[][] mLightMatrices; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<UnityEngine.Vector4> mLightColors; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<UnityEngine.Vector4> mLightPositions; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<UnityEngine.Vector4> mLightShadowMapParams; // 0x0068

    // Methods
    void .ctor(Material* material, int32_t maxVisibleLights, RenderTexture* shadowMapFinalTexture);  // RVA: 0x424AD0
    void Clear();  // RVA: 0x4242F0
    void Initialise(Il2CppString* textureName, Texture* texture);  // RVA: 0x424A30
    void CreateMesh();  // RVA: 0x424360
    bool AddLightObject(LightObject* lightObject, Vector3 lightPosition, float lightIntensityScale);  // RVA: 0x423E90
    static Vector4 GetShadowMapParams(int32_t slot, float maxSlots);  // RVA: 0x4249A0
};

// Namespace: <global>
struct LightFadeState
{
public:
    // Static fields
    // static LightFadeState LFS_NONE;
    // static LightFadeState LFS_FADEIN;
    // static LightFadeState LFS_FADEOUT;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct Lightype
{
public:
    // Static fields
    // static Lightype LT_LIGHT;
    // static Lightype LT_DARK;
    // static Lightype LT_GLOW;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class LightObject : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    LightDescriptor* mDescriptor; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float mTime; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float mAge; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    LightFadeState mFadeState; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mFadeTimer; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float mLightModifier; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool mExpiring; // 0x0034

    // Methods
    void Initialise(LightDescriptor* descriptor);  // RVA: 0x42EAE0
    bool Update(float dt);  // RVA: 0x42EB80
    LightValue GetLightValue();  // RVA: 0x42E980
    void .ctor();  // RVA: 0x42EC90
};

// Namespace: <global>
class LightManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    LightDatabase* mLightDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ObjectPool* mLightObjectPool; // 0x0028

    // Methods
    void Initialise();  // RVA: 0x42E890
    LightObject* CreateLight(Il2CppString* name, Item* item);  // RVA: 0x42E740
    void CancelLight(LightObject* lightObject);  // RVA: 0x42E700
    void .ctor();  // RVA: 0x42E910
};

// Namespace: <global>
struct LoreState
{
public:
    // Static fields
    // static LoreState None;
    // static LoreState Spawned;
    // static LoreState Received;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<LoreDescriptor> <>9__6_0;


    // Methods
    static void .cctor();  // RVA: 0x43CF40
    void .ctor();  // RVA: 0x2C1750
    int32_t <Sort>b__6_0(LoreDescriptor* a, LoreDescriptor* b);  // RVA: 0x43CF10
};

// Namespace: <global>
class LoreManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<LoreDescriptor> mSortedLore; // 0x0010

    // Methods
    void Initialise();  // RVA: 0x42ECA0
    void Clear();  // RVA: 0x42ECA0
    void PostLoad(EventMap* eventMap);  // RVA: 0x42EF40
    void DiscoverLore(Il2CppString* loreName);  // RVA: 0x42ED00
    void Sort();  // RVA: 0x42F1E0
    bool HasLore(Il2CppString* loreName);  // RVA: 0x42EE80
    int32_t UnreadLoreCount(Player* player);  // RVA: 0x42F300
    bool IsLoreRead(Il2CppString* loreName, Player* player);  // RVA: 0x42EF20
    void ReadLore(Il2CppString* loreName, Player* player);  // RVA: 0x42F150
    void .ctor();  // RVA: 0x42F370
};

// Namespace: <global>
struct SBytePair
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int8_t First; // 0x0010
    int8_t Second; // 0x0011
};

// Namespace: <global>
class BiomeGenerator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MiniTileDatabase* miniTileDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ItemDatabase* itemDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<TileConversion> riverEdgeTileConversions; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int16_t cols; // 0x0038
    uint8_t pad_0039[0x1]; // 0x0039
    int16_t rows; // 0x003A
    uint8_t pad_003B[0x5]; // 0x003B
    System.Collections.Generic.Dictionary<System.SByte,System.SByte> mRiverEdgeTileConversionMap; // 0x0040

    // Methods
    void Initialise(int16_t _cols, int16_t _rows);  // RVA: 0x428790
    static int32_t GetMarginValue(float rawValue, int32_t extents);  // RVA: 0x428760
    void AddBiome(int16_t cols, int16_t rows, GameTile[][][] gameTiles, BiomePlacementParams* biomePlacementParams);  // RVA: 0x4263B0
    void AddRiver(Level* level, GameTileGenParams[][][] gameTileGenParams, RiverPlacementParams* riverPlacementParams);  // RVA: 0x426740
    void AddBiomeTendrils(Level* level, GameTileGenParams[][][] gameTileGenParams, BiomeTendrilPlacementParams* biomeTendrilPlacementParams);  // RVA: 0x4259C0
    float CalculateMinHeightModifier(float col, float row, LevelDescriptor* levelDescriptor);  // RVA: 0x427110
    void Generate(Level* level, int16_t _cols, int16_t _rows, float mapSizeScaler, GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, LevelDescriptor* levelDescriptor);  // RVA: 0x427920
    void AddBiomeTendrils(Level* level, GameTileGenParams[][][] gameTileParams, LevelDescriptor* levelDescriptor);  // RVA: 0x425890
    void SetRiverTile(GameTileGenParams[][][] gameTileParams, GameTile[][][] gameTiles, int32_t col, int32_t row, int32_t riverType, int32_t vegetationType, System.Collections.Generic.List<VegetationGroupDescriptor> vegetationGroupDescriptors);  // RVA: 0x428BD0
    void GenerateTileTypes(GameTileGenParams[][][] gameTileParams, GameTile[][][] gameTiles);  // RVA: 0x427480
    void GenerateVegetationGroups(GameTileGenParams[][][] gameTileParams);  // RVA: 0x427780
    void CalculateBounds(int32_t col, int32_t row, int32_t dist, int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, int32_t maxCol, int32_t maxRow);  // RVA: 0x4270B0
    bool ValidTileType(GameTile[][][] gameTiles, int32_t tileType, int32_t primaryType, int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow);  // RVA: 0x429180
    void SeedVegetation(GameTileGenParams[][][] gameTileParams, System.Collections.Generic.List<VegetationGroupDescriptor> vegetationGroupDescriptors);  // RVA: 0x4289C0
    void CleanupTileTypes(GameTile[][][] gameTiles);  // RVA: 0x427210
    void CleanMemory();  // RVA: 0x2C1B90
    void LogGameState();  // RVA: 0x428960
    void .ctor();  // RVA: 0x429270
};

// Namespace: <global>
class CaveGenerator
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mStartCol; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t mStartRow; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t mEndCol; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mEndRow; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int16_t mWallType; // 0x0020
    uint8_t pad_0021[0x1]; // 0x0021
    int16_t mSurfaceType; // 0x0022
    uint8_t pad_0023[0x1]; // 0x0023
    int8_t mTileType; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2C1750
    void Generate(GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileGenParams, int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow);  // RVA: 0x4294E0
    void CellularAutomaton(GameTileGenParams[][][] gameTileGenParams, int32_t deathLimit, int32_t birthLimit);  // RVA: 0x429310
    int32_t NumNeighbours(GameTileGenParams[][][] gameTileGenParams, int32_t col, int32_t row);  // RVA: 0x429B20
};

// Namespace: <global>
class GameTileGenParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float mVegetationDensity; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int16_t mVegetationGroup; // 0x0014
    uint8_t pad_0015[0x1]; // 0x0015
    int16_t mShortTemp; // 0x0016
    uint8_t pad_0017[0x1]; // 0x0017
    float mFloatTemp; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float mFloatTemp2; // 0x001C

    // Methods
    void Clear();  // RVA: 0x429C60
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class HeightTileConversionLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* surfaceType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<TileConversion> tileConversions; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<TileConversion> adjTileConversions; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool adjApplyRoadEdgeVegetation; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float adjVegetationDensity; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t surfaceTypeId; // 0x0030

    // Methods
    void Initialise(ItemDatabase* itemDatabase, MiniTileDatabase* miniTileDatabase);  // RVA: 0x429C70
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct TeleporterPlacementCost
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float mCost; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameTile* mGameTile; // 0x0018

    // Methods
    void .ctor(float cost, GameTile* gameTile);  // RVA: 0x43CCC0
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<LevelGenerator.TeleporterPlacementCost> <>9__26_0;


    // Methods
    static void .cctor();  // RVA: 0x43CFB0
    void .ctor();  // RVA: 0x2C1750
    int32_t <GetTeleporterTile>b__26_0(TeleporterPlacementCost x, TeleporterPlacementCost y);  // RVA: 0x43CEF0
};

// Namespace: <global>
class LevelGenerator : public MonoBehaviour
{
public:
    // Static fields
    // static LevelGenerator* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    bool generateSetpieces; // 0x0020
    bool generateRivers; // 0x0021
    uint8_t pad_0022[0x6]; // 0x0022
    MiniTileDatabase* miniTileDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BiomeGenerator* biomeGenerator; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SetPieceGenerator* setPieceGenerator; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MazeGenerator* mazeGenerator; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    CaveGenerator* caveGenerator; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int8_t mLevelId; // 0x0050
    uint8_t pad_0051[0x1]; // 0x0051
    int16_t mCols; // 0x0052
    uint8_t pad_0053[0x1]; // 0x0053
    int16_t mRows; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float mMapSizeScale; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float mSetPieceMapSizeScaler; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    GameTileGenParams[][][] mGeneratedTileParams; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameTile[][][] mGeneratedTiles; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<LevelGenerator.TeleporterPlacementCost> mTeleporterPlacementCosts; // 0x0070

    // Methods
    void Awake();  // RVA: 0x42A490
    void AllocateMemory(int32_t maxCols, int32_t maxRows, bool refresh);  // RVA: 0x42A220
    static Vector2Int GetLevelSize(int16_t worldCols, int16_t worldRows, float worldMapSizeScaler, LevelGeneratorItem* levelGeneratorItem, LevelDescriptor* levelDescriptor);  // RVA: 0x42CAB0
    void InitialiseLevel(int8_t levelId, int16_t levelCols, int16_t levelRows, float mapSizeScaler, LevelGeneratorItem* levelGeneratorItem, LevelDescriptor* levelDescriptor);  // RVA: 0x42DBA0
    void GenerateLevel(int8_t levelId, int16_t worldCols, int16_t worldRows, float mapSizeScaler, LevelGeneratorItem* levelGeneratorItem, LevelDescriptor* levelDescriptor);  // RVA: 0x42B050
    void UpdateLevelGeneration(Level* level, int32_t version);  // RVA: 0x42E2C0
    void CreateTeleporters(Level* level, System.Collections.Generic.List<TeleporterParams> levelTeleporters);  // RVA: 0x42A6F0
    bool CreateTeleporter(Level* level, TeleporterParams* teleporterParams, int32_t searchDistance);  // RVA: 0x42A5C0
    bool AddTeleporter(Level* level, int16_t col, int16_t row, TeleporterParams* teleporterParams);  // RVA: 0x429E30
    GameTile* GetTeleporterTile(Level* level, System.Collections.Generic.List<UnityEngine.Vector2> positions, int32_t searchDistance, int32_t distOffset, bool blockedByConstTiles, bool blockedByChildObjects, bool desireWallAbove, bool desireWallsBeside, int32_t desiredTileType);  // RVA: 0x42CBD0
    void CreateWaypoints(Level* level, System.Collections.Generic.List<WaypointParams> waypoints, bool blockedByConstTiles, bool blockedByChildObjects);  // RVA: 0x42ACA0
    bool CreateWaypoint(Level* level, WaypointParams* waypointParams, int32_t searchDistance, bool blockedByConstTiles, bool blockedByChildObjects);  // RVA: 0x42A9E0
    Level* Generate(LevelGeneratorItem* levelGeneratorItem);  // RVA: 0x42C6B0
    void GenerateDungeon();  // RVA: 0x42AEE0
    void GenerateTileTypes(Level* level, LevelGeneratorItem* levelGeneratorItem, LevelDescriptor* levelDescriptor);  // RVA: 0x42B450
    void SwapVegetation(GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, System.Collections.Generic.Dictionary<System.Int16,ItemSwapParams> itemSwapMap);  // RVA: 0x42E100
    void GrowVegetation(GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, BiomeGenerator* biomeGenerator, System.Collections.Generic.List<VegetationGrowthDescriptor> vegetationGrowthParams);  // RVA: 0x42D510
    int32_t numVegetationNeighbours(GameTileGenParams[][][] gameTileGenParams, int32_t col, int32_t row, int32_t cols, int32_t rows);  // RVA: 0x42E5D0
    void GenerateVegetation(GameTile[][][] gameTiles);  // RVA: 0x42B970
    void CleanMemory(bool includeVegetationTypeMap);  // RVA: 0x42A530
    void LogGameState();  // RVA: 0x42DFD0
    void .ctor();  // RVA: 0x42E4D0
};

// Namespace: <global>
struct BlendType
{
public:
    // Static fields
    // static BlendType Additive;
    // static BlendType Multiplicative;
    // static BlendType Lerp;
    // static BlendType Subtractive;
    // static BlendType Divide;
    // static BlendType Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class MapGenerationStep
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    BlendType blendType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MapGenerator* mapGenerator; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct Coordinate
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t col; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t row; // 0x0014

    // Methods
    void .ctor(int32_t c, int32_t r);  // RVA: 0x429C50
};

// Namespace: <global>
class MapGenerator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MapGenerationStep[][] mapGenerationSteps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MapProcessor[][] postProcessingSteps; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool writeToFile; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* saveName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool profile; // 0x0040
    bool normalise; // 0x0041
    uint8_t pad_0042[0x2]; // 0x0042
    float minVal; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float maxVal; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float scaleMin; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float scaleMax; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float clampMin; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float clampMax; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    bool invert; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float initialValue; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Single[][][] map; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Single[][][] sampleMap; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    int32_t cols; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    int32_t rows; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    bool initialised; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    int32_t mMaxCols; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    int32_t mMaxRows; // 0x0088

    // Methods
    void GenerateSampleMap(int32_t sampleCols, int32_t sampleRows);  // RVA: 0x4322F0
    void AllocateMemory(int32_t maxCols, int32_t maxRows, bool refresh);  // RVA: 0x431750
    void GenerateRawMap();  // RVA: 0x432260
    void GenerateMap(int32_t _cols, int32_t _rows, bool refresh);  // RVA: 0x431F40
    void Normalise();  // RVA: 0x432670
    void PostProcess();  // RVA: 0x432870
    void Blend(BlendType blendType, MapGenerator* mapGenerator);  // RVA: 0x4318A0
    void AdditiveBlend(Single[][][] sourceMap);  // RVA: 0x4316A0
    void SubtractiveBlend(Single[][][] sourceMap);  // RVA: 0x432920
    void MultiplicativeBlend(Single[][][] sourceMap);  // RVA: 0x4325C0
    void DivideBlend(Single[][][] sourceMap);  // RVA: 0x431E30
    void LerpBlend(Single[][][] sourceMap);  // RVA: 0x432400
    void MaxBlend(Single[][][] sourceMap);  // RVA: 0x4324F0
    void WriteToFile(Il2CppString* filename);  // RVA: 0x4329D0
    void .ctor();  // RVA: 0x432B30
};

// Namespace: <global>
class MapGeneratorDiamondSquare : public MapGenerator
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    float randomScaleFactor; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    bool initCenter; // 0x0094
    bool initEdges; // 0x0095
    uint8_t pad_0096[0x2]; // 0x0096
    float initVal; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    bool island; // 0x009C

    // Methods
    void GenerateRawMap();  // RVA: 0x42F3F0
    void .ctor();  // RVA: 0x430560
};

// Namespace: <global>
class PerlinParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float scale; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float weight; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t blockSize; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x437400
};

// Namespace: <global>
class MapGeneratorPerlin2 : public MapGenerator
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    PerlinParams[][] perlinLayers; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool equalise; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float quantisationLevels; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    int32_t mQuantisationLevels; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Int32[][] originalHistogram; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Single[][] newHistogram; // 0x00B0

    // Methods
    void AllocateMemory(int32_t cols, int32_t rows, bool refresh);  // RVA: 0x430780
    void AddPerlinLayer(float scale, float weight, int32_t blockSize, Vector2 perlinOffset);  // RVA: 0x4305E0
    void GenerateRawMap();  // RVA: 0x430970
    void .ctor();  // RVA: 0x4311D0
};

// Namespace: <global>
class MapGeneratorRectangle : public MapGenerator
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    float rectIn; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float rectOut; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float left; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float right; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float bottom; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    float top; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float colEdge; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float rowEdge; // 0x00AC

    // Methods
    void GenerateRawMap();  // RVA: 0x431250
    void .ctor();  // RVA: 0x431610
};

// Namespace: <global>
class MapProcessor : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t cols; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t rows; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    MapGenerator* mapGen; // 0x0028

    // Methods
    void Process(MapGenerator* mapGenerator);  // RVA: 0x4341E0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class BlockifyParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float weight; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t blockSize; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x4292F0
};

// Namespace: <global>
class MapProcessorBlockify : public MapProcessor
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    BlockifyParams[][] blockifyLayers; // 0x0030

    // Methods
    void AddBlockifyLayer(Single[][][] sourceMap, Single[][][] tempMap, float weight, int32_t blockSize);  // RVA: 0x432BA0
    void Process(MapGenerator* mapGenerator);  // RVA: 0x432D20
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class MapProcessorBoxBlur : public MapProcessor
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    int32_t radius; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t iterations; // 0x0034

    // Methods
    static void BoxBlurIterate(Single[][][] sourceMap, Single[][][] workingMap, int32_t _radius, int32_t _iterations);  // RVA: 0x4334C0
    static void BoxesForGauss(float sigma, int32_t n, System.Collections.Generic.List<System.Int32>& sizes);  // RVA: 0x433A20
    static void BoxBlur(Single[][][] sourceMap, Single[][][] workingMap, int32_t workingRadius);  // RVA: 0x4339E0
    static void BoxBlurH(Single[][][] sourceMap, Single[][][] destMap, int32_t workingRadius);  // RVA: 0x4330D0
    static void BoxBlurT(Single[][][] sourceMap, Single[][][] destMap, int32_t workingRadius);  // RVA: 0x433600
    void Process(MapGenerator* mapGenerator);  // RVA: 0x433BE0
    void .ctor();  // RVA: 0x433DF0
};

// Namespace: <global>
class MapProcessorEdgeDetect : public MapProcessor
{
public:

    // Methods
    void Process(MapGenerator* mapGenerator);  // RVA: 0x433E10
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class MapProcessorThreshold : public MapProcessor
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    float threshold; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float min; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float max; // 0x0038

    // Methods
    void Process(MapGenerator* mapGenerator);  // RVA: 0x4340C0
    void .ctor();  // RVA: 0x4341C0
};

// Namespace: <global>
class MazeGenerator
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameTile[][][] mGameTiles; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int16_t mWallType; // 0x0018
    uint8_t pad_0019[0x1]; // 0x0019
    int16_t mSurfaceType; // 0x001A
    uint8_t pad_001B[0x1]; // 0x001B
    int8_t mTileType; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mTorchId; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int16_t maxSteps; // 0x0024
    uint8_t pad_0025[0x1]; // 0x0025
    int16_t currentSteps; // 0x0026

    // Methods
    void .ctor();  // RVA: 0x4355A0
    void Generate(Level* level, GameTileGenParams[][][] gameTileParams, LevelDescriptor* levelDescriptor);  // RVA: 0x4350B0
    void GenerateMaze(GameTile[][][] gameTiles, int32_t startCol, int32_t startRow, int32_t cols, int32_t rows, int32_t corridorSize);  // RVA: 0x434C60
    void DivideHorizontal2(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, int32_t corridorSize);  // RVA: 0x434710
    void DivideVertical2(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, int32_t corridorSize);  // RVA: 0x4349C0
    void AddTorch(int32_t col, int32_t row, int32_t adjacencyFlag);  // RVA: 0x434210
    void Divide2(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, int32_t corridorSize);  // RVA: 0x4345E0
};

// Namespace: <global>
class SetPieceDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* filename; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool replaceGameTiles; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<GameTile> gameTiles; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemIndexTable* tileIndexTable; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ItemIndexTable* biomeIndexTable; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ItemIndexTable* itemIndexTable; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int64_t fStreamObjectDataStart; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MemoryStream* mStreamObject; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool mStreamLoaded; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t gameSaveVersion; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t gameSaveOriginalVersion; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    GameTargetType gameSaveOriginalTargetType; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    int32_t setPieceSaveVersion; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    Vector2Int centerPos; // 0x0074

    // Methods
    void Initialise();  // RVA: 0x437470
    static void UpdateIndicesToSave(GameTile* gameTile, System.Collections.Generic.Dictionary<System.Int32,System.Boolean> tileIndicesToSave, System.Collections.Generic.Dictionary<System.Int32,System.Boolean> biomeIndicesToSave, System.Collections.Generic.Dictionary<System.Int32,System.Boolean> itemIndicesToSave);  // RVA: 0x438FC0
    static void Save(SetPieceDescriptor* setPiece, Il2CppString* filename, Level* level, System.Collections.Generic.List<GameTile> gameTiles, Vector2Int refPos);  // RVA: 0x437FA0
    Stream* Load(bool returnFileStream);  // RVA: 0x437480
    void CloseStreamObject();  // RVA: 0x437420
    void Resave();  // RVA: 0x437CD0
    void SpawnTile(Stream* fStream, GameTile* gameTile, int16_t mX, int16_t mY, int32_t worldSerialisationFlags, System.Collections.Generic.Dictionary<System.Int32,System.Int32> spawnTemplateConversions);  // RVA: 0x4389B0
    Vector2Int Spawn(int32_t refCol, int32_t refRow, GameTile[][][] _gameTiles, SetPiecePlacementParams* setPiecePlacementParams, bool randomiseOrientation, bool center, System.Collections.Generic.Dictionary<System.Int32,System.Int32> spawnTemplateConversions);  // RVA: 0x438AE0
    void .ctor();  // RVA: 0x439370
};

// Namespace: <global>
class NodeData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int16_t col; // 0x0010
    uint8_t pad_0011[0x1]; // 0x0011
    int16_t row; // 0x0012
    uint8_t pad_0013[0x1]; // 0x0013
    float gScore; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float fScore; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    NodeData* nearestNeighbourNode; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool visited; // 0x0028
    bool closedSet; // 0x0029
    uint8_t pad_002A[0x2]; // 0x002A
    Vector2 previousDir; // 0x002C

    // Methods
    void .ctor(int16_t _col, int16_t _row, float _gScore, float _fScore, NodeData* _nearestNeighbourNode);  // RVA: 0x435630
    void Clear();  // RVA: 0x4355B0
};

// Namespace: <global>
class OpenSetNodeComparer
{
public:

    // Methods
    int32_t Compare(float left, float right);  // RVA: 0x4356E0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class Pathfinder
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    NodeData[][][] nodes; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.SortedList<System.Single,Pathfinder.NodeData> mSortedOpenSet; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t cols; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t rows; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    GameTileGenParams[][][] gameTileGenParams; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameTile[][][] gameTiles; // 0x0030

    // Methods
    void AllocateMemory(int32_t maxCols, int32_t maxRows, bool refresh);  // RVA: 0x435920
    void Initialise(GameTileGenParams[][][] _gameTileGenParams, GameTile[][][] _gameTiles, int32_t _cols, int32_t _rows);  // RVA: 0x437270
    float GetHeuristicScore(Vector2 distVector);  // RVA: 0x437240
    Vector2Int GeneratePath(int32_t pathStartCol, int32_t pathStartRow, int32_t pathEndCol, int32_t pathEndRow, float endThreshold, int16_t pathType, float pathStrength);  // RVA: 0x436710
    void GenerateClosestPath(int32_t pathStartCol, int32_t pathStartRow, int16_t pathType, float maxPathCost, bool blockDeepWater, float pathStrength);  // RVA: 0x435C20
    void CleanMemory();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TileConversion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* originalTile; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* newTile; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int8_t originalTileId; // 0x0020
    int8_t newTileId; // 0x0021

    // Methods
    void Initialise(MiniTileDatabase* miniTileDatabase);  // RVA: 0x43CE80
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TileConverionList
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<TileConversion> tileConversions; // 0x0010

    // Methods
    void Initialise(MiniTileDatabase* miniTileDatabase);  // RVA: 0x43CD90
    int8_t ConvertTileId(int8_t originalTileId);  // RVA: 0x43CCE0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class PathTypeLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t pathType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* surfaceType; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TileConverionList* tileConversionList; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TileConverionList* adjTileConversionList; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool adjApplyRoadEdgeVegetation; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float adjVegetationDensity; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t surfaceTypeId; // 0x0038

    // Methods
    void Initialise(ItemDatabase* itemDatabase, MiniTileDatabase* miniTileDatabase);  // RVA: 0x435700
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class PlacementMargin
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t workingSum; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t margin; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float centerDist; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float weight; // 0x001C

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct placementWeight
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t col; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t row; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float weight; // 0x0018
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<System.ValueTuple<System.Single,UnityEngine.Vector2Int>> <>9__19_0;
    // static System.Comparison<System.ValueTuple<System.Single,UnityEngine.Vector2Int>> <>9__20_0;


    // Methods
    static void .cctor();  // RVA: 0x4722D0
    void .ctor();  // RVA: 0x2C1750
    int32_t <PlaceSetPieceTiny>b__19_0(System.ValueTuple<System.Single,UnityEngine.Vector2Int> x, System.ValueTuple<System.Single,UnityEngine.Vector2Int> y);  // RVA: 0x4722B0
    int32_t <PlaceSetPiece>b__20_0(System.ValueTuple<System.Single,UnityEngine.Vector2Int> x, System.ValueTuple<System.Single,UnityEngine.Vector2Int> y);  // RVA: 0x4722B0
};

// Namespace: <global>
class SetPieceGenerator : public MonoBehaviour
{
public:
    // Static fields
    // static ProfilerMarker sSetPieceGeneratorMarker;

    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<PathTypeLookup> pathTypeConversions; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.Int32,PathTypeLookup> mPathTypeConversionMap; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Pathfinder* pathfinder; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,RoadNode> roadNodes; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int16_t mCols; // 0x0040
    uint8_t pad_0041[0x1]; // 0x0041
    int16_t mRows; // 0x0042
    uint8_t pad_0043[0x1]; // 0x0043
    int32_t placementMarginsSize; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t placementMarginsOversize; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    PlacementMargin[][][] placementMargins; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<System.ValueTuple<System.Single,UnityEngine.Vector2Int>> placementWeights; // 0x0058

    // Methods
    void Initialise(int16_t _cols, int16_t _rows);  // RVA: 0x43AFB0
    void GeneratePath(int32_t startCol, int32_t startRow, int32_t endCol, int32_t endRow, Level* level, System.Collections.Generic.List<UnityEngine.Vector2> intermediateNodes, int16_t pathType, float pathStrength);  // RVA: 0x4397A0
    void GenerateClosestPath(int32_t col, int32_t row, int16_t pathType, float maxPathCost, float pathStrength);  // RVA: 0x439750
    Vector2Int GetSetPiecePosition(SetPiecePlacementParams* placementParams, Level* level);  // RVA: 0x43AED0
    void Generate(Level* level, GameTileGenParams[][][] gameTileParams, BiomeGenerator* biomeGenerator, LevelDescriptor* levelDescriptor, float setPieceMapScaler);  // RVA: 0x43A120
    void GeneratePost(Level* level, GameTileGenParams[][][] gameTileParams, float setPieceMapScaler);  // RVA: 0x439B40
    void PlaceSetPieceTiny(int32_t col, int32_t row, int32_t clearanceSize, GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, Level* level);  // RVA: 0x43B3A0
    void PlaceSetPiece(int32_t col, int32_t row, GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, Level* level);  // RVA: 0x43BCF0
    void SetPathType(GameTile[][][] gameTiles, GameTileGenParams[][][] gameTileParams, int32_t col, int32_t row, int32_t pathType, BiomeGenerator* biomeGenerator, System.Collections.Generic.List<VegetationGroupDescriptor> vegetationGroupDescriptors);  // RVA: 0x43C640
    void AllocateMemory(int32_t maxCols, int32_t maxRows, bool refresh);  // RVA: 0x439380
    void CleanMemory();  // RVA: 0x439730
    void LogGameState();  // RVA: 0x43B340
    void .ctor();  // RVA: 0x43CBB0
    static void .cctor();  // RVA: 0x43CB50
};

// Namespace: <global>
class MapGeneratorItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MapGenerator* mapGenerator; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 mapScale; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool fixedSize; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x45D5C0
};

// Namespace: <global>
class WorldGenerator : public MonoBehaviour
{
public:
    // Static fields
    // static WorldGenerator* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<MapGeneratorItem> mMapGenerators; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    MiniTileDatabase* miniTileDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* miniTileRendererPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemDatabase* itemDatabase; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    VegetationGenerationDatabase* vegetationGenerationDatabase; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    LevelDatabase* levelDatabase; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    LevelGenerator* levelGenerator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.Dictionary<System.String,MapGenerator> mMapGeneratorMap; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.Dictionary<System.Int32,System.Collections.Generic.List<ContainerItem>> mChests; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool mMemoryAllocated; // 0x0068

    // Methods
    void Awake();  // RVA: 0x472ED0
    void AllocateMemory();  // RVA: 0x472C80
    void InitialiseMapGenerators(int32_t cols, int32_t rows);  // RVA: 0x473770
    void GenerateSecondaryLevel(int8_t levelId, Il2CppString* name);  // RVA: 0x4731C0
    void GenerateWorld(WorldMetaData* worldMetaData);  // RVA: 0x4732D0
    void PopulateLoreItems(WorldGeneratorDescriptor* worldGeneratorDescriptor);  // RVA: 0x473CB0
    void PlaceLootItemInChest(Il2CppString* itemName, Level* level, Vector3 position);  // RVA: 0x4739F0
    void CleanMemory();  // RVA: 0x473040
    void LogGameState();  // RVA: 0x473970
    void .ctor();  // RVA: 0x473E40
};

// Namespace: <global>
struct TileNeighbourDir
{
public:
    // Static fields
    // static TileNeighbourDir N;
    // static TileNeighbourDir NE;
    // static TileNeighbourDir E;
    // static TileNeighbourDir SE;
    // static TileNeighbourDir S;
    // static TileNeighbourDir SW;
    // static TileNeighbourDir W;
    // static TileNeighbourDir NW;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class MiniTileRenderer : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    MiniTileDatabase* mMiniTileDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* material; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Material* materialLow; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 mMiniTileSize; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector3 mOffset; // 0x0040
    uint8_t pad_0041[0xB]; // 0x0041
    bool mClampPositions; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float mPPU; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t mMaxColsPerMesh; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t mMaxRowsPerMesh; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Mesh[][][] mMeshArray; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Renderer* meshRenderer; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t mMaxCols; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t mMaxRows; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    System.Collections.Generic.List<UnityEngine.Vector3> vertices; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<System.Int32> mRefreshUVMeshList; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<System.Int32> triangles; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Unity.Collections.NativeArray<UnityEngine.Vector2> uv_native; // 0x0090
    uint8_t pad_0091[0xF]; // 0x0091
    int32_t numMiniTileCols; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t numMiniTileRows; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float mUVWidth; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float mUVHeight; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float mUVDefaultX; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float mUVDefaultY; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    Material* sharedMaterial; // 0x00B8

    // Methods
    void Initialise();  // RVA: 0x45E450
    void SetUVDefault(Vector2 uvDefault);  // RVA: 0x45E610
    void Destroy();  // RVA: 0x45E400
    void OnDestroy();  // RVA: 0x45E400
    Vector3 ConvertToWorldPos(Vector3 tilePos, float cameraZoom);  // RVA: 0x45D780
    Vector3 ConvertToWorldPosText(Vector3 tilePos, float cameraZoom);  // RVA: 0x45D640
    Vector3 ConvertToTilePos(Vector3 worldPos);  // RVA: 0x45D620
    void CreateMesh(int32_t cols, int32_t rows);  // RVA: 0x45DEC0
    void SetShaderVariant(int32_t variant);  // RVA: 0x45E570
    void UpdateMesh(Vector3 playerPosition, Level* level, float cameraZoom);  // RVA: 0x45E640
    void CreateMeshBlock(Mesh* mesh, int32_t startCol, int32_t startRow);  // RVA: 0x45D8B0
    void .ctor();  // RVA: 0x45E940
};

// Namespace: <global>
struct NestedRecipeIngredient
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t inventoryCount; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t storageCount; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t craftableCount; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool craftableProcessed; // 0x001C

    // Methods
    void .ctor(int32_t _inventoryCount, int32_t _storageCount);  // RVA: 0x46B260
    int32_t TotalCount();  // RVA: 0x46B250
};

// Namespace: <global>
class NestedRecipeIngredientList
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.Int32,NestedRecipeIngredient> mAvailableIngredientList; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<System.Int32,System.Int32> mUsedIngredientQuantityList; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.Int32,System.Int32> mInventoryCraftingIngredientQuantityList; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.Dictionary<System.Int32,System.Int32> mStorageCraftingIngredientQuantityList; // 0x0028

    // Methods
    void Clear();  // RVA: 0x468D50
    void PopulateAvailableIngredients(Player* player);  // RVA: 0x46A3D0
    int32_t ProcessRecipeIngredients(Player* player, RecipeDescriptor* recipe, int32_t quantityToCraft, bool populateAvailableIngredients, bool rootRecipe, bool hasIngredientConflicts);  // RVA: 0x46A680
    void UpdateCraftingIngredientQuantities(Il2CppString* recipeName);  // RVA: 0x46AED0
    bool CanCraftNestedItem(Player* player, RecipeDescriptor* recipe, int32_t quantityToCraft, bool forceRefreshAvailableIngredients, bool forceRefreshRecipeIngredients, bool logFailure);  // RVA: 0x468B20
    Item* CraftNestedItem(Player* player, RecipeDescriptor* recipe, int32_t quantityToCraft, bool forceRefreshIngredients, bool logFailure);  // RVA: 0x469680
    Item* CraftNestedItemImplementation(Player* player, RecipeDescriptor* recipe, int32_t quantityToCraft);  // RVA: 0x469210
    static void CraftItem(int8_t sourceClientIndex, CraftItem msg);  // RVA: 0x469100
    Item* CraftItem(Player* player, ItemDescriptor* itemDescriptor, uint16_t stackCount, bool addToInventory, Params onlineParams);  // RVA: 0x468DA0
    void SpendContainerIngredient(int32_t itemDescrId, int32_t quantity, System.Collections.Generic.List<Item> containerContents);  // RVA: 0x46AB50
    void LogIngredientQuantities(LogType logType, LogLevel logLevel);  // RVA: 0x469EA0
    void LogAvailableIngredients(LogType logType, LogLevel logLevel);  // RVA: 0x469860
    void .ctor();  // RVA: 0x46B120
};

// Namespace: <global>
class VendorItem : public Item
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Item* mItem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    VendorStockItem mStockDetails; // 0x00A0

    // Methods
    void Initialise(VendorStockItem vendorStockDetails, Item* item);  // RVA: 0x472980
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x472C20
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x472A30
    SpriteObjectBase* GetIconObject();  // RVA: 0x472950
    int32_t GetBuyCost(float modifier);  // RVA: 0x4728E0
    bool CanBuyQuantity(uint16_t quantity);  // RVA: 0x472800
    void Delete();  // RVA: 0x472840
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x472880
    void .ctor();  // RVA: 0x3F5C90
};

// Namespace: <global>
class VendorItemBought : public Item
{
public:
    uint8_t pad_0000[0x98]; // 0x0000
    Item* mItem; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t mBoughtPrice; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    CalendarTime mBoughtTime; // 0x00A4

    // Methods
    void Initialise(Item* item, int32_t boughtPrice, CalendarTime boughtTime);  // RVA: 0x4724A0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x472710
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x472550
    SpriteObjectBase* GetIconObject();  // RVA: 0x472470
    int32_t GetBuyCost(float modifier);  // RVA: 0x472460
    bool CanBuyQuantity(uint16_t quantity);  // RVA: 0x4723B0
    void Delete();  // RVA: 0x4723C0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x472400
    Item* RemoveItem();  // RVA: 0x4726E0
    void .ctor();  // RVA: 0x3F5C90
};

// Namespace: <global>
class Trough : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    Pen* mPen; // 0x00D0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x471AC0
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x471EF0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x472250
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x471D80
    void Unplace(ContainerItem* newParent);  // RVA: 0x4721D0
    void Interact(Item* item);  // RVA: 0x471C90
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x471FD0
    void Delete();  // RVA: 0x4719A0
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x471A00
    void .ctor();  // RVA: 0x4722A0
};

// Namespace: <global>
struct BedAssignType
{
public:
    // Static fields
    // static BedAssignType None;
    // static BedAssignType Auto;
    // static BedAssignType Manual;

    uint8_t pad_0000[0x10]; // 0x0000
    int8_t value__; // 0x0010
};

// Namespace: <global>
class Bed : public OrientableItem
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    NPC* mLinkedNPC; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Room* mRoom; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    BedAssignType mAssignType; // 0x00F0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x45A760
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x45AFF0
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x45AA60
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x45AD10
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x45B1D0
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x45AB90
    void Unplace(ContainerItem* newParent);  // RVA: 0x45B0C0
    void Interact(Item* item);  // RVA: 0x45A950
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x45ADF0
    static void ClearNPCBed(NPC* npc);  // RVA: 0x45A460
    void AssignNPC(NPC* npc, bool resetTimer);  // RVA: 0x45A280
    void ClearLinkedNPC();  // RVA: 0x45A430
    void Delete();  // RVA: 0x45A640
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x45A6A0
    void .ctor();  // RVA: 0x45B220
};

// Namespace: <global>
class TimerDictionary
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.Int32> mTimerDictionary; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.String,System.Single>> mTimers; // 0x0018

    // Methods
    void .ctor(int32_t capacity);  // RVA: 0x471490
    void Initialise();  // RVA: 0x470580
    void UpdateTimers(float dt);  // RVA: 0x471320
    void UpdateTimerDelta(int32_t index, float timeDelta);  // RVA: 0x471210
    bool IncrementTimer(Il2CppString* lookup, float timeDelta);  // RVA: 0x4703B0
    float GetTimer(Il2CppString* lookup);  // RVA: 0x470300
    bool SetTimer(Il2CppString* lookup, float timer);  // RVA: 0x470EA0
    bool RemoveTimer(Il2CppString* lookup);  // RVA: 0x470AE0
    void SwapTimerIndex(int32_t index1, int32_t index2);  // RVA: 0x4710C0
    void Save(Stream* stream);  // RVA: 0x470D10
    void Load(Stream* stream, int32_t version);  // RVA: 0x470610
    void Log();  // RVA: 0x4708E0
};

// Namespace: <global>
class EventMap
{
public:
    // Static fields
    // static int32_t MAX_EVENT_NAME_LENGTH;

    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<EventTrigger.EventId,System.Collections.Generic.Dictionary<System.String,System.Int32>> eventMap; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TimerDictionary* mTimerDictionary; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x45CC70
    void Initialise();  // RVA: 0x45B980
    void Update(float dt);  // RVA: 0x45CBF0
    void Save(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x45C240
    void Load(Stream* stream, int32_t version, int32_t worldSerialisationFlags);  // RVA: 0x45BA20
    void Log();  // RVA: 0x45BD50
    void Clear();  // RVA: 0x45B530
    void Clear(EventId eventId);  // RVA: 0x45B4A0
    int32_t GetEvent(EventId eventId, Il2CppString* eventName);  // RVA: 0x45B710
    float GetScaledEvent(EventId eventId, Il2CppString* eventName, int32_t minValue, int32_t maxValue);  // RVA: 0x45B7F0
    bool SetEvent(EventId eventId, Il2CppString* eventName, int32_t newValue, OperatorEnum operatorType);  // RVA: 0x45C8F0
    void RemoveEvent(EventId eventId, Il2CppString* eventName);  // RVA: 0x45C1B0
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t value, OperatorEnum operatorType);  // RVA: 0x45B300
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t minValue, int32_t maxValue);  // RVA: 0x45B230
    float GetTimer(Il2CppString* eventName);  // RVA: 0x45B960
    System.Collections.Generic.Dictionary<System.String,System.Int32> GetEventStates(EventId eventId);  // RVA: 0x45B6A0
    static bool TestValue(int32_t testValue, int32_t referenceValue, OperatorEnum operatorType);  // RVA: 0x45CB80
};

// Namespace: <global>
struct DialogType
{
public:
    // Static fields
    // static DialogType Intro;
    // static DialogType Greet;
    // static DialogType Talk;
    // static DialogType Quest;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class NPC : public PlaceableItem
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    System.Collections.Generic.List<Item> stockItems; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    float mRespawnTimer; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    float mReassignBedTimer; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    bool mLinkBed; // 0x00E0
    bool mValidRoom; // 0x00E1
    bool mInteracting; // 0x00E2
    uint8_t pad_00E3[0x5]; // 0x00E3
    Bed* mLinkedBed; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    GameTile* mLinkedBedTile; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    GameTile* mCurrentAnchor; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    CalendarTime mStockRefreshTime; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    int8_t mInteractingPlayerIndex; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    PlayerSpriteHelper* mSpriteHelper; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    Vector3 mDirection; // 0x0118
    uint8_t pad_0119[0xF]; // 0x0119
    NPCDescriptor* mNPCDescriptor; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    BehaviourStateController* mBehaviourStateController; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    StringBuilder* mDialogTitle; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    QuestDescriptor* mQuestDescriptor; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    EventMap* mEventMap; // 0x0148

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x2EE310
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x463690
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x463380
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x466B20
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x464EC0
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x466600
    void SaveQuestLookup(Stream* stream);  // RVA: 0x4661D0
    void LoadQuestLookup(Stream* stream, int32_t version);  // RVA: 0x464270
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x464940
    void Delete();  // RVA: 0x462BF0
    void AddStock(Item* item);  // RVA: 0x461D90
    void SaveStock(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x466330
    void LoadStock(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x464600
    int32_t StockCount();  // RVA: 0x4673B0
    Item* GetStock(int32_t index);  // RVA: 0x463610
    void SetNPCDescriptor(NPCDescriptor* npcDescriptor, bool newSpawn);  // RVA: 0x467050
    void TriggerInitialQuest();  // RVA: 0x4673F0
    void SetAnchor(GameTile* gameTile);  // RVA: 0x466AD0
    void ResetBehaviour();  // RVA: 0x465E60
    static void UpdateQuestTargetBehaviour(int8_t sourceClientIndex, NPCQuestBehaviour msg);  // RVA: 0x467B40
    void UpdateQuestTargetBehaviour(Player* player, bool isLoading);  // RVA: 0x467830
    void LogEventMap();  // RVA: 0x464E20
    bool SetEvent(EventId eventId, Il2CppString* eventName, int32_t newValue, OperatorEnum operatorType, bool processQuestStateChange, bool updateOnline);  // RVA: 0x466DD0
    void RemoveEvent(EventId eventId, Il2CppString* eventName, bool processQuestStateChange, bool updateOnline);  // RVA: 0x4658E0
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t value, OperatorEnum operatorType);  // RVA: 0x4625A0
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t minValue, int32_t maxValue);  // RVA: 0x4624C0
    void ProcessQuestStateChange(Il2CppString* questName, int32_t previousQuestState, int32_t newQuestState);  // RVA: 0x465040
    int32_t GetQuestState();  // RVA: 0x4635C0
    bool CheckQuestState(int32_t value, OperatorEnum operatorType);  // RVA: 0x462840
    bool CheckQuestState(int32_t minValue, int32_t maxValue);  // RVA: 0x462740
    bool SetQuestState(QuestState newState, OperatorEnum operatorType);  // RVA: 0x467100
    void ActivateQuest(Player* player);  // RVA: 0x461AA0
    void RemoveQuest();  // RVA: 0x465B80
    void RevertQuest();  // RVA: 0x466040
    void RewardQuest();  // RVA: 0x466090
    static void EnableLinkBed(int8_t sourceClientIndex, NPCEnableLinkBed msg);  // RVA: 0x462D10
    void EnableLinkBed(bool enable, int8_t clientIndex);  // RVA: 0x462F30
    void UpdateQuest();  // RVA: 0x467CE0
    bool IsAlertState();  // RVA: 0x464150
    StringBuilder* GetDialogTitle();  // RVA: 0x4633E0
    void SetDialogEntry(DialogEntry* dialogEntry, HUDCanvas* hudCanvas);  // RVA: 0x466B60
    void SetDialogQuest(HUDCanvas* hudCanvas);  // RVA: 0x466BC0
    void UpdateRespawn(float dt);  // RVA: 0x468030
    GameTile* Respawn(GameTile* gameTile);  // RVA: 0x465F30
    void ApplyKnockback(Vector3 sourcePos, float knockback);  // RVA: 0x2C55B0
    bool IsWaitingForNewRoom();  // RVA: 0x4641E0
    static void SetValidRoom(int8_t sourceClientIndex, NPCSetValidRoom msg);  // RVA: 0x467150
    void SetValidRoom(bool validRoom);  // RVA: 0x4671E0
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x468270
    void AdvanceGameTime(float gameTimeDelta);  // RVA: 0x461EA0
    void UpdateMove(Vector3 playerPosition, float dt);  // RVA: 0x467760
    void UpdateRemote(float dt);  // RVA: 0x467DB0
    void UpdateAnimEvents(Vector3 moveDir);  // RVA: 0x4674A0
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x4623C0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x465BC0
    void RefreshStock();  // RVA: 0x4656A0
    bool CanShowHighlightText(Player* player);  // RVA: 0x360690
    Il2CppString* GetHighlightText();  // RVA: 0x463560
    bool CanPlayerInteract(int8_t playerIndex);  // RVA: 0x4624A0
    bool IsInteracting();  // RVA: 0x4641D0
    bool CanInteract(Player* player);  // RVA: 0x462460
    static void Interact(int8_t sourceClientIndex, NPCInteract msg);  // RVA: 0x463B30
    void Interact(Item* item);  // RVA: 0x463A70
    void Interact(Player* player, int8_t clientIndex);  // RVA: 0x463CB0
    void EndInteraction(Player* player);  // RVA: 0x463100
    void OpenShop(Player* player);  // RVA: 0x464E50
    static void ClearStock(int8_t sourceClientIndex, NPCClearStock msg);  // RVA: 0x462AB0
    void ClearStock();  // RVA: 0x4629D0
    void ClearBoughtItems();  // RVA: 0x462890
    Item* PurchaseItem(Item* item, uint16_t quantity, Params onlineParams);  // RVA: 0x4653C0
    void SellItem(Item* item);  // RVA: 0x466A20
    int32_t BehaviourGetTileFilters();  // RVA: 0x408820
    bool BehaviourShouldForceMove();  // RVA: 0x462360
    int32_t BehaviourMaxPathNodeDistance(MovementBehaviourDescriptor* behaviourParams, int32_t defaultValue);  // RVA: 0x462250
    GameTile* BehaviourGetPriorityTile(PathfindingProcessor* pathfindingProcessor, float maxCost, int32_t tileFilters, float maxAngleRange);  // RVA: 0x461ED0
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x466D60
    Vector2 GetDirection();  // RVA: 0x463540
    BehaviourStateController* GetBehaviourStateController();  // RVA: 0x4633D0
    void .ctor();  // RVA: 0x468800
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<System.ValueTuple<System.Single,Bed>> <>9__24_0;


    // Methods
    static void .cctor();  // RVA: 0x472340
    void .ctor();  // RVA: 0x2C1750
    int32_t <FindClosestAvailableBed>b__24_0(System.ValueTuple<System.Single,Bed> x, System.ValueTuple<System.Single,Bed> y);  // RVA: 0x43CEF0
};

// Namespace: <global>
class NPCManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<NPC> mNPCs; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Bed> mBeds; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<Bed,System.Boolean> mPlayerBeds; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.ValueTuple<System.Single,Bed>> mAvailableBeds; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    NPCDatabase* mNPCDatabase; // 0x0030

    // Methods
    void Initialise(NPCDatabase* npcCDatabase);  // RVA: 0x45F900
    void PostCreateWorld();  // RVA: 0x45F9D0
    void SpawnInitialNPCs();  // RVA: 0x460730
    NPC* SpawnNPC(Il2CppString* npcName, float col, float row, int32_t levelId, bool worldCreate, int32_t validMargin);  // RVA: 0x460D00
    NPC* SpawnNPC(Il2CppString* npcName, int32_t col, int32_t row, Level* level, bool worldCreate, int32_t validMargin);  // RVA: 0x460AF0
    static void SpawnNPC(int8_t sourceClientIndex, SpawnNPC msg);  // RVA: 0x460980
    NPC* SpawnNPC(Il2CppString* npcName, Level* level, GameTile* spawnTile, GameTile* anchorTile, Params onlineParams, bool worldCreate);  // RVA: 0x460DD0
    void Clear();  // RVA: 0x45EFE0
    void Update(float dt);  // RVA: 0x4613C0
    void AdvanceGameTime(float gameTimeDelta);  // RVA: 0x45EC60
    void AddBed(Bed* bed, bool processBed);  // RVA: 0x45EAD0
    void ProcessValidBed(Bed* bed);  // RVA: 0x45FBF0
    void RemoveBed(Bed* bed);  // RVA: 0x45FE20
    void AddNPC(NPC* npc);  // RVA: 0x45EBA0
    void RemoveNPC(NPC* npc);  // RVA: 0x45FEE0
    static void AssignNPCBed(int8_t sourceClientIndex, AssignNPCBed msg);  // RVA: 0x45ED00
    static void RequestAssignNPCBed(int8_t sourceClientIndex, RequestAssignNPCBed msg);  // RVA: 0x45FFC0
    void RequestAssignNPCBed(Bed* bed, NPC* npc, BedAssignType assignType);  // RVA: 0x460110
    bool AssignNPCBed(NPC* npc, bool allowUpgrade, bool includeInvalidRooms);  // RVA: 0x45EDE0
    Bed* FindClosestAvailableBed(NPC* npc, bool includeInvalidRooms);  // RVA: 0x45F080
    void UpdateAllRooms();  // RVA: 0x461300
    void TileModified(GameTile* gameTile);  // RVA: 0x461220
    int32_t GetEmptyValidRoomCount();  // RVA: 0x45F6D0
    Room* GetValidRoom(GameTile* gameTile);  // RVA: 0x45F7D0
    NPC* FindNPCwithQuest(Il2CppString* questName);  // RVA: 0x45F600
    void OnPlayerCreated(Player* player);  // RVA: 0x45F910
    void .ctor();  // RVA: 0x461940
};

// Namespace: <global>
class ObjectPoolBase
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool mInitialised; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Type* poolableType; // 0x0018

    // Methods
    void Initialise(int32_t initialSize, int32_t initialCapacity);  // RVA: 0x1767F0
    Il2CppObject* Get();  // RVA: 0x17A1D0
    void Return(IPoolable* poolable);  // RVA: 0x175530
    void LogGameState();  // RVA: 0x1868E0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class ObjectPool : public ObjectPoolBase
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.Stack<IPoolable> pool; // 0x0020

    // Methods
    void Initialise(int32_t initialSize, int32_t initialCapacity);  // RVA: 0x1767F0
    Il2CppObject* Get();  // RVA: 0x46BA10
    void Return(IPoolable* poolable);  // RVA: 0x46BB10
    void LogGameState();  // RVA: 0x46BA80
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TrackedObjectPool : public ObjectPoolBase
{
public:
    // Static fields
    // static System.Collections.Generic.List<ITrackedPoolable> pool;

    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.Stack<System.Int32> unusedIndices; // 0x0020

    // Methods
    static void InitialisePool(int32_t capacity);  // RVA: 0x471730
    void Initialise(int32_t initialSize, int32_t initialCapacity);  // RVA: 0x1767F0
    Il2CppObject* Get();  // RVA: 0x471560
    void Return(IPoolable* poolable);  // RVA: 0x4718F0
    void LogGameState();  // RVA: 0x4717D0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class GameObjectPool`1
{
public:
    System.Collections.Generic.Stack<T> pool; // 0x0000
    GameObject* mPrefab; // 0x0000
    Transform* mParent; // 0x0000

    // Methods
    void Initialise(Transform* parent, GameObject* prefab, int32_t initialSize, int32_t initialCapacity);
    T Get();  // RVA: 0x203C40
    void Return(T component);  // RVA: 0x203C40
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class SimplePool`1
{
public:
    System.Collections.Generic.Stack<T> pool; // 0x0000

    // Methods
    void .ctor(int32_t initialSize, int32_t initialCapacity);  // RVA: 0x1767F0
    void Initialise(int32_t initialSize, int32_t initialCapacity);  // RVA: 0x1767F0
    T Get();  // RVA: 0x203C40
    void Return(T component);  // RVA: 0x203C40
};

// Namespace: <global>
class ListPool`1
{
public:
    Queue* pool; // 0x0000
    bool mInitialised; // 0x0000
    int32_t mListCapacity; // 0x0000

    // Methods
    void Initialise(int32_t capacity, int32_t listCapacity);  // RVA: 0x1767F0
    System.Collections.Generic.List<T> Get();  // RVA: 0x17A1D0
    void Return(System.Collections.Generic.List<T> list);  // RVA: 0x175530
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class LinkedListPool`1
{
public:
    Queue* pool; // 0x0000
    bool mInitialised; // 0x0000

    // Methods
    void Initialise(int32_t capacity);  // RVA: 0x176610
    System.Collections.Generic.LinkedList<T> Get();  // RVA: 0x17A1D0
    void Return(System.Collections.Generic.LinkedList<T> list);  // RVA: 0x175530
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class IPoolable
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int8_t mPoolableId; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x45D530
};

// Namespace: <global>
class ITrackedPoolable : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    int32_t mUniqueId; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x45D5A0
};

// Namespace: <global>
class IRenderPoolable : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Vector2 mRenderDepth; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x45D540
};

// Namespace: <global>
class ObjectPoolFactory
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.SByte,ObjectPoolBase> factories; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<ObjectPoolBase> factoryList; // 0x0018

    // Methods
    void BuildIndexedList(int32_t maxSize);  // RVA: 0x46B280
    void Register(int8_t id, int32_t initialSize, int32_t initialCapacity, bool tracked);  // RVA: 0x203C40
    IPoolable* Get(int8_t id);  // RVA: 0x46B500
    IPoolable* GetByIndex(int8_t id);  // RVA: 0x46B430
    ITrackedPoolable* FindTrackedItem(int8_t id, int32_t uniqueId);  // RVA: 0x46B3D0
    void Return(IPoolable* poolable);  // RVA: 0x46B900
    void ReturnByIndex(IPoolable* poolable);  // RVA: 0x46B880
    void LogGameState();  // RVA: 0x46B5F0
    void .ctor();  // RVA: 0x46B990
};

// Namespace: <global>
class OnlineGame
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CSteamID mGameID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    CSteamID mLobbyOwner; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* mGameName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mNumPlayers; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t mMaxPlayers; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    WorldSettings mWorldSettings; // 0x0030

    // Methods
    void .ctor(CSteamID gameID);  // RVA: 0x46C310
};

// Namespace: <global>
class OnlineConnection
{
public:
    // Static fields
    // static float LOCAL_ISSUE_SEND_TIME;
    // static float REMOTE_ISSUE_VALID_TIME;
    // static float PING_UPDATE_TIME;
    // static float PING_ERROR_TIME;
    // static float PACKET_ERROR_PERCENT;
    // static int32_t PING_ERROR_THRESHOLD;
    // static float PING_ERROR_PERCENT;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mPing; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float mTimeSinceRemoteIssue; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float mTimeSinceLocalIssueSent; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool mLocalIssueDetected; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    HSteamNetConnection mSteamNetConnection; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SteamNetConnectionRealTimeStatus_t mSteamNetConnectionStatus; // 0x0028
    uint8_t pad_0029[0x3F]; // 0x0029
    SteamNetConnectionRealTimeLaneStatus_t mSteamNetConnectionLaneStatus; // 0x0068
    uint8_t pad_0069[0x1F]; // 0x0069
    float mNextPingUpdate; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float mNextPingError; // 0x008C

    // Methods
    void Reset();  // RVA: 0x46BEA0
    int32_t GetPendingBytesToBeSent();  // RVA: 0x46BDF0
    bool UpdateStatus(float dt, CSteamID playerID);  // RVA: 0x46BF30
    void .ctor();  // RVA: 0x46C290
};

// Namespace: <global>
struct ClientState
{
public:
    // Static fields
    // static ClientState NONE;
    // static ClientState JOINED;
    // static ClientState WAITING;
    // static ClientState RUNNING;
    // static ClientState FAILED;
    // static ClientState MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class OnlineClient
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CSteamID mPlayerID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int8_t mClientIndex; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mNumLocalPlayers; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mNumPlayerRequests; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    ClientState mState; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    MemoryStream* characterData; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float mRunningIdleTimer; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineConnection* mConnection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool mIsInLobby; // 0x0040

    // Methods
    void Reset();  // RVA: 0x46BBF0
    void .ctor(CSteamID playerID);  // RVA: 0x46BD10
    bool IsInUse();  // RVA: 0x46BB80
    int32_t GetNumPlayers();  // RVA: 0x46BB70
    uint64_t GetOnlinePlayerID();  // RVA: 0x396A80
};

// Namespace: <global>
class HostedOnlineGame
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<OnlineClient> mClients; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t mNumPlayers; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mMaxPlayers; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    Byte[][] mWorldDataBuffer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Byte[][] mCharacterDataBuffer; // 0x0028

    // Methods
    void .ctor(int32_t maxConnections, int32_t maxPlayers, OnlineClient* host);  // RVA: 0x45D3B0
    OnlineClient* AddClient(CSteamID playerID);  // RVA: 0x45CDE0
    OnlineClient* GetHost();  // RVA: 0x45D220
    void UpdateNumPlayers();  // RVA: 0x45D290
};

// Namespace: <global>
class OnlineMessageProcessor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.IntPtr> fromHost; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<OnlineClient,System.IntPtr> fromClient; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct PlayerData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    uint64_t playerID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    MemoryStream* characterData; // 0x0018

    // Methods
    void Reset();  // RVA: 0x4702D0
};

// Namespace: <global>
struct OnlineState
{
public:
    // Static fields
    // static OnlineState NONE;
    // static OnlineState WAITING_FOR_GAME;
    // static OnlineState CREATING_GAME;
    // static OnlineState JOINING_GAME;
    // static OnlineState GAME_CREATED;
    // static OnlineState GAME_JOINED;
    // static OnlineState MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct DataKeys
{
public:
    // Static fields
    // static Il2CppString* lobbyName;
    // static Il2CppString* numPlayers;
    // static Il2CppString* maxPlayers;
    // static Il2CppString* difficulty;
    // static Il2CppString* worldSize;
    // static Il2CppString* hordeMode;

};

// Namespace: <global>
struct ConnectionEndReason
{
public:
    // Static fields
    // static ConnectionEndReason GENERIC;
    // static ConnectionEndReason GAME_FULL;
    // static ConnectionEndReason VERSION_MISMATCH;
    // static ConnectionEndReason LEAVING_GAME;
    // static ConnectionEndReason HOST_LEFT_GAME;
    // static ConnectionEndReason TIMEOUT;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct SteamJoiningState
{
public:
    // Static fields
    // static SteamJoiningState NONE;
    // static SteamJoiningState WAITING_FOR_LOBBY_DATA;
    // static SteamJoiningState JOINING_LOBBY;
    // static SteamJoiningState SENDING_PLAYER_COUNT;
    // static SteamJoiningState CONNECTING_TO_HOST;
    // static SteamJoiningState INITIALISING_CONNECTION;
    // static SteamJoiningState WAITING_FOR_GAME_STATE;
    // static SteamJoiningState MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct LobbyMessageID
{
public:
    // Static fields
    // static LobbyMessageID NUM_LOCAL_PLAYERS;
    // static LobbyMessageID CAN_CONNECT;
    // static LobbyMessageID GAME_FULL;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class OnlineManager
{
public:
    // Static fields
    // static int32_t MAX_EXPECTED_INCOMING_MESSAGES;
    // static int32_t MAX_PLAYERS;
    // static OnlineManager* instance;
    // static float HOST_IDLE_ERROR;
    // static float HOST_IDLE_TIMEOUT;
    // static float CLIENT_IDLE_TIMEOUT;
    // static int32_t LOBBY_CHAT_BUFFER_SIZE;
    // static float CLIENT_INITIAL_IDLE_TIMEOUT;
    // static float MAX_TIME_BETWEEN_SERVER_MESSAGES;
    // static float MAX_TIME_BETWEEN_CLIENT_MESSAGES;
    // static int32_t CONNECTION_BASE_BUFFER_SIZE;
    // static int32_t CONNECTION_BUFFER_SIZE;
    // static int32_t CONNECTION_GAME_BUFFER_SIZE;
    // static int32_t MAX_WORLD_DATA_SIZE;
    // static int32_t MAX_PLAYER_DATA_SIZE;
    // static int32_t MAX_NAME_LENGTH;
    // static int32_t MAX_CONNECTIONS;
    // static int32_t messageTypeSize;

    uint8_t pad_0000[0x10]; // 0x0000
    bool mInitialised; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    OnlineState mState; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    CSteamID mOnlineGame; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CSteamID mOnlineGameOwner; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CSteamID mPendingOnlineGame; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    HostedOnlineGame* mHostedGame; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int8_t mHostClientIndex; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    OnlineConnection* mClientConnection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Byte[][] mDataHash; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float mTimeSinceMessageSentToHost; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float mTimeSinceMessageReceivedFromHost; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    MemoryStream* worldData; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    PlayerData playerData; // 0x0060
    uint8_t pad_0061[0xF]; // 0x0061
    IGameFound* gameFoundHandler; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    ICreateGameInProgress* createGameInProgressHandler; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    ICreateGameSucceded* createGameSucceededHandler; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    ICreateGameFailed* createGameFailedHandler; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    IJoinGameInProgress* joinGameInProgressHandler; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    IJoinGameSucceded* joinGameSucceededHandler; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    IJoinGameFailed* joinGameFailedHandler; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    IGameRemoved* gameRemovedHandler; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    ILeavingGame* leavingGameHandler; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    IGamePending* gamePendingHandler; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.List<OnlineMessageProcessor> mRegisteredMessages; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Collections.Generic.List<System.String> steamJoiningStateStrings; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Collections.Generic.List<System.String> eSteamNetworkingConnectionStateStrings; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<System.String> eResultStrings; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    SteamJoiningState mJoiningState; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    HSteamListenSocket mHostListenSocket; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    IntPtr[][] mIncomingMessages; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    int32_t mIncomingMessagesHigh; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    intptr_t mMessageMemory; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Byte[][] mMessageBytesHelper; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    Byte[][] mLobbyChatBuffer; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    Steamworks.Callback<Steamworks.LobbyDataUpdate_t> mLobbyDataUpdate; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    Steamworks.Callback<Steamworks.SteamNetConnectionStatusChangedCallback_t> mConnectionStatusChanged; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    Steamworks.Callback<Steamworks.LobbyChatUpdate_t> mChatMemberStateChanged; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    Steamworks.Callback<Steamworks.LobbyChatMsg_t> mLobbyChatMessageReceived; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    Steamworks.Callback<Steamworks.GameLobbyJoinRequested_t> mLobbyJoinRequested; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    Steamworks.CallResult<Steamworks.LobbyCreated_t> mLobbyCreated; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    Steamworks.CallResult<Steamworks.LobbyEnter_t> mLobbyEntered; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    System.Collections.Generic.List<System.String> onlineStateStrings; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    System.Collections.Generic.List<System.String> onlineMessageTypeStrings; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    System.Collections.Generic.List<System.String> onlineClientStateStrings; // 0x0158

    // Methods
    OnlineState get_State();  // RVA: 0x45A220
    uint64_t get_OnlineGameOwnerID();  // RVA: 0x335530
    int8_t get_HostClientIndex();  // RVA: 0x45A1C0
    Il2CppString* GetSteamJoiningStateString(SteamJoiningState _steamJoiningState);  // RVA: 0x4446A0
    Il2CppString* GetESteamNetworkingConnectionStateString(ESteamNetworkingConnectionState _eSteamNetworkingConnectionState);  // RVA: 0x4443F0
    Il2CppString* GetEResultString(EResult _eResult);  // RVA: 0x444350
    Il2CppString* GetLogLevelString(OnlineState _onlineState);  // RVA: 0x444500
    Il2CppString* GetOnlineMessageTypeString(OnlineMessageType _onlineMessageType);  // RVA: 0x444620
    Il2CppString* GetOnlineClientStateString(ClientState _onlineClientState);  // RVA: 0x4445A0
    static bool get_Initialised();  // RVA: 0x45A1D0
    void Finalize();  // RVA: 0x443CA0
    bool LogError();  // RVA: 0x44D320
    bool LogWarn();  // RVA: 0x44D410
    bool LogInfo();  // RVA: 0x44D370
    bool LogDebug();  // RVA: 0x44D2D0
    bool LogTrace();  // RVA: 0x44D3C0
    void Initialise();  // RVA: 0x44B9C0
    void Shutdown();  // RVA: 0x458D90
    void RunUpdate(float dt);  // RVA: 0x457320
    void SetOnlineState(OnlineState newState);  // RVA: 0x458C20
    uint64_t GetLocalPlayerOnlineID();  // RVA: 0x444490
    void PostCreateWorld();  // RVA: 0x451790
    void RegisterOnlineMessages();  // RVA: 0x452510
    Byte[][] RandomValidationDataHash(Byte[][] dataHash, int32_t size);  // RVA: 0x452260
    void ValidateMessages();  // RVA: 0x4594D0
    void ValidateMessage(T& msg);  // RVA: 0x175530
    void RegisterMessage(T& msg, System.Action<System.IntPtr> processFunc, int32_t largestMessageSize);  // RVA: 0x17B690
    void RegisterMessage(T& msg, System.Action<OnlineClient,System.IntPtr> processFunc, int32_t largestMessageSize);  // RVA: 0x17B690
    void RegisterMessage(T& msg, System.Action<OnlineClient,System.IntPtr> fromClientProcessFunc, System.Action<System.IntPtr> fromHostProcessFunc, int32_t largestMessageSize);
    void SendMessageToHost(T& msg);  // RVA: 0x175530
    void SendMessageToAllClients(bool runningOnly, T& msg);
    void SendMessageToAllClientsExcept(OnlineClient* exceptClient, bool runningOnly, T msg);  // RVA: 0x203C40
    void SendMessageToClient(OnlineClient* client, T& msg);  // RVA: 0x17A420
    void SendSystemMessageToHost(T& msg);  // RVA: 0x175530
    void SendSystemMessageToAllClients(bool runningOnly, T& msg);
    void SendSystemMessageToAllClientsExcept(OnlineClient* exceptClient, bool runningOnly, T msg);  // RVA: 0x203C40
    void SendSystemMessageToClient(OnlineClient* client, T& msg);  // RVA: 0x17A420
    void SendGameMsgToHost(T& msg);  // RVA: 0x175530
    void SendGameMsgToClient(int8_t clientIndex, T& msg);  // RVA: 0x203C40
    void SendGameMsgToAllClients(T& msg);  // RVA: 0x175530
    void SendGameMsgToAllClientsExcept(int8_t exceptClientIndex, T& msg);  // RVA: 0x203C40
    int32_t WriteToPtr(T msg, intptr_t ptr);  // RVA: 0x203C40
    bool SendOnlineMessage(HSteamNetConnection connection, T& msg);  // RVA: 0x203C40
    void IgnoreHostMessage(intptr_t ptr);  // RVA: 0x44B7D0
    void IgnoreClientMessage(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B6E0
    void Host_InitConnection(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446520
    void Client_GameJoined(intptr_t ptr);  // RVA: 0x43E940
    bool TryStartClientRunning(OnlineClient* newClient);  // RVA: 0x458DC0
    bool IsClientWaiting();  // RVA: 0x44C720
    bool IsClientAddingNewPlayer();  // RVA: 0x44C5E0
    void Host_CharacterSelected(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445570
    void Client_WorldStateData(intptr_t ptr);  // RVA: 0x443350
    void Client_WorldState(intptr_t ptr);  // RVA: 0x443680
    void Host_LocalPlayerSpawnedData(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447B60
    void Host_LocalPlayerSpawned(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448020
    void Client_SpawnPlayerData(intptr_t ptr);  // RVA: 0x4423C0
    void Client_SpawnPlayer(intptr_t ptr);  // RVA: 0x4428A0
    void Client_RemovePlayer(intptr_t ptr);  // RVA: 0x441E80
    void Host_LocalPlayerRemoved(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4477B0
    void Host_RequestAddLocalPlayer(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A9A0
    void Host_CancelAddLocalPlayer(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4452F0
    void Client_AddLocalPlayer(intptr_t ptr);  // RVA: 0x43D300
    void Client_GameStateComplete(intptr_t ptr);  // RVA: 0x43EC00
    void Host_PingHost(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448C20
    void Client_PingClient(intptr_t ptr);  // RVA: 0x2C1B90
    void Host_ConnectionIssues(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4457C0
    void Client_ConnectionIssues(intptr_t ptr);  // RVA: 0x43DC70
    bool Host_CanProcessGameplayMessage(OnlineClient* sourceClient);  // RVA: 0x445120
    bool Client_CanProcessGameplayMessage();  // RVA: 0x43DBA0
    void Host_PlayerFireProjectile(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4491F0
    void Client_PlayerFireProjectile(intptr_t ptr);  // RVA: 0x440690
    void Host_EnemyRequestFireProjectile(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446390
    void Client_EnemyFireProjectile(intptr_t ptr);  // RVA: 0x43E7D0
    void Client_EnemySpawnProjectile(intptr_t ptr);  // RVA: 0x43E880
    void Host_EnemyAttack(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446200
    void Client_EnemyAttack(intptr_t ptr);  // RVA: 0x43E680
    void Host_EnemyAuthorityState(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4462D0
    void Client_EnemyAuthorityState(intptr_t ptr);  // RVA: 0x43E730
    void Host_WorldBossAuthorityState(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B620
    void Client_WorldBossAuthorityState(intptr_t ptr);  // RVA: 0x4432B0
    void Host_SpawnAnimal(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44AFE0
    void Client_SpawnAnimal(intptr_t ptr);  // RVA: 0x442120
    void Host_DespawnAnimal(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445F50
    void Client_DespawnAnimal(intptr_t ptr);  // RVA: 0x43E400
    void Host_SpawnEnemy(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B0D0
    void Client_SpawnEnemy(intptr_t ptr);  // RVA: 0x442210
    void Host_DespawnEnemy(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446030
    void Client_DespawnEnemy(intptr_t ptr);  // RVA: 0x43E4D0
    void Host_SpawnSpecialEnemy(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B2C0
    void Client_SpawnSpecialEnemy(intptr_t ptr);  // RVA: 0x442D50
    void Host_SpawnSpecialEnemyFailed(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B1D0
    void Host_ProjectileDealDamage(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A750
    void Client_ProjectileDealDamage(intptr_t ptr);  // RVA: 0x441BC0
    void Host_ProjectileImpactEffects(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A820
    void Client_ProjectileImpactEffects(intptr_t ptr);  // RVA: 0x441C80
    void Host_PlayerDealDamage(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448F20
    void Client_PlayerDealDamage(intptr_t ptr);  // RVA: 0x440420
    void Host_PlayerDealDamageToItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448E40
    void Client_PlayerDealDamageToItem(intptr_t ptr);  // RVA: 0x440350
    void Host_PlayerDestroyNonPlaceableItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449020
    void Client_PlayerDestroyNonPlaceableItem(intptr_t ptr);  // RVA: 0x440500
    void Host_PlayerReceiveDamage(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449920
    void Client_PlayerReceiveDamage(intptr_t ptr);  // RVA: 0x440CE0
    void Host_AOEDealDamageToPlayers(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x444C60
    void Client_AOEDealDamageToPlayers(intptr_t ptr);  // RVA: 0x43D1A0
    void Host_AOEDealDamage(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x444D20
    void Client_AOEDealDamage(intptr_t ptr);  // RVA: 0x43D250
    void Host_PlayerCatchAnimal(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448C80
    void Client_PlayerCatchAnimal(intptr_t ptr);  // RVA: 0x4401D0
    void Host_TakeReservedItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B3B0
    void Client_TakeReservedItem(intptr_t ptr);  // RVA: 0x442EB0
    void Host_ItemMove(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446CF0
    void Client_ItemMove(intptr_t ptr);  // RVA: 0x43F250
    void Host_ItemSetAnim(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446E90
    void Client_ItemSetAnim(intptr_t ptr);  // RVA: 0x43F520
    void Host_ItemSetDirection(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446F50
    void Client_ItemSetDirection(intptr_t ptr);  // RVA: 0x43F5C0
    void Host_ItemFollowTarget(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446B70
    void Client_ItemFollowTarget(intptr_t ptr);  // RVA: 0x43F110
    void Host_PlayerSelectItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449AF0
    void Client_PlayerSelectItem(intptr_t ptr);  // RVA: 0x440F40
    void Host_Kill(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447610
    void Client_Kill(intptr_t ptr);  // RVA: 0x43FAF0
    void Client_UnplaceDestroyed(intptr_t ptr);  // RVA: 0x443180
    void Host_PlayerTeleport(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A210
    void Client_PlayerTeleport(intptr_t ptr);  // RVA: 0x441650
    void Host_ItemTeleport(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447320
    void Client_ItemTeleport(intptr_t ptr);  // RVA: 0x43F900
    void Client_TriggerTransition(intptr_t ptr);  // RVA: 0x4430E0
    void Host_ItemUpdate(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4474A0
    void Client_ItemCreate(intptr_t ptr);  // RVA: 0x43EF00
    void Host_ItemDestroy(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4469E0
    void Client_ItemDestroy(intptr_t ptr);  // RVA: 0x43EFB0
    void Host_ItemSetStackCount(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447010
    void Client_ItemSetStackCount(intptr_t ptr);  // RVA: 0x43F660
    void Host_ItemUse(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447550
    void Client_ItemUse(intptr_t ptr);  // RVA: 0x43FA50
    void Host_ItemDrop(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446AA0
    void Client_ItemDrop(intptr_t ptr);  // RVA: 0x43F060
    void Host_ItemPlayerDrop(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446DB0
    void Client_ItemPlayerDrop(intptr_t ptr);  // RVA: 0x43F300
    void Host_AnimalDrop(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x444DE0
    void Client_AnimalDrop(intptr_t ptr);  // RVA: 0x43D460
    void Host_PlayerStartCollect(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A040
    void Client_PlayerStartCollect(intptr_t ptr);  // RVA: 0x4414C0
    void Host_ItemCollect(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446920
    void Client_ItemCollect(intptr_t ptr);  // RVA: 0x43EE60
    void Host_ItemStopCollect(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447260
    void Client_ItemStopCollect(intptr_t ptr);  // RVA: 0x43F860
    void Host_LootBagSpawn(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448910
    void Client_LootBagSpawn(intptr_t ptr);  // RVA: 0x43FD40
    void Host_LootBagAdd(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448820
    void Client_LootBagAdd(intptr_t ptr);  // RVA: 0x43FC70
    void Client_BossLootBagSpawn(intptr_t ptr);  // RVA: 0x43D870
    void Client_BossLootBagAdd(intptr_t ptr);  // RVA: 0x43D7D0
    void Client_AnimalSpawnChild(intptr_t ptr);  // RVA: 0x43D510
    void Host_PlayerPlaceItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4495A0
    void Client_PlayerPlaceItem(intptr_t ptr);  // RVA: 0x4409C0
    void Client_PlayerReclaimItem(intptr_t ptr);  // RVA: 0x440DB0
    void Client_PlayerUnstackToReserve(intptr_t ptr);  // RVA: 0x441950
    void Host_PlayerUnplaceFitting(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A4C0
    void Client_PlayerUnplaceFitting(intptr_t ptr);  // RVA: 0x4418A0
    void Host_PlayerPlaceFitting(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4494C0
    void Client_PlayerPlaceFitting(intptr_t ptr);  // RVA: 0x440900
    void Host_PlayerValidateInventory(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A670
    void Client_PlayerValidateInventory(intptr_t ptr);  // RVA: 0x441AF0
    void Host_PlayerPickUpItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4493E0
    void Client_PlayerPickUpItem(intptr_t ptr);  // RVA: 0x440840
    void Client_RemoveFitting(intptr_t ptr);  // RVA: 0x441DD0
    void Host_ItemInteract(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446C30
    void Client_ItemInteract(intptr_t ptr);  // RVA: 0x43F1B0
    void Host_NPCInteract(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448AA0
    void Client_NPCInteract(intptr_t ptr);  // RVA: 0x43FFE0
    void Host_ContainerTakeItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445BC0
    void Client_ContainerTakeItem(intptr_t ptr);  // RVA: 0x43E030
    void Host_ContainerTakeXItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445CB0
    void Client_ContainerTakeXItem(intptr_t ptr);  // RVA: 0x43E100
    void Host_ContainerReturnItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445A00
    void Client_ContainerReturnItem(intptr_t ptr);  // RVA: 0x43DE90
    void Host_ContainerAddChildAutoStack(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445920
    void Client_ContainerAddChildAutoStack(intptr_t ptr);  // RVA: 0x43DDC0
    void Host_ContainerSortItems(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445AE0
    void Client_ContainerSortItems(intptr_t ptr);  // RVA: 0x43DF60
    void Host_ContainerTransferAll(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445DB0
    void Client_ContainerTransferAll(intptr_t ptr);  // RVA: 0x43E1E0
    void Host_ItemStack(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x447190
    void Client_ItemStack(intptr_t ptr);  // RVA: 0x43F7B0
    void Host_ItemStackSome(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4470D0
    void Client_ItemStackSome(intptr_t ptr);  // RVA: 0x43F710
    void Host_PlayerCraft(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448D60
    void Client_PlayerCraftResult(intptr_t ptr);  // RVA: 0x440290
    void Client_PlayerSpendIngredient(intptr_t ptr);  // RVA: 0x441260
    void Client_CraftItem(intptr_t ptr);  // RVA: 0x43E2B0
    void Host_PlayerTrash(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A3D0
    void Client_PlayerTrash(intptr_t ptr);  // RVA: 0x4417D0
    void Host_PlayerUntrash(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A590
    void Client_PlayerUntrash(intptr_t ptr);  // RVA: 0x441A20
    void Host_PlayerLoot(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4492F0
    void Client_PlayerLoot(intptr_t ptr);  // RVA: 0x440770
    void Host_PlayerEquipItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449100
    void Client_PlayerEquipItem(intptr_t ptr);  // RVA: 0x4405C0
    void Host_PlayerSpendWallet(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449E80
    void Client_PlayerSpendWallet(intptr_t ptr);  // RVA: 0x441330
    void Host_PlayerPurchaseItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449670
    void Client_PlayerPurchaseItem(intptr_t ptr);  // RVA: 0x440A80
    void Host_PlayerSellItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449BD0
    void Client_PlayerSellItem(intptr_t ptr);  // RVA: 0x441000
    void Host_PlayerStoreItem(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A120
    void Client_PlayerStoreItem(intptr_t ptr);  // RVA: 0x441580
    void Host_PlayerQuickRestock(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449760
    void Client_PlayerQuickRestock(intptr_t ptr);  // RVA: 0x440B50
    void Host_PlayerQuickStack(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449840
    void Client_PlayerQuickStack(intptr_t ptr);  // RVA: 0x440C10
    void Host_PlayerRestockNearby(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449A10
    void Host_PlayerStackNearby(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449F60
    void Client_PlayerRestockFrom(intptr_t ptr);  // RVA: 0x440E80
    void Client_PlayerStackTo(intptr_t ptr);  // RVA: 0x441400
    void Host_CreateCurrency(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445E90
    void Client_CreateCurrency(intptr_t ptr);  // RVA: 0x43E360
    void Host_SetEvent(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44AF20
    void Client_SetEvent(intptr_t ptr);  // RVA: 0x442070
    void Host_RemoveEvent(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A8E0
    void Client_RemoveEvent(intptr_t ptr);  // RVA: 0x441D20
    void Host_RequestAssignNPCBed(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44ADA0
    void Client_RequestAssignNPCBed(intptr_t ptr);  // RVA: 0x441FD0
    void Client_AssignNPCBed(intptr_t ptr);  // RVA: 0x43D5C0
    void Client_NPCEnableLinkBed(intptr_t ptr);  // RVA: 0x43FF50
    void Host_NPCEnableLinkBed(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4489F0
    void Client_NPCSetValidRoom(intptr_t ptr);  // RVA: 0x440120
    void Client_NPCClearStock(intptr_t ptr);  // RVA: 0x43FEC0
    void Client_NPCAddStock(intptr_t ptr);  // RVA: 0x43FE10
    void Client_NPCQuestBehaviour(intptr_t ptr);  // RVA: 0x440080
    void Host_NPCQuestBehaviour(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x448B60
    void Client_PlayerSetSpawnPoint(intptr_t ptr);  // RVA: 0x4410D0
    void Host_PlayerSetSpawnPoint(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449CC0
    void Client_SpawnNPC(intptr_t ptr);  // RVA: 0x442310
    void Client_LevelWater(intptr_t ptr);  // RVA: 0x43FBA0
    void Host_LevelWater(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4476D0
    void Client_PlayerTill(intptr_t ptr);  // RVA: 0x441710
    void Host_PlayerTill(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44A2F0
    void Client_WaypointActivate(intptr_t ptr);  // RVA: 0x443220
    void Host_WaypointActivate(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B570
    void Client_StartSleep(intptr_t ptr);  // RVA: 0x442E40
    void Host_RequestCalendarUpdate(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44AE60
    void Client_CalendarUpdate(intptr_t ptr);  // RVA: 0x43DAC0
    void Client_EndSleep(intptr_t ptr);  // RVA: 0x43E5A0
    void Host_EndSleep(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446110
    void Client_PlayerSleep(intptr_t ptr);  // RVA: 0x441190
    void Host_PlayerSleep(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x449DA0
    void Client_ItemRenderHeight(intptr_t ptr);  // RVA: 0x43F470
    void Client_ItemPositionHeight(intptr_t ptr);  // RVA: 0x43F3C0
    void Host_BossAddMob(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x444F60
    void Client_BossAddMob(intptr_t ptr);  // RVA: 0x43D700
    void Client_BossPhase(intptr_t ptr);  // RVA: 0x43D920
    void Host_BossPhase(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x445040
    void Client_BossTriggerEffect(intptr_t ptr);  // RVA: 0x43D9F0
    void Client_TriggerAudio(intptr_t ptr);  // RVA: 0x443020
    void Host_TriggerAudio(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x44B490
    void Host_ItemTransferAuthority(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x4473E0
    void Client_ItemTransferAuthority(intptr_t ptr);  // RVA: 0x43F9A0
    void Client_TransferAuthority(intptr_t ptr);  // RVA: 0x442F70
    void Host_BehaviourFollowPlayer(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x444EA0
    void Client_BehaviourFollowPlayer(intptr_t ptr);  // RVA: 0x43D660
    void Host_HasPathToPlayer(OnlineClient* sourceClient, intptr_t ptr);  // RVA: 0x446460
    void Client_HasPathToPlayer(intptr_t ptr);  // RVA: 0x43EDB0
    bool UpdateGameDetails(OnlineGame* game);  // RVA: 0x459200
    OnlineClient* FindClient(CSteamID playerID);  // RVA: 0x443EE0
    LogLevel GetMessageLogLevel(OnlineMessageType msgType);  // RVA: 0x444580
    void OnLostConnectionToGame();  // RVA: 0x451730
    int32_t ProcessMessagesOnConnection(HSteamNetConnection connection);  // RVA: 0x4519C0
    OnlineClient* FindClient(HSteamNetConnection connection);  // RVA: 0x443D50
    void RemoveClient(OnlineClient* client, ConnectionEndReason reason, Il2CppString* debugReason, bool flushConnection, bool updateNumPlayers);  // RVA: 0x457020
    void OnFailedToJoinGame(JoinGameFailedReason reason);  // RVA: 0x44F560
    void OnFailedToCreateGame(CreateGameFailedReason reason);  // RVA: 0x44F4F0
    void OnLobbyDataUpdate(LobbyDataUpdate_t callback);  // RVA: 0x450720
    void OnLobbyCreated(LobbyCreated_t callback, bool ioFailure);  // RVA: 0x450060
    void OnLobbyEntered(LobbyEnter_t callback, bool ioFailure);  // RVA: 0x450D30
    void OnConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t callback);  // RVA: 0x44D760
    void OnChatMemberStateChanged(LobbyChatUpdate_t callback);  // RVA: 0x44D460
    void OnLobbyChatMessageReceived(LobbyChatMsg_t callback);  // RVA: 0x44F5D0
    void OnLobbyJoinRequested(GameLobbyJoinRequested_t callback);  // RVA: 0x4513D0
    void InitDataHashIfRequired();  // RVA: 0x44B880
    void HostNewGame();  // RVA: 0x444790
    void EnterOnline();  // RVA: 0x443B90
    void ExitOnline();  // RVA: 0x443C90
    void FindGames();  // RVA: 0x444060
    void RefreshGame(OnlineGame* game);  // RVA: 0x452330
    void JoinGame(OnlineGame* game);  // RVA: 0x44C910
    void JoinGame(CSteamID gameID);  // RVA: 0x44C930
    void CancelJoinGame();  // RVA: 0x43D040
    void JoinPendingGame();  // RVA: 0x44CAD0
    void ClearOnlineGame();  // RVA: 0x43D140
    void LeaveGame(CSteamID gameID);  // RVA: 0x44CC30
    void UpdateNumPlayers();  // RVA: 0x459450
    bool CanAddPlayer();  // RVA: 0x43D020
    void HostOnAddingPlayer();  // RVA: 0x444B90
    void HostCancelAddPlayer();  // RVA: 0x444720
    void HostPlayerAdded();  // RVA: 0x444BE0
    bool IsGameHost();  // RVA: 0x44C880
    bool IsGameClient();  // RVA: 0x44C860
    bool IsInGame();  // RVA: 0x44C8E0
    bool IsWaitingForGameState();  // RVA: 0x44C900
    bool IsGamePending();  // RVA: 0x44C890
    void SendWorldDataToClient(OnlineClient* client);  // RVA: 0x4587B0
    void SendSpawnedLocalPlayer(Player* player);  // RVA: 0x458330
    void SendOtherPlayersToClient(OnlineClient* client, MemoryStream* characterDataStream);  // RVA: 0x457DE0
    void OnLocalPlayerRemoved(Player* player);  // RVA: 0x4515F0
    int32_t RemoveNetworkPlayer(uint64_t playerID, int8_t localPlayerIndex);  // RVA: 0x457150
    void InviteFriendToJoin();  // RVA: 0x44C560
    void .ctor();  // RVA: 0x45A0B0
};

// Namespace: <global>
struct NodeVisitState
{
public:
    // Static fields
    // static NodeVisitState Unvisited;
    // static NodeVisitState Visited;
    // static NodeVisitState Finished;
    // static NodeVisitState Applied;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PathNodeData : public FastPriorityQueueNode
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    int32_t mCol; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mRow; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mGScore; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PathNodeData* mNearestNeighbourNode; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameTile* mGameTile; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float mRawMoveCost; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    NodeVisitState mVisitState; // 0x003C

    // Methods
    void .ctor(int32_t col, int32_t row);  // RVA: 0x46C750
    void InitialiseDijkstra(GameTile* gameTile);  // RVA: 0x46C3D0
    void InitialiseAStar(GameTile* gameTile);  // RVA: 0x46C370
    float TileMoveCost(PathfindingType pathfindingType, bool openDoors);  // RVA: 0x46C430
};

// Namespace: <global>
class PathNodeMap
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PathNodeData[][][] mPathNodes; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameTile* mPathfindingSource; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RectInt mNodeBounds; // 0x0020

    // Methods
    void .ctor(int32_t maxCols);  // RVA: 0x46C790
};

// Namespace: <global>
struct PathfindingAlgorithm
{
public:
    // Static fields
    // static PathfindingAlgorithm Dijkstra;
    // static PathfindingAlgorithm AStar;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct TileFilters
{
public:
    // Static fields
    // static TileFilters NONE;
    // static TileFilters EXCLUDE_DOORS;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PathfindingProcessor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PathfindingAlgorithm mPathfindingAlgorithm; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameTile* mPathfindingSource; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameTile* mPathfindingTarget; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mMaxNodeEvaluationDistance; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t mMaxNodesEvaluatedPerFrame; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    PathfindingType mPathfindingType; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mMaxEvaluationCost; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    RectInt mNodeBounds; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    PathNodeMap[][] mPathNodeMaps; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    PathNodeData[][][] mCurrentPathNodes; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PathNodeMap* mCurrentPathNodeMap; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    PathNodeMap* mCachedPathNodeMap; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t mCurrentPathNodeIndex; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Priority_Queue.FastPriorityQueue<PathNodeData> mUnvisitedNodes; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<PathNodeData> mNodesToApply; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    int32_t mCurrentEvaluatedNodeCount; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    int32_t mMaxCols; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    int32_t mMaxNodes; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    int32_t mPathEndCol; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    int32_t mPathEndRow; // 0x0090

    // Methods
    void Initialise(int32_t maxNodeEvaluationDistance, int32_t maxNodesEvaluatedPerFrame, PathfindingType pathfindingType);  // RVA: 0x46E720
    void SetGoalParams(int32_t maxNodeEvaluationDistance, PathfindingAlgorithm algorithm, PathfindingType pathfindingType, GameTile* sourceTile, GameTile* targetTile, float maxEvaluationCost);  // RVA: 0x4701E0
    void Process(int32_t maxNodesEvaluatedPerFrameOverride);  // RVA: 0x4700F0
    void ApplyPathCosts(int8_t localPlayerIndex);  // RVA: 0x46C980
    void ProcessDijkstra(int32_t maxNodesEvaluatedPerFrame);  // RVA: 0x46F920
    void ProcessDijkstraNeighbourNode(PathNodeData* leastCostNode, int32_t col, int32_t row, bool diagonal);  // RVA: 0x46F6F0
    void PopulatePathList(GameTile* targetTile, System.Collections.Generic.List<PathNodeData> pathNodes);  // RVA: 0x46E9F0
    GameTile* GetReversePath(GameTile* targetTile, System.Collections.Generic.List<GameTile> pathList);  // RVA: 0x46D7F0
    GameTile* GetTargetTileInDir(Vector2 dir, Vector2Int centerPos, int32_t startRange, int32_t endRange, float maxCost, float maxAngleRange, int32_t tileFilters);  // RVA: 0x46E620
    GameTile* GetTargetTileInDir(Vector2 dir, Vector2Int centerPos, int32_t range, float maxCost, float maxAngleRange, int32_t tileFilters);  // RVA: 0x46DFC0
    bool GameTilePassesFilter(GameTile* gameTile, int32_t tileFilters);  // RVA: 0x46CAD0
    bool GameTilePathValid(int32_t x, int32_t y, float maxCost, int32_t tileFilters);  // RVA: 0x46CB40
    float GetPathCost(GameTile* gameTile, bool useCachedData);  // RVA: 0x46D360
    PathNodeData* GetPathNodeData(GameTile* gameTile, bool useCachedData);  // RVA: 0x46D450
    GameTile* GetTargetTileInDirPlayers(int8_t level, GameTile* gameTile, Vector2 dir, int32_t range, float maxCost, float maxAngleRange, bool useCachedData);  // RVA: 0x46D9D0
    GameTile* GetRandomTargetTile(int32_t minRange, int32_t maxRange, float maxCost);  // RVA: 0x46D590
    void ProcessAStar(int32_t maxNodesEvaluatedPerFrame);  // RVA: 0x46EEA0
    bool ProcessAStarNeighbourNode(PathNodeData* leastCostNode, int32_t col, int32_t row, bool diagonal);  // RVA: 0x46EC10
    float GetHeuristicScore(Vector2 distVector);  // RVA: 0x46CC70
    PathNodeData* GetPathNodeData(int32_t colOffset, int32_t rowOffset);  // RVA: 0x46D520
    Vector3 GetNextPathPosition(Vector3 sourcePos, Vector3 destPos, float moveDist, bool openDoors);  // RVA: 0x46CCF0
    void .ctor();  // RVA: 0x4702B0
};

// Namespace: <global>
class PathfindingController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Thread* mThread; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ManualResetEvent* mInternalStartEvent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CountdownEvent* mCountdownEvent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mMaxNodeEvaluationDistance; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t mMaxNodeEvaluationDistanceFine; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t mMaxNodesEvaluatedPerFrame; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mQualityScale; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int8_t mLocalPlayerIndex; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    PathfindingType mPathfindingType; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    PathfindingProcessor* mPathfindingProcessor; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    PathfindingProcessor* mPathfindingProcessorFine; // 0x0048

    // Methods
    void .ctor(PathfindingType pathfindingType, int8_t localPlayerIndex);  // RVA: 0x491410
    void SetPathfindingQualityScale(float scale);  // RVA: 0x491020
    void Initialise(PathfindingType pathfindingType, int8_t localPlayerIndex);  // RVA: 0x490FB0
    void StartThread(CountdownEvent* countdownEvent);  // RVA: 0x491060
    void UpdateThreadLoop();  // RVA: 0x4912A0
    void UpdatePathfindingSorted(bool multiThreaded, int32_t maxNodesEvaluatedPerFrameOverride);  // RVA: 0x491180
    void ApplyPathfindingResults();  // RVA: 0x490F70
    void UpdateThread(int32_t maxNodesEvaluatedPerFrameOverride);  // RVA: 0x4913D0
};

// Namespace: <global>
struct CollisionOutCode
{
public:
    // Static fields
    // static CollisionOutCode INSIDE;
    // static CollisionOutCode LEFT;
    // static CollisionOutCode RIGHT;
    // static CollisionOutCode BOTTOM;
    // static CollisionOutCode TOP;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;


    // Methods
    static void .cctor();  // RVA: 0x4A2FB0
    void .ctor();  // RVA: 0x2C1750
    int32_t <.cctor>b__41_0(GameTile* a, GameTile* b);  // RVA: 0x4A2DE0
};

// Namespace: <global>
class PathfindingManager
{
public:
    // Static fields
    // static PathfindingManager* instance;
    // static bool mWalkCollide;
    // static System.Collections.Generic.List<PathNodeData> sPathList;
    // static System.Collections.Generic.List<Item> sEvaluatedLadders;
    // static Vector2 sSortStartPos;
    // static System.Comparison<GameTile> CompareGameTile;
    // static System.Collections.Generic.List<GameTile> sRaycastGameTileResults;

    uint8_t pad_0000[0x10]; // 0x0000
    bool mMultithreaded; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    CountdownEvent* mPathfindingCountdownEvent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t mForcedPathfinderNumPlayers; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PathfindingProcessor* mInstantPathfinder; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<PathfindingController> mPlayerPathfinders; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x493500
    void SetQualityScale(float qualityScale);  // RVA: 0x495630
    void OnPlayerCreated();  // RVA: 0x494C30
    void OnPlayerRemoved(int8_t localPlayerIndex);  // RVA: 0x494E70
    int32_t NumActivePathfinders();  // RVA: 0x494B90
    void ResetThreads();  // RVA: 0x2C1B90
    void Update();  // RVA: 0x4958A0
    static bool ValidMove(GameTile* currentTile, GameTile* destTile, PathfindingType pathType, Item* collidedItem, bool openDoors, bool ignoreGroundTypes);  // RVA: 0x495AE0
    static bool ValidMove(GameTile* currentTile, GameTile* destTile, PathfindingType pathType, bool openDoors, bool ignoreGroundTypes);  // RVA: 0x496110
    static bool ValidMove(Level* level, Vector3 position, Vector3 newPosition, PathfindingType pathType, bool openDoors, float radius);  // RVA: 0x495D90
    static Vector3 GetNextPathPositionToPlayer(PathfindingType pathfindingType, Level* level, Player* player, Item* item, bool openDoors, float moveDist);  // RVA: 0x492C30
    float GetAccuratePathCostToPlayer(Player* player, PathfindingType pathfindingType, Item* item);  // RVA: 0x491E60
    static Vector3 MoveObjectSlide(Level* level, Vector3 tilePosition, Vector3 tileMoveVector, PathfindingType pathType, float radius, bool openDoors);  // RVA: 0x493850
    static Vector3 MoveObjectStraight(Level* level, Vector3 tilePosition, Vector3 tileMoveVector, Item* collidedItem, float radius, bool openDoors, bool ignoreTileTypes);  // RVA: 0x494710
    float GetPathCostToPlayer(Player* player, PathfindingType pathfindingType, GameTile* gameTile, bool useCachedData);  // RVA: 0x493270
    static float PlayerWithinSearchDist(Item* currentItem, Player* player, Vector2 maxSearchDistVec, int32_t ladderSearchDist, bool quickCheck, Vector3 playerTargetPos);  // RVA: 0x494F50
    static float PlayerWithinSearchDist(Item* currentItem, Level* currentLevel, Vector3 currentPos, Player* player, Vector2 maxSearchDistVec, int32_t ladderSearchDist, bool quickCheck, Vector3 playerTargetPos, float currentDist);  // RVA: 0x4950B0
    static bool SphereSphereCollisionTest(Vector2 v1, Vector2 w1, float r1, Vector2 v2, Vector2 w2, float r2);  // RVA: 0x4956F0
    static bool SphereSphereCollisionTest(Vector2 v1, Vector2 w1, float r1, Vector2 v2, float r2);  // RVA: 0x4957F0
    static float LineSegToPointDist(Vector2 v, Vector2 w, Vector2 p);  // RVA: 0x493770
    static int32_t ComputeOutCode(Vector2 point, Rect bounds);  // RVA: 0x491E00
    static bool ComputeLineIntersect(Vector2 startPos, Vector2 endPos, Rect bounds);  // RVA: 0x491840
    static bool ComputeLineRadiusIntersect(Vector2 startPos, Vector2 endPos, Rect bounds, float radius);  // RVA: 0x491B80
    static bool ComputeLineIntersect(Vector2 startPos, Vector2 endPos, Rect bounds, Vector2 intersectPoint);  // RVA: 0x491530
    static System.Collections.Generic.List<GameTile> GetGameTileRaycast(Level* level, Vector2 startPos, Vector2 endPos, float radius, bool includeEndPoints);  // RVA: 0x492170
    static System.Collections.Generic.List<GameTile> GetGameTileRaycast(Level* level, Vector2 startPos, Vector2 endPos, float maxVertOffset, float radius, bool includeEndPoints, ItemInteractionFlags itemInteractionFlags);  // RVA: 0x492610
    static GameTile* GetRaycastHit(bool flyingCollision, bool ignoreOpenDoors);  // RVA: 0x493330
    void .ctor();  // RVA: 0x4965C0
    static void .cctor();  // RVA: 0x496380
};

// Namespace: <global>
class RoomBase : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    int32_t mMaxRoomWidthExternal; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mMaxRoomHeightExternal; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mMaxRoomWidthInternal; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t mMaxRoomHeightInternal; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t mMaxSearchWidth; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t mMaxSearchHeight; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    Boolean[][][] mMarkedTiles; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<GameTile> mTilesToProcess; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mColMin; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t mColMax; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t mRowMin; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t mRowMax; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool mValid; // 0x0050
    bool mTooSmall; // 0x0051
    bool mTooLarge; // 0x0052
    bool mIsDirty; // 0x0053
    uint8_t pad_0054[0x4]; // 0x0054
    Level* mLevel; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameTile* mGameTile; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.Dictionary<System.Int32,GameTile> mRoomTileIndices; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t mFloorTileCount; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t wallColMin; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    int32_t wallColMax; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    int32_t wallRowMin; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    int32_t wallRowMax; // 0x0080

    // Methods
    void Initialise(int32_t maxRoomWidthExternal, int32_t maxRoomHeightExternal);  // RVA: 0x4A26B0
    void Place(Level* level, GameTile* gameTile);  // RVA: 0x4A2710
    bool ContainsTile(int32_t col, int32_t row);  // RVA: 0x4A2640
    bool ContainsTileBoundsCheck(int32_t col, int32_t row);  // RVA: 0x4A25A0
    void TileModified(int32_t levelId, int32_t col, int32_t row);  // RVA: 0x4A28E0
    bool IsNearbyTileModified(int32_t col, int32_t row);  // RVA: 0x360690
    bool Validate(bool force);  // RVA: 0x4A2A50
    void ValidateClear();  // RVA: 0x4A29D0
    bool ValidateTile(GameTile* currentTile);  // RVA: 0x360690
    void ValidateRoom();  // RVA: 0x4A29E0
    void AddAdjacentTilesToProcess(Level* level, int32_t col, int32_t row);  // RVA: 0x4A22A0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class Pen : public RoomBase
{
public:

    // Methods
    void Initialise();  // RVA: 0x496F00
    void Place(Level* level, GameTile* gameTile);  // RVA: 0x496F60
    bool IsNearbyTileModified(int32_t col, int32_t row);  // RVA: 0x2E6DB0
    bool ValidateTile(GameTile* currentTile);  // RVA: 0x496FE0
    int32_t SupportedAnimalCount();  // RVA: 0x496F90
    bool WithinSupportedAnimalCap();  // RVA: 0x497160
    int32_t GetAnimalCountOnTiles();  // RVA: 0x496BD0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class PenManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<Trough> mTroughs; // 0x0010

    // Methods
    void Initialise();  // RVA: 0x2C1B90
    void Clear();  // RVA: 0x496680
    void PostCreateWorld();  // RVA: 0x496810
    void Update(float dt);  // RVA: 0x2C1B90
    void AddTrough(Trough* trough);  // RVA: 0x4965D0
    void RemoveTrough(Trough* trough);  // RVA: 0x4968D0
    void UpdateAllPens();  // RVA: 0x496810
    void TileModified(GameTile* gameTile);  // RVA: 0x496A70
    Pen* GetValidPen(GameTile* gameTile);  // RVA: 0x4966E0
    void .ctor();  // RVA: 0x496B50
};

// Namespace: <global>
class PlacementPreview
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<Item,System.Boolean> itemsToReplace; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameTile* gameTile; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Item* previewObject; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Item* childObject; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Item* surfaceObject; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FittingItem* fittingObject; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    WallItem* fittingTarget; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.Collections.Generic.Dictionary<Item,System.Single>> effectLightFadeIns; // 0x0048

    // Methods
    void Initialise();  // RVA: 0x497BE0
    void UpdatePreviewItemEffect(Player* player, Item* item, GameRendering* gameRendering, float dt, RectInt renderBounds);  // RVA: 0x498C00
    void UpdateCachedPreviewItemEffects(Player* player, Item* excludePreviewItem, GameRendering* gameRendering, float dt);  // RVA: 0x497DC0
    Item* UpdateCurrentPreview(Player* player, GameRendering* gameRendering, float dt, RectInt renderBounds);  // RVA: 0x498120
    void ResetPreview();  // RVA: 0x497DA0
    void .ctor();  // RVA: 0x498E60
};

// Namespace: <global>
struct AchievementStatID
{
public:
    // Static fields
    // static AchievementStatID NUM;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AchievementStat
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    AchievementStatID statID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* steamName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool achieved; // 0x0020

    // Methods
    void .ctor(AchievementStatID statID, Il2CppString* steamName, bool achieved);  // RVA: 0x362850
};

// Namespace: <global>
struct IntStatID
{
public:
    // Static fields
    // static IntStatID VERSION;
    // static IntStatID GAME_EVER_LAUNCHED;
    // static IntStatID GAME_LAUNCH_COUNT;
    // static IntStatID NUM;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct IntStat
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    IntStatID statID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* steamName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t value; // 0x0020

    // Methods
    void .ctor(IntStatID statID, Il2CppString* steamName, int32_t value);  // RVA: 0x4904D0
};

// Namespace: <global>
struct FloatStatID
{
public:
    // Static fields
    // static FloatStatID NUM;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct FloatStat
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    FloatStatID statID; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* steamName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float value; // 0x0020

    // Methods
    void .ctor(FloatStatID statID, Il2CppString* steamName, float value);  // RVA: 0x490490
};

// Namespace: <global>
struct PlatformType
{
public:
    // Static fields
    // static PlatformType PC;
    // static PlatformType SteamDeck;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PlatformManager
{
public:
    // Static fields
    // static PlatformManager* instance;
    // static Il2CppString* DEFAULT_USER_ID_STRING;

    uint8_t pad_0000[0x10]; // 0x0000
    IRemotePlayerConnected* remotePlayerConnectedHandler; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    IRemotePlayerDisconnected* remotePlayerDisconnectedHandler; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    IPlatformFocusChanged* platformFocusChangedHandler; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlatformType mPlatformType; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineManager* mOnlineManager; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool mPlatformHasFocus; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* mLocalUserPath; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<PlatformManager.AchievementStat> mAchievementStats; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<PlatformManager.IntStat> mIntStats; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<PlatformManager.FloatStat> mFloatStats; // 0x0058

    // Methods
    uint64_t get_LocalUserID();  // RVA: 0x3094F0
    Il2CppString* get_LocalUserIDString();  // RVA: 0x499F00
    bool get_PlatformHasFocus();  // RVA: 0x45A1C0
    static PlatformManager* Create();  // RVA: 0x4993A0
    static SteamPlatformManager* get_SteamInstance();  // RVA: 0x499F50
    bool Initialise();  // RVA: 0x499510
    void RegisterStats();  // RVA: 0x4997F0
    void LateInitialise();  // RVA: 0x499640
    void RunUpdate(float dt);  // RVA: 0x499C10
    void Shutdown();  // RVA: 0x499DD0
    void PostCreateWorld();  // RVA: 0x4996C0
    Il2CppString* GetPlayerName(int32_t maxNameLength, bool validate);  // RVA: 0x4993F0
    bool OpenVirtualKeyboard(IVirtualKeyboardHandler* virtualKeyboardHandler, Il2CppString* description, uint32_t maxChars, Il2CppString* existingText);  // RVA: 0x360690
    void CloseVirtualKeyboard();  // RVA: 0x2C1B90
    void OpenURL(Il2CppString* url);  // RVA: 0x499670
    bool IsRemotePlayTogetherRunning();  // RVA: 0x360690
    void KeyboardTest();  // RVA: 0x2C1B90
    void RefreshLocalUserPath();  // RVA: 0x4996E0
    Il2CppString* BuildUserRelativeFilename(Il2CppString* filename);  // RVA: 0x499170
    void BuildUserRelativeFilename(Il2CppString* filename, Il2CppString* userRelativeFilename);  // RVA: 0x499270
    bool IsStatAchieved(AchievementStatID statID);  // RVA: 0x4995E0
    int32_t GetStat(IntStatID statID);  // RVA: 0x4994B0
    float GetStat(FloatStatID statID);  // RVA: 0x499450
    void AchieveStat(AchievementStatID statID);  // RVA: 0x498EE0
    void SetStat(IntStatID statID, int32_t value);  // RVA: 0x499C30
    void SetStat(FloatStatID statID, float value);  // RVA: 0x499D00
    int32_t AddStat(IntStatID statID, int32_t add);  // RVA: 0x498FB0
    float AddStat(FloatStatID statID, float add);  // RVA: 0x499080
    void UploadStats(bool immediate);  // RVA: 0x2C1B90
    void ResetAllStats(bool refresh);  // RVA: 0x2C1B90
    void LogStats(LogLevel logLevel);  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x499E90
    static void .cctor();  // RVA: 0x499DF0
};

// Namespace: <global>
struct PickupDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t itemId; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t stackCount; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float timer; // 0x0018

    // Methods
    void .ctor(int32_t _itemId, int32_t _stackCount, float _timer);  // RVA: 0x497BD0
};

// Namespace: <global>
class PickupDetailsHelper
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<PickupDetails> mPickupDetails; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<WorldText> mActiveTextObjects; // 0x0018

    // Methods
    void Clear(Player* player);  // RVA: 0x4971F0
    void PickUpItem(Item* item, Player* player);  // RVA: 0x4972D0
    void UpdatePickups(Player* player, float dt);  // RVA: 0x497500
    void .ctor();  // RVA: 0x497B00
};

// Namespace: <global>
class ObjectTextHelper
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<WorldText> mActiveTextObjects; // 0x0010

    // Methods
    void Clear(Player* player);  // RVA: 0x4905D0
    void Update(Player* player, float dt);  // RVA: 0x490E80
    void HighlightItemUnderCursor(Player* player);  // RVA: 0x490690
    void ShowHighlightText(Player* player, Item* item);  // RVA: 0x490CB0
    void ItemDestroyed(Item* item);  // RVA: 0x490BF0
    void .ctor();  // RVA: 0x490EF0
};

// Namespace: <global>
class NearbyItemComparer
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector2 referencePosition; // 0x0010

    // Methods
    void UpdateReferencePosition(Vector2 position);  // RVA: 0x4905C0
    int32_t Compare(Item* left, Item* right);  // RVA: 0x490500
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct SleepState
{
public:
    // Static fields
    // static SleepState AWAKE;
    // static SleepState PREPARING;
    // static SleepState SLEEPING;
    // static SleepState END_SLEEP;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class Player : public ContainerItem
{
public:
    // Static fields
    // static float COLLECT_DISTANCE;
    // static NearbyItemComparer* sNearbyItemComparer;
    // static System.Collections.Generic.List<ContainerItem> sNearbyContainers;
    // static Vector2Int sMarkedStart;

    uint8_t pad_0000[0xE0]; // 0x0000
    int32_t mOriginalSaveVersion; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t mOriginalSaveVersionVisibility; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    GameTargetType mOriginalSaveTargetType; // 0x00E8
    uint8_t pad_00E9[0x3]; // 0x00E9
    GameTargetType mOriginalSaveTargetTypeVisibility; // 0x00EC
    uint8_t pad_00ED[0x3]; // 0x00ED
    CharacterSettingsTable mCharacterSettings; // 0x00F0
    uint8_t pad_00F1[0x2F]; // 0x00F1
    float mMaxHealth; // 0x0120
    uint8_t pad_0121[0x3]; // 0x0121
    float mMaxMana; // 0x0124
    uint8_t pad_0125[0x3]; // 0x0125
    float mMana; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    float mRegenTimer; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    System.Collections.Generic.List<Item> mEquipment; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    System.Collections.Generic.List<Item> mTrashedItems; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Collections.Generic.List<StatusEffect> mStatusEffects; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    System.Single[,] mAppliedStats; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    ValueTuple`2[][] mAppliedStatTimes; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mItemDiscoveries; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mItemIndicesToSave; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    EventMap* mEventMap; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    System.Collections.Generic.Dictionary<System.String,System.Boolean> mLoreReadStates; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mQuestReadStates; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    PlayerOverrideSettings* mPlayerOverrideSettings; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    ReservedItems* mReservedItems; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    Item* mPickedUpItem; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    InteractableItem* mInteractingStorage; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    NPC* mInteractingNPC; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    int32_t mMaxCapacity; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    System.Collections.Generic.List<Item> mNearbyChestContents; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    NestedRecipeIngredientList* mNestedRecipeIngredientList; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    PickupDetailsHelper* mPickupDetailsHelper; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    ObjectTextHelper* mObjectTextHelper; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    GameTile* mSpawnTileItem; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    GameTile* mSpawnTileDefault; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    bool initialised; // 0x01E0
    uint8_t pad_01E1[0x3]; // 0x01E1
    Vector3 mDirection; // 0x01E4
    uint8_t pad_01E5[0xB]; // 0x01E5
    bool mIsAttacking; // 0x01F0
    bool mIsAltAttacking; // 0x01F1
    bool mIsAiming; // 0x01F2
    bool mPendingAttackUp; // 0x01F3
    uint8_t pad_01F4[0x4]; // 0x01F4
    Weapon* mWeapon; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    Item* mClosestInteractableObject; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    int32_t mPreviousActionedItemId; // 0x0208
    uint8_t pad_0209[0x3]; // 0x0209
    bool mValidRoom; // 0x020C
    SleepState mSleepState; // 0x020D
    uint8_t pad_020E[0x2]; // 0x020E
    float mMoveSpeed; // 0x0210
    uint8_t pad_0211[0x3]; // 0x0211
    float mAnimSpeed; // 0x0214
    uint8_t pad_0215[0x3]; // 0x0215
    Vector3 mLastFrameMoveDir; // 0x0218
    uint8_t pad_0219[0xB]; // 0x0219
    Vector2 mAveragedMoveDir; // 0x0224
    uint8_t pad_0225[0xB]; // 0x0225
    PlayerSpriteHelper* mSpriteHelper; // 0x0230
    uint8_t pad_0231[0x7]; // 0x0231
    int8_t mPlayerIndex; // 0x0238
    uint8_t pad_0239[0x7]; // 0x0239
    PlayerController* mPlayerController; // 0x0240
    uint8_t pad_0241[0x7]; // 0x0241
    PlayerInputState* mPlayerInputState; // 0x0248
    uint8_t pad_0249[0x7]; // 0x0249
    float mRecoveryTimer; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    System.Collections.Generic.Dictionary<System.Int32,ItemDescriptor> mNearbyEquipment; // 0x0258
    uint8_t pad_0259[0x7]; // 0x0259
    GameTile* mTeleportTarget; // 0x0260
    uint8_t pad_0261[0x7]; // 0x0261
    float mTeleportTime; // 0x0268
    uint8_t pad_0269[0x3]; // 0x0269
    bool mTeleportRespawn; // 0x026C
    uint8_t pad_026D[0x3]; // 0x026D
    float mInvulnerableTimer; // 0x0270
    uint8_t pad_0271[0x3]; // 0x0271
    float mPreviousDamageReceived; // 0x0274
    uint8_t pad_0275[0x3]; // 0x0275
    PlayerActionState* mPlayerActionState; // 0x0278
    uint8_t pad_0279[0x7]; // 0x0279
    EventInstance audioWaterInstance; // 0x0280
    uint8_t pad_0281[0x7]; // 0x0281
    int32_t mFirstTorchIndex; // 0x0288
    uint8_t pad_0289[0x7]; // 0x0289
    LightDescriptor* mPlayerLightDescriptor; // 0x0290
    uint8_t pad_0291[0x7]; // 0x0291
    LightDescriptor* mTorchLightDescriptor; // 0x0298
    uint8_t pad_0299[0x7]; // 0x0299
    System.Collections.Generic.Dictionary<System.Int32,System.Single> mEnemyPrespawnTimer; // 0x02A0
    uint8_t pad_02A1[0x7]; // 0x02A1
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> mEnemyPrespawnWorkingUpdates; // 0x02A8
    uint8_t pad_02A9[0x7]; // 0x02A9
    float mEnemySpawnTimer; // 0x02B0
    uint8_t pad_02B1[0x3]; // 0x02B1
    float mCritterSpawnTimer; // 0x02B4
    uint8_t pad_02B5[0x3]; // 0x02B5
    StringBuilder* logInventorystringBuilder; // 0x02B8
    uint8_t pad_02B9[0x7]; // 0x02B9
    System.Collections.Generic.List<Item> logInventoryList; // 0x02C0

    // Methods
    OnlineItemClassType get_OnlineClassType();  // RVA: 0x490410
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x47BAB0
    void Initialise(PlayerController* playerController, bool newPlayer);  // RVA: 0x47ADE0
    static void PickUpItem(int8_t sourceClientIndex, PlayerPickUpItem msg);  // RVA: 0x47F0D0
    void PickUpItem(Item* item);  // RVA: 0x47EDC0
    Item* GetPickedUpItem();  // RVA: 0x479E90
    static void SetSpawnPoint(int8_t sourceClientIndex, PlayerSetSpawnPoint msg);  // RVA: 0x4856D0
    void SetSpawnPoint(GameTile* spawnTile, bool item, bool triggerFloatingText);  // RVA: 0x485300
    GameTile* GetSpawnTile(bool findNearbyValidTile);  // RVA: 0x47A260
    void StartTeleport(GameTile* teleportTarget, float teleportTime, bool teleportRespawn);  // RVA: 0x487710
    void CancelTeleport(bool updateFade);  // RVA: 0x4751F0
    static void Teleport(int8_t sourceClientIndex, PlayerTeleport msg);  // RVA: 0x4886D0
    void Teleport(GameTile* teleportTarget, bool teleportRespawn, int8_t clientIndex);  // RVA: 0x488330
    void Teleport(GameTile* teleportTarget);  // RVA: 0x4882D0
    static Il2CppString* SaveStub(CharacterSettingsTable characterSettings, Il2CppString* playerFilename);  // RVA: 0x4833A0
    static CharacterSettingsTable LoadCharacterSettings(Il2CppString* filepath, bool stub, VersionData versionData);  // RVA: 0x47C4A0
    static Il2CppString* GetUniqueSavePath(Il2CppString* path, int32_t fileIndex);  // RVA: 0x47A570
    static FileStream* CreateUniqueSave(Il2CppString* path, Il2CppString* filePath);  // RVA: 0x4767A0
    void PopulateCharaceterEquipmentSettings();  // RVA: 0x47F670
    void WritePlayer(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x48FA70
    void Save(bool isHost, int32_t worldSerialisationFlags);  // RVA: 0x4839C0
    Il2CppString* GetPlayerName();  // RVA: 0x479E20
    bool GetLoreReadState(Il2CppString* loreName);  // RVA: 0x479E30
    int32_t GetReadLoreCount();  // RVA: 0x47A1C0
    void SetLoreReadState(Il2CppString* loreName, bool readState);  // RVA: 0x4851C0
    bool GetQuestReadState(int32_t questId);  // RVA: 0x47A090
    int32_t GetReadQuestCount();  // RVA: 0x47A210
    void SetQuestReadState(int32_t questId, bool readState);  // RVA: 0x485260
    Il2CppString* GetVisibilityPath(Il2CppString* playerPath, bool isHost, Il2CppString* directory);  // RVA: 0x47A680
    void SaveVisibility(bool isHost);  // RVA: 0x4836E0
    PlayerOverrideSettings* GetPlayerOverrideSettings(bool generateNew);  // RVA: 0x479F50
    Il2CppString* GetPlayerOverrideSettingsPath(Il2CppString* playerPath, Il2CppString* directory);  // RVA: 0x479EA0
    bool LoadPlayerOverrideSettings(Il2CppString* playerPath);  // RVA: 0x47C8F0
    bool SavePlayerOverrideSettings();  // RVA: 0x482F40
    void DeletePlayerOverrideSettings();  // RVA: 0x477520
    void FindItemIndicesToSave();  // RVA: 0x4786F0
    void AddChildIndicesToSave(System.Collections.Generic.List<Item> childList);  // RVA: 0x473FE0
    bool ShouldSerialise(int32_t worldSerialisationFlags);  // RVA: 0x360690
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x483E80
    void SaveDiscoveries(Stream* stream, int32_t worldSerialisationFlags);  // RVA: 0x482D50
    void SaveReadStates(Stream* stream);  // RVA: 0x482FD0
    void LoadReadStates(Stream* stream, int32_t version);  // RVA: 0x47CA30
    void Load(Il2CppString* filepath, int8_t localPlayerIndex, bool isHost, bool stub);  // RVA: 0x47D670
    void Load(Stream* stream, Il2CppString* visibilityFilepath, int8_t localPlayerIndex, bool isHost, bool stub);  // RVA: 0x47CF00
    void LoadVisibility(Il2CppString* playerPath, int8_t localPlayerIndex, bool isHost);  // RVA: 0x47CD30
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x47D860
    void LoadDiscoveries(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable);  // RVA: 0x47C5D0
    void Delete();  // RVA: 0x477600
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x477A90
    Il2CppString* GetAnimName(AnimType animType);  // RVA: 0x479570
    bool SetAnim(Il2CppString* animName, float animSpeed, AnimCompareType animCompareType);  // RVA: 0x484E50
    bool SetAnim(AnimType animType, float animSpeed, AnimCompareType animCompareType, bool sendOnline);  // RVA: 0x484A10
    static void SelectItem(int8_t sourceClientIndex, PlayerSelectItem msg);  // RVA: 0x484230
    void SelectItem(Item* item);  // RVA: 0x484160
    void UpdateAnims(float dt);  // RVA: 0x489E30
    void SetDirectionOnLoad(Vector2 newDirection, int32_t worldSerialisationFlags);  // RVA: 0x484ED0
    void SetDirection(Vector2 newDirection, bool sendOnline);  // RVA: 0x484F70
    Vector2 GetDirection();  // RVA: 0x479C70
    void TriggerTeleportEffect(bool isRespawning, bool triggerAudio, bool trackPlayer);  // RVA: 0x4893C0
    void Respawn(Vector3 spawnPosition, GameTile* gameTile);  // RVA: 0x482240
    static void Sleep(int8_t sourceClientIndex, PlayerSleep msg);  // RVA: 0x485960
    void PrepareToSleep();  // RVA: 0x47FBB0
    void CancelSleep();  // RVA: 0x474FF0
    void BeginSleep();  // RVA: 0x474860
    void EndSleep();  // RVA: 0x477C90
    void SleepReset();  // RVA: 0x485830
    System.ValueTuple<AudioEventDataOverride,AudioEventDataOverride> GetAudioData();  // RVA: 0x4799B0
    void ApplyKnockback(Vector3 sourcePos, float knockback);  // RVA: 0x474790
    static void ReceiveDamage(int8_t sourceClientIndex, PlayerReceiveDamage msg);  // RVA: 0x480CC0
    float GetDamagedHealthMinimum();  // RVA: 0x479C40
    bool ReceiveDamage(int8_t playerIndex, Vector3 sourcePos, float damage, float damageModifier, float knockback, ItemDescriptor* damageSourceDescriptor, Player* reparentOnDeath, DamageSource damageSource);  // RVA: 0x480EA0
    void Kill(int32_t playerIndex);  // RVA: 0x47C320
    void KillImplementation(int32_t playerIndex);  // RVA: 0x47C280
    static void SpawnLootBag(int8_t sourceClientIndex, LootBagSpawn msg);  // RVA: 0x485E40
    LootBagItem* SpawnLootBag(int8_t levelId, Vector3 spawnPosition, Params onlineParams);  // RVA: 0x485AF0
    static void MoveItemToLootBag(int8_t sourceClientIndex, LootBagAdd msg);  // RVA: 0x47E3E0
    void MoveItemToLootBag(LootBagItem* lootBag, Item* item, int32_t itemIndex);  // RVA: 0x47E5E0
    void TriggerDamageVOXAudio(AudioEventType eventType);  // RVA: 0x4892D0
    bool IsSleeping(bool includePreparing);  // RVA: 0x47C120
    bool CanConsume(Item* consumableItem);  // RVA: 0x474A50
    bool Consume(Item* consumableItem, bool forceConsume);  // RVA: 0x4758E0
    void AddStatusEffect(ItemStatParameterTag _tag, float _value, float _time);  // RVA: 0x474540
    void UpdateStatusEffects(float dt);  // RVA: 0x48BE30
    bool IsStatusEffectWorthApplying(ItemStatParameterTag _tag, float _value, float _time, float timeMargin);  // RVA: 0x47C140
    float GetStat(ItemStatParameterTag tag);  // RVA: 0x47A500
    float GetStatClamped(ItemStatParameterTag tag, float min, float max);  // RVA: 0x47A3E0
    float GetWeaponAttackModifier();  // RVA: 0x47A940
    System.ValueTuple<System.Single,System.Single> GetStatTime(ItemStatParameterTag tag);  // RVA: 0x47A460
    float GetAppliedStat(ItemStatParameterTag tag);  // RVA: 0x479800
    void ClearStatusEffects();  // RVA: 0x4756A0
    void UpdateStats();  // RVA: 0x48BBC0
    bool ValidateEquipItem(Item* item);  // RVA: 0x48F610
    int32_t FindEquipmentSlotIndex(int32_t equipmentIndex);  // RVA: 0x478510
    void RemoveEquipment(Item* item);  // RVA: 0x481DE0
    static void EquipItem(int8_t sourceClientIndex, PlayerEquipItem msg);  // RVA: 0x4783F0
    Item* EquipItem(Item* item, int32_t equipmentIndex, ContainerItem* sourceContainer, int32_t sourceContainerIndex);  // RVA: 0x477E80
    void OnEquipmentChanged(int32_t equipmentIndex, Item* item);  // RVA: 0x47E8F0
    void ClearTrash();  // RVA: 0x4757D0
    static void Trash(int8_t sourceClientIndex, PlayerTrash msg);  // RVA: 0x488CB0
    void Trash(Item* item, int32_t equipmentIndex, ContainerItem* sourceContainer);  // RVA: 0x488DD0
    static void Untrash(int8_t sourceClientIndex, PlayerUntrash msg);  // RVA: 0x489940
    Item* Untrash(Item* existingItem, int32_t existingSlot);  // RVA: 0x489A30
    static void LootFromContainer(int8_t sourceClientIndex, PlayerLoot msg);  // RVA: 0x47DF10
    bool LootFromContainer(ContainerItem* container, int32_t containerIndex, Item* item);  // RVA: 0x47E040
    ProjectileItem* GetFirstProjectileType(ProjectileType projectileType);  // RVA: 0x479C90
    bool SetEvent(EventId eventId, Il2CppString* eventName, int32_t newValue, OperatorEnum operatorType, bool updateOnline);  // RVA: 0x484FE0
    void UpdateText(float dt);  // RVA: 0x48C1A0
    void UpdatePreSpawnTimers(float dt);  // RVA: 0x48AE00
    float GetPreSpawnTimer(int32_t levelId, bool clear);  // RVA: 0x479FD0
    void UpdateHealth(float dt);  // RVA: 0x489E60
    bool Update(float dt, bool postUpdateGameTile);  // RVA: 0x48C3C0
    void SetAimAnim(bool isWatering, bool isMoving, Il2CppString* checkExistingAnim);  // RVA: 0x4848C0
    void UpdateRemote(float dt);  // RVA: 0x48B6D0
    void UpdateRemoteAnimEvents();  // RVA: 0x48B100
    void UpdateWaterAudio(bool watering, Vector2 direction);  // RVA: 0x48C200
    static void FireProjectile(int8_t sourceClientIndex, PlayerFireProjectile msg);  // RVA: 0x4788E0
    ProjectileItem* FireProjectile(Weapon* weapon, Vector3 origin, Vector3 aimDir, float angle, float damageModifier, Params inProjectileParams);  // RVA: 0x478A10
    static void DealDamage(int8_t sourceClientIndex, PlayerDealDamage msg);  // RVA: 0x477230
    void DealDamage(PlaceableItem* damagedItem, Vector3 sourcePos, float damage, float damageModifier, float knockback, ItemDescriptor* sourceDescriptor, DamageSource damageSource);  // RVA: 0x476E10
    static void DealDamageToItem(int8_t sourceClientIndex, PlayerDealDamageToItem msg);  // RVA: 0x476C70
    void DealDamageToItem(PlaceableItem* damagedItem, Vector3 sourcePos, float damage, ItemDescriptor* sourceDescriptor, bool reparentOnDeath);  // RVA: 0x4768F0
    static void DestroyNonPlaceableItem(int8_t sourceClientIndex, PlayerDestroyNonPlaceableItem msg);  // RVA: 0x477720
    void DestroyNonPlaceableItem(ItemBase* destroyedItem, int8_t clientIndex);  // RVA: 0x477840
    void AddItemToHash(int32_t index, Item* item, int32_t hash);  // RVA: 0x474320
    void AddItemsToHash(System.Collections.Generic.List<T> items, int32_t hash);  // RVA: 0x17A420
    int32_t GetQuickInventoryHash();  // RVA: 0x47A0F0
    void LogItems(System.Collections.Generic.List<T> items, Il2CppString* prefix);  // RVA: 0x17A420
    void LogInventory(LogType logType, LogLevel logLevel);  // RVA: 0x47DCE0
    static void ValidateOnlineInventory(int8_t sourceClientIndex, PlayerValidateInventory msg);  // RVA: 0x48F950
    void ValidateOnlineInventory();  // RVA: 0x48F770
    bool Craft(ItemDescriptor* itemDescriptor, uint16_t quantity, bool logFailure);  // RVA: 0x476070
    static void Craft(int8_t sourceClientIndex, PlayerCraft msg);  // RVA: 0x4763A0
    Item* Craft(Vector3 playerPos, ItemDescriptor* itemDescriptor, uint16_t quantity, bool isPlacing);  // RVA: 0x4764F0
    static void CraftResult(int8_t sourceClientIndex, PlayerCraftResult msg);  // RVA: 0x475F90
    void OnItemCrafted(Item* item, bool isPlacing);  // RVA: 0x47EA50
    static void SpendIngredient(int8_t sourceClientIndex, PlayerSpendIngredient msg);  // RVA: 0x486440
    void SpendIngredient(int32_t itemDescrId, int32_t quantity);  // RVA: 0x485EE0
    static void CatchAnimal(int8_t sourceClientIndex, PlayerCatchAnimal msg);  // RVA: 0x475290
    void CatchAnimal(PlaceableItem* animal, int8_t clientIndex);  // RVA: 0x475420
    static void TakeReservedItem(int8_t sourceClientIndex, TakeReservedItem msg);  // RVA: 0x4881D0
    void TakeReservedItem(Item* item);  // RVA: 0x487F20
    static void UnstackToReserve(int8_t sourceClientIndex, PlayerUnstackToReserve msg);  // RVA: 0x489870
    Item* UnstackToReserve(Item* item, Params onlineParams);  // RVA: 0x4895E0
    static void ReclaimItem(int8_t sourceClientIndex, PlayerReclaimItem msg);  // RVA: 0x481C40
    void ReclaimItem(Item* item, Params attachWallParams);  // RVA: 0x481590
    void UpdatePlayerDebugCommands(Level* level);  // RVA: 0x48A5E0
    void PickUpNearbyDroppedItems(GameTile* currentTile, Level* level, float dt, bool ignorePriorOwnership);  // RVA: 0x47F190
    static void StartCollectItem(int8_t sourceClientIndex, PlayerStartCollect msg);  // RVA: 0x4871E0
    void StartCollectItem(Item* item, int8_t clientIndex);  // RVA: 0x487470
    Vector3 CalculateRenderPosition(GameRendering* gameRendering);  // RVA: 0x4623C0
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x481F90
    bool CanIncreaseMaxCapacity();  // RVA: 0x474D90
    void IncreaseMaxCapacity(int32_t increaseAmount);  // RVA: 0x47AC20
    int32_t MaxCapacity();  // RVA: 0x47E3D0
    bool CanPickup(Item* item);  // RVA: 0x474DA0
    bool CanShowHighlightText(Player* player);  // RVA: 0x474FE0
    Il2CppString* GetHighlightText();  // RVA: 0x479E20
    void AddItemDiscovery(Item* item, bool includeRecipeIngredients);  // RVA: 0x4742D0
    void AddItemDiscovery(ItemDescriptor* itemDescriptor, bool includeRecipeIngredients);  // RVA: 0x4740C0
    Item* AddNewChild(Item* item, int32_t startIndex);  // RVA: 0x4743A0
    Item* TakeItem(ContainerItem* existingContainer, Item* existingItem, int32_t existingSlot, int32_t slot);  // RVA: 0x487E40
    bool AddChildAtIndex(Item* item, int32_t index);  // RVA: 0x473F10
    static void SpendWallet(int8_t sourceClientIndex, PlayerSpendWallet msg);  // RVA: 0x486760
    bool SpendWallet(int32_t cost);  // RVA: 0x4864D0
    static void PurchaseItem(int8_t sourceClientIndex, PlayerPurchaseItem msg);  // RVA: 0x47FFA0
    Item* PurchaseItem(NPC* vendor, int32_t itemIndex, Item* vendorItem, uint16_t quantity, Params onlineParams);  // RVA: 0x480110
    static void SellItem(int8_t sourceClientIndex, PlayerSellItem msg);  // RVA: 0x484790
    bool SellItem(NPC* vendor, Item* item, bool isEquipmentItem, bool isInventoryItem);  // RVA: 0x4843A0
    static void StoreItemInContainer(int8_t sourceClientIndex, PlayerStoreItem msg);  // RVA: 0x487860
    bool StoreItemInContainer(ContainerItem* container, Item* item, int32_t equipmentIndex, int32_t inventorySlot);  // RVA: 0x487990
    void UpdateLightSource();  // RVA: 0x489F90
    int32_t FindFirstInventoryIndex(Il2CppString* itemName, int32_t maxInventoryIndex);  // RVA: 0x4785E0
    void RefreshInventoryHUD();  // RVA: 0x481D60
    void UpdateNearbyEquipment(Vector3 sourcePosition);  // RVA: 0x48A2D0
    void SortNearbyContainers(Vector3 sourcePosition);  // RVA: 0x485A40
    System.Collections.Generic.List<ContainerItem> PopulateNearbyContainers(Vector3 sourcePosition, bool sort);  // RVA: 0x47F840
    void UpdateNearbyChestContentsList(Vector3 sourcePosition, bool populate);  // RVA: 0x48A0C0
    void OnStorageAccessChanged(ContainerItem* container);  // RVA: 0x47EBD0
    void SortItems(int32_t start);  // RVA: 0x485A20
    static void RestockFromContainer(int8_t sourceClientIndex, PlayerRestockFrom msg);  // RVA: 0x4824A0
    void RestockFromContainer(ContainerItem* containerItem);  // RVA: 0x482670
    static void QuickRestockFromContainer(int8_t sourceClientIndex, PlayerQuickRestock msg);  // RVA: 0x480850
    void QuickRestockFromContainer(ContainerItem* containerItem);  // RVA: 0x480590
    static void StackToContainer(int8_t sourceClientIndex, PlayerStackTo msg);  // RVA: 0x487010
    void StackToContainer(ContainerItem* containerItem, int32_t maxIndex);  // RVA: 0x486D70
    static void QuickStackToContainer(int8_t sourceClientIndex, PlayerQuickStack msg);  // RVA: 0x480BF0
    void QuickStackToContainer(ContainerItem* containerItem, int32_t maxIndex);  // RVA: 0x480910
    static void RestockNearby(int8_t sourceClientIndex, PlayerRestockNearby msg);  // RVA: 0x482C80
    void RestockNearby(Vector3 sourcePosition);  // RVA: 0x4827E0
    static void StackNearby(int8_t sourceClientIndex, PlayerStackNearby msg);  // RVA: 0x4867E0
    void StackNearby(Vector3 sourcePosition);  // RVA: 0x4868B0
    Vector3 GetCursorWorldPos(float cursorAlpha);  // RVA: 0x479AE0
    void ItemDestroyed(Item* item);  // RVA: 0x47C250
    static void TillTile(int8_t sourceClientIndex, PlayerTill msg);  // RVA: 0x488830
    void TillTile(Level* level, int16_t tileX, int16_t tileY, bool till, int8_t clientIndex);  // RVA: 0x488920
    void .ctor();  // RVA: 0x48FCE0
    static void .cctor();  // RVA: 0x48FC00
};

// Namespace: <global>
struct ActionHighlight
{
public:
    // Static fields
    // static ActionHighlight None;
    // static ActionHighlight Highlight;
    // static ActionHighlight Disabled;
    // static ActionHighlight Blocked;
    // static ActionHighlight Invalid;
    // static ActionHighlight Colliding;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ActionResults
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ActionHighlight highlightType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    SpriteDescriptor* highlightDescriptor; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameTile* highlightTile; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector2Int highlightTilePos; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Item* highlightItem; // 0x0030

    // Methods
    void .ctor(Vector2Int _highLightTilePos);  // RVA: 0x490430
    void SetHighlightType(ActionHighlight _highlightType);  // RVA: 0x490420
};

// Namespace: <global>
class PlayerActionState
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Item* mPlaceableItem; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemDescriptor* mPlaceableDescriptor; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemState mPlaceableItemState; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t mPlacementOrientation; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Item* mSelectedItem; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Weapon* mWeapon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Item* mUsableItem; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    WeaponAttackStats mWeaponAttackStats; // 0x0040
    uint8_t pad_0041[0x27]; // 0x0041
    bool mCanAttemptAttack; // 0x0068
    bool mCanAttemptPlace; // 0x0069
    bool mCanAttemptUnplace; // 0x006A
    bool mCanAttemptDig; // 0x006B
    bool mCanAttemptChop; // 0x006C
    bool mCanAttemptWater; // 0x006D
    bool mCanAttemptTill; // 0x006E
    uint8_t pad_006F[0x1]; // 0x006F
    System.Collections.Generic.List<ActionResults> mActionResults; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<Item> mUnplaceableItems; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<Item> mIntersectingItems; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Vector3 mPlacementPosRaw; // 0x0088
    uint8_t pad_0089[0xB]; // 0x0089
    Vector2Int mLastPlacementTilePos; // 0x0094
    uint8_t pad_0095[0xB]; // 0x0095
    SpriteDescriptor* mValidHighlightDescriptor; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    SpriteDescriptor* mBlockedHighlightDescriptor; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    SpriteDescriptor* mInvalidHighlightDescriptor; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    SpriteDescriptor* mDisabledHighlightDescriptor; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    SpriteDescriptor* mCollidingHighlightDescriptor; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    SpriteDescriptor* mAimCursorDescriptor; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    SpriteDescriptor* mPlacementCursorDescriptor; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    SpriteDescriptor* mPlacementCraftDescriptor; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    SpriteDescriptor* mPlacementCraftInvalidDescriptor; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Player* mPlayer; // 0x00E8

    // Methods
    void Initialise(Player* player);  // RVA: 0x49A1C0
    void Reset();  // RVA: 0x49D330
    void UpdateCurrentItemData();  // RVA: 0x4A0240
    void UpdateAvailableActionTypes();  // RVA: 0x4A00B0
    void UpdatePlacementActionResult(ActionResults actionResult, Level* level, GameTile* placementGameTile, int32_t placementDirOrientation, WallItem* attachableWall);  // RVA: 0x4A0650
    bool ValidatePlayerPlaceItem(Item* placeableItem, Level* level, Vector3 worldPos, int32_t orientation, WallItem* attachWall);  // RVA: 0x4A1E50
    bool UpdateActionResults(GameTile* currentTile, Level* level, bool applyAction, bool attemptPlace, bool attemptAttack, bool attackPressed, bool altAttacking, Vector3 contactPos, Vector3 contactDir, Vector3 toolDir, bool attackEnemiesOnly);  // RVA: 0x49DA10
    static void PlaceItem(int8_t sourceClientIndex, PlayerPlaceItem msg);  // RVA: 0x49CAE0
    bool PlaceItem(Vector3 playerPos, Item* item, int8_t levelId, Vector3 worldPos, int8_t orientation, Params onlineParams, bool isUnplacing, bool craftItemFirst, int8_t clientIndex);  // RVA: 0x49BAF0
    static void UnplaceFitting(int8_t sourceClientIndex, PlayerUnplaceFitting msg);  // RVA: 0x49D7D0
    void UnplaceFitting(WallItem* attachableWall, Item* fitting, int8_t orientation, int8_t clientIndex);  // RVA: 0x49D440
    static void PlaceFitting(int8_t sourceClientIndex, PlayerPlaceFitting msg);  // RVA: 0x49B4E0
    bool PlaceFitting(Vector3 playerPos, WallItem* attachableWall, Item* fitting, int8_t orientation, Params onlineParams, bool isRemoving, bool craftItemFirst, int8_t clientIndex);  // RVA: 0x49A590
    GameTile* UpdateUnplacement(GameTile* currentTile, Weapon* weapon);  // RVA: 0x4A1CF0
    Vector2Int GetPlacementStartTilePos(Item* placeableItem, Level* level, Vector3 placementPos, int32_t numCols, int32_t numRows, int32_t orientation);  // RVA: 0x499FF0
    void PopulateOrientationTiles(Item* placeableItem, Level* level, Vector2Int placementTilePos, int32_t numCols, int32_t numRows);  // RVA: 0x49D170
    bool UpdatePlacementTiles(GameTile* currentTile, Item* placeableItem, int32_t orientation);  // RVA: 0x4A1300
    void .ctor();  // RVA: 0x4A2130
};

// Namespace: <global>
class PlayerController
{
public:
    // Static fields
    // static Vector3[][][] sBiomeAveragingVectors;

    uint8_t pad_0000[0x10]; // 0x0000
    Player* mPlayer; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float mRespawnDelay; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameTile* mSpawnTarget; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    uint64_t mOnlinePlayerID; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int8_t mClientIndex; // 0x0030
    int8_t mLocalPlayerIndex; // 0x0031
    int8_t mPlayerIndex; // 0x0032
    bool mIsLocal; // 0x0033
    uint8_t pad_0034[0x4]; // 0x0034
    UIManager* mUIManager; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mCurrentInputTypes; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    PlayerInputState* mInputState; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ViewController* mViewController; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RectInt mBiomeAveragingBounds; // 0x0058
    uint8_t pad_0059[0xF]; // 0x0059
    System.Collections.Generic.List<System.Int32> mActiveBiomeTileRatios; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<System.Single> mBiomeTileRatios; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<System.Int32> mActiveBiomeTileDirs; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<UnityEngine.Vector3> mBiomeTileDirs; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    int8_t mCurrentPrimaryBiome; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    AveragedTimeTable* mAveragedTimeTable; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Vector3 mAverageBiomeOffset; // 0x0098
    uint8_t pad_0099[0xB]; // 0x0099
    float mRemoteFollowModifier; // 0x00A4

    // Methods
    void .ctor(uint64_t onlinePlayerID, int8_t localPlayerIndex, int8_t clientIndex, Camera* camera, GameObject* uiGameObject, bool isLocal);  // RVA: 0x2FD5B0
    void GenerateBiomeAvergaingVectors();  // RVA: 0x2FAFC0
    void SetClientIndex(int8_t clientIndex);  // RVA: 0x2FB570
    void Reset();  // RVA: 0x2FB250
    void Respawn(float delay, GameTile* spawnTarget);  // RVA: 0x2FB4C0
    void UpdateRespawn(float dt);  // RVA: 0x2FD100
    void Update(float deltaTime);  // RVA: 0x2FD1D0
    void UpdateCameraPosition(float dt);  // RVA: 0x2FC860
    void UpdateCameraBounds(bool titleScreen);  // RVA: 0x2FB580
    void ResetRemoteFollowModifier();  // RVA: 0x2FB240
    float UpdateRemoteFollowModifier();  // RVA: 0x2FC920
    float GetFollowModifier();  // RVA: 0x2FB1F0
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<PlayerController> <>9__40_0;


    // Methods
    static void .cctor();  // RVA: 0x3066D0
    void .ctor();  // RVA: 0x2C1750
    int32_t <AddPlayerController>b__40_0(PlayerController* x, PlayerController* y);  // RVA: 0x306670
};

// Namespace: <global>
class PlayerManager : public MonoBehaviour
{
public:
    // Static fields
    // static PlayerManager* instance;
    // static int8_t INVALID_CLIENT_INDEX;
    // static int8_t INVALID_PLAYER_INDEX;
    // static int8_t PRIMARY_LOCAL_PLAYER_INDEX;
    // static int32_t mMaxPlayers;
    // static int32_t mMaxClients;
    // static int32_t mMaxLocalPlayers;

    uint8_t pad_0000[0x20]; // 0x0000
    int32_t mNumLocalPlayers; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* mPlayerCameraPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* mPlayerUIPrefab; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* mMiniTileRendererPrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* mSpriteRendererPrefab; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* mShadowRendererPrefab; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* mSurfaceRendererPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* mOverlayRendererPrefab; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    PlayerController* mPrimaryLocalPlayerController; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    PlayerController[][] mLocalPlayerControllers; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<PlayerController> mPlayerControllers; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.Dictionary<System.SByte,PlayerController> mPlayerControllerMap; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.Dictionary<System.UInt64,System.SByte> mClientIndexMap; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.Dictionary<System.SByte,System.SByte> mActiveClientIndexMap; // 0x0088

    // Methods
    void Awake();  // RVA: 0x2FDBC0
    void Clear();  // RVA: 0x2FDD20
    int32_t GetPlayerControllerCount();  // RVA: 0x2FEF90
    PlayerController* GetPlayerControllerAtIndex(int32_t index);  // RVA: 0x2FEF30
    PlayerController* GetPlayerController(int8_t playerIndex);  // RVA: 0x2FF0C0
    PlayerController* GetPlayerController(uint64_t onlinePlayerID, int8_t localPlayerIndex);  // RVA: 0x2FEFD0
    PlayerController* GetLocalPlayerController(int8_t localPlayerIndex);  // RVA: 0x2FEC80
    int8_t GetNextFreeLocalPlayerIndex();  // RVA: 0x2FECB0
    PlayerController* GetLocalPlayerControllerByOrder(int8_t orderIndex);  // RVA: 0x2FEBF0
    static int8_t GetPlayerIndex(int8_t clientIndex, int8_t localPlayerIndex);  // RVA: 0x2FF130
    void UpdateLocalClientIndexes(uint64_t localOnlinePlayerID, int8_t clientIndex);  // RVA: 0x2FFA30
    void ReserveClientIndex(uint64_t onlinePlayerID, int8_t clientIndex);  // RVA: 0x2FF4A0
    int8_t GetClientIndex(uint64_t onlinePlayerID);  // RVA: 0x2FEA80
    bool IsClientIndexActive(int8_t clientIndex);  // RVA: 0x2FF140
    void RemoveActiveClientIndex(int8_t clientIndex);  // RVA: 0x2FF1C0
    void AddActiveClientIndex(int8_t clientIndex);  // RVA: 0x2FD8F0
    PlayerController* CreateLocalPlayerController(uint64_t onlinePlayerID, int8_t localPlayerIndex, int8_t clientIndex);  // RVA: 0x2FE120
    PlayerController* CreateNetworkPlayerController(uint64_t onlinePlayerID, int8_t localPlayerIndex, int8_t clientIndex);  // RVA: 0x2FE490
    PlayerController* CreatePlayerController(uint64_t onlinePlayerID, int8_t localPlayerIndex, int8_t clientIndex);  // RVA: 0x2FE6B0
    void AddPlayerController(PlayerController* playerController);  // RVA: 0x2FD9A0
    void RemovePlayerController(PlayerController* playerController);  // RVA: 0x2FF2F0
    void RemovePlayer(PlayerController* playerController);  // RVA: 0x2FF3A0
    Player* FindPlayer(int8_t playerIndex);  // RVA: 0x2FE7D0
    void SetUIState(UIState newState);  // RVA: 0x2FF510
    void UpdateCameraBounds();  // RVA: 0x2FF5E0
    bool GameTileWithinPlayerBounds(GameTile* gameTile, int32_t bounds);  // RVA: 0x2FE980
    Player* GameTileWithinPlayerBounds(GameTile* gameTile, int32_t bounds, int32_t closestMaxAxisDist);  // RVA: 0x2FE850
    float GetNumNearbyPlayers(int16_t levelId, Vector3 position, float maxDistStart, float maxDistEnd, int32_t excludePlayer);  // RVA: 0x2FED00
    float ClosestLocalPlayerDist(int32_t levelId, Vector2 position, Player* closestPlayer);  // RVA: 0x2FDFB0
    int8_t get_LocalClientIndex();  // RVA: 0x2FFD00
    void .ctor();  // RVA: 0x2FFB90
};

// Namespace: <global>
class PlayerSpriteHelper
{
public:
    // Static fields
    // static System.Collections.Generic.List<System.String> sHairstyles;
    // static System.Collections.Generic.List<UnityEngine.Color32> sHairColours;
    // static System.Collections.Generic.List<UnityEngine.Color32> sSkinColours;

    uint8_t pad_0000[0x10]; // 0x0000
    String[][] mReferenceTorsoSpriteNames; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool mAnimTest; // 0x0018
    bool mUseFemaleTorso; // 0x0019
    uint8_t pad_001A[0x6]; // 0x001A
    AnimatedSpriteObject* mAnimStateObject; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AnimState* mAnimStateHead; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimState* mAnimStateLegs; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AnimState* mAnimStateTorso; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* mHair; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Il2CppString* mTorso; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Il2CppString* mLegs; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Color32 mHairColour; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    Color32 mSkinColour; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    Il2CppString* mHeadEquip; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Il2CppString* mTorsoEquip; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Il2CppString* mLegsEquip; // 0x0070

    // Methods
    void Initialise(AnimatedSpriteObject* animStateObject);  // RVA: 0x2FFE10
    void SetCharacterSettings(CharacterSettingsTable characterSettings, bool setEquipment);  // RVA: 0x300500
    void SetCharacterEquipment(CharacterSettingsTable characterSettings);  // RVA: 0x300490
    Il2CppString* GetEquipmentSpriteName(Il2CppString* itemName);  // RVA: 0x2FFD40
    void RefreshSpriteLayers();  // RVA: 0x3001E0
    void SetSkinColour(Color32 colour);  // RVA: 0x3010B0
    void SetHairColour(Color32 colour);  // RVA: 0x3009F0
    void SetTorsoColour(Color32 colour);  // RVA: 0x301200
    void SetLegsColour(Color32 colour);  // RVA: 0x300D10
    void SetAllColour(Color32 colour);  // RVA: 0x300300
    void SetHair(Il2CppString* name);  // RVA: 0x300AB0
    void SetTorso(Il2CppString* name);  // RVA: 0x301570
    void SetLegs(Il2CppString* name);  // RVA: 0x300FB0
    void SetTorsoGender(bool female);  // RVA: 0x301490
    void SetHeadEquip(Il2CppString* name);  // RVA: 0x300B70
    void SetTorsoEquip(Il2CppString* name);  // RVA: 0x3012D0
    void SetLegsEquip(Il2CppString* name);  // RVA: 0x300DE0
    void RenderUI(SpritesRenderer* renderer, Vector2 facing);  // RVA: 0x300230
    void .ctor();  // RVA: 0x302050
    static void .cctor();  // RVA: 0x301670
};

// Namespace: <global>
class Quest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mUniqueId; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    NPC* mNPC; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* mQuestName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    QuestDescriptor* mQuestDescriptor; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t mState; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    bool mUnread; // 0x0034

    // Methods
    void Initialise(int32_t uniqueId, NPC* npc, Il2CppString* questName, int32_t state);  // RVA: 0x303680
    bool Equals(NPC* npc, Il2CppString* questName);  // RVA: 0x3034C0
    bool Equals(int32_t uniqueId);  // RVA: 0x3034B0
    StringBuilder* GetFloatingText(Il2CppString* questStateString);  // RVA: 0x3034E0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<Quest> <>9__18_0;


    // Methods
    static void .cctor();  // RVA: 0x306740
    void .ctor();  // RVA: 0x2C1750
    int32_t <Sort>b__18_0(Quest* a, Quest* b);  // RVA: 0x3066A0
};

// Namespace: <global>
class QuestManager
{
public:
    // Static fields
    // static int32_t cLocalUniqueIdOffset;

    uint8_t pad_0000[0x10]; // 0x0000
    SimplePool<Quest> mQuestPool; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<Quest> mSortedQuests; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t mNextQuestId; // 0x0020

    // Methods
    void Initialise();  // RVA: 0x302570
    void Clear();  // RVA: 0x302570
    void Save(Stream* stream);  // RVA: 0x302D40
    void Load(Stream* stream, int32_t version);  // RVA: 0x302870
    void Log();  // RVA: 0x302990
    Quest* AddQuest(int32_t uniqueId, NPC* npc, Il2CppString* questName, int32_t state);  // RVA: 0x302240
    void PostLoadNPC(NPC* npc, QuestDescriptor* questDescriptor, int32_t state, int32_t uniqueId);  // RVA: 0x302B00
    int32_t GetNextQuestId();  // RVA: 0x302670
    void UpdateQuestIdFromHost(int32_t localUniqueId, int32_t hostUniqueId, Player* localPlayer);  // RVA: 0x302F60
    Quest* GetQuest(NPC* npc, Il2CppString* questName);  // RVA: 0x302780
    bool UpdateQuestState(NPC* npc, Il2CppString* questName, int32_t newState);  // RVA: 0x303050
    void ClearQuestReadStates(int32_t uniqueId);  // RVA: 0x3024D0
    bool RemoveQuest(NPC* npc, Il2CppString* questName);  // RVA: 0x302B80
    void UpdateQuest(NPC* npc, Il2CppString* questName, int32_t newState);  // RVA: 0x3033B0
    void Sort();  // RVA: 0x302DD0
    Quest* GetQuest(int32_t uniqueId);  // RVA: 0x3026E0
    int32_t UnreadQuestCount(Player* player);  // RVA: 0x302EF0
    bool IsQuestRead(int32_t uniqueId, Player* player);  // RVA: 0x302850
    void ReadQuest(int32_t uniqueId, Player* player);  // RVA: 0x302B60
    void .ctor();  // RVA: 0x3033E0
};

// Namespace: <global>
class Room : public RoomBase
{
public:
    // Static fields
    // static Random* sRandom;
    // static System.Collections.Generic.List<GameTile> sWorkingGameTiles;

    uint8_t pad_0000[0x88]; // 0x0000
    bool mHasDoor; // 0x0088
    bool mHasLight; // 0x0089
    bool mInsufficientFloor; // 0x008A
    uint8_t pad_008B[0x5]; // 0x008B
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mLightTileIndices; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    int32_t adjColOffset; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    int32_t adjRowOffset; // 0x009C

    // Methods
    void Initialise();  // RVA: 0x303D30
    void Place(Level* level, GameTile* gameTile);  // RVA: 0x303EF0
    bool IsNearbyTileModified(int32_t col, int32_t row);  // RVA: 0x303D40
    void ValidateClear();  // RVA: 0x304170
    bool ValidateTile(GameTile* currentTile);  // RVA: 0x304360
    void Validate(Bed* bed);  // RVA: 0x3048A0
    void ValidateRoom();  // RVA: 0x3041E0
    System.Collections.Generic.List<GameTile> GetRoomGameTiles(bool shuffle);  // RVA: 0x303900
    static void ShuffleWorkingGameTiles();  // RVA: 0x303FC0
    void .ctor();  // RVA: 0x304A10
    static void .cctor();  // RVA: 0x304930
};

// Namespace: <global>
class AnimatedSpriteCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F1520
};

// Namespace: <global>
class PivotPointCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2FA450
};

// Namespace: <global>
class AnimatedSpriteDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    AnimatedSpriteCollection* animatedSpriteCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PivotPointCollection* pivotPointCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SpriteDatabase* spriteDatabase; // 0x0038

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F1620
    void Initialise();  // RVA: 0x2F16E0
    AnimatedSpriteDescriptor* Get(Il2CppString* name);  // RVA: 0x2F15C0
    PivotPointDescriptor* GetPivotPointDescriptor(Il2CppString* name);  // RVA: 0x2F1560
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
class AnimSetCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F1320
};

// Namespace: <global>
class AnimLookupCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F12E0
};

// Namespace: <global>
class AnimationDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    AnimSetCollection* animSetCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AnimLookupCollection* animLookupCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,AnimLookupDescriptor> animLookupDictionary; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteDatabase* spriteDatabase; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AnimatedSpriteDatabase* animatedSpriteDatabase; // 0x0048

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F1970
    void Initialise();  // RVA: 0x2F1A30
    AnimLookupDescriptor* Get(Il2CppString* name);  // RVA: 0x2F1900
    AnimSetDescriptor* GetAnimSetDescriptor(Il2CppString* name);  // RVA: 0x2F18A0
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
class MovementBehaviourDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float followDist; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float followDistRoomModifier; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float minFollowDist; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float maxFollowDist; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float FollowDistRetreatModifier; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float followStrafeModifier; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float maintainDistModifier; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float ignoreDist; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float ignoreLOSDist; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float ignoreTime; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float retargetTime; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float retargetDistForced; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool canUseTeleporters; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t walkDistMin; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t walkDistMax; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float randomTimeMin; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float randomTimeMax; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float idleTimeMin; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float idleTimeMax; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float simpleIdleChance; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    float idleDirChance; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    float idleDirModifier; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    float blockedTime; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float fleeThreshold; // 0x007C
    uint8_t pad_007D[0x3]; // 0x007D
    float pathFindLerp; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    float heightOffset; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float floatModifier; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool openDoors; // 0x008C
    bool freezeToAttack; // 0x008D
    uint8_t pad_008E[0x2]; // 0x008E
    float chargeDistanceThreshold; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    float chargeTime; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float lungeTime; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float lungeSpeedModifier; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float aimTime; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t burstCount; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float burstCooldown; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float attackCooldownModifier; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    float attackCooldownOffset; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    PathfindingType pathType; // 0x00B4

    // Methods
    void Initialise();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x2FA0B0
};

// Namespace: <global>
class PhaseTransition
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* behaviourPhase; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    RangeFloat phaseTime; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RangeFloat age; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RangeFloat health; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RangeFloat mobs; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    BehaviourPhaseDescriptor* mBehaviourPhaseDescriptor; // 0x0038

    // Methods
    void Initialise(BehaviourDatabase* behaviourDatabase);  // RVA: 0x2FA320
    BehaviourPhaseDescriptor* Evaluate(DynamicItemState* itemState, BehaviourPhaseController* phaseController);  // RVA: 0x2FA220
    void .ctor();  // RVA: 0x2FA3A0
};

// Namespace: <global>
class BehaviourPhaseDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* behaviour; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<StringFloatPair> floatProperties; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<StringPair> stringProperties; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<PhaseTransition> transitions; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    MovementBehaviourDescriptor* mMovementBehaviourDescriptor; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.Dictionary<System.String,System.Single> mFloatProperties; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.Dictionary<System.String,System.String> mStringProperties; // 0x0050

    // Methods
    void Initialise(BehaviourDatabase* behaviourDatabase);  // RVA: 0x2F25B0
    BehaviourPhaseDescriptor* Evaluate(DynamicItemState* itemState, BehaviourPhaseController* phaseController);  // RVA: 0x2F2310
    float GetFloatProperty(Il2CppString* key, float defaultValue);  // RVA: 0x2F24A0
    Il2CppString* GetStringProperty(Il2CppString* key, Il2CppString* defaultValue);  // RVA: 0x2F2530
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class MovementBehaviourCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2FA070
};

// Namespace: <global>
class BehaviourDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    MovementBehaviourCollection* movementBehaviourCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DescriptorCollection<BehaviourPhaseDescriptor> behaviourPhaseCollection; // 0x0030

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F20E0
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x2F1FB0
    void Initialise();  // RVA: 0x2F21A0
    MovementBehaviourDescriptor* GetMovementBehaviourDescriptor(Il2CppString* name);  // RVA: 0x2F2080
    BehaviourPhaseDescriptor* GetBehaviourPhaseDescriptor(Il2CppString* name);  // RVA: 0x2F2020
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
struct TimeTableKeyFrameParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Color ambientColour; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    Color tintColour; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    Color fogColour; // 0x0030
    uint8_t pad_0031[0xF]; // 0x0031
    float fogModifier; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float lightIntensity; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float visibilityModifier; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float spawnModifier; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float maxEnemiesModifier; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float critterSpawnModifier; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float maxCrittersModifier; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float followModifier; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float retreatModifier; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float fleeValue; // 0x0064

    // Methods
    void Clear();  // RVA: 0x305DF0
    void Add(TimeTableKeyFrameParams second, float modifier);  // RVA: 0x305BF0
    TimeTableKeyFrameParams Lerp(TimeTableKeyFrameParams second, float lerpVal);  // RVA: 0x305E20
};

// Namespace: <global>
struct TimeTableParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float spawnChance; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float maxEnemies; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float critterSpawnChance; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float maxCritters; // 0x001C

    // Methods
    void Clear();  // RVA: 0x306510
    void Add(TimeTableParams second, float modifier);  // RVA: 0x3064C0
};

// Namespace: <global>
class TimeTableKeyFrameSpawnGroups
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* critterSpawnGroupName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.String> spawnGroups; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpawnGroupDescriptor* critterSpawnGroupDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<SpawnGroupDescriptor> spawnGroupDescriptors; // 0x0028

    // Methods
    void Initialise(SpawnDatabase* spawnDatabase);  // RVA: 0x306290
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TimeTableKeyFrame
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float time; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    TimeTableKeyFrameParams keyFrameParams; // 0x0014
    uint8_t pad_0015[0x5B]; // 0x0015
    TimeTableKeyFrameSpawnGroups* spawnGroups; // 0x0070

    // Methods
    void Initialise(SpawnDatabase* spawnDatabase, TimeTableDescriptor* timeTableDescriptor);  // RVA: 0x3064A0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class AveragedTimeTable
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TimeTableParams timeTableParams; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    TimeTableKeyFrameParams keyFrameParams; // 0x0020

    // Methods
    void Clear();  // RVA: 0x2F1F80
    void AddParams(TimeTableDescriptor* timeTableDescriptor, float modifier);  // RVA: 0x2F1DB0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TimeTableDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TimeTableParams timeTableParams; // 0x0020
    uint8_t pad_0021[0xF]; // 0x0021
    TimeTableKeyFrame[][] keyFrames; // 0x0030

    // Methods
    void Initialise(SpawnDatabase* spawnDatabase);  // RVA: 0x305B50
    System.ValueTuple<TimeTableKeyFrame,TimeTableKeyFrame> GetKeyFrames(float currentTime, float maxTime);  // RVA: 0x305960
    float CalculateLerpVal(TimeTableKeyFrame* first, TimeTableKeyFrame* second, float currentTime, float maxTime);  // RVA: 0x3054A0
    TimeTableKeyFrameSpawnGroups* GetKeyFrameSpawnGroups();  // RVA: 0x305820
    TimeTableKeyFrameParams GetKeyFrameBlendParams();  // RVA: 0x3054E0
    float GetKeyFrameFollowModifier();  // RVA: 0x305730
    float GetKeyFrameFleeValue();  // RVA: 0x305640
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class TimeTableCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x305460
};

// Namespace: <global>
class CalendarDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    TimeTableCollection* timeTableCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SpawnDatabase* spawnDatabase; // 0x0030

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F2CB0
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x2F2C00
    void Initialise();  // RVA: 0x2F2D30
    TimeTableDescriptor* GetTimeTableDescriptor(Il2CppString* name);  // RVA: 0x2F2C50
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
struct StringFloatPair
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* key; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float value; // 0x0018

    // Methods
    void .ctor(Il2CppString* _key, float _value);  // RVA: 0x304B10
};

// Namespace: <global>
class ParticleDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* spriteName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float lifetime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float fadeInTime; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float fadeOutTime; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float renderDepth; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool groundCollision; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteDescriptor* mSpriteDescriptor; // 0x0040

    // Methods
    void Initialise(EffectDatabase* database);  // RVA: 0x2FA1D0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class EmitterParticleDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* particleName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Color32 colourMin; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Color32 colourMax; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float primaryBlend; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ParticleDescriptor* mParticleDescriptor; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x2F3980
};

// Namespace: <global>
class EmitterDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float particlesPerSecond; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float particlesPerSecondVariance; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float velocityMin; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float velocityMax; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float initialTime; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float lifetime; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float gravity; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float spawnOffsetNormalMin; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float spawnOffsetNormalMax; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float spawnOffsetPerpendicularMax; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float spawnOffsetVelocityMin; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float spawnOffsetVelocityMax; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    Vector3 direction; // 0x0050
    uint8_t pad_0051[0xB]; // 0x0051
    Vector3 spawnOffset; // 0x005C
    uint8_t pad_005D[0xB]; // 0x005D
    Vector3 spawnOffsetRange; // 0x0068
    uint8_t pad_0069[0xB]; // 0x0069
    float directionBlend; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    System.Collections.Generic.List<EmitterParticleDetails> particles; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    bool applySpawnOffset; // 0x0080
    bool applySpawnOffsetRange; // 0x0081
    bool applySpawnOffsetVelocity; // 0x0082

    // Methods
    void Initialise(EffectDatabase* database);  // RVA: 0x2F3660
    void .ctor();  // RVA: 0x2F3960
};

// Namespace: <global>
class EffectDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    String[][] emitters; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* light; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool anchorParticles; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<EmitterDescriptor> mEmitters; // 0x0038

    // Methods
    void Initialise(EffectDatabase* database);  // RVA: 0x2F3440
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class ParticleCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2FA190
};

// Namespace: <global>
class EmitterCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F3620
};

// Namespace: <global>
class EffectCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F2F10
};

// Namespace: <global>
class EffectDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    SpriteDatabase* spriteDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ParticleCollection* particleCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    EmitterCollection* emitterCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    EffectCollection* effectCollection; // 0x0040

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F30D0
    void Initialise();  // RVA: 0x2F31D0
    ParticleDescriptor* GetParticle(Il2CppString* name);  // RVA: 0x2F3070
    EmitterDescriptor* GetEmitter(Il2CppString* name);  // RVA: 0x2F3010
    EffectDescriptor* GetEffect(int32_t id);  // RVA: 0x2F2F50
    EffectDescriptor* GetEffect(Il2CppString* name);  // RVA: 0x2F2FB0
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
struct CategoryType
{
public:
    // Static fields
    // static CategoryType None;
    // static CategoryType Weapon;
    // static CategoryType Projectile;
    // static CategoryType Equipment;
    // static CategoryType Building;
    // static CategoryType Material;
    // static CategoryType Misc;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct WeaponType
{
public:
    // Static fields
    // static WeaponType None;
    // static WeaponType Melee;
    // static WeaponType Ranged;
    // static WeaponType Magic;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct AttachmentType
{
public:
    // Static fields
    // static AttachmentType None;
    // static AttachmentType Melee;
    // static AttachmentType Ranged;
    // static AttachmentType Magic;
    // static AttachmentType Gun;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ProjectileType
{
public:
    // Static fields
    // static ProjectileType None;
    // static ProjectileType Bullet;
    // static ProjectileType Arrow;
    // static ProjectileType Magic;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemPropertyFlags
{
public:
    // Static fields
    // static ItemPropertyFlags None;
    // static ItemPropertyFlags Collidable;
    // static ItemPropertyFlags Stackable;
    // static ItemPropertyFlags Placeable;
    // static ItemPropertyFlags Fixture;
    // static ItemPropertyFlags Door;
    // static ItemPropertyFlags Interactable;
    // static ItemPropertyFlags Fitting;
    // static ItemPropertyFlags Water;
    // static ItemPropertyFlags Usable;
    // static ItemPropertyFlags CollidableFlying;
    // static ItemPropertyFlags Till;
    // static ItemPropertyFlags Fence;
    // static ItemPropertyFlags BlocksTileBehind;
    // static ItemPropertyFlags Floor;
    // static ItemPropertyFlags DestroyOnUse;
    // static ItemPropertyFlags SinglePlace;
    // static ItemPropertyFlags UseOnCollect;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemInteractionFlags
{
public:
    // Static fields
    // static ItemInteractionFlags None;
    // static ItemInteractionFlags Interactable;
    // static ItemInteractionFlags Choppable;
    // static ItemInteractionFlags Diggable;
    // static ItemInteractionFlags Attackable;
    // static ItemInteractionFlags Unplaceable;
    // static ItemInteractionFlags UnplaceableDestroy;
    // static ItemInteractionFlags Crafting;
    // static ItemInteractionFlags MultiHit;
    // static ItemInteractionFlags Tillable;
    // static ItemInteractionFlags Fertilisable;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemRenderFlags
{
public:
    // Static fields
    // static ItemRenderFlags None;
    // static ItemRenderFlags Tileable;
    // static ItemRenderFlags Light;
    // static ItemRenderFlags LightBlocker;
    // static ItemRenderFlags HeightFade;
    // static ItemRenderFlags DoubleWidth;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct PlaceablePropertyFlags
{
public:
    // Static fields
    // static PlaceablePropertyFlags None;
    // static PlaceablePropertyFlags TilledOnly;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemFlags
{
public:
    // Static fields
    // static ItemFlags None;
    // static ItemFlags Collidable;
    // static ItemFlags Tileable;
    // static ItemFlags Shadow;
    // static ItemFlags Light;
    // static ItemFlags Stackable;
    // static ItemFlags Placeable;
    // static ItemFlags Fixture;
    // static ItemFlags Door;
    // static ItemFlags Interactable;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemSerialisationFlags
{
public:
    // Static fields
    // static ItemSerialisationFlags None;
    // static ItemSerialisationFlags Age;
    // static ItemSerialisationFlags ChildSpawnTimer;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemFloatParameterTag
{
public:
    // Static fields
    // static ItemFloatParameterTag None;
    // static ItemFloatParameterTag Health;
    // static ItemFloatParameterTag Radius;
    // static ItemFloatParameterTag Height;
    // static ItemFloatParameterTag Defense;
    // static ItemFloatParameterTag ContactDamage;
    // static ItemFloatParameterTag ContactRange;
    // static ItemFloatParameterTag ContactKnockback;
    // static ItemFloatParameterTag UnplaceDamage;
    // static ItemFloatParameterTag ChopDamage;
    // static ItemFloatParameterTag DigDamage;
    // static ItemFloatParameterTag Damage;
    // static ItemFloatParameterTag Range;
    // static ItemFloatParameterTag Knockback;
    // static ItemFloatParameterTag AttackSpeed;
    // static ItemFloatParameterTag ProjectileSpeed;
    // static ItemFloatParameterTag MoveSpeed;
    // static ItemFloatParameterTag Recoil;
    // static ItemFloatParameterTag Angle;
    // static ItemFloatParameterTag ProjectileOffset;
    // static ItemFloatParameterTag EffectOffsetX;
    // static ItemFloatParameterTag EffectOffsetY;
    // static ItemFloatParameterTag EffectOffsetZ;
    // static ItemFloatParameterTag HeightOffset;
    // static ItemFloatParameterTag EmissiveFactor;
    // static ItemFloatParameterTag WeaponContactRange;
    // static ItemFloatParameterTag WeaponDamageModifier;
    // static ItemFloatParameterTag AOERadius;
    // static ItemFloatParameterTag AnimSpeed;
    // static ItemFloatParameterTag AttackAnimSpeed;
    // static ItemFloatParameterTag KnockbackModifier;
    // static ItemFloatParameterTag CursorOffset;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemPlaceableFloatParameterTag
{
public:
    // Static fields
    // static ItemPlaceableFloatParameterTag None;
    // static ItemPlaceableFloatParameterTag FadeInTime;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemPlaceableColourParameterTag
{
public:
    // Static fields
    // static ItemPlaceableColourParameterTag None;
    // static ItemPlaceableColourParameterTag Primary;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemWeaponFloatParameterTag
{
public:
    // Static fields
    // static ItemWeaponFloatParameterTag None;
    // static ItemWeaponFloatParameterTag Mana;
    // static ItemWeaponFloatParameterTag CatchDamage;
    // static ItemWeaponFloatParameterTag Accuracy;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemSurfaceFloatParameterTag
{
public:
    // Static fields
    // static ItemSurfaceFloatParameterTag None;
    // static ItemSurfaceFloatParameterTag Fertiliser;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemStatParameterTag
{
public:
    // Static fields
    // static ItemStatParameterTag None;
    // static ItemStatParameterTag Health;
    // static ItemStatParameterTag Mana;
    // static ItemStatParameterTag HealthRegen;
    // static ItemStatParameterTag ManaRegen;
    // static ItemStatParameterTag IncreaseMaxHealth;
    // static ItemStatParameterTag IncreaseMaxMana;
    // static ItemStatParameterTag IncreaseInventory;
    // static ItemStatParameterTag MoveSpeed;
    // static ItemStatParameterTag AttackSpeed;
    // static ItemStatParameterTag Attack;
    // static ItemStatParameterTag ArmourPiercing;
    // static ItemStatParameterTag CriticalHit;
    // static ItemStatParameterTag Defense;
    // static ItemStatParameterTag NightVision;
    // static ItemStatParameterTag Nemesis;
    // static ItemStatParameterTag MeleeAttack;
    // static ItemStatParameterTag RangedAttack;
    // static ItemStatParameterTag MagicAttack;
    // static ItemStatParameterTag Knockback;
    // static ItemStatParameterTag Steadfast;
    // static ItemStatParameterTag ContactDamage;
    // static ItemStatParameterTag MaxStats;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemConsumableEventParameterTag
{
public:
    // Static fields
    // static ItemConsumableEventParameterTag None;
    // static ItemConsumableEventParameterTag Teleport;
    // static ItemConsumableEventParameterTag Lore;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemStringParameterTag
{
public:
    // Static fields
    // static ItemStringParameterTag None;
    // static ItemStringParameterTag Effect;
    // static ItemStringParameterTag MovementBehaviour;
    // static ItemStringParameterTag Weapon;
    // static ItemStringParameterTag ShadowSprite;
    // static ItemStringParameterTag InteractableSprite;
    // static ItemStringParameterTag Light;
    // static ItemStringParameterTag Projectile;
    // static ItemStringParameterTag Vendor;
    // static ItemStringParameterTag Totem;
    // static ItemStringParameterTag AlertSprite;
    // static ItemStringParameterTag ImpactEffect;
    // static ItemStringParameterTag DestroyEffect;
    // static ItemStringParameterTag ConsumeEffect;
    // static ItemStringParameterTag CharacterSettings;
    // static ItemStringParameterTag SpawnEffect;
    // static ItemStringParameterTag BehaviourPhase;
    // static ItemStringParameterTag BossLootBag;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ItemIntParameterTag
{
public:
    // Static fields
    // static ItemIntParameterTag None;
    // static ItemIntParameterTag TileHeight;
    // static ItemIntParameterTag TileWidth;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct DamageSource
{
public:
    // Static fields
    // static DamageSource Impact;
    // static DamageSource Contact;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

// Namespace: <global>
class IntProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemIntParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2F3F80
    void .ctor(ItemIntParameterTag _tag, int32_t _value);  // RVA: 0x2F4210
};

// Namespace: <global>
class FloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemFloatParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2F3F80
    void .ctor(ItemFloatParameterTag _tag, float _value);  // RVA: 0x2F3F40
};

// Namespace: <global>
class PlaceableFloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemPlaceableFloatParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2F3F80
    void .ctor(ItemPlaceableFloatParameterTag _tag, float _value);  // RVA: 0x2F3F40
};

// Namespace: <global>
class PlaceableColourProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemPlaceableColourParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    Color32 value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2FA510
    void .ctor(ItemPlaceableColourParameterTag _tag, Color32 _value);  // RVA: 0x2FA4D0
};

// Namespace: <global>
class WeaponFloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemWeaponFloatParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2F3F80
    void .ctor(ItemWeaponFloatParameterTag _tag, float _value);  // RVA: 0x2F3F40
};

// Namespace: <global>
class SurfaceFloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemSurfaceFloatParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x2F3F80
    void .ctor(ItemSurfaceFloatParameterTag _tag, float _value);  // RVA: 0x2F3F40
};

// Namespace: <global>
class ConsumableFloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemStatParameterTag statTag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float time; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class ConsumableEventProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemConsumableEventParameterTag eventTag; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* value; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class StringProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemStringParameterTag tag; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* value; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x304B40
    void .ctor(ItemStringParameterTag _tag, Il2CppString* _value);  // RVA: 0x2CCAC0
};

// Namespace: <global>
class SpawnProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t minStack; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t maxStack; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float chance; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x304A80
    void .ctor(Il2CppString* _name, int32_t _minStack, int32_t _maxStack, float _chance);  // RVA: 0x304A20
};

// Namespace: <global>
class ItemDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* typeName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CategoryType category; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* iconName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* droppedName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<System.String> renderNames; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Il2CppString* shadowName; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Item* placeablePreview; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Color32 colorLookup; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    bool autoValue; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t value; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t maxStack; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    Il2CppString* displayName; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<System.String> displayDescriptions; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<ItemPropertyFlags> itemProperties; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    int32_t itemPropertyFlags; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<ItemSerialisationFlags> itemSerialisationProperties; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    int32_t itemSerialisationFlags; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<ItemInteractionFlags> itemInteractionProperties; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t itemInteractionFlags; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<ItemRenderFlags> itemRenderProperties; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    int32_t itemRenderFlags; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.List<FloatProperty> floatProperties; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.Dictionary<ItemFloatParameterTag,System.Single> mFloatPropertyDictionary; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Collections.Generic.List<IntProperty> intProperties; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Collections.Generic.Dictionary<ItemIntParameterTag,System.Int32> mIntPropertyDictionary; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    System.Collections.Generic.List<StringProperty> stringProperties; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    System.Collections.Generic.Dictionary<ItemStringParameterTag,System.String> mStringPropertyDictionary; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    System.Collections.Generic.List<WeaponFloatProperty> weaponFloatProperties; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    System.Collections.Generic.Dictionary<ItemWeaponFloatParameterTag,System.Single> mWeaponFloatPropertyDictionary; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    System.Collections.Generic.List<System.String> nestedDiscoveries; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    System.Collections.Generic.List<System.Int32> nestedDiscoveryIds; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    System.Collections.Generic.List<ConsumableFloatProperty> consumableFloatProperties; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    System.Collections.Generic.List<ConsumableEventProperty> consumableEventProperties; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    AudioLabel* audioSurfaceType; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    AudioEventDataOverride* audioData; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    int32_t type; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    Descriptor* iconDescriptor; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    Descriptor* spriteDescriptor; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Collections.Generic.List<Descriptor> spriteDescriptors; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    Descriptor* droppedDescriptor; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    SpriteDescriptor* shadowDescriptor; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    SpriteDescriptor* interactableSpriteDescriptor; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    SpriteDescriptor* alertSpriteDescriptor; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    Vector3 effectOffset; // 0x0168
    uint8_t pad_0169[0xF]; // 0x0169
    SpriteObjectBase* iconObject; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    SpriteObjectBase* droppedObject; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    float mHeight; // 0x0188
    uint8_t pad_0189[0x3]; // 0x0189
    float mHeightOffset; // 0x018C
    uint8_t pad_018D[0x3]; // 0x018D
    float mRadius; // 0x0190
    uint8_t pad_0191[0x3]; // 0x0191
    float mEmissiveFactor; // 0x0194
    uint8_t pad_0195[0x3]; // 0x0195
    uint8_t mTileHeight; // 0x0198
    uint8_t mTileWidth; // 0x0199
    uint8_t pad_019A[0x6]; // 0x019A
    System.Collections.Generic.List<System.Int32> mSurfaceGroups; // 0x01A0

    // Methods
    void .ctor();  // RVA: 0x2F77B0
    bool HasPropertyFlags(ItemPropertyFlags _itemPropertyFlags);  // RVA: 0x2F6050
    bool HasSerialisationFlags(ItemSerialisationFlags _itemSerialisationFlags);  // RVA: 0x2F6070
    bool HasInteractionFlags(ItemInteractionFlags _itemInteractionFlags);  // RVA: 0x2F6040
    bool HasRenderFlags(ItemRenderFlags _itemRenderFlags);  // RVA: 0x2F6060
    bool HasConsumableEvent(ItemConsumableEventParameterTag eventTag);  // RVA: 0x2F5F90
    void Initialise(ItemDatabase* database);  // RVA: 0x2F6080
    bool IsPlaceable();  // RVA: 0x2F77A0
    static Descriptor* GetRenderDescriptorVerify(ItemDatabase* database, Il2CppString* descriptorName);  // RVA: 0x2F5DA0
    static Descriptor* GetDescriptorVerify(ItemDatabase* database, Il2CppString* descriptorName);  // RVA: 0x2F5B50
    int32_t GetIntProperty(ItemIntParameterTag tag, int32_t defaultValue);  // RVA: 0x2F5CF0
    float GetFloatProperty(ItemFloatParameterTag tag, float defaultValue);  // RVA: 0x2F5C50
    Il2CppString* GetStringProperty(ItemStringParameterTag tag, Il2CppString* defaultValue);  // RVA: 0x2F5E50
    float GetWeaponFloatProperty(ItemWeaponFloatParameterTag tag, float defaultValue);  // RVA: 0x2F5EF0
    float GetPlaceableFloatProperty(ItemPlaceableFloatParameterTag tag, float defaultValue);  // RVA: 0x2F5D90
    float GetSurfaceFloatProperty(ItemSurfaceFloatParameterTag tag, float defaultValue);  // RVA: 0x2F5D90
};

// Namespace: <global>
class TransitionProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float ageThreshold; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemDescriptor* descriptor; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x306610
    void .ctor(Il2CppString* _name, float _ageThreshold);  // RVA: 0x3065C0
    void Initialise(ItemDatabase* database);  // RVA: 0x306520
};

// Namespace: <global>
class PlaceableDescriptor : public ItemDescriptor
{
public:
    uint8_t pad_0000[0x1A8]; // 0x0000
    System.Collections.Generic.List<PlaceablePropertyFlags> placeableProperties; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    int32_t placeablePropertyFlags; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    System.Collections.Generic.List<PlaceableFloatProperty> placeableFloatProperties; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    System.Collections.Generic.Dictionary<ItemPlaceableFloatParameterTag,System.Single> mPlaceableFloatPropertyDictionary; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    System.Collections.Generic.List<PlaceableColourProperty> placeableColourProperties; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    System.Collections.Generic.Dictionary<ItemPlaceableColourParameterTag,UnityEngine.Color32> mPlaceableColourPropertyDictionary; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    System.Collections.Generic.List<SpawnProperty> spawnList; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    System.Collections.Generic.List<RewardSpawnGroup> spawnGroups; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    System.Collections.Generic.List<System.String> supercedesList; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    System.Collections.Generic.List<System.Int32> supercedesIdList; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    TransitionProperty* transitionState; // 0x01F8

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x2FA600
    bool IsPlaceable();  // RVA: 0x2FAD60
    bool HasPlaceablePropertyFlags(PlaceablePropertyFlags _placeablePropertyFlags);  // RVA: 0x2FA5F0
    float GetPlaceableFloatProperty(ItemPlaceableFloatParameterTag tag, float defaultValue);  // RVA: 0x2FA550
    bool TryGetPlaceableColourProperty(ItemPlaceableColourParameterTag tag, Color32 value);  // RVA: 0x2FADE0
    ItemState GetPlacementType();  // RVA: 0x2FA5E0
    void .ctor();  // RVA: 0x2FAE50
};

// Namespace: <global>
class FlatSurfaceDescriptor : public PlaceableDescriptor
{
public:
    uint8_t pad_0000[0x200]; // 0x0000
    System.Collections.Generic.List<SurfaceFloatProperty> surfaceFloatProperties; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    System.Collections.Generic.Dictionary<ItemSurfaceFloatParameterTag,System.Single> mSurfaceFloatPropertyDictionary; // 0x0208

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x2F3D80
    float GetSurfaceFloatProperty(ItemSurfaceFloatParameterTag tag, float defaultValue);  // RVA: 0x2F3CE0
    void .ctor();  // RVA: 0x2F3EC0
};

// Namespace: <global>
class VegetationDescriptor : public PlaceableDescriptor
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F1510
};

// Namespace: <global>
class VegetationProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float ageThreshold; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x306AB0
    void .ctor(Il2CppString* _name, float _ageThreshold);  // RVA: 0x3065C0
};

// Namespace: <global>
class VegetationGroupItemDescriptor : public PlaceableDescriptor
{
public:
    uint8_t pad_0000[0x200]; // 0x0000
    System.Collections.Generic.List<VegetationProperty> vegetationStates; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    System.Collections.Generic.List<ItemDescriptor> vegetationDescriptors; // 0x0208

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x306830
    void .ctor();  // RVA: 0x306A30
};

// Namespace: <global>
class AnimalDescriptor : public PlaceableDescriptor
{
public:
    uint8_t pad_0000[0x200]; // 0x0000
    Vector2 childSpawnTime; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    Il2CppString* childSpawn; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    Il2CppString* materialSpawn; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    float materialSpawnChance; // 0x0218
    uint8_t pad_0219[0x7]; // 0x0219
    PlaceableDescriptor* childSpawnDescriptor; // 0x0220

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x2F13A0
    ItemState GetPlacementType();  // RVA: 0x2C6300
    void .ctor();  // RVA: 0x2F1510
};

// Namespace: <global>
class EnemyWeaponProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* behaviour; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float weight; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float dropChance; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2F3B50
    void .ctor(Il2CppString* _name, Il2CppString* _behaviour, float _weight, float _dropChance);  // RVA: 0x2F3BD0
};

// Namespace: <global>
class EnemyDescriptor : public PlaceableDescriptor
{
public:
    uint8_t pad_0000[0x200]; // 0x0000
    System.Collections.Generic.List<EnemyWeaponProperty> weaponList; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    float mTotalWeaponListWeight; // 0x0208
    uint8_t pad_0209[0x3]; // 0x0209
    float mAudioIntensity; // 0x020C

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x2F3A20
    ItemState GetPlacementType();  // RVA: 0x2C6300
    void .ctor();  // RVA: 0x2F1510
};

// Namespace: <global>
class BossDescriptor : public EnemyDescriptor
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F1510
};

// Namespace: <global>
class StatFloatProperty
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemStatParameterTag tag; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float value; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x304AE0
    void .ctor(ItemStatParameterTag _tag, float _value);  // RVA: 0x2F3F40
};

// Namespace: <global>
class EquipmentDescriptor : public ItemDescriptor
{
public:
    uint8_t pad_0000[0x1A8]; // 0x0000
    System.Collections.Generic.List<StatFloatProperty> equipmentStats; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    Il2CppString* animNamePrefix; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    int32_t slot; // 0x01B8

    // Methods
    void .ctor();  // RVA: 0x2F3C80
};

// Namespace: <global>
class ConsumableDescriptor : public ItemDescriptor
{
public:

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x2F2EF0
    void .ctor();  // RVA: 0x2F2F00
};

// Namespace: <global>
class WeaponDescriptor : public ItemDescriptor
{
public:
    uint8_t pad_0000[0x1A8]; // 0x0000
    Il2CppString* attackAnim; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    WeaponType weaponType; // 0x01B0
    uint8_t pad_01B1[0x3]; // 0x01B1
    AttachmentType attachmentType; // 0x01B4
    uint8_t pad_01B5[0x3]; // 0x01B5
    ProjectileType projectileType; // 0x01B8
    uint8_t pad_01B9[0x3]; // 0x01B9
    float angle; // 0x01BC
    uint8_t pad_01BD[0x3]; // 0x01BD
    float idleAngleOffset; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    Single[][] facingAngles; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    float audioType; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    ItemDescriptor* projectileDescriptor; // 0x01D8

    // Methods
    void Initialise(ItemDatabase* database);  // RVA: 0x306B50
    void .ctor();  // RVA: 0x306BC0
};

// Namespace: <global>
class ProjectileDescriptor : public ItemDescriptor
{
public:
    uint8_t pad_0000[0x1A8]; // 0x0000
    ProjectileType projectileType; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    Il2CppString* impactEffect; // 0x01B0

    // Methods
    void .ctor();  // RVA: 0x302220
};

// Namespace: <global>
class ItemCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F4250
};

// Namespace: <global>
class PlaceableCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2FA490
};

// Namespace: <global>
class FlatSurfaceCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F3CA0
};

// Namespace: <global>
class ConsumableCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F2EB0
};

// Namespace: <global>
class EquipmentCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F3C40
};

// Namespace: <global>
class WeaponCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x306B10
};

// Namespace: <global>
class ProjectileCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x3021E0
};

// Namespace: <global>
class AnimalCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F1360
};

// Namespace: <global>
class EnemyCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F39E0
};

// Namespace: <global>
class BossCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x2F2BC0
};

// Namespace: <global>
class VegetationCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x3067B0
};

// Namespace: <global>
class VegetationGroupItemCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x3067F0
};

// Namespace: <global>
class TemplateSpawnItem : public WeightedItem
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Il2CppString* name; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t minStack; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t maxStack; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class DynamicWeightedItem`1
{
public:
    T mItem; // 0x0000
    float mWeight; // 0x0000
    float mCurrentWeight; // 0x0000
    float mBalanceFactor; // 0x0000
    float mEvaluationWeight; // 0x0000

    // Methods
    void .ctor(T item, float weight, float balanceFactor);  // RVA: 0x203C40
    void Initialise(T item, float weight, float balanceFactor);  // RVA: 0x203C40
    void UpdateEvaluationWeight();  // RVA: 0x1868E0
    void ProcessWeight(float cumulativeWeight);  // RVA: 0x175530
    bool EvaluateWeight(float cumulativeWeight, float evaluationCost);
    void ResetWeight();  // RVA: 0x1868E0
};

// Namespace: <global>
class DynamicWeightedList`1
{
public:
    System.Collections.Generic.List<DynamicWeightedItem<T>> mItems; // 0x0000
    bool mResetWeights; // 0x0000
    float mEvaluationCost; // 0x0000
    float mBalanceFactor; // 0x0000

    // Methods
    void Initialise(int32_t capacity);  // RVA: 0x176610
    void Initialise(System.Collections.Generic.List<T> items, float balanceFactor);
    void AddItem(T item, float weight, float balanceFactor);  // RVA: 0x203C40
    T GetRandomItem(int32_t index);  // RVA: 0x203C40
    void ResetWeights();  // RVA: 0x1868E0
    void .ctor();  // RVA: 0x1868E0
};

// Namespace: <global>
class TemplateSpawnGroup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float chance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<EventRequirement> eventRequirements; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<EventTrigger> eventTriggers; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<TemplateSpawnItem> items; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DynamicWeightedList<TemplateSpawnItem> mItems; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x305400
    TemplateSpawnItem* Evaluate(int32_t playerIndex, bool force);  // RVA: 0x305070
    bool CheckEvents();  // RVA: 0x304F80
    void .ctor();  // RVA: 0x303740
};

// Namespace: <global>
class RewardSpawnGroup : public TemplateSpawnGroup
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    bool multiplayer; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x303740
};

// Namespace: <global>
class TemplateSpawnDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t uniqueId; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<SpawnProperty> childList; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<TemplateSpawnGroup> itemGroups; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x304EA0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class TemplateSpawnCollection : public DescriptorCollection`1
{
public:

    // Methods
    int32_t InitialiseCollection(ItemDatabase* database, int32_t id);  // RVA: 0x304CA0
    TemplateSpawnDescriptor* GetFromUniqueId(int32_t uniqueId);  // RVA: 0x304BF0
    void .ctor();  // RVA: 0x304E60
};

// Namespace: <global>
class ItemDatabase : public ScriptableDatabase
{
public:
    // Static fields
    // static int32_t sSpawnTemplateStart;

    uint8_t pad_0000[0x28]; // 0x0000
    ItemCollection* itemCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlaceableCollection* placeableCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    FlatSurfaceCollection* flatSurfaceCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ConsumableCollection* consumableCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    EquipmentCollection* equipmentCollection; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    EquipmentCollection* equipableItemCollection; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    WeaponCollection* weaponCollection; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    ProjectileCollection* projectileCollection; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    AnimalCollection* animalCollection; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    EnemyCollection* enemyCollection; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    BossCollection* bossCollection; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    VegetationCollection* vegetationCollection; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    VegetationGroupItemCollection* vegetationGroupCollection; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    TemplateSpawnCollection* templateSpawnCollection; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<ItemDescriptor> mMergedItemDescriptorList; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.Dictionary<System.String,ItemDescriptor> mMergedItemDescriptorDictionary; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    SpriteDatabase* spriteDatabase; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    AnimationDatabase* animationDatabase; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    SurfaceTileDatabase* surfaceDatabase; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    SurfaceTileDatabase* flatSurfaceDatabase; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    StringDatabase* stringDatabase; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    int32_t mSpawnTemplateId; // 0x00D0

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2F47D0
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x2F4290
    void ValidateStrings();  // RVA: 0x2F53A0
    void ValidateItemText(ItemDescriptor* itemDescriptor);  // RVA: 0x2F50F0
    void MergeListCollection(DescriptorCollection<T> collection);  // RVA: 0x175530
    void MergeCollections();  // RVA: 0x2F4ED0
    int32_t InitialiseCollection(DescriptorCollection<T> collection, int32_t id);
    void Initialise();  // RVA: 0x2F4BA0
    ItemDescriptor* GetItemDescriptor(int32_t id);  // RVA: 0x2F44A0
    ItemDescriptor* GetItemDescriptor(Il2CppString* name);  // RVA: 0x2F4570
    TemplateSpawnDescriptor* GetTemplateSpawnDescriptor(int32_t uniqueId);  // RVA: 0x2F46F0
    Descriptor* GetRenderDescriptor(Il2CppString* name);  // RVA: 0x2F45E0
    void .ctor();  // RVA: 0x2F5A70
};

// Namespace: <global>
struct LookupTableType
{
public:
    // Static fields
    // static LookupTableType LevelDescriptor;
    // static LookupTableType Biome;
    // static LookupTableType Tile;
    // static LookupTableType Item;
    // static LookupTableType NPC;
    // static LookupTableType Quest;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ItemIndexTable
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<ItemIndexTable.LookupTableType,System.String[]> sMissingLookupTableData;
    // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Int32,System.String>> sOverrideItemL    // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Int32,System.String>> sOverrideLevel
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.Int32,System.ValueTuple<System.Int32,System.Int32>> mLookupTable; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.Dictionary<System.Int32,System.Int32> mSerialisationFlagTable; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    LookupTableType mLookupTableType; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2F9620
    void .ctor(LookupTableType type);  // RVA: 0x2F96E0
    void Initialise(LookupTableType type);  // RVA: 0x2F8770
    int32_t GetItemTypeCount();  // RVA: 0x2F83C0
    Il2CppString* GetItemName(int32_t index);  // RVA: 0x2F8140
    int32_t GetItemIndex(Il2CppString* name);  // RVA: 0x2F7F50
    void WriteLookupTable(Stream* stream, System.Collections.Generic.Dictionary<System.Int32,System.Boolean> indices);  // RVA: 0x2F8CD0
    void GenerateMissingLookupTable();  // RVA: 0x2F7B20
    int32_t OverrideVersionLookup(int32_t gameSaveVersion, Il2CppString* itemName, System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Int32,System.String>> overrideTable);  // RVA: 0x2F87F0
    void ReadLookupTable(Stream* stream, int32_t gameSaveVersion);  // RVA: 0x2F8900
    int32_t GetVersionLookupOverride(int32_t gameSaveVersion, Il2CppString* lookup);  // RVA: 0x2F8670
    int32_t GetIdFromLookupTable(int32_t id, int32_t fallback);  // RVA: 0x2F7E60
    int32_t GetLoadFlagsFromLookupTable(int32_t id);  // RVA: 0x2F8590
    System.ValueTuple<System.Int32,System.Int32> GetDataFromLookupTable(int32_t id);  // RVA: 0x2F7D50
    static void .cctor();  // RVA: 0x2F8F40
};

// Namespace: <global>
class LevelGeneratorItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* levelDescriptorName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 sizeOverride; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector2 mapScalerModifier; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float setPieceMapScaler; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* spawnGroupNameOverride; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 glitchSource; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<TeleporterParams> teleporters; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<WaypointParams> waypoints; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<ItemSwapParams> itemSwaps; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    SpawnGroupDescriptor* spawnGroupDescriptorOverride; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.Dictionary<System.Int16,ItemSwapParams> itemSwapMap; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    LevelDescriptor* levelDescriptor; // 0x0070

    // Methods
    void Initialise(LevelDatabase* leveldatabase, SpawnDatabase* spawnDatabase, MiniTileDatabase* miniTileDatabase);  // RVA: 0x2F9AF0
    void .ctor();  // RVA: 0x2F9D70
};

// Namespace: <global>
class PositionParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* levelName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t levelIndex; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector2 position; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    Vector2 randomOffset; // 0x0024

    // Methods
    void Initialise(WorldGeneratorDescriptor* worldGeneratorDescriptor);  // RVA: 0x302110
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class LootGeneratorItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<PositionParams> positions; // 0x0018

    // Methods
    System.ValueTuple<System.Int32,UnityEngine.Vector2> GetRandomPosition();  // RVA: 0x2F9DA0
    void Initialise(WorldGeneratorDescriptor* worldGeneratorDescriptor);  // RVA: 0x2F9F10
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class WorldGeneratorDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Vector2Int worldSize; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<LevelGeneratorItem> levelGeneratorItems; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<LootGeneratorItem> lootGeneratorItems; // 0x0030

    // Methods
    void Initialise(LevelDatabase* leveldatabase, SpawnDatabase* spawnDatabase, MiniTileDatabase* miniTileDatabase);  // RVA: 0x306DA0
    int32_t GetLevelGeneratorItemIndex(Il2CppString* name);  // RVA: 0x306C30
    LevelGeneratorItem* GetLevelGeneratorItem(Il2CppString* levelName);  // RVA: 0x306CE0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class HeightLineParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector2 positionA; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 positionB; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float height; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float minDist; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float maxDist; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 mPositionA; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    Vector2 mPositionB; // 0x0034
    uint8_t pad_0035[0x7]; // 0x0035
    Vector2 mLine; // 0x003C
    uint8_t pad_003D[0x7]; // 0x003D
    float mLengthSq; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float mInvertLengthLq; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float mInvertMaxDist; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float mMinDistSqr; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    Vector2 mMinBounds; // 0x0054
    uint8_t pad_0055[0x7]; // 0x0055
    Vector2 mMaxBounds; // 0x005C

    // Methods
    void Prepare(int32_t cols, int32_t rows, float mapSizeScaler);  // RVA: 0x2F40D0
    bool WithinExtendedBounds(float col, float row);  // RVA: 0x2F41E0
    float CalcHeight(float col, float row);  // RVA: 0x2F3FA0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class BiomePlacementParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 start; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 end; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector2 margin; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* weightMapName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MapGenerator* weightMap; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t biomeType; // 0x0040

    // Methods
    void Initialise();  // RVA: 0x2F2900
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class TeleporterParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<UnityEngine.Vector2> positions; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* teleporterType; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* targetTeleporter; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* tileTypeName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t tileType; // 0x0038

    // Methods
    void Initialise(MiniTileDatabase* miniTileDatabase);  // RVA: 0x304BA0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class WaypointParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* id; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int8_t index; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<UnityEngine.Vector2> positions; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class ItemSwapParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* originalItemName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* newItemName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int16_t originalItemId; // 0x0020
    uint8_t pad_0021[0x1]; // 0x0021
    int16_t newItemId; // 0x0022
    uint8_t pad_0023[0x5]; // 0x0023
    System.Collections.Generic.List<System.String> biomes; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.Dictionary<System.SByte,System.Boolean> biomeTypes; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x2F9870
    bool CheckBiome(int8_t biomeId);  // RVA: 0x2F9810
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class RiverPlacementParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float startWidth; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float endWidth; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Vector2 startPos; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 endPos; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2F2B20
};

// Namespace: <global>
class BiomeTendrilPlacementParams : public RiverPlacementParams
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    Il2CppString* name; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int8_t biomeType; // 0x0030

    // Methods
    void Initialise();  // RVA: 0x2F2AB0
    void .ctor();  // RVA: 0x2F2B20
};

// Namespace: <global>
class RoadNode
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 position; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool isOffset; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2C1750
    void .ctor(RoadNode* toClone);  // RVA: 0x3038A0
    RoadNode* Clone();  // RVA: 0x3037C0
    void UpdatePosition(int32_t cols, int32_t rows);  // RVA: 0x303850
};

// Namespace: <global>
class RoadPath
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* startNode; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<UnityEngine.Vector2> intermediateNodes; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* endNode; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t roadType; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float roadStrength; // 0x002C

    // Methods
    void .ctor();  // RVA: 0x311480
};

// Namespace: <global>
class MazePlacementParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Rect bounds; // 0x0018

    // Methods
    void Initialise();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class SetPiecePlacementParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* setPieceName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 desiredPos; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool emptyTileOnly; // 0x0028
    bool daySpawnReduced; // 0x0029
    uint8_t pad_002A[0x6]; // 0x002A
    RoadNode[][] roadNodes; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    SetPieceDescriptor* setPiece; // 0x0038

    // Methods
    void Initialise(System.Collections.Generic.List<SetPieceDescriptor> setPieceDescriptors);  // RVA: 0x312270
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class WeightedItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float weight; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class BiomeSetPieceParams : public WeightedItem
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Il2CppString* setPieceName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t roadType; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float roadStrength; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float maxRoadCost; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<UnityEngine.Vector2Int> spawnTemplateConversions; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.Int32,System.Int32> spawnTemplateDictionary; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SetPieceDescriptor* setPiece; // 0x0040

    // Methods
    void Initialise();  // RVA: 0x307140
    void .ctor();  // RVA: 0x307250
};

// Namespace: <global>
class WeightedList`1
{
public:
    System.Collections.Generic.List<T> mItems; // 0x0000
    System.Collections.Generic.List<System.Single> mWeights; // 0x0000
    float mMaxWeight; // 0x0000

    // Methods
    void .ctor();  // RVA: 0x1868E0
    void .ctor(int32_t capacity);  // RVA: 0x176610
    void Clear();  // RVA: 0x1868E0
    void Initialise(int32_t capacity);  // RVA: 0x176610
    void Initialise(T[][] items);  // RVA: 0x175530
    void AddItem(T item, float weight);  // RVA: 0x203C40
    void SetWeight(int32_t index, float weight);  // RVA: 0x176F20
    T GetRandomItem();  // RVA: 0x203C40
};

// Namespace: <global>
class BiomeSetPieces
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* biomeName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    BiomeSetPieceParams[][] biomeSetPieces; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WeightedList<BiomeSetPieceParams> mBiomeSetPieces; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mBiomeType; // 0x0028

    // Methods
    void Initialise(System.Collections.Generic.List<SetPieceDescriptor> setPieceDescriptors);  // RVA: 0x3072D0
    void .ctor();  // RVA: 0x3076F0
};

// Namespace: <global>
class TileHeightParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float heightMinThreshold; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float heightMaxThreshold; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    TileConverionList* tileConversionList; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    VegetationEdgeType vegetationEdgeType; // 0x0020

    // Methods
    void Initialise(MiniTileDatabase* miniTileDatabase);  // RVA: 0x31C920
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class LevelDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    bool disabled; // 0x0020
    bool respawnOnLoad; // 0x0021
    uint8_t pad_0022[0x2]; // 0x0022
    Vector2 size; // 0x0024
    uint8_t pad_0025[0xB]; // 0x0025
    Il2CppString* heightMapName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t heightMapMargin; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float heightMapMin; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float heightMapMax; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Il2CppString* defaultBiome; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Il2CppString* timeTableName; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Il2CppString* spawnGroupName; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t setPiecePlacementStep; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    SpawnGroupDescriptor* spawnGroupDescriptor; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<System.String> levelTypes; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<BiomePlacementParams> biomePlacements; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<HeightLineParams> heightLineParams; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<TileHeightParams> tileHeightParams; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<MazePlacementParams> mazePlacements; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<RiverPlacementParams> riverPlacements; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<BiomeTendrilPlacementParams> biomeTendrilPlacements; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    System.Collections.Generic.List<SetPiecePlacementParams> setPiecePlacements; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<BiomeSetPieces> biomeSetPieces; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    System.Collections.Generic.List<BiomeSetPieces> biomeSetPiecesTiny; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    System.Collections.Generic.List<RoadNode> roadNodes; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    System.Collections.Generic.List<RoadPath> roadPaths; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    System.Collections.Generic.List<TeleporterParams> teleporters; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    MapGenerator* heightMap; // 0x00D8

    // Methods
    void Initialise(SetPieceCollection* setPieceCollection, SpawnDatabase* spawnDatabase, MiniTileDatabase* miniTileDatabase);  // RVA: 0x30B110
    void .ctor();  // RVA: 0x30B7A0
};

// Namespace: <global>
class WorldGeneratorCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x31DEE0
};

// Namespace: <global>
class SetPieceCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x312230
};

// Namespace: <global>
class LevelCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30A6F0
};

// Namespace: <global>
class LevelDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    WorldGeneratorCollection* worldGeneratorCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SetPieceCollection* setPieceCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    LevelCollection* primaryLevelCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    LevelCollection* secondaryLevelCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SpawnDatabase* spawnDatabase; // 0x0048

    // Methods
    void .ctor();  // RVA: 0x2F1890
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30A980
    void ResaveSetPieces();  // RVA: 0x30AE00
    void Initialise();  // RVA: 0x30AAB0
    LevelDescriptor* GetLevelDescriptor(Il2CppString* name);  // RVA: 0x30A730
    LevelDescriptor* GetLevelDescriptor(int32_t index);  // RVA: 0x30A7B0
    WorldGeneratorDescriptor* GetWorldGeneratorDescriptor(Il2CppString* worldName);  // RVA: 0x30A920
    System.Collections.Generic.List<LevelGeneratorItem> GetLevelGeneratorItems(Il2CppString* worldName);  // RVA: 0x30A8C0
};

// Namespace: <global>
struct LightValue
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Color colour; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    float radius; // 0x0020

    // Methods
    void .ctor(Color _colour, float _radius);  // RVA: 0x30BFB0
    void .ctor(LightValue lightValue);  // RVA: 0x30BFC0
};

// Namespace: <global>
class LightKeyframe
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float duration; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    LightValue lightValue; // 0x0014
    uint8_t pad_0015[0x13]; // 0x0015
    float startTime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float endTime; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    LightKeyframe* nextKeyFrame; // 0x0030

    // Methods
    LightValue GetLightValue(float time);  // RVA: 0x30BE50
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class LightDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float lifetime; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float fadeInTime; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float fadeOutTime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    bool randomiseStart; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    Lightype lightType; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<LightKeyframe> lightKeyFrames; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float endTime; // 0x0040

    // Methods
    void Initialise();  // RVA: 0x30BCF0
    float ClampTime(float time);  // RVA: 0x30BBA0
    LightValue GetLightValue(float time);  // RVA: 0x30BBB0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class LightCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30B7B0
};

// Namespace: <global>
class LightDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    LightCollection* lightCollection; // 0x0028

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30B8D0
    void Initialise();  // RVA: 0x30B950
    LightDescriptor* GetDescriptor(Il2CppString* name);  // RVA: 0x30B7F0
    LightDescriptor* GetDescriptor(int32_t index);  // RVA: 0x30B850
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
class LoreDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* titleStringId; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* typeStringId; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* fromStringId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* desc1StringId; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* desc2StringId; // 0x0040

    // Methods
    StringBuilder* GetFloatingText();  // RVA: 0x30C130
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class LoreCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30BFD0
};

// Namespace: <global>
class LoreDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    LoreCollection* loreCollection; // 0x0028

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30C080
    void Initialise();  // RVA: 0x30C100
    LoreDescriptor* GetLoreDescriptor(Il2CppString* name);  // RVA: 0x30C010
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
struct IntVector2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
};

// Namespace: <global>
class MiniTileDescriptor
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* mName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 mOffset; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector3 mPosOffset; // 0x0020
    uint8_t pad_0021[0xB]; // 0x0021
    float mDepth; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    Int32[][] mBitMasks; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 mRectOffset; // 0x0038

    // Methods
    void Initialise(Vector2 textureSize, float paddingMultiplier);  // RVA: 0x30D4F0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class MiniTileCornerSetDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Vector2[][] neighbours; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    IntVector2[][] intNeighbours; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MiniTileDescriptor[][] miniTileDescriptors; // 0x0030

    // Methods
    MiniTileDescriptor* GetMiniTileDescriptor(int32_t bitFlags);  // RVA: 0x30C2F0
    void Initialise(Vector2 textureSize, float paddingModifier);  // RVA: 0x30C3F0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class MiniTileTypeDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* spriteRefName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] mCornerSetNames; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* mPrimaryNeighbourName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* mSecondaryNeighbourName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    String[][] mIgnoreNeighbourNames; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Color32 mColorLookup; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float mMoveCost; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float mHeight; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float mRoadGenerationCost; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    TraversalType mTraversalType; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Il2CppString* mFootstepEffect; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float mAudioSurface; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    AudioLabel* mAudioSurfaceType; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    SpriteDescriptor* spriteDescriptorRef; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Rect mRect; // 0x0080
    uint8_t pad_0081[0xF]; // 0x0081
    int32_t mPrimaryNeighbourTileType; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    int32_t mSecondaryNeighbourTileType; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mIgnoreNeighbourTileTypes; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    MiniTileCornerSetDescriptor[][] mMiniTileCornerSetDescriptors; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float mHeightPPU; // 0x00A8

    // Methods
    Vector2 GetUVOffset(Level* level, int32_t mc, int32_t mr, int32_t tc, int32_t tr);  // RVA: 0x30D560
    Rect GetUVRect(Level* level, int32_t mc, int32_t mr, int32_t tc, int32_t tr);  // RVA: 0x30D840
    void Initialise(SpriteDatabase* spriteDatabase, Vector2 tileSize, Vector2 textureSize, float ppu);  // RVA: 0x30DB20
    void .ctor();  // RVA: 0x30DC60
};

// Namespace: <global>
class CornerSetDescriptorCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x307AF0
};

// Namespace: <global>
class MiniTileTypeDescriptorCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30D520
};

// Namespace: <global>
class MiniTileDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    SpriteDatabase* spriteDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CornerSetDescriptorCollection* cornerSetCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MiniTileTypeDescriptorCollection* miniTileTypeCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t mTileTypeNone; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    Vector2 mMiniTileSize; // 0x0044
    uint8_t pad_0045[0xB]; // 0x0045
    Material* mTexture; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float mPpu; // 0x0058

    // Methods
    void Initialise();  // RVA: 0x30CB20
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30CA60
    void PadTexture();  // RVA: 0x30D100
    int32_t GetTileTypeIndex(Il2CppString* typeName);  // RVA: 0x30C820
    MiniTileTypeDescriptor* GetMiniTileDescriptor(Il2CppString* typeName);  // RVA: 0x30C750
    Vector2 GetUVOffset(Level* level, int32_t tileType, int32_t mc, int32_t mr, int32_t tc, int32_t tr);  // RVA: 0x30C8E0
    Rect GetUVRect(Level* level, int32_t tileType, int32_t mc, int32_t mr, int32_t tc, int32_t tr);  // RVA: 0x30C990
    void .ctor();  // RVA: 0x30D4C0
};

// Namespace: <global>
class DiscoveryRequirement
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* discovery; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool invert; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mDiscovery; // 0x001C

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x308FF0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct VendorStockItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    uint16_t quantity; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float weight; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t cost; // 0x0020

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x31DA80
    void Save(Stream* stream);  // RVA: 0x31DDA0
    void Load(Stream* stream, int32_t version);  // RVA: 0x31DB20
};

// Namespace: <global>
class VendorStockItemGroup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float mTotalItemWeight; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float chance; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    System.Collections.Generic.List<DiscoveryRequirement> requirements; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<VendorStockItem> stockItems; // 0x0020

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x31D7A0
    bool IsUnlocked(System.Collections.Generic.Dictionary<System.Int32,System.Boolean> discoveredItems);  // RVA: 0x31D990
    void .ctor();  // RVA: 0x31DA60
};

// Namespace: <global>
class VendorStockGroup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<VendorStockItemGroup> stockItemGroup; // 0x0010

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x31D510
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class CharacterSettingsDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    CharacterSettingsTable characterSettings; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class NPCDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* spawnEventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* defaultBehaviourName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* titleId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* stringId; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    CharacterSettingsTable characterSettings; // 0x0040
    uint8_t pad_0041[0x2F]; // 0x0041
    Il2CppString* dialogIntro; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Il2CppString* dialogGreet; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<System.String> questNames; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<VendorStockGroup> stockGroups; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<QuestDescriptor> quests; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogEntry* mDialogIntro; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogEntry* mDialogGreet; // 0x00A0

    // Methods
    void Initialise(ItemDatabase* itemDatabase, NPCDatabase* npcDatabase);  // RVA: 0x30E6C0
    static void AddNPCStock(int8_t sourceClientIndex, NPCAddStock msg);  // RVA: 0x30E4B0
    void RefreshVendor(NPC* vendor);  // RVA: 0x30E900
    void .ctor();  // RVA: 0x30EEA0
};

// Namespace: <global>
struct EventType
{
public:
    // Static fields
    // static EventType None;
    // static EventType Global;
    // static EventType NPC;
    // static EventType Player;
    // static EventType AnyNPC;
    // static EventType AllPlayers;
    // static EventType GlobalAndPlayer;
    // static EventType GlobalAndAllPlayers;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct EventId
{
public:
    // Static fields
    // static EventId None;
    // static EventId Generic;
    // static EventId Kill;
    // static EventId Collect;
    // static EventId Discover;
    // static EventId Intro;
    // static EventId Room;
    // static EventId RoomDialogState;
    // static EventId QuestState;
    // static EventId Resident;
    // static EventId Greet;
    // static EventId Lore;
    // static EventId Timer;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct OperatorEnum
{
public:
    // Static fields
    // static OperatorEnum NotEquals;
    // static OperatorEnum Equals;
    // static OperatorEnum Greater;
    // static OperatorEnum Less;
    // static OperatorEnum GreaterOrEqual;
    // static OperatorEnum LessOrEqual;
    // static OperatorEnum Increment;
    // static OperatorEnum Always;
    // static OperatorEnum Never;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class EventTrigger
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EventType eventType; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    EventId eventId; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Il2CppString* eventName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t eventState; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    OperatorEnum operatorType; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class EventRequirement : public EventTrigger
{
public:

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct DialogActionType
{
public:
    // Static fields
    // static DialogActionType None;
    // static DialogActionType OpenShop;
    // static DialogActionType OpenQuest;
    // static DialogActionType ActivateQuest;
    // static DialogActionType RewardQuest;
    // static DialogActionType RemoveQuest;
    // static DialogActionType RevertQuest;
    // static DialogActionType CloseDialog;
    // static DialogActionType LinkBed;
    // static DialogActionType OpenJournal;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class DialogAction
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* dialogEntryName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float priority; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float weight; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    System.Collections.Generic.List<EventRequirement> actionEventRequirements; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<EventTrigger> eventTriggers; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<DialogAction.DialogActionType> actionTriggers; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* audioClickOverride; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DialogEntry* mDialogEntry; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float mProcessedWeight; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float mWeightModifier; // 0x004C

    // Methods
    void Initialise(Il2CppString* entryName, NPCDatabase* npcDatabase);  // RVA: 0x307DC0
    void Initialise(NPCDatabase* npcDatabase);  // RVA: 0x307D50
    void ProcessDialogAction(Player* player, NPC* npc, float cumulativeWeight, float currentPriority);  // RVA: 0x3082E0
    bool EvaluateDialogEntryWeight(float cumulativeWeight);  // RVA: 0x307CE0
    bool CheckEventRequirements(Player* player, NPC* npc);  // RVA: 0x307B30
    void ProcessAction(Player* player, NPC* npc, bool advanceDialog);  // RVA: 0x307E90
    DialogEntry* GetDialogEntry(NPC* npc);  // RVA: 0x307D10
    void .ctor();  // RVA: 0x308380
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<DialogAction> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x31C990
    void .ctor();  // RVA: 0x2C1750
    int32_t <Initialise>b__2_0(DialogAction* x, DialogAction* y);  // RVA: 0x31C940
};

// Namespace: <global>
class DialogOption
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* buttonText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<DialogAction> dialogActions; // 0x0018

    // Methods
    void Initialise(ItemDatabase* itemDatabase, NPCDatabase* npcDatabase);  // RVA: 0x308DE0
    DialogAction* GetDialogAction(Player* player, NPC* npc);  // RVA: 0x308BE0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class DialogEntry : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* dialogText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<DialogOption> dialogOptions; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* nextDialogEntry; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DialogAction* mNextDialogAction; // 0x0038

    // Methods
    void Initialise(ItemDatabase* itemDatabase, NPCDatabase* npcDatabase);  // RVA: 0x308A00
    DialogEntry* GetActualDialogEntry(NPC* npc, DialogAction* triggeredDialogAction);  // RVA: 0x308900
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class QuestStateData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    QuestState questState; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fromStringId; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* desc1StringId; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* desc2StringId; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* dialogEntryName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DialogEntry* dialogEntry; // 0x0038

    // Methods
    void Initialise(NPCDatabase* npcDatabase);  // RVA: 0x30F1A0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct QuestType
{
public:
    // Static fields
    // static QuestType CreateRoom;
    // static QuestType LeadToLevel;
    // static QuestType LeadToItem;
    // static QuestType Give;
    // static QuestType Kill;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct QuestState
{
public:
    // Static fields
    // static QuestState None;
    // static QuestState Scheduled;
    // static QuestState Pending;
    // static QuestState Discovered;
    // static QuestState Intro;
    // static QuestState Active;
    // static QuestState ActiveEnd;
    // static QuestState Reward;
    // static QuestState Done;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct QuestTriggerType
{
public:
    // Static fields
    // static QuestTriggerType Initial;
    // static QuestTriggerType Room;
    // static QuestTriggerType Event;
    // static QuestTriggerType Random;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class QuestDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<EventRequirement> eventRequirements; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    QuestType type; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* targetName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t targetCount; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    QuestTriggerType triggerType; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Il2CppString* triggerName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t triggerDelay; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Il2CppString* titleStringId; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    QuestState revertState; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    QuestState finalState; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    System.Collections.Generic.List<QuestStateData> questStateData; // 0x0060

    // Methods
    void Initialise(NPCDatabase* npcDatabase);  // RVA: 0x30F010
    QuestStateData* GetQuestStateData(int32_t questState);  // RVA: 0x30EF70
    bool UpdateQuest(NPC* npc);  // RVA: 0x30F150
    bool ProcessQuest(Player* player, NPC* npc);  // RVA: 0x30F110
    bool ProcessLeadToLevelQuest(Player* player, NPC* npc);  // RVA: 0x30F0E0
    void .ctor();  // RVA: 0x30F190
};

// Namespace: <global>
class QuestCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30EF30
};

// Namespace: <global>
class DialogEntries : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<DialogEntry> items; // 0x0020

    // Methods
    void Initialise(ItemDatabase* itemDatabase, NPCDatabase* npcDatabase);  // RVA: 0x308600
    DialogEntry* Get(Il2CppString* name);  // RVA: 0x308540
    void .ctor();  // RVA: 0x308880
};

// Namespace: <global>
class DialogEntriesCollection : public DescriptorCollection`1
{
public:

    // Methods
    DialogEntry* GetDialogEntry(Il2CppString* name);  // RVA: 0x3083A0
    void .ctor();  // RVA: 0x308500
};

// Namespace: <global>
class NPCCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x30DCF0
};

// Namespace: <global>
class CharacterSettingsCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x307770
};

// Namespace: <global>
class NPCDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    ItemDatabase* itemDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    QuestCollection* questCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DialogEntriesCollection* dialogEntriesCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    NPCCollection* npcCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    CharacterSettingsCollection* characterSettingsCollection; // 0x0048

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30E070
    void Initialise();  // RVA: 0x30E1B0
    QuestDescriptor* GetQuestDescriptor(Il2CppString* name);  // RVA: 0x30E000
    DialogEntry* GetDialogEntryDescriptor(Il2CppString* name);  // RVA: 0x30DE00
    NPCDescriptor* GetNPCDescriptor(Il2CppString* name);  // RVA: 0x30DF90
    CharacterSettingsTable GetCharacterSettings(Il2CppString* name);  // RVA: 0x30DD30
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
struct RecipeFlags
{
public:
    // Static fields
    // static RecipeFlags None;
    // static RecipeFlags Nested;
    // static RecipeFlags AutoCombine;
    // static RecipeFlags AutoSplit;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Ingredient
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t quantity; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemDescriptor* mItemDescriptor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RecipeDescriptor* mNestedRecipeDescriptor; // 0x0028

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x309360
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class RecipeEquipment
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemDescriptor* mItemDescriptor; // 0x0018

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x311440
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class RecipeDescriptor : public Descriptor
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<System.String,System.Boolean> sNestedIngredientConflictMap;

    uint8_t pad_0000[0x20]; // 0x0000
    CategoryType category; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t quantity; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    System.Collections.Generic.List<RecipeFlags> recipeProperties; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t recipeFlags; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<System.String> unlockItems; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<RecipeEquipment> equipmentList; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<Ingredient> ingredientList; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ItemDescriptor* mItemDescriptor; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<System.Int32> mUnlockItems; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool mHasNestedIngredientConflicts; // 0x0060

    // Methods
    void .ctor();  // RVA: 0x3110C0
    void .ctor(ItemDescriptor* itemDescriptor);  // RVA: 0x311260
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x310880
    bool IsUnlocked(System.Collections.Generic.Dictionary<System.Int32,System.Boolean> discoveredItems);  // RVA: 0x310E30
    bool HasRecipeFlags(RecipeFlags _recipeFlags);  // RVA: 0x310870
    void UpdateNestedIngredientConflicts();  // RVA: 0x310EF0
    bool EvaluateNestedIngredientConflicts(RecipeDescriptor* recipe);  // RVA: 0x310500
    bool EvaluateNestedRecipeCall(RecipeDescriptor* recipe);  // RVA: 0x310790
    bool EvaluateNestedRecipeCall(Il2CppString* recipeNameToEvaluate, RecipeDescriptor* currentNestedRecipe);  // RVA: 0x310640
    static void .cctor();  // RVA: 0x311030
};

// Namespace: <global>
class RecipeCollection : public DescriptorCollection`1
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,RecipeDescriptor> mRecipeLookup; // 0x0038

    // Methods
    bool Initialise(int32_t _firstId);  // RVA: 0x30F250
    RecipeDescriptor* GetRecipe(Il2CppString* name);  // RVA: 0x30F1E0
    void .ctor();  // RVA: 0x30F380
};

// Namespace: <global>
class RecipeDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    RecipeCollection* recipeCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RecipeCollection* recipeCollectionEditMode; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<System.String,RecipeDescriptor> mRecipeDictionaryLookup; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RecipeCollection* recipeCollectionEditModeDynamic; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ItemDatabase* mItemDatabase; // 0x0048

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x30FC80
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x30F3C0
    void AutoUpdateValues();  // RVA: 0x30F410
    bool UpdateRecipeValue(Il2CppString* recipeName, System.Collections.Generic.Dictionary<System.String,System.Boolean>& autoUpdateItems);  // RVA: 0x3101E0
    void Initialise();  // RVA: 0x30FD30
    void PopulateEditModeRecipes();  // RVA: 0x310000
    RecipeDescriptor* GetDescriptor(Il2CppString* name, bool includeEditMode);  // RVA: 0x30F940
    int32_t GetRecipeCount();  // RVA: 0x30FBB0
    RecipeDescriptor* GetDescriptor(int32_t index);  // RVA: 0x30FA70
    void .ctor();  // RVA: 0x310470
};

// Namespace: <global>
struct StringPair
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* key; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* value; // 0x0018

    // Methods
    void .ctor(Il2CppString* _key, Il2CppString* _value);  // RVA: 0x31AE60
};

// Namespace: <global>
class StringPairCollection
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<StringPair> items; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x31ADE0
};

// Namespace: <global>
class ScriptableDatabase : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    StringPairCollection* mXMLChecksumList; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,System.String> mXMLChecksums; // 0x0020

    // Methods
    void ImportXMLContextMenu();  // RVA: 0x311F40
    void ImportXML(Il2CppString* modPath);  // RVA: 0x312070
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x2C1B90
    void ImportXMLCollection(Il2CppString* modPath, DescriptorCollection<T> descriptorCollection);  // RVA: 0x17A420
    Il2CppString* CalculateDataChecksum(Il2CppString* filename);  // RVA: 0x311BD0
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x2C1B90
    void AppendDataHash(System.Collections.Generic.List<System.String> hashs, DescriptorCollection<T> descriptorCollection);  // RVA: 0x17A420
    static Il2CppString* GetAssetPath(Il2CppString* path);  // RVA: 0x311D40
    static Il2CppString* GetModdedPath(Il2CppString* modPath, Il2CppString* path, bool overrideExists);  // RVA: 0x311E00
    void .ctor();  // RVA: 0x312120
};

// Namespace: <global>
class ScriptableDatabaseCollection : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    ItemDatabase* itemDatabase; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<ScriptableDatabase> mScriptableDatabases; // 0x0020

    // Methods
    void ImportXMLs(Il2CppString* modPath);  // RVA: 0x311810
    void OverrideBuiltInDatabases(Il2CppString* modPath);  // RVA: 0x3119B0
    bool CalculateOnlineDataHash(Byte[][] dataHash);  // RVA: 0x311490
    void .ctor();  // RVA: 0x311BC0
};

// Namespace: <global>
class SpawnItemParams : public WeightedItem
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Il2CppString* itemName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PathfindingType pathType; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class SpawnEventRequirement : public EventRequirement
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    int32_t eventStateMax; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x313660
};

// Namespace: <global>
class ValueModifier
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float value; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float blend; // 0x0014

    // Methods
    float ApplyModifier(float baseValue);  // RVA: 0x31CA00
    void .ctor();  // RVA: 0x313670
};

// Namespace: <global>
class SpawnGroupBlendParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float weight; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t priority; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float prioritySuppression; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x313670
};

// Namespace: <global>
class SpawnGroupDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    ValueModifier* spawnChanceBlend; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ValueModifier* spawnModifierBlend; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float spawnTorchModifier; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float maxSpawnOffset; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    System.Collections.Generic.List<SpawnItemParams> spawnItems; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<SpawnEventRequirement> eventRequirements; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SpawnGroupBlendParams* spawnGroupBlendParams; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    DynamicWeightedList<SpawnItemParams> mDynamicSpawnItems; // 0x0050

    // Methods
    void Initialise(SpawnDatabase* spawnDatabase);  // RVA: 0x313A70
    float Evaluate(Player* player, Level* playerLevel);  // RVA: 0x313840
    float CalcuateSpawnChance(PlayerController* playerController, bool enemies);  // RVA: 0x313720
    float CalcuateMaxSpawns(PlayerController* playerController, bool enemies);  // RVA: 0x3136C0
    void .ctor();  // RVA: 0x313AD0
};

// Namespace: <global>
class SpecialSpawnParams
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* levelType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float distanceThreshold; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t minSpawnRange; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t maxSpawnRange; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* anchorName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 anchorOffset; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool hostSpawn; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x313E50
};

// Namespace: <global>
class SpecialSpawnGroupDescriptor : public SpawnGroupDescriptor
{
public:
    uint8_t pad_0000[0x58]; // 0x0000
    Il2CppString* spawnCooldown; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    SpecialSpawnParams* spawnParams; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    SpawnCooldownDescriptor* mSpawnCooldownDescriptor; // 0x0068

    // Methods
    float Evaluate(Player* player, Level* playerLevel);  // RVA: 0x313C40
    void Initialise(SpawnDatabase* spawnDatabase);  // RVA: 0x313D80
    void .ctor();  // RVA: 0x313AD0
};

// Namespace: <global>
struct SpawnTrigger
{
public:
    // Static fields
    // static SpawnTrigger Timetable;
    // static SpawnTrigger Global;
    // static SpawnTrigger Instanced;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class SpawnTriggerDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SpawnTrigger trigger; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* spawnGroup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SpawnGroupDescriptor* spawnGroupDescriptor; // 0x0030

    // Methods
    void Initialise(SpawnDatabase* spawnDatabase);  // RVA: 0x313B50
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class SpawnCooldownDescriptor : public Descriptor
{
public:
    // Static fields
    // static int32_t PRE_SPAWN_COOLDOWN;
    // static int32_t FAIL_SPAWN_COOLDOWN;

    uint8_t pad_0000[0x20]; // 0x0000
    int32_t despawnCooldown; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t destroyCooldown; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Il2CppString* delayCooldownLevelType; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<EventTrigger> despawnTriggers; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<EventTrigger> destroyTriggers; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<EventTrigger> spawnFailTriggers; // 0x0040

    // Methods
    bool Evaluate();  // RVA: 0x312590
    void ProcessEventTriggers(System.Collections.Generic.List<EventTrigger> eventTriggers);  // RVA: 0x312830
    bool CanStartCooldown();  // RVA: 0x3123A0
    int32_t ProcessItemRemovedCooldown(int32_t cooldownTime);  // RVA: 0x312A00
    void ClearCooldown();  // RVA: 0x312520
    bool OnPreSpawn();  // RVA: 0x3126E0
    void OnSpawned();  // RVA: 0x3127C0
    int32_t OnItemRemoved(bool despawned);  // RVA: 0x312690
    void OnFailSpawn(bool processFailEventTriggers);  // RVA: 0x312600
    void .ctor();  // RVA: 0x312BE0
};

// Namespace: <global>
class SpawnGroupCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x313680
};

// Namespace: <global>
class SpawnDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    SpawnGroupCollection* spawnGroupCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DescriptorCollection<SpecialSpawnGroupDescriptor> specialSpawnGroupCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DescriptorCollection<SpawnTriggerDescriptor> spawnTriggerCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    DescriptorCollection<SpawnCooldownDescriptor> spawnCooldownCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<SpawnTriggerDescriptor> timetableSpawnTriggers; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<SpawnTriggerDescriptor> globalSpawnTriggers; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<SpawnTriggerDescriptor> dynamicSpawnTriggers; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.Dictionary<System.String,SpawnCooldownDescriptor> spawnCooldownDictionary; // 0x0060

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x312F20
    void AppendOnlineDataHashs(System.Collections.Generic.List<System.String> hashs);  // RVA: 0x312C00
    void Initialise();  // RVA: 0x3132D0
    void InitialiseSpawnTriggers();  // RVA: 0x313060
    SpawnGroupDescriptor* GetSpawnGroupDescriptor(int32_t index);  // RVA: 0x312E10
    SpecialSpawnGroupDescriptor* GetSpecialSpawnGroupDescriptor(int32_t index);  // RVA: 0x312EC0
    SpawnGroupDescriptor* GetSpawnGroupDescriptor(Il2CppString* name);  // RVA: 0x312D90
    SpawnCooldownDescriptor* GetSpawnCooldownDescriptor(Il2CppString* name);  // RVA: 0x312CC0
    SpawnCooldownDescriptor* GetSpawnCooldownDescriptor(int32_t index);  // RVA: 0x312D30
    void .ctor();  // RVA: 0x313580
};

// Namespace: <global>
struct SpriteTextureIndex
{
public:
    // Static fields
    // static SpriteTextureIndex Tile;
    // static SpriteTextureIndex Surface;
    // static SpriteTextureIndex Shadow;
    // static SpriteTextureIndex World;
    // static SpriteTextureIndex Overlay;
    // static SpriteTextureIndex UI;
    // static SpriteTextureIndex World_UI;
    // static SpriteTextureIndex SurfaceMask;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct SpriteFlags
{
public:
    // Static fields
    // static SpriteFlags None;
    // static SpriteFlags Pad8;
    // static SpriteFlags Pad16;
    // static SpriteFlags PadH16;
    // static SpriteFlags PremultiplyAlpha;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class SpriteDescriptor : public Descriptor
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<SpriteTextureIndex,System.ValueTuple<SpriteTextureIndex,SpriteRenderLayer>>
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* texture; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SpriteTextureIndex textureIndex; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 position; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    Vector2 size; // 0x0034
    uint8_t pad_0035[0x7]; // 0x0035
    Vector3 offset; // 0x003C
    uint8_t pad_003D[0xB]; // 0x003D
    float depth; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float windFactor; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    bool flat; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<SpriteRenderFlags> spriteRenderFlags; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t spriteRenderFlagField; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<SpriteFlags> spriteFlags; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    SpriteFlags spriteFlagField; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    Rect uiRect; // 0x0074
    uint8_t pad_0075[0xF]; // 0x0075
    Rect rect; // 0x0084
    uint8_t pad_0085[0xF]; // 0x0085
    float xMin; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    float xMax; // 0x0098
    uint8_t pad_0099[0x3]; // 0x0099
    float yMin; // 0x009C
    uint8_t pad_009D[0x3]; // 0x009D
    float yMax; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    Vector2 sizePPU; // 0x00A4
    uint8_t pad_00A5[0x7]; // 0x00A5
    Vector3 offsetPPU; // 0x00AC
    uint8_t pad_00AD[0xB]; // 0x00AD
    Vector3 offsetPPUFlipped; // 0x00B8
    uint8_t pad_00B9[0xB]; // 0x00B9
    SpriteTextureIndex packedTextureIndex; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    int32_t renderLayer; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    bool isUITexture; // 0x00CC

    // Methods
    void Initialise();  // RVA: 0x318010
    void PostInitialiseUI(Rect textureRect, Vector2 textureSize);  // RVA: 0x3182E0
    void PostInitialise(Rect textureRect, Vector2 textureSize, float ppu, bool flipY, bool addRect);  // RVA: 0x318320
    Vector3 OffsetPPU(bool flipped);  // RVA: 0x3182A0
    void .ctor();  // RVA: 0x318700
    static void .cctor();  // RVA: 0x3184B0
};

// Namespace: <global>
class CompositeSpriteElement
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool flipSprite; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float skewScale; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    Il2CppString* sprite; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* glitchOverlaySprite; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector3 position; // 0x0028
    uint8_t pad_0029[0xF]; // 0x0029
    SpriteDescriptor* mSpriteDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteDescriptor* mGlitchOverlaySpriteDescriptor; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector3 mPosition; // 0x0048

    // Methods
    void Initialise(float ppu, SpriteDatabase* spriteDatabase);  // RVA: 0x307A20
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class CompositeSpriteClusterVariant
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<CompositeSpriteElement> elements; // 0x0010

    // Methods
    void Initialise(float ppu, SpriteDatabase* spriteDatabase);  // RVA: 0x3077B0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class CompositeSpriteDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<CompositeSpriteClusterVariant> variants; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool hasGlitchOverlaySprites; // 0x0028

    // Methods
    void Initialise(float ppu, SpriteDatabase* spriteDatabase);  // RVA: 0x3078B0
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class SpriteObjectBase : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Vector3 position; // 0x0018
    uint8_t pad_0019[0xB]; // 0x0019
    float uvFacing; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float alpha; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float angle; // 0x002C

    // Methods
    void Initialise();  // RVA: 0x318760
    SpriteDescriptor* GetSpriteDescriptor();  // RVA: 0x3094F0
    void Render(GameRendering* gameRendering, Vector3 position, int32_t renderFlags);  // RVA: 0x2C1B90
    void Render(GameRendering* gameRendering, SpriteDescriptor* spriteDescriptor, int32_t renderFlags);  // RVA: 0x2C1B90
    void SortedRender(SpritesRenderer* renderer, float depth, bool flat, int32_t renderFlags, float emissiveFactor);  // RVA: 0x2C1B90
    void SortedRenderUI(SpritesRenderer* renderer, Vector3 _position, Vector2 _facing, int32_t renderFlags);  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x309300
};

// Namespace: <global>
class SpriteObject : public SpriteObjectBase
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    SpriteDescriptor* spriteDescriptor; // 0x0030

    // Methods
    void Initialise(SpriteDescriptor* descriptor);  // RVA: 0x3187D0
    SpriteDescriptor* GetSpriteDescriptor();  // RVA: 0x3187C0
    void Render(GameRendering* gameRendering, Vector3 position, int32_t renderFlags);  // RVA: 0x318850
    void Render(GameRendering* gameRendering, SpriteDescriptor* spriteDescriptor, int32_t renderFlags);  // RVA: 0x318960
    void SortedRender(SpritesRenderer* renderer, float depth, bool flat, int32_t renderFlags, float emissiveFactor);  // RVA: 0x318A10
    void .ctor();  // RVA: 0x309300
};

// Namespace: <global>
class HealthBar : public SpriteObject
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    SpriteDescriptor* spriteBGDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float heightOffset; // 0x0040

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, float _heightOffset);  // RVA: 0x309030
    void Render(SpritesRenderer* renderer, Item* item, float health, float maxHealth);  // RVA: 0x3090F0
    void .ctor();  // RVA: 0x309300
};

// Namespace: <global>
class SpriteSheet
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SpriteTextureIndex textureIndex; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Material* material; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Texture2D* texture; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* textureName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool preMultiplyAlpha; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* textureSaveName; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x318A60
};

// Namespace: <global>
class SpriteCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x313E70
};

// Namespace: <global>
class CompositeSpriteCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x307870
};

// Namespace: <global>
class SpriteDatabaseBase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    float ppu; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<SpriteSheet> spriteSheets; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool preMultiplyAlpha; // 0x0038
    bool flipY; // 0x0039
    bool packTextures; // 0x003A
    uint8_t pad_003B[0x5]; // 0x003B
    Il2CppString* textureSaveName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.Dictionary<SpriteTextureIndex,SpriteSheet> spriteSheetDictionary; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.Dictionary<SpriteTextureIndex,System.Collections.Generic.Dictionary<System.String,UnityEngine.Rect>> textureRects; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.Dictionary<System.String,UnityEngine.Rect> textureRectsUI; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool mInitialised; // 0x0060

    // Methods
    void Initialise(Il2CppString* modPath);  // RVA: 0x313EB0
    SpriteDescriptor* GetSprite(int32_t id);  // RVA: 0x3094F0
    SpriteDescriptor* GetSprite(Il2CppString* name);  // RVA: 0x3094F0
    void .ctor();  // RVA: 0x314120
};

// Namespace: <global>
class TextureLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Texture2D* texture; // 0x0018

    // Methods
    void .ctor(Il2CppString* _name, Texture2D* _texture);  // RVA: 0x31C8D0
};

// Namespace: <global>
class SpriteDatabase : public SpriteDatabaseBase
{
public:
    uint8_t pad_0000[0x68]; // 0x0000
    System.Collections.Generic.List<SpriteCollection> collections; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    CompositeSpriteCollection* compositeSpriteCollection; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<SpriteDescriptor> itemList; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.Dictionary<System.String,SpriteDescriptor> itemDictionary; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.Dictionary<System.String,CompositeSpriteDescriptor> compositeSpriteDictionary; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.Dictionary<System.String,UnityEngine.Texture2D> builtInTexturesMap; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<TextureLookup> builtInTexturesList; // 0x0098

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x314A00
    void AddCollection();  // RVA: 0x314130
    void FlipY();  // RVA: 0x314550
    void Initialise();  // RVA: 0x314B30
    void Initialise(Il2CppString* modPath);  // RVA: 0x314B50
    void PostInitialiseUISprite(SpriteDescriptor* spriteDescriptor);  // RVA: 0x317A10
    void PostInitialiseSprite(SpriteDescriptor* spriteDescriptor);  // RVA: 0x317750
    Texture2D* LoadTextureForPacking(Il2CppString* modPath, Il2CppString* filename, SpriteFlags spriteFlags, bool builtIn, bool logMissing);  // RVA: 0x315610
    Texture2D* PadTiledTexture(Texture2D* texture, int32_t tileSize, int32_t paddingX, int32_t paddingY, Il2CppString* outputFilename);  // RVA: 0x317250
    Texture2D* UnpadTiledTexture(Texture2D* texture, int32_t tileSize, Il2CppString* outputFilename);  // RVA: 0x317CC0
    void PremultiplyAlpha(Texture2D* texture);  // RVA: 0x317B50
    void PackTexturesUI(Il2CppString* modPath);  // RVA: 0x315C40
    void PackTextures(Il2CppString* modPath);  // RVA: 0x316300
    static Il2CppString* AppendFileSuffix(Il2CppString* filename, Il2CppString* fileSuffix);  // RVA: 0x314220
    void ConvertImage();  // RVA: 0x3142C0
    SpriteDescriptor* GetSprite(int32_t id);  // RVA: 0x314910
    SpriteDescriptor* GetSprite(Il2CppString* name);  // RVA: 0x314990
    CompositeSpriteDescriptor* GetCompositeSprite(Il2CppString* name);  // RVA: 0x314730
    SpriteDescriptor* GetSpriteFromList(Il2CppString* name);  // RVA: 0x3147A0
    void .ctor();  // RVA: 0x317F80
};

// Namespace: <global>
struct LanguageTag
{
public:
    // Static fields
    // static LanguageTag System;
    // static LanguageTag English;
    // static LanguageTag SimplifiedChinese;
    // static LanguageTag TraditionalChinese;
    // static LanguageTag Japanese;
    // static LanguageTag Russian;
    // static LanguageTag Spanish;
    // static LanguageTag BrazilianPortuguese;
    // static LanguageTag German;
    // static LanguageTag French;
    // static LanguageTag Korean;
    // static LanguageTag Ukrainian;
    // static LanguageTag NumLanguageTags;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class Languages
{
public:
    // Static fields
    // static System.Collections.Generic.List<Languages.LanguageTag> sLanguageTagDisplayOrder;
    // static System.Collections.Generic.Dictionary<Languages.LanguageTag,System.ValueTuple<System.String,System.String,System.    // static System.Collections.Generic.Dictionary<System.String,Languages.LanguageTag> sLanguageTagLookupTable;


    // Methods
    void .ctor();  // RVA: 0x2C1750
    static void .cctor();  // RVA: 0x309920
};

// Namespace: <global>
class LanguageDictionary : public Dictionary`2
{
public:

    // Methods
    void .ctor();  // RVA: 0x3098E0
    XmlSchema* GetSchema();  // RVA: 0x3094F0
    void ReadXml(XmlReader* reader);  // RVA: 0x309500
    void WriteXml(XmlWriter* writer);  // RVA: 0x3096E0
};

// Namespace: <global>
class StringItem
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool demoContent; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.String> translationList; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LanguageDictionary* translations; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x31AC00
    void .ctor(Il2CppString* _name, int32_t numTranslations, bool _demoContent);  // RVA: 0x31AC80
    Il2CppString* GetDefaultText();  // RVA: 0x31A870
    Il2CppString* GetText(int32_t translationIndex);  // RVA: 0x31A910
    void PostXMLImport();  // RVA: 0x31A9B0
};

// Namespace: <global>
class StringCollection
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* idPrefix; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool stripDemoContent; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<StringItem> items; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x318B10
    void .ctor(Il2CppString* _name);  // RVA: 0x318B90
    void PostXMLImport();  // RVA: 0x318A70
};

// Namespace: <global>
class StringCollections
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<StringCollection> items; // 0x0010

    // Methods
    void PostXMLImport();  // RVA: 0x318C50
    void .ctor();  // RVA: 0x318D80
};

// Namespace: <global>
class StringDatabase : public ScriptableDatabase
{
public:
    // Static fields
    // static StringDatabase* instance;

    uint8_t pad_0000[0x28]; // 0x0000
    Il2CppString* xmlFilename; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* tsvPath; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    StringCollections* stringCollections; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    StringManager* stringManager; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    StringBuilder* mStringBuilder; // 0x0048

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x319A00
    void Initialise(LanguageTag language);  // RVA: 0x319DF0
    void AddCollection(Il2CppString* idPrefix, StringCollection* stringCollection, int32_t translationIndex);  // RVA: 0x318E00
    void Stats();  // RVA: 0x31A140
    void DetectDuplicates();  // RVA: 0x319750
    int32_t CountDuplicates(bool displayDetails);  // RVA: 0x318F90
    Il2CppString* ValidateText(Il2CppString* name);  // RVA: 0x31A5B0
    Il2CppString* GetText(Il2CppString* stringID);  // RVA: 0x319990
    Il2CppString* GetText(Il2CppString* stringID, Il2CppString* idToken, Il2CppString* idReplace);  // RVA: 0x319760
    Il2CppString* GetText(Il2CppString* stringID, Il2CppString* idToken1, Il2CppString* idReplace1, Il2CppString* idToken2, Il2CppString* idReplace2);  // RVA: 0x319870
    void .ctor();  // RVA: 0x31A730
};

// Namespace: <global>
class SurfaceTileTypeDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* spriteRefName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* cornerSetName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Color32 colorLookup; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t mSurfaceGroup; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    System.Collections.Generic.List<System.Int32> mCompatibleGroups; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* mDoorJambName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SpriteDescriptor* spriteDescriptorRef; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SurfaceTileTypeDescriptor* doorJambDescriptor; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    MiniTileCornerSetDescriptor* mSurfaceTileCornerSetDescriptor; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.Dictionary<System.Int32,System.Boolean> mCompatibleGroupsMap; // 0x0060

    // Methods
    void Initialise(SpriteDatabase* spriteDatabase, SurfaceTileDatabase* surfaceTileDatabase);  // RVA: 0x31C6B0
    void SetCornerSetDescriptor(MiniTileCornerSetDescriptor* surfaceTileCornerSetDescriptor);  // RVA: 0x31C840
    bool CompatibleSurfaceGroup(int32_t surfaceGroup);  // RVA: 0x31C310
    float CalculateDepth(Level* level, int32_t c, int32_t r);  // RVA: 0x31BB20
    Vector2 CalculateUVOffset(Level* level, int32_t c, int32_t r);  // RVA: 0x31BE70
    Vector2 CalculateUVOffset(int32_t bitFlags);  // RVA: 0x31BDF0
    Rect CalculateUVRect(Level* level, int32_t c, int32_t r);  // RVA: 0x31C250
    Rect CalculateUVRect(int32_t bitFlags);  // RVA: 0x31C1D0
    MiniTileDescriptor* GetMiniTileDescriptor(int32_t bitFlags);  // RVA: 0x31C370
    MiniTileDescriptor* GetMiniTileDescriptor(Level* level, int32_t c, int32_t r);  // RVA: 0x31C390
    void AddShadowEdges(Level* level, int32_t c, int32_t r, Vector2 centerPos, System.Collections.Generic.List<UnityEngine.Vector3> shadowEdges);  // RVA: 0x31B490
    void .ctor();  // RVA: 0x31C850
};

// Namespace: <global>
class SurfaceTileDescriptorCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x31B430
};

// Namespace: <global>
class SurfaceTileObject : public SpriteObjectBase
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    SurfaceTileTypeDescriptor* surfaceTileDescriptor; // 0x0030

    // Methods
    void Initialise(SurfaceTileTypeDescriptor* descriptor);  // RVA: 0x3187D0
    SpriteDescriptor* GetSpriteDescriptor();  // RVA: 0x31B470
    void .ctor();  // RVA: 0x309300
};

// Namespace: <global>
class SurfaceTileDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    SpriteDatabase* spriteDatabase; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Material* material; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    CornerSetDescriptorCollection* cornerSetCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SurfaceTileDescriptorCollection* surfaceTileCollection; // 0x0040

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x31AF60
    void Initialise();  // RVA: 0x31B020
    SurfaceTileTypeDescriptor* GetDescriptor(Il2CppString* name);  // RVA: 0x31AF00
    SurfaceTileTypeDescriptor* GetDescriptor(int32_t id);  // RVA: 0x31AEA0
    void .ctor();  // RVA: 0x2F1890
};

// Namespace: <global>
class VegetationGrowthDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* vegetationName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float birthChance; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float deathChance; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t vegetationType; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<System.Int32> vegetationList; // 0x0038

    // Methods
    void Initialise(ItemDatabase* itemDatabase);  // RVA: 0x31D310
    void AddVegetationItem(Il2CppString* descName, ItemDatabase* itemDatabase);  // RVA: 0x31D0F0
    int32_t GetVegetationType(float age, float maxAge);  // RVA: 0x31D230
    void .ctor();  // RVA: 0x31D3A0
};

// Namespace: <global>
class VegetationItemWeight
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* vegetationName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float weight; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t vegetationType; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t vegetationGrowthDescsIndex; // 0x0020

    // Methods
    void Initialise(VegetationGrowthCollection* vegetationGrowthCollection);  // RVA: 0x31D420
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct VegetationEdgeType
{
public:
    // Static fields
    // static VegetationEdgeType None;
    // static VegetationEdgeType Road;
    // static VegetationEdgeType Water;
    // static VegetationEdgeType Coast;
    // static VegetationEdgeType MAX;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class VegetationEdgeGroup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    VegetationEdgeType edgeType; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* groupName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float densityModifier; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t groupIndex; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x31CA40
};

// Namespace: <global>
class VegetationGroupDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<VegetationItemWeight> vegetationWeights; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<VegetationEdgeGroup> edgeGroups; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* densityMapName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MapGenerator* vegetationDensityMap; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float combinedWeight; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.Int32> edgeGroupIndex; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<System.Single> edgeGroupDensityModifier; // 0x0050

    // Methods
    void Initialise(VegetationGrowthCollection* vegetationGrowthcollection, VegetationGroupCollection* vegetationGroupCollection);  // RVA: 0x31CB40
    VegetationItemWeight* GetVegetationItemWeight();  // RVA: 0x31CA50
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class VegetationGroupElement
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* vegetationGroupName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    float vegetationWeightModifier; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float minWeight; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float maxWeight; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* weightMapName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    MapGenerator* vegetationWeightMap; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VegetationGroupDescriptor* vegetationGroup; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t vegetationGroupindex; // 0x0040

    // Methods
    void Initialise(VegetationGroupCollection* vegetationGroupCollection);  // RVA: 0x334EA0
    VegetationItemWeight* GetVegetationGroupItem();  // RVA: 0x334E80
    void .ctor();  // RVA: 0x335060
};

// Namespace: <global>
class VegetationSetDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.List<VegetationGroupElement> vegetationGroupElements; // 0x0020

    // Methods
    void Initialise(VegetationGroupCollection* vegetationGroupCollection);  // RVA: 0x3352D0
    int32_t GetVegetationGroupIndex(int32_t col, int32_t row);  // RVA: 0x335100
    void .ctor();  // RVA: 0x2C25C0
};

// Namespace: <global>
class BiomeTileType
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* tileTypeName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t tileType; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float weightMin; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float weightMax; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float vegetationDensityMin; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float vegetationDensityMax; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* weightMapName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* VegetationSetName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    MapGenerator* weightMap; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    VegetationSetDescriptor* vegetationSetDescriptor; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    int32_t vegetationSetIndex; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float mInverseWeightRange; // 0x005C

    // Methods
    void Initialise(MiniTileDatabase* miniTileDatabase);  // RVA: 0x31EAF0
    bool Evaluate(int32_t col, int32_t row);  // RVA: 0x31EA20
    float EvaluateVegetationDensity(int32_t col, int32_t row);  // RVA: 0x31E900
    void .ctor();  // RVA: 0x31EC10
};

// Namespace: <global>
class StringLookup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t index; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class BiomeDescriptor : public Descriptor
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    float weight; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    StringLookup* ambientAudioEvent; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    StringLookup* oceanAmbientAudioEvent; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    StringLookup* riverAmbientAudioEvent; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    StringLookup* waterAmbientAudioEvent; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    StringLookup* lavaAmbientAudioEvent; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    AudioLabel* musicAudioParam; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Il2CppString* timeTableName; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TimeTableDescriptor* timeTableDescriptor; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<BiomeTileType> biomeTileTypes; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Color biomeColor; // 0x0070

    // Methods
    void Initialise(VegetationSetCollection* vegetationSetDescriptors, MiniTileDatabase* miniTileDatabase, CalendarDatabase* calendarDatabase);  // RVA: 0x31E490
    void .ctor();  // RVA: 0x31E8E0
};

// Namespace: <global>
class VegetationGrowthCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x335080
};

// Namespace: <global>
class VegetationGroupCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x334E40
};

// Namespace: <global>
class VegetationSetCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x3350C0
};

// Namespace: <global>
class BiomeCollection : public DescriptorCollection`1
{
public:

    // Methods
    void .ctor();  // RVA: 0x31E450
};

// Namespace: <global>
class VegetationGenerationDatabase : public ScriptableDatabase
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    VegetationGrowthCollection* vegetationGrowthCollection; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VegetationGroupCollection* vegetationGroupCollection; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    VegetationSetCollection* vegetationSetCollection; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    BiomeCollection* biomeCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.String> biomeAmbientEvents; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    CalendarDatabase* calendarDatabase; // 0x0050

    // Methods
    void ImportXMLData(Il2CppString* modPath);  // RVA: 0x334310
    void Initialise();  // RVA: 0x334450
    void PopulateBiomeAudioEvent(StringLookup* ambientBiomeLookup);  // RVA: 0x334BB0
    VegetationGrowthDescriptor* GetVegetationGrowthDescriptor(Il2CppString* name);  // RVA: 0x3341D0
    VegetationGrowthDescriptor* GetVegetationGrowthDescriptor(int32_t index);  // RVA: 0x334150
    VegetationGroupDescriptor* GetVegetationGroupDescriptor(Il2CppString* name);  // RVA: 0x334070
    VegetationGroupDescriptor* GetVegetationGroupDescriptor(int32_t index);  // RVA: 0x3340D0
    VegetationSetDescriptor* GetVegetationSetDescriptor(Il2CppString* name);  // RVA: 0x334230
    VegetationSetDescriptor* GetVegetationSetDescriptor(int32_t index);  // RVA: 0x334290
    BiomeDescriptor* GetBiomeDescriptor(Il2CppString* name);  // RVA: 0x333F90
    BiomeDescriptor* GetBiomeDescriptor(int32_t index);  // RVA: 0x333FF0
    void .ctor();  // RVA: 0x334C60
};

// Namespace: <global>
struct LogType
{
public:
    // Static fields
    // static LogType None;
    // static LogType MapGeneration;
    // static LogType SaveLoad;
    // static LogType Animation;
    // static LogType Game;
    // static LogType GameState;
    // static LogType Input;
    // static LogType Render;
    // static LogType UI;
    // static LogType Audio;
    // static LogType Initialisation;
    // static LogType Platform;
    // static LogType Online;
    // static LogType GameMsg;
    // static LogType All;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct LogLevel
{
public:
    // Static fields
    // static LogLevel Trace;
    // static LogLevel Debug;
    // static LogLevel Info;
    // static LogLevel Warning;
    // static LogLevel Error;
    // static LogLevel Force;
    // static LogLevel None;
    // static LogLevel Max;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class LogOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LogType logType; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    LogLevel logLevel; // 0x0014

    // Methods
    void .ctor();  // RVA: 0x321210
};

// Namespace: <global>
class LogSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LogType logType; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    LogLevel logLevel; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    System.Collections.Generic.List<LogOverride> logOverrides; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.Int32> logLevels; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool logStackTrace; // 0x0028
    bool unityPlayerLog; // 0x0029

    // Methods
    LogSettings* Validate();  // RVA: 0x3212C0
    bool IsLogEnabled(LogType _logType, LogLevel _logLevel);  // RVA: 0x321230
    void .ctor();  // RVA: 0x3214A0
};

// Namespace: <global>
struct CameraMode
{
public:
    // Static fields
    // static CameraMode Player;
    // static CameraMode Free;
    // static CameraMode Combined;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class DebugSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool editMode; // 0x0010
    bool devMode; // 0x0011
    bool damageEnabled; // 0x0012
    bool audio; // 0x0013
    bool onlineMovement; // 0x0014
    bool validateMessages; // 0x0015
    bool onlineTimeouts; // 0x0016
    bool endlessRejoin; // 0x0017
    bool publicLobby; // 0x0018
    bool convertSpawnTemplates; // 0x0019
    bool playerVisible; // 0x001A
    bool playerAnimOverrideEnabled; // 0x001B
    uint8_t pad_001C[0x4]; // 0x001C
    Il2CppString* playerAnimOverride; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool playerRaycast; // 0x0028
    bool useOnCollectEnabled; // 0x0029
    bool miniMapBiomes; // 0x002A
    bool behaviour; // 0x002B
    CameraMode cameraMode; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float freeCameraSpeed; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<UnityEngine.Vector2Int> testResolutions; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t testResolutionIndex; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    bool playerSavesEnabled; // 0x0044
    bool worldSavesEnabled; // 0x0045
    bool saveCompression; // 0x0046
    bool saveGameTileValidate; // 0x0047
    bool saveEnemies; // 0x0048
    bool savePlayerPosition; // 0x0049
    bool saveProjectiles; // 0x004A
    bool multithreadedPathfinding; // 0x004B
    bool showDebugCommandText; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float fixedTimeOfDay; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    Vector2Int loadGameTileBreakpoint; // 0x0054

    // Methods
    bool EditModeActive(bool testHost);  // RVA: 0x31ED40
    bool DamageEnabled(bool testHost);  // RVA: 0x31EC80
    bool DevModeActive();  // RVA: 0x31ECE0
    void .ctor();  // RVA: 0x31EDE0
};

// Namespace: <global>
class GeneralSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool autosaveEnabled; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float autosaveTimerMin; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float autosaveTimerMax; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    bool runInBackground; // 0x001C

    // Methods
    void .ctor();  // RVA: 0x320C60
};

// Namespace: <global>
class GraphicsSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t fullScreenMode; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t screenWidth; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t screenHeight; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    RefreshRate refreshRateRatio; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    bool vSync; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t targetFrameRate; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    bool sparseGrass; // 0x002C
    bool ambientShadows; // 0x002D
    bool displayFPS; // 0x002E
    bool pixelPerfectZoom; // 0x002F
    bool perspectiveMode; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t shaderVariant; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool previousFullScreen; // 0x0038

    // Methods
    GraphicsSettings* Validate(GraphicsSettings* defaults);  // RVA: 0x320C80
    void .ctor();  // RVA: 0x320CC0
};

// Namespace: <global>
class LanguageSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* language; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LanguageTag languageTag; // 0x0018

    // Methods
    LanguageTag GetLanguageTag();  // RVA: 0x320CF0
    void SetLanguageTag(LanguageTag _languageTag);  // RVA: 0x320F70
    LanguageTag GetSystemLanguage();  // RVA: 0x320D10
    LanguageSettings* Validate();  // RVA: 0x3210A0
    void Initialise();  // RVA: 0x320EE0
    void .ctor();  // RVA: 0x3211C0
};

// Namespace: <global>
class UserInterfaceSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool pixelFont; // 0x0010
    bool damageText; // 0x0011
    bool pickupText; // 0x0012
    bool enemyText; // 0x0013
    bool npcText; // 0x0014
    bool objectText; // 0x0015
    bool showGamepadCursor; // 0x0016
    bool placeAtCursorLimit; // 0x0017
    bool showHotbarNumbers; // 0x0018
    bool exitSplashSeen; // 0x0019
    uint8_t pad_001A[0x2]; // 0x001A
    int32_t exitSplashCount; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    bool oldVersionWarning; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x333F70
};

// Namespace: <global>
class ControlSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* rebinds; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x31EC30
};

// Namespace: <global>
class AudioSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float masterVolume; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float musicVolume; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float ambientVolume; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float sfxVolume; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float uiVolume; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float ambientBlendPower; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    float ambientPondModifier; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float ambientRiverModifier; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float ambientLavaModifier; // 0x0030

    // Methods
    AudioSettings* Validate();  // RVA: 0x31E360
    bool SetMasterVolume(float value);  // RVA: 0x31E020
    bool SetMusicVolume(float value);  // RVA: 0x31E0F0
    bool SetAmbientVolume(float value);  // RVA: 0x31DF80
    bool SetSFXVolume(float value);  // RVA: 0x31E1C0
    bool SetUIVolume(float value);  // RVA: 0x31E290
    void .ctor();  // RVA: 0x31E400
};

// Namespace: <global>
struct LobbyType
{
public:
    // Static fields
    // static LobbyType Private;
    // static LobbyType Friends;
    // static LobbyType Public;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class NetworkSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LobbyType lobbyType; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x321530
};

// Namespace: <global>
class SettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    DebugSettings* debug; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LogSettings* log; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GeneralSettings* general; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    LanguageSettings* language; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GraphicsSettings* graphics; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    UserInterfaceSettings* userInterface; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ControlSettings* controls; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AudioSettings* audio; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    NetworkSettings* network; // 0x0050

    // Methods
    void Initialise();  // RVA: 0x321BB0
    void CopyData(SettingsData* sourceData);  // RVA: 0x321870
    bool ShouldSerializedebug();  // RVA: 0x321C40
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class <ApplyScreenChange>d__15
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Settings* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t width; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t height; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    FullScreenMode fullScreenMode; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x333F40
    void System.IDisposable.Dispose();  // RVA: 0x2C1B90
    bool MoveNext();  // RVA: 0x333AD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x333EF0
    void System.Collections.IEnumerator.Reset();  // RVA: 0x333F00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x333EF0
};

// Namespace: <global>
class Settings : public MonoBehaviour
{
public:
    // Static fields
    // static Settings* instance;

    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* xmlFilename; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* mUserRelativeFilename; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SettingsData* data; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    IEnumerator* applyResolutionCoroutine; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool pendingResolutionChange; // 0x0040
    bool mIsDirty; // 0x0041
    uint8_t pad_0042[0x6]; // 0x0042
    System.Collections.Generic.List<System.String> logLevelStrings; // 0x0048

    // Methods
    void Initialise();  // RVA: 0x322A40
    void MoveOldSaves();  // RVA: 0x322FB0
    void PrefillSettings();  // RVA: 0x323560
    void PrefillLogSettings();  // RVA: 0x323530
    void PrefillDefaultResolution(bool apply);  // RVA: 0x323290
    void PrefillGraphicsSettings();  // RVA: 0x3234E0
    void ApplyGraphicsSettings(bool markDirty);  // RVA: 0x321E30
    IEnumerator* ApplyScreenChange(int32_t width, int32_t height, FullScreenMode fullScreenMode);  // RVA: 0x322630
    void ApplyAudioSettings();  // RVA: 0x321C90
    void ImportXML();  // RVA: 0x3228B0
    void Clear();  // RVA: 0x3226D0
    void ExportXML();  // RVA: 0x322760
    void SaveSettings(bool force);  // RVA: 0x3235C0
    void MarkDirty();  // RVA: 0x322FA0
    Il2CppString* GetLogLevelString(LogLevel _logLevel);  // RVA: 0x322830
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class PlayerOverrideSettingsData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ControlSettings* controls; // 0x0010

    // Methods
    void CopyData(PlayerOverrideSettingsData* sourceData);  // RVA: 0x321570
    void CopyData(SettingsData* sourceData);  // RVA: 0x321540
    void .ctor();  // RVA: 0x3215A0
};

// Namespace: <global>
class PlayerOverrideSettings
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerOverrideSettingsData* data; // 0x0010

    // Methods
    void ImportXML(Il2CppString* xmlFilename);  // RVA: 0x3216B0
    void ExportXML(Il2CppString* xmlFilename);  // RVA: 0x321640
    void .ctor();  // RVA: 0x321780
};

// Namespace: <global>
class ShadowRenderer : public SpritesRenderer
{
public:

    // Methods
    void Add(SpriteDescriptor* spriteDescriptor, Vector3 position, Vector3 offset, float depth, float alpha, bool flipped, int32_t renderFlags);  // RVA: 0x3236F0
    void Add(Vector3 position, Vector2 size, Vector3 offset, float alpha, bool flipped, Rect uvRect, int32_t renderFlags);  // RVA: 0x3237B0
    void .ctor();  // RVA: 0x323900
};

// Namespace: <global>
class DynamicSpawnGroup
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SpawnGroupDescriptor* mSpawnGroupDescriptor; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t mPriority; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float mPrioritySuppression; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float mScaler; // 0x0020

    // Methods
    void Initialise(SpawnGroupDescriptor* spawnGroupDescriptor, float scaler);  // RVA: 0x320BF0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class DynamicSpawnController
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SimplePool<DynamicSpawnGroup> mDynamicSpawnGroupPool; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    WeightedList<DynamicSpawnGroup> mAvailableSpawnGroups; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.Dictionary<System.String,System.Int32> mAvailableSpawnGroupLookup; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<SpecialSpawnGroupInstance> mGlobalSpawnGroups; // 0x0028

    // Methods
    void PostCreateWorld(bool titleLevel);  // RVA: 0x3208B0
    void Clear();  // RVA: 0x31FF70
    void AddGlobalSpawnGroups();  // RVA: 0x31F510
    void AddGlobalSpawnGroup(SpawnTriggerDescriptor* spawnTrigger);  // RVA: 0x31F340
    void ClearWorkingData();  // RVA: 0x31FE50
    SpawnGroupDescriptor* EvaluateGlobalSpawns(Player* player, GameTile* spawnAnchor);  // RVA: 0x320080
    SpawnGroupDescriptor* GetSpawnGroup(Player* player, Level* playerLevel);  // RVA: 0x320460
    float GetAverageSpawnChance(Player* player, Level* playerLevel, float averageMaxEnemiesModifier);  // RVA: 0x320250
    void PopulateAvailableSpawnGroups(Player* player, Level* playerLevel, bool populatingAverage);  // RVA: 0x320670
    void AddBiomeSpawnGroups(Player* player, Level* playerLevel, bool populatingAverage);  // RVA: 0x31EE80
    void AddWorldTimetableSpawnGroups(Player* player, Level* playerLevel, bool populatingAverage);  // RVA: 0x31FD20
    void AddSpawnGroups(Player* player, Level* playerLevel, System.Collections.Generic.List<SpawnGroupDescriptor> spawnGroupDescriptors, float biomeWeightModifier, bool populatingAverage);  // RVA: 0x31F910
    void AddSpawnGroup(Player* player, Level* playerLevel, SpawnGroupDescriptor* spawnGroupDescriptor, float biomeWeightModifier, bool populatingAverage);  // RVA: 0x31F5D0
    void AddDynamicSpawnGroup(DynamicSpawnGroup* spawnGroup, float weight);  // RVA: 0x31F130
    void IncreaseDynamicSpawnGroupWeight(DynamicSpawnGroup* spawnGroup, int32_t spawnGroupIndex, float weight);  // RVA: 0x3204F0
    void .ctor();  // RVA: 0x320A80
};

// Namespace: <global>
class SpawnGroupInstance : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    SpawnGroupDescriptor* mSpawnGroupDescriptor; // 0x0018

    // Methods
    bool Initialise(SpawnGroupDescriptor* spawnGroupDescriptor);  // RVA: 0x323B00
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class SpecialSpawnGroupInstance : public SpawnGroupInstance
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SpecialSpawnParams* spawnParams; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t mLevelId; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 mPosition; // 0x002C

    // Methods
    bool Initialise(SpawnGroupDescriptor* spawnGroupDescriptor);  // RVA: 0x32C250
    bool Evaluate(Player* player);  // RVA: 0x32C0F0
    GameTile* GetAnchorTile(Level* spawnLevel, GameTile* defaultAnchor);  // RVA: 0x32C160
    void .ctor();  // RVA: 0x32C6B0
};

// Namespace: <global>
class SpawnManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t mMinSpawnDistance; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t mMaxSpawnRange; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t mDespawnDist; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mDebugSpawnModifier; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t mMaxEnemies; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mMaxSpawnTimer; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float mDespawnTimer; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t mMaxCritters; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float mMaxCritterSpawnTimer; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mCritterSpawnTimer; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    SpawnDatabase* mSpawnDatabase; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    DynamicSpawnController* mDynamicSpawnController; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<GameTile> mValidSpawnTiles; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<Player> mClosestPlayerItemDespawnList; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t mTorchId; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    System.Collections.Generic.List<Enemy> mActiveBosses; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<System.ValueTuple<SpawnCooldownDescriptor,System.Int32>> mHostPendingCooldowns; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<System.ValueTuple<SpawnCooldownDescriptor,System.SByte>> mHostPendingPlayerSpecialSpawns; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.HashSet<System.SByte> mIgnoreSpawnClients; // 0x0088

    // Methods
    void Initialise();  // RVA: 0x3265F0
    void Clear();  // RVA: 0x3243F0
    void PostCreateWorld(bool titleLevel);  // RVA: 0x3274F0
    void ProcessHostPendingCooldowns();  // RVA: 0x328430
    void OnEnemyRemoved(Enemy* enemy, bool despawned);  // RVA: 0x3267B0
    void AddHostPendingPlayerSpecialSpawn(SpawnCooldownDescriptor* spawnCooldown, int8_t playerIndex);  // RVA: 0x323B20
    void RemoveHostPendingPlayerSpecialSpawn(SpawnCooldownDescriptor* spawnCooldown);  // RVA: 0x328520
    void RemoveHostPendingPlayerSpecialSpawn(int8_t playerIndex);  // RVA: 0x328610
    void OnPlayerRemoved(Player* player);  // RVA: 0x3269D0
    void PopulateIgnoreSpawnClientList();  // RVA: 0x326D80
    void RemoveIgnoreSpawnClient(int8_t clientIndex);  // RVA: 0x328740
    bool IsIgnoreSpawnClient(int8_t clientIndex);  // RVA: 0x3266F0
    void UpdateTitleScreenSpawns(float dt, ViewController* viewController, int32_t spawnCount);  // RVA: 0x32BAD0
    GameTile* FindValidEnemySpawnTile(GameTile* gameTile);  // RVA: 0x325760
    Enemy* SpawnEnemy(Player* player, Level* playerLevel, SpawnGroupDescriptor* spawnGroupDescriptor, GameTile* spawnAnchor, bool evaluateSpawnTileChance);  // RVA: 0x328FF0
    void SpawnEnemy(int8_t sourceClientIndex, SpawnEnemy msg);  // RVA: 0x329A30
    Enemy* SpawnEnemy(int32_t enemyDescriptorId, int32_t spawnDescriptorId, GameTile* gameTile, Params inEnemyParams, bool equipFixedWeapon, int32_t weaponDescriptorId, Params inWeaponParams);  // RVA: 0x329430
    Enemy* SpawnEnemy(Il2CppString* enemyName, int32_t spawnDescriptorId, GameTile* gameTile);  // RVA: 0x329980
    Enemy* SpawnEnemy(int32_t enemyDescrId, int32_t spawnDescriptorId, GameTile* gameTile);  // RVA: 0x328EA0
    void DespawnEnemy(int8_t sourceClientIndex, DespawnEnemy msg);  // RVA: 0x324BA0
    void DespawnEnemy(Enemy* enemy);  // RVA: 0x3249B0
    void SpawnAnimal(int8_t sourceClientIndex, SpawnAnimal msg);  // RVA: 0x3287A0
    Item* SpawnAnimal(int32_t animalDescriptorId, GameTile* gameTile, Params inAnimalParams);  // RVA: 0x328950
    void DespawnAnimal(int8_t sourceClientIndex, DespawnAnimal msg);  // RVA: 0x324930
    void DespawnAnimal(Animal* animal);  // RVA: 0x324740
    void DespawnItem(Item* item);  // RVA: 0x324C20
    void SpawnSpecialEnemyFailed(int8_t sourceClientIndex, SpawnSpecialEnemyFailed msg);  // RVA: 0x32A6F0
    void OnSpecialEnemySpawnFailed(Il2CppString* name, int32_t spawnDescrId, bool invalidTile);  // RVA: 0x326B10
    void SpawnSpecialEnemy(int8_t sourceClientIndex, SpawnSpecialEnemy msg);  // RVA: 0x32ACD0
    Enemy* SpawnSpecialEnemy(int8_t clientIndex, Player* spawnPlayer, SpawnGroupDescriptor* spawnGroupDesc, ItemDescriptor* enemyDescr, PathfindingType pathfindingType, int32_t col, int32_t row, bool followPlayer, bool evaluateSpawnTileChance, bool isRemoteSpawn, bool invalidTile);  // RVA: 0x32A8C0
    void SpawnBosses(float dt);  // RVA: 0x328C60
    float GetStartSpawnModifier(BiomeDescriptor* primaryBiomeDesc);  // RVA: 0x3264A0
    float GetPlayerJourneyShrineProximitySpawnModifier(Player* player);  // RVA: 0x325EC0
    float CalculateSpawnChance(Player* player, float nearbyEnemyCount, float maxLocalEnemiesScalerPosition);  // RVA: 0x323D80
    Item* SpawnRandomEnemy(Player* player, bool forceSpawn, bool respawn);  // RVA: 0x32A160
    float CalculateCritterSpawnChance(Player* player);  // RVA: 0x323C70
    Item* SpawnRandomCritter(PlayerController* playerController, bool forceSpawn, int32_t minSpawnDistance, int32_t maxSpawnRange);  // RVA: 0x329C00
    void PreSpawnLevel(Player* localPlayer, Level* level);  // RVA: 0x327510
    void UpdateSpawns(float dt, bool forceEnemySpawn, bool forceCritterSpawn);  // RVA: 0x32B3B0
    bool UpdateLocalPlayerEnemySpawn(Player* localPlayer, float spawnRateModifier, float spawnTimer, Item* spawnedItem);  // RVA: 0x32B2E0
    bool UpdateLocalPlayerCritterSpawn(Player* localPlayer, float spawnRateModifier, float spawnTimer, Item* spawnedItem);  // RVA: 0x32B200
    bool ProcessDespawns(System.Collections.Generic.List<PlaceableItem> items, float spawnTimerDelta, int32_t maxLocalItems);  // RVA: 0x328170
    Player* GetClosestLocalPlayer(PlaceableItem* item, float maxEvaluationDist);  // RVA: 0x325BC0
    float GetClosestPlayerDist(Item* referenceItem, float maxRange, float rangeCumulativeWeight);  // RVA: 0x325D20
    bool LocalPlayerWithinRange(PlaceableItem* item, Player* player, float maxEvaluationDist);  // RVA: 0x326750
    bool PlayersWithinDespawnDist(PlaceableItem* item);  // RVA: 0x326B90
    void DespawnAll();  // RVA: 0x3244F0
    void PreSpawnWorld(float dt);  // RVA: 0x327A30
    int32_t GetPlayerNearbyEnemyCount(Player* player);  // RVA: 0x326220
    int32_t GetPlayerNearbyCritterCount(Player* player);  // RVA: 0x326030
    void PopulateSpawnTiles(GameTile* spawnAnchor, Level* spawnLevel, int32_t minSpawnDistance, int32_t maxSpawnRange);  // RVA: 0x326E80
    Vector2 CalculateWeightedEnemyDir(Player* player);  // RVA: 0x324090
    GameTile* FindSpawnPos(Player* player, SpawnGroupDescriptor* spawnGroupDesc, PathfindingType pathfindingType, int32_t col, int32_t row);  // RVA: 0x325460
    GameTile* FindSpawnPos(Player* player, GameTile* spawnAnchor, PathfindingType pathfindingType, int32_t minSpawnDistance, int32_t maxSpawnRange, PathfindingType pathfindingTypeFallback);  // RVA: 0x325070
    GameTile* FindSpawnPos(PlayerController* playerController, PathfindingType pathfindingType, int32_t minSpawnDistance, int32_t maxSpawnRange);  // RVA: 0x325380
    bool EvaluateGameTileSpawnChance(GameTile* spawnTile, SpawnGroupDescriptor* spawnGroupDescriptor);  // RVA: 0x324E60
    bool GameTileContainsTorch(GameTile* gameTile);  // RVA: 0x325810
    bool GameTileInRoomOrPen(GameTile* gameTile);  // RVA: 0x3259F0
    bool GameTileNearTorch(GameTile* gameTile, Level* level);  // RVA: 0x325A90
    float EnemyGameTileSpawnChance(GameTile* gameTile, Level* level, SpawnGroupDescriptor* spawnGroupDescriptor);  // RVA: 0x324CF0
    GameTile* FindSpawnPos(GameTile* spawnAnchor, Level* spawnLevel, int32_t minSpawnDistance, int32_t maxSpawnRange);  // RVA: 0x325660
    ItemDescriptor* GetSpawnItem(SpawnGroupDescriptor* spawnGroupDesc, PathfindingType pathfindingType);  // RVA: 0x3263D0
    void .ctor();  // RVA: 0x32BD70
};

// Namespace: <global>
class SplashScreenInit
{
public:

    // Methods
    static void SetDefaultGraphicsMode();  // RVA: 0x32C6C0
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
struct SpriteRenderFlags
{
public:
    // Static fields
    // static SpriteRenderFlags SRF_ZWRITEOFF;
    // static SpriteRenderFlags SRF_LERPCENTERLIGHT;
    // static SpriteRenderFlags SRF_HIGHLIGHT;
    // static SpriteRenderFlags SRF_OVERLAYTINT;
    // static SpriteRenderFlags SRF_FOOTSTEPSKEW;
    // static SpriteRenderFlags SRF_AMBIENTSHADOWED;
    // static SpriteRenderFlags SRF_WALLEDGELIGHTMAP;
    // static SpriteRenderFlags SRF_OVERLAYSURFACE;
    // static SpriteRenderFlags SRF_HEIGHTFADE;
    // static SpriteRenderFlags SRF_WINDFACTOR;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct SpriteOrientationType
{
public:
    // Static fields
    // static SpriteOrientationType Vert;
    // static SpriteOrientationType Horiz;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct SpriteRenderDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Vector3 position; // 0x0010
    uint8_t pad_0011[0xB]; // 0x0011
    float alpha; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float angle; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float depth; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    Vector3 offset; // 0x0028
    uint8_t pad_0029[0xB]; // 0x0029
    SpriteOrientationType orientation; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t renderFlags; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float emissiveFactor; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Color32 colour; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    Vector2 uv0; // 0x0044
    uint8_t pad_0045[0x7]; // 0x0045
    Vector2 uv1; // 0x004C
    uint8_t pad_004D[0x7]; // 0x004D
    Vector2 uv2; // 0x0054
    uint8_t pad_0055[0x7]; // 0x0055
    Vector2 uv3; // 0x005C
    uint8_t pad_005D[0x7]; // 0x005D
    Vector2 size; // 0x0064

    // Methods
    void .ctor(Vector3 _position, float _angle, Vector2 _size, Vector3 _offset, float _alpha, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, float _depth, SpriteOrientationType _orientation, Color32 _colour, int32_t _renderFlags, float _emissiveFactor);  // RVA: 0x349230
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<SpritesRenderer.SpriteRenderDetails> <>9__35_0;


    // Methods
    static void .cctor();  // RVA: 0x34BEE0
    void .ctor();  // RVA: 0x2C1750
    int32_t <SortedEnd>b__35_0(SpriteRenderDetails x, SpriteRenderDetails y);  // RVA: 0x34B9E0
};

// Namespace: <global>
class SpritesRenderer : public MonoBehaviour
{
public:
    // Static fields
    // static Color32 sInvalidOverlayTint;
    // static Color32 sNeutralOverlayTint;
    // static Color32 sWhiteTint;

    uint8_t pad_0000[0x20]; // 0x0000
    SurfaceTileDatabase* surfaceDatabase; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Material* material; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Material* materialLow; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    MeshFilter* meshFilter; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Mesh* mMesh; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    float mPPU; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    Vector3 mOffset; // 0x004C
    uint8_t pad_004D[0xB]; // 0x004D
    float zScale; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float mClampStepSize; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    bool mUseVertexData; // 0x0060
    bool enableLightMap; // 0x0061
    uint8_t pad_0062[0x6]; // 0x0062
    Texture2D* lightMap; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t mMaxVertices; // 0x0070
    uint8_t pad_0071[0x3]; // 0x0071
    int32_t mMaxSprites; // 0x0074
    uint8_t pad_0075[0x3]; // 0x0075
    System.Collections.Generic.List<SpritesRenderer.SpriteRenderDetails> mRenderSprites; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    System.Collections.Generic.List<UnityEngine.Vector3> mVertices; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<UnityEngine.Vector4> mVertexData; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    System.Collections.Generic.List<UnityEngine.Vector2> mUVs; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<System.Int32> mTriangles; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<UnityEngine.Color32> mColors; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Renderer* meshRenderer; // 0x00A8

    // Methods
    static void PackRenderFloats(float heightFadeAlpha, float windFactor, int32_t renderFlags);  // RVA: 0x3328E0
    static void PackRenderFloatWindFactor(float windFactor, int32_t renderFlags);  // RVA: 0x3328C0
    void Initialise();  // RVA: 0x332520
    void SetShaderVariant(int32_t variant);  // RVA: 0x3329B0
    void Destroy();  // RVA: 0x3320C0
    Vector3 ConvertToRenderPos(Vector3 worldPos);  // RVA: 0x331FC0
    float ConvertToRenderHeight(float height);  // RVA: 0x331F30
    void Begin(float cameraZoom);  // RVA: 0x32E500
    void SortedBegin();  // RVA: 0x333390
    void SortedEnd();  // RVA: 0x3333E0
    void SetFrameData(int32_t offsetX, int32_t offsetY, Color[][] lightMapColours2, Color lightingColour);  // RVA: 0x332960
    void SortedAdd(SpriteObjectBase* spriteObject, float depth, float angle, bool flat, int32_t renderFlags, float emissiveFactor);  // RVA: 0x332A50
    void Add(SpriteObjectBase* spriteObject, Vector3 position, int32_t renderFlags);  // RVA: 0x32DDF0
    void Add(SpriteDescriptor* spriteDescriptor, Vector3 position, int32_t renderFlags);  // RVA: 0x32E110
    void Add(SpriteObjectBase* spriteObject, SpriteDescriptor* spriteDescriptor, int32_t renderFlags);  // RVA: 0x32DFD0
    Vector2 RotatePoint(Vector2 point, float cosAngle, float sinAngle);  // RVA: 0x332920
    void Add(SpriteObjectBase* spriteObject, Vector3 position, float angle, int32_t renderFlags);  // RVA: 0x32D730
    void Add(SpriteDescriptor* spriteDescriptor, Vector3 position, float angle, bool flipped, int32_t renderFlags);  // RVA: 0x32D3C0
    void AddSkewed(SpriteDescriptor* spriteDescriptor, Vector3 position, float skew, bool flipped, int32_t renderFlags);  // RVA: 0x32CCF0
    Vector3 GetRenderPos(Vector3 position, Vector3 offset);  // RVA: 0x3324E0
    void Add(SpriteDescriptor* spriteDescriptor, Vector3 position, Vector3 offset, float depth, float alpha, bool flipped, int32_t renderFlags);  // RVA: 0x32E210
    void AddColoured(SpriteDescriptor* spriteDescriptor, Vector3 position, Vector3 offset, float depth, Color32 colour, float alpha, bool flipped);  // RVA: 0x32C720
    void Add(SpriteDescriptor* spriteDescriptor, Vector3 position, Vector3 offset, float depth, float alpha, bool flipped, Vector2 rectOffset, int32_t renderFlags);  // RVA: 0x32E360
    void SortedAdd(SpriteDescriptor* spriteDescriptor, Vector3 position, float angle, Vector3 offset, float depth, float alpha, bool flipped, Vector2 rectOffset, bool flat, Color32 colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x332F60
    void Add(Vector3 position, Vector2 size, Vector3 offset, float alpha, bool flipped, Rect uvRect, int32_t renderFlags);  // RVA: 0x32DB30
    void AddColoured(Vector3 position, Vector2 size, Vector3 offset, Color32 colour, float alpha, bool flipped, Rect uvRect);  // RVA: 0x32C870
    void AddFlat(Vector3 position, Vector2 size, Vector3 offset, float alpha, bool flipped, Rect uvRect, int32_t renderFlags);  // RVA: 0x32CA20
    void Add(Vector3 position, Vector2 size, float depth, float alpha, bool flipped, Rect uvRect, int32_t renderFlags);  // RVA: 0x32D0A0
    void End();  // RVA: 0x3324A0
    void BuildVerticesFlat(Vector3 _position, Vector2 _size, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, int32_t renderFlags);  // RVA: 0x32FEB0
    void BuildVerticesFlat(Vector3 _position, Vector2 _size, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, Color32 _colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x32F6E0
    void BuildVerticesFlatRotated(Vector3 _position, Vector2 _offset, float angle, Vector2 _size, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, Color32 _colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x32EDB0
    void BuildVertices(Vector3 _position, Vector2 _size, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, Color32 _colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x331760
    void BuildVerticesSkewed(float skew, Vector3 _position, Vector2 _size, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, Color32 _colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x330F90
    void BuildVerticesColoured(Vector3 _position, Vector2 _size, Color32 colour, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3);  // RVA: 0x32E620
    void BuildVerticesRotated(Vector3 _position, Vector2 _offset, float angle, Vector2 _size, float a, Vector2 _uv0, Vector2 _uv1, Vector2 _uv2, Vector2 _uv3, Color32 _colour, int32_t renderFlags, float emissiveFactor);  // RVA: 0x330660
    void End(Mesh* mesh);  // RVA: 0x332110
    void .ctor();  // RVA: 0x333900
    static void .cctor();  // RVA: 0x333880
};

// Namespace: <global>
class StatusEffect : public IPoolable
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    ItemStatParameterTag tag; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float value; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float time; // 0x0020

    // Methods
    void Initialise(ItemStatParameterTag _tag, float _value, float _time);  // RVA: 0x3492C0
    void .ctor();  // RVA: 0x2E6780
};

// Namespace: <global>
class SteamPlatformManager : public PlatformManager
{
public:
    // Static fields
    // static float STATS_UPLOAD_TIME;
    // static float STATS_RETRY_TIME;

    uint8_t pad_0000[0x60]; // 0x0000
    bool mInitialised; // 0x0060
    bool mAreStatsDirty; // 0x0061
    uint8_t pad_0062[0x2]; // 0x0062
    float mStatsTimer; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    Il2CppString* mLocalSteamIDString; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    CGameID mGameID; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    CSteamID mLocalSteamID; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    SteamAPIWarningMessageHook_t* mSteamAPIWarningMessageHook; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Steamworks.Callback<Steamworks.GameOverlayActivated_t> mGameOverlayActivated; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Steamworks.Callback<Steamworks.GamepadTextInputDismissed_t> mGamepadTextInputDismissed; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Steamworks.Callback<Steamworks.UserStatsStored_t> mUserStatsStored; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Steamworks.Callback<Steamworks.UserAchievementStored_t> mUserAchievementStored; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    Steamworks.Callback<Steamworks.SteamRemotePlaySessionConnected_t> mSteamRemotePlaySessionConnected; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Steamworks.Callback<Steamworks.SteamRemotePlaySessionDisconnected_t> mSteamRemotePlaySessionDisconnected; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    IVirtualKeyboardHandler* mVirtualKeyboardHandler; // 0x00B8

    // Methods
    uint64_t get_LocalUserID();  // RVA: 0x335540
    Il2CppString* get_LocalUserIDString();  // RVA: 0x34B8C0
    CGameID get_GameID();  // RVA: 0x2E55A0
    static void SteamAPIDebugTextHook(int32_t severity, StringBuilder* debugText);  // RVA: 0x34B6E0
    bool get_Initialised();  // RVA: 0x34B8B0
    bool Initialise();  // RVA: 0x349A70
    void LateInitialise();  // RVA: 0x34A1A0
    void RunUpdate(float dt);  // RVA: 0x34AFC0
    void Shutdown();  // RVA: 0x34B6B0
    Il2CppString* GetPlayerName(int32_t maxNameLength, bool validate);  // RVA: 0x3499E0
    void OnGameOverlayActivated(GameOverlayActivated_t callback);  // RVA: 0x34A2C0
    void OnGamepadTextInputDismissed(GamepadTextInputDismissed_t callback);  // RVA: 0x34A400
    bool OpenVirtualKeyboard(IVirtualKeyboardHandler* virtualKeyboardHandler, Il2CppString* description, uint32_t maxChars, Il2CppString* existingText);  // RVA: 0x34AA20
    void CloseVirtualKeyboard();  // RVA: 0x3499C0
    void OpenURL(Il2CppString* url);  // RVA: 0x34A9D0
    bool IsRemotePlayTogetherRunning();  // RVA: 0x349FA0
    void KeyboardTest();  // RVA: 0x34A090
    void SetLocalSteamID(CSteamID steamID);  // RVA: 0x34B0B0
    void RefreshLocalUserPath();  // RVA: 0x34AA90
    void RetrieveStats();  // RVA: 0x34ABF0
    void OnUserStatsStored(UserStatsStored_t callback);  // RVA: 0x34A8A0
    void OnUserAchievementStored(UserAchievementStored_t callback);  // RVA: 0x34A6B0
    void UploadStats(bool immediate);  // RVA: 0x34B750
    void ResetAllStats(bool refresh);  // RVA: 0x34AB60
    void LogStats(LogLevel logLevel);  // RVA: 0x2C1B90
    void AchieveStat(AchievementStatID statID);  // RVA: 0x3492D0
    void SetStat(IntStatID statID, int32_t value);  // RVA: 0x34B440
    void SetStat(FloatStatID statID, float value);  // RVA: 0x34B190
    int32_t AddStat(IntStatID statID, int32_t add);  // RVA: 0x349740
    float AddStat(FloatStatID statID, float add);  // RVA: 0x349490
    void OnSteamRemotePlaySessionConnected(SteamRemotePlaySessionConnected_t callback);  // RVA: 0x34A4F0
    void OnSteamRemotePlaySessionDisconnected(SteamRemotePlaySessionDisconnected_t callback);  // RVA: 0x34A5D0
    void .ctor();  // RVA: 0x34B800
};

// Namespace: <global>
class AlertButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    AtlasImage* alertIcon; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    bool mAlertVisible; // 0x00C8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x335630
    void SetAlert(bool visible);  // RVA: 0x335710
    void .ctor();  // RVA: 0x335810
};

// Namespace: <global>
class AssignNPCButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    GameObject* mChecked; // 0x00C0

    // Methods
    void SetChecked(bool isChecked);  // RVA: 0x335820
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class AssignNPCCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<AssignNPCButton> mNPCButtons; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameTile* gameTile; // 0x00A0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x335A80
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    void Refresh(Bed* bed);  // RVA: 0x3364E0
    void PopulateNPCButtons();  // RVA: 0x3361A0
    void PopulateButton(Il2CppString* text, int32_t buttonId, bool isChecked);  // RVA: 0x335E80
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3366A0
    void UpdateIsDirty();  // RVA: 0x2C1B90
    void OnClose();  // RVA: 0x335BD0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x335C60
    Bed* GetBed();  // RVA: 0x3359B0
    bool IsNPCAssignmentValid(NPC* npc);  // RVA: 0x335B50
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class ButtonSlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Button* button; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RawImage* image; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RawImage* background; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool mPressed; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Il2CppString* backgroundName; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Il2CppString* markedBackgroundName; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Il2CppString* selectedName; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Il2CppString* markedSelectedName; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Il2CppString* disabledName; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Il2CppString* emptyName; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    SpriteDescriptor* backgroundSprite; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    SpriteDescriptor* markedBackgroundSprite; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    SpriteDescriptor* selectedSprite; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    SpriteDescriptor* markedSelectedSprite; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    SpriteDescriptor* disabledSprite; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    SpriteDescriptor* imageSprite; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Il2CppString* mTooltip; // 0x00D0

    // Methods
    void Initialise(IItemSlotHandler* slotHandler, Il2CppString* imageName, Il2CppString* tooltip, int32_t col, int32_t row);  // RVA: 0x336930
    void RefreshImage();  // RVA: 0x336CA0
    void UpdateBackground();  // RVA: 0x336D80
    void Select(bool selected);  // RVA: 0x336D00
    void Mark(bool marked);  // RVA: 0x336C50
    void Press(bool pressed);  // RVA: 0x336C80
    Il2CppString* GetTooltip();  // RVA: 0x3368D0
    void .ctor();  // RVA: 0x336F70
};

// Namespace: <global>
class CharacterCreateCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    RawImage* characterPreviewImage; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* hairButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* hairColourButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* torsoButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    DialogButton* skinColourButton; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    DialogButton* eyeColourButton; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    DialogButton* shirtButton; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* pantsButton; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    DialogButton* confirmButton; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextInputButton* textInputButton; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    DropdownButton* penaltyDropdown; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Il2CppString* mPlayerFilename; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    CharacterSettingsTable mCharacterSettings; // 0x00F0
    uint8_t pad_00F1[0x2F]; // 0x00F1
    float mTextResetReviewTimer; // 0x0120

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x337A70
    void PopulateDropdownLists();  // RVA: 0x338460
    void Initialise(bool refresh);  // RVA: 0x337690
    void SetPlayerName(Il2CppString* playerName);  // RVA: 0x3384E0
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x338560
    bool AdjustSettingButtonClicked(DialogButton* dialogButton, int16_t dir);  // RVA: 0x3370D0
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x337D20
    void OnTextInputButtonTextEntered(TextInputButton* textInputButton, bool validateChanged);  // RVA: 0x338310
    void OnCloseButtonPressed(DialogButton* closeButton);  // RVA: 0x337AD0
    void OnClose();  // RVA: 0x337B50
    void DeactivateCanvas();  // RVA: 0x337610
    CharacterSettingsTable GetCharacterSettings();  // RVA: 0x337660
    void OnHairClicked(int16_t dir);  // RVA: 0x337F50
    void OnHairColourClicked(int16_t dir);  // RVA: 0x338090
    void OnTorsoClicked(int16_t dir);  // RVA: 0x3383F0
    void OnSkinColourClicked(int16_t dir);  // RVA: 0x3381D0
    void OnConfirmClicked();  // RVA: 0x337B80
    void .ctor();  // RVA: 0x338980
};

// Namespace: <global>
struct CharacterSelectMessageBoxType
{
public:
    // Static fields
    // static CharacterSelectMessageBoxType Delete;
    // static CharacterSelectMessageBoxType VersionOldWarning;
    // static CharacterSelectMessageBoxType VersionInvalidWarning;
    // static CharacterSelectMessageBoxType CannotDeleteRemotePlay;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<System.IO.FileInfo> <>9__12_0;


    // Methods
    static void .cctor();  // RVA: 0x34BF50
    void .ctor();  // RVA: 0x2C1750
    int32_t <PopulateSavedCharacters>b__12_0(FileInfo* x, FileInfo* y);  // RVA: 0x34B8D0
};

// Namespace: <global>
class CharacterSelectCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    RawImage* characterPreviewImage; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogList* dialogList; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* deleteCharacterPrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* createNewButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    CharacterSettingsTable characterSettings; // 0x00B0
    uint8_t pad_00B1[0x2F]; // 0x00B1
    Il2CppString* mPendingFileDeletePath; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    CharacterSelectMessageBoxType mMessageBoxType; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    LoadCharacterButton* mPendingLoadCharacterButton; // 0x00F0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x338C90
    void SetActive(bool active);  // RVA: 0x33A6B0
    void Refresh();  // RVA: 0x33A3F0
    void PopulateSavedCharacters(Il2CppString* pathOverride);  // RVA: 0x339F20
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x33A720
    void SelectButton(int32_t index, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x33A660
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x339430
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x339370
    void OnClose();  // RVA: 0x339210
    static bool ValidateFilepath(Il2CppString* filepath, bool isPrebuilt);  // RVA: 0x33AA70
    void DeleteFiles(Il2CppString* dir, Il2CppString* file, bool deleteEmptyFolders);  // RVA: 0x338BB0
    int32_t DeleteFileRecursively(Il2CppString* dir, Il2CppString* file, bool deleteEmptyFolders);  // RVA: 0x3389E0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x339970
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x339440
    void LoadCharacter(LoadCharacterButton* loadCharacterButton);  // RVA: 0x338F30
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x339C80
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void MessageBoxDeleteClick(DialogButton* dialogButton);  // RVA: 0x338F80
    void MessageBoxVersionWarningClick(DialogButton* dialogButton);  // RVA: 0x339130
    bool HasDialogListMouseSupport(DialogButton* dialogButton);  // RVA: 0x338C70
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class CheckboxButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    AtlasImage* checkImage; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Il2CppString* checkedName; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Il2CppString* uncheckedName; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    bool mChecked; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    SpriteDescriptor* checkedSprite; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    SpriteDescriptor* uncheckedSprite; // 0x00E8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x33AB70
    void SetChecked(bool check, bool clearSelected);  // RVA: 0x33AD00
    bool GetChecked();  // RVA: 0x33AB60
    void UpdateCheckVisuals();  // RVA: 0x33ADA0
    void .ctor();  // RVA: 0x33AE50
};

// Namespace: <global>
class ControllerAtlasImage : public StateDependentUIControl
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    AtlasImage* atlasImage; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<System.String> m_ControllerSpriteNames; // 0x0030

    // Methods
    bool SetState(int32_t newState, bool force);  // RVA: 0x33AF80
    void .ctor();  // RVA: 0x33B050
};

// Namespace: <global>
class ControllerCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* text; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* cancelButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* newPlayerButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* primaryPlayerButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    bool mCanAddNewPlayer; // 0x00B0

    // Methods
    void Initialise(PlayerInputState* playerInputState);  // RVA: 0x33B1E0
    void SetPlayerInputState(PlayerInputState* playerInputState);  // RVA: 0x31C840
    void Initialise(bool refresh);  // RVA: 0x33B060
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x33B650
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x33B2A0
    void OnClose();  // RVA: 0x33B220
    void OnNewPlayerClicked();  // RVA: 0x33B4F0
    void OnPrimaryPlayerClicked();  // RVA: 0x33B570
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class BindingButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    RebindUIPrefab* parentPrefab; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* mAction; // 0x00C8

    // Methods
    InputAction* get_inputAction();  // RVA: 0x3368C0
    Vector3 GetListLocalPosition();  // RVA: 0x336710
    Vector2 GetListRectSize();  // RVA: 0x336760
    void Initialise(InputAction* _action, int32_t bindingIndex);  // RVA: 0x3367C0
    void RefreshBindingDisplay();  // RVA: 0x336800
    void SetTextColour(Color textColor);  // RVA: 0x336880
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class ClearBindingButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    RebindUIPrefab* parentPrefab; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* mAction; // 0x00C8

    // Methods
    InputAction* get_inputAction();  // RVA: 0x3368C0
    Vector3 GetListLocalPosition();  // RVA: 0x336710
    Vector2 GetListRectSize();  // RVA: 0x33AEE0
    void Initialise(InputAction* _action, int32_t bindingIndex);  // RVA: 0x33AF40
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class ListSeparator : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* separatorText; // 0x0020

    // Methods
    void Initialise(Il2CppString* stringID);  // RVA: 0x340EE0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
struct BindingTestFlags
{
public:
    // Static fields
    // static BindingTestFlags None;
    // static BindingTestFlags MouseInsideGameArea;
    // static BindingTestFlags MouseOutsideGameArea;
    // static BindingTestFlags MouseAnywhere;
    // static BindingTestFlags IsModifier;
    // static BindingTestFlags HasValidModifier;
    // static BindingTestFlags IsAxisGroup;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct OptionsControlsMessageBoxType
{
public:
    // Static fields
    // static OptionsControlsMessageBoxType ResetPrimary;
    // static OptionsControlsMessageBoxType ResetSecondary;
    // static OptionsControlsMessageBoxType Duplicates;
    // static OptionsControlsMessageBoxType TabDuplicates;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    OptionsControlsCanvas* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputAction* action; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t bindingIndex; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool allCompositeParts; // 0x0024

    // Methods
    void .ctor();  // RVA: 0x2C1750
    void <PerformInteractiveRebind>g__CleanUp|0();  // RVA: 0x34BE80
    void <PerformInteractiveRebind>b__1(RebindingOperation* operation);  // RVA: 0x34BA00
    bool <PerformInteractiveRebind>b__2(InputControl* inputControl, InputEventPtr InputEventPtr);  // RVA: 0x34BAC0
    void <PerformInteractiveRebind>b__3(RebindingOperation* operation);  // RVA: 0x34BB00
};

// Namespace: <global>
class OptionsControlsCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TabButton* tabButtonKeyboard; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TabButton* tabButtonGamepad; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogList* dialogList; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* optionsButtonPrefab; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* separatorPrefab; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* controlRebindPrefab; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* rebindOverlay; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    TextMeshProUGUI* rebindTitle; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* rebindText; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextMeshProUGUI* rebindWaitingText; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    DialogButton* mResetDefaultsButton; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    TabButton* mActiveTab; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    TabButton* mPendingTab; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    RebindingOperation* mRebindOperation; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    RebindingHelper* mRebindingHelper; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    BindingButton* mBindingButtonRebindInProgress; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    int32_t mBindingIndexRebindInProgress; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    InputControl* mHoldButton; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    InputControl* mHeldButton; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    float mHoldTimer; // 0x0128
    uint8_t pad_0129[0x3]; // 0x0129
    float mPendingButtonReleaseTimer; // 0x012C
    uint8_t pad_012D[0x3]; // 0x012D
    System.Collections.Generic.List<RebindUIPrefab> mRebindingUIList; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    bool mIsDirty; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Collections.Generic.List<System.String> mWorkingModifierList; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> mCommonBindingButtonList; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> mGameBindingButtonList; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> mHUDBindingButtonList; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    System.Collections.Generic.Dictionary<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>> mWorkingBindingNames; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> mWorkingDuplicateShortlist; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    System.Collections.Generic.Dictionary<BindingButton,System.Boolean> mDuplicateBindings; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    bool mRefreshDuplicates; // 0x0178
    uint8_t pad_0179[0x3]; // 0x0179
    OptionsControlsMessageBoxType mMessageBoxType; // 0x017C

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x342FE0
    void SetActive(bool active);  // RVA: 0x347C00
    void ActivateTab(TabButton* tabButton, bool checkDuplicates);  // RVA: 0x340F00
    void PopulateControlBinds();  // RVA: 0x345800
    void PopulateActionMap(InputActionMap* inputActionMap, System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupBindingButtonList, Il2CppString* separatorName);  // RVA: 0x345210
    DialogButton* PopulateOptionsButton(Il2CppString* optionsName, int32_t buttonId);  // RVA: 0x345C60
    void PopulateSeparator(Il2CppString* separatorName);  // RVA: 0x345E40
    void PopulateAction(InputAction* action, System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupBindingButtonList);  // RVA: 0x345480
    void AddBindingButtonToList(BindingButton* bindingButton, InputActionFlags inputActionFlags, System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupBindingButtonList);  // RVA: 0x341440
    BindingTestFlags AddMouseGameAreaBindingTestFlags(Il2CppString* uniqueBindingPath, InputActionFlags inputActionFlags, BindingTestFlags bindingTestFlags);  // RVA: 0x341D70
    bool AddAxisBindingButtonToList(Il2CppString* uniqueBindingPath, BindingButton* bindingButton, BindingTestFlags bindingTestFlags, System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupBindingButtonList);  // RVA: 0x341180
    System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> GetBindingButtonList(InputAction* inputAction);  // RVA: 0x342C20
    void RemoveBindingButtonFromList(BindingButton* bindingButton, System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupBindingButtonList);  // RVA: 0x347240
    void SelectDefaultButton();  // RVA: 0x347980
    Il2CppString* GeneratePathForControl(InputControl* control);  // RVA: 0x342B80
    bool PendingButtonRelease(float dt);  // RVA: 0x344730
    void DisableMenuActionMaps();  // RVA: 0x342870
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x348690
    void SelectNextTab();  // RVA: 0x347B30
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x343680
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x343550
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x343780
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x344580
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void MarkAsDirty(bool generatePlayerOverrideSettings);  // RVA: 0x3431C0
    void CreatePlayerOverrideSettings();  // RVA: 0x342830
    void ApplyBindingOverride(InputAction* inputAction, int32_t bindingIndex, Il2CppString* overridePath, bool generatePlayerOverrideSettings);  // RVA: 0x341E30
    void RemoveBindingOverride(InputAction* inputAction, int32_t bindingIndex);  // RVA: 0x347320
    void ClearBinding(ClearBindingButton* clearBindingButton);  // RVA: 0x342080
    void ResetBindings(ResetBindingButton* resetBindingButton);  // RVA: 0x3473D0
    void ResetToDefaults();  // RVA: 0x347590
    void SyncToPrimaryPlayer();  // RVA: 0x348440
    void OnClose();  // RVA: 0x343430
    void CloseOptionsCanvas();  // RVA: 0x3422A0
    void SavePlayerSettings();  // RVA: 0x3477D0
    void StartRebindOperation(BindingButton* bindingButton);  // RVA: 0x348210
    bool CanRebindDevice(InputDevice* inputDevice);  // RVA: 0x341F80
    void FinishRebind();  // RVA: 0x3429A0
    void PerformInteractiveRebind(InputAction* action, int32_t bindingIndex, bool allCompositeParts);  // RVA: 0x344900
    Il2CppString* GetCancelButtonName();  // RVA: 0x342E50
    void StartHoldButtonListen(InputAction* action, int32_t bindingIndex);  // RVA: 0x347D60
    void OnHoldButtonListener(InputEventPtr eventPtr, InputDevice* device);  // RVA: 0x343FC0
    void OnActionChange(Il2CppObject* obj, InputActionChange change);  // RVA: 0x343210
    void RefreshBindingDisplay(RebindUIPrefab* rebindUIPrefab);  // RVA: 0x347100
    void PostProcessMovementBindings();  // RVA: 0x3466B0
    void CopyInputActionBinding(InputAction* sourceAction, int32_t sourceBindingIndex, InputAction* targetAction, int32_t targetBindingIndex);  // RVA: 0x342590
    void CopyVector2BindingToButtons(InputAction* sourceAction, InputAction* targetActionUp, InputAction* targetActionDown, InputAction* targetActionLeft, InputAction* targetActionRight);  // RVA: 0x342780
    void PostProcessModifierBindings(InputActionMap* inputActionMap, InputAction* modifier1Action, InputAction* modifier2Action);  // RVA: 0x346170
    void PostProcessBindings();  // RVA: 0x345FD0
    void ProcessDuplicates();  // RVA: 0x346C50
    void ProcessGroupDuplicates(System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupRebindingUIList);  // RVA: 0x347030
    void ProcessGroupBindingName(Il2CppString* pathName, System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags> bindingButtonData);  // RVA: 0x346D80
    void ProcessDuplicateCandidates();  // RVA: 0x346920
    void UdpateDuplicatesDisplay(System.Collections.Generic.List<System.ValueTuple<System.String,System.ValueTuple<BindingButton,OptionsControlsCanvas.BindingTestFlags>>> groupRebindingUIList);  // RVA: 0x348500
    void .ctor();  // RVA: 0x348AD0
};

// Namespace: <global>
class RebindUIPrefab : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* actionName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BindingButton* binding1Button; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BindingButton* binding2Button; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ClearBindingButton* deleteBinding1Button; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ClearBindingButton* deleteBinding2Button; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    ResetBindingButton* resetBindingsButton; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ButtonLookupData* mButtonLookupData; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    InputAction* mAction; // 0x0058

    // Methods
    ButtonLookupData* get_buttonLookupData();  // RVA: 0x349190
    InputAction* get_inputAction();  // RVA: 0x3491A0
    void Initialise(InputAction* action, ButtonLookupData* lookupData);  // RVA: 0x348EB0
    int32_t GetNextCoreBindingIndex(InputAction* action, int32_t startIndex);  // RVA: 0x348D50
    void SetBindingText(BindingButton* bindingButton, ClearBindingButton* clearBindingButton, InputAction* action, int32_t bindingStartIndex);  // RVA: 0x348FC0
    void RefreshBindingDisplay();  // RVA: 0x348F80
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class ResetBindingButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    RebindUIPrefab* parentPrefab; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* mAction; // 0x00C8

    // Methods
    InputAction* get_inputAction();  // RVA: 0x3368C0
    Vector3 GetListLocalPosition();  // RVA: 0x336710
    Vector2 GetListRectSize();  // RVA: 0x3491B0
    void Initialise(InputAction* _action);  // RVA: 0x349210
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class CreditsCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    ScrollablePanel* scrollablePanel; // 0x0090

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x33B7A0
    void Initialise(bool refresh);  // RVA: 0x33B800
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x33B8A0
    void OnClose();  // RVA: 0x33B830
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class DeathText : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TextMeshProUGUI* messageText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* permadeathText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float fadeSpeed; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float fadeDelay; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float mAlpha; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float mTargetAlpha; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float mFadeDelay; // 0x0040

    // Methods
    void Initialise();  // RVA: 0x33B940
    void UpdateTime(Player* player, float dt);  // RVA: 0x33BA30
    float GetTargetAlpha(Player* player);  // RVA: 0x33B900
    void UpdateAlpha(Player* player, float dt);  // RVA: 0x33BA30
    void SetAlpha(float alpha);  // RVA: 0x33B9B0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class DeleteButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    Il2CppString* filepath; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* deleteButton; // 0x00C8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x33BB30
    void Refresh(FileInfo* fileInfo);  // RVA: 0x33BBE0
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class DemoBossDefeatCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogButton* wishlistButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    float mInputCooldown; // 0x0098

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x33BC80
    void SetActive(bool active);  // RVA: 0x33BE60
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x33BE90
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x33BCD0
    void OnClose();  // RVA: 0x33BC90
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class IDialogButtonHandler
{
public:

    // Methods
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x175530
    void OnDialogButtonPointerExit(DialogButton* dialogButton);  // RVA: 0x175530
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);
    bool HasInputType(ControllerType inputType);  // RVA: 0x1788C0
};

// Namespace: <global>
class DialogButtonBase : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t buttonId; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool mInitialised; // 0x0024
    bool mVisible; // 0x0025
    bool mEnabled; // 0x0026
    uint8_t pad_0027[0x1]; // 0x0027
    IDialogButtonHandler* handler; // 0x0028

    // Methods
    DialogButton* IsMouseOverButton(Vector2 mousePos, Camera* camera);  // RVA: 0x3094F0
    void .ctor();  // RVA: 0x33BF80
};

// Namespace: <global>
class DialogButton : public DialogButtonBase
{
public:
    uint8_t pad_0000[0x30]; // 0x0000
    Button* button; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    NineSliceRawImage* image; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    TextMeshProUGUI* text; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Il2CppString* spriteName; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Il2CppString* highlightSpriteName; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Il2CppString* selectedSpriteName; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Il2CppString* disabledSpriteName; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Il2CppString* mTooltip; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* mTooltipObject; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    TextMeshProUGUI* mTooltipObjectText; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    bool autopopulate; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Il2CppString* audioClickOverride; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    bool highlightAudioTrigger; // 0x0090
    bool selectOnHover; // 0x0091
    bool mHighlight; // 0x0092
    bool mSelected; // 0x0093
    bool mDown; // 0x0094
    uint8_t pad_0095[0x3]; // 0x0095
    Il2CppString* mText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    SpriteDescriptor* mSprite; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    SpriteDescriptor* mHighlightSprite; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    SpriteDescriptor* mSelectedSprite; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    SpriteDescriptor* mDisabledSprite; // 0x00B8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x33C240
    void EnableTooltipObject(bool enable);  // RVA: 0x33BFC0
    void SetSprite(Il2CppString* name);  // RVA: 0x33CCF0
    Il2CppString* GetTooltip(bool onlyForNoObject);  // RVA: 0x33C150
    Vector3 GetListLocalPosition();  // RVA: 0x33C0B0
    Vector2 GetListRectSize();  // RVA: 0x33C100
    void Refresh(Il2CppString* text, int32_t _buttonId, bool visible, bool clearSelected);  // RVA: 0x33CB40
    void Clear();  // RVA: 0x33BF90
    void SetEnabled(bool enabled);  // RVA: 0x33CCA0
    bool GetEnabled();  // RVA: 0x33C0A0
    void SetVisible(bool visible);  // RVA: 0x33CD90
    bool GetVisible();  // RVA: 0x33C210
    void RefreshVisuals();  // RVA: 0x33C8F0
    void Highlight(bool highlight);  // RVA: 0x33C220
    void Select(bool selected, bool triggerAudio);  // RVA: 0x33CBA0
    void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x33C670
    void OnPointerExit(PointerEventData* eventData);  // RVA: 0x33C7B0
    void OnPointerDown(PointerEventData* eventData);  // RVA: 0x33C5E0
    void OnPointerUp(PointerEventData* eventData);  // RVA: 0x33C860
    void TriggerClickAudio();  // RVA: 0x33CF40
    void OnClick();  // RVA: 0x33C540
    void OnButtonClick(UIManager* uiManager);  // RVA: 0x33C530
    DialogButton* IsMouseOverButton(Vector2 mousePos, Camera* camera);  // RVA: 0x33C470
    void .ctor();  // RVA: 0x33D020
};

// Namespace: <global>
class DialogCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    HUDCanvas* hudCanvas; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* title; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* text; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    NPC* mNPC; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    System.Collections.Generic.List<DialogAction> mButtonActions; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    int32_t activeButtonCount; // 0x00B8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x33D340
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    void Refresh(NPC* npc, StringBuilder* titleString, DialogEntry* dialogEntry);  // RVA: 0x33D850
    void RefreshContents(NPC* npc, DialogEntry* dialogEntry);  // RVA: 0x33D580
    void UpdateDialogActions(NPC* npc, DialogEntry* dialogEntry, bool buttonSelected, bool addDefaultNextAction);  // RVA: 0x33D9D0
    void AddDialogAction(DialogAction* dialogAction, Il2CppString* buttonText, int32_t currentSelectedButton, bool buttonSelected);  // RVA: 0x33D130
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x33D8F0
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x33D4B0
    void OnClose();  // RVA: 0x33D480
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class IDialogListHandler
{
public:

    // Methods
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x175530
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);
};

// Namespace: <global>
class DialogList : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Vector2 itemMargin; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Vector2 itemSpacing; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Canvas* canvas; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* panelRoot; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* contentsRoot; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* itemPrefab; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ScrollBar* scrollBar; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* emptyListText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool retainInputFocus; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    float mListHeight; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    float mPanelHeight; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    IDialogListHandler* mListHandler; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<UnityEngine.GameObject> mItems; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    UIManager* mUIManager; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    PlayerController* mPlayerController; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    PlayerInputState* mPlayerInputState; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<DialogButton> mButtons; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int32_t mNumButtons; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t mRows; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    int32_t mTargetButtonCol; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    int32_t mCurrentButtonCol; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    int32_t mCurrentButtonRow; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    int32_t mCurrentButton; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    bool mProcessInput; // 0x00B8
    bool mHasInputFocus; // 0x00B9
    uint8_t pad_00BA[0x2]; // 0x00BA
    int32_t mColumns; // 0x00BC
    uint8_t pad_00BD[0x3]; // 0x00BD
    Il2CppString* mEmptyListStringId; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    int32_t mForcedRowChangeColumn; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float mVertScrollMargin; // 0x00CC

    // Methods
    int32_t get_Count();  // RVA: 0x340910
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x33EA20
    void Initialise(int32_t capacity, IDialogListHandler* handler, int32_t columns);  // RVA: 0x33E720
    void Clear();  // RVA: 0x33E030
    void SetActive(bool active);  // RVA: 0x33FE80
    void ClearButtonSelection();  // RVA: 0x33DF90
    void SetEmptyListText(Il2CppString* stringID);  // RVA: 0x33FF20
    void RefreshEmptyListText();  // RVA: 0x33F210
    DialogButton* IsMouseOverButton(RenderMode renderMode, DialogButton* includeButton);  // RVA: 0x33EB20
    bool ClickedOutsideListControl(RenderMode renderMode, GameObject* includeObject);  // RVA: 0x33E170
    void AddItem(GameObject* item, DialogButton* button, bool refeshEmptyListText);  // RVA: 0x33DB00
    bool RemoveItem(GameObject* item, bool updateLayout, bool deleteRow);  // RVA: 0x33F2D0
    void UpdateVerticalLayout();  // RVA: 0x3405F0
    void UpdateScrollBar(float contentPosition);  // RVA: 0x340550
    void SetInputFocus(bool hasInputFocus);  // RVA: 0x33FF50
    int32_t GetRowChangeColumn();  // RVA: 0x33E650
    bool UpdateCanvas(float dt);  // RVA: 0x3400A0
    int32_t GetButtonIndex(int32_t col, int32_t row);  // RVA: 0x33E3B0
    DialogButton* GetButton(int32_t col, int32_t row);  // RVA: 0x33E4C0
    int32_t GetNextValidColumnButton(int32_t col, int32_t row, int32_t colDir);  // RVA: 0x33E560
    int32_t NextRowWithValidButtons(int32_t nextRow, int32_t dir);  // RVA: 0x33EE10
    void UpdateCurrentButtenIndices(int32_t newCol, int32_t newRow);  // RVA: 0x3404A0
    void SelectButton(int32_t col, int32_t row, bool mouseHover, bool triggerAudio, bool autoScroll, bool forceHighlight);  // RVA: 0x33FB50
    void ScrollButton(DialogButton* dialogButton);  // RVA: 0x33F540
    void ScrollList(int32_t pageDir);  // RVA: 0x33F790
    void ScrollPage(float pageDir);  // RVA: 0x33F8D0
    void SelectButton(DialogButton* button, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x33FA10
    int32_t GetButtonRow(DialogButton* button, int32_t buttonCol);  // RVA: 0x33E3C0
    void ClearSelection();  // RVA: 0x2C1B90
    bool HasInputType(ControllerType inputType);  // RVA: 0x33E670
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x33F070
    void OnDialogButtonPointerExit(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x33EF80
    void OnScrollBarUpButtonClicked(ScrollBar* scrollBar);  // RVA: 0x33F200
    void OnScrollBarDownButtonClicked(ScrollBar* scrollBar);  // RVA: 0x33F0B0
    void OnScrollBarSliderDragged(ScrollBar* scrollBar, float position);  // RVA: 0x33F0C0
    void .ctor();  // RVA: 0x340800
};

// Namespace: <global>
class IDragDialogButtonHandler
{
public:

    // Methods
    void OnDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x17A420
    void OnEndDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x17A420
};

// Namespace: <global>
class DragDialogButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    DragDialogButton* mBackgroundDrag; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    IDragDialogButtonHandler* mDragHandler; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    bool mDragging; // 0x00D0

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler, IDragDialogButtonHandler* dragHandler);  // RVA: 0x340950
    void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x340C00
    void OnPointerDown(PointerEventData* eventData);  // RVA: 0x340B10
    void OnPointerUp(PointerEventData* eventData);  // RVA: 0x340DB0
    void OnBeginDrag(PointerEventData* eventData);  // RVA: 0x3409A0
    void OnDrag(PointerEventData* eventData);  // RVA: 0x3409B0
    void OnEndDrag(PointerEventData* eventData);  // RVA: 0x340A60
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class DropdownButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    AtlasImage* dropArrowImage; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Il2CppString* downArrowName; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Il2CppString* upArrowName; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    DialogList* dropList; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    int32_t mSelectedOptionIndex; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    bool mDropped; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    SpriteDescriptor* downArrowSprite; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    SpriteDescriptor* upArrowSprite; // 0x00F0

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x35D200
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x35D310
    void Select(bool selected, bool triggerAudio);  // RVA: 0x35D950
    void ClearList(int32_t capacity);  // RVA: 0x35D120
    void AddOption(int32_t optionId, Il2CppString* optionText, Il2CppString* tooltipText);  // RVA: 0x35CE20
    void PopulateOptions(System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String,System.String>> optionsData, int32_t defaultOptionIndex);  // RVA: 0x35D5E0
    void AdvanceOption(int16_t dir);  // RVA: 0x35CFF0
    bool UpdateCanvas(float dt);  // RVA: 0x35DA60
    void SetDropped(bool drop, bool triggerCloseAudio);  // RVA: 0x35D990
    bool GetDropped();  // RVA: 0x35D160
    DialogButton* GetSelectedOption();  // RVA: 0x35D170
    void UpdateVisuals();  // RVA: 0x35DC60
    void UpdateTooltipObjectText(DialogButton* dialogButton);  // RVA: 0x35DAF0
    void OnClick();  // RVA: 0x35D420
    void OnButtonClick(UIManager* uiManager);  // RVA: 0x35D340
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x35D5D0
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x35D520
    void .ctor();  // RVA: 0x35DD90
};

// Namespace: <global>
class DummyGraphic : public Graphic
{
public:

    // Methods
    void SetMaterialDirty();  // RVA: 0x2C1B90
    void SetVerticesDirty();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x35DE20
};

// Namespace: <global>
class ExitCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogButton* wishlistButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* exitText1; // 0x0098

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x35DE70
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x35E080
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x35DF10
    void OnClose();  // RVA: 0x35DEF0
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
struct ButtonID
{
public:
    // Static fields
    // static ButtonID NewLevel;
    // static ButtonID LoadLevel;
    // static ButtonID SaveLevel;
    // static ButtonID Settings;
    // static ButtonID Credits;
    // static ButtonID Quit;
    // static ButtonID Feedback;
    // static ButtonID ReportBug;
    // static ButtonID Online;
    // static ButtonID Steam;
    // static ButtonID Discord;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class FECanvas : public GameInteractableCanvas
{
public:

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x35E150
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x35E630
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x35E2A0
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class FloatingText : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TMP_Text* textMeshPro; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float mFadeInTime; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mFadeOutTime; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float mDuration; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float mAge; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    Vector3 mPosition; // 0x0038
    uint8_t pad_0039[0xB]; // 0x0039
    Vector3 mStartPosition; // 0x0044
    uint8_t pad_0045[0xB]; // 0x0045
    Vector3 mPreviousSlideOffset; // 0x0050
    uint8_t pad_0051[0xB]; // 0x0051
    Vector3 mSlideOffset; // 0x005C
    uint8_t pad_005D[0xB]; // 0x005D
    float mSlideDuration; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    float mSlideAge; // 0x006C
    uint8_t pad_006D[0x3]; // 0x006D
    Color mColor; // 0x0070

    // Methods
    void Initialise(StringBuilder* text, Color color, Vector3 position, Vector3 slideOffset, float fadeInTime, float fadeOutTime, float slideDuration, float duration);  // RVA: 0x35F520
    void SetPosition(Vector3 position);  // RVA: 0x35F730
    bool UpdateText(float dt);  // RVA: 0x35F900
    void UpdatePosition(float dt);  // RVA: 0x35F830
    float UpdateFade();  // RVA: 0x35F750
    void OffsetSlidePosition(Vector3 offset);  // RVA: 0x35F640
    void InitialiseText(StringBuilder* text);  // RVA: 0x35F4F0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class FloatingTextCanvas : public FloatingTextPanel
{
public:
    uint8_t pad_0000[0x58]; // 0x0000
    Canvas* canvas; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RectTransform* anchor; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    CanvasScaler* scaler; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector2 scaleReferenceSize; // 0x0070

    // Methods
    void Initialise(PlayerController* playerController);  // RVA: 0x35E6B0
    void UpdateCanvas(PlayerController* playerController, float dt);  // RVA: 0x35E9A0
    void UpdateScale(PlayerController* playerController);  // RVA: 0x35E9F0
    void UpdateAnchors(PlayerController* playerController);  // RVA: 0x35E740
    void .ctor();  // RVA: 0x35EB80
};

// Namespace: <global>
class FloatingTextPanel : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* floatingTextPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float duration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float slideDuration; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float fadeInTime; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float fadeOutTime; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    float slideOffset; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float slideDirection; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float startOffset; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t maxActiveTextObjects; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    GameObjectPool<FloatingText> mFloatingTextPool; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List<FloatingText> mActiveTextObjects; // 0x0050

    // Methods
    void Initialise();  // RVA: 0x35EDA0
    void SpawnText(StringBuilder* text, Color color);  // RVA: 0x35EE20
    void Clear();  // RVA: 0x35EC90
    void UpdateTime(float dt);  // RVA: 0x35F210
    void .ctor();  // RVA: 0x35F3F0
};

// Namespace: <global>
class FontManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    TMP_FontAssetPointer* mPaddedFontAssetPointer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TMP_FontAssetPointer* mShadowFontAssetPointer; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_FontAsset* mPixelPaddedFontAsset; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TMP_FontAsset* mSDFPaddedFontAsset; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    TMP_FontAsset* mPixelShadowFontAsset; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    TMP_FontAsset* mSDFShadowFontAsset; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool mPixelFont; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List<TMPro.TMP_FontAsset> dynamicFontList; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* dynamicFontPopulationRoot; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> dynamicFontPopulationText; // 0x0068

    // Methods
    void Initialise(bool pixelFont);  // RVA: 0x35F9A0
    void UpdateFontAssets(bool pixelFont, bool force);  // RVA: 0x360100
    void ResetDynamicFonts();  // RVA: 0x360000
    void PopulateDynamicFonts();  // RVA: 0x35FBB0
    void PopulateDynamicFontText(Il2CppString* text);  // RVA: 0x35FAB0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class GameCanvas : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* canvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* anchor; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerController* mPlayerController; // 0x0030

    // Methods
    void Initialise(PlayerController* playerController);  // RVA: 0x360200
    void Initialise(bool refresh);  // RVA: 0x3601E0
    void SetActive(bool active);  // RVA: 0x360240
    void DeactivateCanvas();  // RVA: 0x2C1B90
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x360540
    void UpdateAnchors();  // RVA: 0x3602C0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class GameInteractableCanvas : public GameCanvas
{
public:
    uint8_t pad_0000[0x38]; // 0x0000
    CanvasGroup* canvasGroup; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    CanvasScaler* scaler; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector2 scaleReferenceSize; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    UIManager* mUIManager; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerInputState* mPlayerInputState; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    bool autoPopulateButtons; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    DialogButton* defaultButton; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    DialogButton* closeButton; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    System.Collections.Generic.List<DialogButton> mButtons; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    int32_t mNumButtons; // 0x0080
    uint8_t pad_0081[0x3]; // 0x0081
    bool mButtonsActive; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    int32_t mCurrentButton; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    bool mCurrentButtonMouseHover; // 0x008C
    bool mProcessInput; // 0x008D

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x360A80
    void ClearButtonSelection();  // RVA: 0x360590
    DialogButton* IsMouseOverButton();  // RVA: 0x361120
    void Initialise(bool refresh);  // RVA: 0x360960
    void UpdateScale();  // RVA: 0x361AD0
    void SetActive(bool active);  // RVA: 0x361930
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x361A30
    bool ConsumesInput(InputButtonIndex buttonIndex);  // RVA: 0x360690
    void UpdateIsDirty();  // RVA: 0x2C1B90
    void ProcessInput();  // RVA: 0x3614D0
    void SelectNextButton(int32_t dir);  // RVA: 0x361850
    void SelectButton(int32_t index, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x3616E0
    bool SelectButton(DialogButton* button, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x3615E0
    void DropdownButtonAdvance(DropdownButton* dropdownButton, int16_t dir);  // RVA: 0x3606A0
    bool HasInputType(ControllerType inputType);  // RVA: 0x3608C0
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x361470
    void OnDialogButtonPointerExit(DialogButton* dialogButton);  // RVA: 0x3614C0
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x361370
    void OnCloseButtonClicked();  // RVA: 0x361310
    void OnCloseButtonPressed(DialogButton* closeButton);  // RVA: 0x361330
    void OnClose();  // RVA: 0x2C1B90
    void EnableButton(DialogButton* dialogButton, bool enabled);  // RVA: 0x360830
    bool IsMouseOverButton(DialogButton* dialogButton, bool checkAllButtons);  // RVA: 0x360E60
    void .ctor();  // RVA: 0x361BB0
};

// Namespace: <global>
class Hint
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t state; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float hintTimer; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    bool active; // 0x0020

    // Methods
    void Initialise(Il2CppString* _name);  // RVA: 0x362050
    bool UpdateHint(PlayerController* playerController, float dt);  // RVA: 0x362080
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class HintManager
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,Hint> hintStates; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    PlayerInputController* playerInputController; // 0x0018

    // Methods
    void Initialise(PlayerInputController* _playerInputController);  // RVA: 0x361CD0
    void AddHint(Hint* hint, Il2CppString* name);  // RVA: 0x361C40
    void Update(float dt);  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x361FD0
};

// Namespace: <global>
class ItemActionStates
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t canSelect; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t canCraft; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t canBuy; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t canSwitch; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t canPlace; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t canPlaceTrash; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t canPlaceSell; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t canTake; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t canUse; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t canRead; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t canEquip; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t canCancelPickup; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t canSell; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t canLoot; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t canStore; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t canDropPickup; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int32_t canUntrash; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t canTakeOne; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    int32_t canCraftX; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    int32_t canBuyX; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t canTakeX; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t canTrash; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t canDropClick; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    int32_t canDropCancel; // 0x006C

    // Methods
    void Clear();  // RVA: 0x362AF0
    void .ctor();  // RVA: 0x362B60
};

// Namespace: <global>
class PickedUpItemDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ContainerItem* mContainer; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t mItemIndex; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemSlotBase* mSlot; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Player* mPlayer; // 0x0028

    // Methods
    void InitialisePlayer(Player* player);  // RVA: 0x370170
    Item* GetItem();  // RVA: 0x370150
    void PickUpItem(Item* item);  // RVA: 0x370180
    bool ReturnItem();  // RVA: 0x3704F0
    void SelectSlot(ContainerItem* container, ItemSlotBase* slot);  // RVA: 0x3707B0
    void TakeXItem(ContainerItem* container, ItemSlotBase* slot, uint16_t quantity);  // RVA: 0x370D10
    Item* EquipItem(Item* item, int32_t equipmentIndex);  // RVA: 0x3700F0
    void Drop();  // RVA: 0x370040
    void Use();  // RVA: 0x371140
    void Clear();  // RVA: 0x36FFE0
    void Refresh(ContainerItem* container, Item* item, ItemSlotBase* slot);  // RVA: 0x3703F0
    void .ctor();  // RVA: 0x3711E0
};

// Namespace: <global>
class SelectedTabDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemTab* tab; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TabType type; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t tabIndex; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    bool selected; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t minItemIndex; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t maxItemIndex; // 0x0028

    // Methods
    void Refresh();  // RVA: 0x371600
    void Select(ItemTab* _tab);  // RVA: 0x3716C0
    void Reset();  // RVA: 0x371690
    void Clear();  // RVA: 0x371560
    void .ctor();  // RVA: 0x371880
};

// Namespace: <global>
struct InventoryButtons
{
public:
    // Static fields
    // static InventoryButtons RESTOCK_NEARBY;
    // static InventoryButtons STACK_NEARBY;
    // static InventoryButtons SORT_INVENTORY;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct StorageButtons
{
public:
    // Static fields
    // static StorageButtons LOOT_ALL;
    // static StorageButtons QUICK_RESTOCK;
    // static StorageButtons DEPOSIT_ALL;
    // static StorageButtons QUICK_STACK;
    // static StorageButtons SORT_STORAGE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct CraftingFilter
{
public:
    // Static fields
    // static CraftingFilter ALL;
    // static CraftingFilter WEAPONS;
    // static CraftingFilter EQUIPMENT;
    // static CraftingFilter BUILDING;
    // static CraftingFilter MISC;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class InventorySelectionDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mInventoryPage; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t mInventoryPageMax; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t mStorePage; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t mStorePageMax; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t mCraftingPage; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t mCraftingPageMax; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    CraftingFilter mCraftingFilter; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t mSelectedQuickbarIndex; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t mCurrentSelectedCol; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t mCurrentSelectedRow; // 0x0034

    // Methods
    void Reset();  // RVA: 0x362AA0
    void CycleInventoryPage(int32_t dir);  // RVA: 0x362940
    void CycleCraftingPage(int32_t dir);  // RVA: 0x362890
    void CycleStorePage(int32_t dir);  // RVA: 0x3629F0
    void .ctor();  // RVA: 0x362AD0
};

// Namespace: <global>
class SelectedItemDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemSlotBase* slot; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    SlotType type; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Item* item; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool selected; // 0x0028

    // Methods
    void Refresh();  // RVA: 0x3712A0
    void Select(ItemSlotBase* _slot);  // RVA: 0x371370
    void Reset();  // RVA: 0x371330
    void Clear();  // RVA: 0x3711F0
    void .ctor();  // RVA: 0x371550
};

// Namespace: <global>
struct InventoryItemDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mIndex; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Item* mItem; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool mEnabled; // 0x0020

    // Methods
    void .ctor(int32_t _index, Item* _item, bool _enabled);  // RVA: 0x362850
};

// Namespace: <global>
struct RecipeDescriptorDetails
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t mIndex; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    RecipeDescriptor* mRecipe; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool mEnabled; // 0x0020

    // Methods
    void .ctor(int32_t _index, RecipeDescriptor* _recipe, bool _enabled);  // RVA: 0x362850
};

// Namespace: <global>
struct HUDState
{
public:
    // Static fields
    // static HUDState DISABLED;
    // static HUDState NORMAL;
    // static HUDState INVENTORY;
    // static HUDState MAP;
    // static HUDState DIALOG;
    // static HUDState WAYPOINT;
    // static HUDState TOTEM;
    // static HUDState ROOM;
    // static HUDState ASSIGN_NPC;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct HUDExtensionState
{
public:
    // Static fields
    // static HUDExtensionState CRAFTING;
    // static HUDExtensionState STORAGE;
    // static HUDExtensionState SHOP;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct HUDPanelType
{
public:
    // Static fields
    // static HUDPanelType NONE;
    // static HUDPanelType QUICKBAR;
    // static HUDPanelType INVENTORY;
    // static HUDPanelType EQUIPMENT;
    // static HUDPanelType CRAFTING;
    // static HUDPanelType STORAGE;
    // static HUDPanelType SHOP;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class HUDCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    Canvas* mQuickbarCanvas; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    CanvasGroup* mQuickbarCanvasGroup; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Canvas* mInventoryCanvas; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    CanvasGroup* mInventoryCanvasGroup; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    Canvas* mCraftingCanvas; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CanvasGroup* mCraftingCanvasGroup; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Canvas* mShopStorageCanvas; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    CanvasGroup* mShopStorageCanvasGroup; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    Canvas* mStorageCanvas; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    CanvasGroup* mStorageCanvasGroup; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    DialogCanvas* dialogCanvas; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    TotemCanvas* totemCanvas; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    RoomCanvas* roomCanvas; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    AssignNPCCanvas* assignNPCCanvas; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    WaypointCanvas* waypointCanvas; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    TabbedCanvas* tabbedCanvas; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    MiniMapCanvas* miniMapCanvas; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    MiniMapCanvas* miniMapRadarCanvas; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    GameObject* quickBar; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    GameObject* itemsPanel; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    GameObject* extensionPanel; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    GameObject* expandedFilterPanel; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    GameObject* inventoryQuickbarPanel; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    GameObject* equipmentPanel; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    GameObject* inventoryButtonsPanel; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    ItemSlot* trashSlot; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    DialogButton* inventoryButton; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    CanvasGroup* pageButtonCanvasGroup; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    CanvasGroup* extensionPageButtonCanvasGroup; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    DialogButton* pageLeftButton; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    DialogButton* pageRightButton; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    DialogButton* extensionPageLeftButton; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    DialogButton* extensionPageRightButton; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    TextMeshProUGUI* inventoryPageText; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    TextMeshProUGUI* expandedTitle; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    TextMeshProUGUI* expandedPageText; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    ItemDetails* itemDetails; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    FloatingTextPanel* floatingTextPanel; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    DeathText* deathText; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    UIHints* uiHintsPanel; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    PlayerBars* playerBars; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    StatusEffectsPanel* statusEffectsPanel; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    NetworkPingPanel* networkPingPanel; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    QuickbarSlot[][] quickBarSlots; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    ItemSlot[][][] inventorySlots; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    QuickbarSlot[][] inventoryQuickbarSlots; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    ItemSlot[][] equipmentSlots; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    RecipeSlot[][][] recipeSlots; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    ItemSlot[][][] storageShopSlots; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    System.Collections.Generic.List<ButtonSlot> recipeFilters; // 0x0218
    uint8_t pad_0219[0x7]; // 0x0219
    System.Collections.Generic.List<ButtonSlot> storageButtons; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    System.Collections.Generic.List<ButtonSlot> inventoryButtons; // 0x0228
    uint8_t pad_0229[0x7]; // 0x0229
    GameObject* recipeSlotPrefab; // 0x0230
    uint8_t pad_0231[0x7]; // 0x0231
    GameObject* quickbarSlotPrefab; // 0x0238
    uint8_t pad_0239[0x7]; // 0x0239
    GameObject* itemSlotPrefab; // 0x0240
    uint8_t pad_0241[0x7]; // 0x0241
    GameObject* buttonSlotPrefab; // 0x0248
    uint8_t pad_0249[0x7]; // 0x0249
    Player* player; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    SelectedItemDetails* selectedItemDetails; // 0x0258
    uint8_t pad_0259[0x7]; // 0x0259
    PickedUpItemDetails* pickedUpItemDetails; // 0x0260
    uint8_t pad_0261[0x7]; // 0x0261
    ItemSlotBase* buttonHoldSlot; // 0x0268
    uint8_t pad_0269[0x7]; // 0x0269
    ItemSlotBase* dragSlot; // 0x0270
    uint8_t pad_0271[0x7]; // 0x0271
    bool controlInGameArea; // 0x0278
    uint8_t pad_0279[0x3]; // 0x0279
    Vector2 playerPos; // 0x027C
    uint8_t pad_027D[0x7]; // 0x027D
    int32_t playerLevel; // 0x0284
    uint8_t pad_0285[0x3]; // 0x0285
    InventorySelectionDetails* mInventorySelectionDetails; // 0x0288
    uint8_t pad_0289[0x7]; // 0x0289
    ItemSlotBase* mouseHoverSlot; // 0x0290
    uint8_t pad_0291[0x7]; // 0x0291
    DialogButton* mouseHoverButton; // 0x0298
    uint8_t pad_0299[0x7]; // 0x0299
    ItemActionStates* mItemActionStates; // 0x02A0
    uint8_t pad_02A1[0x7]; // 0x02A1
    int32_t mInventoryRows; // 0x02A8
    uint8_t pad_02A9[0x3]; // 0x02A9
    int32_t mInventoryCols; // 0x02AC
    uint8_t pad_02AD[0x3]; // 0x02AD
    int32_t mQuickbarlength; // 0x02B0
    uint8_t pad_02B1[0x3]; // 0x02B1
    int32_t mInventoryLength; // 0x02B4
    uint8_t pad_02B5[0x3]; // 0x02B5
    int32_t mEquipmentCols; // 0x02B8
    uint8_t pad_02B9[0x3]; // 0x02B9
    int32_t mEquipmentRows; // 0x02BC
    uint8_t pad_02BD[0x3]; // 0x02BD
    int32_t mEquipmentLength; // 0x02C0
    uint8_t pad_02C1[0x3]; // 0x02C1
    int32_t mSlotMargin; // 0x02C4
    uint8_t pad_02C5[0x3]; // 0x02C5
    float mSlotWidth; // 0x02C8
    uint8_t pad_02C9[0x3]; // 0x02C9
    float mPanelMargin; // 0x02CC
    uint8_t pad_02CD[0x3]; // 0x02CD
    System.Collections.Generic.List<InventoryItemDetails> mFilteredInventoryItems; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    System.Collections.Generic.List<RecipeDescriptorDetails> mFilteredRecipeItems; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    System.Collections.Generic.Dictionary<RecipeDescriptor,System.Boolean> mCurrentRecipeItems; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    HUDState mState; // 0x02E8
    uint8_t pad_02E9[0x3]; // 0x02E9
    HUDExtensionState mExtensionState; // 0x02EC
    uint8_t pad_02ED[0x3]; // 0x02ED
    bool mForceUpdate; // 0x02F0
    bool mCurrentMouseControl; // 0x02F1
    bool mIsDirty; // 0x02F2
    bool mTorchHotkeyHeld; // 0x02F3
    int32_t mTorchHotkeyIndex; // 0x02F4
    uint8_t pad_02F5[0x3]; // 0x02F5
    bool mPendingActionResult; // 0x02F8

    // Methods
    void LateUpdate();  // RVA: 0x34EB50
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x34E3B0
    void SetActive(bool active);  // RVA: 0x3540F0
    void Clear();  // RVA: 0x34C2D0
    void UpdateScale();  // RVA: 0x35AEF0
    float GetScale();  // RVA: 0x34E250
    void EnableCanvas(Canvas* canvas, CanvasGroup* canvasGroup, GraphicRaycaster* rayCaster, bool enable);  // RVA: 0x34D310
    void EnableCanvasGroup(CanvasGroup* canvasGroup, bool enable);  // RVA: 0x34D2A0
    void SetupSlots();  // RVA: 0x3543A0
    void RefreshHotbarNumbers();  // RVA: 0x351150
    void InitialisePlayer(Player* p);  // RVA: 0x34E270
    bool IsInteractingWith(Item* item);  // RVA: 0x34E870
    void SetState(HUDState newState, HUDExtensionState newExtState);  // RVA: 0x354140
    void RefreshPenDialogCanvas(Item* trough, RoomBase* room);  // RVA: 0x351B40
    void RefreshBedDialogCanvas(Bed* bed, NPC* linkedNPC, RoomBase* room);  // RVA: 0x351030
    void RefreshInventorySlot(ItemSlot* slot, Item* item, int32_t itemIndex);  // RVA: 0x351250
    void RefreshTrashSlot();  // RVA: 0x3532D0
    void RefreshInventory(ContainerItem* inventory, bool quickbarOnly);  // RVA: 0x351300
    void RefreshEquipment(Player* player);  // RVA: 0x351060
    void RefreshRecipes(Player* player, bool refreshCurrentPage);  // RVA: 0x351B70
    void RefreshVendor();  // RVA: 0x3533E0
    void RefreshStorage();  // RVA: 0x352A90
    void RefreshSelectedItemSlot(bool updateItemDetails);  // RVA: 0x3527E0
    void CycleInventoryPage(int32_t dir);  // RVA: 0x34C610
    void CycleExtensionPage(int32_t dir);  // RVA: 0x34C310
    void CycleGamepadPage(int32_t dir);  // RVA: 0x34C3A0
    void CycleMousePage(int32_t dir);  // RVA: 0x34CE80
    bool IsMouseOverInventoryUI();  // RVA: 0x34E8D0
    bool IsMouseOverUIElement(GameObject* uiElement);  // RVA: 0x34EA20
    void CycleInventorySlot(int32_t colDir, int32_t rowDir, bool updateItemDetails);  // RVA: 0x34C660
    bool UpdatePanelSelection(HUDPanelType selectedPanel);  // RVA: 0x35AC20
    void ReselectCurrentSlotSelection(bool updateItemDetails);  // RVA: 0x353C00
    void SelectSlot(ItemSlotBase* itemSlot, bool updateDetails, bool updateSelectedSlotIndices);  // RVA: 0x353D00
    void UpdateItemDetails(ItemSlotBase* itemSlot, float fadeTime);  // RVA: 0x35A6B0
    void RefreshItemDetails();  // RVA: 0x351A50
    void UpdateSelectedSlotIndices(ItemSlotBase* itemSlot);  // RVA: 0x35B1A0
    void UpdatePageButtons();  // RVA: 0x35A750
    void OnItemSlotPointerEnter(ItemSlotBase* itemSlot);  // RVA: 0x3509D0
    void OnItemSlotPointerExit(ItemSlotBase* itemSlot);  // RVA: 0x350BD0
    void OnItemSlotClicked(ItemSlotBase* itemSlot);  // RVA: 0x34F990
    bool ProcessConsumableItemClick(Item* item, ItemSlotBase* refreshSlot);  // RVA: 0x350ED0
    void OnItemSlotAltClicked(ItemSlotBase* itemSlot, uint16_t quantity);  // RVA: 0x34F580
    void OnBeginDrag(ItemSlotBase* itemSlot, PointerEventData* eventData);  // RVA: 0x34F280
    void OnEndDrag(ItemSlotBase* itemSlot, PointerEventData* eventData);  // RVA: 0x34F420
    void SetTooltip(Il2CppString* tooltip);  // RVA: 0x354330
    void Drop(bool updateItemDetails);  // RVA: 0x34D240
    void Equip();  // RVA: 0x34D370
    void Use(ItemSlotBase* itemSlot);  // RVA: 0x35C9C0
    void Trash(ItemSlotBase* itemSlot);  // RVA: 0x357A00
    void Untrash(ItemSlotBase* itemSlot);  // RVA: 0x357BC0
    void Loot(ItemSlotBase* itemSlot);  // RVA: 0x34F120
    void LootAll(ContainerItem* sourceContainerItem);  // RVA: 0x34ED70
    void DepositAll(ContainerItem* destContainerItem);  // RVA: 0x34D030
    void Store(ItemSlotBase* itemSlot);  // RVA: 0x356850
    bool Sell(ItemSlotBase* itemSlot, bool sellPickedUpItem);  // RVA: 0x353F20
    void OnDialogButtonPointerEnter(DialogButton* button);  // RVA: 0x34F300
    void OnDialogButtonPointerExit(DialogButton* button);  // RVA: 0x34F3A0
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x34F2C0
    void OnPageLeftClicked();  // RVA: 0x350D70
    void OnPageRightClicked();  // RVA: 0x350DD0
    void OnExtensionPageLeftClicked();  // RVA: 0x34F530
    void OnExtensionPageRightClicked();  // RVA: 0x34F540
    void OnInventoryButtonClicked();  // RVA: 0x34F550
    void ToggleMenu(HUDState newState, HUDExtensionState newExtState, HUDPanelType selectedPanel, bool resetSelection, bool forceOn, Il2CppString* audioEventOverride);  // RVA: 0x357170
    void UpdatePlayerDistance();  // RVA: 0x35AC80
    void ToggleInventoryMenu(HUDExtensionState newExtState, HUDPanelType selectedPanel, bool forceOn);  // RVA: 0x356CD0
    void ToggleTeleportDialog(WaypointItem* waypoint);  // RVA: 0x3577A0
    void ToggleNPCDialog();  // RVA: 0x3574A0
    void ToggleDialog(HUDState dialogState);  // RVA: 0x3569B0
    void OpenTabbedDialog(int32_t tab);  // RVA: 0x350E80
    void OpenAssignNPCDialog(Bed* bed);  // RVA: 0x350E30
    void Back();  // RVA: 0x34BFC0
    void ShowNetworkWarning();  // RVA: 0x356820
    void UpdateUIHIntsRunning();  // RVA: 0x35B210
    void UpdateItemActionStates(ItemSlotBase* itemSlot);  // RVA: 0x359DF0
    void GetPrimaryActionStates(bool canInteract, bool canUse, bool canRead, bool canAttack, bool canPlace, bool canConsume, bool canEquip, bool canAutoCursor);  // RVA: 0x34DA00
    void UpdateUIHintsInventory(bool force);  // RVA: 0x35BAA0
    void UpdateUIHintsMap();  // RVA: 0x35C8C0
    void UpdateUIHintsTeleport();  // RVA: 0x35C940
    void UpdateSelectUIHint(bool force);  // RVA: 0x35B0A0
    ItemSlotBase* GetActionableSlot(InputButtonIndex buttonIndex);  // RVA: 0x34D9A0
    void MarkIsDirty();  // RVA: 0x34F270
    void UpdateIsDirty();  // RVA: 0x359A00
    void RefreshTorchHotkey(bool previousTorchHotkeyHeld);  // RVA: 0x353050
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x358040
    void SelectHUDKeyQuickbar(int32_t slotIndex);  // RVA: 0x353C20
    bool UpdateRetriggerButtonSlot(InputButtonIndex buttonIndex);  // RVA: 0x35AD60
    bool CanRetriggerButtonSlot(InputButtonIndex buttonIndex);  // RVA: 0x34C150
    bool GetActionButtonDown(InputButtonIndex buttonIndex, bool retriggered);  // RVA: 0x34D6D0
    bool GetPrimaryButtonDown();  // RVA: 0x34DF60
    void .ctor();  // RVA: 0x35CB40
};

// Namespace: <global>
class IngredientSlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    RawImage* image; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* countText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    TextMeshProUGUI* nameText; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Il2CppString* emptyName; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    SpriteDescriptor* emptySprite; // 0x0070

    // Methods
    void Initialise();  // RVA: 0x3620A0
    void RefreshImage();  // RVA: 0x362150
    void Refresh(ItemDescriptor* _ingredient, int32_t quantity, int32_t required, int32_t itemIndex, bool displayQuantities, bool canCraftRequired);  // RVA: 0x3622E0
    void .ctor();  // RVA: 0x3627F0
};

// Namespace: <global>
class ItemDetails : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<ItemFloatParameterTag,System.ValueTuple<System.String,System.String>> sWeap    // static System.Collections.Generic.Dictionary<ItemWeaponFloatParameterTag,System.ValueTuple<System.String,System.String>>    // static System.Collections.Generic.Dictionary<ItemStatParameterTag,System.ValueTuple<System.String,System.String,System.S    // static System.Collections.Generic.Dictionary<ItemStatParameterTag,System.ValueTuple<System.String,System.String,System.S
    uint8_t pad_0000[0x20]; // 0x0000
    RectTransform* anchor; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Canvas* canvas; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    CanvasGroup* canvasGroup; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float canvasAlpha; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    bool canvasEnabled; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    Canvas* ingredientsCanvas; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AtlasImage* image; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    MarkedItemHover* markedItemHover; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* nameText; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    System.Collections.Generic.List<TMPro.TextMeshProUGUI> descriptionTexts; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* ingredientPrefab; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    SpriteDescriptor* backgroundSprite; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    IngredientSlot[][] ingredientSlots; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Item* mMarkedItem; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Player* mPlayer; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    ItemSlotBase* mItemSlot; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool mFullDetails; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Il2CppString* mText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float mFadeOutTime; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    Color mDefaultColour; // 0x00AC

    // Methods
    void Setup();  // RVA: 0x3654E0
    void InitialisePlayer(Player* player);  // RVA: 0x364390
    void SetSelectedItem(ItemSlotBase* itemSlot, bool canBuy, bool canSell, float fadeTime);  // RVA: 0x364DB0
    void RefreshExistingSlot(bool canBuy, bool canSell);  // RVA: 0x3643B0
    void UpdateNameText(Item* item, ItemDescriptor* itemDescriptor);  // RVA: 0x366DA0
    void SetText(Il2CppString* text);  // RVA: 0x365390
    void SetSlotName();  // RVA: 0x364EC0
    void AppendItemStats(ItemDescriptor* itemDescriptor, int32_t currentDescrIndex);  // RVA: 0x3637C0
    void UpdateDescriptionText(ItemSlotBase* itemSlot, Item* item, bool isBuy, bool isSell, bool costOnly);  // RVA: 0x365BF0
    int32_t AppendDescriptionText(int32_t currentDescrIndex, Il2CppString* text, Color color);  // RVA: 0x363030
    int32_t AppendIntDescriptionText(int32_t currentDescrIndex, int32_t value, Il2CppString* prefix, Il2CppString* suffix, Color color);  // RVA: 0x363610
    static void SetCostText(TextMeshProUGUI* text, int32_t cost, Il2CppString* prefix1, Il2CppString* prefix2, Player* playerWalletToCheck);  // RVA: 0x364670
    int32_t AppendCostDescriptionText(int32_t currentDescrIndex, int32_t cost, Il2CppString* prefix1, Il2CppString* prefix2, Player* playerWalletToCheck);  // RVA: 0x362F50
    int32_t AppendFloatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, ItemFloatParameterTag tag, Il2CppString* prefix, Il2CppString* suffix, int32_t decimalPlaces);  // RVA: 0x363450
    int32_t AppendWeaponStatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, ItemFloatParameterTag tag, int32_t decimalPlaces);  // RVA: 0x364050
    int32_t AppendWeaponExtraStatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, ItemWeaponFloatParameterTag tag, int32_t decimalPlaces);  // RVA: 0x363DF0
    int32_t AppendEquipmentStatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, StatFloatProperty* statProperty, int32_t decimalPlaces);  // RVA: 0x3631A0
    int32_t AppendConsumableStatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, ConsumableFloatProperty* statProperty, int32_t decimalPlaces);  // RVA: 0x362BD0
    int32_t AppendSurfaceFloatDescriptionText(ItemDescriptor* item, int32_t currentDescrIndex, ItemSurfaceFloatParameterTag tag, Il2CppString* prefix1, Il2CppString* prefix2, Il2CppString* suffix, int32_t decimalPlaces, float multiplier);  // RVA: 0x363BC0
    void SetMarkedItem(Item* item);  // RVA: 0x364960
    void SetMarkedItem(Item* item, int32_t quantity, bool showQuantity);  // RVA: 0x3649F0
    void SetPosition(Vector3 position, float scale);  // RVA: 0x364C00
    void SetAnchor(Vector3 position);  // RVA: 0x3645D0
    void EnableFullDetails(bool enable);  // RVA: 0x3642B0
    void Enable(bool enable);  // RVA: 0x364320
    void SetCanvasAlpha(float alpha);  // RVA: 0x364600
    void UpdateCanvasAlpha(float dt);  // RVA: 0x365B80
    void UpdateTime(float dt);  // RVA: 0x367220
    void .ctor();  // RVA: 0x3684F0
    static void .cctor();  // RVA: 0x367390
};

// Namespace: <global>
class ItemSlot : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    Button* button; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RawImage* image; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RawImage* background; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    AtlasImage* selected; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    TextMeshProUGUI* text; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    int32_t mEquipmentType; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Il2CppString* backgroundName; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    Il2CppString* markedBackgroundName; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Il2CppString* selectedName; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Il2CppString* disabledName; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Il2CppString* emptyName; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    SpriteDescriptor* backgroundSprite; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    SpriteDescriptor* markedBackgroundSprite; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    SpriteDescriptor* selectedSprite; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    SpriteDescriptor* disabledSprite; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    SpriteDescriptor* emptySprite; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    bool mCanMark; // 0x00D0
    bool mEmptyInteractable; // 0x00D1
    uint8_t pad_00D2[0x6]; // 0x00D2
    ItemSlotBase* mParentItemSlot; // 0x00D8

    // Methods
    void Initialise(IItemSlotHandler* slotHandler, SlotType type, bool emptyInteractable, int32_t col, int32_t row);  // RVA: 0x368920
    void SetParentSlot(ItemSlotBase* parent);  // RVA: 0x3695E0
    void ClearImage();  // RVA: 0x3688E0
    void RefreshImage();  // RVA: 0x368C50
    void SetEmptyImage(SpriteDescriptor* descriptor);  // RVA: 0x3695B0
    void Refresh(Item* _item, int32_t itemIndex, int32_t quantityOverride, bool enabled);  // RVA: 0x369270
    void Refresh(ItemDescriptor* descriptor, int32_t quantity, bool clickable, int32_t required, int32_t itemIndex);  // RVA: 0x369000
    void Refresh(ItemDescriptor* descriptor, int32_t quantity, bool clickable, int32_t itemIndex, bool enabled);  // RVA: 0x368E90
    void UpdateBackground();  // RVA: 0x369600
    void Select(bool selected);  // RVA: 0x3694C0
    void Mark(bool marked);  // RVA: 0x368BC0
    void .ctor();  // RVA: 0x3697E0
};

// Namespace: <global>
class IItemSlotHandler
{
public:

    // Methods
    void OnItemSlotPointerEnter(ItemSlotBase* itemSlot);  // RVA: 0x175530
    void OnItemSlotPointerExit(ItemSlotBase* itemSlot);  // RVA: 0x175530
    void OnBeginDrag(ItemSlotBase* itemSlot, PointerEventData* eventData);  // RVA: 0x17A420
    void OnEndDrag(ItemSlotBase* itemSlot, PointerEventData* eventData);  // RVA: 0x17A420
    void SetTooltip(Il2CppString* Tooltip);  // RVA: 0x175530
};

// Namespace: <global>
struct SlotType
{
public:
    // Static fields
    // static SlotType QUICKBAR;
    // static SlotType INVENTORY;
    // static SlotType VENDOR;
    // static SlotType STORAGE;
    // static SlotType INGREDIENT;
    // static SlotType RECIPE;
    // static SlotType EQUIPMENT;
    // static SlotType TRASH;
    // static SlotType BUTTON;
    // static SlotType QUERY;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ItemSlotBase : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    SlotType slotType; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    IItemSlotHandler* handler; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Item* item; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemDescriptor* itemDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool mMarked; // 0x0040
    bool mSelected; // 0x0041
    bool mEnabled; // 0x0042
    uint8_t pad_0043[0x1]; // 0x0043
    int32_t mItemIndex; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t mCol; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t mRow; // 0x004C

    // Methods
    void Initialise(IItemSlotHandler* slotHandler, SlotType type);  // RVA: 0x3685B0
    void RefreshItem(Item* _item, int32_t itemIndex);  // RVA: 0x368850
    void RefreshItemDescriptor(ItemDescriptor* descriptor, int32_t itemIndex);  // RVA: 0x368800
    void Select(bool selected);  // RVA: 0x2C1B90
    void OnChildSelect(bool select, ItemSlotBase* childSlot);  // RVA: 0x2C1B90
    void Mark(bool marked);  // RVA: 0x3685E0
    void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x368730
    void OnPointerExit(PointerEventData* eventData);  // RVA: 0x3687B0
    void OnBeginDrag(PointerEventData* eventData);  // RVA: 0x368650
    void OnDrag(PointerEventData* eventData);  // RVA: 0x2C1B90
    void OnEndDrag(PointerEventData* eventData);  // RVA: 0x3686C0
    void .ctor();  // RVA: 0x3688C0
};

// Namespace: <global>
struct TabType
{
public:
    // Static fields
    // static TabType HEADER;
    // static TabType INVENTORY;
    // static TabType CRAFTING;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class ItemTab : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Button* button; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RawImage* image; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    NineSliceRawImage* background; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* imageSpriteName; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* panelSpriteName; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Il2CppString* panelSpriteUnselectedName; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Il2CppString* panelSpriteUnselectedHighlightName; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    Il2CppString* mTooltip; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    int32_t mTabIndex; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    IItemSlotHandler* handler; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    TabType tabType; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    SpriteDescriptor* imageSprite; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    SpriteDescriptor* panelSprite; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    SpriteDescriptor* panelSpriteUnselected; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    SpriteDescriptor* panelSpriteUnselectedHighlight; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    bool mSelected; // 0x0098
    bool mEnabled; // 0x0099
    bool mHighlight; // 0x009A
    bool mClicked; // 0x009B

    // Methods
    void Initialise(IItemSlotHandler* slotHandler, TabType _tabType, int32_t tabTypeIndex, Il2CppString* _panelSpriteName, Il2CppString* _panelSpriteUnselectedName, Il2CppString* _panelSpriteUnselectedHighlightName, Il2CppString* _imageSpriteName, Il2CppString* tooltip);  // RVA: 0x3699F0
    void UpdateBackground();  // RVA: 0x369DB0
    void RefreshImage();  // RVA: 0x369C50
    void Select(bool selected);  // RVA: 0x369D30
    void Enable(bool enable);  // RVA: 0x369900
    void Highlight(bool highlight);  // RVA: 0x3699B0
    Il2CppString* GetTooltip();  // RVA: 0x369950
    void .ctor();  // RVA: 0x369F10
};

// Namespace: <global>
class JoinOnlineGameButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    TextMeshProUGUI* playerCountText; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    TextMeshProUGUI* difficultyText; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* sizeText; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextMeshProUGUI* hordeModeText; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    OnlineGame* mGame; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    bool mGameRemoved; // 0x00E8

    // Methods
    void Refresh(OnlineGame* game);  // RVA: 0x36A000
    void SetGameRemoved();  // RVA: 0x36A3B0
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class KickPlayerButton : public DialogButton
{
public:

    // Methods
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class KickPlayerCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<KickPlayerButton> mPlayerButtons; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    int8_t mPendingKickPlayer; // 0x00A0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x36A520
    void Initialise(bool refresh);  // RVA: 0x36A5F0
    void Refresh();  // RVA: 0x36AFB0
    void PopulatePlayerButtons();  // RVA: 0x36AD60
    void PopulatePlayerButton(Il2CppString* text, int32_t buttonId);  // RVA: 0x36ABC0
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3366A0
    void UpdateIsDirty();  // RVA: 0x2C1B90
    void OnClose();  // RVA: 0x36A7A0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x36A820
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x36AB20
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class LanguageSelectButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    LanguageTag mLanguageTag; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    GameObject* mChecked; // 0x00C8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x36B150
    void Refresh(LanguageTag languageTag);  // RVA: 0x36B330
    void RefreshCheck();  // RVA: 0x36B160
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class LoadCharacterButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    Il2CppString* filepath; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* deleteButton; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* dateText; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextMeshProUGUI* penaltyText; // 0x00D8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x36B840
    void Refresh(FileInfo* fileInfo);  // RVA: 0x36B8F0
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class LoadWorldButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    Il2CppString* filepath; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    TextMeshProUGUI* dateText; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* difficultyText; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextMeshProUGUI* sizeText; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    TextMeshProUGUI* hordeModeText; // 0x00E0

    // Methods
    void Refresh(FileInfo* fileInfo);  // RVA: 0x36BC20
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class LoreCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* titleText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* typeText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* fromText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TextMeshProUGUI* loreText; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    TextMeshProUGUI* lore2Text; // 0x00B8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x36BF30
    void Initialise(bool refresh);  // RVA: 0x36BF90
    int32_t PopulateLoreList();  // RVA: 0x36C410
    void SelectLoreButton(DialogButton* dialogButton);  // RVA: 0x36C770
    void SetTextStringID(TextMeshProUGUI* text, Il2CppString* stringId);  // RVA: 0x36CB70
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x36CC00
    bool ConsumesInput(InputButtonIndex buttonIndex);  // RVA: 0x36BED0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x36C400
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x360690
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class MarkedItemHover : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    RawImage* image; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* countText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    SpriteDescriptor* emptySprite; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float animTime; // 0x0038

    // Methods
    void Initialise();  // RVA: 0x36CC50
    void SetMarkedItem(ItemDescriptor* item, int32_t quantity, bool showQuantity);  // RVA: 0x36CD70
    void UpdateTime(float dt);  // RVA: 0x36CF30
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class IMessageBoxHandler
{
public:

    // Methods
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x175530
    void OnMessageBoxDeactivated();  // RVA: 0x1868E0
};

// Namespace: <global>
class MessageBoxCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    HUDCanvas* hudCanvas; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* title; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* text; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* button1Text; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TextMeshProUGUI* button2Text; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    TextMeshProUGUI* button3Text; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    DialogButton* button1; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* button2; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    DialogButton* button3; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    int32_t activeButtonCount; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    IMessageBoxHandler* mMessageBoxHandler; // 0x00E0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x36D0E0
    void DeactivateCanvas();  // RVA: 0x36D010
    void ShowMessage(IMessageBoxHandler* handler, Il2CppString* titleString, Il2CppString* messageString, Il2CppString* button1String, Il2CppString* button1AudioOverride, Il2CppString* button2String, Il2CppString* button2AudioOverride, Il2CppString* button3String, Il2CppString* button3AudioOverride);  // RVA: 0x36D280
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x36D630
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x36D160
    void OnClose();  // RVA: 0x36D140
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class MiniMapCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    RectTransform* imageAnchor; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Material* material; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    RawImage* image; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* timeText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    AtlasImage* alertIcon; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    Button* alertButton; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    bool mAlertVisible; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Texture2D* mMiniMapTexture; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    StringBuilder* mStringBuilder; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    int32_t mWidth; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t mHeight; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    int32_t maxBorder; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    float step; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    bool autoFit; // 0x00E8
    bool writeVisibility; // 0x00E9
    uint8_t pad_00EA[0x6]; // 0x00EA
    Color[][] miniMapPixels; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    int32_t mLevelOverride; // 0x00F8
    uint8_t pad_00F9[0x3]; // 0x00F9
    Color colBlack; // 0x00FC
    uint8_t pad_00FD[0xF]; // 0x00FD
    Vector3Int mPreviousPos; // 0x010C
    uint8_t pad_010D[0xB]; // 0x010D
    float mUpdateTimer; // 0x0118

    // Methods
    void Initialise(bool refresh);  // RVA: 0x36D710
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    bool ShouldUpdate(float dt, Player* player);  // RVA: 0x36E0F0
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x36E3F0
    void SetMiniMapPixel(int32_t col, int32_t row, Color colour, bool ignorevisibility);  // RVA: 0x36DFC0
    void SetMiniMapPixelRect(int32_t colStart, int32_t rowStart, int32_t colEnd, int32_t rowEnd, Color colour);  // RVA: 0x36DE50
    void SetMiniMapPixelRectLerp(int32_t colStart, int32_t rowStart, int32_t colEnd, int32_t rowEnd, Color colour, float lerpVal);  // RVA: 0x36DBC0
    bool UpdateMiniMap(float dt, bool force);  // RVA: 0x36E460
    void UpdateMiniMapDetails(int32_t startColRef, int32_t startRowRef, float step);  // RVA: 0x2C1B90
    void UpdateAlert();  // RVA: 0x36E200
    void OnClose();  // RVA: 0x36D9E0
    void OnOpenMap();  // RVA: 0x36DB00
    void OnOpenAlert();  // RVA: 0x36DA70
    void .ctor();  // RVA: 0x36FF30
};

// Namespace: <global>
class NetworkPingPanel : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    CanvasGroup* canvasGroup; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float mDisplayTime; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AtlasImage* pingIcon; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AtlasImage* alertIcon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    TextMeshProUGUI* alertText; // 0x0040

    // Methods
    void Clear();  // RVA: 0x38CDD0
    void ShowNetworkWarning();  // RVA: 0x38CE00
    void UpdateTime(float dt);  // RVA: 0x38CE10
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class OnlineAddLocalPlayerCanvas : public GameInteractableCanvas
{
public:

    // Methods
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x2C1B90
    void OnMessageBoxDeactivated();  // RVA: 0x38CFE0
    void OnFailedToAddLocalPlayer();  // RVA: 0x38CF40
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class IOnlineCanvasOnlineHandlers
{
public:
};

// Namespace: <global>
class <>c__DisplayClass31_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    OnlineGame* game; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x2C1750
    bool <Online_OnGameFound>b__0(JoinOnlineGameButton* button);  // RVA: 0x396C20
    bool <Online_OnGameFound>b__1(JoinOnlineGameButton* button);  // RVA: 0x396CB0
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    OnlineGame* game; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x2C1750
    bool <Online_OnGameRemoved>b__0(JoinOnlineGameButton* button);  // RVA: 0x396D40
};

// Namespace: <global>
class OnlineCanvas : public GameInteractableCanvas
{
public:
    // Static fields
    // static float START_SEARCH_TIME;
    // static float MIN_REFRESH_TIME;
    // static float MAX_REFRESH_TIME;
    // static int32_t AUTO_REFRESH_RATE;
    // static float AUTO_REFRESH_TIME;
    // static float MAX_HOST_GAME_TIMEOUT;
    // static int32_t LIST_CAPACITY;

    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* hostNewButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* refreshButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    float refreshTimer; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float autoRefreshTimer; // 0x00AC
    uint8_t pad_00AD[0x3]; // 0x00AD
    int32_t autoRefreshCount; // 0x00B0
    uint8_t pad_00B1[0x3]; // 0x00B1
    float hostGameTimer; // 0x00B4
    uint8_t pad_00B5[0x3]; // 0x00B5
    System.Collections.Generic.List<JoinOnlineGameButton> mJoinButtons; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    JoinOnlineGameButton* mCurrentlyJoiningButton; // 0x00C0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x38D070
    void SetActive(bool active);  // RVA: 0x38E0A0
    void Refresh(bool wasActive);  // RVA: 0x38DD70
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x38E600
    void UpdateAutoRefresh(bool allowFullRefresh, float dt);  // RVA: 0x38E430
    void SelectButton(int32_t index, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x38E050
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x339430
    bool HostGamePending();  // RVA: 0x38D000
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x38D130
    void OnClose();  // RVA: 0x38D0D0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x38D350
    bool HasDialogListMouseSupport(DialogButton* dialogButton);  // RVA: 0x338C70
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x38D460
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void Online_OnGameFound(OnlineGame* game);  // RVA: 0x38D5C0
    void Online_OnCreateGameInProgress();  // RVA: 0x2C1B90
    void Online_OnCreateGameSucceeded();  // RVA: 0x337B50
    void Online_OnCreateGameFailed(CreateGameFailedReason reason);  // RVA: 0x38D520
    void Online_OnJoinGameInProgress();  // RVA: 0x38DC70
    void Online_OnJoinGameSucceeded();  // RVA: 0x38DD10
    void Online_OnJoinGameFailed(JoinGameFailedReason reason);  // RVA: 0x38DA10
    void Online_OnGameRemoved(OnlineGame* game);  // RVA: 0x38D8E0
    void .ctor();  // RVA: 0x38E980
};

// Namespace: <global>
class IOnlinePendingCanvasOnlineHandlers
{
public:
};

// Namespace: <global>
class OnlinePendingCanvas : public GameInteractableCanvas
{
public:

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x33BC80
    void SetActive(bool active);  // RVA: 0x38EC70
    void OnClose();  // RVA: 0x38EA10
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x38EA70
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void Online_OnJoinGameInProgress();  // RVA: 0x38EB90
    void Online_OnJoinGameSucceeded();  // RVA: 0x38EC30
    void Online_OnJoinGameFailed(JoinGameFailedReason reason);  // RVA: 0x38EAB0
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class OptionsAudioCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* masterValueText; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* masterText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Slider* masterVolumeSlider; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* masterVolumeSliderButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TextMeshProUGUI* musicValueText; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    TextMeshProUGUI* musicText; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Slider* musicVolumeSlider; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* musicVolumeSliderButton; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* sfxValueText; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    TextMeshProUGUI* sfxText; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Slider* sfxVolumeSlider; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    DialogButton* sfxVolumeSliderButton; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    TextMeshProUGUI* uiValueText; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    TextMeshProUGUI* uiText; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    Slider* uiVolumeSlider; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    DialogButton* uiVolumeSliderButton; // 0x0108

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x38F1B0
    void Initialise(bool refresh);  // RVA: 0x38F040
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x38F720
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x38F4D0
    void OnClose();  // RVA: 0x38F460
    void UpdateVolumeText(TextMeshProUGUI* text, TextMeshProUGUI* valueText, float value, Il2CppString* stringID);  // RVA: 0x38FF40
    void UpdateMasterVolume(float volume, bool updateSlider, Il2CppString* audioTrigger);  // RVA: 0x38F940
    void UpdateMusicVolume(float volume, bool updateSlider, Il2CppString* audioTrigger);  // RVA: 0x38FAC0
    void UpdateSFXVolume(float volume, bool updateSlider, Il2CppString* audioTrigger);  // RVA: 0x38FC40
    void UpdateUIVolume(float volume, bool updateSlider, Il2CppString* audioTrigger);  // RVA: 0x38FDC0
    void OnSliderLeftClicked(Slider* slider);  // RVA: 0x38F6F0
    void OnSliderRightClicked(Slider* slider);  // RVA: 0x38F6F0
    void OnSliderClicked(DialogButton* dialogButton);  // RVA: 0x38F4F0
    void OnSliderDragged(Slider* slider, float position);  // RVA: 0x38F520
    void AdjustVolumeSlider(DialogButton* button, float amount, Il2CppString* audioTrigger);  // RVA: 0x38EE60
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class OptionsCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogButton* languageButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* graphicsButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* audioButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* interfaceButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    DialogButton* controlsButton; // 0x00B0

    // Methods
    void Initialise(bool refresh);  // RVA: 0x3901A0
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x35E080
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x390280
    void OnClose();  // RVA: 0x3901E0
    void OnLanguageClicked();  // RVA: 0x390520
    void OnGraphicsClicked();  // RVA: 0x3904C0
    void OnAudioClicked();  // RVA: 0x3901B0
    void OnInterfaceClicked();  // RVA: 0x3904F0
    void OnControlsClicked();  // RVA: 0x390250
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
struct GraphicsOptionsTable
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Resolution resolution; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    FullScreenMode fullScreenMode; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool vSync; // 0x0024
    bool pixelPerfect; // 0x0025
    bool sparseGrass; // 0x0026
    bool displayFPS; // 0x0027
    bool perspectiveMode; // 0x0028
};

// Namespace: <global>
class OptionsGraphicsCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* resolutionText; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* resolutionPrevButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* resolutionNextButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    CheckboxButton* fullscreenModeButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    CheckboxButton* vSyncButton; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CheckboxButton* pixelPerfectButton; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    CheckboxButton* displayFPSButton; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DialogButton* applyButton; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    GraphicsOptionsTable pendingGraphicsOptions; // 0x00D0
    uint8_t pad_00D1[0x1F]; // 0x00D1
    System.Collections.Generic.List<UnityEngine.Resolution> mMaxRefreshRateResolutions; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    Resolution mCurrentResolution; // 0x00F8
    uint8_t pad_00F9[0xF]; // 0x00F9
    FullScreenMode mCurrentFullScreenMode; // 0x0108
    uint8_t pad_0109[0x3]; // 0x0109
    int32_t mResolutionIndex; // 0x010C

    // Methods
    void Initialise(bool refresh);  // RVA: 0x390A90
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x391E00
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x391040
    void OnClose();  // RVA: 0x390CE0
    void InitialiseFullScreenMode();  // RVA: 0x390940
    void RefreshFullScreenMode(bool initialise);  // RVA: 0x3918F0
    void InitialiseResolutions();  // RVA: 0x390970
    void AddResolution(Resolution resolution);  // RVA: 0x390550
    void RefreshResolutions();  // RVA: 0x391A40
    void SetCheckboxState(CheckboxButton* button, bool state, bool clearSelected);  // RVA: 0x391D70
    void OnFullScreenModePrevClicked();  // RVA: 0x391530
    void OnResolutionPrevClicked();  // RVA: 0x391740
    void OnResolutionNextClicked();  // RVA: 0x3915E0
    void OnVSyncClicked();  // RVA: 0x391880
    void OnPixelPerfectClicked();  // RVA: 0x391570
    void OnDisplayFPSClicked();  // RVA: 0x3914C0
    bool HasPendingChanges();  // RVA: 0x3906F0
    void OnConfirmClicked();  // RVA: 0x390D10
    void .ctor();  // RVA: 0x391F80
};

// Namespace: <global>
class OptionsInterfaceCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    CheckboxButton* pixelFontButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    CheckboxButton* damageTextButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    CheckboxButton* pickupTextButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    CheckboxButton* enemyTextButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    CheckboxButton* showCursorButton; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CheckboxButton* runInBackgroundButton; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    CheckboxButton* showHotbarNumbersButton; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    CheckboxButton* placeAtCursorLimitButton; // 0x00C8

    // Methods
    void Initialise(bool refresh);  // RVA: 0x392010
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x35E080
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x392520
    void OnClose();  // RVA: 0x392410
    void SetCheckboxState(CheckboxButton* button, bool state, bool clearSelected);  // RVA: 0x392DE0
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class OptionsLanguageCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* languageSelectPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    System.Collections.Generic.List<LanguageSelectButton> mLanguageSelectButtons; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* title; // 0x00A8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x392E70
    void SetActive(bool active);  // RVA: 0x3939D0
    void Refresh();  // RVA: 0x393510
    void UpdateTitle();  // RVA: 0x393A10
    void PopulateLanguageButtons();  // RVA: 0x3931B0
    void SelectCurrentLanguageButton();  // RVA: 0x393820
    void RefreshLanguageSelectButtons();  // RVA: 0x393430
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3366A0
    void OnClose();  // RVA: 0x392F40
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x392FC0
    bool HasDialogListMouseSupport(DialogButton* dialogButton);  // RVA: 0x338C70
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
struct ButtonID
{
public:
    // Static fields
    // static ButtonID Resume;
    // static ButtonID SaveLevel;
    // static ButtonID Settings;
    // static ButtonID Quit;
    // static ButtonID Unpair;
    // static ButtonID Invite;
    // static ButtonID Kick;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class PauseCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogButton* quitButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    DialogButton* unpairButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    DialogButton* kickButton; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* inviteButton; // 0x00A8

    // Methods
    void Initialise(bool refresh);  // RVA: 0x393CD0
    void UpdatePauseButton(DialogButton* button, bool enabled, Vector3 buttonPosition);  // RVA: 0x394970
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x35E080
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x394290
    void UnpairDevice();  // RVA: 0x394810
    void KickPlayer();  // RVA: 0x394210
    void QuitLevel();  // RVA: 0x394590
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x394560
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class PlayerBars : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* canvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    VerticalProgressBar* healthBar; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    VerticalProgressBar* manaBar; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Player* mPlayer; // 0x0038

    // Methods
    void Setup(Player* player);  // RVA: 0x394A90
    void Update();  // RVA: 0x394B90
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
struct CoreActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_Core_Close();  // RVA: 0x37A310
    InputAction* get_Core_ScrollUp();  // RVA: 0x37A350
    InputAction* get_Core_ScrollDown();  // RVA: 0x37A330
    InputActionMap* Get();  // RVA: 0x3799F0
    void Enable();  // RVA: 0x3799C0
    void Disable();  // RVA: 0x379990
    bool get_enabled();  // RVA: 0x37A370
    static InputActionMap* op_Implicit(CoreActions set);  // RVA: 0x37A3A0
    void AddCallbacks(ICoreActions* instance);  // RVA: 0x3791D0
    void UnregisterCallbacks(ICoreActions* instance);  // RVA: 0x379C20
    void RemoveCallbacks(ICoreActions* instance);  // RVA: 0x379A10
    void SetCallbacks(ICoreActions* instance);  // RVA: 0x379A80
};

// Namespace: <global>
struct FEActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_FE_Up();  // RVA: 0x37CCC0
    InputAction* get_FE_Down();  // RVA: 0x37CC00
    InputAction* get_FE_Left();  // RVA: 0x37CC20
    InputAction* get_FE_Right();  // RVA: 0x37CC40
    InputAction* get_FE_Select();  // RVA: 0x37CC60
    InputAction* get_FE_Back();  // RVA: 0x37CBE0
    InputAction* get_FE_TabLeft();  // RVA: 0x37CC80
    InputAction* get_FE_TabRight();  // RVA: 0x37CCA0
    InputActionMap* Get();  // RVA: 0x37B750
    void Enable();  // RVA: 0x37B720
    void Disable();  // RVA: 0x37B6F0
    bool get_enabled();  // RVA: 0x37CCE0
    static InputActionMap* op_Implicit(FEActions set);  // RVA: 0x37CD10
    void AddCallbacks(IFEActions* instance);  // RVA: 0x37A3C0
    void UnregisterCallbacks(IFEActions* instance);  // RVA: 0x37B980
    void RemoveCallbacks(IFEActions* instance);  // RVA: 0x37B770
    void SetCallbacks(IFEActions* instance);  // RVA: 0x37B7E0
};

// Namespace: <global>
struct Common_KBActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_Common_Primary();  // RVA: 0x379140
    InputAction* get_Common_KB_Interact();  // RVA: 0x378F60
    InputAction* get_Common_KB_Inventory();  // RVA: 0x378F80
    InputAction* get_Common_KB_Map();  // RVA: 0x378FA0
    InputAction* get_Common_KB_CycleLeft();  // RVA: 0x378F20
    InputAction* get_Common_KB_CycleRight();  // RVA: 0x378F40
    InputAction* get_Common_Rotate();  // RVA: 0x379160
    InputAction* get_Common_KB_ZoomIn();  // RVA: 0x379100
    InputAction* get_Common_KB_ZoomOut();  // RVA: 0x379120
    InputAction* get_Common_KB_Quickbar_1();  // RVA: 0x378FE0
    InputAction* get_Common_KB_Quickbar_2();  // RVA: 0x379000
    InputAction* get_Common_KB_Quickbar_3();  // RVA: 0x379020
    InputAction* get_Common_KB_Quickbar_4();  // RVA: 0x379040
    InputAction* get_Common_KB_Quickbar_5();  // RVA: 0x379060
    InputAction* get_Common_KB_Quickbar_6();  // RVA: 0x379080
    InputAction* get_Common_KB_Quickbar_7();  // RVA: 0x3790A0
    InputAction* get_Common_KB_Quickbar_8();  // RVA: 0x3790C0
    InputAction* get_Common_KB_Quickbar_9();  // RVA: 0x3790E0
    InputAction* get_Common_KB_Quickbar_10();  // RVA: 0x378FC0
    InputActionMap* Get();  // RVA: 0x376150
    void Enable();  // RVA: 0x376120
    void Disable();  // RVA: 0x3760F0
    bool get_enabled();  // RVA: 0x379180
    static InputActionMap* op_Implicit(Common_KBActions set);  // RVA: 0x3791B0
    void AddCallbacks(ICommon_KBActions* instance);  // RVA: 0x373490
    void UnregisterCallbacks(ICommon_KBActions* instance);  // RVA: 0x376390
    void RemoveCallbacks(ICommon_KBActions* instance);  // RVA: 0x376170
    void SetCallbacks(ICommon_KBActions* instance);  // RVA: 0x3761F0
};

// Namespace: <global>
struct Common_GPActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_Common_GP_Movement();  // RVA: 0x3733E0
    InputAction* get_Common_GP_Facing();  // RVA: 0x3733C0
    InputAction* get_Common_Primary();  // RVA: 0x373400
    InputAction* get_Common_Rotate();  // RVA: 0x373420
    InputAction* get_Common_GP_AutoCursor();  // RVA: 0x3733A0
    InputActionMap* Get();  // RVA: 0x372590
    void Enable();  // RVA: 0x372560
    void Disable();  // RVA: 0x372530
    bool get_enabled();  // RVA: 0x373440
    static InputActionMap* op_Implicit(Common_GPActions set);  // RVA: 0x373470
    void AddCallbacks(ICommon_GPActions* instance);  // RVA: 0x3718A0
    void UnregisterCallbacks(ICommon_GPActions* instance);  // RVA: 0x3727D0
    void RemoveCallbacks(ICommon_GPActions* instance);  // RVA: 0x3725B0
    void SetCallbacks(ICommon_GPActions* instance);  // RVA: 0x372630
};

// Namespace: <global>
struct Game_KBActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_Game_KB_Movement();  // RVA: 0x380450
    InputAction* get_Game_Torch();  // RVA: 0x380470
    InputActionMap* Get();  // RVA: 0x37FD20
    void Enable();  // RVA: 0x37FCF0
    void Disable();  // RVA: 0x37FCC0
    bool get_enabled();  // RVA: 0x380490
    static InputActionMap* op_Implicit(Game_KBActions set);  // RVA: 0x3804C0
    void AddCallbacks(IGame_KBActions* instance);  // RVA: 0x37F710
    void UnregisterCallbacks(IGame_KBActions* instance);  // RVA: 0x37FF60
    void RemoveCallbacks(IGame_KBActions* instance);  // RVA: 0x37FD40
    void SetCallbacks(IGame_KBActions* instance);  // RVA: 0x37FDC0
};

// Namespace: <global>
struct Game_GPActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_Game_GP_Interact();  // RVA: 0x37F600
    InputAction* get_Game_GP_Inventory();  // RVA: 0x37F620
    InputAction* get_Game_GP_Map();  // RVA: 0x37F640
    InputAction* get_Game_Torch();  // RVA: 0x37F6A0
    InputAction* get_Game_GP_CycleLeft();  // RVA: 0x37F5C0
    InputAction* get_Game_GP_CycleRight();  // RVA: 0x37F5E0
    InputAction* get_Game_GP_ZoomIn();  // RVA: 0x37F660
    InputAction* get_Game_GP_ZoomOut();  // RVA: 0x37F680
    InputActionMap* Get();  // RVA: 0x37E0F0
    void Enable();  // RVA: 0x37E0C0
    void Disable();  // RVA: 0x37E090
    bool get_enabled();  // RVA: 0x37F6C0
    static InputActionMap* op_Implicit(Game_GPActions set);  // RVA: 0x37F6F0
    void AddCallbacks(IGame_GPActions* instance);  // RVA: 0x37CD30
    void UnregisterCallbacks(IGame_GPActions* instance);  // RVA: 0x37E330
    void RemoveCallbacks(IGame_GPActions* instance);  // RVA: 0x37E110
    void SetCallbacks(IGame_GPActions* instance);  // RVA: 0x37E190
};

// Namespace: <global>
struct HUD_KBActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_HUD_KB_Modifier_1();  // RVA: 0x38CB60
    InputAction* get_HUD_KB_Modifier_2();  // RVA: 0x38CB80
    InputAction* get_HUD_KB_Movement();  // RVA: 0x38CBA0
    InputAction* get_HUD_Navigation();  // RVA: 0x38CC00
    InputAction* get_HUD_Select();  // RVA: 0x38CC80
    InputAction* get_HUD_KB_Use();  // RVA: 0x38CBC0
    InputAction* get_HUD_Take1();  // RVA: 0x38CD20
    InputAction* get_HUD_Take10();  // RVA: 0x38CD00
    InputAction* get_HUD_Drop();  // RVA: 0x38CB40
    InputAction* get_HUD_Store();  // RVA: 0x38CCA0
    InputAction* get_HUD_Trash();  // RVA: 0x38CD40
    InputAction* get_HUD_TabLeft();  // RVA: 0x38CCC0
    InputAction* get_HUD_TabRight();  // RVA: 0x38CCE0
    InputAction* get_HUD_PageLeft();  // RVA: 0x38CC20
    InputAction* get_HUD_PageRight();  // RVA: 0x38CC40
    InputAction* get_HUD_Up();  // RVA: 0x38CD60
    InputAction* get_HUD_Down();  // RVA: 0x38CB20
    InputAction* get_HUD_Left();  // RVA: 0x38CBE0
    InputAction* get_HUD_Right();  // RVA: 0x38CC60
    InputActionMap* Get();  // RVA: 0x389D50
    void Enable();  // RVA: 0x389D20
    void Disable();  // RVA: 0x389CF0
    bool get_enabled();  // RVA: 0x38CD80
    static InputActionMap* op_Implicit(HUD_KBActions set);  // RVA: 0x38CDB0
    void AddCallbacks(IHUD_KBActions* instance);  // RVA: 0x387090
    void UnregisterCallbacks(IHUD_KBActions* instance);  // RVA: 0x389F90
    void RemoveCallbacks(IHUD_KBActions* instance);  // RVA: 0x389D70
    void SetCallbacks(IHUD_KBActions* instance);  // RVA: 0x389DF0
};

// Namespace: <global>
struct HUD_GPActions
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerControls* m_Wrapper; // 0x0010

    // Methods
    void .ctor(PlayerControls* wrapper);  // RVA: 0x373390
    InputAction* get_HUD_GP_Modifier_1();  // RVA: 0x386E20
    InputAction* get_HUD_GP_Modifier_2();  // RVA: 0x386E40
    InputAction* get_HUD_Navigation();  // RVA: 0x386EC0
    InputAction* get_HUD_Select();  // RVA: 0x386F40
    InputAction* get_HUD_GP_Back();  // RVA: 0x386DA0
    InputAction* get_HUD_GP_Interact();  // RVA: 0x386E00
    InputAction* get_HUD_Take1();  // RVA: 0x386FE0
    InputAction* get_HUD_Take10();  // RVA: 0x386FC0
    InputAction* get_HUD_Drop();  // RVA: 0x386D80
    InputAction* get_HUD_Store();  // RVA: 0x386F60
    InputAction* get_HUD_Trash();  // RVA: 0x387000
    InputAction* get_HUD_GP_CycleLeft();  // RVA: 0x386DC0
    InputAction* get_HUD_GP_CycleRight();  // RVA: 0x386DE0
    InputAction* get_HUD_TabLeft();  // RVA: 0x386F80
    InputAction* get_HUD_TabRight();  // RVA: 0x386FA0
    InputAction* get_HUD_PageLeft();  // RVA: 0x386EE0
    InputAction* get_HUD_PageRight();  // RVA: 0x386F00
    InputAction* get_HUD_GP_ZoomIn();  // RVA: 0x386E60
    InputAction* get_HUD_GP_ZoomOut();  // RVA: 0x386E80
    InputAction* get_HUD_Up();  // RVA: 0x387020
    InputAction* get_HUD_Down();  // RVA: 0x386D60
    InputAction* get_HUD_Left();  // RVA: 0x386EA0
    InputAction* get_HUD_Right();  // RVA: 0x386F20
    InputActionMap* Get();  // RVA: 0x383800
    void Enable();  // RVA: 0x3837D0
    void Disable();  // RVA: 0x3837A0
    bool get_enabled();  // RVA: 0x387040
    static InputActionMap* op_Implicit(HUD_GPActions set);  // RVA: 0x387070
    void AddCallbacks(IHUD_GPActions* instance);  // RVA: 0x3804E0
    void UnregisterCallbacks(IHUD_GPActions* instance);  // RVA: 0x383A40
    void RemoveCallbacks(IHUD_GPActions* instance);  // RVA: 0x383820
    void SetCallbacks(IHUD_GPActions* instance);  // RVA: 0x3838A0
};

// Namespace: <global>
class ICoreActions
{
public:

    // Methods
    void OnCore_Close(CallbackContext context);
    void OnCore_ScrollUp(CallbackContext context);
    void OnCore_ScrollDown(CallbackContext context);
};

// Namespace: <global>
class IFEActions
{
public:

    // Methods
    void OnFE_Up(CallbackContext context);
    void OnFE_Down(CallbackContext context);
    void OnFE_Left(CallbackContext context);
    void OnFE_Right(CallbackContext context);
    void OnFE_Select(CallbackContext context);
    void OnFE_Back(CallbackContext context);
    void OnFE_TabLeft(CallbackContext context);
    void OnFE_TabRight(CallbackContext context);
};

// Namespace: <global>
class ICommon_KBActions
{
public:

    // Methods
    void OnCommon_Primary(CallbackContext context);
    void OnCommon_KB_Interact(CallbackContext context);
    void OnCommon_KB_Inventory(CallbackContext context);
    void OnCommon_KB_Map(CallbackContext context);
    void OnCommon_KB_CycleLeft(CallbackContext context);
    void OnCommon_KB_CycleRight(CallbackContext context);
    void OnCommon_Rotate(CallbackContext context);
    void OnCommon_KB_ZoomIn(CallbackContext context);
    void OnCommon_KB_ZoomOut(CallbackContext context);
    void OnCommon_KB_Quickbar_1(CallbackContext context);
    void OnCommon_KB_Quickbar_2(CallbackContext context);
    void OnCommon_KB_Quickbar_3(CallbackContext context);
    void OnCommon_KB_Quickbar_4(CallbackContext context);
    void OnCommon_KB_Quickbar_5(CallbackContext context);
    void OnCommon_KB_Quickbar_6(CallbackContext context);
    void OnCommon_KB_Quickbar_7(CallbackContext context);
    void OnCommon_KB_Quickbar_8(CallbackContext context);
    void OnCommon_KB_Quickbar_9(CallbackContext context);
    void OnCommon_KB_Quickbar_10(CallbackContext context);
};

// Namespace: <global>
class ICommon_GPActions
{
public:

    // Methods
    void OnCommon_GP_Movement(CallbackContext context);
    void OnCommon_GP_Facing(CallbackContext context);
    void OnCommon_Primary(CallbackContext context);
    void OnCommon_Rotate(CallbackContext context);
    void OnCommon_GP_AutoCursor(CallbackContext context);
};

// Namespace: <global>
class IGame_KBActions
{
public:

    // Methods
    void OnGame_KB_Movement(CallbackContext context);
    void OnGame_Torch(CallbackContext context);
};

// Namespace: <global>
class IGame_GPActions
{
public:

    // Methods
    void OnGame_GP_Interact(CallbackContext context);
    void OnGame_GP_Inventory(CallbackContext context);
    void OnGame_GP_Map(CallbackContext context);
    void OnGame_Torch(CallbackContext context);
    void OnGame_GP_CycleLeft(CallbackContext context);
    void OnGame_GP_CycleRight(CallbackContext context);
    void OnGame_GP_ZoomIn(CallbackContext context);
    void OnGame_GP_ZoomOut(CallbackContext context);
};

// Namespace: <global>
class IHUD_KBActions
{
public:

    // Methods
    void OnHUD_KB_Modifier_1(CallbackContext context);
    void OnHUD_KB_Modifier_2(CallbackContext context);
    void OnHUD_KB_Movement(CallbackContext context);
    void OnHUD_Navigation(CallbackContext context);
    void OnHUD_Select(CallbackContext context);
    void OnHUD_KB_Use(CallbackContext context);
    void OnHUD_Take1(CallbackContext context);
    void OnHUD_Take10(CallbackContext context);
    void OnHUD_Drop(CallbackContext context);
    void OnHUD_Store(CallbackContext context);
    void OnHUD_Trash(CallbackContext context);
    void OnHUD_TabLeft(CallbackContext context);
    void OnHUD_TabRight(CallbackContext context);
    void OnHUD_PageLeft(CallbackContext context);
    void OnHUD_PageRight(CallbackContext context);
    void OnHUD_Up(CallbackContext context);
    void OnHUD_Down(CallbackContext context);
    void OnHUD_Left(CallbackContext context);
    void OnHUD_Right(CallbackContext context);
};

// Namespace: <global>
class IHUD_GPActions
{
public:

    // Methods
    void OnHUD_GP_Modifier_1(CallbackContext context);
    void OnHUD_GP_Modifier_2(CallbackContext context);
    void OnHUD_Navigation(CallbackContext context);
    void OnHUD_Select(CallbackContext context);
    void OnHUD_GP_Back(CallbackContext context);
    void OnHUD_GP_Interact(CallbackContext context);
    void OnHUD_Take1(CallbackContext context);
    void OnHUD_Take10(CallbackContext context);
    void OnHUD_Drop(CallbackContext context);
    void OnHUD_Store(CallbackContext context);
    void OnHUD_Trash(CallbackContext context);
    void OnHUD_GP_CycleLeft(CallbackContext context);
    void OnHUD_GP_CycleRight(CallbackContext context);
    void OnHUD_TabLeft(CallbackContext context);
    void OnHUD_TabRight(CallbackContext context);
    void OnHUD_PageLeft(CallbackContext context);
    void OnHUD_PageRight(CallbackContext context);
    void OnHUD_GP_ZoomIn(CallbackContext context);
    void OnHUD_GP_ZoomOut(CallbackContext context);
    void OnHUD_Up(CallbackContext context);
    void OnHUD_Down(CallbackContext context);
    void OnHUD_Left(CallbackContext context);
    void OnHUD_Right(CallbackContext context);
};

// Namespace: <global>
class PlayerControls
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    InputActionAsset* <asset>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InputActionMap* m_Core; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<PlayerControls.ICoreActions> m_CoreActionsCallbackInterfaces; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    InputAction* m_Core_Core_Close; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    InputAction* m_Core_Core_ScrollUp; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    InputAction* m_Core_Core_ScrollDown; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    InputActionMap* m_FE; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<PlayerControls.IFEActions> m_FEActionsCallbackInterfaces; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    InputAction* m_FE_FE_Up; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    InputAction* m_FE_FE_Down; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    InputAction* m_FE_FE_Left; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    InputAction* m_FE_FE_Right; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    InputAction* m_FE_FE_Select; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    InputAction* m_FE_FE_Back; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    InputAction* m_FE_FE_TabLeft; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    InputAction* m_FE_FE_TabRight; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    InputActionMap* m_Common_KB; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    System.Collections.Generic.List<PlayerControls.ICommon_KBActions> m_Common_KBActionsCallbackInterfaces; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    InputAction* m_Common_KB_Common_Primary; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    InputAction* m_Common_KB_Common_KB_Interact; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    InputAction* m_Common_KB_Common_KB_Inventory; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    InputAction* m_Common_KB_Common_KB_Map; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    InputAction* m_Common_KB_Common_KB_CycleLeft; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    InputAction* m_Common_KB_Common_KB_CycleRight; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    InputAction* m_Common_KB_Common_Rotate; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    InputAction* m_Common_KB_Common_KB_ZoomIn; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    InputAction* m_Common_KB_Common_KB_ZoomOut; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    InputAction* m_Common_KB_Common_KB_Quickbar_1; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    InputAction* m_Common_KB_Common_KB_Quickbar_2; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    InputAction* m_Common_KB_Common_KB_Quickbar_3; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    InputAction* m_Common_KB_Common_KB_Quickbar_4; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    InputAction* m_Common_KB_Common_KB_Quickbar_5; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    InputAction* m_Common_KB_Common_KB_Quickbar_6; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    InputAction* m_Common_KB_Common_KB_Quickbar_7; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    InputAction* m_Common_KB_Common_KB_Quickbar_8; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    InputAction* m_Common_KB_Common_KB_Quickbar_9; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    InputAction* m_Common_KB_Common_KB_Quickbar_10; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    InputActionMap* m_Common_GP; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    System.Collections.Generic.List<PlayerControls.ICommon_GPActions> m_Common_GPActionsCallbackInterfaces; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    InputAction* m_Common_GP_Common_GP_Movement; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    InputAction* m_Common_GP_Common_GP_Facing; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    InputAction* m_Common_GP_Common_Primary; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    InputAction* m_Common_GP_Common_Rotate; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    InputAction* m_Common_GP_Common_GP_AutoCursor; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    InputActionMap* m_Game_KB; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    System.Collections.Generic.List<PlayerControls.IGame_KBActions> m_Game_KBActionsCallbackInterfaces; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    InputAction* m_Game_KB_Game_KB_Movement; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    InputAction* m_Game_KB_Game_Torch; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    InputActionMap* m_Game_GP; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    System.Collections.Generic.List<PlayerControls.IGame_GPActions> m_Game_GPActionsCallbackInterfaces; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    InputAction* m_Game_GP_Game_GP_Interact; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    InputAction* m_Game_GP_Game_GP_Inventory; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    InputAction* m_Game_GP_Game_GP_Map; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    InputAction* m_Game_GP_Game_Torch; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    InputAction* m_Game_GP_Game_GP_CycleLeft; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    InputAction* m_Game_GP_Game_GP_CycleRight; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    InputAction* m_Game_GP_Game_GP_ZoomIn; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    InputAction* m_Game_GP_Game_GP_ZoomOut; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    InputActionMap* m_HUD_KB; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    System.Collections.Generic.List<PlayerControls.IHUD_KBActions> m_HUD_KBActionsCallbackInterfaces; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    InputAction* m_HUD_KB_HUD_KB_Modifier_1; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    InputAction* m_HUD_KB_HUD_KB_Modifier_2; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    InputAction* m_HUD_KB_HUD_KB_Movement; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    InputAction* m_HUD_KB_HUD_Navigation; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    InputAction* m_HUD_KB_HUD_Select; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    InputAction* m_HUD_KB_HUD_KB_Use; // 0x0218
    uint8_t pad_0219[0x7]; // 0x0219
    InputAction* m_HUD_KB_HUD_Take1; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    InputAction* m_HUD_KB_HUD_Take10; // 0x0228
    uint8_t pad_0229[0x7]; // 0x0229
    InputAction* m_HUD_KB_HUD_Drop; // 0x0230
    uint8_t pad_0231[0x7]; // 0x0231
    InputAction* m_HUD_KB_HUD_Store; // 0x0238
    uint8_t pad_0239[0x7]; // 0x0239
    InputAction* m_HUD_KB_HUD_Trash; // 0x0240
    uint8_t pad_0241[0x7]; // 0x0241
    InputAction* m_HUD_KB_HUD_TabLeft; // 0x0248
    uint8_t pad_0249[0x7]; // 0x0249
    InputAction* m_HUD_KB_HUD_TabRight; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    InputAction* m_HUD_KB_HUD_PageLeft; // 0x0258
    uint8_t pad_0259[0x7]; // 0x0259
    InputAction* m_HUD_KB_HUD_PageRight; // 0x0260
    uint8_t pad_0261[0x7]; // 0x0261
    InputAction* m_HUD_KB_HUD_Up; // 0x0268
    uint8_t pad_0269[0x7]; // 0x0269
    InputAction* m_HUD_KB_HUD_Down; // 0x0270
    uint8_t pad_0271[0x7]; // 0x0271
    InputAction* m_HUD_KB_HUD_Left; // 0x0278
    uint8_t pad_0279[0x7]; // 0x0279
    InputAction* m_HUD_KB_HUD_Right; // 0x0280
    uint8_t pad_0281[0x7]; // 0x0281
    InputActionMap* m_HUD_GP; // 0x0288
    uint8_t pad_0289[0x7]; // 0x0289
    System.Collections.Generic.List<PlayerControls.IHUD_GPActions> m_HUD_GPActionsCallbackInterfaces; // 0x0290
    uint8_t pad_0291[0x7]; // 0x0291
    InputAction* m_HUD_GP_HUD_GP_Modifier_1; // 0x0298
    uint8_t pad_0299[0x7]; // 0x0299
    InputAction* m_HUD_GP_HUD_GP_Modifier_2; // 0x02A0
    uint8_t pad_02A1[0x7]; // 0x02A1
    InputAction* m_HUD_GP_HUD_Navigation; // 0x02A8
    uint8_t pad_02A9[0x7]; // 0x02A9
    InputAction* m_HUD_GP_HUD_Select; // 0x02B0
    uint8_t pad_02B1[0x7]; // 0x02B1
    InputAction* m_HUD_GP_HUD_GP_Back; // 0x02B8
    uint8_t pad_02B9[0x7]; // 0x02B9
    InputAction* m_HUD_GP_HUD_GP_Interact; // 0x02C0
    uint8_t pad_02C1[0x7]; // 0x02C1
    InputAction* m_HUD_GP_HUD_Take1; // 0x02C8
    uint8_t pad_02C9[0x7]; // 0x02C9
    InputAction* m_HUD_GP_HUD_Take10; // 0x02D0
    uint8_t pad_02D1[0x7]; // 0x02D1
    InputAction* m_HUD_GP_HUD_Drop; // 0x02D8
    uint8_t pad_02D9[0x7]; // 0x02D9
    InputAction* m_HUD_GP_HUD_Store; // 0x02E0
    uint8_t pad_02E1[0x7]; // 0x02E1
    InputAction* m_HUD_GP_HUD_Trash; // 0x02E8
    uint8_t pad_02E9[0x7]; // 0x02E9
    InputAction* m_HUD_GP_HUD_GP_CycleLeft; // 0x02F0
    uint8_t pad_02F1[0x7]; // 0x02F1
    InputAction* m_HUD_GP_HUD_GP_CycleRight; // 0x02F8
    uint8_t pad_02F9[0x7]; // 0x02F9
    InputAction* m_HUD_GP_HUD_TabLeft; // 0x0300
    uint8_t pad_0301[0x7]; // 0x0301
    InputAction* m_HUD_GP_HUD_TabRight; // 0x0308
    uint8_t pad_0309[0x7]; // 0x0309
    InputAction* m_HUD_GP_HUD_PageLeft; // 0x0310
    uint8_t pad_0311[0x7]; // 0x0311
    InputAction* m_HUD_GP_HUD_PageRight; // 0x0318
    uint8_t pad_0319[0x7]; // 0x0319
    InputAction* m_HUD_GP_HUD_GP_ZoomIn; // 0x0320
    uint8_t pad_0321[0x7]; // 0x0321
    InputAction* m_HUD_GP_HUD_GP_ZoomOut; // 0x0328
    uint8_t pad_0329[0x7]; // 0x0329
    InputAction* m_HUD_GP_HUD_Up; // 0x0330
    uint8_t pad_0331[0x7]; // 0x0331
    InputAction* m_HUD_GP_HUD_Down; // 0x0338
    uint8_t pad_0339[0x7]; // 0x0339
    InputAction* m_HUD_GP_HUD_Left; // 0x0340
    uint8_t pad_0341[0x7]; // 0x0341
    InputAction* m_HUD_GP_HUD_Right; // 0x0348
    uint8_t pad_0349[0x7]; // 0x0349
    int32_t m_KeyboardMouseSchemeIndex; // 0x0350
    uint8_t pad_0351[0x3]; // 0x0351
    int32_t m_GamepadSchemeIndex; // 0x0354

    // Methods
    InputActionAsset* get_asset();  // RVA: 0x396A80
    void .ctor();  // RVA: 0x394E10
    void Finalize();  // RVA: 0x394D30
    void Dispose();  // RVA: 0x394CC0
    System.Nullable<UnityEngine.InputSystem.InputBinding> get_bindingMask();  // RVA: 0x396A90
    void set_bindingMask(System.Nullable<UnityEngine.InputSystem.InputBinding> value);  // RVA: 0x396B80
    System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> get_devices();  // RVA: 0x396B40
    void set_devices(System.Nullable<UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputDevice>> value);  // RVA: 0x396BE0
    UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControlScheme> get_controlSchemes();  // RVA: 0x396B00
    bool Contains(InputAction* action);  // RVA: 0x394C80
    System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction> GetEnumerator();  // RVA: 0x394DF0
    IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x394DF0
    void Enable();  // RVA: 0x394D10
    void Disable();  // RVA: 0x394CA0
    System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding> get_bindings();  // RVA: 0x396AE0
    InputAction* FindAction(Il2CppString* actionNameOrId, bool throwIfNotFound);  // RVA: 0x394D70
    int32_t FindBinding(InputBinding bindingMask, InputAction* action);  // RVA: 0x394D90
    CoreActions get_Core();  // RVA: 0x3968C0
    FEActions get_FE();  // RVA: 0x3968C0
    Common_KBActions get_Common_KB();  // RVA: 0x3968C0
    Common_GPActions get_Common_GP();  // RVA: 0x3968C0
    Game_KBActions get_Game_KB();  // RVA: 0x3968C0
    Game_GPActions get_Game_GP();  // RVA: 0x3968C0
    HUD_KBActions get_HUD_KB();  // RVA: 0x3968C0
    HUD_GPActions get_HUD_GP();  // RVA: 0x3968C0
    InputControlScheme get_KeyboardMouseScheme();  // RVA: 0x3969B0
    InputControlScheme get_GamepadScheme();  // RVA: 0x3968E0
};

// Namespace: <global>
class PlayerInputController : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    PlayerInputManager* mPlayerInputManager; // 0x0020

    // Methods
    void Awake();  // RVA: 0x397E50
    void PlayerJoined(PlayerInput* playerInput);  // RVA: 0x397EE0
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class PlaytestCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* titleText; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* welcomeText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* expectationsHeaderText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* expectationsDetailsText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TextMeshProUGUI* missingHeaderText; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    TextMeshProUGUI* missingDetailsText; // 0x00B8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x397F40
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x398150
    void OnClose();  // RVA: 0x398060
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class QuestCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* titleText; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* fromText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* questText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    TextMeshProUGUI* quest2Text; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    StringBuilder* mDialogTextBuilder; // 0x00B8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x36BF30
    void Initialise(bool refresh);  // RVA: 0x398200
    int32_t PopulateQuestList();  // RVA: 0x398480
    void SelectQuestButton(DialogButton* dialogButton);  // RVA: 0x398810
    void SetTextStringID(TextMeshProUGUI* text, Il2CppString* stringId, NPC* npc);  // RVA: 0x398A90
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x36CC00
    bool ConsumesInput(InputButtonIndex buttonIndex);  // RVA: 0x398190
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x398470
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x360690
    void .ctor();  // RVA: 0x398C30
};

// Namespace: <global>
class QuickbarSlot : public ItemSlot
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    TextMeshProUGUI* slotNumber; // 0x00E0

    // Methods
    void Initialise(IItemSlotHandler* slotHandler, SlotType type, bool emptyInteractable, int32_t col, int32_t row);  // RVA: 0x398D10
    void EnableSlotNumber(bool enable);  // RVA: 0x398CB0
    void .ctor();  // RVA: 0x398E00
};

// Namespace: <global>
class Recipe : public ItemSlotBase
{
public:
    uint8_t pad_0000[0x50]; // 0x0000
    ItemSlot[][] ingredientSlots; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    ItemSlot* recipeSlot; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* itemSlotPrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* recipeBackground; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    int32_t maxRecipeSlots; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Image* mRecipeBackgroundScript; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    RecipeDescriptor* mRecipe; // 0x0080

    // Methods
    void Initialise(IItemSlotHandler* slotHandler);  // RVA: 0x399080
    void Refresh(RecipeDescriptor* recipeDescriptor, ContainerItem* inventory, int32_t itemIndex);  // RVA: 0x399520
    void Select(bool select);  // RVA: 0x399860
    void OnChildSelect(bool select, ItemSlotBase* childSlot);  // RVA: 0x3994C0
    void .ctor();  // RVA: 0x399890
};

// Namespace: <global>
class RecipeSlot : public ItemSlot
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    bool mCanCraft; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    RecipeDescriptor* mRecipe; // 0x00E8

    // Methods
    void Refresh(RecipeDescriptor* recipeDescriptor, ContainerItem* inventory, int32_t itemIndex);  // RVA: 0x398E10
    void UpdateBackground();  // RVA: 0x399000
    void .ctor();  // RVA: 0x399070
};

// Namespace: <global>
class Requirement : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* textObject; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* text; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* imageObject; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RawImage* image; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 mSize; // 0x0040

    // Methods
    Vector2 GetSize();  // RVA: 0x3998A0
    void SetPosition(Vector3 position);  // RVA: 0x399E00
    void Initialise(Il2CppString* _textString, SpriteDescriptor* _image);  // RVA: 0x399C60
    void Initialise(StringBuilder* _stringBuilder, SpriteDescriptor* _image);  // RVA: 0x399B40
    void InitialiseImage(SpriteDescriptor* _image);  // RVA: 0x3998C0
    void .ctor();  // RVA: 0x399E50
};

// Namespace: <global>
struct SleepAvailability
{
public:
    // Static fields
    // static SleepAvailability Available;
    // static SleepAvailability Time;
    // static SleepAvailability Enemies;
    // static SleepAvailability InvalidRoom;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class RoomCanvas : public TotemCanvas
{
public:
    uint8_t pad_0000[0xE0]; // 0x0000
    DialogButton* sleepButton; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    GameTile* gameTile; // 0x00E8

    // Methods
    void SetActive(bool active);  // RVA: 0x39AD80
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x39AF10
    SleepAvailability GetSleepAvailability(Bed* bed);  // RVA: 0x399FB0
    void UpdateSleepButton();  // RVA: 0x39B060
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x39A100
    void OnClose();  // RVA: 0x39A0D0
    void Refresh(Bed* bed, NPC* linkedNPC, RoomBase* room);  // RVA: 0x39ACD0
    void RefreshBed(Bed* bed, NPC* linkedNPC, Room* room);  // RVA: 0x39A5D0
    void SetSpawnPoint();  // RVA: 0x39ADD0
    void Sleep();  // RVA: 0x39AEE0
    void AssignNPC();  // RVA: 0x399EB0
    void .ctor();  // RVA: 0x39B460
};

// Namespace: <global>
class SaveOnPlay : public MonoBehaviour
{
public:

    // Methods
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class ScrollablePanel : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* panelRoot; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* contentsRoot; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ScrollBar* scrollBar; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float scrollSpeed; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float autoScrollSpeed; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    float autoScrollDelay; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mContentsHeight; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float mPanelHeight; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    float mAutoScrollTimer; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    UIManager* mUIManager; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    PlayerController* mPlayerController; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    PlayerInputState* mPlayerInputState; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    int32_t mScrollButton; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool mProcessInput; // 0x006C

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x39C000
    void Initialise();  // RVA: 0x39BE80
    void UpdateScrollBar(float contentPosition);  // RVA: 0x39C770
    bool UpdateCanvas(float dt);  // RVA: 0x39C540
    void ScrollPanel(float scrollAmount);  // RVA: 0x39C420
    void ScrollList(int32_t pageDir);  // RVA: 0x39C1C0
    void ScrollPage(float pageDir);  // RVA: 0x39C2F0
    void OnScrollBarUpButtonClicked(ScrollBar* scrollBar);  // RVA: 0x39C1B0
    void OnScrollBarDownButtonClicked(ScrollBar* scrollBar);  // RVA: 0x39C060
    void OnScrollBarSliderDragged(ScrollBar* scrollBar, float position);  // RVA: 0x39C070
    void .ctor();  // RVA: 0x39C810
};

// Namespace: <global>
class IScrollBarHandler
{
public:

    // Methods
    void OnScrollBarUpButtonClicked(ScrollBar* scrollBar);  // RVA: 0x175530
    void OnScrollBarDownButtonClicked(ScrollBar* scrollBar);  // RVA: 0x175530
    void OnScrollBarSliderDragged(ScrollBar* scrollBar, float position);
};

// Namespace: <global>
class ScrollBar : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DragDialogButton* sliderBackgroundButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DialogButton* upButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DialogButton* downButton; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DragDialogButton* sliderButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    bool autoHide; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mBackgroundHeight; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    IScrollBarHandler* mHandler; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    RectTransform* mScrollBarBackgroundRect; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RectTransform* mScrollBarSliderRect; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    UIManager* mUIManager; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    bool mScrollActive; // 0x0068

    // Methods
    void Initialise(UIManager* uiManager, IScrollBarHandler* handler);  // RVA: 0x39B5C0
    void UpdateLayout(float contentsHeight, float panelHeight, float contentPosition);  // RVA: 0x39BA10
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x2C1B90
    void OnDialogButtonPointerExit(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x39B730
    bool HasInputType(ControllerType inputType);  // RVA: 0x39B520
    float PointerDataToRelativePos(PointerEventData* eventData);  // RVA: 0x39B950
    void UpdateScrollPosFromPointerData(PointerEventData* eventData);  // RVA: 0x39BC60
    void OnDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x39B810
    void OnEndDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x39B900
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class ISliderHandler
{
public:

    // Methods
    void OnSliderLeftClicked(Slider* slider);  // RVA: 0x175530
    void OnSliderRightClicked(Slider* slider);  // RVA: 0x175530
    void OnSliderClicked(DialogButton* dialogButton);  // RVA: 0x175530
    void OnSliderDragged(Slider* slider, float position);
};

// Namespace: <global>
class Slider : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    DragDialogButton* sliderBackgroundButton; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    DialogButton* leftButton; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DialogButton* rightButton; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DragDialogButton* sliderButton; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float mSliderBackgroundWidth; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float mSliderStartX; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float mSliderEndX; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    ISliderHandler* mHandler; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    RectTransform* mSliderBackgroundRect; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    RectTransform* mSliderButtonRect; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    float mIncrement; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    bool maintainSliderSelection; // 0x006C
    bool mDragging; // 0x006D
    uint8_t pad_006E[0x2]; // 0x006E
    float mPosition; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    UIManager* mUIManager; // 0x0078

    // Methods
    void Initialise(UIManager* uiManager, ISliderHandler* handler);  // RVA: 0x39C8C0
    void SetPosition(float position);  // RVA: 0x39D070
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x2C1B90
    void OnDialogButtonPointerExit(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x39CA80
    bool HasInputType(ControllerType inputType);  // RVA: 0x39C820
    float PointerDataToRelativePos(PointerEventData* eventData);  // RVA: 0x39CFC0
    void UpdateScrollPosFromPointerData(PointerEventData* eventData);  // RVA: 0x39D0F0
    void OnSliderLeftClicked();  // RVA: 0x39CEA0
    void OnSliderRightClicked();  // RVA: 0x39CF30
    void OnSliderClicked(DialogButton* dialogButton);  // RVA: 0x39CE40
    void OnDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x39CC80
    void OnEndDrag(DragDialogButton* dialogButton, PointerEventData* eventData);  // RVA: 0x39CDF0
    void .ctor();  // RVA: 0x39D2E0
};

// Namespace: <global>
class SplitScreenBounds : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    Canvas* canvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AtlasImage* vertImage; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AtlasImage* leftImage; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AtlasImage* rightImage; // 0x0038

    // Methods
    void Update();  // RVA: 0x39D520
    void UpdateBounds();  // RVA: 0x39D300
    void .ctor();  // RVA: 0x2D82C0
};

// Namespace: <global>
class StateDependentUICanvasGroup : public StateDependentUIControl
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    CanvasGroup* canvasGroup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool defaultInteractable; // 0x0030
    bool defaultBlocksRaycast; // 0x0031
    uint8_t pad_0032[0x2]; // 0x0032
    float defaultAlpha; // 0x0034

    // Methods
    bool SetState(int32_t newState, bool force);  // RVA: 0x39D530
    void .ctor();  // RVA: 0x39D640
};

// Namespace: <global>
class StateDependentUIContainer : public StateDependentUIControl
{
public:
    uint8_t pad_0000[0x28]; // 0x0000
    StateDependentUIControl[][] dependentChildren; // 0x0028

    // Methods
    bool SetState(int32_t newState, bool force);  // RVA: 0x39D650
    void .ctor();  // RVA: 0x39D640
};

// Namespace: <global>
class StateDependentUIControl : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t validStateId; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t currentStateId; // 0x0024

    // Methods
    bool SetState(int32_t newState, bool force);  // RVA: 0x39D720
    void .ctor();  // RVA: 0x39D640
};

// Namespace: <global>
class StatusEffectIcon : public MonoBehaviour
{
public:
    // Static fields
    // static System.Collections.Generic.Dictionary<ItemStatParameterTag,System.ValueTuple<System.String,System.String>> sSprit
    uint8_t pad_0000[0x20]; // 0x0000
    AtlasImage* iconImage; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RadialProgressBar* iconProgress; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemStatParameterTag statTag; // 0x0030

    // Methods
    void Initialise(ItemStatParameterTag _statTag, float progress);  // RVA: 0x39D740
    void SetProgress(float progress);  // RVA: 0x39D830
    void .ctor();  // RVA: 0x2D82C0
    static void .cctor();  // RVA: 0x39D850
};

// Namespace: <global>
class StatusEffectsPanel : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* statusIconPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObjectPool<StatusEffectIcon> mStatusEffectIconPool; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<StatusEffectIcon> mActiveStatusEffectIcons; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.Dictionary<ItemStatParameterTag,StatusEffectIcon> mActiveStatusEffectIconMap; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Player* mPlayer; // 0x0040

    // Methods
    void Setup(Player* player);  // RVA: 0x39DD60
    void Update();  // RVA: 0x39DE00
    StatusEffectIcon* AddStatusEffect(ItemStatParameterTag statTag, float progress);  // RVA: 0x39DB50
    void .ctor();  // RVA: 0x39E110
};

// Namespace: <global>
class TabbedCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* title; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TabButton* tabButtonMap; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TabButton* tabButtonQuest; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TabButton* tabButtonJournal; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameInteractableCanvas* currentTabPanel; // 0x00B0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x39E730
    void Initialise(bool refresh);  // RVA: 0x39EA80
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x39F130
    void SelectNextTab(int32_t dir);  // RVA: 0x39EF40
    void SelectTab(int32_t tabIndex);  // RVA: 0x39EFE0
    bool SelectButton(DialogButton* button, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x39ED10
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x2C1B90
    void OnCloseBackgroundClicked();  // RVA: 0x39EC50
    void OnClose();  // RVA: 0x39ECD0
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class TabButton : public AlertButton
{
public:
    uint8_t pad_0000[0xD0]; // 0x0000
    GameInteractableCanvas* tabPanelCanvas; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Il2CppString* highlightSelectedSpriteName; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    Il2CppString* activeSpriteName; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    bool mActive; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    SpriteDescriptor* mHighlightSelectedSprite; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    SpriteDescriptor* mActiveSprite; // 0x00F8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x39E220
    void RefreshVisuals();  // RVA: 0x39E430
    void OnPointerDown(PointerEventData* eventData);  // RVA: 0x39E3A0
    void .ctor();  // RVA: 0x39E6A0
};

// Namespace: <global>
class ITextInputButtonHandler
{
public:

    // Methods
    void OnTextInputButtonTextEntered(TextInputButton* textInputButton, bool validateChanged);
};

// Namespace: <global>
struct SelectionState
{
public:
    // Static fields
    // static SelectionState Normal;
    // static SelectionState Highlighted;
    // static SelectionState Pressed;
    // static SelectionState Selected;
    // static SelectionState Disabled;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class TextInputButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    Il2CppString* virtualKeyboardTitle; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    TMP_InputField* inputField; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    TextMeshProUGUI* placeholder; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    ITextInputButtonHandler* mTextInputButtonHandler; // 0x00D8

    // Methods
    void Initialise(IDialogButtonHandler* buttonHandler);  // RVA: 0x39F640
    void SetTextInputButtonHander(ITextInputButtonHandler* _handler);  // RVA: 0x3695E0
    void Select(bool selected, bool triggerAudio);  // RVA: 0x39FC80
    void SetText(Il2CppString* _text);  // RVA: 0x39FD60
    void SetPlaceholderText(Il2CppString* placeholderText);  // RVA: 0x39FD30
    void SetPlaceholderText(StringBuilder* placeholderText);  // RVA: 0x39FD00
    Il2CppString* GetText(bool usePlaceholderFallback);  // RVA: 0x39F590
    void ActivateInputField();  // RVA: 0x39F4B0
    void DeactivateInputField(bool clearState);  // RVA: 0x39F4E0
    int32_t OnInputFieldDoStateTransitionOverride(TMP_InputField* inputField, int32_t state, bool instant);  // RVA: 0x39F960
    void OnInputFieldEndEdit();  // RVA: 0x39F980
    void OnInputFieldSelect();  // RVA: 0x39FAE0
    void OnInputFieldDeselect();  // RVA: 0x39F8B0
    void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x39FB60
    void OnButtonClick(UIManager* uiManager);  // RVA: 0x39F680
    void OnVirtualKeyboardTextEntered(Il2CppString* _text);  // RVA: 0x39FBB0
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class TitleScreenCanvas : public GameCanvas
{
public:

    // Methods
    void .ctor();  // RVA: 0x39FD90
};

// Namespace: <global>
class TotemCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    TextMeshProUGUI* title; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* description; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TextMeshProUGUI* requirementsText; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    TextMeshProUGUI* validText; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    HUDCanvas* mHUDCanvas; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* requirementPrefab; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    Requirement[][] requirements; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    int32_t mCurrentRequirermentIndex; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    Vector3 mCurrentPos; // 0x00CC
    uint8_t pad_00CD[0xB]; // 0x00CD
    StringBuilder* mStringBuilder; // 0x00D8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x3A0220
    void UpdateScale();  // RVA: 0x2C1B90
    void UpdateAnchors();  // RVA: 0x2C1B90
    void OnClose();  // RVA: 0x3A04E0
    void Refresh(Item* item, RoomBase* room);  // RVA: 0x3A08E0
    void RefreshTrough(Item* trough, Pen* pen);  // RVA: 0x3A0510
    void ClearRequirements();  // RVA: 0x3A0120
    void AddRequirement(Il2CppString* _text, bool complete);  // RVA: 0x39FDA0
    void AddRequirement(StringBuilder* _stringBuilder, bool complete);  // RVA: 0x39FF10
    void .ctor();  // RVA: 0x39B460
};

// Namespace: <global>
class UIHint : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* prefixObject; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TextMeshProUGUI* prefixText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObject* modifierObject; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RawImage* modifierImage; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* buttonObject; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RawImage* buttonImage; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* textObject; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    TextMeshProUGUI* text; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    Vector2 mSize; // 0x0060

    // Methods
    Vector2 GetSize();  // RVA: 0x3A0B00
    void SetPosition(Vector3 position);  // RVA: 0x399E00
    void Initialise(Il2CppString* prefix, SpriteDescriptor* _modifierImage, SpriteDescriptor* _buttonImage, Il2CppString* _text);  // RVA: 0x3A0B20
    void Initialise(StringBuilder* prefix, SpriteDescriptor* _modifierImage, SpriteDescriptor* _buttonImage, Il2CppString* _text);  // RVA: 0x3A0C00
    void .ctor();  // RVA: 0x3A1290
};

// Namespace: <global>
class UIHints : public MonoBehaviour
{
public:
    // Static fields
    // static int32_t cMaxHints;

    uint8_t pad_0000[0x20]; // 0x0000
    GameObject* uiHintPrefab; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    UIHint[][] uiHints; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t mCurrentHintIndex; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    Vector3 mCurrentPos; // 0x0034
    uint8_t pad_0035[0xB]; // 0x0035
    Player* mPlayer; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<DisplayButtonIndex> modifierActions; // 0x0048

    // Methods
    void Setup();  // RVA: 0x3A1E40
    void ClearHints();  // RVA: 0x3A1D30
    void NewLine();  // RVA: 0x3A1E10
    void AddHint(Il2CppString* prefix, SpriteDescriptor* _modifierImage, SpriteDescriptor* _buttonImage, Il2CppString* stringID);  // RVA: 0x3A16A0
    void AddHint(StringBuilder* prefix, SpriteDescriptor* _modifierImage, SpriteDescriptor* _buttonImage, Il2CppString* stringID);  // RVA: 0x3A14D0
    void AddHint(Il2CppString* displayText, SpriteDescriptor* _buttonImage, Il2CppString* stringID);  // RVA: 0x3A12F0
    void AddHint(PlayerInputState* playerInputState, DisplayButtonIndex displayButtonIndex, Il2CppString* stringID);  // RVA: 0x3A1870
    void AddHint(PlayerInputState* playerInputState, DisplayButtonIndex currentModifierButtonIndex, DisplayButtonIndex displayButtonIndex, Il2CppString* stringID);  // RVA: 0x3A18E0
    void AddModifierHints(PlayerInputState* playerInputState);  // RVA: 0x3A1A20
    void .ctor();  // RVA: 0x3A20C0
};

// Namespace: <global>
class IUIManagerOnlineHandlers
{
public:
};

// Namespace: <global>
struct UIState
{
public:
    // Static fields
    // static UIState MAINMENU;
    // static UIState PAUSE;
    // static UIState OPTIONS;
    // static UIState OPTIONS_LANGUAGE;
    // static UIState OPTIONS_GRAPHICS;
    // static UIState OPTIONS_AUDIO;
    // static UIState OPTIONS_INTERFACE;
    // static UIState OPTIONS_CONTROLS;
    // static UIState CREDITS;
    // static UIState EXIT;
    // static UIState CHARACTER_SELECT;
    // static UIState ONLINE;
    // static UIState ONLINE_PENDING;
    // static UIState ONLINE_ADD_LOCAL_PLAYER;
    // static UIState CHARACTER_CREATE;
    // static UIState WORLD_SELECT;
    // static UIState WORLD_CREATE;
    // static UIState CREATING;
    // static UIState LOADING;
    // static UIState RUNNING;
    // static UIState RUNNING_HIDE;
    // static UIState KICK_PLAYER;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class UIManager : public MonoBehaviour
{
public:
    // Static fields
    // static bool mPlaytestCanvasDismissed;
    // static Il2CppString* mWorldFilepath;
    // static bool mCanSaveWorld;
    // static UIManager* sHostInstance;

    uint8_t pad_0000[0x20]; // 0x0000
    TitleScreenCanvas* mTitleScreenCanvas; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    FECanvas* mFECanvas; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    HUDCanvas* mHUDCanvas; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* pausePrefab; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* optionsPrefab; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    GameObject* optionsLanguagePrefab; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    GameObject* optionsGraphicsPrefab; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    GameObject* optionsAudioPrefab; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    GameObject* optionsInterfacePrefab; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    GameObject* optionsControlsPrefab; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    GameObject* creditsPrefab; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    GameObject* exitPrefab; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* characterSelectPrefab; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    GameObject* onlinePrefab; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    GameObject* onlinePendingPrefab; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* onlineAddLocalPlayerPrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    GameObject* characterCreatePrefab; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* worldSelectPrefab; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* worldCreatePrefab; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    GameObject* kickPlayerPrefab; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    GameObject* characterRendererPrefab; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    GameObject* splitScreenBoundsPrefab; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    GameObject* messageBoxPrefab; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    GameObject* demoBossDefeatSplashPrefab; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    GameObject* virtualKeyboardCanvasPrefab; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    Camera* mCharacterPreviewCamera; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    RenderTexture* characterRenderTexturePrefab; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    GameObject* dynamicCanvasRoot; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    GameObject* playtestPrefab; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    PlaytestCanvas* mPlaytestCanvas; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    PauseCanvas* mPauseCanvas; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    OptionsCanvas* mOptionsCanvas; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    OptionsLanguageCanvas* mOptionsLanguageCanvas; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    OptionsGraphicsCanvas* mOptionsGraphicsCanvas; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    OptionsAudioCanvas* mOptionsAudioCanvas; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    OptionsInterfaceCanvas* mOptionsInterfaceCanvas; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    OptionsControlsCanvas* mOptionsControlsCanvas; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    CreditsCanvas* mCreditsCanvas; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    ExitCanvas* mExitCanvas; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    CharacterSelectCanvas* mCharacterSelectCanvas; // 0x0158
    uint8_t pad_0159[0x7]; // 0x0159
    OnlineCanvas* mOnlineCanvas; // 0x0160
    uint8_t pad_0161[0x7]; // 0x0161
    OnlinePendingCanvas* mOnlinePendingCanvas; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    OnlineAddLocalPlayerCanvas* mOnlineAddLocalPlayerCanvas; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    CharacterCreateCanvas* mCharacterCreateCanvas; // 0x0178
    uint8_t pad_0179[0x7]; // 0x0179
    WorldSelectCanvas* mWorldSelectCanvas; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    WorldCreateCanvas* mWorldCreateCanvas; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    KickPlayerCanvas* mKickPlayerCanvas; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    MessageBoxCanvas* mMessageBoxCanvas; // 0x0198
    uint8_t pad_0199[0x7]; // 0x0199
    DemoBossDefeatCanvas* mDemoBossDefeatCanvas; // 0x01A0
    uint8_t pad_01A1[0x7]; // 0x01A1
    VirtualKeyboardCanvas* mVirtualKeyboardCanvas; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    SpritesRenderer* mCharacterRenderer; // 0x01B0
    uint8_t pad_01B1[0x7]; // 0x01B1
    System.Collections.Generic.List<StateDependentUIControl> mControllerDependentControls; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    Il2CppString* mCharacterFilepath; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    bool mCanSaveCharacter; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    WorldTextManager* mWorldTextManager; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    FloatingTextCanvas* floatingTextCanvas; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    System.Collections.Generic.List<StateDependentUIControl> mControllerDependentControlsInternal; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    bool mEnableHud; // 0x01E8
    uint8_t pad_01E9[0x3]; // 0x01E9
    UIState mUIState; // 0x01EC
    uint8_t pad_01ED[0x3]; // 0x01ED
    bool mGameRunning; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    GameInteractableCanvas* mCurrentCanvas; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    PlayerController* mPlayerController; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    int32_t mControllerUIIndex; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    PlayerInputState* mPlayerInputState; // 0x0210
    uint8_t pad_0211[0x7]; // 0x0211
    RenderTexture* mCharacterPreviewRenderTexture; // 0x0218
    uint8_t pad_0219[0x7]; // 0x0219
    PlayerSpriteHelper* mCharacterPreviewSpriteHelper; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    Vector2 mCharacterRenderFacing; // 0x0228
    uint8_t pad_0229[0x7]; // 0x0229
    float mCharacterRenderFacingTimer; // 0x0230
    uint8_t pad_0231[0x3]; // 0x0231
    float mCharacterRenderAnimSpeed; // 0x0234
    uint8_t pad_0235[0x3]; // 0x0235
    GameMode mSelectedGameMode; // 0x0238

    // Methods
    void InitialiseCharacterPreview(PlayerController* playerController);  // RVA: 0x3A2470
    void UpdateCharacterPreview(float dt);  // RVA: 0x3A58F0
    void SetCharacterFilepath(Il2CppString* filePath, bool canSaveCharacter);  // RVA: 0x3A4DA0
    bool CanSaveCharacter();  // RVA: 0x3A2180
    Il2CppString* GetCharacterFilepath();  // RVA: 0x3A23B0
    static void SetWorldFilepath(Il2CppString* filePath, bool canSaveWorld);  // RVA: 0x3A5560
    static bool CanSaveWorld();  // RVA: 0x3A2190
    static Il2CppString* GetWorldFilepath();  // RVA: 0x3A23C0
    GameInteractableCanvas* InitialiseDialog(PlayerController* playerController, GameObject* prefab);  // RVA: 0x3A28D0
    void InitialiseWorldTextManager(PlayerController* playerController);  // RVA: 0x3A2C00
    void ProcessControllerType(bool force);  // RVA: 0x3A4AC0
    void Update();  // RVA: 0x3A5C60
    void OnDestroy();  // RVA: 0x3A4830
    void Initialise(PlayerController* playerController);  // RVA: 0x3A2DB0
    void InitialisePlayer(Player* player);  // RVA: 0x3A2A80
    void HideHUD();  // RVA: 0x3A2400
    void ShowMessage(IMessageBoxHandler* handler, Il2CppString* titleString, Il2CppString* messageString, Il2CppString* button1String, Il2CppString* button1AudioOverride, Il2CppString* button2String, Il2CppString* button2AudioOverride, Il2CppString* button3String, Il2CppString* button3AudioOverride);  // RVA: 0x3A5680
    bool MessageBoxActive();  // RVA: 0x3A4110
    void CloseMessageBox();  // RVA: 0x3A21F0
    void ShowDemoBossDefeatSplash(bool enable);  // RVA: 0x3A55E0
    bool DemoBossDefeatSplashActive();  // RVA: 0x3A2250
    bool ShowVirtualKeyboard(IVirtualKeyboardHandler* handler, Il2CppString* description, int32_t maxChars, Il2CppString* existingText, bool useVirtualKeyboardCanvasFallback);  // RVA: 0x3A57C0
    bool PlayerControlsActive(bool testInteract);  // RVA: 0x3A4A40
    void DismissPlaytestCanvas();  // RVA: 0x3A2280
    void Clear();  // RVA: 0x3A21D0
    void SetUIState(UIState newState);  // RVA: 0x3A4DE0
    void SetCanvasDisabledState(bool pendingEnable, GameInteractableCanvas* gameCanvas, GameInteractableCanvas* canvasToMakeCurrent);  // RVA: 0x3A4D50
    void StartCharacterSelection();  // RVA: 0x3A58E0
    void OnClickStartLocal();  // RVA: 0x3A4710
    void OnClickStartOnline();  // RVA: 0x3A4730
    void OnClickCharacterSave();  // RVA: 0x3A4330
    void OnCharacterSelected();  // RVA: 0x3A4140
    void OnClickLoadLevel();  // RVA: 0x3A4490
    void OnClickSaveLevel();  // RVA: 0x3A4690
    void OnClickSettings();  // RVA: 0x3A4700
    void OnClickCredits();  // RVA: 0x3A4340
    void OnClickExit();  // RVA: 0x3A4350
    void ExitGame();  // RVA: 0x3A2360
    void QuitLevel();  // RVA: 0x3A4CC0
    void OnClickQuitLevel();  // RVA: 0x3A4510
    void OnFailedToAddLocalPlayer();  // RVA: 0x3A48E0
    void Online_OnLeavingGame(LeavingGameReason reason);  // RVA: 0x3A49A0
    void Online_OnGamePending();  // RVA: 0x3A4930
    void .ctor();  // RVA: 0x3A61A0
};

// Namespace: <global>
class VirtualKeyboardButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    Il2CppString* appendText; // 0x00C0

    // Methods
    void Refresh(Il2CppString* _displayText, int32_t _buttonId, Il2CppString* _appendText);  // RVA: 0x3A6290
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class IVirtualKeyboardHandler
{
public:

    // Methods
    void OnVirtualKeyboardTextEntered(Il2CppString* text);  // RVA: 0x175530
};

// Namespace: <global>
class VirtualKeyboardCanvas : public GameInteractableCanvas
{
public:
    // Static fields
    // static System.String[,] sKeyboardKeys;

    uint8_t pad_0000[0x90]; // 0x0000
    HUDCanvas* hudCanvas; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextMeshProUGUI* title; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    TMP_InputField* inputField; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    GameObject* keyboardBottonAnchor; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    GameObject* keyboardButtonPrefab; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    VirtualKeyboardButton* shiftButton; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    VirtualKeyboardButton* spaceButton; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    VirtualKeyboardButton* delButton; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    VirtualKeyboardButton* enterButton; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    int32_t mCurrentCol; // 0x00D8
    uint8_t pad_00D9[0x3]; // 0x00D9
    int32_t mCurrentRow; // 0x00DC
    uint8_t pad_00DD[0x3]; // 0x00DD
    int32_t maxCols; // 0x00E0
    uint8_t pad_00E1[0x3]; // 0x00E1
    int32_t maxRows; // 0x00E4
    uint8_t pad_00E5[0x3]; // 0x00E5
    int32_t mShift; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    IVirtualKeyboardHandler* mVirtualKeyboardHandler; // 0x00F0

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x3A6350
    void PopulateKeyboardButtons();  // RVA: 0x3A6690
    void RefreshButtons();  // RVA: 0x3A6D10
    void ShowVirtualKeyboard(IVirtualKeyboardHandler* handler, Il2CppString* titleString, int32_t maxChars, Il2CppString* existingText);  // RVA: 0x3A70B0
    void SelectButton(int32_t colChange, int32_t rowChange);  // RVA: 0x3A6F30
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3A72F0
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x3A6370
    void ToggleShift();  // RVA: 0x3A72D0
    void AddText(Il2CppString* text);  // RVA: 0x3A62E0
    void OnClose();  // RVA: 0x36D140
    void DeactivateCanvas();  // RVA: 0x3A6320
    void .ctor();  // RVA: 0x3A88F0
    static void .cctor();  // RVA: 0x3A73E0
};

// Namespace: <global>
class WaypointButton : public DialogButton
{
public:
    uint8_t pad_0000[0xC0]; // 0x0000
    GameTile* waypointTile; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    Il2CppString* waypointId; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    int8_t waypointIndex; // 0x00D0
    uint8_t pad_00D1[0x3]; // 0x00D1
    int32_t waypointCost; // 0x00D4

    // Methods
    void Refresh(WaypointItem* waypoint, Player* player);  // RVA: 0x3A8910
    void .ctor();  // RVA: 0x3359A0
};

// Namespace: <global>
class WaypointCanvas : public MiniMapCanvas
{
public:
    uint8_t pad_0000[0x120]; // 0x0000
    TextMeshProUGUI* title; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    DialogList* dialogList; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    System.Collections.Generic.List<WaypointButton> mWaypointButtons; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    GameTile* currentWaypointTile; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    GameTile* targetWaypointTile; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    int32_t targetWaypointCost; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    TextMeshProUGUI* priceText; // 0x0150
    uint8_t pad_0151[0x7]; // 0x0151
    TextMeshProUGUI* priceValueText; // 0x0158

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x3A8A10
    void Initialise(bool refresh);  // RVA: 0x3A89C0
    void Refresh(WaypointItem* waypoint);  // RVA: 0x3A9070
    void PopulateWaypointButtons();  // RVA: 0x3A8D40
    void SetTargetWaypoint(WaypointButton* waypointButton, bool forceRefresh);  // RVA: 0x3A9370
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3A9480
    void UpdateIsDirty();  // RVA: 0x3A94E0
    void UpdateMiniMapDetails(int32_t startColRef, int32_t startRowRef, float step);  // RVA: 0x3A9590
    void UpdateWaypointCostText();  // RVA: 0x3A98C0
    void OnClose();  // RVA: 0x3A8AE0
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x3A8CB0
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x3A8B70
    void .ctor();  // RVA: 0x3A9970
};

// Namespace: <global>
class WorldCreateCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogButton* confirmButton; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    TextInputButton* textInputButton; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Il2CppString* mWorldFilename; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    WorldSettings mWorldSettings; // 0x00A8
    uint8_t pad_00A9[0x17]; // 0x00A9
    float mTextResetReviewTimer; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    DropdownButton* difficultyDropdown; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    DropdownButton* sizeDropdown; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    CheckboxButton* hordeModeButton; // 0x00D8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x3A9D30
    void PopulateDropdownLists();  // RVA: 0x3AA4E0
    void Initialise(bool refresh);  // RVA: 0x3A9A00
    void SetWorldName(Il2CppString* worldName);  // RVA: 0x3AA590
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3AA610
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x3AA2A0
    void OnTextInputButtonTextEntered(TextInputButton* textInputButton, bool validateChanged);  // RVA: 0x3AA3C0
    void OnCloseButtonPressed(DialogButton* closeButton);  // RVA: 0x3A9DA0
    void OnClose();  // RVA: 0x3A9EC0
    void DeactivateCanvas();  // RVA: 0x3A9980
    WorldSettings GetWorldSettings();  // RVA: 0x3A99E0
    void OnConfirmClicked();  // RVA: 0x3A9EF0
    void .ctor();  // RVA: 0x3AA910
};

// Namespace: <global>
struct WorldSelectMessageBoxType
{
public:
    // Static fields
    // static WorldSelectMessageBoxType Delete;
    // static WorldSelectMessageBoxType VersionOldWarning;
    // static WorldSelectMessageBoxType VersionInvalidWarning;
    // static WorldSelectMessageBoxType CannotDeleteRemotePlay;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<System.IO.FileInfo> <>9__10_0;


    // Methods
    static void .cctor();  // RVA: 0x3A0A90
    void .ctor();  // RVA: 0x2C1750
    int32_t <PopulateSavedWorlds>b__10_0(FileInfo* x, FileInfo* y);  // RVA: 0x3A0980
};

// Namespace: <global>
class WorldSelectCanvas : public GameInteractableCanvas
{
public:
    uint8_t pad_0000[0x90]; // 0x0000
    DialogList* dialogList; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    GameObject* deletePrefab; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    Il2CppString* mPendingFileDeletePath; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    DialogButton* createNewButton; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    WorldSelectMessageBoxType mMessageBoxType; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    LoadWorldButton* mPendingLoadWorldButton; // 0x00B8

    // Methods
    void Initialise(UIManager* uiManager, PlayerController* playerController);  // RVA: 0x38D070
    void SetActive(bool active);  // RVA: 0x3AB8B0
    void Refresh();  // RVA: 0x3AB660
    void PopulateSavedWorlds(Il2CppString* pathOverride);  // RVA: 0x3AB240
    bool UpdateCanvas(float dt, bool processInput);  // RVA: 0x3AB8F0
    void SelectButton(int32_t index, bool mouseHover, bool triggerAudio, bool forceHighlight);  // RVA: 0x38E050
    void OnDialogButtonPointerEnter(DialogButton* dialogButton);  // RVA: 0x339430
    bool OnDialogButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x3AAB90
    void OnClose();  // RVA: 0x337B50
    void OnDialogListButtonSelected(DialogButton* dialogButton);  // RVA: 0x2C1B90
    bool OnDialogListButtonClicked(DialogButton* dialogButton, bool mouseHover);  // RVA: 0x3AAC50
    void LoadWorld(LoadWorldButton* loadWorldButton);  // RVA: 0x3AA970
    void OnMessageBoxButtonClicked(DialogButton* dialogButton);  // RVA: 0x3AB0E0
    void OnMessageBoxDeactivated();  // RVA: 0x2C1B90
    void MessageBoxDeleteClick(DialogButton* dialogButton);  // RVA: 0x3AAA30
    void MessageBoxVersionWarningClick(DialogButton* dialogButton);  // RVA: 0x3AAB60
    bool HasDialogListMouseSupport(DialogButton* dialogButton);  // RVA: 0x338C70
    void .ctor();  // RVA: 0x336700
};

// Namespace: <global>
class WorldText : public FloatingText
{
public:
    uint8_t pad_0000[0x80]; // 0x0000
    Item* mAnchorItem; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    ItemDescriptor* mItemDescriptor; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    int32_t mStackCount; // 0x0090

    // Methods
    void Initialise(StringBuilder* text, Color color, Vector3 position, Vector3 slideOffset, float fadeInTime, float fadeOutTime, float slideDuration, float duration, ItemDescriptor* itemDescriptor, int32_t stackCount, Item* anchorItem);  // RVA: 0x3ACEF0
    void PreRenderText(ViewController* viewController);  // RVA: 0x3AD010
    void UpdatePosition(float dt);  // RVA: 0x3AD160
    float UpdateFade();  // RVA: 0x3AD0D0
    void InitialiseText(StringBuilder* text);  // RVA: 0x3ACD00
    void .ctor();  // RVA: 0x39FD90
};

// Namespace: <global>
class WorldTextManager : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    int32_t mLayerMask; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GameObject* worldTextPrefab; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    GameObjectPool<WorldText> mWorldTextPool; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<WorldText> mActiveTextObjects; // 0x0038

    // Methods
    void Initialise(int32_t layerMask);  // RVA: 0x3ABC60
    void Clear();  // RVA: 0x3ABB60
    WorldText* SpawnText(StringBuilder* text, Color color, Vector3 position, Vector3 velocity, float fadeInTime, float fadeOutTime, float velocityDuration, float duration, ItemDescriptor* itemDescriptor, int32_t stackCount, Item* anchorItem, bool addTextObject);  // RVA: 0x3AC7D0
    void SpawnDamageText(float value, Item* item);  // RVA: 0x3ABF40
    WorldText* SpawnPickupText(ItemDescriptor* itemDescriptor, int32_t stackCount, Player* player);  // RVA: 0x3AC540
    WorldText* SpawnItemNameText(Item* item);  // RVA: 0x3AC220
    void RemovePickupText(WorldText* pickupText);  // RVA: 0x3ABEC0
    void UpdateTextObjects(float dt);  // RVA: 0x3ACB20
    void UpdateActiveTextObjects(System.Collections.Generic.List<WorldText> activeTextObjects, float dt);  // RVA: 0x3ACA10
    void ClearActiveTextObjects(System.Collections.Generic.List<WorldText> activeTextObjects);  // RVA: 0x3ABA60
    void PreRenderTextObjects(PlayerController* playerController);  // RVA: 0x3ABE30
    void PreRenderTextObjects(System.Collections.Generic.List<WorldText> activeTextObjects, ViewController* viewController);  // RVA: 0x3ABCE0
    void .ctor();  // RVA: 0x3ACC30
};

// Namespace: <global>
class BitConverterNOGC
{
public:
    // Static fields
    // static Byte[][] sByteArray;
    // static Byte[][] sByteArray2;


    // Methods
    static Byte[][] GetBytes(uint8_t value);  // RVA: 0x3971B0
    static Byte[][] GetBytes(bool value);  // RVA: 0x397390
    static Byte[][] GetBytes(int16_t value);  // RVA: 0x397570
    static Byte[][] GetBytes(int32_t value);  // RVA: 0x3974D0
    static Byte[][] GetBytes(float value);  // RVA: 0x397100
    static Byte[][] GetBytes(wchar_t value);  // RVA: 0x396F10
    static Byte[][] GetBytes(double value);  // RVA: 0x397610
    static Byte[][] GetBytes(int64_t value);  // RVA: 0x397250
    static Byte[][] GetBytes(uint16_t value);  // RVA: 0x3972F0
    static Byte[][] GetBytes(uint32_t value);  // RVA: 0x397430
    static Byte[][] GetBytes(uint64_t value);  // RVA: 0x396E70
    static Byte[][] GetBytes(int8_t value);  // RVA: 0x396DD0
    static int32_t GetBytes(Il2CppString* value, Byte[][] byteArray, int32_t maxChars, int32_t maxBytes);  // RVA: 0x396FB0
    void .ctor();  // RVA: 0x2C1750
    static void .cctor();  // RVA: 0x3976C0
};

// Namespace: <global>
class CopyDir
{
public:

    // Methods
    static void CopyAll(Il2CppString* sourceDirectory, Il2CppString* targetDirectory);  // RVA: 0x3979B0
    static void CopyAll(DirectoryInfo* source, DirectoryInfo* target);  // RVA: 0x397760
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class FileUtil
{
public:
    // Static fields
    // static MemoryStream* sReUsableMemoryStream;


    // Methods
    static Exception* BackupFileExtension(Il2CppString* filePath, Il2CppString* oldExtension, Il2CppString* newExtension);  // RVA: 0x397A40
    static Exception* BackupFile(Il2CppString* filePath, Il2CppString* backupExtension);  // RVA: 0x397B00
    static Exception* CreateAdditionalBackupFile(Il2CppString* savePath, Il2CppString* backupPath);  // RVA: 0x397B80
    static MemoryStream* GetReUsableMemoryStream();  // RVA: 0x397D50
    static T CompressStream(MemoryStream* sourceStream, T compressedDestinationStream);  // RVA: 0x203C40
    static MemoryStream* DecompressStream(T compressedSourceStream, MemoryStream* destinationStream);  // RVA: 0x203C40
    void .ctor();  // RVA: 0x2C1750
    static void .cctor();  // RVA: 0x397DD0
};

// Namespace: <global>
struct GameTargetType
{
public:
    // Static fields
    // static GameTargetType Release;
    // static GameTargetType EarlyAccess;
    // static GameTargetType Demo;
    // static GameTargetType Playtest;
    // static GameTargetType Test;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct VersionData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t currentVersion; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t originalVersion; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    GameTargetType currentTargetType; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    GameTargetType originalTargetType; // 0x001C

    // Methods
    void .ctor(int32_t _currentVersion, int32_t _originalVersion, GameTargetType _currentTargetType, GameTargetType _originalTargetType);  // RVA: 0x3CEBC0
    void .ctor(Stream* fStream, int32_t minOriginalVersion, bool log);  // RVA: 0x3CE7B0
    static void WriteVersionData(Stream* fStream, int32_t currentVersion, int32_t originalVersion, GameTargetType currentBuildTargetType, GameTargetType originalBuildTargetType);  // RVA: 0x3CE670
};

// Namespace: <global>
class ViewController
{
public:
    // Static fields
    // static float mCameraPosOffset;

    uint8_t pad_0000[0x10]; // 0x0000
    GameObject* mGameObject; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Camera* mCamera; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameRendering* mGameRendering; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayerController* mPlayerController; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    StudioListener* mListener; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Level* mLevel; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 mRawCameraPos; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector3 mCameraSubPixelOffset; // 0x0048
    uint8_t pad_0049[0xB]; // 0x0049
    Vector2 mCameraFrustrumSize; // 0x0054
    uint8_t pad_0055[0x7]; // 0x0055
    float mCameraSize; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    float mCameraCurrentZoom; // 0x0060
    uint8_t pad_0061[0x3]; // 0x0061
    int32_t mVisibleCols; // 0x0064
    uint8_t pad_0065[0x3]; // 0x0065
    int32_t mVisibleRows; // 0x0068
    uint8_t pad_0069[0x3]; // 0x0069
    Vector3 mCameraPos; // 0x006C
    uint8_t pad_006D[0xB]; // 0x006D
    float mPendingCameraZoom; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    Vector2Int mCameraResolution; // 0x007C
    uint8_t pad_007D[0x7]; // 0x007D
    float mCameraCurrentZoomScale; // 0x0084
    uint8_t pad_0085[0x3]; // 0x0085
    float mCameraMinZoom; // 0x0088
    uint8_t pad_0089[0x3]; // 0x0089
    float mCameraMaxZoom; // 0x008C
    uint8_t pad_008D[0x3]; // 0x008D
    int32_t mDesiredVisibleTileSize; // 0x0090
    uint8_t pad_0091[0x3]; // 0x0091
    RectInt mRenderBounds; // 0x0094
    uint8_t pad_0095[0xF]; // 0x0095
    RectInt mEffectBounds; // 0x00A4
    uint8_t pad_00A5[0xF]; // 0x00A5
    RectInt mUpdateBounds; // 0x00B4
    uint8_t pad_00B5[0xF]; // 0x00B5
    float mViewFade; // 0x00C4
    uint8_t pad_00C5[0x3]; // 0x00C5
    float mViewFadeTarget; // 0x00C8
    uint8_t pad_00C9[0x3]; // 0x00C9
    float mViewFadeSpeed; // 0x00CC

    // Methods
    void .ctor(PlayerController* playerController, Camera* camera, int8_t localPlayerIndex, GameObject* containerObject);  // RVA: 0x3D10A0
    void Clear();  // RVA: 0x3CFD60
    void Reset();  // RVA: 0x3CFE70
    void SetViewFade(float target, float time);  // RVA: 0x3D0470
    void Update(float deltaTime);  // RVA: 0x3D0FD0
    void UpdateZoomExtents(bool forceRecalculateCurrentZoom);  // RVA: 0x3D0DF0
    float CalculateTargetZoom(float desiredTileLimit, float minZoom, float maxZoom, bool scaleByAspectRatio);  // RVA: 0x3CFBE0
    void SetCameraZoom(float zoom, bool round);  // RVA: 0x3D0210
    static Vector2 CalculateZoomExtents(float screenWidth, float screenHeight, Vector2 tileLimits);  // RVA: 0x3CFCD0
    void UpdateCamera(float newCameraZoom);  // RVA: 0x3D0720
    void SetCameraPosition(Vector3 rawCameraPos, Level* level, float dt);  // RVA: 0x3CFE90
    void LateUpdateCameraPos();  // RVA: 0x3CFDB0
    void UpdateCameraBounds();  // RVA: 0x3D04B0
    void SetObliquesness(float horizObl, float vertObl);  // RVA: 0x3D0270
};

// Namespace: <global>
class Wallet
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Int32> mCostCurrencyCounts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.Int32> mWalletCurrencyCounts; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.Int32> mSpentWalletCurrencyCounts; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Collections.Generic.List<System.Int32> mCurrencyValues; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<System.String> mCurrencyNames; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<System.String> mCurrencyStrings; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.List<UnityEngine.Color> mCurrencyColors; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t mNumCurrencies; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    int32_t mCurrencyMultipier; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    int32_t mMaxCurrencyValue; // 0x0050

    // Methods
    void Initialise();  // RVA: 0x3D2A40
    int32_t TrimCost(int32_t cost);  // RVA: 0x3D3A40
    int32_t GetPrimaryCurrencyIndex(int32_t cost);  // RVA: 0x3D2890
    Color GetPrimaryCurrencyColor(int32_t cost);  // RVA: 0x3D27C0
    void AppendCostString(int32_t cost);  // RVA: 0x3D1F30
    void UpdateCostCounts(int32_t cost);  // RVA: 0x3D3B30
    void UpdateWalletCostCounts(ContainerItem* container);  // RVA: 0x3D3BF0
    int32_t GetWalletValue(ContainerItem* container);  // RVA: 0x3D2920
    void SpendWallet(int32_t cost, Player* player);  // RVA: 0x3D3250
    Item* CreateNewCurrencyFromCurrency(Il2CppString* name, Item* oldCurrency);  // RVA: 0x3D2540
    static void CreateCurrency(int8_t sourceClientIndex, CreateCurrency msg);  // RVA: 0x3D2430
    void CreateCurrency(Player* player, ItemDescriptor* currencyDescr, uint16_t currencyCount, Params onlineParams);  // RVA: 0x3D2120
    void AddToWallet(int32_t cost, Player* player, bool triggerAudio);  // RVA: 0x3D1CE0
    Item* AddToChildCurrencyItem(Item* childCurrency, Item* newCurrency, ContainerItem* container);  // RVA: 0x3D19B0
    Item* AddCurrency(Item* item, ContainerItem* container);  // RVA: 0x3D1740
    void .ctor();  // RVA: 0x3D3DE0
};

// Namespace: <global>
class WaypointItem : public PlaceableItem
{
public:
    // Static fields
    // static int32_t cMaxShrineIndices;

    uint8_t pad_0000[0xD0]; // 0x0000
    int8_t mIndex; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    Il2CppString* mId; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    float mAdditiveFade; // 0x00E0

    // Methods
    void Initialise(ItemDescriptor* descr, GameTile* _gameTile, int8_t levelId, Vector3 pos, ItemState placeState, ItemManager* mg, int8_t orientation, Params onlineParams, bool loading);  // RVA: 0x3D4730
    void InitialiseIndex(int8_t index);  // RVA: 0x3D4690
    void InitialiseId();  // RVA: 0x3D44D0
    int32_t GetWaypointCost();  // RVA: 0x3D44A0
    StringBuilder* GetFloatingText();  // RVA: 0x3D4360
    static void ActivateWaypoint(int8_t sourceClientIndex, WaypointActivate msg);  // RVA: 0x3D4180
    void ActivateWaypoint();  // RVA: 0x3D3E70
    void Interact(Item* item);  // RVA: 0x3D4890
    void Save(Stream* stream, bool rootObject, int32_t worldSerialisationFlags);  // RVA: 0x3D5010
    void Load(Stream* stream, int32_t version, ItemIndexTable* itemIndexTable, bool rootObject, int32_t worldSerialisationFlags, int32_t itemLoadFlags);  // RVA: 0x3D4AB0
    void PostLoad(int32_t worldSerialisationFlags);  // RVA: 0x3D4E10
    Item* Place(Player* player, int8_t levelId, Vector3 worldPos, Params onlineParams, int8_t orientation);  // RVA: 0x3D4C00
    void TriggerPlacedEffect();  // RVA: 0x3D5330
    void Unplace(ContainerItem* newParent);  // RVA: 0x3D5350
    void Destroy(bool despawned, int32_t sourcePlayerIndex);  // RVA: 0x3D42C0
    void Age(float dt, bool instant);  // RVA: 0x3D4280
    bool Render(GameRendering* gameRendering, float alpha, bool forceVisible, int32_t renderFlags, int32_t forceState);  // RVA: 0x3D4E30
    void SpriteObjectRender(GameRendering* gameRendering, int32_t renderFlags);  // RVA: 0x3D5110
    void .ctor();  // RVA: 0x3D53E0
};

// Namespace: <global>
class WorldBoss : public Boss
{
public:

    // Methods
    void SendPreTransferAuthorityState(int8_t pendingClientIndex);  // RVA: 0x3D55B0
    static void SetAuthorityState(int8_t sourceClientIndex, WorldBossAuthorityState msg);  // RVA: 0x3D5710
    bool SetAnim(AnimType animType, float animSpeed, AnimCompareType animCompareType, bool sendOnline);  // RVA: 0x3D56D0
    void UpdateMove(float dt);  // RVA: 0x3D5E00
    void UpdateRemote(float dt);  // RVA: 0x3D5F30
    void UpdateHeight(float dt);  // RVA: 0x3D5CB0
    void UpdateMusicIntensity(float proximity, float nearbyOnlinePlayerModifier);  // RVA: 0x2C1B90
    void UpdateAudio(float dt);  // RVA: 0x3D5AF0
    void ProcessPhaseChange();  // RVA: 0x3D54D0
    void SpawnMobs(int32_t maxMobs);  // RVA: 0x3D58A0
    void .ctor();  // RVA: 0x3D6010
};

// Namespace: <global>
struct GameMode
{
public:
    // Static fields
    // static GameMode LOCAL_GAME;
    // static GameMode ONLINE_GAME;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ThreadDebugState
{
public:
    // Static fields
    // static ThreadDebugState None;
    // static ThreadDebugState FixedUpdate;
    // static ThreadDebugState Update;
    // static ThreadDebugState UpdatePlatform;
    // static ThreadDebugState UpdatePathfinding;
    // static ThreadDebugState UpdateObjects;
    // static ThreadDebugState UpdateProjectiles;
    // static ThreadDebugState UpdateEnemies;
    // static ThreadDebugState UpdateAnimals;
    // static ThreadDebugState UpdateNPCs;
    // static ThreadDebugState UpdatePlayers;
    // static ThreadDebugState Spawn;
    // static ThreadDebugState CreatePlayer;
    // static ThreadDebugState SaveWorld;
    // static ThreadDebugState Render;
    // static ThreadDebugState UpdateComplete;
    // static ThreadDebugState Shutdown;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct WorldSerialisationFlags
{
public:
    // Static fields
    // static WorldSerialisationFlags GameTileValidate;
    // static WorldSerialisationFlags OnlineSave;
    // static WorldSerialisationFlags Compress;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct NotificationFlag
{
public:
    // Static fields
    // static NotificationFlag None;
    // static NotificationFlag GamepadWarningLocal;
    // static NotificationFlag GamepadWarningRemote;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<WaypointItem> <>9__105_0;
    // static System.Comparison<System.Single> <>9__215_0;
    // static System.Comparison<IRenderPoolable> <>9__215_1;


    // Methods
    static void .cctor();  // RVA: 0x3CE4A0
    void .ctor();  // RVA: 0x2C1750
    int32_t <PostCreateWorld>b__105_0(WaypointItem* x, WaypointItem* y);  // RVA: 0x3CE3F0
    int32_t <RenderObjects>b__215_0(float x, float y);  // RVA: 0x3CE430
    int32_t <RenderObjects>b__215_1(IRenderPoolable* x, IRenderPoolable* y);  // RVA: 0x3CE450
};

// Namespace: <global>
class WorldManager : public MonoBehaviour
{
public:
    // Static fields
    // static WorldManager* instance;
    // static WorldManager* instanceEditor;
    // static uint32_t mUpdateFrame;
    // static bool sForceSleepSpawnTest;

    uint8_t pad_0000[0x20]; // 0x0000
    Il2CppString* editorCommandLineArgs; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Settings* mSettings; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Constants* mConstants; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* mModPath; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    ScriptableDatabaseCollection* scriptableDatabaseCollection; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    AnimationDatabase* animationDatabase; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    MiniTileDatabase* miniTileDatabase; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    SpriteDatabase* mSpriteDatabase; // 0x0058
    uint8_t pad_0059[0x7]; // 0x0059
    SurfaceTileDatabase* flatSurfaceDatabase; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    AnimatedSpriteDatabase* animatedSpriteDatabase; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    StringDatabase* mStringDatabase; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    VegetationGenerationDatabase* mVegetationGenerationDatabase; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    LevelDatabase* mLevelDatabase; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    SpawnDatabase* mSpawnDatabase; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    CalendarDatabase* mCalendarDatabase; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    NPCDatabase* mNPCDatabase; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    LoreDatabase* mLoreDatabase; // 0x00A0
    uint8_t pad_00A1[0x7]; // 0x00A1
    WorldGenerator* mWorldGenerator; // 0x00A8
    uint8_t pad_00A9[0x7]; // 0x00A9
    LevelManager* mLevelManager; // 0x00B0
    uint8_t pad_00B1[0x7]; // 0x00B1
    CalendarManager* mCalendarManager; // 0x00B8
    uint8_t pad_00B9[0x7]; // 0x00B9
    ItemManager* itemManager; // 0x00C0
    uint8_t pad_00C1[0x7]; // 0x00C1
    SpawnManager* mSpawnManager; // 0x00C8
    uint8_t pad_00C9[0x7]; // 0x00C9
    CraftingManager* craftingManager; // 0x00D0
    uint8_t pad_00D1[0x7]; // 0x00D1
    PlayerManager* mPlayerManager; // 0x00D8
    uint8_t pad_00D9[0x7]; // 0x00D9
    EffectsManager* mEffectsManager; // 0x00E0
    uint8_t pad_00E1[0x7]; // 0x00E1
    LightManager* mLightManager; // 0x00E8
    uint8_t pad_00E9[0x7]; // 0x00E9
    BehaviourManager* mBehaviourManager; // 0x00F0
    uint8_t pad_00F1[0x7]; // 0x00F1
    LoreManager* mLoreManager; // 0x00F8
    uint8_t pad_00F9[0x7]; // 0x00F9
    QuestManager* mQuestManager; // 0x0100
    uint8_t pad_0101[0x7]; // 0x0101
    NPCManager* mNPCManager; // 0x0108
    uint8_t pad_0109[0x7]; // 0x0109
    PenManager* mPenManager; // 0x0110
    uint8_t pad_0111[0x7]; // 0x0111
    PathfindingManager* mPathfindingManager; // 0x0118
    uint8_t pad_0119[0x7]; // 0x0119
    AudioManager* mAudioManager; // 0x0120
    uint8_t pad_0121[0x7]; // 0x0121
    FontManager* mFontManager; // 0x0128
    uint8_t pad_0129[0x7]; // 0x0129
    PlatformManager* mPlatformManager; // 0x0130
    uint8_t pad_0131[0x7]; // 0x0131
    InputManager* mInputManager; // 0x0138
    uint8_t pad_0139[0x7]; // 0x0139
    FPSCounter* mFPSCounter; // 0x0140
    uint8_t pad_0141[0x7]; // 0x0141
    EventMap* mEventMap; // 0x0148
    uint8_t pad_0149[0x7]; // 0x0149
    WorldSettings mWorldSettings; // 0x0150
    uint8_t pad_0151[0x17]; // 0x0151
    WorldMetaData* mWorldMetaData; // 0x0168
    uint8_t pad_0169[0x7]; // 0x0169
    CalendarTime mSessionUpdateTime; // 0x0170
    uint8_t pad_0171[0x7]; // 0x0171
    bool mGenerateWorld; // 0x0178
    bool mAllowEditMode; // 0x0179
    bool mDebugRenderMode; // 0x017A
    bool mSuppressEditMode; // 0x017B
    bool mRunning; // 0x017C
    bool mForcePaused; // 0x017D
    uint8_t pad_017E[0x2]; // 0x017E
    Boolean[][] mPlayerPauseOverride; // 0x0180
    uint8_t pad_0181[0x7]; // 0x0181
    bool mPaused; // 0x0188
    uint8_t pad_0189[0x7]; // 0x0189
    EventInstance mPauseSnapshotEvent; // 0x0190
    uint8_t pad_0191[0x7]; // 0x0191
    float mAutosaveTimer; // 0x0198
    uint8_t pad_0199[0x3]; // 0x0199
    GameMode mGameMode; // 0x019C
    uint8_t pad_019D[0x3]; // 0x019D
    bool mIsOnlineGameHost; // 0x01A0
    uint8_t pad_01A1[0x3]; // 0x01A1
    float mSleepTransitionTimer; // 0x01A4
    uint8_t pad_01A5[0x3]; // 0x01A5
    Thread* mDebuggingThread; // 0x01A8
    uint8_t pad_01A9[0x7]; // 0x01A9
    ThreadDebugState mThreadDebugState; // 0x01B0
    uint8_t pad_01B1[0x3]; // 0x01B1
    ThreadDebugState mPreviousThreadDebugState; // 0x01B4
    uint8_t pad_01B5[0x3]; // 0x01B5
    bool mTheadDebugShutdown; // 0x01B8
    uint8_t pad_01B9[0x7]; // 0x01B9
    Stopwatch* mThreadDebugStopWatch; // 0x01C0
    uint8_t pad_01C1[0x7]; // 0x01C1
    Stopwatch* mGameStopWatch; // 0x01C8
    uint8_t pad_01C9[0x7]; // 0x01C9
    System.Collections.Generic.List<Player> mPlayers; // 0x01D0
    uint8_t pad_01D1[0x7]; // 0x01D1
    System.Collections.Generic.List<Player> mLocalPlayers; // 0x01D8
    uint8_t pad_01D9[0x7]; // 0x01D9
    System.Collections.Generic.List<PlaceableItem> mEnemies; // 0x01E0
    uint8_t pad_01E1[0x7]; // 0x01E1
    System.Collections.Generic.List<PlaceableItem> mAnimals; // 0x01E8
    uint8_t pad_01E9[0x7]; // 0x01E9
    System.Collections.Generic.List<ProjectileItem> mProjectiles; // 0x01F0
    uint8_t pad_01F1[0x7]; // 0x01F1
    System.Collections.Generic.List<ProjectileItem> mEnemyProjectiles; // 0x01F8
    uint8_t pad_01F9[0x7]; // 0x01F9
    System.Collections.Generic.List<Item> mDynamicMiniMapItems; // 0x0200
    uint8_t pad_0201[0x7]; // 0x0201
    System.Collections.Generic.List<WaypointItem> mWaypoints; // 0x0208
    uint8_t pad_0209[0x7]; // 0x0209
    float mProgressionTimer; // 0x0210
    uint8_t pad_0211[0x3]; // 0x0211
    bool mPendingDemoBossDefeatSplash; // 0x0214
    uint8_t pad_0215[0x3]; // 0x0215
    float mDemoBossDefeatSplashTimer; // 0x0218
    uint8_t pad_0219[0x3]; // 0x0219
    float mDemoBossDefeatSplashRetryTimer; // 0x021C
    uint8_t pad_021D[0x3]; // 0x021D
    System.Collections.Generic.List<Item> mItemPostUpdateList; // 0x0220
    uint8_t pad_0221[0x7]; // 0x0221
    System.Collections.Generic.List<Item> mFixedUpdateItems; // 0x0228
    uint8_t pad_0229[0x7]; // 0x0229
    LightObject* mSwampGlowEffect; // 0x0230
    uint8_t pad_0231[0x7]; // 0x0231
    LightObject* mLavaGlowEffect; // 0x0238
    uint8_t pad_0239[0x7]; // 0x0239
    LightObject* mFaultTileGlowEffect; // 0x0240
    uint8_t pad_0241[0x7]; // 0x0241
    SpriteDescriptor* mWateredSpriteDescriptor; // 0x0248
    uint8_t pad_0249[0x7]; // 0x0249
    System.Collections.Generic.Dictionary<System.SByte,System.Single> mFloatingTextCooldownTimers; // 0x0250
    uint8_t pad_0251[0x7]; // 0x0251
    System.Collections.Generic.Dictionary<System.SByte,System.Single> mFloatingTextPendingCooldownTimerUpdates; // 0x0258
    uint8_t pad_0259[0x7]; // 0x0259
    ClassFactory* mClassFactory; // 0x0260
    uint8_t pad_0261[0x7]; // 0x0261
    System.Collections.Generic.List<System.Single> mRenderDepths; // 0x0268
    uint8_t pad_0269[0x7]; // 0x0269
    System.Collections.Generic.Dictionary<System.Single,System.Collections.Generic.List<IRenderPoolable>> mRenderDepthItems; // 0x0270
    uint8_t pad_0271[0x7]; // 0x0271
    System.Collections.Generic.List<IRenderPoolable> mTempRenderDepthList; // 0x0278
    uint8_t pad_0279[0x7]; // 0x0279
    ListPool<IRenderPoolable> renderDepthListPool; // 0x0280
    uint8_t pad_0281[0x7]; // 0x0281
    ObjectPool* mSpriteRenderCopyPool; // 0x0288
    uint8_t pad_0289[0x7]; // 0x0289
    PlacementPreview* mPlacementPreview; // 0x0290
    uint8_t pad_0291[0x7]; // 0x0291
    System.Collections.Generic.List<System.ValueTuple<WorldManager.NotificationFlag,System.Single>> mNotificationCooldowns; // 0x0298

    // Methods
    void OnValidate();  // RVA: 0x3B4110
    static WorldManager* GetInstance();  // RVA: 0x3B2510
    void Awake();  // RVA: 0x3AD890
    void Start();  // RVA: 0x3BD250
    void StartDebuggingThread();  // RVA: 0x3BCD00
    void UpdateDebuggingThread();  // RVA: 0x3C1500
    void OnApplicationQuit();  // RVA: 0x3B3980
    void OnDestroy();  // RVA: 0x3B3BD0
    void CreateTitleLevel();  // RVA: 0x3AF200
    void GenerateWorld(Il2CppString* worldGenerationName);  // RVA: 0x3B08D0
    void PostCreateWorld(bool newGame, int32_t version);  // RVA: 0x3B4330
    Player* SpawnPlayer(int8_t localPlayerIndex, bool showCharacterSelectDialog);  // RVA: 0x3BC980
    void OnAddLocalPlayer(int8_t localPlayerIndex, bool canAdd);  // RVA: 0x3B38F0
    Player* SpawnNetworkPlayer(uint64_t onlinePlayerID, int8_t localPlayerIndex, int8_t clientIndex, Stream* playerData);  // RVA: 0x3BC330
    bool RemoveNetworkPlayer(uint64_t onlinePlayerID, int8_t localPlayerIndex);  // RVA: 0x3B7A70
    void RemoveClient(int8_t clientIndex);  // RVA: 0x3B7580
    Vector3 GetDefaultSpawnPos(Level* level);  // RVA: 0x3B2320
    bool EnemiesTargetingPlayer(Player* player);  // RVA: 0x3B05D0
    static void SetEvent(int8_t sourceClientIndex, SetEvent msg);  // RVA: 0x3BB7E0
    bool SetEvent(EventId eventId, Il2CppString* eventName, int32_t newValue, OperatorEnum operatorType, bool updateOnline);  // RVA: 0x3BB5B0
    static void RemoveEvent(int8_t sourceClientIndex, RemoveEvent msg);  // RVA: 0x3B7610
    void RemoveEvent(EventId eventId, Il2CppString* eventName, bool updateOnline);  // RVA: 0x3B78B0
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t value, OperatorEnum operatorType, bool forceLocalUpdate);  // RVA: 0x3AE2D0
    bool CheckEvent(EventId eventId, Il2CppString* eventName, int32_t minValue, int32_t maxValue);  // RVA: 0x3AE2A0
    void SavePlayer(Player* player);  // RVA: 0x3BB0E0
    Player* CreatePlayer(PlayerController* playerController, Stream* playerData);  // RVA: 0x3AEA10
    void RemovePlayer(Player* player);  // RVA: 0x3B7BB0
    void RespawnPlayer(Player* player);  // RVA: 0x3BAE40
    void StartCreateWorld();  // RVA: 0x3BCC30
    void CreateWorld();  // RVA: 0x3AF5B0
    void LogGameState();  // RVA: 0x3B3790
    void CleanMemory();  // RVA: 0x3AE430
    void ClearWorld();  // RVA: 0x3AE510
    static VersionData LoadWorldVersionData(Il2CppString* filepath);  // RVA: 0x3B2D40
    static WorldSettings LoadWorldSettings(Il2CppString* filepath, VersionData versionData);  // RVA: 0x3B2BC0
    void LoadWorld();  // RVA: 0x3B34D0
    void LoadWorld(Stream* stream, Il2CppString* filePath, uint32_t highestLocalOnlineID);  // RVA: 0x3B2DB0
    void OnFailedToLoadWorld(Exception* e);  // RVA: 0x3B3F00
    int32_t ApplyDefaultWorldSerialisationFlags(int32_t worldSerialisationFlags);  // RVA: 0x3AD800
    void WriteWorld(Stream* stream, int32_t worldSerialisationFlags, bool updateItemsPreSave);  // RVA: 0x3C3D00
    void SaveWorld(bool updateItemsPreSave);  // RVA: 0x3BB130
    void Exit();  // RVA: 0x3B06D0
    void QuitWorld();  // RVA: 0x3B7320
    void SetTileType(Level* level, int32_t col, int32_t row, int32_t groundType);  // RVA: 0x3BBD30
    void ShowNetworkWarning();  // RVA: 0x3BBF80
    bool ShouldPause();  // RVA: 0x3BBE40
    bool UpdatePausedState();  // RVA: 0x3C2C30
    bool PlayerPauseOverride(int32_t localPlayerIndex);  // RVA: 0x3B42E0
    void UpdateAutosaveTimer(float dt);  // RVA: 0x3BD800
    void ProcessAutosaveTimer(bool force);  // RVA: 0x3B5320
    void AdvanceGameTime(float gameTimeDelta);  // RVA: 0x3AD670
    bool ProcessPendingSleep();  // RVA: 0x3B5B10
    void StartSleep();  // RVA: 0x3BCEA0
    void EndSleep(int8_t sourceClientIndex, EndSleep msg);  // RVA: 0x3B0240
    void EndSleep();  // RVA: 0x3B0350
    bool IsSleeping();  // RVA: 0x3B28C0
    void UpdateSleepTimer(float dt);  // RVA: 0x3C2EE0
    bool CanPlayerJoinWorld();  // RVA: 0x3AE280
    void Platform_OnRemotePlayerConnected();  // RVA: 0x3B41C0
    void Platform_OnRemotePlayerDisconnected();  // RVA: 0x3B4250
    void FixedUpdate();  // RVA: 0x3B0710
    void LateUpdate();  // RVA: 0x3B2A90
    void UpdateWorld();  // RVA: 0x3C2F30
    void ClearDemoBossDefeatSplashTimer(bool setEventFlag);  // RVA: 0x3AE460
    void StartDemoBossDefeatSplashTimer();  // RVA: 0x3BCDF0
    void UpdateDemoBossDefeatSplashTimer(float dt);  // RVA: 0x3C16F0
    void DisplayDemoBossDefeatSplashScreen(float dt, bool checkIfSafe);  // RVA: 0x3B0070
    void LateUpdateCamera();  // RVA: 0x3B2A10
    void TileModified(GameTile* gameTile);  // RVA: 0x3BD4A0
    void ItemPlaced(Item* placedItem);  // RVA: 0x3B28E0
    void SpawnDamageText(int8_t playerIndex, float value, Item* item);  // RVA: 0x3BC010
    bool ProcessFloatingTextCooldown(int8_t playerIndex);  // RVA: 0x3B5A70
    void UpdateFloatingTextCooldownTimer(float dt);  // RVA: 0x3C1740
    void SpawnFloatingText(StringBuilder* stringBuilder, Color color, int8_t playerIndex, int8_t playerIndexExclude, bool checkExcludedCooldown);  // RVA: 0x3BC160
    void SpawnNotificationText(StringBuilder* stringBuilder, Color color);  // RVA: 0x3BC4A0
    void SpawnNotificationText(Il2CppString* text, NotificationFlag notificationFlag, bool triggerAsGameText);  // RVA: 0x3BC5B0
    void UpdateNotificationCooldowns(float dt);  // RVA: 0x3C1D70
    void SpawnDebugCommandText(Il2CppString* text);  // RVA: 0x3BC080
    void ProcessCommandLineArgs();  // RVA: 0x3B54A0
    void UpdateDebugCommands();  // RVA: 0x3BDA10
    void UpdateRunInBackgroundState();  // RVA: 0x3C2E40
    void SetFPSText(Il2CppString* text);  // RVA: 0x3BBAA0
    void SetTargetPerformance(bool vsync, int32_t targetFrameRate, RefreshRate refreshRateRatio);  // RVA: 0x3BBC70
    void SetShaderVariant(int32_t variant);  // RVA: 0x3BBB90
    void SpawnEntities(float dt, bool forceEnemy, bool forceCritter);  // RVA: 0x3BC110
    WaypointItem* GetWaypoint(Il2CppString* id);  // RVA: 0x3B25A0
    void OnCreated(Item* item);  // RVA: 0x3B3AA0
    void OnDestroyed(Item* item, bool despawned);  // RVA: 0x3B3D20
    void AddDynamicMiniMapItem(Item* item);  // RVA: 0x3AD2E0
    void RemoveDynamicMiniMapItem(Item* item);  // RVA: 0x3B75B0
    void RefreshInventoryHUD(ContainerItem* parent);  // RVA: 0x3B74B0
    Item* GetClosestObjectInDirection(Player* player, Level* level, Vector3 position, float radius, float maxDist, Vector2 direction, bool interactable, bool highlightable);  // RVA: 0x3B1BC0
    void TestClosestObjectDist(ItemBase* testItem, Vector3 position, float radius, float maxSqrDist, Vector2 direction, float closestSqrDist, Item* closestItem);  // RVA: 0x3BD330
    bool TileWithinDist(GameTile* gameTile, Vector3 sourcePosition, float maxDistSquared);  // RVA: 0x3BD500
    bool RayCastHit(float itemRadius, float itemHeight, Vector3 itemPosition, Vector3 rayCastPosition);  // RVA: 0x3B7460
    Item* GetClosestInteractableObject(Player* player, GameTile* gameTile, Vector3 sourcePosition, float maxDistSquared, Vector3 rayCastPosition, bool useRayCast);  // RVA: 0x3B17A0
    void ProcessPlayerInteract(Player* player, Vector3 direction);  // RVA: 0x3B6EA0
    Item* GetClosestCollisionItem(Level* level, Vector3 position, float maxDist, Vector3 direction, WeaponAttackStats weaponAttackStats, bool ignoreOpenDoors, float vertOffset);  // RVA: 0x3B1310
    Item* GetClosestAttackableObject(Level* level, Vector3 position, Vector3 contactPos, float maxDist, Vector2 direction, ItemInteractionFlags interactionFlags);  // RVA: 0x3B0B50
    float GetAttackCollisionDist(Vector3 sourcePos, Vector3 contactPos, float contactDist, Item* item, float maxTestSqrDist);  // RVA: 0x3B0970
    PlaceableItem* GetClosestCollisionEntity(Level* level, Vector3 position, Vector3 contactPos, float maxDist, System.Collections.Generic.List<PlaceableItem> entities);  // RVA: 0x3B1150
    void ProcessPlayerAttackAll(Player* player, Vector3 position, float contactDist, Vector2 direction, WeaponAttackStats weaponAttackStats, bool enemiesOnly);  // RVA: 0x3B5C90
    void ProcessPlayerAttackClosest(Player* player, Vector3 position, float contactDist, Vector2 direction, WeaponAttackStats weaponAttackStats, bool enemiesOnly);  // RVA: 0x3B6850
    bool ProcessPlayerAttackItem(Player* player, PlaceableItem* item, Vector3 sourcePos, Vector3 contactPos, Vector3 contactDir, WeaponAttackStats weaponAttackStats, float damage, bool reparentOnDeath);  // RVA: 0x3B6E20
    Player* GetClosestCollisionPlayer(int8_t levelId, Vector3 position, Vector3 contactPos, Vector3 direction, float collisionRadius);  // RVA: 0x3B15A0
    Player* GetClosestPlayer(int32_t levelId, Vector2 position, float closestDist);  // RVA: 0x3B21E0
    void ProcessEnemyAttack(int8_t levelId, Vector3 position, float contactDist, Vector3 direction, float damage, float radius, float knockback, WeaponAttackStats weaponAttackStats);  // RVA: 0x3B58D0
    Item* ProjectileCollisionTest(ProjectileItem* projectile, Vector2 newPos, int8_t playerIndex);  // RVA: 0x3B6F30
    void ProcessAOEDamage(int8_t playerIndex, int8_t levelId, Vector3 position, float radius, float damage, float knockback, bool applyToEnemies, bool applyToPlayers, bool hasAuthority, Item* impactedItem, ItemDescriptor* damageSourceDescriptor);  // RVA: 0x3B4BE0
    static void DealAOEDamageToPlayers(int8_t sourceClientIndex, AOEDealDamageToPlayers msg);  // RVA: 0x3AF7F0
    static void DealAOEDamage(int8_t sourceClientIndex, AOEDealDamage msg);  // RVA: 0x3AF9E0
    void DealAOEDamage(PlaceableItem* damagedItem, int8_t playerIndex, Vector3 sourcePos, float damage, float damageModifier, float knockback, ItemDescriptor* sourceDescriptor, bool hasAuthority);  // RVA: 0x3AFD30
    bool IsPlayerHighlightedTile(GameTile* gameTile, bool placementOnly);  // RVA: 0x3B2730
    static void AddItemForUpdate(int8_t sourceClientIndex, ItemUpdate msg);  // RVA: 0x3AD390
    void UpdateObjects(float dt);  // RVA: 0x3C1E80
    void RenderObjects(float dt);  // RVA: 0x3BACD0
    void InitialiseRendering();  // RVA: 0x3B26A0
    void UpdateNearScreenEffects(GameRendering* gameRendering, float dt, Level* level, int32_t startRow, int32_t endRow, int32_t startCol, int32_t endCol);  // RVA: 0x3C1A30
    void AddRenderItem(IRenderPoolable* renderItem);  // RVA: 0x3AD480
    void RenderObjects(ViewController* viewController, PlayerController* playerController, float dt);  // RVA: 0x3B81C0
    void SetGameMode(GameMode gameMode);  // RVA: 0x3BBAF0
    bool IsOnlineGame();  // RVA: 0x3B2720
    bool IsHost();  // RVA: 0x3B2700
    static void TransferAuthority(int8_t sourceClientIndex, TransferAuthority msg);  // RVA: 0x3BD790
    void TransferAuthority(System.Collections.Generic.List<T> items, int8_t fromClientIndex, int8_t toClientIndex, bool fromCreator);  // RVA: 0x203C40
    void TransferAuthority(int8_t fromClientIndex, int8_t toClientIndex, bool fromCreator);  // RVA: 0x3BD5A0
    void .ctor();  // RVA: 0x3C4020
};

// Namespace: <global>
struct WorldDifficulty
{
public:
    // Static fields
    // static WorldDifficulty CASUAL;
    // static WorldDifficulty NORMAL;
    // static WorldDifficulty HARD;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct WorldSize
{
public:
    // Static fields
    // static WorldSize SMALL;
    // static WorldSize MEDIUM;
    // static WorldSize LARGE;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct WorldSettings
{
public:
    // Static fields
    // static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String,System.String>> sDifficultyOptions;
    // static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String,System.String>> sSizeOptions;

    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* name; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    WorldDifficulty difficulty; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    WorldSize size; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    bool hordeMode; // 0x0020

    // Methods
    static WorldSettings Default();  // RVA: 0x3D6820
    static System.ValueTuple<System.Int32,System.String,System.String> GetOptionFromValue(System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String,System.String>> options, int32_t value);  // RVA: 0x3D6A50
    void Save(Stream* stream);  // RVA: 0x3D6D90
    void Load(Stream* stream, int32_t version);  // RVA: 0x3D6B90
    float GetMapSizeScaler();  // RVA: 0x3D6A20
    float GetDifficultyDamageModifier();  // RVA: 0x3D68C0
    float GetDifficultyEnemySpawnRateModifier();  // RVA: 0x3D68C0
    float GetDifficultyMaxEnemySpawnModifier();  // RVA: 0x3D68F0
    float GetDifficultyRewardSpawnRateModifier();  // RVA: 0x3D6910
    float GetDifficultyBossMultiplayerHealthPowerModifier();  // RVA: 0x3D6890
    float GetHordeModeEnemySpawnRateModifier();  // RVA: 0x3D69C0
    float GetHordeModeMaxEnemySpawnModifier();  // RVA: 0x3D6A00
    float GetHordeModeEnemySpawnChanceModifier(Player* player);  // RVA: 0x3D6930
    float GetHordeModeFollowDistanceModifier();  // RVA: 0x3D69E0
    static void .cctor();  // RVA: 0x3D6ED0
};

// Namespace: <global>
class WorldMetaData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Guid worldGuid; // 0x0010
    uint8_t pad_0011[0xF]; // 0x0011
    Il2CppString* worldGuidString; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* worldFilename; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* worldDescriptorName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WorldGeneratorDescriptor* worldGeneratorDescriptor; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float mapSizeScaler; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t worldCols; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t worldRows; // 0x0048

    // Methods
    void Initialise(Il2CppString* descriptorName, Il2CppString* worldPath);  // RVA: 0x3D60E0
    Il2CppString* ExtractWorldFilename(Il2CppString* worldPath);  // RVA: 0x3D6060
    void Save(Stream* stream);  // RVA: 0x3D6700
    void Load(Stream* stream, Il2CppString* worldPath, int32_t version, GameTargetType gameTargetType);  // RVA: 0x3D6290
    void .ctor();  // RVA: 0x2C1750
};

// Namespace: <global>
class XMLHelper
{
public:

    // Methods
    static void Serialize(Il2CppObject* o, Il2CppString* path);  // RVA: 0x3D7850
    static Il2CppObject* Deserialize(Type* type, Il2CppString* path);  // RVA: 0x3D76D0
    void .ctor();  // RVA: 0x2C1750
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
    static MonoScriptData Get();  // RVA: 0x3CE510
    void .ctor();  // RVA: 0x2C1750
};

namespace UnityEngine
{

    // Namespace: UnityEngine
    class RandomExtension
    {
    public:
    
        // Methods
        static Vector2 OnUnitySphere();  // RVA: 0x3CC660
        static Vector2 RandomiseDirection(Vector2 dir, float maxDeviation, float power);  // RVA: 0x3CC6B0
    };

} // namespace UnityEngine

namespace UnityEngine.UI
{

    // Namespace: UnityEngine.UI
    class AtlasImage : public MaskableGraphic
    {
    public:
        uint8_t pad_0000[0xE0]; // 0x0000
        Texture* m_Texture; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Rect m_UVRect; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        Il2CppString* m_SpriteName; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        System.Collections.Generic.List<System.String> m_ControllerSpriteNames; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        SpriteDatabase* spriteDatabase; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t m_controllerUIIndex; // 0x0110
    
        // Methods
        void .ctor();  // RVA: 0x3C53E0
        void OnEnable();  // RVA: 0x3C4C20
        void SetControllerUIIndex(int32_t controllerUIIndex);  // RVA: 0x3C5210
        void ResetSpriteInfo();  // RVA: 0x3C50C0
        Texture* get_mainTexture();  // RVA: 0x3C5420
        Texture* get_texture();  // RVA: 0x3C55A0
        void set_texture(Texture* value);  // RVA: 0x3C5730
        Rect get_uvRect();  // RVA: 0x3C55B0
        void set_uvRect(Rect value);  // RVA: 0x3C57F0
        Il2CppString* get_spriteName();  // RVA: 0x2E8D10
        void set_spriteName(Il2CppString* value);  // RVA: 0x3C55C0
        void SetNativeSize();  // RVA: 0x3C5280
        int32_t PopulateSlice(VertexHelper* vh, Vector4 v, Rect uv, Vector2 scale, int32_t vertBaseIndex);  // RVA: 0x3C4E00
        void OnPopulateMesh(VertexHelper* vh);  // RVA: 0x3C4C40
    };

    // Namespace: UnityEngine.UI
    class EightSliceBorderRawImage : public MaskableGraphic
    {
    public:
        uint8_t pad_0000[0xE0]; // 0x0000
        Texture* m_Texture; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Rect m_UVRect; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        Il2CppString* m_SpriteName; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        SpriteDatabase* spriteDatabase; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Vector2 m_UVSpacing; // 0x0108
    
        // Methods
        void .ctor();  // RVA: 0x3C6B10
        void OnEnable();  // RVA: 0x3C63C0
        void ResetSpriteInfo();  // RVA: 0x3C68C0
        Texture* get_mainTexture();  // RVA: 0x3C6B40
        Texture* get_texture();  // RVA: 0x3C55A0
        void set_texture(Texture* value);  // RVA: 0x3C6DD0
        Rect get_uvRect();  // RVA: 0x3C55B0
        void set_uvRect(Rect value);  // RVA: 0x3C6E90
        Il2CppString* get_spriteName();  // RVA: 0x2E8D10
        void set_spriteName(Il2CppString* value);  // RVA: 0x3C6CC0
        void SetNativeSize();  // RVA: 0x3C69B0
        int32_t PopulateSlice(VertexHelper* vh, Vector4 v, Rect uv, Vector2 scale, int32_t vertBaseIndex);  // RVA: 0x3C4E00
        void OnPopulateMesh(VertexHelper* vh);  // RVA: 0x3C64B0
    };

    // Namespace: UnityEngine.UI
    class NineSliceRawImage : public MaskableGraphic
    {
    public:
        uint8_t pad_0000[0xE0]; // 0x0000
        Texture* m_Texture; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Rect m_UVRect; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        Il2CppString* m_SpriteName; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        SpriteDatabase* spriteDatabase; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        bool drawCenter; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        Vector2 m_UVSpacing; // 0x010C
    
        // Methods
        void .ctor();  // RVA: 0x3C91D0
        void OnEnable();  // RVA: 0x3C8A80
        void ResetSpriteInfo();  // RVA: 0x3C8F80
        Texture* get_mainTexture();  // RVA: 0x3C9210
        Texture* get_texture();  // RVA: 0x3C55A0
        void set_texture(Texture* value);  // RVA: 0x3C94A0
        Rect get_uvRect();  // RVA: 0x3C55B0
        void set_uvRect(Rect value);  // RVA: 0x3C9560
        Il2CppString* get_spriteName();  // RVA: 0x2E8D10
        void set_spriteName(Il2CppString* value);  // RVA: 0x3C9390
        void SetNativeSize();  // RVA: 0x3C9070
        int32_t PopulateSlice(VertexHelper* vh, Vector4 v, Rect uv, Vector2 scale, int32_t vertBaseIndex);  // RVA: 0x3C4E00
        void OnPopulateMesh(VertexHelper* vh);  // RVA: 0x3C8B70
    };

    // Namespace: UnityEngine.UI
    class RadialProgressBar : public MaskableGraphic
    {
    public:
        uint8_t pad_0000[0xE0]; // 0x0000
        Texture* m_Texture; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Il2CppString* m_SpriteName; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        float m_StartAngle; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        SpriteDatabase* spriteDatabase; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Rect mUVRect; // 0x0100
        uint8_t pad_0101[0xF]; // 0x0101
        float mEndAngle; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        float mProgress; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Vector2[][] mVertices; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        Vector2[][] mUVs; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Int32[][] mVertIndices; // 0x0128
    
        // Methods
        Texture* get_mainTexture();  // RVA: 0x3CC2B0
        Texture* get_texture();  // RVA: 0x3C55A0
        void set_texture(Texture* value);  // RVA: 0x3CC5A0
        Il2CppString* get_spriteName();  // RVA: 0x3CC440
        void set_spriteName(Il2CppString* value);  // RVA: 0x3CC4D0
        float get_startAngle();  // RVA: 0x3CC450
        void set_startAngle(float value);  // RVA: 0x3CC520
        float get_progress();  // RVA: 0x3CC430
        void set_progress(float value);  // RVA: 0x3CC460
        void .ctor();  // RVA: 0x3CBDA0
        void OnEnable();  // RVA: 0x3CB2E0
        void ResetSprite(Il2CppString* spriteName, Rect uvRect);  // RVA: 0x3CBB10
        void ResetSpriteInfo();  // RVA: 0x3CBA40
        void RefreshProgress();  // RVA: 0x3CB9E0
        void SetNativeSize();  // RVA: 0x3CBB60
        void UpdateVertex(int32_t vertIndex, Vector2 center, Vector2 halfsize, float angle, bool clearRemainingVerts);  // RVA: 0x3CBC40
        void OnPopulateMesh(VertexHelper* vh);  // RVA: 0x3CB300
    };

    // Namespace: UnityEngine.UI
    class VerticalProgressBar : public MaskableGraphic
    {
    public:
        uint8_t pad_0000[0xE0]; // 0x0000
        Texture* m_Texture; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Il2CppString* m_BGTopCapSpriteName; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Il2CppString* m_BGTopSpriteName; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Il2CppString* m_BGCenterSpriteName; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* m_BGBottomSpriteName; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Il2CppString* m_BGBottomCapSpriteName; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        Il2CppString* m_TopSpriteName; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Il2CppString* m_CenterSpriteName; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        Il2CppString* m_BottomSpriteName; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Rect m_BGTopCapUVRect; // 0x0128
        uint8_t pad_0129[0xF]; // 0x0129
        Rect m_BGTopUVRect; // 0x0138
        uint8_t pad_0139[0xF]; // 0x0139
        Rect m_BGCenterUVRect; // 0x0148
        uint8_t pad_0149[0xF]; // 0x0149
        Rect m_BGBottomUVRect; // 0x0158
        uint8_t pad_0159[0xF]; // 0x0159
        Rect m_BGBottomCapUVRect; // 0x0168
        uint8_t pad_0169[0xF]; // 0x0169
        Rect m_TopUVRect; // 0x0178
        uint8_t pad_0179[0xF]; // 0x0179
        Rect m_CenterUVRect; // 0x0188
        uint8_t pad_0189[0xF]; // 0x0189
        Rect m_BottomUVRect; // 0x0198
        uint8_t pad_0199[0xF]; // 0x0199
        SpriteDatabase* spriteDatabase; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        int32_t mMaxValue; // 0x01B0
        uint8_t pad_01B1[0x3]; // 0x01B1
        int32_t mCurrentValue; // 0x01B4
        uint8_t pad_01B5[0x3]; // 0x01B5
        float mBarScale; // 0x01B8
    
        // Methods
        void .ctor();  // RVA: 0x3CF920
        void OnEnable();  // RVA: 0x3CEBE0
        void SetProgress(int32_t currentValue, int32_t maxValue, float barScale);  // RVA: 0x3CF8D0
        void ResetSprite(Il2CppString* spriteName, Rect uvRect);  // RVA: 0x3CF790
        void ResetSpriteInfo();  // RVA: 0x3CF500
        Texture* get_mainTexture();  // RVA: 0x3CF9A0
        Texture* get_texture();  // RVA: 0x3C55A0
        void set_texture(Texture* value);  // RVA: 0x3CFB20
        void SetNativeSize();  // RVA: 0x3CF7E0
        int32_t PopulateSegment(VertexHelper* vh, Vector2 v, Vector2 size, Rect uv, Vector2 scale, int32_t vertBaseIndex, float trim);  // RVA: 0x3CF180
        void OnPopulateMesh(VertexHelper* vh);  // RVA: 0x3CEC00
    };

} // namespace UnityEngine.UI

namespace PlatformHandlers
{

    // Namespace: PlatformHandlers
    class IPlatformHandler
    {
    public:
    };

    // Namespace: PlatformHandlers
    class IRemotePlayerConnected
    {
    public:
    
        // Methods
        void Platform_OnRemotePlayerConnected();  // RVA: 0x1868E0
    };

    // Namespace: PlatformHandlers
    class IRemotePlayerDisconnected
    {
    public:
    
        // Methods
        void Platform_OnRemotePlayerDisconnected();  // RVA: 0x1868E0
    };

    // Namespace: PlatformHandlers
    class IPlatformFocusChanged
    {
    public:
    
        // Methods
        void Platform_OnPlatformFocusChanged(bool platformHasFocus);  // RVA: 0x1755A0
    };

} // namespace PlatformHandlers

// Namespace: <global>
class <GetEnumerator>d__22
{
public:
    int32_t <>1__state; // 0x0000
    T <>2__current; // 0x0000
    Priority_Queue.FastPriorityQueue<T> <>4__this; // 0x0000
    int32_t <i>5__2; // 0x0000

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x176610
    void System.IDisposable.Dispose();  // RVA: 0x1868E0
    bool MoveNext();  // RVA: 0x1832B0
    T System.Collections.Generic.IEnumerator<T>.get_Current();  // RVA: 0x203C40
    void System.Collections.IEnumerator.Reset();  // RVA: 0x1868E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x17A1D0
};

namespace Priority_Queue
{

    // Namespace: Priority_Queue
    class FastPriorityQueue`1
    {
    public:
        int32_t _numNodes; // 0x0000
        T[][] _nodes; // 0x0000
    
        // Methods
        void .ctor(int32_t maxNodes);  // RVA: 0x176610
        int32_t get_Count();  // RVA: 0x177EF0
        int32_t get_MaxSize();  // RVA: 0x177EF0
        void Clear();  // RVA: 0x1868E0
        bool Contains(T node);  // RVA: 0x203C40
        void Enqueue(T node);  // RVA: 0x203C40
        void CascadeUp(T node);  // RVA: 0x203C40
        void CascadeDown(T node);  // RVA: 0x203C40
        bool HasHigherPriority(T higher, T lower);  // RVA: 0x203C40
        bool HasHigherOrEqualPriority(T higher, T lower);  // RVA: 0x203C40
        T Dequeue();  // RVA: 0x203C40
        void Resize(int32_t maxNodes);  // RVA: 0x176610
        T get_First();  // RVA: 0x203C40
        void UpdatePriority(T node);  // RVA: 0x203C40
        void OnNodeUpdated(T node);  // RVA: 0x203C40
        void Remove(T node);  // RVA: 0x203C40
        void ResetNode(T node);  // RVA: 0x203C40
        System.Collections.Generic.IEnumerator<T> GetEnumerator();  // RVA: 0x17A1D0
        IEnumerator* System.Collections.IEnumerable.GetEnumerator();  // RVA: 0x17A1D0
        bool IsValidQueue();  // RVA: 0x1832B0
    };

    // Namespace: Priority_Queue
    class FastPriorityQueueNode
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float Priority; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t QueueIndex; // 0x0014
    
        // Methods
        void .ctor();  // RVA: 0x2C1750
    };

    // Namespace: Priority_Queue
    class IFixedSizePriorityQueue`1
    {
    public:
    
        // Methods
        void Resize(int32_t maxNodes);  // RVA: 0x176610
        int32_t get_MaxSize();  // RVA: 0x177EF0
        void ResetNode(TItem node);  // RVA: 0x203C40
    };

    // Namespace: Priority_Queue
    class IPriorityQueue`1
    {
    public:
    
        // Methods
        void Enqueue(TItem node);  // RVA: 0x203C40
        TItem Dequeue();  // RVA: 0x203C40
        void Clear();  // RVA: 0x1868E0
        bool Contains(TItem node);  // RVA: 0x203C40
        void Remove(TItem node);  // RVA: 0x203C40
        void UpdatePriority(TItem node);  // RVA: 0x203C40
        TItem get_First();  // RVA: 0x203C40
        int32_t get_Count();  // RVA: 0x177EF0
    };

} // namespace Priority_Queue

namespace OnlineMessages
{

    // Namespace: OnlineMessages
    struct OnlineMessageSource
    {
    public:
        // Static fields
        // static OnlineMessageSource HOST;
        // static OnlineMessageSource CLIENT;
        // static OnlineMessageSource BOTH;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: OnlineMessages
    struct OnlineMessageType
    {
    public:
        // Static fields
        // static OnlineMessageType UNUSED;
        // static OnlineMessageType INIT_CONNECTION;
        // static OnlineMessageType GAME_JOINED;
        // static OnlineMessageType CHARACTER_SELECTED_DATA;
        // static OnlineMessageType CHARACTER_SELECTED;
        // static OnlineMessageType WORLD_STATE_DATA;
        // static OnlineMessageType WORLD_STATE;
        // static OnlineMessageType LOCAL_PLAYER_SPAWNED_DATA;
        // static OnlineMessageType LOCAL_PLAYER_SPAWNED;
        // static OnlineMessageType SPAWN_PLAYER_DATA;
        // static OnlineMessageType SPAWN_PLAYER;
        // static OnlineMessageType REMOVE_PLAYER;
        // static OnlineMessageType LOCAL_PLAYER_REMOVED;
        // static OnlineMessageType REQUEST_ADD_LOCAL_PLAYER;
        // static OnlineMessageType CANCEL_ADD_LOCAL_PLAYER;
        // static OnlineMessageType ADD_LOCAL_PLAYER;
        // static OnlineMessageType GAME_STATE_COMPLETE;
        // static OnlineMessageType PING_HOST;
        // static OnlineMessageType PING_CLIENT;
        // static OnlineMessageType CONNECTION_ISSUES;
        // static OnlineMessageType FIRST_GAMEPLAY_MESSAGE;
        // static OnlineMessageType LAST_SYSTEM_MESSAGE;
        // static OnlineMessageType PLAYER_FIRE_PROJECTILE;
        // static OnlineMessageType ENEMY_REQUEST_FIRE_PROJECTILE;
        // static OnlineMessageType ENEMY_FIRE_PROJECTILE;
        // static OnlineMessageType ENEMY_SPAWN_PROJECTILE;
        // static OnlineMessageType ENEMY_ATTACK;
        // static OnlineMessageType ENEMY_AUTHORITY_STATE;
        // static OnlineMessageType WORLD_BOSS_AUTHORITY_STATE;
        // static OnlineMessageType ITEM_DESTROY;
        // static OnlineMessageType ITEM_SET_STACK_COUNT;
        // static OnlineMessageType ITEM_USE;
        // static OnlineMessageType ITEM_DELETE;
        // static OnlineMessageType PROJECTILE_DEAL_DAMAGE;
        // static OnlineMessageType PROJECTILE_IMPACT_EFFECTS;
        // static OnlineMessageType PLAYER_DEAL_DAMAGE;
        // static OnlineMessageType PLAYER_DEAL_DAMAGE_TO_ITEM;
        // static OnlineMessageType PLAYER_DESTROY_NON_PLACEABLE_ITEM;
        // static OnlineMessageType PLAYER_RECEIVE_DAMAGE;
        // static OnlineMessageType AOE_DEAL_DAMAGE_TO_PLAYERS;
        // static OnlineMessageType AOE_DEAL_DAMAGE;
        // static OnlineMessageType PLAYER_CATCH_ANIMAL;
        // static OnlineMessageType TAKE_RESERVED_ITEM;
        // static OnlineMessageType SPAWN_ANIMAL;
        // static OnlineMessageType DESPAWN_ANIMAL;
        // static OnlineMessageType SPAWN_ENEMY;
        // static OnlineMessageType DESPAWN_ENEMY;
        // static OnlineMessageType SPAWN_SPECIAL_ENEMY;
        // static OnlineMessageType SPAWN_SPECIAL_ENEMY_FAILED;
        // static OnlineMessageType ITEM_MOVE;
        // static OnlineMessageType ITEM_SET_ANIM;
        // static OnlineMessageType ITEM_SET_DIRECTION;
        // static OnlineMessageType ITEM_FOLLOW_TARGET;
        // static OnlineMessageType PLAYER_SELECT_ITEM;
        // static OnlineMessageType KILL;
        // static OnlineMessageType UNPLACE_DESTROYED;
        // static OnlineMessageType PLAYER_TELEPORT;
        // static OnlineMessageType ITEM_TELEPORT;
        // static OnlineMessageType TRIGGER_TRANSITION;
        // static OnlineMessageType ITEM_UPDATE;
        // static OnlineMessageType ITEM_CREATE;
        // static OnlineMessageType ITEM_DROP;
        // static OnlineMessageType ITEM_PLAYER_DROP;
        // static OnlineMessageType ANIMAL_DROP;
        // static OnlineMessageType PLAYER_START_COLLECT;
        // static OnlineMessageType ITEM_COLLECT;
        // static OnlineMessageType ITEM_STOP_COLLECT;
        // static OnlineMessageType LOOT_BAG_SPAWN;
        // static OnlineMessageType LOOT_BAG_ADD;
        // static OnlineMessageType BOSS_LOOT_BAG_SPAWN;
        // static OnlineMessageType BOSS_LOOT_BAG_ADD;
        // static OnlineMessageType ANIMAL_SPAWN_CHILD;
        // static OnlineMessageType PLAYER_PLACE_ITEM;
        // static OnlineMessageType PLAYER_RECLAIM_ITEM;
        // static OnlineMessageType PLAYER_UNSTACK_TO_RESERVE;
        // static OnlineMessageType PLAYER_UNPLACE_FITTING;
        // static OnlineMessageType PLAYER_PLACE_FITTING;
        // static OnlineMessageType PLAYER_VALIDATE_INVENTORY;
        // static OnlineMessageType PLAYER_PICK_UP_ITEM;
        // static OnlineMessageType REMOVE_FITTING;
        // static OnlineMessageType ITEM_INTERACT;
        // static OnlineMessageType NPC_INTERACT;
        // static OnlineMessageType CONTAINER_TAKE_ITEM;
        // static OnlineMessageType CONTAINER_TAKE_X_ITEM;
        // static OnlineMessageType CONTAINER_RETURN_ITEM;
        // static OnlineMessageType CONTAINER_SORT_ITEMS;
        // static OnlineMessageType CONTAINER_TRANSFER_ALL;
        // static OnlineMessageType CONTAINER_ADD_CHILD_AUTO_STACK;
        // static OnlineMessageType CONTAINER_REMOVE_CHILD;
        // static OnlineMessageType ITEM_STACK;
        // static OnlineMessageType ITEM_STACK_SOME;
        // static OnlineMessageType PLAYER_CRAFT;
        // static OnlineMessageType PLAYER_CRAFT_RESULT;
        // static OnlineMessageType PLAYER_SPEND_INGREDIENT;
        // static OnlineMessageType CRAFT_ITEM;
        // static OnlineMessageType PLAYER_TRASH;
        // static OnlineMessageType PLAYER_UNTRASH;
        // static OnlineMessageType PLAYER_LOOT;
        // static OnlineMessageType PLAYER_EQUIP_ITEM;
        // static OnlineMessageType PLAYER_QUICK_RESTOCK;
        // static OnlineMessageType PLAYER_QUICK_STACK;
        // static OnlineMessageType PLAYER_RESTOCK_NEARBY;
        // static OnlineMessageType PLAYER_STACK_NEARBY;
        // static OnlineMessageType PLAYER_RESTOCK_FROM;
        // static OnlineMessageType PLAYER_STACK_TO;
        // static OnlineMessageType PLAYER_SPEND_WALLET;
        // static OnlineMessageType PLAYER_PURCHASE_ITEM;
        // static OnlineMessageType PLAYER_SELL_ITEM;
        // static OnlineMessageType PLAYER_STORE_ITEM;
        // static OnlineMessageType PLAYER_TILL;
        // static OnlineMessageType CREATE_CURRENCY;
        // static OnlineMessageType SET_EVENT;
        // static OnlineMessageType REMOVE_EVENT;
        // static OnlineMessageType REQUEST_ASSIGN_NPC_BED;
        // static OnlineMessageType ASSIGN_NPC_BED;
        // static OnlineMessageType NPC_ENABLE_LINK_BED;
        // static OnlineMessageType NPC_SET_VALID_ROOM;
        // static OnlineMessageType NPC_CLEAR_STOCK;
        // static OnlineMessageType NPC_ADD_STOCK;
        // static OnlineMessageType NPC_QUEST_BEHAVIOUR;
        // static OnlineMessageType PLAYER_SET_SPAWN_POINT;
        // static OnlineMessageType SPAWN_NPC;
        // static OnlineMessageType LEVEL_WATER;
        // static OnlineMessageType WAYPOINT_ACTIVATE;
        // static OnlineMessageType START_SLEEP;
        // static OnlineMessageType REQUEST_CALENDAR_UPDATE;
        // static OnlineMessageType CALENDAR_UPDATE;
        // static OnlineMessageType END_SLEEP;
        // static OnlineMessageType PLAYER_SLEEP;
        // static OnlineMessageType ITEM_RENDER_HEIGHT;
        // static OnlineMessageType ITEM_POSITION_HEIGHT;
        // static OnlineMessageType BOSS_ADD_MOB;
        // static OnlineMessageType BOSS_PHASE;
        // static OnlineMessageType BOSS_TRIGGER_EFFECT;
        // static OnlineMessageType TRIGGER_AUDIO;
        // static OnlineMessageType ITEM_TRANSFER_AUTHORITY;
        // static OnlineMessageType TRANSFER_AUTHORITY;
        // static OnlineMessageType BEHAVIOUR_FOLLOW_PLAYER;
        // static OnlineMessageType BEHAVIOUR_RETREAT;
        // static OnlineMessageType HAS_PATH_TO_PLAYER;
        // static OnlineMessageType NUM_MESSAGE_TYPES;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: OnlineMessages
    class OnlineMessageHelper
    {
    public:
        // Static fields
        // static Byte[][] sByteTest;
        // static intptr_t sMessagePtr;
    
    
        // Methods
        static void Initialise(int32_t maxMessageLength);  // RVA: 0x3C9990
        static void ValidateBytes(T msg, Byte[][] msgBytes, int32_t msgSize);  // RVA: 0x203C40
        static void WriteToBytes(T value, Byte[][] destBytes, int32_t size);  // RVA: 0x203C40
        static int32_t CopyBytes(Byte[][] srcBytes, Byte[][] dstBytes, int32_t position, int32_t numBytesToWrite);  // RVA: 0x3C9840
        static int32_t CopyBytes(Byte[][] srcBytes, Byte[][] dstBytes, int32_t position, int32_t numBytesToWrite, int32_t numBytesToClear);  // RVA: 0x3C9880
        static int32_t CopyStringBytes(Il2CppString* value, Byte[][] destBytes, int32_t offset, int32_t maxBytesToClear);  // RVA: 0x3C98E0
        void .ctor();  // RVA: 0x2C1750
    };

    // Namespace: OnlineMessages
    class IOnlineMessage
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x1832B0
        OnlineMessageSource get_MsgSource();  // RVA: 0x1832B0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x1796C0
    };

    // Namespace: OnlineMessages
    class IOnlineSystemMessage
    {
    public:
    };

    // Namespace: OnlineMessages
    class IOnlineGameMessage
    {
    public:
    };

    // Namespace: OnlineMessages
    struct InitConnection
    {
    public:
        // Static fields
        // static int32_t HASH_SIZE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t gameVersion; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] dataHash; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x2E6DB0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7660
        void .ctor(int32_t gameVersion, Byte[][] dataHash);  // RVA: 0x3C7710
    };

    // Namespace: OnlineMessages
    struct GameJoined
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t hostClientIndex; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5CB0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7510
        void .ctor(int8_t hostClientIndex);  // RVA: 0x3C5D90
    };

    // Namespace: OnlineMessages
    struct CharacterSelected
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5D20
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5CD0
    };

    // Namespace: OnlineMessages
    struct WorldStateData
    {
    public:
        // Static fields
        // static int32_t DATA_SIZE_LIMIT_PER_MSG;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t dataSize; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] worldData; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3D75A0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3D74D0
        void .ctor(uint32_t dataSize, Byte[][] worldData);  // RVA: 0x3C7710
    };

    // Namespace: OnlineMessages
    struct WorldState
    {
    public:
        // Static fields
        // static int32_t HASH_SIZE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t highestOnlineID; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int8_t clientIndex; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        Byte[][] dataHash; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3D76C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3D75B0
        void .ctor(int8_t clientIndex, Byte[][] dataHash, uint32_t highestOnlineID);  // RVA: 0x3D76A0
    };

    // Namespace: OnlineMessages
    struct LocalPlayerSpawnedData
    {
    public:
        // Static fields
        // static int32_t DATA_SIZE_LIMIT_PER_MSG;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint32_t dataSize; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] characterData; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8530
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8460
        void .ctor(uint32_t dataSize, Byte[][] characterData);  // RVA: 0x3C7710
    };

    // Namespace: OnlineMessages
    struct LocalPlayerSpawned
    {
    public:
        // Static fields
        // static int32_t HASH_SIZE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t localPlayerIndex; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] dataHash; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8610
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8540
        void .ctor(int8_t localPlayerIndex, Byte[][] dataHash);  // RVA: 0x3C85F0
    };

    // Namespace: OnlineMessages
    struct SpawnPlayerData
    {
    public:
        // Static fields
        // static int32_t DATA_SIZE_LIMIT_PER_MSG;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint64_t playerID; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint32_t dataSize; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Byte[][] characterData; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD270
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CD150
        void .ctor(uint64_t playerID, uint32_t dataSize, Byte[][] characterData);  // RVA: 0x3CD250
    };

    // Namespace: OnlineMessages
    struct SpawnPlayer
    {
    public:
        // Static fields
        // static int32_t HASH_SIZE;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint64_t playerID; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t clientIndex; // 0x0018
        int8_t localPlayerIndex; // 0x0019
        uint8_t pad_001A[0x6]; // 0x001A
        Byte[][] dataHash; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD3C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CD280
        void .ctor(uint64_t playerID, int8_t clientIndex, int8_t localPlayerIndex, Byte[][] dataHash);  // RVA: 0x3CD3A0
    };

    // Namespace: OnlineMessages
    struct RemovePlayer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint64_t playerID; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t localPlayerIndex; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCA10
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CC990
        void .ctor(uint64_t playerID, int8_t localPlayerIndex);  // RVA: 0x3CCA00
    };

    // Namespace: OnlineMessages
    struct LocalPlayerRemoved
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t localPlayerIndex; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8450
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C83F0
        void .ctor(int8_t localPlayerIndex);  // RVA: 0x3C5D90
    };

    // Namespace: OnlineMessages
    struct RequestAddLocalPlayer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t localPlayerIndex; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCA80
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCA20
        void .ctor(int8_t localPlayerIndex);  // RVA: 0x3C5D90
    };

    // Namespace: OnlineMessages
    struct CancelAddLocalPlayer
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5CC0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5C60
    };

    // Namespace: OnlineMessages
    struct AddLocalPlayer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t localPlayerIndex; // 0x0010
        uint8_t canAdd; // 0x0011
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C4A00
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C4990
        void .ctor(int8_t localPlayerIndex, bool canAdd);  // RVA: 0x3C49F0
    };

    // Namespace: OnlineMessages
    struct GameStateComplete
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C75C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7570
    };

    // Namespace: OnlineMessages
    struct PingHost
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9AF0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9AA0
    };

    // Namespace: OnlineMessages
    struct PingClient
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9A90
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9A40
    };

    // Namespace: OnlineMessages
    struct ConnectionIssues
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t clientIndex; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5DA0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5D30
        void .ctor(int8_t clientIndex);  // RVA: 0x3C5D90
    };

    // Namespace: OnlineMessages
    struct PlayerFireProjectile
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params weaponParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params projectileParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 origin; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Vector2 direction; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float angle; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float damageModifier; // 0x003C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA060
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9F90
        void .ctor(Params playerParams, Params weaponParams, Params projectileParams, Vector2 origin, Vector2 direction, float angle, float damageModifier);  // RVA: 0x3CA010
    };

    // Namespace: OnlineMessages
    struct EnemyRequestFireProjectile
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 direction; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t burstCounter; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7270
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C71D0
        void .ctor(Params enemyParams, Vector2 position, Vector2 direction, int32_t burstCounter);  // RVA: 0x3C7250
    };

    // Namespace: OnlineMessages
    struct EnemyFireProjectile
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params projectileParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 origin; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 direction; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t burstCounter; // 0x0030
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C71C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7110
        void .ctor(Params enemyParams, Params projectileParams, Vector2 origin, Vector2 direction, int32_t burstCounter);  // RVA: 0x3C7190
    };

    // Namespace: OnlineMessages
    struct EnemySpawnProjectile
    {
    public:
        // Static fields
        // static int32_t MAX_NAME_LENGTH;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Vector3 position; // 0x0010
        uint8_t pad_0011[0xB]; // 0x0011
        Vector2 direction; // 0x001C
        uint8_t pad_001D[0x7]; // 0x001D
        Params projectileParams; // 0x0024
        uint8_t pad_0025[0x7]; // 0x0025
        int8_t levelId; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Il2CppString* projectileName; // 0x0030
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7500
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7280
        void .ctor(Il2CppString* projectileName, int8_t levelId, Vector3 position, Vector2 direction, Params projectileParams);  // RVA: 0x3C74C0
    };

    // Namespace: OnlineMessages
    struct EnemyAttack
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 direction; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int8_t levelId; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7060
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6FC0
        void .ctor(Params enemyParams, int8_t levelId, Vector2 position, Vector2 direction);  // RVA: 0x3C7040
    };

    // Namespace: OnlineMessages
    struct EnemyAuthorityState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float attackCooldown; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float lungeTimer; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int8_t authorityClientIndex; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7100
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7070
        void .ctor(Params enemyParams, int8_t authorityClientIndex, float attackCooldown, float lungeTimer);  // RVA: 0x3C70E0
    };

    // Namespace: OnlineMessages
    struct WorldBossAuthorityState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params bossParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t attackPhaseLoopCount; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int8_t authorityClientIndex; // 0x001C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3D54C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3D5440
        void .ctor(Params bossParams, int8_t authorityClientIndex, int32_t attackPhaseLoopCount);  // RVA: 0x3D54B0
    };

    // Namespace: OnlineMessages
    struct ItemDestroy
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint8_t despawned; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C78C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7850
        void .ctor(Params itemParams, bool despawned);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct ItemSetStackCount
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint16_t stackCount; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7EF0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7E80
        void .ctor(Params itemParams, uint16_t stackCount);  // RVA: 0x3C5B20
    };

    // Namespace: OnlineMessages
    struct ItemUse
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C82C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8250
        void .ctor(Params itemParams, Params playerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct ProjectileDealDamage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params projectileParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params damagedParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 relativeSourcePos; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float damageModifier; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float knockback; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int8_t playerIndex; // 0x0034
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CB220
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CB150
        void .ctor(Params projectileParams, Params damagedParams, int8_t playerIndex, Vector2 relativeSourcePos, float damage, float damageModifier, float knockback);  // RVA: 0x3CB1D0
    };

    // Namespace: OnlineMessages
    struct ProjectileImpactEffects
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params projectileParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 impactPos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t staticItemDescrId; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CB2D0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CB230
        void .ctor(Params projectileParams, Vector2 impactPos, int16_t staticItemDescrId);  // RVA: 0x3CB2A0
    };

    // Namespace: OnlineMessages
    struct PlayerDealDamage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params damagedParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 relativeSourcePos; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float damageModifier; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float knockback; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int16_t sourceDescrId; // 0x0034
        uint8_t pad_0035[0x1]; // 0x0035
        DamageSource damageSource; // 0x0036
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9E40
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9D60
        void .ctor(Params playerParams, Params damagedParams, Vector2 relativeSourcePos, float damage, float damageModifier, float knockback, int16_t sourceDescrId, DamageSource damageSource);  // RVA: 0x3C9DE0
    };

    // Namespace: OnlineMessages
    struct PlayerDealDamageToItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params damagedParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 sourcePos; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int16_t sourceDescrId; // 0x002C
        uint8_t pad_002D[0x1]; // 0x002D
        uint8_t reparentOnDeath; // 0x002E
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9D50
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9CA0
        void .ctor(Params playerParams, Params damagedParams, Vector2 sourcePos, float damage, int16_t sourceDescrId, bool reparentOnDeath);  // RVA: 0x3C9D10
    };

    // Namespace: OnlineMessages
    struct PlayerDestroyNonPlaceableItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params destroyedParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9EC0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9E50
        void .ctor(Params playerParams, Params destroyedParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerReceiveDamage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 relativeSourcePos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        float damage; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float knockback; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int16_t sourceDescrId; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        DamageSource damageSource; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA610
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA550
        void .ctor(Params playerParams, Vector2 relativeSourcePos, float damage, float knockback, int16_t sourceDescrId, DamageSource damageSource);  // RVA: 0x3CA5D0
    };

    // Namespace: OnlineMessages
    struct AOEDealDamageToPlayers
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector2 sourcePos; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float radius; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float damage; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float knockback; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Params impactedParams; // 0x0024
        uint8_t pad_0025[0x7]; // 0x0025
        int16_t sourceDescrId; // 0x002C
        uint8_t pad_002D[0x1]; // 0x002D
        int8_t playerIndex; // 0x002E
        int8_t levelId; // 0x002F
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C48B0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C47D0
        void .ctor(int8_t playerIndex, int8_t levelId, Vector2 sourcePos, float radius, float damage, float knockback, Params impactedParams, int16_t sourceDescrId);  // RVA: 0x3C4840
    };

    // Namespace: OnlineMessages
    struct AOEDealDamage
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params damagedParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 relativeSourcePos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        float damage; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float damageModifier; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float knockback; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int16_t sourceDescrId; // 0x002C
        uint8_t pad_002D[0x1]; // 0x002D
        int8_t playerIndex; // 0x002E
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C4980
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C48C0
        void .ctor(Params damagedParams, int8_t playerIndex, Vector2 relativeSourcePos, float damage, float damageModifier, float knockback, int16_t sourceDescrId);  // RVA: 0x3C4930
    };

    // Namespace: OnlineMessages
    struct PlayerCatchAnimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params animalParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9B70
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9B00
        void .ctor(Params playerParams, Params animalParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct TakeReservedItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CE210
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CE1A0
        void .ctor(Params playerParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct SpawnAnimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params animalParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t animalId; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int16_t tileX; // 0x001C
        uint8_t pad_001D[0x1]; // 0x001D
        int16_t tileY; // 0x001E
        uint8_t pad_001F[0x1]; // 0x001F
        int8_t levelId; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCE20
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCD80
        void .ctor(Params animalParams, int32_t animalId, int8_t levelId, int16_t tileX, int16_t tileY);  // RVA: 0x3CCDF0
    };

    // Namespace: OnlineMessages
    struct DespawnAnimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params animalParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C6340
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C62D0
        void .ctor(Params animalParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct SpawnEnemy
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params weaponParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t enemyDescrId; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        int16_t spawnDescrId; // 0x0022
        uint8_t pad_0023[0x1]; // 0x0023
        int16_t weaponDescrId; // 0x0024
        uint8_t pad_0025[0x1]; // 0x0025
        int16_t tileX; // 0x0026
        uint8_t pad_0027[0x1]; // 0x0027
        int16_t tileY; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        int8_t levelId; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCEF0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCE30
        void .ctor(Params enemyParams, Params weaponParams, int16_t enemyDescrId, int16_t spawnDescrId, int16_t weaponDescrId, int8_t levelId, int16_t tileX, int16_t tileY);  // RVA: 0x3CCEB0
    };

    // Namespace: OnlineMessages
    struct DespawnEnemy
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params enemyParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C63B0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6350
        void .ctor(Params enemyParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct SpawnSpecialEnemy
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t enemyDescrId; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t spawnDescrId; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        int16_t col; // 0x001C
        uint8_t pad_001D[0x1]; // 0x001D
        int16_t row; // 0x001E
        uint8_t pad_001F[0x1]; // 0x001F
        int8_t levelId; // 0x0020
        int8_t pathfindingType; // 0x0021
        uint8_t followPlayer; // 0x0022
        uint8_t evaluateSpawnTileChance; // 0x0023
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD530
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CD470
        void .ctor(Params playerParams, int16_t enemyDescrId, int16_t spawnDescrId, int8_t levelId, int8_t pathfindingType, int16_t col, int16_t row, bool followPlayer, bool evaluateSpawnTileChance);  // RVA: 0x3CD4E0
    };

} // namespace OnlineMessages

// Namespace: <global>
struct Reason
{
public:
    // Static fields
    // static Reason INVALID_ENEMY;
    // static Reason INVALID_PLAYER;
    // static Reason CANNOT_SPAWN;
    // static Reason INVALID_TILE;

    uint8_t pad_0000[0x10]; // 0x0000
    uint8_t value__; // 0x0010
};

namespace OnlineMessages
{

    // Namespace: OnlineMessages
    struct SpawnSpecialEnemyFailed
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t enemyDescrId; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t spawnDescrId; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        Reason reason; // 0x001C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD460
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CD3D0
        void .ctor(Params playerParams, int16_t enemyDescrId, int16_t spawnDescrId, Reason reason);  // RVA: 0x3CD440
    };

    // Namespace: OnlineMessages
    struct ItemMove
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 moveVector; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7B40
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7A90
        void .ctor(Params itemParams, Vector2 position, Vector2 moveVector);  // RVA: 0x3C7B00
    };

    // Namespace: OnlineMessages
    struct ItemSetAnim
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float animSpeed; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint8_t animType; // 0x001C
        uint8_t animCompareType; // 0x001D
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7DD0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7D40
        void .ctor(Params itemParams, uint8_t animType, float animSpeed, uint8_t animCompareType);  // RVA: 0x3C7DB0
    };

    // Namespace: OnlineMessages
    struct ItemSetDirection
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 direction; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7E70
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7DE0
        void .ctor(Params itemParams, Vector2 direction);  // RVA: 0x3C7E50
    };

    // Namespace: OnlineMessages
    struct ItemFollowTarget
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params targetParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7A00
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7990
        void .ctor(Params itemParams, Params targetParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerSelectItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA810
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA7A0
        void .ctor(Params playerParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct Kill
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t playerIndex; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8340
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C82D0
        void .ctor(Params itemParams, int8_t playerIndex);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct UnplaceDestroyed
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params reparentParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CE660
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CE5F0
        void .ctor(Params itemParams, Params reparentParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerTeleport
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t tileX; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t tileY; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        uint8_t teleportRespawn; // 0x001C
        int8_t levelId; // 0x001D
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CADD0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAD30
        void .ctor(Params playerParams, bool teleportRespawn, int8_t levelId, int16_t tileX, int16_t tileY);  // RVA: 0x3CADA0
    };

    // Namespace: OnlineMessages
    struct ItemTeleport
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t tileX; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t tileY; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        int8_t levelId; // 0x001C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8150
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C80C0
        void .ctor(Params itemParams, int8_t levelId, int16_t tileX, int16_t tileY);  // RVA: 0x3C8130
    };

    // Namespace: OnlineMessages
    struct TriggerTransition
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float age; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int16_t targetDescrId; // 0x001C
        uint8_t pad_001D[0x1]; // 0x001D
        uint8_t instant; // 0x001E
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CE3E0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CE350
        void .ctor(Params itemParams, int16_t targetDescrId, float age, bool instant);  // RVA: 0x3CE3C0
    };

    // Namespace: OnlineMessages
    struct ItemUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8240
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C81E0
        void .ctor(Params itemParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct ItemCreate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t itemDescrId; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        uint16_t stackCount; // 0x001A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7840
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C77B0
        void .ctor(Params itemParams, int16_t itemDescrId, uint16_t stackCount);  // RVA: 0x3C7820
    };

    // Namespace: OnlineMessages
    struct ItemDrop
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector3 position; // 0x0018
        uint8_t pad_0019[0xB]; // 0x0019
        Vector3 velocity; // 0x0024
        uint8_t pad_0025[0xB]; // 0x0025
        int8_t levelId; // 0x0030
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7980
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C78D0
        void .ctor(Params itemParams, int8_t levelId, Vector3 position, Vector3 velocity);  // RVA: 0x3C7950
    };

    // Namespace: OnlineMessages
    struct ItemPlayerDrop
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector3 position; // 0x0020
        uint8_t pad_0021[0xB]; // 0x0021
        Vector3 velocity; // 0x002C
        uint8_t pad_002D[0xB]; // 0x002D
        int8_t levelId; // 0x0038
        int8_t dropParent; // 0x0039
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7C20
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7B50
        void .ctor(Params itemParams, Params playerParams, int8_t levelId, Vector3 position, int8_t dropParent, Vector3 velocity);  // RVA: 0x3C7BD0
    };

    // Namespace: OnlineMessages
    struct AnimalDrop
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params animalParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector3 position; // 0x0020
        uint8_t pad_0021[0xB]; // 0x0021
        int8_t levelId; // 0x002C
        int8_t dropParent; // 0x002D
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C4AB0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C4A10
        void .ctor(Params animalParams, Params playerParams, int8_t levelId, Vector3 position, int8_t dropParent);  // RVA: 0x3C4A80
    };

    // Namespace: OnlineMessages
    struct PlayerStartCollect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAC90
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAC20
        void .ctor(Params playerParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct ItemCollect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C77A0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7730
        void .ctor(Params itemParams, Params containerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct ItemStopCollect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C80B0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8030
        void .ctor(Params itemParams, Vector2 position);  // RVA: 0x3C80A0
    };

    // Namespace: OnlineMessages
    struct LootBagSpawn
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params lootBagParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector3 position; // 0x0020
        uint8_t pad_0021[0xB]; // 0x0021
        int8_t levelId; // 0x002C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8760
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C86C0
        void .ctor(Params playerParams, Params lootBagParams, int8_t levelId, Vector3 position);  // RVA: 0x3C8730
    };

    // Namespace: OnlineMessages
    struct LootBagAdd
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params lootBagParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params itemParams; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C86B0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8620
        void .ctor(Params playerParams, Params lootBagParams, Params itemParams);  // RVA: 0x3C8690
    };

    // Namespace: OnlineMessages
    struct BossLootBagSpawn
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params lootBagParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector3 position; // 0x0018
        uint8_t pad_0019[0xB]; // 0x0019
        int16_t lootBagDescrId; // 0x0024
        uint8_t pad_0025[0x1]; // 0x0025
        int8_t levelId; // 0x0026
        int8_t ownerIndex; // 0x0027
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5AA0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5A00
        void .ctor(Params lootBagParams, int16_t lootBagDescrId, int8_t levelId, Vector3 position, int8_t ownerIndex);  // RVA: 0x3C5A70
    };

    // Namespace: OnlineMessages
    struct BossLootBagAdd
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params lootBagParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C59F0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5980
        void .ctor(Params lootBagParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct AnimalSpawnChild
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params childParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        ItemState state; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        Vector3 position; // 0x001C
        uint8_t pad_001D[0xB]; // 0x001D
        int16_t descrId; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        int8_t levelId; // 0x002A
        int8_t playerIndex; // 0x002B
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C4B80
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C4AC0
        void .ctor(Params childParams, int16_t descrId, ItemState state, int8_t levelId, Vector3 position, int8_t playerIndex);  // RVA: 0x3C4B40
    };

    // Namespace: OnlineMessages
    struct PlayerPlaceItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 playerPos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params itemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 worldPos; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Params placedParams; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int16_t craftItemDescrId; // 0x0038
        uint8_t pad_0039[0x1]; // 0x0039
        int8_t levelId; // 0x003A
        int8_t orientation; // 0x003B
        uint8_t isUnplacing; // 0x003C
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA360
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA280
        void .ctor(Params playerParams, Vector2 playerPos, Params itemParams, int16_t craftItemDescrId, int8_t levelId, Vector2 worldPos, int8_t orientation, bool isUnplacing, Params placedParams);  // RVA: 0x3CA300
    };

    // Namespace: OnlineMessages
    struct PlayerReclaimItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params wallParams; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA690
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA620
        void .ctor(Params playerParams, Params itemParams, Params wallParams);  // RVA: 0x3C8690
    };

    // Namespace: OnlineMessages
    struct PlayerUnstackToReserve
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params unstackedParams; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CB040
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAFD0
        void .ctor(Params playerParams, Params itemParams, Params unstackedParams);  // RVA: 0x3C8690
    };

    // Namespace: OnlineMessages
    struct PlayerUnplaceFitting
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params wallParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params fittingParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int8_t orientation; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAFC0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAF20
        void .ctor(Params playerParams, Params wallParams, Params fittingParams, int8_t orientation);  // RVA: 0x3CAFA0
    };

    // Namespace: OnlineMessages
    struct PlayerPlaceFitting
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 playerPos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params wallParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Params fittingParams; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Params placedParams; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int16_t craftItemDescrId; // 0x0038
        uint8_t pad_0039[0x1]; // 0x0039
        int8_t orientation; // 0x003A
        uint8_t isRemoving; // 0x003B
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA270
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA1A0
        void .ctor(Params playerParams, Vector2 playerPos, Params wallParams, Params fittingParams, int16_t craftItemDescrId, int8_t orientation, bool isRemoving, Params placedParams);  // RVA: 0x3CA220
    };

    // Namespace: OnlineMessages
    struct PlayerValidateInventory
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t hash; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CB140
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CB0D0
        void .ctor(Params playerParams, int32_t hash);  // RVA: 0x3CAB00
    };

    // Namespace: OnlineMessages
    struct PlayerPickUpItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA190
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA120
        void .ctor(Params playerParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct RemoveFitting
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params wallParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t orientation; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CC980
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CC910
        void .ctor(Params wallParams, int8_t orientation);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct ItemInteract
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint8_t isInteracting; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7A80
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7A10
        void .ctor(Params itemParams, Params playerParams, bool isInteracting);  // RVA: 0x3C5950
    };

    // Namespace: OnlineMessages
    struct NPCInteract
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint8_t isInteracting; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8970
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8900
        void .ctor(Params npcParams, Params playerParams, bool isInteracting);  // RVA: 0x3C5950
    };

    // Namespace: OnlineMessages
    struct ContainerTakeItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params existingContainerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params existingItemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t existingSlot; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        int16_t slot; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C6000
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5F50
        void .ctor(Params containerParams, Params existingContainerParams, Params existingItemParams, int16_t existingSlot, int16_t slot);  // RVA: 0x3C5FD0
    };

    // Namespace: OnlineMessages
    struct ContainerTakeXItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params existingContainerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params existingItemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Params newItemParams; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int16_t existingSlot; // 0x0030
        uint8_t pad_0031[0x1]; // 0x0031
        int16_t slot; // 0x0032
        uint8_t pad_0033[0x1]; // 0x0033
        uint16_t quantity; // 0x0034
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C60D0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6010
        void .ctor(Params containerParams, Params existingContainerParams, Params existingItemParams, int16_t existingSlot, int16_t slot, uint16_t quantity, Params newItemParams);  // RVA: 0x3C6090
    };

    // Namespace: OnlineMessages
    struct ContainerReturnItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t slot; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5EC0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5E50
        void .ctor(Params containerParams, Params itemParams, int16_t slot);  // RVA: 0x3C5E20
    };

    // Namespace: OnlineMessages
    struct ContainerAddChildAutoStack
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t startIndex; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5E40
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5DB0
        void .ctor(Params containerParams, Params itemParams, int16_t startIndex);  // RVA: 0x3C5E20
    };

    // Namespace: OnlineMessages
    struct ContainerSortItems
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t start; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5F40
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5ED0
        void .ctor(Params containerParams, int16_t start);  // RVA: 0x3C5B20
    };

    // Namespace: OnlineMessages
    struct ContainerTransferAll
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params containerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params sourceContainerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t sourceStartIndex; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        int16_t startIndex; // 0x0022
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C6170
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C60E0
        void .ctor(Params containerParams, Params sourceContainerParams, int16_t sourceStartIndex, int16_t startIndex);  // RVA: 0x3C6150
    };

    // Namespace: OnlineMessages
    struct ItemStack
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemToStackParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params containerParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t startIndex; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8020
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7F80
        void .ctor(Params itemParams, Params itemToStackParams, Params containerParams, int16_t startIndex);  // RVA: 0x3C8000
    };

    // Namespace: OnlineMessages
    struct ItemStackSome
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemToStackParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t numToStack; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7F70
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7F00
        void .ctor(Params itemParams, Params itemToStackParams, int16_t numToStack);  // RVA: 0x3C5E20
    };

    // Namespace: OnlineMessages
    struct PlayerCraft
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 playerPos; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t itemDescrId; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        uint16_t quantity; // 0x0022
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9C90
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9C00
        void .ctor(Params playerParams, Vector2 playerPos, int16_t itemDescrId, uint16_t quantity);  // RVA: 0x3C9C70
    };

    // Namespace: OnlineMessages
    struct PlayerCraftResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9BF0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9B80
        void .ctor(Params playerParams, Params itemParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerSpendIngredient
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t itemDescrId; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        uint16_t quantity; // 0x001A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAA80
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAA10
        void .ctor(Params playerParams, int16_t itemDescrId, uint16_t quantity);  // RVA: 0x3C7820
    };

    // Namespace: OnlineMessages
    struct CraftItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t itemDescrId; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        uint16_t stackCount; // 0x0022
        uint8_t pad_0023[0x1]; // 0x0023
        uint8_t addToInventory; // 0x0024
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C6220
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6180
        void .ctor(Params playerParams, int16_t itemDescrId, uint16_t stackCount, Params itemParams, bool addToInventory);  // RVA: 0x3C61F0
    };

    // Namespace: OnlineMessages
    struct PlayerTrash
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params containerParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t equipmentIndex; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAF10
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAE90
        void .ctor(Params playerParams, Params itemParams, int16_t equipmentIndex, Params containerParams);  // RVA: 0x3CA0F0
    };

    // Namespace: OnlineMessages
    struct PlayerUntrash
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params existingItemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t existingSlot; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CB0C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CB050
        void .ctor(Params playerParams, Params existingItemParams, int16_t existingSlot);  // RVA: 0x3C5E20
    };

    // Namespace: OnlineMessages
    struct PlayerLoot
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params itemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t containerIndex; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA110
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA070
        void .ctor(Params playerParams, Params containerParams, int16_t containerIndex, Params itemParams);  // RVA: 0x3CA0F0
    };

    // Namespace: OnlineMessages
    struct PlayerEquipItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params containerParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t equipmentIndex; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        int16_t containerIndex; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C9F80
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C9ED0
        void .ctor(Params playerParams, Params itemParams, int16_t equipmentIndex, Params containerParams, int16_t containerIndex);  // RVA: 0x3C9F50
    };

    // Namespace: OnlineMessages
    struct PlayerSpendWallet
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t cost; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAB10
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAA90
        void .ctor(Params playerParams, int32_t cost);  // RVA: 0x3CAB00
    };

    // Namespace: OnlineMessages
    struct PlayerPurchaseItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params vendorParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params purchasedItemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t vendorItemIndex; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        uint16_t quantity; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA420
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA370
        void .ctor(Params playerParams, Params vendorParams, int16_t vendorItemIndex, uint16_t quantity, Params purchasedItemParams);  // RVA: 0x3CA3F0
    };

    // Namespace: OnlineMessages
    struct PlayerSellItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params vendorParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params itemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint8_t isEquipmentItem; // 0x0028
        uint8_t isInventoryItem; // 0x0029
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA8D0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA820
        void .ctor(Params playerParams, Params vendorParams, Params itemParams, bool isEquipmentItem, bool isInventoryItem);  // RVA: 0x3CA8A0
    };

    // Namespace: OnlineMessages
    struct PlayerStoreItem
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Params itemParams; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int16_t equipmentIndex; // 0x0028
        uint8_t pad_0029[0x1]; // 0x0029
        int16_t inventorySlot; // 0x002A
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAD20
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CACA0
        void .ctor(Params playerParams, Params containerParams, Params itemParams, int16_t equipmentIndex, int16_t inventorySlot);  // RVA: 0x3C5FD0
    };

    // Namespace: OnlineMessages
    struct PlayerQuickRestock
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA4A0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA430
        void .ctor(Params playerParams, Params containerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerQuickStack
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t maxIndex; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA540
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA4B0
        void .ctor(Params playerParams, Params containerParams, int32_t maxIndex);  // RVA: 0x3CA520
    };

    // Namespace: OnlineMessages
    struct PlayerRestockNearby
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA790
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA720
        void .ctor(Params playerParams, Vector2 position);  // RVA: 0x3C80A0
    };

    // Namespace: OnlineMessages
    struct PlayerStackNearby
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 position; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAB90
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CAB20
        void .ctor(Params playerParams, Vector2 position);  // RVA: 0x3C80A0
    };

    // Namespace: OnlineMessages
    struct PlayerRestockFrom
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA710
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA6A0
        void .ctor(Params playerParams, Params containerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerStackTo
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params containerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAC10
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CABA0
        void .ctor(Params playerParams, Params containerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct CreateCurrency
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params currencyParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int16_t currencyDescrId; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        uint16_t count; // 0x0022
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C62C0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6230
        void .ctor(Params playerParams, int16_t currencyDescrId, uint16_t count, Params currencyParams);  // RVA: 0x3C62A0
    };

    // Namespace: OnlineMessages
    struct SetEvent
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        EventId eventId; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t newValue; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        OperatorEnum operatorType; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        uint8_t processQuestStateChange; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Il2CppString* eventName; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCD70
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCB70
        void .ctor(Params itemParams, EventId eventId, Il2CppString* eventName, int32_t newValue, OperatorEnum operatorType, bool processQuestStateChange);  // RVA: 0x3CCD40
    };

    // Namespace: OnlineMessages
    struct RemoveEvent
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        EventId eventId; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint8_t processQuestStateChange; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Il2CppString* eventName; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CC900
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CC750
        void .ctor(Params itemParams, EventId eventId, Il2CppString* eventName, bool processQuestStateChange);  // RVA: 0x3CC8D0
    };

    // Namespace: OnlineMessages
    struct RequestAssignNPCBed
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params bedParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        BedAssignType assignType; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCB00
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCA90
        void .ctor(Params npcParams, Params bedParams, BedAssignType assignType);  // RVA: 0x3C5950
    };

    // Namespace: OnlineMessages
    struct AssignNPCBed
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params bedParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C4C10
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C4B90
        void .ctor(Params npcParams, Params bedParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct NPCEnableLinkBed
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C88F0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8890
        void .ctor(Params npcParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct NPCSetValidRoom
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint8_t isValid; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8A70
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8A00
        void .ctor(Params npcParams, bool isValid);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct NPCClearStock
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8880
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8820
        void .ctor(Params npcParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct NPCAddStock
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params itemParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint16_t stockGroupIndex; // 0x0020
        uint8_t pad_0021[0x1]; // 0x0021
        uint16_t stockItemGroupIndex; // 0x0022
        uint8_t pad_0023[0x1]; // 0x0023
        uint16_t stockItemIndex; // 0x0024
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C8810
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8770
        void .ctor(Params npcParams, uint16_t stockGroupIndex, uint16_t stockItemGroupIndex, uint16_t stockItemIndex, Params itemParams);  // RVA: 0x3C87E0
    };

    // Namespace: OnlineMessages
    struct NPCQuestBehaviour
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C89F0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8980
        void .ctor(Params npcParams, Params playerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct PlayerSetSpawnPoint
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t levelId; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t tileX; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        int16_t tileY; // 0x001C
        uint8_t pad_001D[0x1]; // 0x001D
        uint8_t isItem; // 0x001E
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CA980
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA8E0
        void .ctor(Params playerParams, bool isItem, int8_t levelId, int16_t tileX, int16_t tileY);  // RVA: 0x3CA950
    };

    // Namespace: OnlineMessages
    struct SpawnNPC
    {
    public:
        // Static fields
        // static int32_t MAX_NAME_LENGTH;
    
        uint8_t pad_0000[0x10]; // 0x0000
        Params npcParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t spawnX; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t spawnY; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        int16_t anchorX; // 0x001C
        uint8_t pad_001D[0x1]; // 0x001D
        int16_t anchorY; // 0x001E
        uint8_t pad_001F[0x1]; // 0x001F
        int8_t levelId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* npcName; // 0x0028
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD140
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCF00
        void .ctor(Il2CppString* npcName, int8_t levelId, int16_t spawnX, int16_t spawnY, int16_t anchorX, int16_t anchorY, Params npcParams);  // RVA: 0x3CD100
    };

    // Namespace: OnlineMessages
    struct LevelWater
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int16_t tileX; // 0x0010
        uint8_t pad_0011[0x1]; // 0x0011
        int16_t tileY; // 0x0012
        uint8_t pad_0013[0x1]; // 0x0013
        int8_t levelId; // 0x0014
        uint8_t watered; // 0x0015
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C83E0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8350
        void .ctor(int8_t levelId, int16_t tileX, int16_t tileY, bool watered);  // RVA: 0x3C83C0
    };

    // Namespace: OnlineMessages
    struct PlayerTill
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t tileX; // 0x0018
        uint8_t pad_0019[0x1]; // 0x0019
        int16_t tileY; // 0x001A
        uint8_t pad_001B[0x1]; // 0x001B
        int8_t levelId; // 0x001C
        uint8_t tilled; // 0x001D
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAE80
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CADE0
        void .ctor(Params playerParams, int8_t levelId, int16_t tileX, int16_t tileY, bool tilled);  // RVA: 0x3CAE50
    };

    // Namespace: OnlineMessages
    struct WaypointActivate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params waypointParams; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3D3E60
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3D3E00
        void .ctor(Params waypointParams);  // RVA: 0x3C6330
    };

    // Namespace: OnlineMessages
    struct StartSleep
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CD590
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CD540
    };

    // Namespace: OnlineMessages
    struct RequestCalendarUpdate
    {
    public:
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CCB60
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C5CB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CCB10
    };

    // Namespace: OnlineMessages
    struct CalendarUpdate
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        float startTimer; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t day; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float time; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5C50
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5BD0
        void .ctor(float startTimer, int32_t day, float time);  // RVA: 0x3C5C40
    };

    // Namespace: OnlineMessages
    struct EndSleep
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        CalendarUpdate time; // 0x0010
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C6FB0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C6F30
        void .ctor(CalendarUpdate time);  // RVA: 0x3C6FA0
    };

    // Namespace: OnlineMessages
    struct PlayerSleep
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params playerParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        SleepState sleepState; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CAA00
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CA990
        void .ctor(Params playerParams, SleepState sleepState);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct ItemRenderHeight
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float offset; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7D30
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7CC0
        void .ctor(Params itemParams, float offset);  // RVA: 0x3C7CA0
    };

    // Namespace: OnlineMessages
    struct ItemPositionHeight
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        float offset; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7CB0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C7C30
        void .ctor(Params itemParams, float offset);  // RVA: 0x3C7CA0
    };

    // Namespace: OnlineMessages
    struct BossAddMob
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params bossParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params mobParams; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int8_t attachIndex; // 0x0020
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5970
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C58E0
        void .ctor(Params bossParams, Params mobParams, int8_t attachIndex);  // RVA: 0x3C5950
    };

    // Namespace: OnlineMessages
    struct BossPhase
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params bossParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int16_t phase; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5B30
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5AB0
        void .ctor(Params bossParams, int16_t phase);  // RVA: 0x3C5B20
    };

    // Namespace: OnlineMessages
    struct BossTriggerEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params bossParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint8_t effect; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C5BC0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5B40
        void .ctor(Params bossParams, uint8_t effect);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct TriggerAudio
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector3 position; // 0x0010
        uint8_t pad_0011[0xB]; // 0x0011
        int8_t audioEventType; // 0x001C
        int8_t levelId; // 0x001D
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CE340
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CE2B0
        void .ctor(AudioEventType audioEventType, Vector3 position, int8_t levelId);  // RVA: 0x3CE320
    };

    // Namespace: OnlineMessages
    struct ItemTransferAuthority
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t toClientIndex; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C81D0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C8160
        void .ctor(Params itemParams, int8_t toClientIndex);  // RVA: 0x3C5BB0
    };

    // Namespace: OnlineMessages
    struct TransferAuthority
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int8_t fromClientIndex; // 0x0010
        int8_t toClientIndex; // 0x0011
        uint8_t fromCreator; // 0x0012
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3CE2A0
        OnlineMessageSource get_MsgSource();  // RVA: 0x2E6DB0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3CE220
        void .ctor(int8_t fromClientIndex, int8_t toClientIndex, bool fromCreator);  // RVA: 0x3CE290
    };

    // Namespace: OnlineMessages
    struct BehaviourFollowPlayer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Params playerParams; // 0x0018
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C58D0
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C5860
        void .ctor(Params itemParams, Params playerParams);  // RVA: 0x3C4C00
    };

    // Namespace: OnlineMessages
    struct HasPathToPlayer
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Params itemParams; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int8_t playerIndex; // 0x0018
        uint8_t hasPath; // 0x0019
    
        // Methods
        OnlineMessageType get_MsgType();  // RVA: 0x3C7650
        OnlineMessageSource get_MsgSource();  // RVA: 0x3C48A0
        void WriteToBytes(Byte[][] destBytes, int32_t size);  // RVA: 0x3C75D0
        void .ctor(Params itemParams, int8_t playerIndex, bool hasPath);  // RVA: 0x3C7640
    };

} // namespace OnlineMessages

namespace OnlineHandlers
{

    // Namespace: OnlineHandlers
    class IOnlineHandler
    {
    public:
    };

    // Namespace: OnlineHandlers
    class IGameFound
    {
    public:
    
        // Methods
        void Online_OnGameFound(OnlineGame* game);  // RVA: 0x175530
    };

    // Namespace: OnlineHandlers
    class ICreateGameInProgress
    {
    public:
    
        // Methods
        void Online_OnCreateGameInProgress();  // RVA: 0x1868E0
    };

    // Namespace: OnlineHandlers
    class ICreateGameSucceded
    {
    public:
    
        // Methods
        void Online_OnCreateGameSucceeded();  // RVA: 0x1868E0
    };

    // Namespace: OnlineHandlers
    struct CreateGameFailedReason
    {
    public:
        // Static fields
        // static CreateGameFailedReason OTHER;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: OnlineHandlers
    class ICreateGameFailed
    {
    public:
    
        // Methods
        void Online_OnCreateGameFailed(CreateGameFailedReason reason);  // RVA: 0x176610
    };

    // Namespace: OnlineHandlers
    class IJoinGameInProgress
    {
    public:
    
        // Methods
        void Online_OnJoinGameInProgress();  // RVA: 0x1868E0
    };

    // Namespace: OnlineHandlers
    class IJoinGameSucceded
    {
    public:
    
        // Methods
        void Online_OnJoinGameSucceeded();  // RVA: 0x1868E0
    };

    // Namespace: OnlineHandlers
    struct JoinGameFailedReason
    {
    public:
        // Static fields
        // static JoinGameFailedReason IN_PROGRESS;
        // static JoinGameFailedReason FULL;
        // static JoinGameFailedReason INCORRECT_VERSION;
        // static JoinGameFailedReason OTHER;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: OnlineHandlers
    class IJoinGameFailed
    {
    public:
    
        // Methods
        void Online_OnJoinGameFailed(JoinGameFailedReason reason);  // RVA: 0x176610
    };

    // Namespace: OnlineHandlers
    class IGameRemoved
    {
    public:
    
        // Methods
        void Online_OnGameRemoved(OnlineGame* game);  // RVA: 0x175530
    };

    // Namespace: OnlineHandlers
    struct LeavingGameReason
    {
    public:
        // Static fields
        // static LeavingGameReason LOST_CONNECTION;
        // static LeavingGameReason FORCED;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: OnlineHandlers
    class ILeavingGame
    {
    public:
    
        // Methods
        void Online_OnLeavingGame(LeavingGameReason reason);  // RVA: 0x176610
    };

    // Namespace: OnlineHandlers
    class IGamePending
    {
    public:
    
        // Methods
        void Online_OnGamePending();  // RVA: 0x1868E0
    };

} // namespace OnlineHandlers

namespace System.Collections.Generic
{

    // Namespace: System.Collections.Generic
    class ListExtension
    {
    public:
    
        // Methods
        static void RemoveUnorderedAt(System.Collections.Generic.List<T> list, int32_t index);  // RVA: 0x179240
    };

} // namespace System.Collections.Generic

namespace System.Text
{

    // Namespace: System.Text
    class OnlineItemStringBuilderExtension
    {
    public:
    
        // Methods
        static StringBuilder* AppendOnlineItemParams(StringBuilder* stringBuilder, Params onlineParams);  // RVA: 0x3C9600
    };

    // Namespace: System.Text
    class OnlineManagerStringBuilderExtension
    {
    public:
    
        // Methods
        static StringBuilder* AppendCSteamID(StringBuilder* stringBuilder, CSteamID steamId);  // RVA: 0x3C9750
        static StringBuilder* AppendCSteamID(StringBuilder* stringBuilder, uint64_t steamId);  // RVA: 0x3C9660
    };

    // Namespace: System.Text
    class StringBuilderExtension
    {
    public:
        // Static fields
        // static StringBuilder* sStringBuilder;
    
    
        // Methods
        static StringBuilder* Clear(StringBuilder* stringBuilder);  // RVA: 0x3CDC00
        static StringBuilder* Create(StringBuilder* stringBuilder, Il2CppString* text);  // RVA: 0x3CDC70
        static StringBuilder* AppendInt(StringBuilder* stringBuilder, int32_t value);  // RVA: 0x3CD950
        static StringBuilder* AppendLong(StringBuilder* stringBuilder, int64_t value);  // RVA: 0x3CDA50
        static StringBuilder* AppendUlong(StringBuilder* stringBuilder, uint64_t value);  // RVA: 0x3CDB40
        static StringBuilder* AppendDouble(StringBuilder* stringBuilder, double value, int32_t decimalPlaces, bool trimDecimal, bool round);  // RVA: 0x3CD5A0
        static StringBuilder* SubstituteTextField(StringBuilder* stringBuilder, Il2CppString* idToken, Il2CppString* textReplace);  // RVA: 0x3CDD00
        static StringBuilder* SubstituteTextField(StringBuilder* stringBuilder, Il2CppString* idToken, int32_t valueReplace);  // RVA: 0x3CDCB0
        static void .cctor();  // RVA: 0x3CDD20
    };

    // Namespace: System.Text
    class StringSerialise
    {
    public:
        // Static fields
        // static Byte[][] sByteArray;
    
    
        // Methods
        static Il2CppString* Load(Stream* stream, int32_t version, bool returnNullForEmptyStrings);  // RVA: 0x3CDDA0
        static void Save(Stream* stream, Il2CppString* value);  // RVA: 0x3CDF10
        void .ctor();  // RVA: 0x2C1750
        static void .cctor();  // RVA: 0x3CE0A0
    };

    // Namespace: System.Text
    class StringUtils
    {
    public:
    
        // Methods
        static bool IsAllDigits(Il2CppString* s);  // RVA: 0x3CE110
        void .ctor();  // RVA: 0x2C1750
    };

} // namespace System.Text

// Namespace: <global>
struct __StaticArrayInitTypeSize=60
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=10231
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=19408
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=60 4B774202409A329C6F69A0A240DCD0A8837D63A3F40C5A5A4612371F72A9719E;
    // static __StaticArrayInitTypeSize=10231 ABEFDDA6733C8191A0963A6C50B8041F7CFD1E48ABAD6477488D14FE7ECDC8D7;
    // static __StaticArrayInitTypeSize=19408 F9506C0536C1BFF9E9631BA82A65D51D9A17468D8E27C97679280760B7747F57;

};

