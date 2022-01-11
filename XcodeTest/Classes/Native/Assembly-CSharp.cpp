#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0;
// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t6CEED8910660964668522055C0010B575E62C702;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct KeyCollection_t8FD22D160F6731C6086DFE2C38A06064C1B83CA0;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct ValueCollection_t07262ABA054FD860FDC4F724BB9BA00FFA5352B5;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GooglePlayGames.BasicApi.SignInStatus>[]
struct EntryU5BU5D_tAF2AD66C8DFE2D1B1AAA66D6CE8AA9373D558FAE;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_t7AE6DC94E2811A1EEC5BD5E1FA998194B4A24BA6;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288;
// GooglePlayGames.BasicApi.Events.Event
struct Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tA0A82FBB5E43647C4B6D09AF94D83FAEE3A4BA9F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_tBB651FD35E23180071D14340E1ADDA4AFB8108FB;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// GooglePlayGames.OurUtils.Logger
struct Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627;
// GooglePlayGames.PluginVersion
struct PluginVersion_t8ABDB0F138CB6374640EA74CA8184CD30F4451DE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99;
// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83;
IL2CPP_EXTERN_C String_t* _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
IL2CPP_EXTERN_C String_t* _stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C;
IL2CPP_EXTERN_C String_t* _stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C;
IL2CPP_EXTERN_C String_t* _stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC8257C81BFA99DB72E6DECCCC7D48A153B07F4B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1E0374F7772D61C55BB8D113087909F05334FF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7CCCFC604983CC8270CBEBDB4CACAE0067A48B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_m5E0B51D6FAD3210C75AD4063320A37C8EDAB02EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_m60BF4AEEC67B78D38EBB2BE5B0EFA02EFE38219C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_GetSubsetBytes_m42F346DC56B57560FA42A28D394CECEA06D33B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToLogMessageU3Eb__12_0_m28B459EA6793E803EF6E9BDF57EA6E3A4321E473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mB0BF079147E3BB2E745DA9CEA7909FF46A8681A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m2C7AEA8F2EF8D1BDBCE906816617775FE3211C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m599E78A3E539005154714D11FB570AFA7314E418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m20E0F0DADA4A9E5C1967656ABAC89551D14F3BFF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288;;
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com;
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com;;
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke;
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAF2AD66C8DFE2D1B1AAA66D6CE8AA9373D558FAE* ___entries_1;
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
	KeyCollection_t8FD22D160F6731C6086DFE2C38A06064C1B83CA0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t07262ABA054FD860FDC4F724BB9BA00FFA5352B5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___entries_1)); }
	inline EntryU5BU5D_tAF2AD66C8DFE2D1B1AAA66D6CE8AA9373D558FAE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAF2AD66C8DFE2D1B1AAA66D6CE8AA9373D558FAE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAF2AD66C8DFE2D1B1AAA66D6CE8AA9373D558FAE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___keys_7)); }
	inline KeyCollection_t8FD22D160F6731C6086DFE2C38A06064C1B83CA0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8FD22D160F6731C6086DFE2C38A06064C1B83CA0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8FD22D160F6731C6086DFE2C38A06064C1B83CA0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ___values_8)); }
	inline ValueCollection_t07262ABA054FD860FDC4F724BB9BA00FFA5352B5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t07262ABA054FD860FDC4F724BB9BA00FFA5352B5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t07262ABA054FD860FDC4F724BB9BA00FFA5352B5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____items_1)); }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_StaticFields, ____emptyArray_5)); }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_t7AE6DC94E2811A1EEC5BD5E1FA998194B4A24BA6  : public RuntimeObject
{
public:

public:
};


// GPGSIds
struct GPGSIds_tE10CFDC26A18093DA76E02C1503D3AE38EEA425C  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.OurUtils.Logger
struct Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207  : public RuntimeObject
{
public:

public:
};

struct Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields
{
public:
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;

public:
	inline static int32_t get_offset_of_debugLogEnabled_0() { return static_cast<int32_t>(offsetof(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields, ___debugLogEnabled_0)); }
	inline bool get_debugLogEnabled_0() const { return ___debugLogEnabled_0; }
	inline bool* get_address_of_debugLogEnabled_0() { return &___debugLogEnabled_0; }
	inline void set_debugLogEnabled_0(bool value)
	{
		___debugLogEnabled_0 = value;
	}

	inline static int32_t get_offset_of_warningLogEnabled_1() { return static_cast<int32_t>(offsetof(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields, ___warningLogEnabled_1)); }
	inline bool get_warningLogEnabled_1() const { return ___warningLogEnabled_1; }
	inline bool* get_address_of_warningLogEnabled_1() { return &___warningLogEnabled_1; }
	inline void set_warningLogEnabled_1(bool value)
	{
		___warningLogEnabled_1 = value;
	}
};


// GooglePlayGames.OurUtils.Misc
struct Misc_tF9F278F8204D8407C5CD75E7B938F3F1936AB956  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.PluginVersion
struct PluginVersion_t8ABDB0F138CB6374640EA74CA8184CD30F4451DE  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6  : public RuntimeObject
{
public:

public:
};

struct SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::True
	int32_t ___True_0;
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::False
	int32_t ___False_1;

public:
	inline static int32_t get_offset_of_True_0() { return static_cast<int32_t>(offsetof(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields, ___True_0)); }
	inline int32_t get_True_0() const { return ___True_0; }
	inline int32_t* get_address_of_True_0() { return &___True_0; }
	inline void set_True_0(int32_t value)
	{
		___True_0 = value;
	}

	inline static int32_t get_offset_of_False_1() { return static_cast<int32_t>(offsetof(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields, ___False_1)); }
	inline int32_t get_False_1() const { return ___False_1; }
	inline int32_t* get_address_of_False_1() { return &___False_1; }
	inline void set_False_1(int32_t value)
	{
		___False_1 = value;
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

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___mQualityLevelsSupported_4;

public:
	inline static int32_t get_offset_of_mIsCameraSupported_0() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsCameraSupported_0)); }
	inline bool get_mIsCameraSupported_0() const { return ___mIsCameraSupported_0; }
	inline bool* get_address_of_mIsCameraSupported_0() { return &___mIsCameraSupported_0; }
	inline void set_mIsCameraSupported_0(bool value)
	{
		___mIsCameraSupported_0 = value;
	}

	inline static int32_t get_offset_of_mIsMicSupported_1() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsMicSupported_1)); }
	inline bool get_mIsMicSupported_1() const { return ___mIsMicSupported_1; }
	inline bool* get_address_of_mIsMicSupported_1() { return &___mIsMicSupported_1; }
	inline void set_mIsMicSupported_1(bool value)
	{
		___mIsMicSupported_1 = value;
	}

	inline static int32_t get_offset_of_mIsWriteStorageSupported_2() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsWriteStorageSupported_2)); }
	inline bool get_mIsWriteStorageSupported_2() const { return ___mIsWriteStorageSupported_2; }
	inline bool* get_address_of_mIsWriteStorageSupported_2() { return &___mIsWriteStorageSupported_2; }
	inline void set_mIsWriteStorageSupported_2(bool value)
	{
		___mIsWriteStorageSupported_2 = value;
	}

	inline static int32_t get_offset_of_mCaptureModesSupported_3() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mCaptureModesSupported_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_mCaptureModesSupported_3() const { return ___mCaptureModesSupported_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_mCaptureModesSupported_3() { return &___mCaptureModesSupported_3; }
	inline void set_mCaptureModesSupported_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___mCaptureModesSupported_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCaptureModesSupported_3), (void*)value);
	}

	inline static int32_t get_offset_of_mQualityLevelsSupported_4() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mQualityLevelsSupported_4)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_mQualityLevelsSupported_4() const { return ___mQualityLevelsSupported_4; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_mQualityLevelsSupported_4() { return &___mQualityLevelsSupported_4; }
	inline void set_mQualityLevelsSupported_4(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___mQualityLevelsSupported_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mQualityLevelsSupported_4), (void*)value);
	}
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

// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields
{
public:
	// GooglePlayGames.OurUtils.Logger/<>c GooglePlayGames.OurUtils.Logger/<>c::<>9
	U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * ___U3CU3E9_0;
	// System.Action GooglePlayGames.OurUtils.Logger/<>c::<>9__12_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>
struct Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___list_0)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_list_0() const { return ___list_0; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___current_3)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_current_3() const { return ___current_3; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
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


// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;

public:
	inline static int32_t get_offset_of_mInitializationCallback_2() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967, ___mInitializationCallback_2)); }
	inline Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * get_mInitializationCallback_2() const { return ___mInitializationCallback_2; }
	inline Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 ** get_address_of_mInitializationCallback_2() { return &___mInitializationCallback_2; }
	inline void set_mInitializationCallback_2(Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * value)
	{
		___mInitializationCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInitializationCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_mLocalClientId_3() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967, ___mLocalClientId_3)); }
	inline int64_t get_mLocalClientId_3() const { return ___mLocalClientId_3; }
	inline int64_t* get_address_of_mLocalClientId_3() { return &___mLocalClientId_3; }
	inline void set_mLocalClientId_3(int64_t value)
	{
		___mLocalClientId_3 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy
struct ConflictResolutionStrategy_t8684F345D2B2B3161F672F8D75C5F877217742A4 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConflictResolutionStrategy_t8684F345D2B2B3161F672F8D75C5F877217742A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B 
{
public:
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mPayload_1;

public:
	inline static int32_t get_offset_of_mRemoteEndpoint_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B, ___mRemoteEndpoint_0)); }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  get_mRemoteEndpoint_0() const { return ___mRemoteEndpoint_0; }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * get_address_of_mRemoteEndpoint_0() { return &___mRemoteEndpoint_0; }
	inline void set_mRemoteEndpoint_0(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  value)
	{
		___mRemoteEndpoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mPayload_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B, ___mPayload_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mPayload_1() const { return ___mPayload_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mPayload_1() { return &___mPayload_1; }
	inline void set_mPayload_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mPayload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_com
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// GooglePlayGames.BasicApi.DataSource
struct DataSource_t303E83998F93014F016964CEBBF43D0DD8829825 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.DataSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataSource_t303E83998F93014F016964CEBBF43D0DD8829825, ___value___2)); }
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

