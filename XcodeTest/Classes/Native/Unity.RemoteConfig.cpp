#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>
struct Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96;
// System.Action`2<Unity.RemoteConfig.ConfigResponse,System.Object>
struct Action_2_tA77015062E4AB7CCFEB6B8C8ABF1103D2098576A;
// System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>
struct Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8;
// System.Action`3<System.Int32Enum,System.Object,System.Object>
struct Action_3_tF3327E23BC80E3B62367FC5B207188F92B71A6D3;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149;
// System.Func`1<Newtonsoft.Json.Linq.JObject>
struct Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>
struct Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC;
// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>
struct Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85;
// System.Func`3<System.Object,System.Object,System.Boolean>
struct Func_3_tBC640C0184A7D93453034EF9B044E2AD7570F889;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JObject>
struct IEnumerable_1_t5ACAA8F2431208A886D15139C4D5C0A96C95284B;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t610B1CEC9838E6506BCD36CF396D1ACA07B2150F;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tAA90B0A114C70EBF9CC4A6380409C4899CB35DD5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_tE610B242E706015DDFCC774FD3713DD5D073FE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>>
struct List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7;
// System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>
struct List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A;
// System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>
struct List_1_tD724FE72058FE2137255714779B872045A0664DC;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JObject>
struct List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Func`1<Newtonsoft.Json.Linq.JObject>[]
struct Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57;
// System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>[]
struct Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3;
// System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>[]
struct Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JObject[]
struct JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// Unity.RemoteConfig.ConfigManagerImpl
struct ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.RemoteConfig.DeviceInfo
struct DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t2E517D3D3DF34BA8FAF8B94B730633F223B6BE74;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t789F5E8B570462D827B19564065D38BD57E46890;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_tF1B860432239F8832248D294A3278F8A09540734;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// Unity.RemoteConfig.RCUnityWebRequest
struct RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D;
// Unity.RemoteConfig.RuntimeConfig
struct RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8;
// Unity.RemoteConfig.RuntimeConfig/<>c
struct U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationInstallMode_t77C8EDBEF9103607127666333B859D1DBDD2EA75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Common_t3F74EA472666122920F0BD23555B4F141EC00B63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD724FE72058FE2137255714779B872045A0664DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04478DE961BC3FBD4944248656D82C0A03CA6ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral09DBABCF47D177922630CF7626523A2E035CFB16;
IL2CPP_EXTERN_C String_t* _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral19FD9592792640DDDF553A327DD8AA117C3B7389;
IL2CPP_EXTERN_C String_t* _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B;
IL2CPP_EXTERN_C String_t* _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
IL2CPP_EXTERN_C String_t* _stringLiteral220702BCC5C1C54BEDED83D77E4E5425AFBCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteral24AC82729F1212E352282CBFE6D0C9A2E58A3177;
IL2CPP_EXTERN_C String_t* _stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A;
IL2CPP_EXTERN_C String_t* _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD996DD9022ECE8103FB4C0FA3B5BF3A0D48B72;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4;
IL2CPP_EXTERN_C String_t* _stringLiteral561357A43AFC43D221B9F230B04E836DD73101EB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral68475E64D3943C9BB7F5E25BD175FCA30A7BAB36;
IL2CPP_EXTERN_C String_t* _stringLiteral6B888C10342DD1C8AE97657EEA10E4A180B3258E;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF72B6E90E497119B7EEA6511CFEB06890528B4;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7;
IL2CPP_EXTERN_C String_t* _stringLiteral77CE8226A01CFA2F2522D01A89DD83B7950DF5BF;
IL2CPP_EXTERN_C String_t* _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49;
IL2CPP_EXTERN_C String_t* _stringLiteral7D63FA1B6FEDA67964D3FCDCB12764101D65571C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D8699446610575017F99BEA3E02DCF807B45CAB;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369;
IL2CPP_EXTERN_C String_t* _stringLiteral82D362395B63055A4F70D734C14197B3C7D0F862;
IL2CPP_EXTERN_C String_t* _stringLiteral82F3BE480580F58EE08D437D524BB2A9AD438EE4;
IL2CPP_EXTERN_C String_t* _stringLiteral8602AE5BC2895DC63F194759151EF294A304B42A;
IL2CPP_EXTERN_C String_t* _stringLiteral8D927104AAFE48366762B70DC5E7CA34D1C0D5BE;
IL2CPP_EXTERN_C String_t* _stringLiteral903B8C1EF36009AA876A865426B6853A18141FFA;
IL2CPP_EXTERN_C String_t* _stringLiteral91C5120C562094A257C8FC3C676B64F1E0403765;
IL2CPP_EXTERN_C String_t* _stringLiteral96681A2B198D42859DB500CC97021274BD2004F1;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9FCE27425740686001DEDF0E34460EF2890AB0C3;
IL2CPP_EXTERN_C String_t* _stringLiteralA31F29C367D53AD7C824C843BE0DEB228E4B5EBC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76;
IL2CPP_EXTERN_C String_t* _stringLiteralA4B8CBDECAC61FBCD3C46FF33E3DB62A63923512;
IL2CPP_EXTERN_C String_t* _stringLiteralB5965463376BB283A639934AF66DD9F2A1A062AA;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50;
IL2CPP_EXTERN_C String_t* _stringLiteralBD150095AD1723163A0791D57A71CFF29421A88E;
IL2CPP_EXTERN_C String_t* _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
IL2CPP_EXTERN_C String_t* _stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118;
IL2CPP_EXTERN_C String_t* _stringLiteralC4729ED69061AF5587EABEA577EE432AC85A94DB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralC8BD3DCAB0097617B6017163139B4704213A67EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD5B20EA6805F285482807C61CD81D1509724E3CC;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B898500E15D390C94183A4E259EA4130A7FE7;
IL2CPP_EXTERN_C String_t* _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53;
IL2CPP_EXTERN_C String_t* _stringLiteralD883FB8DA19B206CB774D223B80DB78B9F93D938;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D;
IL2CPP_EXTERN_C String_t* _stringLiteralDE923A0A39342ECBAD1253F5A36CD36E9E72666D;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA0D25AE1D3DDABAAE8CE7E329A0911AB161618;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mF4D95C2AE7FE23E093185F7835F751865A746016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0F44352139715FC815071A594578E016F8EB621E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManagerImpl_OnRawResponseReturned_mE2701006FCDCC30810A846A1444FEE74D19B65F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManagerImpl_SaveCache_m31B25C16D46FE5077E22589324C1603C5B40C9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManagerImpl_ToNewlineDelimitedJson_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_m030DD5857711349E17F18E975555582596DC01F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisJProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_TisString_t_m81B31D4689EBDDB75A2523DC717067C204DAEA74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2217028EDF13544C8BAE32A9FBCCC468F699501A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m262665E361CF27AA36FFCA4F7FD71E7F29893473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8520F4F5685AF60376AB076982FC1BFC3153CB36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m141C9726234E4D864574D5F3A4A30175D83D1EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m51FE26C4961CB107A7FE4956D6D8E28FA95CC417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m62C0939A716739FF380F23FC2C91A4237B62B03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4A0CD1E456E29AD0CA6E6240EBCACAF3E693B84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m50FAFF918A842986B8254385749ED344D1899F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA20159170D8BC9ED57ADDE9EB512F118B1E9117A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m046B2B59C7D672A31510C3C966A958AE797E5CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m5641FD05A82FD0950094A6048DBD371E45498CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mDF50A5B6A28D8AD72FBA735310D51F0150AF795E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m810BFDA07D5DC2661476B31A4957001B630D5885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m905B6C216921943803E6671B442CD44B077940F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC8BC4D37A3F78BA942538D619DC54BC657D911FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82016AF852A5E3A67C6DC947A258B4937846EB51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95935A8A2618B9BB327BDBAEFA9C51195BB082FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCD805227094A6688F40365E2C3ED24112A18A89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFEE17052808DF370DD4957A8DBE29CF2DFAB9ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeConfig_ConfigManager_ResponseParsed_mE9F90A97E78A39F017BE4CB69FD80655D96A22AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetKeysU3Eb__22_0_m89878E36CEAB46274D110F87C0C4728CEE022089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_0_U3CDoRequestU3Eb__0_mEACB3E526A443187300B02C83D5FF0A6AC95249A_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD5980BE4B478C75AF16CE2333B0F4311A13FD6EA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>>
struct List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7, ____items_1)); }
	inline Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* get__items_1() const { return ____items_1; }
	inline Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7_StaticFields, ____emptyArray_5)); }
	inline Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Func_1U5BU5D_t360D2896B89D7D99B15B31E8C5E653A9E0785E57* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>
struct List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A, ____items_1)); }
	inline Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* get__items_1() const { return ____items_1; }
	inline Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A_StaticFields, ____emptyArray_5)); }
	inline Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Func_1U5BU5D_t514A836D86AD57074B4F77FA744A501E81B7D5C3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>
struct List_1_tD724FE72058FE2137255714779B872045A0664DC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD724FE72058FE2137255714779B872045A0664DC, ____items_1)); }
	inline Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* get__items_1() const { return ____items_1; }
	inline Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD724FE72058FE2137255714779B872045A0664DC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD724FE72058FE2137255714779B872045A0664DC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD724FE72058FE2137255714779B872045A0664DC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD724FE72058FE2137255714779B872045A0664DC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD724FE72058FE2137255714779B872045A0664DC_StaticFields, ____emptyArray_5)); }
	inline Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Func_3U5BU5D_t9513EE250331860EB78DA8EF06B41DD05EDFFEAE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JObject>
struct List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356, ____items_1)); }
	inline JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* get__items_1() const { return ____items_1; }
	inline JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356_StaticFields, ____emptyArray_5)); }
	inline JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JObjectU5BU5D_tD093BB27E4931936FBE06FF6FCE78CCD7641550E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.RemoteConfig.ConfigManager
struct ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5  : public RuntimeObject
{
public:

public:
};

struct ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields
{
public:
	// Unity.RemoteConfig.ConfigManagerImpl Unity.RemoteConfig.ConfigManager::_configmanagerImpl
	ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * ____configmanagerImpl_0;

public:
	inline static int32_t get_offset_of__configmanagerImpl_0() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ____configmanagerImpl_0)); }
	inline ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * get__configmanagerImpl_0() const { return ____configmanagerImpl_0; }
	inline ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 ** get_address_of__configmanagerImpl_0() { return &____configmanagerImpl_0; }
	inline void set__configmanagerImpl_0(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * value)
	{
		____configmanagerImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configmanagerImpl_0), (void*)value);
	}
};


// Unity.RemoteConfig.DeviceInfo
struct DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF  : public RuntimeObject
{
public:
	// System.String Unity.RemoteConfig.DeviceInfo::os_ver
	String_t* ___os_ver_0;
	// System.String Unity.RemoteConfig.DeviceInfo::app_ver
	String_t* ___app_ver_1;
	// System.Boolean Unity.RemoteConfig.DeviceInfo::rooted_jailbroken
	bool ___rooted_jailbroken_2;
	// System.Boolean Unity.RemoteConfig.DeviceInfo::debug_build
	bool ___debug_build_3;
	// System.String Unity.RemoteConfig.DeviceInfo::model
	String_t* ___model_4;
	// System.String Unity.RemoteConfig.DeviceInfo::cpu
	String_t* ___cpu_5;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::cpu_count
	int32_t ___cpu_count_6;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::cpu_freq
	int32_t ___cpu_freq_7;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::ram
	int32_t ___ram_8;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::vram
	int32_t ___vram_9;
	// System.String Unity.RemoteConfig.DeviceInfo::screen
	String_t* ___screen_10;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::dpi
	int32_t ___dpi_11;
	// System.String Unity.RemoteConfig.DeviceInfo::lang
	String_t* ___lang_12;
	// System.String Unity.RemoteConfig.DeviceInfo::app_name
	String_t* ___app_name_13;
	// System.String Unity.RemoteConfig.DeviceInfo::app_install_mode
	String_t* ___app_install_mode_14;
	// System.String Unity.RemoteConfig.DeviceInfo::app_install_store
	String_t* ___app_install_store_15;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::gfx_device_id
	int32_t ___gfx_device_id_16;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::gfx_device_vendor_id
	int32_t ___gfx_device_vendor_id_17;
	// System.String Unity.RemoteConfig.DeviceInfo::gfx_name
	String_t* ___gfx_name_18;
	// System.String Unity.RemoteConfig.DeviceInfo::gfx_vendor
	String_t* ___gfx_vendor_19;
	// System.String Unity.RemoteConfig.DeviceInfo::gfx_ver
	String_t* ___gfx_ver_20;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::gfx_shader
	int32_t ___gfx_shader_21;
	// System.Int32 Unity.RemoteConfig.DeviceInfo::max_texture_size
	int32_t ___max_texture_size_22;

public:
	inline static int32_t get_offset_of_os_ver_0() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___os_ver_0)); }
	inline String_t* get_os_ver_0() const { return ___os_ver_0; }
	inline String_t** get_address_of_os_ver_0() { return &___os_ver_0; }
	inline void set_os_ver_0(String_t* value)
	{
		___os_ver_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___os_ver_0), (void*)value);
	}

	inline static int32_t get_offset_of_app_ver_1() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___app_ver_1)); }
	inline String_t* get_app_ver_1() const { return ___app_ver_1; }
	inline String_t** get_address_of_app_ver_1() { return &___app_ver_1; }
	inline void set_app_ver_1(String_t* value)
	{
		___app_ver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_ver_1), (void*)value);
	}

	inline static int32_t get_offset_of_rooted_jailbroken_2() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___rooted_jailbroken_2)); }
	inline bool get_rooted_jailbroken_2() const { return ___rooted_jailbroken_2; }
	inline bool* get_address_of_rooted_jailbroken_2() { return &___rooted_jailbroken_2; }
	inline void set_rooted_jailbroken_2(bool value)
	{
		___rooted_jailbroken_2 = value;
	}

	inline static int32_t get_offset_of_debug_build_3() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___debug_build_3)); }
	inline bool get_debug_build_3() const { return ___debug_build_3; }
	inline bool* get_address_of_debug_build_3() { return &___debug_build_3; }
	inline void set_debug_build_3(bool value)
	{
		___debug_build_3 = value;
	}

	inline static int32_t get_offset_of_model_4() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___model_4)); }
	inline String_t* get_model_4() const { return ___model_4; }
	inline String_t** get_address_of_model_4() { return &___model_4; }
	inline void set_model_4(String_t* value)
	{
		___model_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___model_4), (void*)value);
	}

	inline static int32_t get_offset_of_cpu_5() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___cpu_5)); }
	inline String_t* get_cpu_5() const { return ___cpu_5; }
	inline String_t** get_address_of_cpu_5() { return &___cpu_5; }
	inline void set_cpu_5(String_t* value)
	{
		___cpu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpu_5), (void*)value);
	}

	inline static int32_t get_offset_of_cpu_count_6() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___cpu_count_6)); }
	inline int32_t get_cpu_count_6() const { return ___cpu_count_6; }
	inline int32_t* get_address_of_cpu_count_6() { return &___cpu_count_6; }
	inline void set_cpu_count_6(int32_t value)
	{
		___cpu_count_6 = value;
	}

	inline static int32_t get_offset_of_cpu_freq_7() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___cpu_freq_7)); }
	inline int32_t get_cpu_freq_7() const { return ___cpu_freq_7; }
	inline int32_t* get_address_of_cpu_freq_7() { return &___cpu_freq_7; }
	inline void set_cpu_freq_7(int32_t value)
	{
		___cpu_freq_7 = value;
	}

	inline static int32_t get_offset_of_ram_8() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___ram_8)); }
	inline int32_t get_ram_8() const { return ___ram_8; }
	inline int32_t* get_address_of_ram_8() { return &___ram_8; }
	inline void set_ram_8(int32_t value)
	{
		___ram_8 = value;
	}

	inline static int32_t get_offset_of_vram_9() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___vram_9)); }
	inline int32_t get_vram_9() const { return ___vram_9; }
	inline int32_t* get_address_of_vram_9() { return &___vram_9; }
	inline void set_vram_9(int32_t value)
	{
		___vram_9 = value;
	}

	inline static int32_t get_offset_of_screen_10() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___screen_10)); }
	inline String_t* get_screen_10() const { return ___screen_10; }
	inline String_t** get_address_of_screen_10() { return &___screen_10; }
	inline void set_screen_10(String_t* value)
	{
		___screen_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screen_10), (void*)value);
	}

	inline static int32_t get_offset_of_dpi_11() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___dpi_11)); }
	inline int32_t get_dpi_11() const { return ___dpi_11; }
	inline int32_t* get_address_of_dpi_11() { return &___dpi_11; }
	inline void set_dpi_11(int32_t value)
	{
		___dpi_11 = value;
	}

	inline static int32_t get_offset_of_lang_12() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___lang_12)); }
	inline String_t* get_lang_12() const { return ___lang_12; }
	inline String_t** get_address_of_lang_12() { return &___lang_12; }
	inline void set_lang_12(String_t* value)
	{
		___lang_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lang_12), (void*)value);
	}

	inline static int32_t get_offset_of_app_name_13() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___app_name_13)); }
	inline String_t* get_app_name_13() const { return ___app_name_13; }
	inline String_t** get_address_of_app_name_13() { return &___app_name_13; }
	inline void set_app_name_13(String_t* value)
	{
		___app_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_app_install_mode_14() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___app_install_mode_14)); }
	inline String_t* get_app_install_mode_14() const { return ___app_install_mode_14; }
	inline String_t** get_address_of_app_install_mode_14() { return &___app_install_mode_14; }
	inline void set_app_install_mode_14(String_t* value)
	{
		___app_install_mode_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_install_mode_14), (void*)value);
	}

	inline static int32_t get_offset_of_app_install_store_15() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___app_install_store_15)); }
	inline String_t* get_app_install_store_15() const { return ___app_install_store_15; }
	inline String_t** get_address_of_app_install_store_15() { return &___app_install_store_15; }
	inline void set_app_install_store_15(String_t* value)
	{
		___app_install_store_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_install_store_15), (void*)value);
	}

	inline static int32_t get_offset_of_gfx_device_id_16() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_device_id_16)); }
	inline int32_t get_gfx_device_id_16() const { return ___gfx_device_id_16; }
	inline int32_t* get_address_of_gfx_device_id_16() { return &___gfx_device_id_16; }
	inline void set_gfx_device_id_16(int32_t value)
	{
		___gfx_device_id_16 = value;
	}

	inline static int32_t get_offset_of_gfx_device_vendor_id_17() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_device_vendor_id_17)); }
	inline int32_t get_gfx_device_vendor_id_17() const { return ___gfx_device_vendor_id_17; }
	inline int32_t* get_address_of_gfx_device_vendor_id_17() { return &___gfx_device_vendor_id_17; }
	inline void set_gfx_device_vendor_id_17(int32_t value)
	{
		___gfx_device_vendor_id_17 = value;
	}

	inline static int32_t get_offset_of_gfx_name_18() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_name_18)); }
	inline String_t* get_gfx_name_18() const { return ___gfx_name_18; }
	inline String_t** get_address_of_gfx_name_18() { return &___gfx_name_18; }
	inline void set_gfx_name_18(String_t* value)
	{
		___gfx_name_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gfx_name_18), (void*)value);
	}

	inline static int32_t get_offset_of_gfx_vendor_19() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_vendor_19)); }
	inline String_t* get_gfx_vendor_19() const { return ___gfx_vendor_19; }
	inline String_t** get_address_of_gfx_vendor_19() { return &___gfx_vendor_19; }
	inline void set_gfx_vendor_19(String_t* value)
	{
		___gfx_vendor_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gfx_vendor_19), (void*)value);
	}

	inline static int32_t get_offset_of_gfx_ver_20() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_ver_20)); }
	inline String_t* get_gfx_ver_20() const { return ___gfx_ver_20; }
	inline String_t** get_address_of_gfx_ver_20() { return &___gfx_ver_20; }
	inline void set_gfx_ver_20(String_t* value)
	{
		___gfx_ver_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gfx_ver_20), (void*)value);
	}

	inline static int32_t get_offset_of_gfx_shader_21() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___gfx_shader_21)); }
	inline int32_t get_gfx_shader_21() const { return ___gfx_shader_21; }
	inline int32_t* get_address_of_gfx_shader_21() { return &___gfx_shader_21; }
	inline void set_gfx_shader_21(int32_t value)
	{
		___gfx_shader_21 = value;
	}

	inline static int32_t get_offset_of_max_texture_size_22() { return static_cast<int32_t>(offsetof(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF, ___max_texture_size_22)); }
	inline int32_t get_max_texture_size_22() const { return ___max_texture_size_22; }
	inline int32_t* get_address_of_max_texture_size_22() { return &___max_texture_size_22; }
	inline void set_max_texture_size_22(int32_t value)
	{
		___max_texture_size_22 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.RemoteConfig.RCUnityWebRequest
struct RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Unity.RemoteConfig.RCUnityWebRequest::<_unityWebRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3C_unityWebRequestU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3C_unityWebRequestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D, ___U3C_unityWebRequestU3Ek__BackingField_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3C_unityWebRequestU3Ek__BackingField_0() const { return ___U3C_unityWebRequestU3Ek__BackingField_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3C_unityWebRequestU3Ek__BackingField_0() { return &___U3C_unityWebRequestU3Ek__BackingField_0; }
	inline void set_U3C_unityWebRequestU3Ek__BackingField_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3C_unityWebRequestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_unityWebRequestU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6  : public RuntimeObject
{
public:
	// Unity.RemoteConfig.ConfigManagerImpl Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0::<>4__this
	ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * ___U3CU3E4__this_0;
	// Unity.RemoteConfig.RCUnityWebRequest Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0::request
	RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * ___request_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6, ___U3CU3E4__this_0)); }
	inline ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_request_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6, ___request_1)); }
	inline RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * get_request_1() const { return ___request_1; }
	inline RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D ** get_address_of_request_1() { return &___request_1; }
	inline void set_request_1(RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * value)
	{
		___request_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_1), (void*)value);
	}
};


// Unity.RemoteConfig.RuntimeConfig/<>c
struct U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields
{
public:
	// Unity.RemoteConfig.RuntimeConfig/<>c Unity.RemoteConfig.RuntimeConfig/<>c::<>9
	U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String> Unity.RemoteConfig.RuntimeConfig/<>c::<>9__22_0
	Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * ___U3CU3E9__22_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Func`1<Newtonsoft.Json.Linq.JObject>>
