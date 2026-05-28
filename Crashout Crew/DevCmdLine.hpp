// Namespace: <global>
class Trie
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Node* root; // 0x0010

    // Methods
    void .ctor();
    Node* Prefix(MonoString* s, bool caseInsensitive);
    bool Search(MonoString* s, bool caseInsensitive);
    void Add(System.Collections.Generic.IEnumerable<System.String> items);
    void Add(String[][] items);
    void Add(MonoString* s);
};

namespace DevCmdLine
{

    // Namespace: DevCmdLine
    struct DevCmdCompleteFlags
    {
    public:
        // Static fields
        // static DevCmdCompleteFlags None;
        // static DevCmdCompleteFlags Cache;
        // static DevCmdCompleteFlags ValueCaseInsensitive;
        // static DevCmdCompleteFlags Sort;
        // static DevCmdCompleteFlags Default;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: DevCmdLine
    class DevCmdManager
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.String,DevCmdLine.DevCmdManager.DevCmdInfo> _commands;
        // static MonoString* CMD_VERIFY_PATTERN;
        // static MonoString* ARGS_MATCHES_PATTERN;
        // static MonoString* ARG_VALUE_MATCHES_PATTERN;
        // static MonoString* CMD_INC_VERIFY_PATTERN;
        // static MonoString* ARGS_INC_MATCHES_PATTERN;
        // static MonoString* ARG_VALUE_INC_MATCHES_PATTERN;
        // static MonoString* MULTIPLE_SPACES_PATTERN;
        // static System.Collections.Generic.Dictionary<System.String,Trie> _cmdArgTries;
        // static System.Collections.Generic.Dictionary<DevCmdLine.DevCmdManager.CmdArgKey,DevCmdLine.DevCmdManager.CompleteInfo> _completes;
        // static System.Collections.Generic.Dictionary<DevCmdLine.DevCmdManager.CmdArgKey,Trie> _argOptionsCache;
        // static System.Collections.Generic.HashSet<System.Reflection.Assembly> _assembliesRegistered;
        // static Trie* _cmdTrie;
        // static System.Action<System.String> _onRunningCmd;
    
    
        // Methods
        static void RunCommand(MonoString* cmd);
        static MonoString* CompleteCmd(MonoString* cmd);
        static String[][] GetCompleteOptions(MonoString* cmd);
        static void .cctor();
        static void RegisterOnRunningCommand(System.Action<System.String> onRunningCmd);
        static bool TryParseCommand(MonoString* cmd, MonoString* cmdName, MonoString* argsString, DevCmdArg[][] argsParsed);
        static bool TryParseForComplete(MonoString* cmd, MonoString* cmdName, bool incompleteCmd, MonoString* argName, MonoString* argValue, int32_t argValueIndex, ArgInfo info);
        static MonoString* CompleteWithTrie(MonoString* cmd, MonoString* completing, Trie* trie, int32_t startIndex);
        static MonoString* CompleteWithTrie(MonoString* cmd, MonoString* completing, Trie* trie, bool caseInsensitive, bool quoted, wchar_t quote, int32_t startIndex);
        static String[][] GetCompleteOptions(Trie* trie, MonoString* completing, DevCmdCompleteFlags flags);
        static void GetCompleteOptionsHelper(Node* node, System.Collections.Generic.List<System.String> options, StringBuilder* current);
        static Trie* GetCmdTrie();
        static Trie* GetArgNameCompleteTrie(MonoString* cmdName);
        static Trie* GetArgValueCompleteTrie(MonoString* cmdName, MonoString* argName, int32_t varIndex, DevCmdCompleteFlags flags);
        static void RegisterSelfAssembly();
        static void RegisterAssembly(Assembly* asm);
        static void DevCmdHelp(DevCmdArg[][] args);
        static void DevCmdClear(DevCmdArg[][] args);
        static String[][] DevCmdHelpComplete();
    };

    // Namespace: DevCmdLine
    class DevCmdArg
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        String[][] values; // 0x0018
    
        // Methods
        bool get_hasName();
        bool get_hasValue();
        MonoString* get_value();
        void .ctor();
    };

    // Namespace: DevCmdLine
    class DevCmdToggleSimple : public MonoBehaviour
    {
    public:
    
        // Methods
        void Update();
        void .ctor();
    };

} // namespace DevCmdLine

namespace DevCmdLine.UI
{