// GooglePlayGames.BasicApi.Events.EventVisibility
struct EventVisibility_t8E2509CE94C7A012FC15C91D47DF7B980E07F80B 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Events.EventVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventVisibility_t8E2509CE94C7A012FC15C91D47DF7B980E07F80B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// GooglePlayGames.BasicApi.FriendsListVisibilityStatus
struct FriendsListVisibilityStatus_t353204B8A8C11D7ED64F59483F10A0C2010402FD 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.FriendsListVisibilityStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FriendsListVisibilityStatus_t353204B8A8C11D7ED64F59483F10A0C2010402FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Gravity
struct Gravity_t93AFD5C64E24F5E7FE400558EFA43BEFED8778C8 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Gravity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Gravity_t93AFD5C64E24F5E7FE400558EFA43BEFED8778C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.InitializationStatus
struct InitializationStatus_t8592B0F11F97A79EE9E0DFA2818B9BB31D52320D 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.InitializationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationStatus_t8592B0F11F97A79EE9E0DFA2818B9BB31D52320D, ___value___2)); }
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


// GooglePlayGames.BasicApi.LeaderboardCollection
struct LeaderboardCollection_tC3638B09024F3416BA7A76950E28BB3E1E30A63A 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardCollection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardCollection_tC3638B09024F3416BA7A76950E28BB3E1E30A63A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardStart
struct LeaderboardStart_tA89CB6EC417B4FC23F741FD900750434D32A0E0F 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardStart::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardStart_tA89CB6EC417B4FC23F741FD900750434D32A0E0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardTimeSpan
struct LeaderboardTimeSpan_t841AD02F4AAB745A9683498796B3F19BF1499A20 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardTimeSpan::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardTimeSpan_t841AD02F4AAB745A9683498796B3F19BF1499A20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LoadFriendsStatus
struct LoadFriendsStatus_t14AB28B64E647E2B64ED77E90F83DC1D61834265 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LoadFriendsStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadFriendsStatus_t14AB28B64E647E2B64ED77E90F83DC1D61834265, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GooglePlayGames.BasicApi.ResponseStatus
struct ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus
struct SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus
struct SelectUIStatus_tE3BC39A02A1CD04825A49B705478FE3E32F38EC3 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SelectUIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectUIStatus_tE3BC39A02A1CD04825A49B705478FE3E32F38EC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInInteractivity
struct SignInInteractivity_t49D2984050DB1F6918E15969E5592E9CB5E4A65F 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInInteractivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInInteractivity_t49D2984050DB1F6918E15969E5592E9CB5E4A65F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// GooglePlayGames.BasicApi.UIStatus
struct UIStatus_t34F64DC1927A392210216047169D4E196183BD14 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.UIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIStatus_t34F64DC1927A392210216047169D4E196183BD14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.VideoCaptureMode
struct VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.VideoCaptureOverlayState
struct VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureOverlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.VideoQualityLevel
struct VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoQualityLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status
struct Status_t2A40B1117B3DA0A9707437CCAA60368A4D1345AB 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t2A40B1117B3DA0A9707437CCAA60368A4D1345AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E 
{
public:
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;

public:
	inline static int32_t get_offset_of_mStatus_0() { return static_cast<int32_t>(offsetof(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E, ___mStatus_0)); }
	inline int32_t get_mStatus_0() const { return ___mStatus_0; }
	inline int32_t* get_address_of_mStatus_0() { return &___mStatus_0; }
	inline void set_mStatus_0(int32_t value)
	{
		___mStatus_0 = value;
	}

	inline static int32_t get_offset_of_mLocalEndpointName_1() { return static_cast<int32_t>(offsetof(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E, ___mLocalEndpointName_1)); }
	inline String_t* get_mLocalEndpointName_1() const { return ___mLocalEndpointName_1; }
	inline String_t** get_address_of_mLocalEndpointName_1() { return &___mLocalEndpointName_1; }
	inline void set_mLocalEndpointName_1(String_t* value)
	{
		___mLocalEndpointName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalEndpointName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 
{
public:
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mPayload_4;

public:
	inline static int32_t get_offset_of_mLocalClientId_1() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mLocalClientId_1)); }
	inline int64_t get_mLocalClientId_1() const { return ___mLocalClientId_1; }
	inline int64_t* get_address_of_mLocalClientId_1() { return &___mLocalClientId_1; }
	inline void set_mLocalClientId_1(int64_t value)
	{
		___mLocalClientId_1 = value;
	}

	inline static int32_t get_offset_of_mRemoteEndpointId_2() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mRemoteEndpointId_2)); }
	inline String_t* get_mRemoteEndpointId_2() const { return ___mRemoteEndpointId_2; }
	inline String_t** get_address_of_mRemoteEndpointId_2() { return &___mRemoteEndpointId_2; }
	inline void set_mRemoteEndpointId_2(String_t* value)
	{
		___mRemoteEndpointId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRemoteEndpointId_2), (void*)value);
	}

	inline static int32_t get_offset_of_mResponseStatus_3() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mResponseStatus_3)); }
	inline int32_t get_mResponseStatus_3() const { return ___mResponseStatus_3; }
	inline int32_t* get_address_of_mResponseStatus_3() { return &___mResponseStatus_3; }
	inline void set_mResponseStatus_3(int32_t value)
	{
		___mResponseStatus_3 = value;
	}

	inline static int32_t get_offset_of_mPayload_4() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mPayload_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mPayload_4() const { return ___mPayload_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mPayload_4() { return &___mPayload_4; }
	inline void set_mPayload_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mPayload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_4), (void*)value);
	}
};

struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields
{
public:
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyPayload_0;

public:
	inline static int32_t get_offset_of_EmptyPayload_0() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields, ___EmptyPayload_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyPayload_0() const { return ___EmptyPayload_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyPayload_0() { return &___EmptyPayload_0; }
	inline void set_EmptyPayload_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyPayload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyPayload_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_2() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mDescription_2)); }
	inline String_t* get_mDescription_2() const { return ___mDescription_2; }
	inline String_t** get_address_of_mDescription_2() { return &___mDescription_2; }
	inline void set_mDescription_2(String_t* value)
	{
		___mDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_2), (void*)value);
	}

	inline static int32_t get_offset_of_mImageUrl_3() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mImageUrl_3)); }
	inline String_t* get_mImageUrl_3() const { return ___mImageUrl_3; }
	inline String_t** get_address_of_mImageUrl_3() { return &___mImageUrl_3; }
	inline void set_mImageUrl_3(String_t* value)
	{
		___mImageUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentCount_4() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mCurrentCount_4)); }
	inline uint64_t get_mCurrentCount_4() const { return ___mCurrentCount_4; }
	inline uint64_t* get_address_of_mCurrentCount_4() { return &___mCurrentCount_4; }
	inline void set_mCurrentCount_4(uint64_t value)
	{
		___mCurrentCount_4 = value;
	}

	inline static int32_t get_offset_of_mVisibility_5() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mVisibility_5)); }
	inline int32_t get_mVisibility_5() const { return ___mVisibility_5; }
	inline int32_t* get_address_of_mVisibility_5() { return &___mVisibility_5; }
	inline void set_mVisibility_5(int32_t value)
	{
		___mVisibility_5 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;

public:
	inline static int32_t get_offset_of_mIsCapturing_0() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsCapturing_0)); }
	inline bool get_mIsCapturing_0() const { return ___mIsCapturing_0; }
	inline bool* get_address_of_mIsCapturing_0() { return &___mIsCapturing_0; }
	inline void set_mIsCapturing_0(bool value)
	{
		___mIsCapturing_0 = value;
	}

	inline static int32_t get_offset_of_mCaptureMode_1() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mCaptureMode_1)); }
	inline int32_t get_mCaptureMode_1() const { return ___mCaptureMode_1; }
	inline int32_t* get_address_of_mCaptureMode_1() { return &___mCaptureMode_1; }
	inline void set_mCaptureMode_1(int32_t value)
	{
		___mCaptureMode_1 = value;
	}

	inline static int32_t get_offset_of_mQualityLevel_2() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mQualityLevel_2)); }
	inline int32_t get_mQualityLevel_2() const { return ___mQualityLevel_2; }
	inline int32_t* get_address_of_mQualityLevel_2() { return &___mQualityLevel_2; }
	inline void set_mQualityLevel_2(int32_t value)
	{
		___mQualityLevel_2 = value;
	}

	inline static int32_t get_offset_of_mIsOverlayVisible_3() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsOverlayVisible_3)); }
	inline bool get_mIsOverlayVisible_3() const { return ___mIsOverlayVisible_3; }
	inline bool* get_address_of_mIsOverlayVisible_3() { return &___mIsOverlayVisible_3; }
	inline void set_mIsOverlayVisible_3(bool value)
	{
		___mIsOverlayVisible_3 = value;
	}

	inline static int32_t get_offset_of_mIsPaused_4() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsPaused_4)); }
	inline bool get_mIsPaused_4() const { return ___mIsPaused_4; }
	inline bool* get_address_of_mIsPaused_4() { return &___mIsPaused_4; }
	inline void set_mIsPaused_4(bool value)
	{
		___mIsPaused_4 = value;
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___localQueue_7;

public:
	inline static int32_t get_offset_of_localQueue_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627, ___localQueue_7)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_localQueue_7() const { return ___localQueue_7; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_localQueue_7() { return &___localQueue_7; }
	inline void set_localQueue_7(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___localQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localQueue_7), (void*)value);
	}
};