struct Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4, ___list_0)); }
	inline List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * get_list_0() const { return ___list_0; }
	inline List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4, ___current_3)); }
	inline Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * get_current_3() const { return ___current_3; }
	inline Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>
struct Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D, ___list_0)); }
	inline List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * get_list_0() const { return ___list_0; }
	inline List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D, ___current_3)); }
	inline Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * get_current_3() const { return ___current_3; }
	inline Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>
struct Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD724FE72058FE2137255714779B872045A0664DC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168, ___list_0)); }
	inline List_1_tD724FE72058FE2137255714779B872045A0664DC * get_list_0() const { return ___list_0; }
	inline List_1_tD724FE72058FE2137255714779B872045A0664DC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD724FE72058FE2137255714779B872045A0664DC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168, ___current_3)); }
	inline Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * get_current_3() const { return ___current_3; }
	inline Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.RemoteConfig.Common
struct Common_t3F74EA472666122920F0BD23555B4F141EC00B63 
{
public:
	// System.String Unity.RemoteConfig.Common::appid
	String_t* ___appid_0;
	// System.String Unity.RemoteConfig.Common::userid
	String_t* ___userid_1;
	// System.Int64 Unity.RemoteConfig.Common::sessionid
	int64_t ___sessionid_2;
	// System.Int64 Unity.RemoteConfig.Common::session_count
	int64_t ___session_count_3;
	// System.String Unity.RemoteConfig.Common::platform
	String_t* ___platform_4;
	// System.Int32 Unity.RemoteConfig.Common::platform_id
	int32_t ___platform_id_5;
	// System.String Unity.RemoteConfig.Common::sdk_ver
	String_t* ___sdk_ver_6;
	// System.Boolean Unity.RemoteConfig.Common::debug_device
	bool ___debug_device_7;
	// System.String Unity.RemoteConfig.Common::device_id
	String_t* ___device_id_8;

public:
	inline static int32_t get_offset_of_appid_0() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___appid_0)); }
	inline String_t* get_appid_0() const { return ___appid_0; }
	inline String_t** get_address_of_appid_0() { return &___appid_0; }
	inline void set_appid_0(String_t* value)
	{
		___appid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appid_0), (void*)value);
	}

	inline static int32_t get_offset_of_userid_1() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___userid_1)); }
	inline String_t* get_userid_1() const { return ___userid_1; }
	inline String_t** get_address_of_userid_1() { return &___userid_1; }
	inline void set_userid_1(String_t* value)
	{
		___userid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userid_1), (void*)value);
	}

	inline static int32_t get_offset_of_sessionid_2() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___sessionid_2)); }
	inline int64_t get_sessionid_2() const { return ___sessionid_2; }
	inline int64_t* get_address_of_sessionid_2() { return &___sessionid_2; }
	inline void set_sessionid_2(int64_t value)
	{
		___sessionid_2 = value;
	}

	inline static int32_t get_offset_of_session_count_3() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___session_count_3)); }
	inline int64_t get_session_count_3() const { return ___session_count_3; }
	inline int64_t* get_address_of_session_count_3() { return &___session_count_3; }
	inline void set_session_count_3(int64_t value)
	{
		___session_count_3 = value;
	}

	inline static int32_t get_offset_of_platform_4() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___platform_4)); }
	inline String_t* get_platform_4() const { return ___platform_4; }
	inline String_t** get_address_of_platform_4() { return &___platform_4; }
	inline void set_platform_4(String_t* value)
	{
		___platform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_4), (void*)value);
	}

	inline static int32_t get_offset_of_platform_id_5() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___platform_id_5)); }
	inline int32_t get_platform_id_5() const { return ___platform_id_5; }
	inline int32_t* get_address_of_platform_id_5() { return &___platform_id_5; }
	inline void set_platform_id_5(int32_t value)
	{
		___platform_id_5 = value;
	}

	inline static int32_t get_offset_of_sdk_ver_6() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___sdk_ver_6)); }
	inline String_t* get_sdk_ver_6() const { return ___sdk_ver_6; }
	inline String_t** get_address_of_sdk_ver_6() { return &___sdk_ver_6; }
	inline void set_sdk_ver_6(String_t* value)
	{
		___sdk_ver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdk_ver_6), (void*)value);
	}

	inline static int32_t get_offset_of_debug_device_7() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___debug_device_7)); }
	inline bool get_debug_device_7() const { return ___debug_device_7; }
	inline bool* get_address_of_debug_device_7() { return &___debug_device_7; }
	inline void set_debug_device_7(bool value)
	{
		___debug_device_7 = value;
	}

	inline static int32_t get_offset_of_device_id_8() { return static_cast<int32_t>(offsetof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63, ___device_id_8)); }
	inline String_t* get_device_id_8() const { return ___device_id_8; }
	inline String_t** get_address_of_device_id_8() { return &___device_id_8; }
	inline void set_device_id_8(String_t* value)
	{
		___device_id_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_id_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.RemoteConfig.Common
struct Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_pinvoke
{
	char* ___appid_0;
	char* ___userid_1;
	int64_t ___sessionid_2;
	int64_t ___session_count_3;
	char* ___platform_4;
	int32_t ___platform_id_5;
	char* ___sdk_ver_6;
	int32_t ___debug_device_7;
	char* ___device_id_8;
};
// Native definition for COM marshalling of Unity.RemoteConfig.Common
struct Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_com
{
	Il2CppChar* ___appid_0;
	Il2CppChar* ___userid_1;
	int64_t ___sessionid_2;
	int64_t ___session_count_3;
	Il2CppChar* ___platform_4;
	int32_t ___platform_id_5;
	Il2CppChar* ___sdk_ver_6;
	int32_t ___debug_device_7;
	Il2CppChar* ___device_id_8;
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Unity.RemoteConfig.Delivery
struct Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A 
{
public:
	// System.String Unity.RemoteConfig.Delivery::customUserId
	String_t* ___customUserId_0;
	// System.String Unity.RemoteConfig.Delivery::environmentId
	String_t* ___environmentId_1;
	// System.String Unity.RemoteConfig.Delivery::packageVersion
	String_t* ___packageVersion_2;
	// System.String Unity.RemoteConfig.Delivery::originService
	String_t* ___originService_3;
	// Newtonsoft.Json.Linq.JObject Unity.RemoteConfig.Delivery::attributionMetadata
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___attributionMetadata_4;

public:
	inline static int32_t get_offset_of_customUserId_0() { return static_cast<int32_t>(offsetof(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A, ___customUserId_0)); }
	inline String_t* get_customUserId_0() const { return ___customUserId_0; }
	inline String_t** get_address_of_customUserId_0() { return &___customUserId_0; }
	inline void set_customUserId_0(String_t* value)
	{
		___customUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_environmentId_1() { return static_cast<int32_t>(offsetof(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A, ___environmentId_1)); }
	inline String_t* get_environmentId_1() const { return ___environmentId_1; }
	inline String_t** get_address_of_environmentId_1() { return &___environmentId_1; }
	inline void set_environmentId_1(String_t* value)
	{
		___environmentId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environmentId_1), (void*)value);
	}

	inline static int32_t get_offset_of_packageVersion_2() { return static_cast<int32_t>(offsetof(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A, ___packageVersion_2)); }
	inline String_t* get_packageVersion_2() const { return ___packageVersion_2; }
	inline String_t** get_address_of_packageVersion_2() { return &___packageVersion_2; }
	inline void set_packageVersion_2(String_t* value)
	{
		___packageVersion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageVersion_2), (void*)value);
	}

	inline static int32_t get_offset_of_originService_3() { return static_cast<int32_t>(offsetof(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A, ___originService_3)); }
	inline String_t* get_originService_3() const { return ___originService_3; }
	inline String_t** get_address_of_originService_3() { return &___originService_3; }
	inline void set_originService_3(String_t* value)
	{
		___originService_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originService_3), (void*)value);
	}

	inline static int32_t get_offset_of_attributionMetadata_4() { return static_cast<int32_t>(offsetof(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A, ___attributionMetadata_4)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_attributionMetadata_4() const { return ___attributionMetadata_4; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_attributionMetadata_4() { return &___attributionMetadata_4; }
	inline void set_attributionMetadata_4(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___attributionMetadata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributionMetadata_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.RemoteConfig.Delivery
struct Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_pinvoke
{
	char* ___customUserId_0;
	char* ___environmentId_1;
	char* ___packageVersion_2;
	char* ___originService_3;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___attributionMetadata_4;
};
// Native definition for COM marshalling of Unity.RemoteConfig.Delivery
struct Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_com
{
	Il2CppChar* ___customUserId_0;
	Il2CppChar* ___environmentId_1;
	Il2CppChar* ___packageVersion_2;
	Il2CppChar* ___originService_3;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___attributionMetadata_4;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// Unity.RemoteConfig.RequestHeaderTuple
struct RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A 
{
public:
	// System.String Unity.RemoteConfig.RequestHeaderTuple::key
	String_t* ___key_0;
	// System.String Unity.RemoteConfig.RequestHeaderTuple::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.RemoteConfig.RequestHeaderTuple
struct RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_pinvoke
{
	char* ___key_0;
	char* ___value_1;
};
// Native definition for COM marshalling of Unity.RemoteConfig.RequestHeaderTuple
struct RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar* ___value_1;
};

// UnityEngine.Resolution
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ApplicationInstallMode
struct ApplicationInstallMode_t77C8EDBEF9103607127666333B859D1DBDD2EA75 
{
public:
	// System.Int32 UnityEngine.ApplicationInstallMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApplicationInstallMode_t77C8EDBEF9103607127666333B859D1DBDD2EA75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ApplicationSandboxType
struct ApplicationSandboxType_tF86E47C0157D0AAD8ED8A43675410CED1C76207F 
{
public:
	// System.Int32 UnityEngine.ApplicationSandboxType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApplicationSandboxType_tF86E47C0157D0AAD8ED8A43675410CED1C76207F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.RemoteConfig.ConfigOrigin
struct ConfigOrigin_tABC56D953D4B43082784FC610F3AF0DC3EED8A8F 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigOrigin_tABC56D953D4B43082784FC610F3AF0DC3EED8A8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.RemoteConfig.ConfigRequestStatus
struct ConfigRequestStatus_tD78166B7003EF05887C10F76D3E2907572E9A6E9 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigRequestStatus_tD78166B7003EF05887C10F76D3E2907572E9A6E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_t936AB529ED1CF5420199A4048C49780F1C148A0A 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_t936AB529ED1CF5420199A4048C49780F1C148A0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t171B66EC67B4D43985C6B45D2A5894C661316735 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t171B66EC67B4D43985C6B45D2A5894C661316735, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t27AD1889475040BC780E7FA7F13A37FBC638CA2F 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t27AD1889475040BC780E7FA7F13A37FBC638CA2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t93AD981B1E14E6EDFE0A3FEB1FA9D84BEE52CAD3 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t93AD981B1E14E6EDFE0A3FEB1FA9D84BEE52CAD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t8C0F4C0B53CD53E979CCC30500D5E226619A2C1F 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t8C0F4C0B53CD53E979CCC30500D5E226619A2C1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t4BF076992036A2F32CEA395615368F6CB674CEAB 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t4BF076992036A2F32CEA395615368F6CB674CEAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t6F19B08179C74C754E906BF62B59158DDB367367 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t6F19B08179C74C754E906BF62B59158DDB367367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tC48D8CA3A6D725EDA6C7C1829BD2DFF87EB109D4 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tC48D8CA3A6D725EDA6C7C1829BD2DFF87EB109D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_18)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * ____content_18;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_19;

public:
	inline static int32_t get_offset_of__content_18() { return static_cast<int32_t>(offsetof(JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5, ____content_18)); }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * get__content_18() const { return ____content_18; }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 ** get_address_of__content_18() { return &____content_18; }
	inline void set__content_18(JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * value)
	{
		____content_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_18), (void*)value);
	}

	inline static int32_t get_offset_of__name_19() { return static_cast<int32_t>(offsetof(JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5, ____name_19)); }
	inline String_t* get__name_19() const { return ____name_19; }
	inline String_t** get_address_of__name_19() { return &____name_19; }
	inline void set__name_19(String_t* value)
	{
		____name_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_19), (void*)value);
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_t73F7BE7C60C802285FC2AC49314C26BC26BF770E 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_t73F7BE7C60C802285FC2AC49314C26BC26BF770E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_t5400D6B74412E3171D7A1BB6D6493907BA9B234A 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t5400D6B74412E3171D7A1BB6D6493907BA9B234A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t6E78D075517457213329ADA45589150FAF5DDA82 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t6E78D075517457213329ADA45589150FAF5DDA82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t9A8DEC546FF320F7CD2A9B2D6A6E4C46B70720A3 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t9A8DEC546FF320F7CD2A9B2D6A6E4C46B70720A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t5DFA7D8E4705E2F08D1A56DDFFC28644A2EBB4D0 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t5DFA7D8E4705E2F08D1A56DDFFC28644A2EBB4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t86A953E12C98CC222AEE20C44996424CBE266D89 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t86A953E12C98CC222AEE20C44996424CBE266D89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t2AC40F5E70DC7577F288BB2C84B13F2C11F76F58 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t2AC40F5E70DC7577F288BB2C84B13F2C11F76F58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// UnityEngine.SystemLanguage
struct SystemLanguage_tF8A9C86102588DE9A5041719609C2693D283B3A6 
{
public:
	// System.Int32 UnityEngine.SystemLanguage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemLanguage_tF8A9C86102588DE9A5041719609C2693D283B3A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_t68DA4F0AA3281A2CF348C1348AD52F298FEAE7CE 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameAssemblyFormatHandling_t68DA4F0AA3281A2CF348C1348AD52F298FEAE7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t7D26906BA4ED9E93294CDA393052F3C7989C3405 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t7D26906BA4ED9E93294CDA393052F3C7989C3405, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.RemoteConfig.ConfigManagerImpl
struct ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249  : public RuntimeObject
{
public:
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManagerImpl::<requestStatus>k__BackingField
	int32_t ___U3CrequestStatusU3Ek__BackingField_0;
	// System.Action`1<Unity.RemoteConfig.ConfigResponse> Unity.RemoteConfig.ConfigManagerImpl::FetchCompleted
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___FetchCompleted_1;
	// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManagerImpl::<appConfig>k__BackingField
	RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___U3CappConfigU3Ek__BackingField_2;
	// Unity.RemoteConfig.Delivery Unity.RemoteConfig.ConfigManagerImpl::deliveryPayload
	Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A  ___deliveryPayload_3;
	// Unity.RemoteConfig.Common Unity.RemoteConfig.ConfigManagerImpl::commonPayload
	Common_t3F74EA472666122920F0BD23555B4F141EC00B63  ___commonPayload_4;
	// Unity.RemoteConfig.DeviceInfo Unity.RemoteConfig.ConfigManagerImpl::deviceInfoPayload
	DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * ___deviceInfoPayload_5;
	// System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject> Unity.RemoteConfig.ConfigManagerImpl::ResponseParsed
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * ___ResponseParsed_6;
	// System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> Unity.RemoteConfig.ConfigManagerImpl::RawResponseReturned
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___RawResponseReturned_7;
	// System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> Unity.RemoteConfig.ConfigManagerImpl::RawResponseValidated
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___RawResponseValidated_8;
	// System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>> Unity.RemoteConfig.ConfigManagerImpl::requestPayloadProviders
	List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * ___requestPayloadProviders_9;
	// System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>> Unity.RemoteConfig.ConfigManagerImpl::requestHeaderProviders
	List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * ___requestHeaderProviders_10;
	// System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>> Unity.RemoteConfig.ConfigManagerImpl::rawResponseValidators
	List_1_tD724FE72058FE2137255714779B872045A0664DC * ___rawResponseValidators_11;
	// System.String Unity.RemoteConfig.ConfigManagerImpl::cacheFile
	String_t* ___cacheFile_12;
	// System.String Unity.RemoteConfig.ConfigManagerImpl::cacheHeadersFile
	String_t* ___cacheHeadersFile_13;

public:
	inline static int32_t get_offset_of_U3CrequestStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___U3CrequestStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CrequestStatusU3Ek__BackingField_0() const { return ___U3CrequestStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrequestStatusU3Ek__BackingField_0() { return &___U3CrequestStatusU3Ek__BackingField_0; }
	inline void set_U3CrequestStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CrequestStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_FetchCompleted_1() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___FetchCompleted_1)); }
	inline Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * get_FetchCompleted_1() const { return ___FetchCompleted_1; }
	inline Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 ** get_address_of_FetchCompleted_1() { return &___FetchCompleted_1; }
	inline void set_FetchCompleted_1(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * value)
	{
		___FetchCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchCompleted_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappConfigU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___U3CappConfigU3Ek__BackingField_2)); }
	inline RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * get_U3CappConfigU3Ek__BackingField_2() const { return ___U3CappConfigU3Ek__BackingField_2; }
	inline RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C ** get_address_of_U3CappConfigU3Ek__BackingField_2() { return &___U3CappConfigU3Ek__BackingField_2; }
	inline void set_U3CappConfigU3Ek__BackingField_2(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * value)
	{
		___U3CappConfigU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappConfigU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_deliveryPayload_3() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___deliveryPayload_3)); }
	inline Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A  get_deliveryPayload_3() const { return ___deliveryPayload_3; }
	inline Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A * get_address_of_deliveryPayload_3() { return &___deliveryPayload_3; }
	inline void set_deliveryPayload_3(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A  value)
	{
		___deliveryPayload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_3))->___customUserId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_3))->___environmentId_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_3))->___packageVersion_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_3))->___originService_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_3))->___attributionMetadata_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_commonPayload_4() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___commonPayload_4)); }
	inline Common_t3F74EA472666122920F0BD23555B4F141EC00B63  get_commonPayload_4() const { return ___commonPayload_4; }
	inline Common_t3F74EA472666122920F0BD23555B4F141EC00B63 * get_address_of_commonPayload_4() { return &___commonPayload_4; }
	inline void set_commonPayload_4(Common_t3F74EA472666122920F0BD23555B4F141EC00B63  value)
	{
		___commonPayload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___commonPayload_4))->___appid_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___commonPayload_4))->___userid_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___commonPayload_4))->___platform_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___commonPayload_4))->___sdk_ver_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___commonPayload_4))->___device_id_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_deviceInfoPayload_5() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___deviceInfoPayload_5)); }
	inline DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * get_deviceInfoPayload_5() const { return ___deviceInfoPayload_5; }
	inline DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF ** get_address_of_deviceInfoPayload_5() { return &___deviceInfoPayload_5; }
	inline void set_deviceInfoPayload_5(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * value)
	{
		___deviceInfoPayload_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceInfoPayload_5), (void*)value);
	}

	inline static int32_t get_offset_of_ResponseParsed_6() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___ResponseParsed_6)); }
	inline Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * get_ResponseParsed_6() const { return ___ResponseParsed_6; }
	inline Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 ** get_address_of_ResponseParsed_6() { return &___ResponseParsed_6; }
	inline void set_ResponseParsed_6(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * value)
	{
		___ResponseParsed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResponseParsed_6), (void*)value);
	}

	inline static int32_t get_offset_of_RawResponseReturned_7() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___RawResponseReturned_7)); }
	inline Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * get_RawResponseReturned_7() const { return ___RawResponseReturned_7; }
	inline Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** get_address_of_RawResponseReturned_7() { return &___RawResponseReturned_7; }
	inline void set_RawResponseReturned_7(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * value)
	{
		___RawResponseReturned_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawResponseReturned_7), (void*)value);
	}

	inline static int32_t get_offset_of_RawResponseValidated_8() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___RawResponseValidated_8)); }
	inline Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * get_RawResponseValidated_8() const { return ___RawResponseValidated_8; }
	inline Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** get_address_of_RawResponseValidated_8() { return &___RawResponseValidated_8; }
	inline void set_RawResponseValidated_8(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * value)
	{
		___RawResponseValidated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawResponseValidated_8), (void*)value);
	}

	inline static int32_t get_offset_of_requestPayloadProviders_9() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___requestPayloadProviders_9)); }
	inline List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * get_requestPayloadProviders_9() const { return ___requestPayloadProviders_9; }
	inline List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 ** get_address_of_requestPayloadProviders_9() { return &___requestPayloadProviders_9; }
	inline void set_requestPayloadProviders_9(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * value)
	{
		___requestPayloadProviders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestPayloadProviders_9), (void*)value);
	}

	inline static int32_t get_offset_of_requestHeaderProviders_10() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___requestHeaderProviders_10)); }
	inline List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * get_requestHeaderProviders_10() const { return ___requestHeaderProviders_10; }
	inline List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A ** get_address_of_requestHeaderProviders_10() { return &___requestHeaderProviders_10; }
	inline void set_requestHeaderProviders_10(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * value)
	{
		___requestHeaderProviders_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestHeaderProviders_10), (void*)value);
	}

	inline static int32_t get_offset_of_rawResponseValidators_11() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___rawResponseValidators_11)); }
	inline List_1_tD724FE72058FE2137255714779B872045A0664DC * get_rawResponseValidators_11() const { return ___rawResponseValidators_11; }
	inline List_1_tD724FE72058FE2137255714779B872045A0664DC ** get_address_of_rawResponseValidators_11() { return &___rawResponseValidators_11; }
	inline void set_rawResponseValidators_11(List_1_tD724FE72058FE2137255714779B872045A0664DC * value)
	{
		___rawResponseValidators_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawResponseValidators_11), (void*)value);
	}

	inline static int32_t get_offset_of_cacheFile_12() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___cacheFile_12)); }
	inline String_t* get_cacheFile_12() const { return ___cacheFile_12; }
	inline String_t** get_address_of_cacheFile_12() { return &___cacheFile_12; }
	inline void set_cacheFile_12(String_t* value)
	{
		___cacheFile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheFile_12), (void*)value);
	}

	inline static int32_t get_offset_of_cacheHeadersFile_13() { return static_cast<int32_t>(offsetof(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249, ___cacheHeadersFile_13)); }
	inline String_t* get_cacheHeadersFile_13() const { return ___cacheHeadersFile_13; }
	inline String_t** get_address_of_cacheHeadersFile_13() { return &___cacheHeadersFile_13; }
	inline void set_cacheHeadersFile_13(String_t* value)
	{
		___cacheHeadersFile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheHeadersFile_13), (void*)value);
	}
};