    // Namespace: DevCmdLine.UI
    class DevCmdConsole : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.List<System.String> _entries;
        // static int32_t MAX_CHARACTERS_COUNT;
        // static System.Collections.Generic.List<System.String> _cmdHistory;
        // static StringBuilder* _outputBuilder;
        // static DevCmdConsole* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* _container; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TextMeshProUGUI* _output; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_InputField* _input; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Scrollbar* _scrollbar; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        UnityEvent* _onConsoleClosed; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        DevCmdOptionsManagerUI* _optionsUI; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool _isOpen; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t _firstIndex; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int32_t _entriesBuilt; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t _historyOffset; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        bool _hasTabbedOnce; // 0x0060
    
        // Methods
        static bool get_isOpen();
        static void OpenConsole(DevCmdStartingSelectedButton starting);
        static void CloseConsole();
        static void ToggleConsole(DevCmdStartingSelectedButton starting);
        static void CloseConsoleWithCallback();
        static void ClearConsole();
        static void Initialize();
        static void OnLogReceived(MonoString* condition, MonoString* stacktrace, LogType type);
        void Awake();
        void Update();
        void OnResetTabbed(MonoString* value);
        void OpenConsoleInternal(DevCmdStartingSelectedButton starting);
        void CloseConsoleInternal(bool invokeCallback);
        void ToggleConsoleInternal(DevCmdStartingSelectedButton starting);
        void ClearConsoleInternal();
        void .ctor();
        static void .cctor();
    };

    // Namespace: DevCmdLine.UI
    class DevCmdConsoleClickCatch : public MonoBehaviour
    {
    public:
    
        // Methods
        void OnPointerClick(PointerEventData* eventData);
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    struct DevCmdStartingSelectedButton
    {
    public:
        // Static fields
        // static DevCmdStartingSelectedButton Input;
        // static DevCmdStartingSelectedButton Option;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: DevCmdLine.UI
    class DevCmdOptionEnumUI : public DevCmdOptionUIBase
    {
    public:
        // Static fields
        // static Type[][] _enumTypes;
    
        uint8_t pad_0000[0x28]; // 0x0000
        MonoString* entryLabel; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* cmdFormat; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        MonoString* enumType; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        String[][] _enumValues; // 0x0040
    
        // Methods
        bool TryGetInitial(MonoString* optionStr, bool isEnd);
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
        MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
        Sirenix.OdinInspector.ValueDropdownList<System.String> ValueDropDownGetTypes();
        bool ValidateType(MonoString* typeName, MonoString* errorMessage);
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    class DevCmdOptionGenericCmdUI : public DevCmdOptionUIBase
    {
    public:
        uint8_t pad_0000[0x28]; // 0x0000
        MonoString* label; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        MonoString* cmd; // 0x0030
    
        // Methods
        bool TryGetInitial(MonoString* optionStr, bool isEnd);
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
        MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    class DevCmdOptionsManagerUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* container; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* template; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* optionsContainer; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GridLayoutGroup* gridGroup; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdOptionUI> _uis; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdOptionUIBase> _options; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        DevCmdOptionUIBase* _activeOption; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<System.Object> _contexts; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> _subOptions; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Selectable* _onLeft; // 0x0068
    
        // Methods
        void Awake();
        void SetInitials(Selectable* onLeft);
        GameObject* GetFirstOption();
        void OnInitialOptionSelected(int32_t index);
        void OnInitialEndSelected(int32_t index);
        void OnSubOptionSelected(int32_t index);
        void OnSubOptionEndSelected(int32_t index);
        void SetSubOptions();
        void GoBack();
        void GoBack(int32_t throwaway);
        void SetNavigation(Selectable* onLeft);
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    class DevCmdOptionUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TextMeshProUGUI* text; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<System.Int32> _onSelected; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t _index; // 0x0030
    
        // Methods
        void Set(MonoString* str, System.Action<System.Int32> onSelected, int32_t index);
        void OnSelected();
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    class DevCmdOptionUIBase : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool closeOnExecution; // 0x0020
    
        // Methods
        bool TryGetInitial(MonoString* optionStr, bool isEnd);
        System.Collections.Generic.List<DevCmdLine.UI.DevCmdSubOption> Selected(System.Collections.Generic.List<System.Object> contexts);
        MonoString* ConstructCmd(System.Collections.Generic.List<System.Object> contexts);
        void .ctor();
    };

    // Namespace: DevCmdLine.UI
    struct DevCmdSubOption
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        MonoString* text; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        MonoObject* context; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        bool isEnd; // 0x0020
    
        // Methods
        void .ctor(MonoString* text, MonoObject* context, bool isEnd);
    };

} // namespace DevCmdLine.UI