struct PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sFocusCallbackList_10;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___instance_4)); }
	inline PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * get_instance_4() const { return ___instance_4; }
	inline PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_sIsDummy_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sIsDummy_5)); }
	inline bool get_sIsDummy_5() const { return ___sIsDummy_5; }
	inline bool* get_address_of_sIsDummy_5() { return &___sIsDummy_5; }
	inline void set_sIsDummy_5(bool value)
	{
		___sIsDummy_5 = value;
	}

	inline static int32_t get_offset_of_sQueue_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sQueue_6)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_sQueue_6() const { return ___sQueue_6; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_sQueue_6() { return &___sQueue_6; }
	inline void set_sQueue_6(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___sQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sQueueEmpty_8)); }
	inline bool get_sQueueEmpty_8() const { return ___sQueueEmpty_8; }
	inline bool* get_address_of_sQueueEmpty_8() { return &___sQueueEmpty_8; }
	inline void set_sQueueEmpty_8(bool value)
	{
		___sQueueEmpty_8 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_9() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sPauseCallbackList_9)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sPauseCallbackList_9() const { return ___sPauseCallbackList_9; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sPauseCallbackList_9() { return &___sPauseCallbackList_9; }
	inline void set_sPauseCallbackList_9(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sPauseCallbackList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sPauseCallbackList_9), (void*)value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_10() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sFocusCallbackList_10)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sFocusCallbackList_10() const { return ___sFocusCallbackList_10; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sFocusCallbackList_10() { return &___sFocusCallbackList_10; }
	inline void set_sFocusCallbackList_10(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sFocusCallbackList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFocusCallbackList_10), (void*)value);
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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

IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_back(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_cleanup(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_back(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_cleanup(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled);

// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9632D47D6F69D63FAF18C510B426AA89FBFD8FD4_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA7CC0142AA8420766D7C6040E6AB820EAECF85D5_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD53B415716AEC99647D85E5840B6B86EA5CCAC46_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m271097E396565CFF8D284D6A5DAFE166EC324408_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF51BDE4D51EE67479497945C391BD6DD32E64E7A_gshared (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Boolean,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisRuntimeObject_m3E6D759470102ED39EBB841B847939705CFD02D3_gshared (RuntimeObject* ___source0, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);

// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m9275FE434FEFC1852EE41427365AF52E1E95445F (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_mDC5E0841D8F3A5864347F35A3E47B1F517D8DDE1 (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF1525A8EC6DBAD5879E04DC9D3CB69A0CB8FECDF_inline (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_m44A666BD9F58C2E88CF7834D2DD5E5CF72656813_inline (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A (String_t* ___msg0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m533731F78AF083B55D484ACC97A0CE551EDAC41A (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m8E0CEA4D68FF907228AA2AA05767710721580983 (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ConnectionRequest_get_RemoteEndpoint_mAF9B21EB5C4CED446C3104D93E6D5DBCD0B68E84_inline (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method);
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionRequest_get_Payload_mADA1595CE06EB1ECD53491837D0BDC5C1547F4AD_inline (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method);
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_m2E94D1D61D75EE815C8CE46D8215546D467BBDD5_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mC1D8E7E8952E504E2C1B0C4ECE6F1A3F09482969_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m2651E9590194CCC4ABFC33B296BDC50610365528_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method);
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionResponse_get_Payload_m5360B8CDDC95D1562B585882EEC2797B360D6146_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mD77A6C0F63F4BD90A55D7458A32B75BD10B32C74_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m3669255E76B3765D86F828DAC7637411EEDF792F_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m3A63DE39A711E6CCD665C5C5A824E02BDE9D1E81_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m00DE54616FCF538BA0E5B305212512987ED3A43A (U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m591E20002EE972312387B73448FAB6E284E285DA (U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF493EDE5A6EB1CABD965CB5CD1031FFEA25851D5 (U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * Misc_CheckNotNull_TisAction_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_m60BF4AEEC67B78D38EBB2BE5B0EFA02EFE38219C (Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * (*) (Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 *, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mE8A170AD028BF12814B496A2D9E29016D67B1AC5 (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method);
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m5ADECD59D0AB0EDD4E6180D3AA00BEB00C40D91F_inline (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method);
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * NearbyConnectionConfiguration_get_InitializationCallback_m315F92292FEA007C57BBE9B373A8CE3F6BCC0AEF_inline (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.PlayGamesHelperObject>()
inline PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * GameObject_AddComponent_TisPlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_m5E0B51D6FAD3210C75AD4063320A37C8EDAB02EA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_mC565480D1ADD87FB639271541CE650BF6E2BEEB2 (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC0560B5F45940D0FB364F2C814417A1BB8801EA3 (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_inline (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	return ((  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC (String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8 (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Contains(!0)
inline bool List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(!0)
inline void List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Remove(!0)
inline bool List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
inline void List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  ___builder0, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mB695E510458774851D8838069831235B4C72C60E_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m0F8700FFE27E56F8BB80315851A7A82BD69A7764_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m348CA469EBBCBBC7F405CD0AE6CB7BD0C93F1FBE_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m1566C76C4509C6D3109B03B7FE68664167900758_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline)(__this, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_mD62E230000DF2D27F1253F945D5A80AF83182B38 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5C205EA90CDA65B69681079256713F4173DDA5B4_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::.ctor()
inline void Dictionary_2__ctor_m1E0374F7772D61C55BB8D113087909F05334FF10 (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D *, const RuntimeMethod*))Dictionary_2__ctor_m9632D47D6F69D63FAF18C510B426AA89FBFD8FD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::Add(!0,!1)
inline void Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mA7CC0142AA8420766D7C6040E6AB820EAECF85D5_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC8257C81BFA99DB72E6DECCCC7D48A153B07F4B2 (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mD53B415716AEC99647D85E5840B6B86EA5CCAC46_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m7CCCFC604983CC8270CBEBDB4CACAE0067A48B88 (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m271097E396565CFF8D284D6A5DAFE166EC324408_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0 (Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF51BDE4D51EE67479497945C391BD6DD32E64E7A_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Boolean,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734 (RuntimeObject* ___source0, Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 *, const RuntimeMethod*))Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisRuntimeObject_m3E6D759470102ED39EBB841B847939705CFD02D3_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0CE213D3E853130D7F505691011A77B600CC22A9 (U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_mE309A4009782D59CCC941E9C79DFCD9E28A9DFF2 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_pinvoke(const AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E& unmarshaled, AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.get_mStatus_0();
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_mLocalEndpointName_1());
}
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_pinvoke_back(const AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke& marshaled, AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E& unmarshaled)
{
	int32_t unmarshaled_mStatus_temp_0 = 0;
	unmarshaled_mStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.set_mStatus_0(unmarshaled_mStatus_temp_0);
	unmarshaled.set_mLocalEndpointName_1(il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_pinvoke_cleanup(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_com(const AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E& unmarshaled, AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.get_mStatus_0();
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mLocalEndpointName_1());
}
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_com_back(const AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_com& marshaled, AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E& unmarshaled)
{
	int32_t unmarshaled_mStatus_temp_0 = 0;
	unmarshaled_mStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.set_mStatus_0(unmarshaled_mStatus_temp_0);
	unmarshaled.set_mLocalEndpointName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshal_com_cleanup(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m9275FE434FEFC1852EE41427365AF52E1E95445F (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mStatus = status;
		int32_t L_0 = ___status0;
		__this->set_mStatus_0(L_0);
		// this.mLocalEndpointName = Misc.CheckNotNull(localEndpointName);
		String_t* L_1 = ___localEndpointName1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_1, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mLocalEndpointName_1(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_m9275FE434FEFC1852EE41427365AF52E1E95445F_AdjustorThunk (RuntimeObject * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * _thisAdjusted = reinterpret_cast<AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E *>(__this + _offset);
	AdvertisingResult__ctor_m9275FE434FEFC1852EE41427365AF52E1E95445F(_thisAdjusted, ___status0, ___localEndpointName1, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_mDC5E0841D8F3A5864347F35A3E47B1F517D8DDE1 (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method)
{
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->get_mStatus_0();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_mDC5E0841D8F3A5864347F35A3E47B1F517D8DDE1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * _thisAdjusted = reinterpret_cast<AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E *>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_mDC5E0841D8F3A5864347F35A3E47B1F517D8DDE1(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF1525A8EC6DBAD5879E04DC9D3CB69A0CB8FECDF (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method)
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->get_mStatus_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_mF1525A8EC6DBAD5879E04DC9D3CB69A0CB8FECDF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * _thisAdjusted = reinterpret_cast<AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_mF1525A8EC6DBAD5879E04DC9D3CB69A0CB8FECDF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_m44A666BD9F58C2E88CF7834D2DD5E5CF72656813 (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->get_mLocalEndpointName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_m44A666BD9F58C2E88CF7834D2DD5E5CF72656813_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * _thisAdjusted = reinterpret_cast<AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_m44A666BD9F58C2E88CF7834D2DD5E5CF72656813_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GooglePlayGames.BasicApi.CommonTypesUtil::StatusIsSuccess(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTypesUtil_StatusIsSuccess_mBD5BAE287A44C6EB65702C043EBACA0DA33A3051 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// return ((int) status) > 0;
		int32_t L_0 = ___status0;
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.CommonTypesUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTypesUtil__ctor_mC98BBACA8BF7ECFB9FD09EFFBC8FC146AE3C8038 (CommonTypesUtil_t7AE6DC94E2811A1EEC5BD5E1FA998194B4A24BA6 * __this, const RuntimeMethod* method)
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
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_mF2FB0EC559A1BB5D03A9D2FAC668CB796E24DBC6 (ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_mAAA4ECE73351A97408CD0DDDF0F831EF3C5BFB1D (ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644 * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___unmergedData4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker4< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker4< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_m2780C67456181472E6DD8B68810365E4E6242B1D (ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644 * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___unmergedData4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_mAA4453D611C43DC756C423479F4FB1A6E9FE5811 (ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_pinvoke(const ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B& unmarshaled, ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke(unmarshaled.get_mRemoteEndpoint_0(), marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_mPayload_1());
}
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_pinvoke_back(const ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke& marshaled, ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  unmarshaled_mRemoteEndpoint_temp_0;
	memset((&unmarshaled_mRemoteEndpoint_temp_0), 0, sizeof(unmarshaled_mRemoteEndpoint_temp_0));
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mRemoteEndpoint_0(unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mPayload_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_pinvoke_cleanup(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_com(const ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B& unmarshaled, ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_com& marshaled)
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com(unmarshaled.get_mRemoteEndpoint_0(), marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_mPayload_1());
}
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_com_back(const ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_com& marshaled, ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  unmarshaled_mRemoteEndpoint_temp_0;
	memset((&unmarshaled_mRemoteEndpoint_temp_0), 0, sizeof(unmarshaled_mRemoteEndpoint_temp_0));
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mRemoteEndpoint_0(unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mPayload_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshal_com_cleanup(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_com& marshaled)
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m8E0CEA4D68FF907228AA2AA05767710721580983 (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Constructing ConnectionRequest");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, /*hidden argument*/NULL);
		// mRemoteEndpoint = new EndpointDetails(remoteEndpointId, remoteEndpointName, serviceId);
		String_t* L_0 = ___remoteEndpointId0;
		String_t* L_1 = ___remoteEndpointName1;
		String_t* L_2 = ___serviceId2;
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m533731F78AF083B55D484ACC97A0CE551EDAC41A((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_mRemoteEndpoint_0(L_3);
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___payload3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F(L_4, /*hidden argument*/Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F_RuntimeMethod_var);
		__this->set_mPayload_1(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_m8E0CEA4D68FF907228AA2AA05767710721580983_AdjustorThunk (RuntimeObject * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * _thisAdjusted = reinterpret_cast<ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B *>(__this + _offset);
	ConnectionRequest__ctor_m8E0CEA4D68FF907228AA2AA05767710721580983(_thisAdjusted, ___remoteEndpointId0, ___remoteEndpointName1, ___serviceId2, ___payload3, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ConnectionRequest_get_RemoteEndpoint_mAF9B21EB5C4CED446C3104D93E6D5DBCD0B68E84 (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method)
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_0 = __this->get_mRemoteEndpoint_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ConnectionRequest_get_RemoteEndpoint_mAF9B21EB5C4CED446C3104D93E6D5DBCD0B68E84_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * _thisAdjusted = reinterpret_cast<ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B *>(__this + _offset);
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_mAF9B21EB5C4CED446C3104D93E6D5DBCD0B68E84_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionRequest_get_Payload_mADA1595CE06EB1ECD53491837D0BDC5C1547F4AD (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method)
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mPayload_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionRequest_get_Payload_mADA1595CE06EB1ECD53491837D0BDC5C1547F4AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * _thisAdjusted = reinterpret_cast<ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B *>(__this + _offset);
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_mADA1595CE06EB1ECD53491837D0BDC5C1547F4AD_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_pinvoke(const ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38& unmarshaled, ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.get_mLocalClientId_1();
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mRemoteEndpointId_2());
	marshaled.___mResponseStatus_3 = unmarshaled.get_mResponseStatus_3();
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_mPayload_4());
}
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_pinvoke_back(const ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke& marshaled, ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaled_mLocalClientId_temp_0 = 0;
	unmarshaled_mLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.set_mLocalClientId_1(unmarshaled_mLocalClientId_temp_0);
	unmarshaled.set_mRemoteEndpointId_2(il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaled_mResponseStatus_temp_2 = 0;
	unmarshaled_mResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.set_mResponseStatus_3(unmarshaled_mResponseStatus_temp_2);
	unmarshaled.set_mPayload_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_pinvoke_cleanup(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_com(const ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38& unmarshaled, ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.get_mLocalClientId_1();
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mRemoteEndpointId_2());
	marshaled.___mResponseStatus_3 = unmarshaled.get_mResponseStatus_3();
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_mPayload_4());
}
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_com_back(const ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_com& marshaled, ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaled_mLocalClientId_temp_0 = 0;
	unmarshaled_mLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.set_mLocalClientId_1(unmarshaled_mLocalClientId_temp_0);
	unmarshaled.set_mRemoteEndpointId_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaled_mResponseStatus_temp_2 = 0;
	unmarshaled_mResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.set_mResponseStatus_3(unmarshaled_mResponseStatus_temp_2);
	unmarshaled.set_mPayload_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshal_com_cleanup(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mLocalClientId = localClientId;
		int64_t L_0 = ___localClientId0;
		__this->set_mLocalClientId_1(L_0);
		// this.mRemoteEndpointId = Misc.CheckNotNull(remoteEndpointId);
		String_t* L_1 = ___remoteEndpointId1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_1, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mRemoteEndpointId_2(L_2);
		// this.mResponseStatus = code;
		int32_t L_3 = ___code2;
		__this->set_mResponseStatus_3(L_3);
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___payload3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F(L_4, /*hidden argument*/Misc_CheckNotNull_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mAA71B3EA9A87D79FEA06A0E5D35CDF451AEDFC4F_RuntimeMethod_var);
		__this->set_mPayload_4(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246_AdjustorThunk (RuntimeObject * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * _thisAdjusted = reinterpret_cast<ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 *>(__this + _offset);
	ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246(_thisAdjusted, ___localClientId0, ___remoteEndpointId1, ___code2, ___payload3, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_m2E94D1D61D75EE815C8CE46D8215546D467BBDD5 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_m2E94D1D61D75EE815C8CE46D8215546D467BBDD5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * _thisAdjusted = reinterpret_cast<ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_m2E94D1D61D75EE815C8CE46D8215546D467BBDD5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mC1D8E7E8952E504E2C1B0C4ECE6F1A3F09482969 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->get_mRemoteEndpointId_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mC1D8E7E8952E504E2C1B0C4ECE6F1A3F09482969_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * _thisAdjusted = reinterpret_cast<ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mC1D8E7E8952E504E2C1B0C4ECE6F1A3F09482969_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m2651E9590194CCC4ABFC33B296BDC50610365528 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->get_mResponseStatus_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_m2651E9590194CCC4ABFC33B296BDC50610365528_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * _thisAdjusted = reinterpret_cast<ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_m2651E9590194CCC4ABFC33B296BDC50610365528_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionResponse_get_Payload_m5360B8CDDC95D1562B585882EEC2797B360D6146 (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mPayload_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionResponse_get_Payload_m5360B8CDDC95D1562B585882EEC2797B360D6146_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * _thisAdjusted = reinterpret_cast<ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 *>(__this + _offset);
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m5360B8CDDC95D1562B585882EEC2797B360D6146_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_Rejected_mBCD3CAF2EA2D738AA33EE24DD9240297F42211DC (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Rejected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_NetworkNotConnected_mAAD41326ADD6D31F2A9776FD924D29A080329033 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorNetworkNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_InternalError_mF0BAB828D6DFFE6A250A20C9AC08A073B4B93D45 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorInternal,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_EndpointNotConnected_mB5686038840B494C8E3ED064606595B0D89C33AA (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorEndpointNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_Accepted_m1C584DC19716669209FD420E0AF91FE72703A161 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload2, const RuntimeMethod* method)
{
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___payload2;
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  ConnectionResponse_AlreadyConnected_m244047CA4269FB226D84D66AA473803E2496B60C (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId,
		//     Status.ErrorAlreadyConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mFC3708D12F1B94A689D2A6CA15871BCC1D354246((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_m8128072DC1C99EEC9819711CF531DDEE8A6B6A13 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EmptyPayload = new byte[0];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_il2cpp_TypeInfo_var))->set_EmptyPayload_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mServiceId_2());
}
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_back(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_pinvoke_cleanup(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mServiceId_2());
}
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_back(const EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled, EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshal_com_cleanup(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m533731F78AF083B55D484ACC97A0CE551EDAC41A (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___endpointId0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mEndpointId_0(L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___name1;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_2, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mName_1(L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___serviceId2;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_4, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mServiceId_2(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m533731F78AF083B55D484ACC97A0CE551EDAC41A_AdjustorThunk (RuntimeObject * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * _thisAdjusted = reinterpret_cast<EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 *>(__this + _offset);
	EndpointDetails__ctor_m533731F78AF083B55D484ACC97A0CE551EDAC41A(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mD77A6C0F63F4BD90A55D7458A32B75BD10B32C74 (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->get_mEndpointId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_mD77A6C0F63F4BD90A55D7458A32B75BD10B32C74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * _thisAdjusted = reinterpret_cast<EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_mD77A6C0F63F4BD90A55D7458A32B75BD10B32C74_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m3669255E76B3765D86F828DAC7637411EEDF792F (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mName; }
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_m3669255E76B3765D86F828DAC7637411EEDF792F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * _thisAdjusted = reinterpret_cast<EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_m3669255E76B3765D86F828DAC7637411EEDF792F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m3A63DE39A711E6CCD665C5C5A824E02BDE9D1E81 (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->get_mServiceId_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_m3A63DE39A711E6CCD665C5C5A824E02BDE9D1E81_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * _thisAdjusted = reinterpret_cast<EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_m3A63DE39A711E6CCD665C5C5A824E02BDE9D1E81_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Events.Event::.ctor(System.String,System.String,System.String,System.String,System.UInt64,GooglePlayGames.BasicApi.Events.EventVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m6A18A7207DB88910BC1CD0C701E03CC26AE22F6C (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, String_t* ___imageUrl3, uint64_t ___currentCount4, int32_t ___visibility5, const RuntimeMethod* method)
{
	{
		// internal Event(string id, string name, string description, string imageUrl,
		//     ulong currentCount, EventVisibility visibility)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mId = id;
		String_t* L_0 = ___id0;
		__this->set_mId_0(L_0);
		// mName = name;
		String_t* L_1 = ___name1;
		__this->set_mName_1(L_1);
		// mDescription = description;
		String_t* L_2 = ___description2;
		__this->set_mDescription_2(L_2);
		// mImageUrl = imageUrl;
		String_t* L_3 = ___imageUrl3;
		__this->set_mImageUrl_3(L_3);
		// mCurrentCount = currentCount;
		uint64_t L_4 = ___currentCount4;
		__this->set_mCurrentCount_4(L_4);
		// mVisibility = visibility;
		int32_t L_5 = ___visibility5;
		__this->set_mVisibility_5(L_5);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_mE7EEB03820D8D9E352ED5ED2B704BBBB03CCA02C (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_0();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_mB016F472742D42E4FC1AC986D7C2F4BC569E69F8 (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mName; }
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_mAFE7F723B408CF75C37D6C6951D66382480C7FC8 (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescription; }
		String_t* L_0 = __this->get_mDescription_2();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_m360D8EB45DE235C894400902ADB9F46DA84FE891 (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->get_mImageUrl_3();
		return L_0;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_m4BF188069FF359EE96488CFCF1127F8015005F9E (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->get_mCurrentCount_4();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_mA3257CD915C347A247DEBD41387AC00581579883 (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00 * __this, const RuntimeMethod* method)
{
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->get_mVisibility_5();
		return L_0;
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
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_m8E6DE37CF00CBEB6B4058859769567A6E3D50B20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return debugLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_mCBE44AA9385F164150D8A9028F6D43986524D2E9 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { debugLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->set_debugLogEnabled_0(L_0);
		// set { debugLogEnabled = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_WarningLogEnabled_m284BBFB7365926EBEE8C34D522CB7CFA0C28E99C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return warningLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_WarningLogEnabled_mB7D0ED3696B00E5BB2FBCA548A55B8D422510C5D (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { warningLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->set_warningLogEnabled_1(L_0);
		// set { warningLogEnabled = value; }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m599E78A3E539005154714D11FB570AFA7314E418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * L_0 = (U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m00DE54616FCF538BA0E5B305212512987ED3A43A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (debugLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m599E78A3E539005154714D11FB570AFA7314E418_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m20E0F0DADA4A9E5C1967656ABAC89551D14F3BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * L_0 = (U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m591E20002EE972312387B73448FAB6E284E285DA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (warningLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m20E0F0DADA4A9E5C1967656ABAC89551D14F3BFF_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m2C7AEA8F2EF8D1BDBCE906816617775FE3211C18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * L_0 = (U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mF493EDE5A6EB1CABD965CB5CD1031FFEA25851D5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (warningLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m2C7AEA8F2EF8D1BDBCE906816617775FE3211C18_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_describe_m268D406D43000990B492E3F60A8D3FC039CB5519 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return b == null ? "(null)" : "byte[" + b.Length + "]";
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___b0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b0;
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0, L_2, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return L_3;
	}

IL_001e:
	{
		return _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_mE309A4009782D59CCC941E9C79DFCD9E28A9DFF2 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// string timeString = null;
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		// timeString = DateTime.Now.ToString("MM/dd/yy H:mm:ss zzz");
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A, /*hidden argument*/NULL);
		V_0 = L_1;
		// }
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		{
			// catch (Exception)
			// PlayGamesHelperObject.RunOnGameThread(() =>
			//     Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var)));
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ((U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var))))->get_U3CU3E9__12_0_1();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_0037;
			}
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var)));
			U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * L_4 = ((U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var))))->get_U3CU3E9_0();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CToLogMessageU3Eb__12_0_m28B459EA6793E803EF6E9BDF57EA6E3A4321E473_RuntimeMethod_var))), /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
			((U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var))))->set_U3CU3E9__12_0_1(L_6);
			G_B4_0 = L_6;
		}

IL_0037:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var)));
			PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7(G_B4_0, /*hidden argument*/NULL);
			// timeString = string.Empty;
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->get_Empty_5();
			V_0 = L_7;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0044;
		}
	} // end catch (depth: 1)

IL_0044:
	{
		// return string.Format("{0} [Play Games Plugin " + PluginVersion.VersionString+ "] {1} {2}: {3}",
		//     prefix, timeString, logType, msg);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		String_t* L_10 = ___prefix0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		String_t* L_14 = ___logType1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_13;
		String_t* L_16 = ___msg2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6, L_15, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m15CE7B9F6C9DE50552EBB453AD2C13A604AC9CF5 (Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_mA52A5B9C631B5280EAB41E87CC39644B068BE4A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool debugLogEnabled = false;
		((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->set_debugLogEnabled_0((bool)0);
		// private static bool warningLogEnabled = true;
		((Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var))->set_warningLogEnabled_1((bool)1);
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
// System.Boolean GooglePlayGames.OurUtils.Misc::BuffersAreIdentical(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_BuffersAreIdentical_mF8A4556B9159015463F0BC73C66F0A7D219FE0CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (a == b)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (a == null || b == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// if (a.Length != b.Length)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___b1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// for (int i = 0; i < a.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_001c:
	{
		// if (a[i] != b[i])
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___a0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___b1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Byte[] GooglePlayGames.OurUtils.Misc::GetSubsetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Misc_GetSubsetBytes_m42F346DC56B57560FA42A28D394CECEA06D33B8D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (array == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("array");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m42F346DC56B57560FA42A28D394CECEA06D33B8D_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (offset < 0 || offset >= array.Length)
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		// throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m42F346DC56B57560FA42A28D394CECEA06D33B8D_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (length < 0 || (array.Length - offset) < length)
		int32_t L_6 = ___length2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_10 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m42F346DC56B57560FA42A28D394CECEA06D33B8D_RuntimeMethod_var)));
	}

IL_003a:
	{
		// if (offset == 0 && length == array.Length)
		int32_t L_11 = ___offset1;
		if (L_11)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_12 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___array0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0045;
		}
	}
	{
		// return array;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___array0;
		return L_14;
	}

IL_0045:
	{
		// byte[] piece = new byte[length];
		int32_t L_15 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_0 = L_16;
		// Array.Copy(array, offset, piece, 0, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_0;
		int32_t L_20 = ___length2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_17, L_18, (RuntimeArray *)(RuntimeArray *)L_19, 0, L_20, /*hidden argument*/NULL);
		// return piece;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_0;
		return L_21;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Misc::IsApiException(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_IsApiException_m3D4FB99FFBBDE5B3983158F8BAA1F88750CE92A9 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var exceptionClassName = exception.Call<AndroidJavaObject>("getClass")
		//     .Call<String>("getName");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___exception0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_2, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_3, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		// return exceptionClassName == "com.google.android.gms.common.api.ApiException";
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C, /*hidden argument*/NULL);
		return L_5;
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_pinvoke(const NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967& unmarshaled, NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_pinvoke_back(const NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50>(marshaled.___mInitializationCallback_2, Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_com(const NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967& unmarshaled, NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_com_back(const NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_com& marshaled, NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50>(marshaled.___mInitializationCallback_2, Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshal_com_cleanup(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mE8A170AD028BF12814B496A2D9E29016D67B1AC5 (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_m60BF4AEEC67B78D38EBB2BE5B0EFA02EFE38219C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * L_0 = ___callback0;
		Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_m60BF4AEEC67B78D38EBB2BE5B0EFA02EFE38219C(L_0, /*hidden argument*/Misc_CheckNotNull_TisAction_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50_m60BF4AEEC67B78D38EBB2BE5B0EFA02EFE38219C_RuntimeMethod_var);
		__this->set_mInitializationCallback_2(L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___localClientId1;
		__this->set_mLocalClientId_3(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_mE8A170AD028BF12814B496A2D9E29016D67B1AC5_AdjustorThunk (RuntimeObject * __this, Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 *>(__this + _offset);
	NearbyConnectionConfiguration__ctor_mE8A170AD028BF12814B496A2D9E29016D67B1AC5(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m5ADECD59D0AB0EDD4E6180D3AA00BEB00C40D91F (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_m5ADECD59D0AB0EDD4E6180D3AA00BEB00C40D91F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_m5ADECD59D0AB0EDD4E6180D3AA00BEB00C40D91F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * NearbyConnectionConfiguration_get_InitializationCallback_m315F92292FEA007C57BBE9B373A8CE3F6BCC0AEF (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method)
{
	{
		// get { return mInitializationCallback; }
		Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * L_0 = __this->get_mInitializationCallback_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * NearbyConnectionConfiguration_get_InitializationCallback_m315F92292FEA007C57BBE9B373A8CE3F6BCC0AEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 *>(__this + _offset);
	Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_m315F92292FEA007C57BBE9B373A8CE3F6BCC0AEF_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_CreateObject_m03338551D54E40FFC33C9AA2A5FF1E0175CC66C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_m5E0B51D6FAD3210C75AD4063320A37C8EDAB02EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_QueueRunner");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1, /*hidden argument*/NULL);
		// DontDestroyOnLoad(obj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
		// instance = obj.AddComponent<PlayGamesHelperObject>();
		NullCheck(L_4);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_5;
		L_5 = GameObject_AddComponent_TisPlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_m5E0B51D6FAD3210C75AD4063320A37C8EDAB02EA(L_4, /*hidden argument*/GameObject_AddComponent_TisPlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_m5E0B51D6FAD3210C75AD4063320A37C8EDAB02EA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_instance_4(L_5);
		// }
		return;
	}

IL_0030:
	{
		// instance = new PlayGamesHelperObject();
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_6 = (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 *)il2cpp_codegen_object_new(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject__ctor_mC565480D1ADD87FB639271541CE650BF6E2BEEB2(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_instance_4(L_6);
		// sIsDummy = true;
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sIsDummy_5((bool)1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Awake_m5BEE6BD2466D2825F337A76782D3D81F240C7871 (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnDisable_mEF9AA17B5BF9B584AB548D86A53749AACF3A3EB4 (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_instance_4((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 *)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_m4547E892C2CA5B925062C47B1D1841BCF59C88BF (RuntimeObject* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mB0BF079147E3BB2E745DA9CEA7909FF46A8681A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * L_0 = (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mC0560B5F45940D0FB364F2C814417A1BB8801EA3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_3 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mB0BF079147E3BB2E745DA9CEA7909FF46A8681A7_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7(L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (action == null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_RunOnGameThread_m62ABAC6147E4BC7DCF26CDC0F4EA4658998A1AC7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (sIsDummy)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		bool L_2 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sIsDummy_5();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// lock (sQueue)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueue_6();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// sQueue.Add(action);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueue_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___action0;
		NullCheck(L_5);
		List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9(L_5, L_6, /*hidden argument*/List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		// sQueueEmpty = false;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(0);
		// }
		IL2CPP_LEAVE(0x45, FINALLY_003b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Update_m390212EE848E3F64C9F63635ACAC78AEC756FD2F (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (sIsDummy || sQueueEmpty)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sIsDummy_5();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueueEmpty_8();
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// localQueue.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get_localQueue_7();
		NullCheck(L_2);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_2, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// lock (sQueue)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueue_6();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// localQueue.AddRange(sQueue);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = __this->get_localQueue_7();
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueue_6();
		NullCheck(L_5);
		List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335(L_5, L_6, /*hidden argument*/List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		// sQueue.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sQueue_6();
		NullCheck(L_7);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_7, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(1);
		// }
		IL2CPP_LEAVE(0x5A, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		V_2 = 0;
		goto IL_0073;
	}

IL_005e:
	{
		// localQueue[i].Invoke();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_10 = __this->get_localQueue_7();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12;
		L_12 = List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_14 = V_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_15 = __this->get_localQueue_7();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_15, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationFocus_mE0967F31EA3E4D4D64C0311161011DEE247F718D (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, bool ___focused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (Action<bool> cb in sFocusCallbackList)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		NullCheck(L_0);
		Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  L_1;
		L_1 = List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8(L_0, /*hidden argument*/List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000d:
		{
			// foreach (Action<bool> cb in sFocusCallbackList)
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2;
			L_2 = Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_inline((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0015:
		try
		{ // begin try (depth: 2)
			// cb(focused);
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = V_1;
			bool L_4 = ___focused0;
			NullCheck(L_3);
			Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_3, L_4, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
			// }
			goto IL_0041;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001e;
			}
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Logger.e("Exception in OnApplicationFocus:" +
			//                e.Message + "\n" + e.StackTrace);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9;
			L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var)));
			Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(L_9, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0041;
		} // end catch (depth: 2)

IL_0041:
		{
			// foreach (Action<bool> cb in sFocusCallbackList)
			bool L_10;
			L_10 = Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000d;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationPause_mD98382DA5DC2824E3C19952DD8589065B341AE66 (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (Action<bool> cb in sPauseCallbackList)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		NullCheck(L_0);
		Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  L_1;
		L_1 = List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8(L_0, /*hidden argument*/List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000d:
		{
			// foreach (Action<bool> cb in sPauseCallbackList)
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2;
			L_2 = Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_inline((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0015:
		try
		{ // begin try (depth: 2)
			// cb(paused);
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = V_1;
			bool L_4 = ___paused0;
			NullCheck(L_3);
			Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_3, L_4, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
			// }
			goto IL_0041;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001e;
			}
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Logger.e("Exception in OnApplicationPause:" +
			//                e.Message + "\n" + e.StackTrace);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9;
			L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var)));
			Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(L_9, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0041;
		} // end catch (depth: 2)

IL_0041:
		{
			// foreach (Action<bool> cb in sPauseCallbackList)
			bool L_10;
			L_10 = Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000d;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddFocusCallback_mBFDFF4C608A79BD5A1A77D1326A95E58C3EC807D (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sFocusCallbackList.Contains(callback))
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30(L_0, L_1, /*hidden argument*/List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sFocusCallbackList.Add(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_3 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4(L_3, L_4, /*hidden argument*/List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemoveFocusCallback_m24194172BEC83AC1379E146EA4734E9777F73C8E (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sFocusCallbackList.Remove(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6(L_0, L_1, /*hidden argument*/List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddPauseCallback_mCA12BE9FB6CC78C735A452C562E3C1303B93DD16 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sPauseCallbackList.Contains(callback))
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30(L_0, L_1, /*hidden argument*/List_1_Contains_mE546F9A4DE918E1DE4EF8993D21B155B7A7FDA30_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sPauseCallbackList.Add(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_3 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4(L_3, L_4, /*hidden argument*/List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemovePauseCallback_m5A5B4F3CF6646B9EF4AD14EC1AF832997116B394 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sPauseCallbackList.Remove(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6(L_0, L_1, /*hidden argument*/List_1_Remove_m90678937B2B3D4568F5143C3594EBC248372AFF6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_mC565480D1ADD87FB639271541CE650BF6E2BEEB2 (PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> localQueue = new List<System.Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_localQueue_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__cctor_m9416E585112E0E6164172BFAF8ED817E2C345B63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PlayGamesHelperObject instance = null;
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_instance_4((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 *)NULL);
		// private static bool sIsDummy = false;
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sIsDummy_5((bool)0);
		// private static List<System.Action> sQueue = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sQueue_6(L_0);
		// private volatile static bool sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(1);
		// private static List<Action<bool>> sPauseCallbackList =
		//     new List<Action<bool>>();
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_1 = (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *)il2cpp_codegen_object_new(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var);
		List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE(L_1, /*hidden argument*/List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sPauseCallbackList_9(L_1);
		// private static List<Action<bool>> sFocusCallbackList =
		//     new List<Action<bool>>();
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_2 = (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *)il2cpp_codegen_object_new(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var);
		List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE(L_2, /*hidden argument*/List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var);
		((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->set_sFocusCallbackList_10(L_2);
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
// System.Void GooglePlayGames.PluginVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion__ctor_m4DD9464F0F79CAE11E7B3D80D8C5755686B29579 (PluginVersion_t8ABDB0F138CB6374640EA74CA8184CD30F4451DE * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_pinvoke(const SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3& unmarshaled, SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_pinvoke_back(const SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_com(const SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3& unmarshaled, SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_com_back(const SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com& marshaled, SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshal_com_cleanup(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  ___builder0, const RuntimeMethod* method)
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_0 = ___builder0;
		bool L_1 = L_0.get_mDescriptionUpdated_0();
		__this->set_mDescriptionUpdated_0(L_1);
		// mNewDescription = builder.mNewDescription;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_2 = ___builder0;
		String_t* L_3 = L_2.get_mNewDescription_1();
		__this->set_mNewDescription_1(L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_4 = ___builder0;
		bool L_5 = L_4.get_mCoverImageUpdated_2();
		__this->set_mCoverImageUpdated_2(L_5);
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_6 = ___builder0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6.get_mNewPngCoverImage_3();
		__this->set_mNewPngCoverImage_3(L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_8 = ___builder0;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_9 = L_8.get_mNewPlayedTime_4();
		__this->set_mNewPlayedTime_4(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75_AdjustorThunk (RuntimeObject * __this, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  ___builder0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mB695E510458774851D8838069831235B4C72C60E (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->get_mDescriptionUpdated_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mB695E510458774851D8838069831235B4C72C60E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mB695E510458774851D8838069831235B4C72C60E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m0F8700FFE27E56F8BB80315851A7A82BD69A7764 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->get_mNewDescription_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m0F8700FFE27E56F8BB80315851A7A82BD69A7764_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m0F8700FFE27E56F8BB80315851A7A82BD69A7764_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m348CA469EBBCBBC7F405CD0AE6CB7BD0C93F1FBE (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->get_mCoverImageUpdated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m348CA469EBBCBBC7F405CD0AE6CB7BD0C93F1FBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_m348CA469EBBCBBC7F405CD0AE6CB7BD0C93F1FBE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m1566C76C4509C6D3109B03B7FE68664167900758 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mNewPngCoverImage_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m1566C76C4509C6D3109B03B7FE68664167900758_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m1566C76C4509C6D3109B03B7FE68664167900758_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_mD62E230000DF2D27F1253F945D5A80AF83182B38 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * L_0 = __this->get_address_of_mNewPlayedTime_4();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_mD62E230000DF2D27F1253F945D5A80AF83182B38_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_mD62E230000DF2D27F1253F945D5A80AF83182B38(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5C205EA90CDA65B69681079256713F4173DDA5B4 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_0 = __this->get_mNewPlayedTime_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5C205EA90CDA65B69681079256713F4173DDA5B4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 *>(__this + _offset);
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5C205EA90CDA65B69681079256713F4173DDA5B4_inline(_thisAdjusted, method);
	return _returnValue;
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
// GooglePlayGames.BasicApi.SignInStatus GooglePlayGames.BasicApi.SignInHelper::ToSignInStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInHelper_ToSignInStatus_m94BBBAB29FE50050F913A5B0B6C87C32FF1A9C87 (int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC8257C81BFA99DB72E6DECCCC7D48A153B07F4B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1E0374F7772D61C55BB8D113087909F05334FF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7CCCFC604983CC8270CBEBDB4CACAE0067A48B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * V_0 = NULL;
	{
		// Dictionary<int, SignInStatus> dictionary = new Dictionary<int, SignInStatus>()
		// {
		//     {
		//         /* CommonUIStatus.UI_BUSY */ -12, SignInStatus.AlreadyInProgress
		//     },
		//     {
		//         /* CommonStatusCodes.SUCCESS */ 0, SignInStatus.Success
		//     },
		//     {
		//         /* CommonStatusCodes.SIGN_IN_REQUIRED */ 4, SignInStatus.UiSignInRequired
		//     },
		//     {
		//         /* CommonStatusCodes.NETWORK_ERROR */ 7, SignInStatus.NetworkError
		//     },
		//     {
		//         /* CommonStatusCodes.INTERNAL_ERROR */ 8, SignInStatus.InternalError
		//     },
		//     {
		//         /* CommonStatusCodes.DEVELOPER_ERROR */ 10, SignInStatus.DeveloperError
		//     },
		//     {
		//         /* CommonStatusCodes.CANCELED */ 16, SignInStatus.Canceled
		//     },
		//     {
		//         /* CommonStatusCodes.API_NOT_CONNECTED */ 17, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_FAILED */ 12500, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CANCELLED */ 12501, SignInStatus.Canceled
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CURRENTLY_IN_PROGRESS */ 12502, SignInStatus.AlreadyInProgress
		//     },
		// };
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_0 = (Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D *)il2cpp_codegen_object_new(Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1E0374F7772D61C55BB8D113087909F05334FF10(L_0, /*hidden argument*/Dictionary_2__ctor_m1E0374F7772D61C55BB8D113087909F05334FF10_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_1, ((int32_t)-12), 6, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_2, 0, 0, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_3, 4, 1, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_4, 7, 3, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_5, 8, 4, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_6, ((int32_t)10), 2, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_7, ((int32_t)16), 5, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_8, ((int32_t)17), 7, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_9, ((int32_t)12500), 7, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_10, ((int32_t)12501), 5, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B(L_11, ((int32_t)12502), 6, /*hidden argument*/Dictionary_2_Add_mE3E1956DB26DD36CAD6E827D063F7752D27B7A5B_RuntimeMethod_var);
		V_0 = L_11;
		// return dictionary.ContainsKey(code) ? dictionary[code] : SignInStatus.Failed;
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_12 = V_0;
		int32_t L_13 = ___code0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_mC8257C81BFA99DB72E6DECCCC7D48A153B07F4B2(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_mC8257C81BFA99DB72E6DECCCC7D48A153B07F4B2_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		return (int32_t)(7);
	}

IL_0079:
	{
		Dictionary_2_t31A8C896E6C0C7AE460CE94AFF6E23E3B6F46A9D * L_15 = V_0;
		int32_t L_16 = ___code0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_m7CCCFC604983CC8270CBEBDB4CACAE0067A48B88(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m7CCCFC604983CC8270CBEBDB4CACAE0067A48B88_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::SetPromptUiSignIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper_SetPromptUiSignIn_mBB5355FA97893E14DB63BB01AEC6C06A04570C13 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// PlayerPrefs.SetInt(PromptSignInKey, value ? True : False);
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
		if (L_0)
		{
			G_B2_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->get_False_1();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->get_True_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.SignInHelper::ShouldPromptUiSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInHelper_ShouldPromptUiSignIn_m132C7EBDCF7F1F041F512D9CB846BA64DB7F4951 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(PromptSignInKey, True) != False;
		IL2CPP_RUNTIME_CLASS_INIT(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->get_True_0();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->get_False_1();
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__ctor_m8997A5E42A4D0ABE8CB6D1D7608B22C89DF68065 (SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__cctor_mFF0EB68BD8928AE042377569B308F1D0AF4D1568 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int True = 0;
		((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->set_True_0(0);
		// private static int False = 1;
		((SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var))->set_False_1(1);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapabilities__ctor_m94D1F555108EE5DEFB2E8A8FB9AA6C8CA180C45E (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, bool ___isCameraSupported0, bool ___isMicSupported1, bool ___isWriteStorageSupported2, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___captureModesSupported3, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___qualityLevelsSupported4, const RuntimeMethod* method)
{
	{
		// internal VideoCapabilities(bool isCameraSupported, bool isMicSupported, bool isWriteStorageSupported,
		//     bool[] captureModesSupported, bool[] qualityLevelsSupported)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mIsCameraSupported = isCameraSupported;
		bool L_0 = ___isCameraSupported0;
		__this->set_mIsCameraSupported_0(L_0);
		// mIsMicSupported = isMicSupported;
		bool L_1 = ___isMicSupported1;
		__this->set_mIsMicSupported_1(L_1);
		// mIsWriteStorageSupported = isWriteStorageSupported;
		bool L_2 = ___isWriteStorageSupported2;
		__this->set_mIsWriteStorageSupported_2(L_2);
		// mCaptureModesSupported = captureModesSupported;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_3 = ___captureModesSupported3;
		__this->set_mCaptureModesSupported_3(L_3);
		// mQualityLevelsSupported = qualityLevelsSupported;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = ___qualityLevelsSupported4;
		__this->set_mQualityLevelsSupported_4(L_4);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsCameraSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsCameraSupported_mFFE4C6EFF34D66B7E0829D34B6886E7ABBEB65F9 (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsCameraSupported; }
		bool L_0 = __this->get_mIsCameraSupported_0();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsMicSupported_m912AE442AE89FF728B654FB346468F5E146D6E1F (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsMicSupported; }
		bool L_0 = __this->get_mIsMicSupported_1();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsWriteStorageSupported_mB297CF0C03D76A04D01AAB4F9089FAA24E3281E0 (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsWriteStorageSupported; }
		bool L_0 = __this->get_mIsWriteStorageSupported_2();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsCaptureMode_mB3022808F6CCB779E9D7C3C5603AD05AEAEFDC02 (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, int32_t ___captureMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (captureMode != VideoCaptureMode.Unknown)
		int32_t L_0 = ___captureMode0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mCaptureModesSupported[(int) captureMode];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = __this->get_mCaptureModesSupported_3();
		int32_t L_2 = ___captureMode0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown captureMode.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8(_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsQualityLevel(GooglePlayGames.BasicApi.VideoQualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsQualityLevel_m9862DDDAC59BB28D7F124A22D7DF8AD2A5A4F72F (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, int32_t ___qualityLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (qualityLevel != VideoQualityLevel.Unknown)
		int32_t L_0 = ___qualityLevel0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mQualityLevelsSupported[(int) qualityLevel];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = __this->get_mQualityLevelsSupported_4();
		int32_t L_2 = ___qualityLevel0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown qualityLevel.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8(_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCapabilities_ToString_mD4E232E6A6EBB57013E58DFE9C2D316B2E5CD21C (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * G_B2_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	int32_t G_B2_3 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_4 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_5 = NULL;
	String_t* G_B2_6 = NULL;
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * G_B1_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B1_3 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_4 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_5 = NULL;
	String_t* G_B1_6 = NULL;
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * G_B4_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_4 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_5 = NULL;
	String_t* G_B4_6 = NULL;
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * G_B3_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_4 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_5 = NULL;
	String_t* G_B3_6 = NULL;
	{
		// return string.Format(
		//     "[VideoCapabilities: mIsCameraSupported={0}, mIsMicSupported={1}, mIsWriteStorageSupported={2}, " +
		//     "mCaptureModesSupported={3}, mQualityLevelsSupported={4}]",
		//     mIsCameraSupported,
		//     mIsMicSupported,
		//     mIsWriteStorageSupported,
		//     string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		//     string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = __this->get_mIsCameraSupported_0();
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		bool L_6 = __this->get_mIsMicSupported_1();
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		bool L_10 = __this->get_mIsWriteStorageSupported_2();
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_14 = __this->get_mCaptureModesSupported_3();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_15 = ((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->get_U3CU3E9__14_0_1();
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = L_14;
		G_B1_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B1_3 = 3;
		G_B1_4 = L_13;
		G_B1_5 = L_13;
		G_B1_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			G_B2_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B2_3 = 3;
			G_B2_4 = L_13;
			G_B2_5 = L_13;
			G_B2_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_17 = ((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_18 = (Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 *)il2cpp_codegen_object_new(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7_il2cpp_TypeInfo_var);
		Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0_RuntimeMethod_var);
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_19 = L_18;
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9__14_0_1(L_19);
		G_B2_0 = L_19;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
	}

IL_0061:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21;
		L_21 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_20, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B2_2, L_21, /*hidden argument*/NULL);
		NullCheck(G_B2_4);
		ArrayElementTypeCheck (G_B2_4, L_22);
		(G_B2_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_3), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = G_B2_5;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_24 = __this->get_mQualityLevelsSupported_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_25 = ((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->get_U3CU3E9__14_1_2();
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_26 = L_25;
		G_B3_0 = L_26;
		G_B3_1 = L_24;
		G_B3_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B3_3 = 4;
		G_B3_4 = L_23;
		G_B3_5 = L_23;
		G_B3_6 = G_B2_6;
		if (L_26)
		{
			G_B4_0 = L_26;
			G_B4_1 = L_24;
			G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B4_3 = 4;
			G_B4_4 = L_23;
			G_B4_5 = L_23;
			G_B4_6 = G_B2_6;
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_27 = ((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_28 = (Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 *)il2cpp_codegen_object_new(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7_il2cpp_TypeInfo_var);
		Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2707936FCCB100C18D82435AFC42314890729AA0_RuntimeMethod_var);
		Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * L_29 = L_28;
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9__14_1_2(L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
		G_B4_6 = G_B3_6;
	}

IL_009d:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734((RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_TisString_t_m465AABE4F6F2BB97A4CF0AACBC9BDD686F07C734_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31;
		L_31 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_30, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		String_t* L_32;
		L_32 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B4_2, L_31, /*hidden argument*/NULL);
		NullCheck(G_B4_4);
		ArrayElementTypeCheck (G_B4_4, L_32);
		(G_B4_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_3), (RuntimeObject *)L_32);
		String_t* L_33;
		L_33 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B4_6, G_B4_5, /*hidden argument*/NULL);
		return L_33;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCaptureState__ctor_m6F392291FD6C1B0C5C3E0EDF92CBB2BFC426929D (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, bool ___isCapturing0, int32_t ___captureMode1, int32_t ___qualityLevel2, bool ___isOverlayVisible3, bool ___isPaused4, const RuntimeMethod* method)
{
	{
		// internal VideoCaptureState(bool isCapturing, VideoCaptureMode captureMode,
		//     VideoQualityLevel qualityLevel, bool isOverlayVisible, bool isPaused)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mIsCapturing = isCapturing;
		bool L_0 = ___isCapturing0;
		__this->set_mIsCapturing_0(L_0);
		// mCaptureMode = captureMode;
		int32_t L_1 = ___captureMode1;
		__this->set_mCaptureMode_1(L_1);
		// mQualityLevel = qualityLevel;
		int32_t L_2 = ___qualityLevel2;
		__this->set_mQualityLevel_2(L_2);
		// mIsOverlayVisible = isOverlayVisible;
		bool L_3 = ___isOverlayVisible3;
		__this->set_mIsOverlayVisible_3(L_3);
		// mIsPaused = isPaused;
		bool L_4 = ___isPaused4;
		__this->set_mIsPaused_4(L_4);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsCapturing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsCapturing_mB6A47AB046A20D04E70CAC12E03AB8ED8CD81CD6 (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsCapturing; }
		bool L_0 = __this->get_mIsCapturing_0();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_CaptureMode_m967D448E07D657FFBA6E3F60C9150FF7B08A207E (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	{
		// get { return mCaptureMode; }
		int32_t L_0 = __this->get_mCaptureMode_1();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_QualityLevel_m6BD5BF58F5A500EB781611950435131CFB242FC0 (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	{
		// get { return mQualityLevel; }
		int32_t L_0 = __this->get_mQualityLevel_2();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsOverlayVisible_m579D89692F2769B6A8B3781A07D6677B4F21E9D8 (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsOverlayVisible; }
		bool L_0 = __this->get_mIsOverlayVisible_3();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsPaused_mE83A6B13DBFCA96DE542A8CF88820E4CB8C77B63 (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsPaused; }
		bool L_0 = __this->get_mIsPaused_4();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCaptureState::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCaptureState_ToString_m1794538607F5A3302732AEE7B49334D6046A9A1E (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[VideoCaptureState: mIsCapturing={0}, mCaptureMode={1}, mQualityLevel={2}, " +
		//                      "mIsOverlayVisible={3}, mIsPaused={4}]",
		//     mIsCapturing,
		//     mCaptureMode.ToString(),
		//     mQualityLevel.ToString(),
		//     mIsOverlayVisible,
		//     mIsPaused);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = __this->get_mIsCapturing_0();
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t* L_6 = __this->get_address_of_mCaptureMode_1();
		RuntimeObject * L_7 = Box(VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		*L_6 = *(int32_t*)UnBox(L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t* L_10 = __this->get_address_of_mQualityLevel_2();
		RuntimeObject * L_11 = Box(VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		*L_10 = *(int32_t*)UnBox(L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		bool L_14 = __this->get_mIsOverlayVisible_3();
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		bool L_18 = __this->get_mIsPaused_4();
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		String_t* L_21;
		L_21 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB, L_17, /*hidden argument*/NULL);
		return L_21;
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4843AE4D04359CED7BE94B249DF391755CA69EA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * L_0 = (U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 *)il2cpp_codegen_object_new(U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0CE213D3E853130D7F505691011A77B600CC22A9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0CE213D3E853130D7F505691011A77B600CC22A9 (U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::<ToLogMessage>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CToLogMessageU3Eb__12_0_m28B459EA6793E803EF6E9BDF57EA6E3A4321E473 (U3CU3Ec_t0F3A009AF698AF5B91C712AEA67E085BE078DE31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF493EDE5A6EB1CABD965CB5CD1031FFEA25851D5 (U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::<e>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m2C7AEA8F2EF8D1BDBCE906816617775FE3211C18 (U3CU3Ec__DisplayClass10_0_tB71C083D771237E523886805C3DA5A8B8D6647CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_mE309A4009782D59CCC941E9C79DFCD9E28A9DFF2(_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m00DE54616FCF538BA0E5B305212512987ED3A43A (U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::<d>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m599E78A3E539005154714D11FB570AFA7314E418 (U3CU3Ec__DisplayClass8_0_t82B87FAC8DE10F30EF087DC56AEDA9CB8A64759F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Logger_ToLogMessage_mE309A4009782D59CCC941E9C79DFCD9E28A9DFF2(L_0, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m591E20002EE972312387B73448FAB6E284E285DA (U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::<w>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m20E0F0DADA4A9E5C1967656ABAC89551D14F3BFF (U3CU3Ec__DisplayClass9_0_tBD00CD86FB52AA0086BA9B677FC494ADE6EB5175 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_mE309A4009782D59CCC941E9C79DFCD9E28A9DFF2(_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551, _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC0560B5F45940D0FB364F2C814417A1BB8801EA3 (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mB0BF079147E3BB2E745DA9CEA7909FF46A8681A7 (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		// mDescriptionUpdated = true;
		__this->set_mDescriptionUpdated_0((bool)1);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_2 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		// mCoverImageUpdated = true;
		__this->set_mCoverImageUpdated_2((bool)1);
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_1 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___newPlayedTime0;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_4 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method)
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_0 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  _returnValue;
	_returnValue = Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m683C32BBAC83669BA2265894634CEAE70C4A6614 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_0 = (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 *)il2cpp_codegen_object_new(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF1525A8EC6DBAD5879E04DC9D3CB69A0CB8FECDF_inline (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method)
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->get_mStatus_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_m44A666BD9F58C2E88CF7834D2DD5E5CF72656813_inline (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->get_mLocalEndpointName_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ConnectionRequest_get_RemoteEndpoint_mAF9B21EB5C4CED446C3104D93E6D5DBCD0B68E84_inline (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method)
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_0 = __this->get_mRemoteEndpoint_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionRequest_get_Payload_mADA1595CE06EB1ECD53491837D0BDC5C1547F4AD_inline (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B * __this, const RuntimeMethod* method)
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mPayload_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_m2E94D1D61D75EE815C8CE46D8215546D467BBDD5_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mC1D8E7E8952E504E2C1B0C4ECE6F1A3F09482969_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->get_mRemoteEndpointId_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m2651E9590194CCC4ABFC33B296BDC50610365528_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->get_mResponseStatus_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConnectionResponse_get_Payload_m5360B8CDDC95D1562B585882EEC2797B360D6146_inline (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mPayload_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mD77A6C0F63F4BD90A55D7458A32B75BD10B32C74_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->get_mEndpointId_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m3669255E76B3765D86F828DAC7637411EEDF792F_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mName; }
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m3A63DE39A711E6CCD665C5C5A824E02BDE9D1E81_inline (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * __this, const RuntimeMethod* method)
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->get_mServiceId_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m5ADECD59D0AB0EDD4E6180D3AA00BEB00C40D91F_inline (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * NearbyConnectionConfiguration_get_InitializationCallback_m315F92292FEA007C57BBE9B373A8CE3F6BCC0AEF_inline (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 * __this, const RuntimeMethod* method)
{
	{
		// get { return mInitializationCallback; }
		Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * L_0 = __this->get_mInitializationCallback_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mB695E510458774851D8838069831235B4C72C60E_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->get_mDescriptionUpdated_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m0F8700FFE27E56F8BB80315851A7A82BD69A7764_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->get_mNewDescription_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m348CA469EBBCBBC7F405CD0AE6CB7BD0C93F1FBE_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->get_mCoverImageUpdated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m1566C76C4509C6D3109B03B7FE68664167900758_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_mNewPngCoverImage_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5C205EA90CDA65B69681079256713F4173DDA5B4_inline (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_0 = __this->get_mNewPlayedTime_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