// Unity.RemoteConfig.ConfigResponse
struct ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.ConfigResponse::requestOrigin
	int32_t ___requestOrigin_0;
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigResponse::status
	int32_t ___status_1;

public:
	inline static int32_t get_offset_of_requestOrigin_0() { return static_cast<int32_t>(offsetof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5, ___requestOrigin_0)); }
	inline int32_t get_requestOrigin_0() const { return ___requestOrigin_0; }
	inline int32_t* get_address_of_requestOrigin_0() { return &___requestOrigin_0; }
	inline void set_requestOrigin_0(int32_t value)
	{
		___requestOrigin_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5, ___status_1)); }
	inline int32_t get_status_1() const { return ___status_1; }
	inline int32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(int32_t value)
	{
		___status_1 = value;
	}
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_9)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.RemoteConfig.RuntimeConfig
struct RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C  : public RuntimeObject
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.RuntimeConfig::<origin>k__BackingField
	int32_t ___U3CoriginU3Ek__BackingField_0;
	// Newtonsoft.Json.Linq.JObject Unity.RemoteConfig.RuntimeConfig::_config
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ____config_1;
	// Newtonsoft.Json.Linq.JObject Unity.RemoteConfig.RuntimeConfig::metadata
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___metadata_2;
	// System.String Unity.RemoteConfig.RuntimeConfig::configKey
	String_t* ___configKey_3;
	// Newtonsoft.Json.JsonSerializerSettings Unity.RemoteConfig.RuntimeConfig::rawDateSettings
	JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * ___rawDateSettings_4;

