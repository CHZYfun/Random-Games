// Namespace: <global>
class DebugGUI : public MonoBehaviour
{
public:
    // Static fields
    // static bool quitting;
    // static DebugGUI* _instance;

    uint8_t pad_0000[0x20]; // 0x0000
    DebugGUISettings* _settings; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    GraphWindow* graphWindow; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    LogWindow* logWindow; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool initialized; // 0x0038

    // Methods
    static DebugGUI* get_Instance();
    static DebugGUISettings* get_Settings();
    static void SetGraphProperties(MonoObject* key, MonoString* label, float min, float max, int32_t group, Color color, bool autoScale);
    static void Graph(MonoObject* key, float val);
    static void RemoveGraph(MonoObject* key);
    static void ClearGraph(MonoObject* key);
    static MonoString* ExportGraphs();
    static void LogPersistent(MonoObject* key, MonoString* message);
    static void RemovePersistent(MonoObject* key);
    static void ClearPersistent();
    static void Log(MonoObject* message);
    static void ForceReinitializeAttributes();
    void Awake();
    void Init();
    void .ctor();
};

// Namespace: <global>
class DebugGUISettings : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    bool enableGraphs; // 0x0018
    bool enableLogs; // 0x0019
    uint8_t pad_001A[0x2]; // 0x001A
    Color backgroundColor; // 0x001C
    uint8_t pad_001D[0xF]; // 0x001D
    Color scrubberColor; // 0x002C
    uint8_t pad_002D[0xF]; // 0x002D
    int32_t graphWidth; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t graphHeight; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float temporaryLogLifetime; // 0x0044

    // Methods
    void .ctor();
};

// Namespace: <global>
class DebugGUIExamples : public MonoBehaviour
{
public:
    uint8_t pad_0000[0x20]; // 0x0000
    System.Collections.Generic.Queue<System.Single> deltaTimeBuffer; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float SinField; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float mouseX; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float mouseY; // 0x0030

    // Methods
    float get_CosProperty();
    float get_SinProperty();
    float get_smoothDeltaTime();
    void Awake();
    void Update();
    void FixedUpdate();
    void OnDestroy();
    void .ctor();
};

namespace WeavUtils
{

    // Namespace: WeavUtils
    class DebugGUIWindow : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t outOfScreenClampPadding;
        // static bool dragInProgress;
        // static Material* drawMat;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GUIContent* tmpGuiContent; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 Padding; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool dragged; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        Rect rect; // 0x0034
        uint8_t pad_0035[0xF]; // 0x0035
        Vector3 lastMousePos; // 0x0044
    
        // Methods
        Material* CreateMaterial();
        Rect GetDraggableRect();
        void Init();
        void Update();
        void Move(Vector2 delta);
        void OnGUI();
        Vector2 GetMultilineStringSize(GUIStyle* style, MonoString* str);
        void DrawRect(Rect rect, Color color, Vector2 padding);
        void DrawLine(Vector2 start, Vector2 end, Color color);
        void DrawLabel(Vector2 pos, MonoString* label, Vector2 padding, GUIStyle* style);
        void DrawLabel(Rect rect, MonoString* label, Vector2 padding, GUIStyle* style);
        void .ctor();
    };

    // Namespace: WeavUtils
    class GraphWindow : public DebugGUIWindow
    {
    public:
        // Static fields
        // static int32_t graphLabelFontSize;
        // static int32_t graphLabelPadding;
        // static int32_t graphBlockPadding;
        // static int32_t scrubberBackgroundWidth;
    
        uint8_t pad_0000[0x50]; // 0x0000
        System.Collections.Generic.List<WeavUtils.GraphWindow.GraphContainer> graphs; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.HashSet<UnityEngine.MonoBehaviour> attributeContainers; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Collections.Generic.Dictionary<System.Type,System.Int32> typeInstanceCounts; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.Dictionary<System.Object,WeavUtils.GraphWindow.GraphContainer> graphDictionary; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Collections.Generic.Dictionary<UnityEngine.MonoBehaviour,System.Collections.Generic.List<WeavUtils.GraphWindow.GraphAttributeKey>> attributeKeys; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.Dictionary<System.Type,System.Collections.Generic.HashSet<System.Reflection.FieldInfo>> debugGUIGraphFields; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.Dictionary<System.Type,System.Collections.Generic.HashSet<System.Reflection.PropertyInfo>> debugGUIGraphProperties; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Collections.Generic.SortedDictionary<System.Int32,System.Collections.Generic.List<WeavUtils.GraphWindow.GraphContainer>> graphGroups; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GUIStyle* graphLabelStyle; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GraphContainer* lastPressedGraphLabel; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.List<WeavUtils.GraphWindow.DeferredLabel> deferredLabels; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        bool freezeGraphs; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        float graphLabelBoxWidth; // 0x00AC
    
        // Methods
        void InitializeGUIStyles();
        void Init();
        void LateUpdate();
        void OnGUI();
        void Graph(MonoObject* key, float val);
        void CreateGraph(MonoObject* key);
        void ClearGraph(MonoObject* key);
        void RemoveGraph(MonoObject* key);
        void SetGraphProperties(MonoObject* key, MonoString* label, float min, float max, int32_t group, Color color, bool autoScale);
        void ReinitializeAttributes();
        MonoString* ToJson();
        Rect GetDraggableRect();
        void AddGraph(MonoObject* key, GraphContainer* graph);
        void PollGraphAttributes();
        void DrawGraphGroup(System.Collections.Generic.List<WeavUtils.GraphWindow.GraphContainer> group, int32_t groupNum);
        Rect GetGraphWindowRect();
        void RegisterAttributes();
        void CleanUpDeletedAttributes();
        void RefreshRect();
        void RecalculateGraphLabelWidth();
        void DrawLabelDeferred(Vector2 pos, MonoString* label, Color color);
        void .ctor();
    };

    // Namespace: WeavUtils
    class LogWindow : public DebugGUIWindow
    {
    public:
        uint8_t pad_0000[0x50]; // 0x0000
        System.Collections.Generic.List<WeavUtils.LogWindow.TransientLog> transientLogs; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.MonoBehaviour> attributeContainers; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Collections.Generic.Dictionary<UnityEngine.MonoBehaviour,System.Type> typeCache; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.Dictionary<System.Type,System.Int32> typeInstanceCounts; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Collections.Generic.Dictionary<System.Object,System.String> persistentLogs; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.Dictionary<UnityEngine.MonoBehaviour,System.Collections.Generic.List<WeavUtils.LogWindow.PersistentLogAttributeKey>> attributeKeys; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.Dictionary<System.Type,System.Collections.Generic.HashSet<System.Reflection.FieldInfo>> debugGUIPrintFields; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Collections.Generic.Dictionary<System.Type,System.Collections.Generic.HashSet<System.Reflection.PropertyInfo>> debugGUIPrintProperties; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        StringBuilder* persistentLogStringBuilder; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GUIStyle* textStyle; // 0x0098
    
        // Methods
        void Init();
        void LateUpdate();
        void OnGUI();
        void Log(MonoString* str);
        void LogPersistent(MonoObject* key, MonoString* message);
        void RemovePersistent(MonoObject* key);
        void ClearPersistent();
        void ReinitializeAttributes();
        void RegisterAttributes();
        void CleanUpDeletedAttributes();
        void .ctor();
    };

} // namespace WeavUtils