public:
	inline static int32_t get_offset_of_U3CoriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___U3CoriginU3Ek__BackingField_0)); }
	inline int32_t get_U3CoriginU3Ek__BackingField_0() const { return ___U3CoriginU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CoriginU3Ek__BackingField_0() { return &___U3CoriginU3Ek__BackingField_0; }
	inline void set_U3CoriginU3Ek__BackingField_0(int32_t value)
	{
		___U3CoriginU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__config_1() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ____config_1)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get__config_1() const { return ____config_1; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of__config_1() { return &____config_1; }
	inline void set__config_1(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		____config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_1), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_2() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___metadata_2)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_metadata_2() const { return ___metadata_2; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_metadata_2() { return &___metadata_2; }
	inline void set_metadata_2(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_2), (void*)value);
	}

	inline static int32_t get_offset_of_configKey_3() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___configKey_3)); }
	inline String_t* get_configKey_3() const { return ___configKey_3; }
	inline String_t** get_address_of_configKey_3() { return &___configKey_3; }
	inline void set_configKey_3(String_t* value)
	{
		___configKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_rawDateSettings_4() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___rawDateSettings_4)); }
	inline JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * get_rawDateSettings_4() const { return ___rawDateSettings_4; }
	inline JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D ** get_address_of_rawDateSettings_4() { return &___rawDateSettings_4; }
	inline void set_rawDateSettings_4(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * value)
	{
		___rawDateSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawDateSettings_4), (void*)value);
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>
struct Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>
struct Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Newtonsoft.Json.Linq.JObject>
struct Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>
struct Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>
struct Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___value_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_value_0() const { return ___value_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  ____typeNameAssemblyFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____formatting_2)); }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41 * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatHandling_3)); }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateParseHandling_5)); }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187 * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____floatFormatHandling_6)); }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87 * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____floatParseHandling_7)); }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____stringEscapeHandling_8)); }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61 * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____culture_9)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____checkAdditionalContent_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____maxDepth_11)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____typeNameAssemblyFormatHandling_15)); }
	inline Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  get__typeNameAssemblyFormatHandling_15() const { return ____typeNameAssemblyFormatHandling_15; }
	inline Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18 * get_address_of__typeNameAssemblyFormatHandling_15() { return &____typeNameAssemblyFormatHandling_15; }
	inline void set__typeNameAssemblyFormatHandling_15(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  value)
	{
		____typeNameAssemblyFormatHandling_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____defaultValueHandling_16)); }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____preserveReferencesHandling_17)); }
	inline Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864 * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____nullValueHandling_18)); }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____objectCreationHandling_19)); }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2 * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____missingMemberHandling_20)); }
	inline Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____referenceLoopHandling_21)); }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____context_22)); }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  get__context_22() const { return ____context_22; }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____constructorHandling_23)); }
	inline Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____typeNameHandling_24)); }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CSerializationBinderU3Ek__BackingField_31)); }
	inline RuntimeObject* get_U3CSerializationBinderU3Ek__BackingField_31() const { return ___U3CSerializationBinderU3Ek__BackingField_31; }
	inline RuntimeObject** get_address_of_U3CSerializationBinderU3Ek__BackingField_31() { return &___U3CSerializationBinderU3Ek__BackingField_31; }
	inline void set_U3CSerializationBinderU3Ek__BackingField_31(RuntimeObject* value)
	{
		___U3CSerializationBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializationBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32Enum,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m318B786CA84DAE4438404C015133ECB181A6C97B_gshared (Action_3_tF3327E23BC80E3B62367FC5B207188F92B71A6D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Object,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_Invoke_m595F17FFD8BCC35778C13ED1226B1F04EC6520A3_gshared (Func_3_tBC640C0184A7D93453034EF9B044E2AD7570F889 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_gshared (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32Enum,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_mFF340ACC76D95E48AC9AFE58758DAF5E5A5F8827_gshared (Action_3_tF3327E23BC80E3B62367FC5B207188F92B71A6D3 * __this, int32_t ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// System.Void System.Action`2<Unity.RemoteConfig.ConfigResponse,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m935C53C15C4581B424CF3F1DB9D1C41199CD6C4F_gshared (Action_2_tA77015062E4AB7CCFEB6B8C8ABF1103D2098576A * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::ToNewlineDelimitedJson<System.Object>(System.IO.TextWriter,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_ToNewlineDelimitedJson_TisRuntimeObject_m72B15AE24A597ACB4A41D6BC28703136B61229F0_gshared (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___textWriter0, RuntimeObject* ___items1, const RuntimeMethod* method);
// !0 System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5_gshared (Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<Unity.RemoteConfig.ConfigResponse,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mA7AFACB357888B150152311DC169BDEF48E197D5_gshared (Action_2_tA77015062E4AB7CCFEB6B8C8ABF1103D2098576A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_FetchCompleted_mD02A9A0BDEBA8A62F8EC2E1D09823A3236E2D5B7 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::remove_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_remove_FetchCompleted_m7DB3BCB005E5012CC422531B2E45240ED900DFA7 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method);
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManagerImpl::get_appConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManagerImpl_get_appConfig_mC19E6779139EF09771E595D3845E1EFA4FD882D2_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl__ctor_m7F2A7B79EDBB08BFB6DCAF905E4061939B34C23B (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, String_t* ___originService0, String_t* ___attributionMetadataStr1, String_t* ___cacheFileRC2, String_t* ___cacheHeadersFileRC3, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>>::.ctor()
inline void List_1__ctor_m82016AF852A5E3A67C6DC947A258B4937846EB51 (List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>::.ctor()
inline void List_1__ctor_m95935A8A2618B9BB327BDBAEFA9C51195BB082FA (List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>::.ctor()
inline void List_1__ctor_mCD805227094A6688F40365E2C3ED24112A18A89D (List_1_tD724FE72058FE2137255714779B872045A0664DC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD724FE72058FE2137255714779B872045A0664DC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(Unity.RemoteConfig.ConfigManagerImpl,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mDE17AB3B8CAA70AB52BB130150EA7F68AF162B7A (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * ____configmanagerImpl0, String_t* ___configKey1, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_appConfig_m7868406138C7BBD693E1F35CB26B1FC0E599FA81_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21 (String_t* ___json0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D (const RuntimeMethod* method);
// System.String UnityEngine.Analytics.AnalyticsSessionInfo::get_userId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsSessionInfo_get_userId_mBFF8929840DEA78DE52F5C9DF109EBAE686E39C7 (const RuntimeMethod* method);
// System.Int64 UnityEngine.Analytics.AnalyticsSessionInfo::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AnalyticsSessionInfo_get_sessionId_mEC7693B506475181EAF61503F82F033CCD020413 (const RuntimeMethod* method);
// System.Int64 UnityEngine.Analytics.AnalyticsSessionInfo::get_sessionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AnalyticsSessionInfo_get_sessionCount_m099DAC8FA17F30B2986FA0D51009995432BDA608 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E (const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.DeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfo__ctor_mB4721195EA871C34F3F2BDE2C6006158A05862ED (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39 (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m318B786CA84DAE4438404C015133ECB181A6C97B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_RawResponseReturned(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_RawResponseReturned_mF3286CD39216886057AD283CBD88F56B023AC1CA (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_RawResponseValidated(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_RawResponseValidated_m547298DDE3A59EFB708F641DA239071AB7F8C9A4 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::LoadFromCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>::GetEnumerator()
inline Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168  List_1_GetEnumerator_m905B6C216921943803E6671B442CD44B077940F3 (List_1_tD724FE72058FE2137255714779B872045A0664DC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168  (*) (List_1_tD724FE72058FE2137255714779B872045A0664DC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>::get_Current()
inline Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * Enumerator_get_Current_m4A0CD1E456E29AD0CA6E6240EBCACAF3E693B84F_inline (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 * __this, const RuntimeMethod* method)
{
	return ((  Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * (*) (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !2 System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_mDF50A5B6A28D8AD72FBA735310D51F0150AF795E (Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 *, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Func_3_Invoke_m595F17FFD8BCC35778C13ED1226B1F04EC6520A3_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
inline void Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 , const RuntimeMethod*))Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m141C9726234E4D864574D5F3A4A30175D83D1EB4 (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m8520F4F5685AF60376AB076982FC1BFC3153CB36 (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657 (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * __this, int32_t ___arg10, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *, int32_t, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Action_3_Invoke_mFF340ACC76D95E48AC9AFE58758DAF5E5A5F8827_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>::Invoke(!0,!1)
inline void Action_2_Invoke_mF4D95C2AE7FE23E093185F7835F751865A746016 (Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___arg10, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 , JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *, const RuntimeMethod*))Action_2_Invoke_m935C53C15C4581B424CF3F1DB9D1C41199CD6C4F_gshared)(__this, ___arg10, ___arg21, method);
}
// System.String Unity.RemoteConfig.ConfigManagerImpl::PreparePayload(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigManagerImpl_PreparePayload_m40910AE66C3AE28999C4794BC3C474D22D7C6882 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeObject * ___userAttributes0, RuntimeObject * ___appAttributes1, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::DoRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_DoRequest_mE8FBA2E3C6B452349CCEA6900F3FB7E01DBF97A6 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, String_t* ___jsonText0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void System.DateTimeOffset::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_mC17E28F89D4E54D511B30E08D1F56453E677D53F (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method);
// System.Int64 System.DateTimeOffset::ToUnixTimeMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeOffset_ToUnixTimeMilliseconds_mC53AF9F504753A615CB6CE358DFBD514BF78613F (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE (RuntimeObject * ___o0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JToken_op_Implicit_m0332752A7578DE8071A8D9C46E215C27D186B117 (int64_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JObject>::.ctor()
inline void List_1__ctor_mFEE17052808DF370DD4957A8DBE29CF2DFAB9ADA (List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JObject>::Add(!0)
inline void List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16 (List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 *, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// Newtonsoft.Json.Linq.JObject Unity.RemoteConfig.ConfigManagerImpl::CreatePayloadJObjectFromValuesJObject(Newtonsoft.Json.Linq.JObject,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___jObject0, String_t* ___type1, int64_t ___ts2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>>::GetEnumerator()
inline Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4  List_1_GetEnumerator_mC8BC4D37A3F78BA942538D619DC54BC657D911FA (List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4  (*) (List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Func`1<Newtonsoft.Json.Linq.JObject>>::get_Current()
inline Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * Enumerator_get_Current_mA20159170D8BC9ED57ADDE9EB512F118B1E9117A_inline (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 * __this, const RuntimeMethod* method)
{
	return ((  Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * (*) (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !0 System.Func`1<Newtonsoft.Json.Linq.JObject>::Invoke()
inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * Func_1_Invoke_m046B2B59C7D672A31510C3C966A958AE797E5CD2 (Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * __this, const RuntimeMethod* method)
{
	return ((  JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * (*) (Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Func`1<Newtonsoft.Json.Linq.JObject>>::MoveNext()
inline bool Enumerator_MoveNext_m62C0939A716739FF380F23FC2C91A4237B62B03F (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Func`1<Newtonsoft.Json.Linq.JObject>>::Dispose()
inline void Enumerator_Dispose_m2217028EDF13544C8BAE32A9FBCCC468F699501A (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManagerImpl::ToNewlineDelimitedJson<Newtonsoft.Json.Linq.JObject>(System.IO.TextWriter,System.Collections.Generic.IEnumerable`1<T>)
inline void ConfigManagerImpl_ToNewlineDelimitedJson_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_m030DD5857711349E17F18E975555582596DC01F8 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___textWriter0, RuntimeObject* ___items1, const RuntimeMethod* method)
{
	((  void (*) (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 *, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *, RuntimeObject*, const RuntimeMethod*))ConfigManagerImpl_ToNewlineDelimitedJson_TisRuntimeObject_m72B15AE24A597ACB4A41D6BC28703136B61229F0_gshared)(__this, ___textWriter0, ___items1, method);
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m197A66AB392091AE7A8BF08356A6C70B4B6FC92F (U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest__ctor_m142B368D818464241DA17BEE77B05444A0A99F65 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mEB08DBEBFA9AE178A79600564D0FCD77D8D25421 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_unityWebRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_unityWebRequest_mB6008FB8EC83908929123249AAFBC867EAFD72D0 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_url_m36D430EFA2A0FE0EA97DF3832F2CFAB57997DEA2 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_method_mC9D2CE45C6595B049A0E79901CAE2478FE2EEB8F (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_SetRequestHeader_m2F8DDBFF29DD5A8AA5714ED1099B73449E8AAA94 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_timeout_m0AB25AD212D705ED5248D6BDFA7DB3EFF1973A93 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>::GetEnumerator()
inline Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D  List_1_GetEnumerator_m810BFDA07D5DC2661476B31A4957001B630D5885 (List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D  (*) (List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>::get_Current()
inline Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * Enumerator_get_Current_m50FAFF918A842986B8254385749ED344D1899F4D_inline (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D * __this, const RuntimeMethod* method)
{
	return ((  Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * (*) (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !0 System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>::Invoke()
inline RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5 (Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * __this, const RuntimeMethod* method)
{
	return ((  RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  (*) (Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC *, const RuntimeMethod*))Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>::MoveNext()
inline bool Enumerator_MoveNext_m51FE26C4961CB107A7FE4956D6D8E28FA95CC417 (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>>::Dispose()
inline void Enumerator_Dispose_m262665E361CF27AA36FFCA4F7FD71E7F29893473 (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_uploadHandler_mBA786E9DDB9D226D36691C0DDF722B6B67DFF113 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_downloadHandler_mA7576B5307184E9C7EFBAA839A4B1110CED29ABF (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.RemoteConfig.RCUnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * RCUnityWebRequest_SendWebRequest_mE6340713A0479BC6E434AE8975EE4548821E177A (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6 (String_t* ___path0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.String)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared)(___value0, method);
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JToken_op_Implicit_m8635EF135576CFA467C5D8B29809E8DFCB0F6CC6 (String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_mF4A5701333A7EB228DDBEF6548200F204B58BEAF (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9 (const RuntimeMethod* method);
// UnityEngine.ApplicationSandboxType UnityEngine.Application::get_sandboxType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_sandboxType_m2C74BF5AFF0F88DE97C54383D712F65C64D6F08A (const RuntimeMethod* method);
// System.String Unity.RemoteConfig.DeviceInfo::GetDeviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_GetDeviceModel_m61446410425CA8C9A631F4A705881B4DFB37DE36 (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_mA84DD6B72682E1F078486D5D8CAF9CD6E4FB9C4D (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_processorFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorFrequency_m0310D22751362753B75552EBECAE2014D1D9E08D (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m40E0CFB6034F14C4FF249C0940CBEC3E7F167EF0 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m774717D305DC07B669D39485DEB4895500714E40 (const RuntimeMethod* method);
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  Screen_get_currentResolution_mE1A3C7E9603FA56B539FDDA1F602C66732EFD17B (const RuntimeMethod* method);
// System.String UnityEngine.Resolution::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resolution_ToString_m0F17D03CC087E67DAB7F8F383D86A9D5C3E2587B (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045 (const RuntimeMethod* method);
// System.String Unity.RemoteConfig.DeviceInfo::GetISOCodeFromLangStruct(UnityEngine.SystemLanguage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_GetISOCodeFromLangStruct_mABE39C14CC145E3AEF01417C524F5906FCA5F9B9 (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, int32_t ___systemLanguage0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m89EF09E9D76342F10C81D4F236C6D4CEFF2825BE (const RuntimeMethod* method);
// UnityEngine.ApplicationInstallMode UnityEngine.Application::get_installMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_installMode_mC84C2D2BCC86446F76EBD2BBBAD144BAC5CA4F2D (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_installerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_installerName_m9FC9B7E46BA8EE20C5CE79E91DAD187CDE8AC432 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceID_mF25513D7FC3A94705110FA00673BEC4D8F7E8218 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceVendorID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceVendorID_mC02AC12730B431B84FE0AA74A9F7FDDBA1EEEF40 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_m25563DB9012D2DB5EC4CB7A29BA4236926F93F33 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mA70A62E48AF223EA26B119B5428A5B488A4CA136 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_mA74AFB5D881DB29389D2BB05EB37DE60779BABD9 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977 (const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest Unity.RemoteConfig.RCUnityWebRequest::get__unityWebRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set__unityWebRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RCUnityWebRequest_set__unityWebRequest_m14880BD93291BB8D097A598BB21B0731ADB34227_inline (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m53ECCEB578642D4DEA4F22297AB5FEBF95AB6C5F (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_DateParseHandling(Newtonsoft.Json.DateParseHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_DateParseHandling_mA0D6B843E9CA222035E9D3674508D4B9C3D1D85D (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0F44352139715FC815071A594578E016F8EB621E (Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mA7AFACB357888B150152311DC169BDEF48E197D5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_ResponseParsed(System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_ResponseParsed_m7077923013FF9ED2E17FBB2756E9BF0C142FBD37 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared)(___value0, method);
}
// System.Boolean System.DateTime::TryParse(System.String,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_TryParse_m80676B92D2288E67796D792D3DC11E410C037B48 (String_t* ___s0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * ___result1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m9CDFD4212D2FD7A869DFBF995F8522B668E1691D (RuntimeObject * ___value0, JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * ___settings1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty> Newtonsoft.Json.Linq.JObject::Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JObject_Properties_mA31AEBC48D1DE4EBE7AEDCE2E77E1D4B951DF71B (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5641FD05A82FD0950094A6048DBD371E45498CDF (Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Newtonsoft.Json.Linq.JProperty,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisJProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_TisString_t_m81B31D4689EBDDB75A2523DC717067C204DAEA74 (RuntimeObject* ___source0, Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method);
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManagerImpl::get_requestStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigManagerImpl_get_requestStatus_m50D8C808D10FEEFF750CFE7BDD2C56C2E198608D_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.RemoteConfig.RCUnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * RCUnityWebRequest_GetResponseHeaders_m1C5124D111D02BA2021FAD5DDF3049B1382CD6C0 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler Unity.RemoteConfig.RCUnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * RCUnityWebRequest_get_downloadHandler_m8852F79EDEA13806B9C485D0CC5CF04266AC0908 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5050A49DA433ABD9C22DE74209898B2BA1D8C9C (U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mBCAD9B4CCB7370261E0F38A6C46A343BB7E7E347_inline (JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.RemoteConfig.Common
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_pinvoke(const Common_t3F74EA472666122920F0BD23555B4F141EC00B63& unmarshaled, Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_pinvoke& marshaled)
{
	marshaled.___appid_0 = il2cpp_codegen_marshal_string(unmarshaled.get_appid_0());
	marshaled.___userid_1 = il2cpp_codegen_marshal_string(unmarshaled.get_userid_1());
	marshaled.___sessionid_2 = unmarshaled.get_sessionid_2();
	marshaled.___session_count_3 = unmarshaled.get_session_count_3();
	marshaled.___platform_4 = il2cpp_codegen_marshal_string(unmarshaled.get_platform_4());
	marshaled.___platform_id_5 = unmarshaled.get_platform_id_5();
	marshaled.___sdk_ver_6 = il2cpp_codegen_marshal_string(unmarshaled.get_sdk_ver_6());
	marshaled.___debug_device_7 = static_cast<int32_t>(unmarshaled.get_debug_device_7());
	marshaled.___device_id_8 = il2cpp_codegen_marshal_string(unmarshaled.get_device_id_8());
}
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_pinvoke_back(const Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_pinvoke& marshaled, Common_t3F74EA472666122920F0BD23555B4F141EC00B63& unmarshaled)
{
	unmarshaled.set_appid_0(il2cpp_codegen_marshal_string_result(marshaled.___appid_0));
	unmarshaled.set_userid_1(il2cpp_codegen_marshal_string_result(marshaled.___userid_1));
	int64_t unmarshaled_sessionid_temp_2 = 0;
	unmarshaled_sessionid_temp_2 = marshaled.___sessionid_2;
	unmarshaled.set_sessionid_2(unmarshaled_sessionid_temp_2);
	int64_t unmarshaled_session_count_temp_3 = 0;
	unmarshaled_session_count_temp_3 = marshaled.___session_count_3;
	unmarshaled.set_session_count_3(unmarshaled_session_count_temp_3);
	unmarshaled.set_platform_4(il2cpp_codegen_marshal_string_result(marshaled.___platform_4));
	int32_t unmarshaled_platform_id_temp_5 = 0;
	unmarshaled_platform_id_temp_5 = marshaled.___platform_id_5;
	unmarshaled.set_platform_id_5(unmarshaled_platform_id_temp_5);
	unmarshaled.set_sdk_ver_6(il2cpp_codegen_marshal_string_result(marshaled.___sdk_ver_6));
	bool unmarshaled_debug_device_temp_7 = false;
	unmarshaled_debug_device_temp_7 = static_cast<bool>(marshaled.___debug_device_7);
	unmarshaled.set_debug_device_7(unmarshaled_debug_device_temp_7);
	unmarshaled.set_device_id_8(il2cpp_codegen_marshal_string_result(marshaled.___device_id_8));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.Common
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_pinvoke_cleanup(Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___appid_0);
	marshaled.___appid_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___userid_1);
	marshaled.___userid_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___platform_4);
	marshaled.___platform_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___sdk_ver_6);
	marshaled.___sdk_ver_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___device_id_8);
	marshaled.___device_id_8 = NULL;
}
// Conversion methods for marshalling of: Unity.RemoteConfig.Common
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_com(const Common_t3F74EA472666122920F0BD23555B4F141EC00B63& unmarshaled, Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_com& marshaled)
{
	marshaled.___appid_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_appid_0());
	marshaled.___userid_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_userid_1());
	marshaled.___sessionid_2 = unmarshaled.get_sessionid_2();
	marshaled.___session_count_3 = unmarshaled.get_session_count_3();
	marshaled.___platform_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_platform_4());
	marshaled.___platform_id_5 = unmarshaled.get_platform_id_5();
	marshaled.___sdk_ver_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_sdk_ver_6());
	marshaled.___debug_device_7 = static_cast<int32_t>(unmarshaled.get_debug_device_7());
	marshaled.___device_id_8 = il2cpp_codegen_marshal_bstring(unmarshaled.get_device_id_8());
}
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_com_back(const Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_com& marshaled, Common_t3F74EA472666122920F0BD23555B4F141EC00B63& unmarshaled)
{
	unmarshaled.set_appid_0(il2cpp_codegen_marshal_bstring_result(marshaled.___appid_0));
	unmarshaled.set_userid_1(il2cpp_codegen_marshal_bstring_result(marshaled.___userid_1));
	int64_t unmarshaled_sessionid_temp_2 = 0;
	unmarshaled_sessionid_temp_2 = marshaled.___sessionid_2;
	unmarshaled.set_sessionid_2(unmarshaled_sessionid_temp_2);
	int64_t unmarshaled_session_count_temp_3 = 0;
	unmarshaled_session_count_temp_3 = marshaled.___session_count_3;
	unmarshaled.set_session_count_3(unmarshaled_session_count_temp_3);
	unmarshaled.set_platform_4(il2cpp_codegen_marshal_bstring_result(marshaled.___platform_4));
	int32_t unmarshaled_platform_id_temp_5 = 0;
	unmarshaled_platform_id_temp_5 = marshaled.___platform_id_5;
	unmarshaled.set_platform_id_5(unmarshaled_platform_id_temp_5);
	unmarshaled.set_sdk_ver_6(il2cpp_codegen_marshal_bstring_result(marshaled.___sdk_ver_6));
	bool unmarshaled_debug_device_temp_7 = false;
	unmarshaled_debug_device_temp_7 = static_cast<bool>(marshaled.___debug_device_7);
	unmarshaled.set_debug_device_7(unmarshaled_debug_device_temp_7);
	unmarshaled.set_device_id_8(il2cpp_codegen_marshal_bstring_result(marshaled.___device_id_8));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.Common
IL2CPP_EXTERN_C void Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshal_com_cleanup(Common_t3F74EA472666122920F0BD23555B4F141EC00B63_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___appid_0);
	marshaled.___appid_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___userid_1);
	marshaled.___userid_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___platform_4);
	marshaled.___platform_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___sdk_ver_6);
	marshaled.___sdk_ver_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___device_id_8);
	marshaled.___device_id_8 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.ConfigManager::add_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_add_FetchCompleted_m14A846CB0D4B64B15B7ACB59C51DA2CDA7C52A6A (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { _configmanagerImpl.FetchCompleted += value; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get__configmanagerImpl_0();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = ___value0;
		NullCheck(L_0);
		ConfigManagerImpl_add_FetchCompleted_mD02A9A0BDEBA8A62F8EC2E1D09823A3236E2D5B7(L_0, L_1, /*hidden argument*/NULL);
		// add { _configmanagerImpl.FetchCompleted += value; }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::remove_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_remove_FetchCompleted_mF8EDC363CC34F46DB35281F70F45DD46EC489613 (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { _configmanagerImpl.FetchCompleted -= value; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get__configmanagerImpl_0();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = ___value0;
		NullCheck(L_0);
		ConfigManagerImpl_remove_FetchCompleted_m7DB3BCB005E5012CC422531B2E45240ED900DFA7(L_0, L_1, /*hidden argument*/NULL);
		// remove { _configmanagerImpl.FetchCompleted -= value; }
		return;
	}
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::get_appConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _configmanagerImpl.appConfig; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get__configmanagerImpl_0();
		NullCheck(L_0);
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_1;
		L_1 = ConfigManagerImpl_get_appConfig_mC19E6779139EF09771E595D3845E1EFA4FD882D2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager__cctor_m69D8C7B458055241B7425F06AE8350FCA5C63022 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04478DE961BC3FBD4944248656D82C0A03CA6ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77CE8226A01CFA2F2522D01A89DD83B7950DF5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA0D25AE1D3DDABAAE8CE7E329A0911AB161618);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ConfigManagerImpl _configmanagerImpl = new ConfigManagerImpl("remote-config");
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_0 = (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 *)il2cpp_codegen_object_new(ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249_il2cpp_TypeInfo_var);
		ConfigManagerImpl__ctor_m7F2A7B79EDBB08BFB6DCAF905E4061939B34C23B(L_0, _stringLiteralFEA0D25AE1D3DDABAAE8CE7E329A0911AB161618, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteral77CE8226A01CFA2F2522D01A89DD83B7950DF5BF, _stringLiteral04478DE961BC3FBD4944248656D82C0A03CA6ABA, /*hidden argument*/NULL);
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set__configmanagerImpl_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManagerImpl::get_requestStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigManagerImpl_get_requestStatus_m50D8C808D10FEEFF750CFE7BDD2C56C2E198608D (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigRequestStatus requestStatus { get;  internal set; }
		int32_t L_0 = __this->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigRequestStatus requestStatus { get;  internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_FetchCompleted_mD02A9A0BDEBA8A62F8EC2E1D09823A3236E2D5B7 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_1 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_2 = NULL;
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_0 = __this->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_2 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var));
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 ** L_5 = __this->get_address_of_FetchCompleted_1();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_6 = V_2;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_7 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *>((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_9 = V_0;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_9) == ((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::remove_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_remove_FetchCompleted_m7DB3BCB005E5012CC422531B2E45240ED900DFA7 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_1 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_2 = NULL;
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_0 = __this->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_2 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var));
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 ** L_5 = __this->get_address_of_FetchCompleted_1();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_6 = V_2;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_7 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *>((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_9 = V_0;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_9) == ((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManagerImpl::get_appConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManagerImpl_get_appConfig_mC19E6779139EF09771E595D3845E1EFA4FD882D2 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method)
{
	{
		// public RuntimeConfig appConfig { get; internal set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = __this->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_appConfig_m7868406138C7BBD693E1F35CB26B1FC0E599FA81 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method)
{
	{
		// public RuntimeConfig appConfig { get; internal set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ___value0;
		__this->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_ResponseParsed(System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_ResponseParsed_m7077923013FF9ED2E17FBB2756E9BF0C142FBD37 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_0 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_1 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_2 = NULL;
	{
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_0 = __this->get_ResponseParsed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_2 = V_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var));
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 ** L_5 = __this->get_address_of_ResponseParsed_6();
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_6 = V_2;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_7 = V_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *>((Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_9 = V_0;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)L_9) == ((RuntimeObject*)(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::remove_ResponseParsed(System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_remove_ResponseParsed_m56E271BF4437EE4F7AD2C473687B7C48577C82F1 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_0 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_1 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * V_2 = NULL;
	{
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_0 = __this->get_ResponseParsed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_2 = V_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var));
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 ** L_5 = __this->get_address_of_ResponseParsed_6();
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_6 = V_2;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_7 = V_1;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *>((Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_9 = V_0;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)L_9) == ((RuntimeObject*)(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_RawResponseReturned(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_RawResponseReturned_mF3286CD39216886057AD283CBD88F56B023AC1CA (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_1 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_2 = NULL;
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_0 = __this->get_RawResponseReturned_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_2 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var));
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** L_5 = __this->get_address_of_RawResponseReturned_7();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_6 = V_2;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_7 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *>((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_9 = V_0;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_9) == ((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::remove_RawResponseReturned(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_remove_RawResponseReturned_m0CA394210639280E72179E53CB7AF103C35D8387 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_1 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_2 = NULL;
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_0 = __this->get_RawResponseReturned_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_2 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var));
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** L_5 = __this->get_address_of_RawResponseReturned_7();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_6 = V_2;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_7 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *>((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_9 = V_0;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_9) == ((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::add_RawResponseValidated(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_add_RawResponseValidated_m547298DDE3A59EFB708F641DA239071AB7F8C9A4 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_1 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_2 = NULL;
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_0 = __this->get_RawResponseValidated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_2 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var));
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** L_5 = __this->get_address_of_RawResponseValidated_8();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_6 = V_2;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_7 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *>((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_9 = V_0;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_9) == ((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::remove_RawResponseValidated(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_remove_RawResponseValidated_m0D9FBC86521F5194662722D72894FEEBD80902A0 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_1 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * V_2 = NULL;
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_0 = __this->get_RawResponseValidated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_2 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var));
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 ** L_5 = __this->get_address_of_RawResponseValidated_8();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_6 = V_2;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_7 = V_1;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *>((Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_9 = V_0;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_9) == ((RuntimeObject*)(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl__ctor_m7F2A7B79EDBB08BFB6DCAF905E4061939B34C23B (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, String_t* ___originService0, String_t* ___attributionMetadataStr1, String_t* ___cacheFileRC2, String_t* ___cacheHeadersFileRC3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManagerImpl_OnRawResponseReturned_mE2701006FCDCC30810A846A1444FEE74D19B65F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManagerImpl_SaveCache_m31B25C16D46FE5077E22589324C1603C5B40C9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m82016AF852A5E3A67C6DC947A258B4937846EB51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95935A8A2618B9BB327BDBAEFA9C51195BB082FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCD805227094A6688F40365E2C3ED24112A18A89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD724FE72058FE2137255714779B872045A0664DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AC82729F1212E352282CBFE6D0C9A2E58A3177);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Common_t3F74EA472666122920F0BD23555B4F141EC00B63  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	Exception_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	{
		// internal List<Func<JObject>> requestPayloadProviders = new List<Func<JObject>>();
		List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * L_0 = (List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 *)il2cpp_codegen_object_new(List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7_il2cpp_TypeInfo_var);
		List_1__ctor_m82016AF852A5E3A67C6DC947A258B4937846EB51(L_0, /*hidden argument*/List_1__ctor_m82016AF852A5E3A67C6DC947A258B4937846EB51_RuntimeMethod_var);
		__this->set_requestPayloadProviders_9(L_0);
		// internal List<Func<RequestHeaderTuple>> requestHeaderProviders = new List<Func<RequestHeaderTuple>>();
		List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * L_1 = (List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A *)il2cpp_codegen_object_new(List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A_il2cpp_TypeInfo_var);
		List_1__ctor_m95935A8A2618B9BB327BDBAEFA9C51195BB082FA(L_1, /*hidden argument*/List_1__ctor_m95935A8A2618B9BB327BDBAEFA9C51195BB082FA_RuntimeMethod_var);
		__this->set_requestHeaderProviders_10(L_1);
		// internal List<Func<Dictionary<string, string>, string, bool>> rawResponseValidators = new List<Func<Dictionary<string, string>, string, bool>>();
		List_1_tD724FE72058FE2137255714779B872045A0664DC * L_2 = (List_1_tD724FE72058FE2137255714779B872045A0664DC *)il2cpp_codegen_object_new(List_1_tD724FE72058FE2137255714779B872045A0664DC_il2cpp_TypeInfo_var);
		List_1__ctor_mCD805227094A6688F40365E2C3ED24112A18A89D(L_2, /*hidden argument*/List_1__ctor_mCD805227094A6688F40365E2C3ED24112A18A89D_RuntimeMethod_var);
		__this->set_rawResponseValidators_11(L_2);
		// public ConfigManagerImpl(string originService, string attributionMetadataStr = "", string cacheFileRC = "RemoteConfig.json", string cacheHeadersFileRC = "RemoteConfigHeaders.json")
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// cacheFile = cacheFileRC;
		String_t* L_3 = ___cacheFileRC2;
		__this->set_cacheFile_12(L_3);
		// cacheHeadersFile = cacheHeadersFileRC;
		String_t* L_4 = ___cacheHeadersFileRC3;
		__this->set_cacheHeadersFile_13(L_4);
		// appConfig = new RuntimeConfig(this, "settings");
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_5 = (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C *)il2cpp_codegen_object_new(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var);
		RuntimeConfig__ctor_mDE17AB3B8CAA70AB52BB130150EA7F68AF162B7A(L_5, __this, _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2, /*hidden argument*/NULL);
		ConfigManagerImpl_set_appConfig_m7868406138C7BBD693E1F35CB26B1FC0E599FA81_inline(__this, L_5, /*hidden argument*/NULL);
		// deliveryPayload.packageVersion = RemoteConfigEnvConf.pluginVersion;
		Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A * L_6 = __this->get_address_of_deliveryPayload_3();
		L_6->set_packageVersion_2(_stringLiteral24AC82729F1212E352282CBFE6D0C9A2E58A3177);
		// deliveryPayload.originService = originService;
		Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A * L_7 = __this->get_address_of_deliveryPayload_3();
		String_t* L_8 = ___originService0;
		L_7->set_originService_3(L_8);
		// if (!string.IsNullOrEmpty(attributionMetadataStr))
		String_t* L_9 = ___attributionMetadataStr1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00a3;
		}
	}

IL_006b:
	try
	{ // begin try (depth: 1)
		// deliveryPayload.attributionMetadata = JObject.Parse(attributionMetadataStr);
		Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A * L_11 = __this->get_address_of_deliveryPayload_3();
		String_t* L_12 = ___attributionMetadataStr1;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_13;
		L_13 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_12, /*hidden argument*/NULL);
		L_11->set_attributionMetadata_4(L_13);
		// }
		goto IL_00a3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogWarning("attributionMetadata is not valid JSON:\n" + attributionMetadataStr + "\n" + e);
			String_t* L_14 = ___attributionMetadataStr1;
			Exception_t * L_15 = V_0;
			Exception_t * L_16 = L_15;
			G_B3_0 = L_16;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
			G_B3_2 = L_14;
			G_B3_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8BD3DCAB0097617B6017163139B4704213A67EF));
			if (L_16)
			{
				G_B4_0 = L_16;
				G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
				G_B4_2 = L_14;
				G_B4_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8BD3DCAB0097617B6017163139B4704213A67EF));
				goto IL_0092;
			}
		}

IL_008e:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			goto IL_0097;
		}

IL_0092:
		{
			NullCheck(G_B4_0);
			String_t* L_17;
			L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
			G_B5_0 = L_17;
			G_B5_1 = G_B4_1;
			G_B5_2 = G_B4_2;
			G_B5_3 = G_B4_3;
		}

IL_0097:
		{
			String_t* L_18;
			L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B5_3, G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_18, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a3;
		}
	} // end catch (depth: 1)

IL_00a3:
	{
		//             commonPayload = new Common()
		//             {
		// #if !UNITY_SWITCH && !UNITY_PS4
		//                 appid = Application.cloudProjectId,
		//                 userid = AnalyticsSessionInfo.userId,
		//                 sessionid = AnalyticsSessionInfo.sessionId,
		//                 session_count = AnalyticsSessionInfo.sessionCount,
		// #endif
		//                 platform = Application.platform.ToString(),
		//                 platform_id = (int)Application.platform,
		//                 sdk_ver = Application.unityVersion,
		//                 debug_device = Debug.isDebugBuild,
		//                 device_id = SystemInfo.deviceUniqueIdentifier
		//             };
		il2cpp_codegen_initobj((&V_1), sizeof(Common_t3F74EA472666122920F0BD23555B4F141EC00B63 ));
		String_t* L_19;
		L_19 = Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D(/*hidden argument*/NULL);
		(&V_1)->set_appid_0(L_19);
		String_t* L_20;
		L_20 = AnalyticsSessionInfo_get_userId_mBFF8929840DEA78DE52F5C9DF109EBAE686E39C7(/*hidden argument*/NULL);
		(&V_1)->set_userid_1(L_20);
		int64_t L_21;
		L_21 = AnalyticsSessionInfo_get_sessionId_mEC7693B506475181EAF61503F82F033CCD020413(/*hidden argument*/NULL);
		(&V_1)->set_sessionid_2(L_21);
		int64_t L_22;
		L_22 = AnalyticsSessionInfo_get_sessionCount_m099DAC8FA17F30B2986FA0D51009995432BDA608(/*hidden argument*/NULL);
		(&V_1)->set_session_count_3(L_22);
		int32_t L_23;
		L_23 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_2 = L_23;
		RuntimeObject * L_24 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		V_2 = *(int32_t*)UnBox(L_24);
		(&V_1)->set_platform_4(L_25);
		int32_t L_26;
		L_26 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		(&V_1)->set_platform_id_5(L_26);
		String_t* L_27;
		L_27 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		(&V_1)->set_sdk_ver_6(L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		(&V_1)->set_debug_device_7(L_28);
		String_t* L_29;
		L_29 = SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E(/*hidden argument*/NULL);
		(&V_1)->set_device_id_8(L_29);
		Common_t3F74EA472666122920F0BD23555B4F141EC00B63  L_30 = V_1;
		__this->set_commonPayload_4(L_30);
		// deviceInfoPayload = new DeviceInfo();
		DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * L_31 = (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF *)il2cpp_codegen_object_new(DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF_il2cpp_TypeInfo_var);
		DeviceInfo__ctor_mB4721195EA871C34F3F2BDE2C6006158A05862ED(L_31, /*hidden argument*/NULL);
		__this->set_deviceInfoPayload_5(L_31);
		// requestStatus = ConfigRequestStatus.None;
		ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline(__this, 0, /*hidden argument*/NULL);
		// RawResponseReturned += OnRawResponseReturned;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_32 = (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)il2cpp_codegen_object_new(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39(L_32, __this, (intptr_t)((intptr_t)ConfigManagerImpl_OnRawResponseReturned_mE2701006FCDCC30810A846A1444FEE74D19B65F1_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39_RuntimeMethod_var);
		ConfigManagerImpl_add_RawResponseReturned_mF3286CD39216886057AD283CBD88F56B023AC1CA(__this, L_32, /*hidden argument*/NULL);
		// RawResponseValidated += SaveCache;
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_33 = (Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 *)il2cpp_codegen_object_new(Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8_il2cpp_TypeInfo_var);
		Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39(L_33, __this, (intptr_t)((intptr_t)ConfigManagerImpl_SaveCache_m31B25C16D46FE5077E22589324C1603C5B40C9D1_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD38CE0ED377ADF3050C3E11EFF7ACCC85D23DE39_RuntimeMethod_var);
		ConfigManagerImpl_add_RawResponseValidated_m547298DDE3A59EFB708F641DA239071AB7F8C9A4(__this, L_33, /*hidden argument*/NULL);
		// LoadFromCache();
		ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::OnRawResponseReturned(Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_OnRawResponseReturned_mE2701006FCDCC30810A846A1444FEE74D19B65F1 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, int32_t ___origin0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, String_t* ___body2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mF4D95C2AE7FE23E093185F7835F751865A746016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8520F4F5685AF60376AB076982FC1BFC3153CB36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m141C9726234E4D864574D5F3A4A30175D83D1EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4A0CD1E456E29AD0CA6E6240EBCACAF3E693B84F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_mDF50A5B6A28D8AD72FBA735310D51F0150AF795E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m905B6C216921943803E6671B442CD44B077940F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_1 = NULL;
	ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B8_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B7_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B14_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B13_0 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * G_B20_0 = NULL;
	Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * G_B19_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B23_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B22_0 = NULL;
	{
		// if(body == null || headers == null)
		String_t* L_0 = ___body2;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___headers1;
		if (L_1)
		{
			goto IL_0007;
		}
	}

IL_0006:
	{
		// return;
		return;
	}

IL_0007:
	{
		// var configResponse = new ConfigResponse() {
		//     requestOrigin = origin,
		//     status = ConfigRequestStatus.Pending
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 ));
		int32_t L_2 = ___origin0;
		(&V_2)->set_requestOrigin_0(L_2);
		(&V_2)->set_status_1(3);
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_3 = V_2;
		V_0 = L_3;
		// foreach (var validationFunc in rawResponseValidators)
		List_1_tD724FE72058FE2137255714779B872045A0664DC * L_4 = __this->get_rawResponseValidators_11();
		NullCheck(L_4);
		Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168  L_5;
		L_5 = List_1_GetEnumerator_m905B6C216921943803E6671B442CD44B077940F3(L_4, /*hidden argument*/List_1_GetEnumerator_m905B6C216921943803E6671B442CD44B077940F3_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_002f:
		{
			// foreach (var validationFunc in rawResponseValidators)
			Func_3_tE2B9E108D36269E02848A36C7BCE154E282E5E85 * L_6;
			L_6 = Enumerator_get_Current_m4A0CD1E456E29AD0CA6E6240EBCACAF3E693B84F_inline((Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m4A0CD1E456E29AD0CA6E6240EBCACAF3E693B84F_RuntimeMethod_var);
			// if(validationFunc(headers, body) == false)
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = ___headers1;
			String_t* L_8 = ___body2;
			NullCheck(L_6);
			bool L_9;
			L_9 = Func_3_Invoke_mDF50A5B6A28D8AD72FBA735310D51F0150AF795E(L_6, L_7, L_8, /*hidden argument*/Func_3_Invoke_mDF50A5B6A28D8AD72FBA735310D51F0150AF795E_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_006a;
			}
		}

IL_003f:
		{
			// configResponse.status = ConfigRequestStatus.Failed;
			(&V_0)->set_status_1(1);
			// requestStatus = configResponse.status;
			ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_10 = V_0;
			int32_t L_11 = L_10.get_status_1();
			ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline(__this, L_11, /*hidden argument*/NULL);
			// FetchCompleted?.Invoke(configResponse);
			Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_12 = __this->get_FetchCompleted_1();
			Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_13 = L_12;
			G_B7_0 = L_13;
			if (L_13)
			{
				G_B8_0 = L_13;
				goto IL_0062;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0xE5, FINALLY_0075);
		}

IL_0062:
		{
			ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_14 = V_0;
			NullCheck(G_B8_0);
			Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD(G_B8_0, L_14, /*hidden argument*/Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
			// return;
			IL2CPP_LEAVE(0xE5, FINALLY_0075);
		}

IL_006a:
		{
			// foreach (var validationFunc in rawResponseValidators)
			bool L_15;
			L_15 = Enumerator_MoveNext_m141C9726234E4D864574D5F3A4A30175D83D1EB4((Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m141C9726234E4D864574D5F3A4A30175D83D1EB4_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_002f;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8520F4F5685AF60376AB076982FC1BFC3153CB36((Enumerator_t0958E3B8605848535C91DA755D8D734C583E0168 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m8520F4F5685AF60376AB076982FC1BFC3153CB36_RuntimeMethod_var);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE5, IL_00e5)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// RawResponseValidated?.Invoke(origin, headers, body);
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_16 = __this->get_RawResponseValidated_8();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_17 = L_16;
		G_B13_0 = L_17;
		if (L_17)
		{
			G_B14_0 = L_17;
			goto IL_008f;
		}
	}
	{
		goto IL_0097;
	}

IL_008f:
	{
		int32_t L_18 = ___origin0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_19 = ___headers1;
		String_t* L_20 = ___body2;
		NullCheck(G_B14_0);
		Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657(G_B14_0, L_18, L_19, L_20, /*hidden argument*/Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
	}

IL_0097:
	{
		// JObject responseJObj = null;
		V_1 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)NULL;
	}

IL_0099:
	try
	{ // begin try (depth: 1)
		// responseJObj = JObject.Parse(body);
		String_t* L_21 = ___body2;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_22;
		L_22 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// configResponse.status = ConfigRequestStatus.Success;
		(&V_0)->set_status_1(2);
		// }
		goto IL_00b5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{ // begin catch(System.Object)
		// catch
		// configResponse.status = ConfigRequestStatus.Failed;
		(&V_0)->set_status_1(1);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00b5:
	{
		// ResponseParsed?.Invoke(configResponse, responseJObj);
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_23 = __this->get_ResponseParsed_6();
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_24 = L_23;
		G_B19_0 = L_24;
		if (L_24)
		{
			G_B20_0 = L_24;
			goto IL_00c1;
		}
	}
	{
		goto IL_00c8;
	}

IL_00c1:
	{
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_25 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_26 = V_1;
		NullCheck(G_B20_0);
		Action_2_Invoke_mF4D95C2AE7FE23E093185F7835F751865A746016(G_B20_0, L_25, L_26, /*hidden argument*/Action_2_Invoke_mF4D95C2AE7FE23E093185F7835F751865A746016_RuntimeMethod_var);
	}

IL_00c8:
	{
		// requestStatus = configResponse.status;
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_27 = V_0;
		int32_t L_28 = L_27.get_status_1();
		ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline(__this, L_28, /*hidden argument*/NULL);
		// FetchCompleted?.Invoke(configResponse);
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_29 = __this->get_FetchCompleted_1();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_30 = L_29;
		G_B22_0 = L_30;
		if (L_30)
		{
			G_B23_0 = L_30;
			goto IL_00df;
		}
	}
	{
		return;
	}

IL_00df:
	{
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_31 = V_0;
		NullCheck(G_B23_0);
		Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD(G_B23_0, L_31, /*hidden argument*/Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::PostConfig(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_PostConfig_m70C8A8040A8516A8391A2A37C1FF16F65CBF20A3 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeObject * ___userAttributes0, RuntimeObject * ___appAttributes1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// var jsonText = PreparePayload(userAttributes, appAttributes);
		RuntimeObject * L_0 = ___userAttributes0;
		RuntimeObject * L_1 = ___appAttributes1;
		String_t* L_2;
		L_2 = ConfigManagerImpl_PreparePayload_m40910AE66C3AE28999C4794BC3C474D22D7C6882(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// DoRequest(jsonText);
		String_t* L_3 = V_0;
		ConfigManagerImpl_DoRequest_mE8FBA2E3C6B452349CCEA6900F3FB7E01DBF97A6(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.ConfigManagerImpl::PreparePayload(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigManagerImpl_PreparePayload_m40910AE66C3AE28999C4794BC3C474D22D7C6882 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeObject * ___userAttributes0, RuntimeObject * ___appAttributes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Common_t3F74EA472666122920F0BD23555B4F141EC00B63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManagerImpl_ToNewlineDelimitedJson_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_m030DD5857711349E17F18E975555582596DC01F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2217028EDF13544C8BAE32A9FBCCC468F699501A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62C0939A716739FF380F23FC2C91A4237B62B03F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20159170D8BC9ED57ADDE9EB512F118B1E9117A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m046B2B59C7D672A31510C3C966A958AE797E5CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8BC4D37A3F78BA942538D619DC54BC657D911FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFEE17052808DF370DD4957A8DBE29CF2DFAB9ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19FD9592792640DDDF553A327DD8AA117C3B7389);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD996DD9022ECE8103FB4C0FA3B5BF3A0D48B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4B8CBDECAC61FBCD3C46FF33E3DB62A63923512);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B898500E15D390C94183A4E259EA4130A7FE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD883FB8DA19B206CB774D223B80DB78B9F93D938);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_2 = NULL;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_3 = NULL;
	List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * V_4 = NULL;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_5 = NULL;
	StringBuilder_t * V_6 = NULL;
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * V_9 = NULL;
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// requestStatus = ConfigRequestStatus.Pending;
		ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline(__this, 3, /*hidden argument*/NULL);
		// long timestamp = new DateTimeOffset(DateTime.UtcNow).ToUnixTimeMilliseconds();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTimeOffset__ctor_mC17E28F89D4E54D511B30E08D1F56453E677D53F((&L_1), L_0, /*hidden argument*/NULL);
		V_7 = L_1;
		int64_t L_2;
		L_2 = DateTimeOffset_ToUnixTimeMilliseconds_mC53AF9F504753A615CB6CE358DFBD514BF78613F((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_7), /*hidden argument*/NULL);
		V_0 = L_2;
		// long rtSinceStart = (long)(Time.realtimeSinceStartup * 1000000);
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply((float)L_3, (float)(1000000.0f))));
		// var commonJobj = JObject.FromObject(commonPayload);
		Common_t3F74EA472666122920F0BD23555B4F141EC00B63  L_4 = __this->get_commonPayload_4();
		Common_t3F74EA472666122920F0BD23555B4F141EC00B63  L_5 = L_4;
		RuntimeObject * L_6 = Box(Common_t3F74EA472666122920F0BD23555B4F141EC00B63_il2cpp_TypeInfo_var, &L_5);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_7;
		L_7 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// commonJobj.Add("t_since_start", rtSinceStart);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_8 = V_2;
		int64_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_10;
		L_10 = JToken_op_Implicit_m0332752A7578DE8071A8D9C46E215C27D186B117(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_8, _stringLiteralD883FB8DA19B206CB774D223B80DB78B9F93D938, L_10, /*hidden argument*/NULL);
		// JObject json = new JObject();
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_11 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_11, /*hidden argument*/NULL);
		V_3 = L_11;
		// json.Add("common", commonJobj);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_12 = V_3;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_13 = V_2;
		NullCheck(L_12);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_12, _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D, L_13, /*hidden argument*/NULL);
		// List<JObject> items = new List<JObject>();
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_14 = (List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 *)il2cpp_codegen_object_new(List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356_il2cpp_TypeInfo_var);
		List_1__ctor_mFEE17052808DF370DD4957A8DBE29CF2DFAB9ADA(L_14, /*hidden argument*/List_1__ctor_mFEE17052808DF370DD4957A8DBE29CF2DFAB9ADA_RuntimeMethod_var);
		V_4 = L_14;
		// items.Add(json);
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_15 = V_4;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_16 = V_3;
		NullCheck(L_15);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_15, L_16, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		// items.Add(CreatePayloadJObjectFromValuesJObject(JObject.FromObject(deliveryPayload), "analytics.delivery.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_17 = V_4;
		Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A  L_18 = __this->get_deliveryPayload_3();
		Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A  L_19 = L_18;
		RuntimeObject * L_20 = Box(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_il2cpp_TypeInfo_var, &L_19);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_21;
		L_21 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_20, /*hidden argument*/NULL);
		int64_t L_22 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_23;
		L_23 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_21, _stringLiteral3CD996DD9022ECE8103FB4C0FA3B5BF3A0D48B72, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_17, L_23, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		// var deviceInfoJObj = JObject.FromObject(deviceInfoPayload);
		DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * L_24 = __this->get_deviceInfoPayload_5();
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_25;
		L_25 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// deviceInfoJObj.Add("t_since_start", rtSinceStart);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_26 = V_5;
		int64_t L_27 = V_1;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_28;
		L_28 = JToken_op_Implicit_m0332752A7578DE8071A8D9C46E215C27D186B117(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_26, _stringLiteralD883FB8DA19B206CB774D223B80DB78B9F93D938, L_28, /*hidden argument*/NULL);
		// items.Add(CreatePayloadJObjectFromValuesJObject(deviceInfoJObj, "analytics.deviceInfo.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_29 = V_4;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_30 = V_5;
		int64_t L_31 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_32;
		L_32 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_30, _stringLiteralA4B8CBDECAC61FBCD3C46FF33E3DB62A63923512, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_29, L_32, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		// if(userAttributes == null)
		RuntimeObject * L_33 = ___userAttributes0;
		if (L_33)
		{
			goto IL_00df;
		}
	}
	{
		// items.Add(CreatePayloadJObjectFromValuesJObject(new JObject(), "analytics.deliveryUserAttributes.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_34 = V_4;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_35 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_35, /*hidden argument*/NULL);
		int64_t L_36 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_37;
		L_37 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_35, _stringLiteral19FD9592792640DDDF553A327DD8AA117C3B7389, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_34, L_37, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		// }
		goto IL_00f8;
	}

IL_00df:
	{
		// items.Add(CreatePayloadJObjectFromValuesJObject(JObject.FromObject(userAttributes), "analytics.deliveryUserAttributes.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_38 = V_4;
		RuntimeObject * L_39 = ___userAttributes0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_40;
		L_40 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_39, /*hidden argument*/NULL);
		int64_t L_41 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_42;
		L_42 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_40, _stringLiteral19FD9592792640DDDF553A327DD8AA117C3B7389, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_38, L_42, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
	}

IL_00f8:
	{
		// if(appAttributes == null)
		RuntimeObject * L_43 = ___appAttributes1;
		if (L_43)
		{
			goto IL_0115;
		}
	}
	{
		// items.Add(CreatePayloadJObjectFromValuesJObject(new JObject(), "analytics.deliveryAppAttributes.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_44 = V_4;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_45 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_45, /*hidden argument*/NULL);
		int64_t L_46 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_47;
		L_47 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_45, _stringLiteralD65B898500E15D390C94183A4E259EA4130A7FE7, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_44, L_47, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		// }
		goto IL_012e;
	}

IL_0115:
	{
		// items.Add(CreatePayloadJObjectFromValuesJObject(JObject.FromObject(appAttributes), "analytics.deliveryAppAttributes.v1", timestamp));
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_48 = V_4;
		RuntimeObject * L_49 = ___appAttributes1;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_50;
		L_50 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_49, /*hidden argument*/NULL);
		int64_t L_51 = V_0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_52;
		L_52 = ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420(__this, L_50, _stringLiteralD65B898500E15D390C94183A4E259EA4130A7FE7, L_51, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_48, L_52, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
	}

IL_012e:
	{
		// foreach(var func in requestPayloadProviders)
		List_1_t221A07254257DB460A7A6BCACA6E0C06CD745AA7 * L_53 = __this->get_requestPayloadProviders_9();
		NullCheck(L_53);
		Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4  L_54;
		L_54 = List_1_GetEnumerator_mC8BC4D37A3F78BA942538D619DC54BC657D911FA(L_53, /*hidden argument*/List_1_GetEnumerator_mC8BC4D37A3F78BA942538D619DC54BC657D911FA_RuntimeMethod_var);
		V_8 = L_54;
	}

IL_013b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0154;
		}

IL_013d:
		{
			// foreach(var func in requestPayloadProviders)
			Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * L_55;
			L_55 = Enumerator_get_Current_mA20159170D8BC9ED57ADDE9EB512F118B1E9117A_inline((Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *)(&V_8), /*hidden argument*/Enumerator_get_Current_mA20159170D8BC9ED57ADDE9EB512F118B1E9117A_RuntimeMethod_var);
			V_9 = L_55;
			// items.Add(func.Invoke());
			List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_56 = V_4;
			Func_1_tACBBFD0B70C5AC5B7DD328339C0F265245263A60 * L_57 = V_9;
			NullCheck(L_57);
			JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_58;
			L_58 = Func_1_Invoke_m046B2B59C7D672A31510C3C966A958AE797E5CD2(L_57, /*hidden argument*/Func_1_Invoke_m046B2B59C7D672A31510C3C966A958AE797E5CD2_RuntimeMethod_var);
			NullCheck(L_56);
			List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16(L_56, L_58, /*hidden argument*/List_1_Add_mF3AF6B9CACF199B14C731DFDFD67BF7929B43C16_RuntimeMethod_var);
		}

IL_0154:
		{
			// foreach(var func in requestPayloadProviders)
			bool L_59;
			L_59 = Enumerator_MoveNext_m62C0939A716739FF380F23FC2C91A4237B62B03F((Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m62C0939A716739FF380F23FC2C91A4237B62B03F_RuntimeMethod_var);
			if (L_59)
			{
				goto IL_013d;
			}
		}

IL_015d:
		{
			IL2CPP_LEAVE(0x16D, FINALLY_015f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015f;
	}

FINALLY_015f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2217028EDF13544C8BAE32A9FBCCC468F699501A((Enumerator_t9E0E0BF2B2A06586EB8687E2AB62BD29652C47B4 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m2217028EDF13544C8BAE32A9FBCCC468F699501A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(351)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(351)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16D, IL_016d)
	}

IL_016d:
	{
		// var sb = new StringBuilder();
		StringBuilder_t * L_60 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_60, /*hidden argument*/NULL);
		V_6 = L_60;
		// using (var textWriter = new StringWriter(sb))
		StringBuilder_t * L_61 = V_6;
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_62 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66(L_62, L_61, /*hidden argument*/NULL);
		V_10 = L_62;
	}

IL_017d:
	try
	{ // begin try (depth: 1)
		// ToNewlineDelimitedJson(textWriter, items);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_63 = V_10;
		List_1_t21A68F46B392107FC768AC3CD2A76C6A04E2B356 * L_64 = V_4;
		ConfigManagerImpl_ToNewlineDelimitedJson_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_m030DD5857711349E17F18E975555582596DC01F8(__this, L_63, L_64, /*hidden argument*/ConfigManagerImpl_ToNewlineDelimitedJson_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_m030DD5857711349E17F18E975555582596DC01F8_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x195, FINALLY_0189);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0189;
	}

FINALLY_0189:
	{ // begin finally (depth: 1)
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_65 = V_10;
			if (!L_65)
			{
				goto IL_0194;
			}
		}

IL_018d:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_66 = V_10;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_66);
		}

IL_0194:
		{
			IL2CPP_END_FINALLY(393)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(393)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x195, IL_0195)
	}

IL_0195:
	{
		// return sb.ToString();
		StringBuilder_t * L_67 = V_6;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_67);
		return L_68;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::DoRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_DoRequest_mE8FBA2E3C6B452349CCEA6900F3FB7E01DBF97A6 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, String_t* ___jsonText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m262665E361CF27AA36FFCA4F7FD71E7F29893473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51FE26C4961CB107A7FE4956D6D8E28FA95CC417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50FAFF918A842986B8254385749ED344D1899F4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m810BFDA07D5DC2661476B31A4957001B630D5885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_U3CDoRequestU3Eb__0_mEACB3E526A443187300B02C83D5FF0A6AC95249A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8602AE5BC2895DC63F194759151EF294A304B42A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * V_0 = NULL;
	Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_0 = (U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass38_0__ctor_m197A66AB392091AE7A8BF08356A6C70B4B6FC92F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// var request = new RCUnityWebRequest();
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_2 = V_0;
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_3 = (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D *)il2cpp_codegen_object_new(RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D_il2cpp_TypeInfo_var);
		RCUnityWebRequest__ctor_m142B368D818464241DA17BEE77B05444A0A99F65(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_request_1(L_3);
		// request.unityWebRequest = new UnityWebRequest();
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_4 = V_0;
		NullCheck(L_4);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_5 = L_4->get_request_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mEB08DBEBFA9AE178A79600564D0FCD77D8D25421(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		RCUnityWebRequest_set_unityWebRequest_mB6008FB8EC83908929123249AAFBC867EAFD72D0(L_5, L_6, /*hidden argument*/NULL);
		// request.url = "https://config.uca.cloud.unity3d.com";
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_7 = V_0;
		NullCheck(L_7);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_8 = L_7->get_request_1();
		NullCheck(L_8);
		RCUnityWebRequest_set_url_m36D430EFA2A0FE0EA97DF3832F2CFAB57997DEA2(L_8, _stringLiteral8602AE5BC2895DC63F194759151EF294A304B42A, /*hidden argument*/NULL);
		// request.method = UnityWebRequest.kHttpVerbPOST;
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_9 = V_0;
		NullCheck(L_9);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_10 = L_9->get_request_1();
		NullCheck(L_10);
		RCUnityWebRequest_set_method_mC9D2CE45C6595B049A0E79901CAE2478FE2EEB8F(L_10, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_11 = V_0;
		NullCheck(L_11);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_12 = L_11->get_request_1();
		NullCheck(L_12);
		RCUnityWebRequest_SetRequestHeader_m2F8DDBFF29DD5A8AA5714ED1099B73449E8AAA94(L_12, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// request.timeout = 10;
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_13 = V_0;
		NullCheck(L_13);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_14 = L_13->get_request_1();
		NullCheck(L_14);
		RCUnityWebRequest_set_timeout_m0AB25AD212D705ED5248D6BDFA7DB3EFF1973A93(L_14, ((int32_t)10), /*hidden argument*/NULL);
		// foreach(var headerProvider in requestHeaderProviders)
		List_1_t3658B4DFA90A355680CADA43B7A9BE41F6E46C7A * L_15 = __this->get_requestHeaderProviders_10();
		NullCheck(L_15);
		Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D  L_16;
		L_16 = List_1_GetEnumerator_m810BFDA07D5DC2661476B31A4957001B630D5885(L_15, /*hidden argument*/List_1_GetEnumerator_m810BFDA07D5DC2661476B31A4957001B630D5885_RuntimeMethod_var);
		V_1 = L_16;
	}

IL_0076:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009c;
		}

IL_0078:
		{
			// foreach(var headerProvider in requestHeaderProviders)
			Func_1_tE0DB23259F9874DF1A2839221F86708469F704FC * L_17;
			L_17 = Enumerator_get_Current_m50FAFF918A842986B8254385749ED344D1899F4D_inline((Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *)(&V_1), /*hidden argument*/Enumerator_get_Current_m50FAFF918A842986B8254385749ED344D1899F4D_RuntimeMethod_var);
			// var header = headerProvider.Invoke();
			NullCheck(L_17);
			RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  L_18;
			L_18 = Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5(L_17, /*hidden argument*/Func_1_Invoke_m88662638C1FF70D33F75B5821D5F62BADEE512A5_RuntimeMethod_var);
			V_2 = L_18;
			// request.SetRequestHeader(header.key, header.value);
			U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_19 = V_0;
			NullCheck(L_19);
			RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_20 = L_19->get_request_1();
			RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  L_21 = V_2;
			String_t* L_22 = L_21.get_key_0();
			RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A  L_23 = V_2;
			String_t* L_24 = L_23.get_value_1();
			NullCheck(L_20);
			RCUnityWebRequest_SetRequestHeader_m2F8DDBFF29DD5A8AA5714ED1099B73449E8AAA94(L_20, L_22, L_24, /*hidden argument*/NULL);
		}

IL_009c:
		{
			// foreach(var headerProvider in requestHeaderProviders)
			bool L_25;
			L_25 = Enumerator_MoveNext_m51FE26C4961CB107A7FE4956D6D8E28FA95CC417((Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m51FE26C4961CB107A7FE4956D6D8E28FA95CC417_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0078;
			}
		}

IL_00a5:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m262665E361CF27AA36FFCA4F7FD71E7F29893473((Enumerator_t226A48DAAD8F7AE70A7F832A676E2F61854BC58D *)(&V_1), /*hidden argument*/Enumerator_Dispose_m262665E361CF27AA36FFCA4F7FD71E7F29893473_RuntimeMethod_var);
		IL2CPP_END_FINALLY(167)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
	}

IL_00b5:
	{
		// request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(jsonText));
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_26 = V_0;
		NullCheck(L_26);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_27 = L_26->get_request_1();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_28;
		L_28 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_29 = ___jsonText0;
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30;
		L_30 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_28, L_29);
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_31 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_31, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		RCUnityWebRequest_set_uploadHandler_mBA786E9DDB9D226D36691C0DDF722B6B67DFF113(L_27, L_31, /*hidden argument*/NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_32 = V_0;
		NullCheck(L_32);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_33 = L_32->get_request_1();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_34 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		RCUnityWebRequest_set_downloadHandler_mA7576B5307184E9C7EFBAA839A4B1110CED29ABF(L_33, L_34, /*hidden argument*/NULL);
		// request.SendWebRequest().completed += (AsyncOperation op) => {
		//     var origin = ConfigOrigin.Remote;
		//     var response = ((UnityWebRequestAsyncOperation)op).webRequest;
		//     var configResponse = new ConfigResponse() { requestOrigin = origin, status = requestStatus };
		//     if (response.isHttpError || response.isNetworkError)
		//     {
		//         configResponse.status = ConfigRequestStatus.Failed;
		//         FetchCompleted?.Invoke(configResponse);
		//     }
		//     else
		//     {
		//         RawResponseReturned?.Invoke(origin, request.GetResponseHeaders(), request.downloadHandler.text);
		//     }
		// };
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_35 = V_0;
		NullCheck(L_35);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_36 = L_35->get_request_1();
		NullCheck(L_36);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_37;
		L_37 = RCUnityWebRequest_SendWebRequest_mE6340713A0479BC6E434AE8975EE4548821E177A(L_36, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * L_38 = V_0;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_39 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_39, L_38, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass38_0_U3CDoRequestU3Eb__0_mEACB3E526A443187300B02C83D5FF0A6AC95249A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_37);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_37, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::SaveCache(Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_SaveCache_m31B25C16D46FE5077E22589324C1603C5B40C9D1 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, int32_t ___origin0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, String_t* ___result2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * V_0 = NULL;
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if(origin == ConfigOrigin.Remote)
		int32_t L_0 = ___origin0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			// using (StreamWriter writer = File.CreateText(Path.Combine(Application.persistentDataPath, cacheFile)))
			String_t* L_1;
			L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
			String_t* L_2 = __this->get_cacheFile_12();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_3;
			L_3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, L_2, /*hidden argument*/NULL);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4;
			L_4 = File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			// writer.Write(result);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_5 = V_0;
			String_t* L_6 = ___result2;
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, L_6);
			// }
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			{
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = V_0;
				if (!L_7)
				{
					goto IL_002c;
				}
			}

IL_0026:
			{
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
			}

IL_002c:
			{
				IL2CPP_END_FINALLY(35)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2D, IL_002d)
		}

IL_002d:
		{
			// using (StreamWriter writer = File.CreateText(Path.Combine(Application.persistentDataPath, cacheHeadersFile)))
			String_t* L_9;
			L_9 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
			String_t* L_10 = __this->get_cacheHeadersFile_13();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_11;
			L_11 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_9, L_10, /*hidden argument*/NULL);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_12;
			L_12 = File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6(L_11, /*hidden argument*/NULL);
			V_1 = L_12;
		}

IL_0043:
		try
		{ // begin try (depth: 2)
			// writer.Write(JsonConvert.SerializeObject(headers));
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_13 = V_1;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = ___headers1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
			String_t* L_15;
			L_15 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_15);
			// }
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_16 = V_1;
				if (!L_16)
				{
					goto IL_005a;
				}
			}

IL_0054:
			{
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_17 = V_1;
				NullCheck(L_17);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
			}

IL_005a:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5B, IL_005b)
		}

IL_005b:
		{
			// }
			goto IL_0064;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005d;
		}
		throw e;
	}

CATCH_005d:
	{ // begin catch(System.Exception)
		// Debug.LogError(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0064;
	} // end catch (depth: 1)

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl::LoadFromCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_2 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B12_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B11_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B16_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B15_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// using (FileStream reader = File.Open(Path.Combine(Application.persistentDataPath, cacheFile), FileMode.Open))
			String_t* L_0;
			L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
			String_t* L_1 = __this->get_cacheFile_12();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_2;
			L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_3;
			L_3 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_2, 3, /*hidden argument*/NULL);
			V_2 = L_3;
		}

IL_0017:
		try
		{ // begin try (depth: 2)
			// bodyResult = new byte[reader.Length];
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_4 = V_2;
			NullCheck(L_4);
			int64_t L_5;
			L_5 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
			if ((int64_t)(L_5) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_5));
			V_0 = L_6;
			// reader.Read(bodyResult, 0, (int)reader.Length);
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_9 = V_2;
			NullCheck(L_9);
			int64_t L_10;
			L_10 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_9);
			NullCheck(L_7);
			int32_t L_11;
			L_11 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)((int32_t)L_10)));
			// }
			IL2CPP_LEAVE(0x40, FINALLY_0036);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0036;
		}

FINALLY_0036:
		{ // begin finally (depth: 2)
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12 = V_2;
				if (!L_12)
				{
					goto IL_003f;
				}
			}

IL_0039:
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_13 = V_2;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
			}

IL_003f:
			{
				IL2CPP_END_FINALLY(54)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(54)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x40, IL_0040)
		}

IL_0040:
		{
			// using (FileStream reader = File.Open(Path.Combine(Application.persistentDataPath, cacheHeadersFile), FileMode.Open))
			String_t* L_14;
			L_14 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
			String_t* L_15 = __this->get_cacheHeadersFile_13();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_16;
			L_16 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_14, L_15, /*hidden argument*/NULL);
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_17;
			L_17 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_16, 3, /*hidden argument*/NULL);
			V_3 = L_17;
		}

IL_0057:
		try
		{ // begin try (depth: 2)
			// headerResult = new byte[reader.Length];
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_18 = V_3;
			NullCheck(L_18);
			int64_t L_19;
			L_19 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_18);
			if ((int64_t)(L_19) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ConfigManagerImpl_LoadFromCache_m829EF33AB02A2B456FA8230DEEFB5CB3B4FAF817_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_19));
			V_1 = L_20;
			// reader.Read(headerResult, 0, (int)reader.Length);
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_21 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_1;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_23 = V_3;
			NullCheck(L_23);
			int64_t L_24;
			L_24 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_23);
			NullCheck(L_21);
			int32_t L_25;
			L_25 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, ((int32_t)((int32_t)L_24)));
			// }
			IL2CPP_LEAVE(0x80, FINALLY_0076);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0076;
		}

FINALLY_0076:
		{ // begin finally (depth: 2)
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_26 = V_3;
				if (!L_26)
				{
					goto IL_007f;
				}
			}

IL_0079:
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_27 = V_3;
				NullCheck(L_27);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_27);
			}

IL_007f:
			{
				IL2CPP_END_FINALLY(118)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(118)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x80, IL_0080)
		}

IL_0080:
		{
			// RawResponseReturned?.Invoke(ConfigOrigin.Cached, JsonConvert.DeserializeObject<Dictionary<string, string>>(System.Text.Encoding.ASCII.GetString(headerResult)), System.Text.Encoding.ASCII.GetString(bodyResult));
			Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_28 = __this->get_RawResponseReturned_7();
			Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_29 = L_28;
			G_B11_0 = L_29;
			if (L_29)
			{
				G_B12_0 = L_29;
				goto IL_008c;
			}
		}

IL_0089:
		{
			goto IL_00ad;
		}

IL_008c:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
			L_30 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_1;
			NullCheck(L_30);
			String_t* L_32;
			L_32 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_30, L_31);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_33;
			L_33 = JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870(L_32, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_34;
			L_34 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_0;
			NullCheck(L_34);
			String_t* L_36;
			L_36 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_34, L_35);
			NullCheck(G_B12_0);
			Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657(G_B12_0, 1, L_33, L_36, /*hidden argument*/Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
		}

IL_00ad:
		{
			// }
			goto IL_00c6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{ // begin catch(System.Object)
		{
			// catch
			// RawResponseReturned?.Invoke(ConfigOrigin.Cached, null, null);
			Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_37 = __this->get_RawResponseReturned_7();
			Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_38 = L_37;
			G_B15_0 = L_38;
			if (L_38)
			{
				G_B16_0 = L_38;
				goto IL_00bc;
			}
		}

IL_00b9:
		{
			goto IL_00c4;
		}

IL_00bc:
		{
			NullCheck(G_B16_0);
			Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657(G_B16_0, 1, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, (String_t*)NULL, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var)));
		}

IL_00c4:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c6;
		}
	} // end catch (depth: 1)

IL_00c6:
	{
		// }
		return;
	}
}
// Newtonsoft.Json.Linq.JObject Unity.RemoteConfig.ConfigManagerImpl::CreatePayloadJObjectFromValuesJObject(Newtonsoft.Json.Linq.JObject,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ConfigManagerImpl_CreatePayloadJObjectFromValuesJObject_mF48C2D80EB93AAD2C428B380BBE46E45CAF79420 (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___jObject0, String_t* ___type1, int64_t ___ts2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D362395B63055A4F70D734C14197B3C7D0F862);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jObject.Add("ts", ts);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = ___jObject0;
		int64_t L_1 = ___ts2;
		IL2CPP_RUNTIME_CLASS_INIT(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2;
		L_2 = JToken_op_Implicit_m0332752A7578DE8071A8D9C46E215C27D186B117(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_0, _stringLiteral82D362395B63055A4F70D734C14197B3C7D0F862, L_2, /*hidden argument*/NULL);
		// JObject returnObj = new JObject();
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_3 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_3, /*hidden argument*/NULL);
		// returnObj.Add("type", type);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4 = L_3;
		String_t* L_5 = ___type1;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6;
		L_6 = JToken_op_Implicit_m8635EF135576CFA467C5D8B29809E8DFCB0F6CC6(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_4, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, L_6, /*hidden argument*/NULL);
		// returnObj.Add("msg", jObject);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_7 = L_4;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_8 = ___jObject0;
		NullCheck(L_7);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_7, _stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51, L_8, /*hidden argument*/NULL);
		// return returnObj;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.RemoteConfig.Delivery
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_pinvoke(const Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A& unmarshaled, Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___attributionMetadata_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attributionMetadata' of type 'Delivery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attributionMetadata_4Exception, NULL);
}
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_pinvoke_back(const Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_pinvoke& marshaled, Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A& unmarshaled)
{
	Exception_t* ___attributionMetadata_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attributionMetadata' of type 'Delivery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attributionMetadata_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.Delivery
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_pinvoke_cleanup(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.RemoteConfig.Delivery
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_com(const Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A& unmarshaled, Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_com& marshaled)
{
	Exception_t* ___attributionMetadata_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attributionMetadata' of type 'Delivery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attributionMetadata_4Exception, NULL);
}
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_com_back(const Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_com& marshaled, Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A& unmarshaled)
{
	Exception_t* ___attributionMetadata_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attributionMetadata' of type 'Delivery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attributionMetadata_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.Delivery
IL2CPP_EXTERN_C void Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshal_com_cleanup(Delivery_tDE9CCB42A52AD005E0EDA23AC5C1FED7FD272C2A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.DeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfo__ctor_mB4721195EA871C34F3F2BDE2C6006158A05862ED (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationInstallMode_t77C8EDBEF9103607127666333B859D1DBDD2EA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public DeviceInfo()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// os_ver = SystemInfo.operatingSystem;
		String_t* L_0;
		L_0 = SystemInfo_get_operatingSystem_mF4A5701333A7EB228DDBEF6548200F204B58BEAF(/*hidden argument*/NULL);
		__this->set_os_ver_0(L_0);
		// app_ver = Application.version;
		String_t* L_1;
		L_1 = Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9(/*hidden argument*/NULL);
		__this->set_app_ver_1(L_1);
		// rooted_jailbroken = Application.sandboxType == ApplicationSandboxType.SandboxBroken;
		int32_t L_2;
		L_2 = Application_get_sandboxType_m2C74BF5AFF0F88DE97C54383D712F65C64D6F08A(/*hidden argument*/NULL);
		__this->set_rooted_jailbroken_2((bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0));
		// debug_build = Debug.isDebugBuild;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		__this->set_debug_build_3(L_3);
		// model = GetDeviceModel();
		String_t* L_4;
		L_4 = DeviceInfo_GetDeviceModel_m61446410425CA8C9A631F4A705881B4DFB37DE36(__this, /*hidden argument*/NULL);
		__this->set_model_4(L_4);
		// cpu = SystemInfo.processorType;
		String_t* L_5;
		L_5 = SystemInfo_get_processorType_mA84DD6B72682E1F078486D5D8CAF9CD6E4FB9C4D(/*hidden argument*/NULL);
		__this->set_cpu_5(L_5);
		// cpu_count = SystemInfo.processorCount;
		int32_t L_6;
		L_6 = SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5(/*hidden argument*/NULL);
		__this->set_cpu_count_6(L_6);
		// cpu_freq = SystemInfo.processorFrequency;
		int32_t L_7;
		L_7 = SystemInfo_get_processorFrequency_m0310D22751362753B75552EBECAE2014D1D9E08D(/*hidden argument*/NULL);
		__this->set_cpu_freq_7(L_7);
		// ram = SystemInfo.systemMemorySize;
		int32_t L_8;
		L_8 = SystemInfo_get_systemMemorySize_m40E0CFB6034F14C4FF249C0940CBEC3E7F167EF0(/*hidden argument*/NULL);
		__this->set_ram_8(L_8);
		// vram = SystemInfo.graphicsMemorySize;
		int32_t L_9;
		L_9 = SystemInfo_get_graphicsMemorySize_m774717D305DC07B669D39485DEB4895500714E40(/*hidden argument*/NULL);
		__this->set_vram_9(L_9);
		// screen = Screen.currentResolution.ToString();
		Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  L_10;
		L_10 = Screen_get_currentResolution_mE1A3C7E9603FA56B539FDDA1F602C66732EFD17B(/*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Resolution_ToString_m0F17D03CC087E67DAB7F8F383D86A9D5C3E2587B((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screen_10(L_11);
		// dpi = (int)Screen.dpi;
		float L_12;
		L_12 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		__this->set_dpi_11(il2cpp_codegen_cast_double_to_int<int32_t>(L_12));
		// lang = GetISOCodeFromLangStruct(Application.systemLanguage);
		int32_t L_13;
		L_13 = Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045(/*hidden argument*/NULL);
		String_t* L_14;
		L_14 = DeviceInfo_GetISOCodeFromLangStruct_mABE39C14CC145E3AEF01417C524F5906FCA5F9B9(__this, L_13, /*hidden argument*/NULL);
		__this->set_lang_12(L_14);
		// app_name = Application.identifier;
		String_t* L_15;
		L_15 = Application_get_identifier_m89EF09E9D76342F10C81D4F236C6D4CEFF2825BE(/*hidden argument*/NULL);
		__this->set_app_name_13(L_15);
		// app_install_mode = Application.installMode.ToString();
		int32_t L_16;
		L_16 = Application_get_installMode_mC84C2D2BCC86446F76EBD2BBBAD144BAC5CA4F2D(/*hidden argument*/NULL);
		V_1 = L_16;
		RuntimeObject * L_17 = Box(ApplicationInstallMode_t77C8EDBEF9103607127666333B859D1DBDD2EA75_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_1 = *(int32_t*)UnBox(L_17);
		__this->set_app_install_mode_14(L_18);
		// app_install_store = Application.installerName;
		String_t* L_19;
		L_19 = Application_get_installerName_m9FC9B7E46BA8EE20C5CE79E91DAD187CDE8AC432(/*hidden argument*/NULL);
		__this->set_app_install_store_15(L_19);
		// gfx_device_id = SystemInfo.graphicsDeviceID;
		int32_t L_20;
		L_20 = SystemInfo_get_graphicsDeviceID_mF25513D7FC3A94705110FA00673BEC4D8F7E8218(/*hidden argument*/NULL);
		__this->set_gfx_device_id_16(L_20);
		// gfx_device_vendor_id = SystemInfo.graphicsDeviceVendorID;
		int32_t L_21;
		L_21 = SystemInfo_get_graphicsDeviceVendorID_mC02AC12730B431B84FE0AA74A9F7FDDBA1EEEF40(/*hidden argument*/NULL);
		__this->set_gfx_device_vendor_id_17(L_21);
		// gfx_name = SystemInfo.graphicsDeviceName;
		String_t* L_22;
		L_22 = SystemInfo_get_graphicsDeviceName_m25563DB9012D2DB5EC4CB7A29BA4236926F93F33(/*hidden argument*/NULL);
		__this->set_gfx_name_18(L_22);
		// gfx_vendor = SystemInfo.graphicsDeviceVendor;
		String_t* L_23;
		L_23 = SystemInfo_get_graphicsDeviceVendor_mA70A62E48AF223EA26B119B5428A5B488A4CA136(/*hidden argument*/NULL);
		__this->set_gfx_vendor_19(L_23);
		// gfx_ver = SystemInfo.graphicsDeviceVersion;
		String_t* L_24;
		L_24 = SystemInfo_get_graphicsDeviceVersion_mA74AFB5D881DB29389D2BB05EB37DE60779BABD9(/*hidden argument*/NULL);
		__this->set_gfx_ver_20(L_24);
		// gfx_shader = SystemInfo.graphicsShaderLevel;
		int32_t L_25;
		L_25 = SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95(/*hidden argument*/NULL);
		__this->set_gfx_shader_21(L_25);
		// max_texture_size = SystemInfo.maxTextureSize;
		int32_t L_26;
		L_26 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		__this->set_max_texture_size_22(L_26);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.DeviceInfo::GetDeviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_GetDeviceModel_m61446410425CA8C9A631F4A705881B4DFB37DE36 (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, const RuntimeMethod* method)
{
	{
		// return SystemInfo.deviceModel;
		String_t* L_0;
		L_0 = SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Unity.RemoteConfig.DeviceInfo::GetISOCodeFromLangStruct(UnityEngine.SystemLanguage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_GetISOCodeFromLangStruct_mABE39C14CC145E3AEF01417C524F5906FCA5F9B9 (DeviceInfo_tCAB27B059EA4374E87593EC67BF9AEB973AF55CF * __this, int32_t ___systemLanguage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09DBABCF47D177922630CF7626523A2E035CFB16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C45DB50527FCFAD456E74EB416B617329505309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral220702BCC5C1C54BEDED83D77E4E5425AFBCE65C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral561357A43AFC43D221B9F230B04E836DD73101EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68475E64D3943C9BB7F5E25BD175FCA30A7BAB36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B888C10342DD1C8AE97657EEA10E4A180B3258E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF72B6E90E497119B7EEA6511CFEB06890528B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D63FA1B6FEDA67964D3FCDCB12764101D65571C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D8699446610575017F99BEA3E02DCF807B45CAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F3BE480580F58EE08D437D524BB2A9AD438EE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D927104AAFE48366762B70DC5E7CA34D1C0D5BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral903B8C1EF36009AA876A865426B6853A18141FFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91C5120C562094A257C8FC3C676B64F1E0403765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96681A2B198D42859DB500CC97021274BD2004F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FCE27425740686001DEDF0E34460EF2890AB0C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA31F29C367D53AD7C824C843BE0DEB228E4B5EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5965463376BB283A639934AF66DD9F2A1A062AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD150095AD1723163A0791D57A71CFF29421A88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4729ED69061AF5587EABEA577EE432AC85A94DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5B20EA6805F285482807C61CD81D1509724E3CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE923A0A39342ECBAD1253F5A36CD36E9E72666D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___systemLanguage0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_00b7;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_00c9;
			}
			case 4:
			{
				goto IL_00cf;
			}
			case 5:
			{
				goto IL_00d5;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00e1;
			}
			case 8:
			{
				goto IL_00e7;
			}
			case 9:
			{
				goto IL_00ed;
			}
			case 10:
			{
				goto IL_00f3;
			}
			case 11:
			{
				goto IL_00f9;
			}
			case 12:
			{
				goto IL_00ff;
			}
			case 13:
			{
				goto IL_0105;
			}
			case 14:
			{
				goto IL_010b;
			}
			case 15:
			{
				goto IL_0111;
			}
			case 16:
			{
				goto IL_0117;
			}
			case 17:
			{
				goto IL_011d;
			}
			case 18:
			{
				goto IL_0123;
			}
			case 19:
			{
				goto IL_0129;
			}
			case 20:
			{
				goto IL_012f;
			}
			case 21:
			{
				goto IL_0135;
			}
			case 22:
			{
				goto IL_013b;
			}
			case 23:
			{
				goto IL_0141;
			}
			case 24:
			{
				goto IL_0147;
			}
			case 25:
			{
				goto IL_014d;
			}
			case 26:
			{
				goto IL_0153;
			}
			case 27:
			{
				goto IL_0159;
			}
			case 28:
			{
				goto IL_015f;
			}
			case 29:
			{
				goto IL_0165;
			}
			case 30:
			{
				goto IL_016b;
			}
			case 31:
			{
				goto IL_0171;
			}
			case 32:
			{
				goto IL_0177;
			}
			case 33:
			{
				goto IL_017d;
			}
			case 34:
			{
				goto IL_0183;
			}
			case 35:
			{
				goto IL_0189;
			}
			case 36:
			{
				goto IL_018f;
			}
			case 37:
			{
				goto IL_0195;
			}
			case 38:
			{
				goto IL_019b;
			}
			case 39:
			{
				goto IL_01a7;
			}
			case 40:
			{
				goto IL_00db;
			}
			case 41:
			{
				goto IL_00db;
			}
			case 42:
			{
				goto IL_01a1;
			}
		}
	}
	{
		goto IL_01ad;
	}

IL_00b7:
	{
		// return "af";
		return _stringLiteralDE923A0A39342ECBAD1253F5A36CD36E9E72666D;
	}

IL_00bd:
	{
		// return "ar";
		return _stringLiteral903B8C1EF36009AA876A865426B6853A18141FFA;
	}

IL_00c3:
	{
		// return "eu";
		return _stringLiteral6B888C10342DD1C8AE97657EEA10E4A180B3258E;
	}

IL_00c9:
	{
		// return "be";
		return _stringLiteralB5965463376BB283A639934AF66DD9F2A1A062AA;
	}

IL_00cf:
	{
		// return "bg";
		return _stringLiteral96681A2B198D42859DB500CC97021274BD2004F1;
	}

IL_00d5:
	{
		// return "ca";
		return _stringLiteralBD150095AD1723163A0791D57A71CFF29421A88E;
	}

IL_00db:
	{
		// return "zh";
		return _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6;
	}

IL_00e1:
	{
		// return "cs";
		return _stringLiteral9FCE27425740686001DEDF0E34460EF2890AB0C3;
	}

IL_00e7:
	{
		// return "da";
		return _stringLiteral7D8699446610575017F99BEA3E02DCF807B45CAB;
	}

IL_00ed:
	{
		// return "nl";
		return _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7;
	}

IL_00f3:
	{
		// return "en";
		return _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
	}

IL_00f9:
	{
		// return "et";
		return _stringLiteralD5B20EA6805F285482807C61CD81D1509724E3CC;
	}

IL_00ff:
	{
		// return "fo";
		return _stringLiteral6BF72B6E90E497119B7EEA6511CFEB06890528B4;
	}

IL_0105:
	{
		// return "fi";
		return _stringLiteral91C5120C562094A257C8FC3C676B64F1E0403765;
	}

IL_010b:
	{
		// return "fr";
		return _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
	}

IL_0111:
	{
		// return "de";
		return _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
	}

IL_0117:
	{
		// return "el";
		return _stringLiteral561357A43AFC43D221B9F230B04E836DD73101EB;
	}

IL_011d:
	{
		// return "he";
		return _stringLiteral7D63FA1B6FEDA67964D3FCDCB12764101D65571C;
	}

IL_0123:
	{
		// return "hu";
		return _stringLiteral220702BCC5C1C54BEDED83D77E4E5425AFBCE65C;
	}

IL_0129:
	{
		// return "is";
		return _stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118;
	}

IL_012f:
	{
		// return "id";
		return _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
	}

IL_0135:
	{
		// return "it";
		return _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B;
	}

IL_013b:
	{
		// return "ja";
		return _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309;
	}

IL_0141:
	{
		// return "ko";
		return _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4;
	}

IL_0147:
	{
		// return "lv";
		return _stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF;
	}

IL_014d:
	{
		// return "lt";
		return _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
	}

IL_0153:
	{
		// return "no";
		return _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49;
	}

IL_0159:
	{
		// return "pl";
		return _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53;
	}

IL_015f:
	{
		// return "pt";
		return _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9;
	}

IL_0165:
	{
		// return "ro";
		return _stringLiteral09DBABCF47D177922630CF7626523A2E035CFB16;
	}

IL_016b:
	{
		// return "ru";
		return _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
	}

IL_0171:
	{
		// return "sr";
		return _stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369;
	}

IL_0177:
	{
		// return "sk";
		return _stringLiteral82F3BE480580F58EE08D437D524BB2A9AD438EE4;
	}

IL_017d:
	{
		// return "sl";
		return _stringLiteralC4729ED69061AF5587EABEA577EE432AC85A94DB;
	}

IL_0183:
	{
		// return "es";
		return _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C;
	}

IL_0189:
	{
		// return "sv";
		return _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76;
	}

IL_018f:
	{
		// return "th";
		return _stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A;
	}

IL_0195:
	{
		// return "tk";
		return _stringLiteral68475E64D3943C9BB7F5E25BD175FCA30A7BAB36;
	}

IL_019b:
	{
		// return "uk";
		return _stringLiteralA31F29C367D53AD7C824C843BE0DEB228E4B5EBC;
	}

IL_01a1:
	{
		// return "en";
		return _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
	}

IL_01a7:
	{
		// return "vi";
		return _stringLiteral8D927104AAFE48366762B70DC5E7CA34D1C0D5BE;
	}

IL_01ad:
	{
		// return "en";
		return _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Networking.UnityWebRequest Unity.RemoteConfig.RCUnityWebRequest::get__unityWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		// UnityWebRequest _unityWebRequest { get; set; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3C_unityWebRequestU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set__unityWebRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set__unityWebRequest_m14880BD93291BB8D097A598BB21B0731ADB34227 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		// UnityWebRequest _unityWebRequest { get; set; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3C_unityWebRequestU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_url_m36D430EFA2A0FE0EA97DF3832F2CFAB57997DEA2 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => _unityWebRequest.url = value;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_method_mC9D2CE45C6595B049A0E79901CAE2478FE2EEB8F (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => _unityWebRequest.method = value;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_unityWebRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_unityWebRequest_mB6008FB8EC83908929123249AAFBC867EAFD72D0 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		// set { _unityWebRequest = value; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		RCUnityWebRequest_set__unityWebRequest_m14880BD93291BB8D097A598BB21B0731ADB34227_inline(__this, L_0, /*hidden argument*/NULL);
		// set { _unityWebRequest = value; }
		return;
	}
}
// UnityEngine.Networking.DownloadHandler Unity.RemoteConfig.RCUnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * RCUnityWebRequest_get_downloadHandler_m8852F79EDEA13806B9C485D0CC5CF04266AC0908 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		// get { return _unityWebRequest.downloadHandler; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_1;
		L_1 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_downloadHandler_mA7576B5307184E9C7EFBAA839A4B1110CED29ABF (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method)
{
	{
		// set { _unityWebRequest.downloadHandler = value; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_1 = ___value0;
		NullCheck(L_0);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_0, L_1, /*hidden argument*/NULL);
		// set { _unityWebRequest.downloadHandler = value; }
		return;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_timeout_m0AB25AD212D705ED5248D6BDFA7DB3EFF1973A93 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => _unityWebRequest.timeout = value;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_set_uploadHandler_mBA786E9DDB9D226D36691C0DDF722B6B67DFF113 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method)
{
	{
		// set { _unityWebRequest.uploadHandler = value; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_1 = ___value0;
		NullCheck(L_0);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_0, L_1, /*hidden argument*/NULL);
		// set { _unityWebRequest.uploadHandler = value; }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.RemoteConfig.RCUnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * RCUnityWebRequest_SendWebRequest_mE6340713A0479BC6E434AE8975EE4548821E177A (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		// return _unityWebRequest.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1;
		L_1 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest_SetRequestHeader_m2F8DDBFF29DD5A8AA5714ED1099B73449E8AAA94 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// _unityWebRequest.SetRequestHeader(name, value);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.RemoteConfig.RCUnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * RCUnityWebRequest_GetResponseHeaders_m1C5124D111D02BA2021FAD5DDF3049B1382CD6C0 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		// return _unityWebRequest.GetResponseHeaders();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0;
		L_0 = RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1;
		L_1 = UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.RCUnityWebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCUnityWebRequest__ctor_m142B368D818464241DA17BEE77B05444A0A99F65 (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.RemoteConfig.RequestHeaderTuple
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_pinvoke(const RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A& unmarshaled, RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_pinvoke& marshaled)
{
	marshaled.___key_0 = il2cpp_codegen_marshal_string(unmarshaled.get_key_0());
	marshaled.___value_1 = il2cpp_codegen_marshal_string(unmarshaled.get_value_1());
}
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_pinvoke_back(const RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_pinvoke& marshaled, RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A& unmarshaled)
{
	unmarshaled.set_key_0(il2cpp_codegen_marshal_string_result(marshaled.___key_0));
	unmarshaled.set_value_1(il2cpp_codegen_marshal_string_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.RequestHeaderTuple
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_pinvoke_cleanup(RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key_0);
	marshaled.___key_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
// Conversion methods for marshalling of: Unity.RemoteConfig.RequestHeaderTuple
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_com(const RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A& unmarshaled, RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_com& marshaled)
{
	marshaled.___key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key_0());
	marshaled.___value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_value_1());
}
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_com_back(const RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_com& marshaled, RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A& unmarshaled)
{
	unmarshaled.set_key_0(il2cpp_codegen_marshal_bstring_result(marshaled.___key_0));
	unmarshaled.set_value_1(il2cpp_codegen_marshal_bstring_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.RequestHeaderTuple
IL2CPP_EXTERN_C void RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshal_com_cleanup(RequestHeaderTuple_tF1B8F79BAD5EF29A4E1797A12734921DD120CA6A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key_0);
	marshaled.___key_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(Unity.RemoteConfig.ConfigManagerImpl,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mDE17AB3B8CAA70AB52BB130150EA7F68AF162B7A (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * ____configmanagerImpl0, String_t* ___configKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m0F44352139715FC815071A594578E016F8EB621E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_ConfigManager_ResponseParsed_mE9F90A97E78A39F017BE4CB69FD80655D96A22AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonSerializerSettings rawDateSettings = new JsonSerializerSettings { DateParseHandling = DateParseHandling.None };
		JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_0 = (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D *)il2cpp_codegen_object_new(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m53ECCEB578642D4DEA4F22297AB5FEBF95AB6C5F(L_0, /*hidden argument*/NULL);
		JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_DateParseHandling_mA0D6B843E9CA222035E9D3674508D4B9C3D1D85D(L_1, 0, /*hidden argument*/NULL);
		__this->set_rawDateSettings_4(L_1);
		// internal RuntimeConfig(ConfigManagerImpl _configmanagerImpl, string configKey)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.configKey = configKey;
		String_t* L_2 = ___configKey1;
		__this->set_configKey_3(L_2);
		// _configmanagerImpl.ResponseParsed += ConfigManager_ResponseParsed;
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_3 = ____configmanagerImpl0;
		Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 * L_4 = (Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96 *)il2cpp_codegen_object_new(Action_2_tDF11E7CBB8FA056174CFBAB6E55BE8ABCBAF4A96_il2cpp_TypeInfo_var);
		Action_2__ctor_m0F44352139715FC815071A594578E016F8EB621E(L_4, __this, (intptr_t)((intptr_t)RuntimeConfig_ConfigManager_ResponseParsed_mE9F90A97E78A39F017BE4CB69FD80655D96A22AB_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0F44352139715FC815071A594578E016F8EB621E_RuntimeMethod_var);
		NullCheck(L_3);
		ConfigManagerImpl_add_ResponseParsed_m7077923013FF9ED2E17FBB2756E9BF0C142FBD37(L_3, L_4, /*hidden argument*/NULL);
		// origin = ConfigOrigin.Default;
		RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline(__this, 0, /*hidden argument*/NULL);
		// _config = new JObject();
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_5, /*hidden argument*/NULL);
		__this->set__config_1(L_5);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::ConfigManager_ResponseParsed(Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_ConfigManager_ResponseParsed_mE9F90A97E78A39F017BE4CB69FD80655D96A22AB (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___configResponse0, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(configResponse.status == ConfigRequestStatus.Success)
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_0 = ___configResponse0;
		int32_t L_1 = L_0.get_status_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (obj[configKey] != null && obj[configKey + "Metadata"] != null)
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = ___obj1;
		String_t* L_3 = __this->get_configKey_3();
		NullCheck(L_2);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_4;
		L_4 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0073;
		}
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5 = ___obj1;
		String_t* L_6 = __this->get_configKey_3();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50, /*hidden argument*/NULL);
		NullCheck(L_5);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_8;
		L_8 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		// _config = (JObject)obj[configKey];
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_9 = ___obj1;
		String_t* L_10 = __this->get_configKey_3();
		NullCheck(L_9);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_11;
		L_11 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_9, L_10, /*hidden argument*/NULL);
		__this->set__config_1(((JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)CastclassClass((RuntimeObject*)L_11, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var)));
		// metadata = (JObject)obj[configKey + "Metadata"];
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_12 = ___obj1;
		String_t* L_13 = __this->get_configKey_3();
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_13, _stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50, /*hidden argument*/NULL);
		NullCheck(L_12);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_15;
		L_15 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_12, L_14, /*hidden argument*/NULL);
		__this->set_metadata_2(((JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)CastclassClass((RuntimeObject*)L_15, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var)));
		// origin = configResponse.requestOrigin;
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_16 = ___configResponse0;
		int32_t L_17 = L_16.get_requestOrigin_0();
		RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline(__this, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.RuntimeConfig::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeConfig_GetString_m029FFBFC6C7292ADD821E9031DEB20BB77DCFF3C (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var formattedInputString = string.IsNullOrEmpty(_config[key].Value<string>()) ? "" : _config[key].Value<string>();
			JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = __this->get__config_1();
			String_t* L_1 = ___key0;
			NullCheck(L_0);
			JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2;
			L_2 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_0, L_1, /*hidden argument*/NULL);
			String_t* L_3;
			L_3 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_2, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
			bool L_4;
			L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_002b;
			}
		}

IL_0018:
		{
			JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5 = __this->get__config_1();
			String_t* L_6 = ___key0;
			NullCheck(L_5);
			JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_7;
			L_7 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_5, L_6, /*hidden argument*/NULL);
			String_t* L_8;
			L_8 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_7, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
			G_B3_0 = L_8;
			goto IL_0030;
		}

IL_002b:
		{
			G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_0030:
		{
			V_0 = G_B3_0;
			// if (DateTime.TryParse(formattedInputString, out dateValue))
			String_t* L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = DateTime_TryParse_m80676B92D2288E67796D792D3DC11E410C037B48(L_9, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0062;
			}
		}

IL_003b:
		{
			// formattedInputString = JsonConvert.SerializeObject(_config[key], rawDateSettings).Replace("\"", "");
			JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_11 = __this->get__config_1();
			String_t* L_12 = ___key0;
			NullCheck(L_11);
			JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_13;
			L_13 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_11, L_12, /*hidden argument*/NULL);
			JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_14 = __this->get_rawDateSettings_4();
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
			String_t* L_15;
			L_15 = JsonConvert_SerializeObject_m9CDFD4212D2FD7A869DFBF995F8522B668E1691D(L_13, L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_15, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			V_0 = L_16;
		}

IL_0062:
		{
			// return formattedInputString;
			String_t* L_17 = V_0;
			V_2 = L_17;
			goto IL_006b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0066:
	{ // begin catch(System.Object)
		// catch
		// return defaultValue;
		String_t* L_18 = ___defaultValue1;
		V_2 = L_18;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		// }
		String_t* L_19 = V_2;
		return L_19;
	}
}
// System.String[] Unity.RemoteConfig.RuntimeConfig::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* RuntimeConfig_GetKeys_m0705D1BD9B92B2E772D3F61CED8E740581C0FA1E (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisJProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_TisString_t_m81B31D4689EBDDB75A2523DC717067C204DAEA74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m5641FD05A82FD0950094A6048DBD371E45498CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetKeysU3Eb__22_0_m89878E36CEAB46274D110F87C0C4728CEE022089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return _config.Properties().Select(prop => prop.Name).ToArray<string>();
			JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = __this->get__config_1();
			NullCheck(L_0);
			RuntimeObject* L_1;
			L_1 = JObject_Properties_mA31AEBC48D1DE4EBE7AEDCE2E77E1D4B951DF71B(L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var);
			Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * L_2 = ((U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var))->get_U3CU3E9__22_0_1();
			Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * L_3 = L_2;
			G_B1_0 = L_3;
			G_B1_1 = L_1;
			if (L_3)
			{
				G_B2_0 = L_3;
				G_B2_1 = L_1;
				goto IL_002a;
			}
		}

IL_0013:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var);
			U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * L_4 = ((U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * L_5 = (Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F *)il2cpp_codegen_object_new(Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F_il2cpp_TypeInfo_var);
			Func_2__ctor_m5641FD05A82FD0950094A6048DBD371E45498CDF(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetKeysU3Eb__22_0_m89878E36CEAB46274D110F87C0C4728CEE022089_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m5641FD05A82FD0950094A6048DBD371E45498CDF_RuntimeMethod_var);
			Func_2_tBA633F3852750B235198CA2A183F07BEBF211B6F * L_6 = L_5;
			((U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var))->set_U3CU3E9__22_0_1(L_6);
			G_B2_0 = L_6;
			G_B2_1 = G_B1_1;
		}

IL_002a:
		{
			RuntimeObject* L_7;
			L_7 = Enumerable_Select_TisJProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_TisString_t_m81B31D4689EBDDB75A2523DC717067C204DAEA74(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisJProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_TisString_t_m81B31D4689EBDDB75A2523DC717067C204DAEA74_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
			L_8 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_7, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
			V_0 = L_8;
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.Object)
		// catch
		// return new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)0);
		V_0 = L_9;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		// }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m197A66AB392091AE7A8BF08356A6C70B4B6FC92F (U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManagerImpl/<>c__DisplayClass38_0::<DoRequest>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CDoRequestU3Eb__0_mEACB3E526A443187300B02C83D5FF0A6AC95249A (U3CU3Ec__DisplayClass38_0_t27CF5E252C424B295613E51458FA198B7AB702E6 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B4_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B3_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B7_0 = NULL;
	Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * G_B6_0 = NULL;
	{
		// var origin = ConfigOrigin.Remote;
		V_0 = 2;
		// var response = ((UnityWebRequestAsyncOperation)op).webRequest;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___op0;
		NullCheck(((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var)));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1;
		L_1 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_1;
		// var configResponse = new ConfigResponse() { requestOrigin = origin, status = requestStatus };
		il2cpp_codegen_initobj((&V_3), sizeof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 ));
		int32_t L_2 = V_0;
		(&V_3)->set_requestOrigin_0(L_2);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ConfigManagerImpl_get_requestStatus_m50D8C808D10FEEFF750CFE7BDD2C56C2E198608D_inline(L_3, /*hidden argument*/NULL);
		(&V_3)->set_status_1(L_4);
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_5 = V_3;
		V_2 = L_5;
		// if (response.isHttpError || response.isNetworkError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_0042:
	{
		// configResponse.status = ConfigRequestStatus.Failed;
		(&V_2)->set_status_1(1);
		// FetchCompleted?.Invoke(configResponse);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_11 = L_10->get_FetchCompleted_1();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_005a:
	{
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_13 = V_2;
		NullCheck(G_B4_0);
		Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD(G_B4_0, L_13, /*hidden argument*/Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
		// }
		return;
	}

IL_0061:
	{
		// RawResponseReturned?.Invoke(origin, request.GetResponseHeaders(), request.downloadHandler.text);
		ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * L_14 = __this->get_U3CU3E4__this_0();
		NullCheck(L_14);
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_15 = L_14->get_RawResponseReturned_7();
		Action_3_t596ECF8C2E58326832845E3C8E2859F057BE6AB8 * L_16 = L_15;
		G_B6_0 = L_16;
		if (L_16)
		{
			G_B7_0 = L_16;
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0071:
	{
		int32_t L_17 = V_0;
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_18 = __this->get_request_1();
		NullCheck(L_18);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_19;
		L_19 = RCUnityWebRequest_GetResponseHeaders_m1C5124D111D02BA2021FAD5DDF3049B1382CD6C0(L_18, /*hidden argument*/NULL);
		RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * L_20 = __this->get_request_1();
		NullCheck(L_20);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_21;
		L_21 = RCUnityWebRequest_get_downloadHandler_m8852F79EDEA13806B9C485D0CC5CF04266AC0908(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_21, /*hidden argument*/NULL);
		NullCheck(G_B7_0);
		Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657(G_B7_0, L_17, L_19, L_22, /*hidden argument*/Action_3_Invoke_mF3888F8AEDA4971BEEB1D9478BD559E633F88657_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.RuntimeConfig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD5897101A78811E56D311773312B85B501DCA715 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * L_0 = (U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 *)il2cpp_codegen_object_new(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF5050A49DA433ABD9C22DE74209898B2BA1D8C9C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5050A49DA433ABD9C22DE74209898B2BA1D8C9C (U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.RemoteConfig.RuntimeConfig/<>c::<GetKeys>b__22_0(Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetKeysU3Eb__22_0_m89878E36CEAB46274D110F87C0C4728CEE022089 (U3CU3Ec_t90E4C33151515EE602A6329F7CD4F442AFC7A158 * __this, JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * ___prop0, const RuntimeMethod* method)
{
	{
		// return _config.Properties().Select(prop => prop.Name).ToArray<string>();
		JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * L_0 = ___prop0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_mBCAD9B4CCB7370261E0F38A6C46A343BB7E7E347_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManagerImpl_get_appConfig_mC19E6779139EF09771E595D3845E1EFA4FD882D2_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method)
{
	{
		// public RuntimeConfig appConfig { get; internal set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = __this->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_appConfig_m7868406138C7BBD693E1F35CB26B1FC0E599FA81_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method)
{
	{
		// public RuntimeConfig appConfig { get; internal set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ___value0;
		__this->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManagerImpl_set_requestStatus_m6A5BB4D3E960D81499FE678417FCE6F6DFAB22B1_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigRequestStatus requestStatus { get;  internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RCUnityWebRequest_get__unityWebRequest_mA154BCF4C261FFEF28698665835636221A296DE9_inline (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, const RuntimeMethod* method)
{
	{
		// UnityWebRequest _unityWebRequest { get; set; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3C_unityWebRequestU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RCUnityWebRequest_set__unityWebRequest_m14880BD93291BB8D097A598BB21B0731ADB34227_inline (RCUnityWebRequest_t1D0BABAAA3FDB1A742A6CCDD5F447AF1C9BF3D7D * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		// UnityWebRequest _unityWebRequest { get; set; }
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3C_unityWebRequestU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigManagerImpl_get_requestStatus_m50D8C808D10FEEFF750CFE7BDD2C56C2E198608D_inline (ConfigManagerImpl_t09C88076002691C93DABBDA4BFF0CD548C951249 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigRequestStatus requestStatus { get;  internal set; }
		int32_t L_0 = __this->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mBCAD9B4CCB7370261E0F38A6C46A343BB7E7E347_inline (JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
