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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation>
struct Collection_1_tA78631484BA92EE95464C59DB743F647A744764F;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Collection_1_tC33368A46E89E0E3A4E4AC58F4D32F09FDF719A3;
// System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.BaseChannel>
struct ConcurrentQueue_1_tA39436033D544C709FB8F6B59E6ACEEC84CCCE0B;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Int32>
struct ConcurrentQueue_1_tD37D02579EC1107E5AF793B4EF10A88E7E5CC383;
// System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket>
struct ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.ConnectionRequest>
struct Dictionary_2_tA962D0D4427C5A99CFFAA35B025DA5303F171132;
// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.NetPeer>
struct Dictionary_2_t611518B729B5F14DC35A8C943D4BB9EDF4367C89;
// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.Utils.NtpRequest>
struct Dictionary_2_tF7979284F15FB28C130E547175D11C750B3CC1CB;
// System.Collections.Generic.Dictionary`2<LiteNetLib.NativeAddr,System.Net.IPEndPoint>
struct Dictionary_2_tE96A989187C5F494A0FB8BB711FC3CB2447B3469;
// System.Collections.Generic.Dictionary`2<System.UInt16,System.UInt16>
struct Dictionary_2_t80B7B4B3AEDA76D5DD88079CB6E37BD360BA02C1;
// System.Collections.Generic.Dictionary`2<System.UInt16,LiteNetLib.NetPeer/IncomingFragments>
struct Dictionary_2_tD7B56EDB7CAA4109FAE2750489A7C75C942E6895;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.List`1<LiteNetLib.NetPeer>
struct List_1_tA0AE79E99C04F71CA6BC030ED3EB474B9E42AE89;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Queue`1<LiteNetLib.NetEvent>
struct Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA;
// System.Collections.Generic.Queue`1<LiteNetLib.NetPacket>
struct Queue_1_t45BA0F1D5FC5D0AB22C8C0D39C3A3C24A7427237;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<LiteNetLib.NetPacket>
struct Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09;
// LiteNetLib.BaseChannel[]
struct BaseChannelU5BU5D_tF5F6EB1B1A722D64890C4A299125629ABE6DE248;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LiteNetLib.NetPacket[]
struct NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF;
// LiteNetLib.NetPeer[]
struct NetPeerU5BU5D_tC9FAD3DEDF5AD75602BF6313FB6CB11F99EAF6E8;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// LiteNetLib.ReliableChannel/PendingPacket[]
struct PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// LiteNetLib.BaseChannel
struct BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// LiteNetLib.ConnectionRequest
struct ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// LiteNetLib.IDeliveryEventListener
struct IDeliveryEventListener_tC0FB86D65782261F246567D525A63D5650F4E96C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// LiteNetLib.INetEventListener
struct INetEventListener_t1120940439728469518BC9DA89AF41F98B277429;
// LiteNetLib.INtpEventListener
struct INtpEventListener_t08C1FF1AE15DD22A996062F150292C4976EC1B89;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Net.IPHostEntry
struct IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// LiteNetLib.InvalidPacketException
struct InvalidPacketException_t6FCDFEDA0E482D30439ACEEA41E5DDB17DDF0769;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// LiteNetLib.NatPunchModule
struct NatPunchModule_t8D9DB85ABD528690BDC9B7F69F0920C31520288D;
// LiteNetLib.Utils.NetDataReader
struct NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD;
// LiteNetLib.NetEvent
struct NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316;
// LiteNetLib.NetManager
struct NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20;
// LiteNetLib.NetPacket
struct NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4;
// LiteNetLib.NetPacketPool
struct NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E;
// LiteNetLib.NetPacketReader
struct NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5;
// LiteNetLib.NetPeer
struct NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6;
// LiteNetLib.NetSocket
struct NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58;
// LiteNetLib.NetStatistics
struct NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// LiteNetLib.Utils.NtpPacket
struct NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895;
// LiteNetLib.Utils.NtpRequest
struct NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// LiteNetLib.Layers.PacketLayerBase
struct PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2;
// LiteNetLib.Utils.ParseException
struct ParseException_t625A20EE142D7498B4F30B7F09210BDB5DBB7DDF;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F;
// LiteNetLib.ReliableChannel
struct ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// LiteNetLib.SequencedChannel
struct SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// LiteNetLib.TooBigPacketException
struct TooBigPacketException_t4F4DB4223CA3BE7FB9AB8779F089A161A337BC45;
// LiteNetLib.UnitySocketFix
struct UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LiteNetLib.Layers.XorEncryptLayer
struct XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226;
// LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest
struct OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4;
// LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
struct OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA;
// LiteNetLib.EventBasedNetListener/OnConnectionRequest
struct OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38;
// LiteNetLib.EventBasedNetListener/OnDeliveryEvent
struct OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885;
// LiteNetLib.EventBasedNetListener/OnNetworkError
struct OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4;
// LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate
struct OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C;
// LiteNetLib.EventBasedNetListener/OnNetworkReceive
struct OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7;
// LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
struct OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F;
// LiteNetLib.EventBasedNetListener/OnNtpResponseEvent
struct OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC;
// LiteNetLib.EventBasedNetListener/OnPeerConnected
struct OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3;
// LiteNetLib.EventBasedNetListener/OnPeerDisconnected
struct OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C;
// LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
struct NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC;
// LiteNetLib.NatPunchModule/NatIntroduceResponsePacket
struct NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528;
// LiteNetLib.NatPunchModule/NatPunchPacket
struct NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84;
// LiteNetLib.NetManager/IPEndPointComparer
struct IPEndPointComparer_tEE1C3D03E9B172E2D8806B97F9C36726FE45B9E6;
// LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D;
// LiteNetLib.NetPeer/IncomingFragments
struct IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72;
// LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_t35A6CE4F06DB662416E3A3759731ED826EAFC631;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeliveryMethod_tCB0FD0BF5C7FB339F354DA50DE890884D687C2B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3CAF9F1A7A27CCA8612D71B41B4C459F455F5D7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatAddressType_t6031FFF07D83807BA99E7B84BD7ECCF36936B810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetDebug_t82550DCF49EB6A03ED21E6D41395BFD2ED2D750B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnconnectedMessageType_t6DD38578F0D2AEAB7FBA61ADAE334685E292853D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06C05B24B8AC51D50C3AA294D70C5E1E28E9A0E3;
IL2CPP_EXTERN_C String_t* _stringLiteral10F509F15EC5C6178F7787F554341A601F904E65;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA333AC28D289B0B3DAAF2AF1E2CD4188F6ACF2;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral3B19916E896E08666992C24EA969EE6DE3B95722;
IL2CPP_EXTERN_C String_t* _stringLiteral49BEFE76EF933CC018C51D77F66B724C36F2CE09;
IL2CPP_EXTERN_C String_t* _stringLiteral52439FA32A164EEC0DB5C0D160230161D4B7EC44;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6474EBE79D288AAD27635D1581EA921D28D400BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6A616A2BD726354344808434F427B73FA98BDD24;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral868EE9733DC26168EACBAC88A44D9E3DE178486F;
IL2CPP_EXTERN_C String_t* _stringLiteral88F1D02FAC5553C102E3A23C9A363D07A9C89238;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FFA609F3AF81CBA0BEF31B92E98F7C0B64DA06;
IL2CPP_EXTERN_C String_t* _stringLiteralC90CADE37127E5B15A609569628F61937A864B5A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB77237BCD39404C795BCB8688C2D3153355EBA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCDCAEAC0EC16DAB2B94EB8085B3301CCA8654423;
IL2CPP_EXTERN_C String_t* _stringLiteralF39AFC06F0127ED41BF2DBB29047355062D8065C;
IL2CPP_EXTERN_C String_t* _stringLiteralF62357F27A8ABD4B2897C89CFE2ABB3A9468CB41;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetUtils_ResolveAddress_mCCA97866D03534089846A64A54BFE426322BED1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateRequest_m0B433CCD667784DC829DC5EB687DEA9FD13F2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF;
struct NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket>
struct ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5, ____tail_3)); }
	inline Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * get__tail_3() const { return ____tail_3; }
	inline Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5, ____head_4)); }
	inline Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * get__head_4() const { return ____head_4; }
	inline Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_tC5A3EBA43E82726CABA6550E814E283CA12C0D09 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
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


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// LiteNetLib.BaseChannel
struct BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6  : public RuntimeObject
{
public:
	// LiteNetLib.NetPeer LiteNetLib.BaseChannel::Peer
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___Peer_0;
	// System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket> LiteNetLib.BaseChannel::OutgoingQueue
	ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * ___OutgoingQueue_1;
	// System.Int32 LiteNetLib.BaseChannel::_isAddedToPeerChannelSendQueue
	int32_t ____isAddedToPeerChannelSendQueue_2;

public:
	inline static int32_t get_offset_of_Peer_0() { return static_cast<int32_t>(offsetof(BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6, ___Peer_0)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get_Peer_0() const { return ___Peer_0; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of_Peer_0() { return &___Peer_0; }
	inline void set_Peer_0(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		___Peer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Peer_0), (void*)value);
	}

	inline static int32_t get_offset_of_OutgoingQueue_1() { return static_cast<int32_t>(offsetof(BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6, ___OutgoingQueue_1)); }
	inline ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * get_OutgoingQueue_1() const { return ___OutgoingQueue_1; }
	inline ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 ** get_address_of_OutgoingQueue_1() { return &___OutgoingQueue_1; }
	inline void set_OutgoingQueue_1(ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * value)
	{
		___OutgoingQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutgoingQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of__isAddedToPeerChannelSendQueue_2() { return static_cast<int32_t>(offsetof(BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6, ____isAddedToPeerChannelSendQueue_2)); }
	inline int32_t get__isAddedToPeerChannelSendQueue_2() const { return ____isAddedToPeerChannelSendQueue_2; }
	inline int32_t* get_address_of__isAddedToPeerChannelSendQueue_2() { return &____isAddedToPeerChannelSendQueue_2; }
	inline void set__isAddedToPeerChannelSendQueue_2(int32_t value)
	{
		____isAddedToPeerChannelSendQueue_2 = value;
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


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_tBDC10C4DDCA6274C2112B907A324D8C2DC6F856C  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::addresses
	Collection_1_tA78631484BA92EE95464C59DB743F647A744764F * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(GatewayIPAddressInformationCollection_tBDC10C4DDCA6274C2112B907A324D8C2DC6F856C, ___addresses_0)); }
	inline Collection_1_tA78631484BA92EE95464C59DB743F647A744764F * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_tA78631484BA92EE95464C59DB743F647A744764F ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_tA78631484BA92EE95464C59DB743F647A744764F * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
};


// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_tE19E2BA66975A1B471377EE585DB7AC4247F3EC5  : public RuntimeObject
{
public:

public:
};


// System.Net.IPHostEntry
struct IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA  : public RuntimeObject
{
public:
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;

public:
	inline static int32_t get_offset_of_hostName_0() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___hostName_0)); }
	inline String_t* get_hostName_0() const { return ___hostName_0; }
	inline String_t** get_address_of_hostName_0() { return &___hostName_0; }
	inline void set_hostName_0(String_t* value)
	{
		___hostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___aliases_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aliases_1), (void*)value);
	}

	inline static int32_t get_offset_of_addressList_2() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___addressList_2)); }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* get_addressList_2() const { return ___addressList_2; }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB** get_address_of_addressList_2() { return &___addressList_2; }
	inline void set_addressList_2(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* value)
	{
		___addressList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressList_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrustedHost_3() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___isTrustedHost_3)); }
	inline bool get_isTrustedHost_3() const { return ___isTrustedHost_3; }
	inline bool* get_address_of_isTrustedHost_3() { return &___isTrustedHost_3; }
	inline void set_isTrustedHost_3(bool value)
	{
		___isTrustedHost_3 = value;
	}
};


// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.Utils.NetDataReader
struct NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.Utils.NetDataReader::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_0;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_position
	int32_t ____position_1;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_dataSize
	int32_t ____dataSize_2;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_offset
	int32_t ____offset_3;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD, ____data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__dataSize_2() { return static_cast<int32_t>(offsetof(NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD, ____dataSize_2)); }
	inline int32_t get__dataSize_2() const { return ____dataSize_2; }
	inline int32_t* get_address_of__dataSize_2() { return &____dataSize_2; }
	inline void set__dataSize_2(int32_t value)
	{
		____dataSize_2 = value;
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD, ____offset_3)); }
	inline int32_t get__offset_3() const { return ____offset_3; }
	inline int32_t* get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(int32_t value)
	{
		____offset_3 = value;
	}
};


// LiteNetLib.NetPacket
struct NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.NetPacket::RawData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RawData_2;
	// System.Int32 LiteNetLib.NetPacket::Size
	int32_t ___Size_3;
	// System.Object LiteNetLib.NetPacket::UserData
	RuntimeObject * ___UserData_4;
	// LiteNetLib.NetPacket LiteNetLib.NetPacket::Next
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___Next_5;

public:
	inline static int32_t get_offset_of_RawData_2() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4, ___RawData_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RawData_2() const { return ___RawData_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RawData_2() { return &___RawData_2; }
	inline void set_RawData_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RawData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawData_2), (void*)value);
	}

	inline static int32_t get_offset_of_Size_3() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4, ___Size_3)); }
	inline int32_t get_Size_3() const { return ___Size_3; }
	inline int32_t* get_address_of_Size_3() { return &___Size_3; }
	inline void set_Size_3(int32_t value)
	{
		___Size_3 = value;
	}

	inline static int32_t get_offset_of_UserData_4() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4, ___UserData_4)); }
	inline RuntimeObject * get_UserData_4() const { return ___UserData_4; }
	inline RuntimeObject ** get_address_of_UserData_4() { return &___UserData_4; }
	inline void set_UserData_4(RuntimeObject * value)
	{
		___UserData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserData_4), (void*)value);
	}

	inline static int32_t get_offset_of_Next_5() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4, ___Next_5)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get_Next_5() const { return ___Next_5; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of_Next_5() { return &___Next_5; }
	inline void set_Next_5(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		___Next_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_5), (void*)value);
	}
};

struct NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_StaticFields
{
public:
	// System.Int32 LiteNetLib.NetPacket::PropertiesCount
	int32_t ___PropertiesCount_0;
	// System.Int32[] LiteNetLib.NetPacket::HeaderSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___HeaderSizes_1;

public:
	inline static int32_t get_offset_of_PropertiesCount_0() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_StaticFields, ___PropertiesCount_0)); }
	inline int32_t get_PropertiesCount_0() const { return ___PropertiesCount_0; }
	inline int32_t* get_address_of_PropertiesCount_0() { return &___PropertiesCount_0; }
	inline void set_PropertiesCount_0(int32_t value)
	{
		___PropertiesCount_0 = value;
	}

	inline static int32_t get_offset_of_HeaderSizes_1() { return static_cast<int32_t>(offsetof(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_StaticFields, ___HeaderSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_HeaderSizes_1() const { return ___HeaderSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_HeaderSizes_1() { return &___HeaderSizes_1; }
	inline void set_HeaderSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___HeaderSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeaderSizes_1), (void*)value);
	}
};


// LiteNetLib.NetPacketPool
struct NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E  : public RuntimeObject
{
public:
	// LiteNetLib.NetPacket LiteNetLib.NetPacketPool::_head
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____head_0;
	// System.Int32 LiteNetLib.NetPacketPool::_count
	int32_t ____count_1;
	// System.Object LiteNetLib.NetPacketPool::_lock
	RuntimeObject * ____lock_2;

public:
	inline static int32_t get_offset_of__head_0() { return static_cast<int32_t>(offsetof(NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E, ____head_0)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__head_0() const { return ____head_0; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__head_0() { return &____head_0; }
	inline void set__head_0(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_0), (void*)value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__lock_2() { return static_cast<int32_t>(offsetof(NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E, ____lock_2)); }
	inline RuntimeObject * get__lock_2() const { return ____lock_2; }
	inline RuntimeObject ** get_address_of__lock_2() { return &____lock_2; }
	inline void set__lock_2(RuntimeObject * value)
	{
		____lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_2), (void*)value);
	}
};


// LiteNetLib.NetStatistics
struct NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353  : public RuntimeObject
{
public:
	// System.Int64 LiteNetLib.NetStatistics::_packetsSent
	int64_t ____packetsSent_0;
	// System.Int64 LiteNetLib.NetStatistics::_packetsReceived
	int64_t ____packetsReceived_1;
	// System.Int64 LiteNetLib.NetStatistics::_bytesSent
	int64_t ____bytesSent_2;
	// System.Int64 LiteNetLib.NetStatistics::_bytesReceived
	int64_t ____bytesReceived_3;
	// System.Int64 LiteNetLib.NetStatistics::_packetLoss
	int64_t ____packetLoss_4;

public:
	inline static int32_t get_offset_of__packetsSent_0() { return static_cast<int32_t>(offsetof(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353, ____packetsSent_0)); }
	inline int64_t get__packetsSent_0() const { return ____packetsSent_0; }
	inline int64_t* get_address_of__packetsSent_0() { return &____packetsSent_0; }
	inline void set__packetsSent_0(int64_t value)
	{
		____packetsSent_0 = value;
	}

	inline static int32_t get_offset_of__packetsReceived_1() { return static_cast<int32_t>(offsetof(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353, ____packetsReceived_1)); }
	inline int64_t get__packetsReceived_1() const { return ____packetsReceived_1; }
	inline int64_t* get_address_of__packetsReceived_1() { return &____packetsReceived_1; }
	inline void set__packetsReceived_1(int64_t value)
	{
		____packetsReceived_1 = value;
	}

	inline static int32_t get_offset_of__bytesSent_2() { return static_cast<int32_t>(offsetof(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353, ____bytesSent_2)); }
	inline int64_t get__bytesSent_2() const { return ____bytesSent_2; }
	inline int64_t* get_address_of__bytesSent_2() { return &____bytesSent_2; }
	inline void set__bytesSent_2(int64_t value)
	{
		____bytesSent_2 = value;
	}

	inline static int32_t get_offset_of__bytesReceived_3() { return static_cast<int32_t>(offsetof(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353, ____bytesReceived_3)); }
	inline int64_t get__bytesReceived_3() const { return ____bytesReceived_3; }
	inline int64_t* get_address_of__bytesReceived_3() { return &____bytesReceived_3; }
	inline void set__bytesReceived_3(int64_t value)
	{
		____bytesReceived_3 = value;
	}

	inline static int32_t get_offset_of__packetLoss_4() { return static_cast<int32_t>(offsetof(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353, ____packetLoss_4)); }
	inline int64_t get__packetLoss_4() const { return ____packetLoss_4; }
	inline int64_t* get_address_of__packetLoss_4() { return &____packetLoss_4; }
	inline void set__packetLoss_4(int64_t value)
	{
		____packetLoss_4 = value;
	}
};


// LiteNetLib.NetUtils
struct NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF  : public RuntimeObject
{
public:

public:
};

struct NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> LiteNetLib.NetUtils::IpList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___IpList_0;

public:
	inline static int32_t get_offset_of_IpList_0() { return static_cast<int32_t>(offsetof(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields, ___IpList_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_IpList_0() const { return ___IpList_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_IpList_0() { return &___IpList_0; }
	inline void set_IpList_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___IpList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IpList_0), (void*)value);
	}
};


// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.Utils.NtpRequest
struct NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint LiteNetLib.Utils.NtpRequest::_ntpEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____ntpEndPoint_3;
	// System.Int32 LiteNetLib.Utils.NtpRequest::_resendTime
	int32_t ____resendTime_4;
	// System.Int32 LiteNetLib.Utils.NtpRequest::_killTime
	int32_t ____killTime_5;

public:
	inline static int32_t get_offset_of__ntpEndPoint_3() { return static_cast<int32_t>(offsetof(NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31, ____ntpEndPoint_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get__ntpEndPoint_3() const { return ____ntpEndPoint_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of__ntpEndPoint_3() { return &____ntpEndPoint_3; }
	inline void set__ntpEndPoint_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		____ntpEndPoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ntpEndPoint_3), (void*)value);
	}

	inline static int32_t get_offset_of__resendTime_4() { return static_cast<int32_t>(offsetof(NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31, ____resendTime_4)); }
	inline int32_t get__resendTime_4() const { return ____resendTime_4; }
	inline int32_t* get_address_of__resendTime_4() { return &____resendTime_4; }
	inline void set__resendTime_4(int32_t value)
	{
		____resendTime_4 = value;
	}

	inline static int32_t get_offset_of__killTime_5() { return static_cast<int32_t>(offsetof(NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31, ____killTime_5)); }
	inline int32_t get__killTime_5() const { return ____killTime_5; }
	inline int32_t* get_address_of__killTime_5() { return &____killTime_5; }
	inline void set__killTime_5(int32_t value)
	{
		____killTime_5 = value;
	}
};


// LiteNetLib.Layers.PacketLayerBase
struct PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2  : public RuntimeObject
{
public:
	// System.Int32 LiteNetLib.Layers.PacketLayerBase::ExtraPacketSizeForLayer
	int32_t ___ExtraPacketSizeForLayer_0;

public:
	inline static int32_t get_offset_of_ExtraPacketSizeForLayer_0() { return static_cast<int32_t>(offsetof(PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2, ___ExtraPacketSizeForLayer_0)); }
	inline int32_t get_ExtraPacketSizeForLayer_0() const { return ___ExtraPacketSizeForLayer_0; }
	inline int32_t* get_address_of_ExtraPacketSizeForLayer_0() { return &___ExtraPacketSizeForLayer_0; }
	inline void set_ExtraPacketSizeForLayer_0(int32_t value)
	{
		___ExtraPacketSizeForLayer_0 = value;
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


// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::addresses
	Collection_1_tC33368A46E89E0E3A4E4AC58F4D32F09FDF719A3 * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF, ___addresses_0)); }
	inline Collection_1_tC33368A46E89E0E3A4E4AC58F4D32F09FDF719A3 * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_tC33368A46E89E0E3A4E4AC58F4D32F09FDF719A3 ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_tC33368A46E89E0E3A4E4AC58F4D32F09FDF719A3 * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
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

// LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
struct NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::<Internal>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CInternalU3Ek__BackingField_0;
	// System.String LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC, ___U3CInternalU3Ek__BackingField_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CInternalU3Ek__BackingField_0() const { return ___U3CInternalU3Ek__BackingField_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CInternalU3Ek__BackingField_0() { return &___U3CInternalU3Ek__BackingField_0; }
	inline void set_U3CInternalU3Ek__BackingField_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CInternalU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC, ___U3CTokenU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_1() const { return ___U3CTokenU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_1() { return &___U3CTokenU3Ek__BackingField_1; }
	inline void set_U3CTokenU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_1), (void*)value);
	}
};


// LiteNetLib.NatPunchModule/NatIntroduceResponsePacket
struct NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::<Internal>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CInternalU3Ek__BackingField_0;
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::<External>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CExternalU3Ek__BackingField_1;
	// System.String LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528, ___U3CInternalU3Ek__BackingField_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CInternalU3Ek__BackingField_0() const { return ___U3CInternalU3Ek__BackingField_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CInternalU3Ek__BackingField_0() { return &___U3CInternalU3Ek__BackingField_0; }
	inline void set_U3CInternalU3Ek__BackingField_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CInternalU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExternalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528, ___U3CExternalU3Ek__BackingField_1)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CExternalU3Ek__BackingField_1() const { return ___U3CExternalU3Ek__BackingField_1; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CExternalU3Ek__BackingField_1() { return &___U3CExternalU3Ek__BackingField_1; }
	inline void set_U3CExternalU3Ek__BackingField_1(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CExternalU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExternalU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528, ___U3CTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_2() const { return ___U3CTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_2() { return &___U3CTokenU3Ek__BackingField_2; }
	inline void set_U3CTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_2), (void*)value);
	}
};


// LiteNetLib.NatPunchModule/NatPunchPacket
struct NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84  : public RuntimeObject
{
public:
	// System.String LiteNetLib.NatPunchModule/NatPunchPacket::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_0;
	// System.Boolean LiteNetLib.NatPunchModule/NatPunchPacket::<IsExternal>k__BackingField
	bool ___U3CIsExternalU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84, ___U3CTokenU3Ek__BackingField_0)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsExternalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84, ___U3CIsExternalU3Ek__BackingField_1)); }
	inline bool get_U3CIsExternalU3Ek__BackingField_1() const { return ___U3CIsExternalU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsExternalU3Ek__BackingField_1() { return &___U3CIsExternalU3Ek__BackingField_1; }
	inline void set_U3CIsExternalU3Ek__BackingField_1(bool value)
	{
		___U3CIsExternalU3Ek__BackingField_1 = value;
	}
};


// LiteNetLib.NativeSocket/UnixSock
struct UnixSock_tFA9DE5075B67E26F7D0AE325A21D952EF5426AC1  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.NativeSocket/WinSock
struct WinSock_t5E3B75BC11CBCB3014E3E8CA783781C884710CFE  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.NetManager/IPEndPointComparer
struct IPEndPointComparer_tEE1C3D03E9B172E2D8806B97F9C36726FE45B9E6  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.NetPeer/IncomingFragments
struct IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72  : public RuntimeObject
{
public:
	// LiteNetLib.NetPacket[] LiteNetLib.NetPeer/IncomingFragments::Fragments
	NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* ___Fragments_0;
	// System.Int32 LiteNetLib.NetPeer/IncomingFragments::ReceivedCount
	int32_t ___ReceivedCount_1;
	// System.Int32 LiteNetLib.NetPeer/IncomingFragments::TotalSize
	int32_t ___TotalSize_2;
	// System.Byte LiteNetLib.NetPeer/IncomingFragments::ChannelId
	uint8_t ___ChannelId_3;

public:
	inline static int32_t get_offset_of_Fragments_0() { return static_cast<int32_t>(offsetof(IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72, ___Fragments_0)); }
	inline NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* get_Fragments_0() const { return ___Fragments_0; }
	inline NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF** get_address_of_Fragments_0() { return &___Fragments_0; }
	inline void set_Fragments_0(NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* value)
	{
		___Fragments_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fragments_0), (void*)value);
	}

	inline static int32_t get_offset_of_ReceivedCount_1() { return static_cast<int32_t>(offsetof(IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72, ___ReceivedCount_1)); }
	inline int32_t get_ReceivedCount_1() const { return ___ReceivedCount_1; }
	inline int32_t* get_address_of_ReceivedCount_1() { return &___ReceivedCount_1; }
	inline void set_ReceivedCount_1(int32_t value)
	{
		___ReceivedCount_1 = value;
	}

	inline static int32_t get_offset_of_TotalSize_2() { return static_cast<int32_t>(offsetof(IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72, ___TotalSize_2)); }
	inline int32_t get_TotalSize_2() const { return ___TotalSize_2; }
	inline int32_t* get_address_of_TotalSize_2() { return &___TotalSize_2; }
	inline void set_TotalSize_2(int32_t value)
	{
		___TotalSize_2 = value;
	}

	inline static int32_t get_offset_of_ChannelId_3() { return static_cast<int32_t>(offsetof(IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72, ___ChannelId_3)); }
	inline uint8_t get_ChannelId_3() const { return ___ChannelId_3; }
	inline uint8_t* get_address_of_ChannelId_3() { return &___ChannelId_3; }
	inline void set_ChannelId_3(uint8_t value)
	{
		___ChannelId_3 = value;
	}
};


// LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_t35A6CE4F06DB662416E3A3759731ED826EAFC631  : public RuntimeObject
{
public:

public:
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

// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
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


// LiteNetLib.NetPacketReader
struct NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5  : public NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD
{
public:
	// LiteNetLib.NetPacket LiteNetLib.NetPacketReader::_packet
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____packet_4;
	// LiteNetLib.NetManager LiteNetLib.NetPacketReader::_manager
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * ____manager_5;
	// LiteNetLib.NetEvent LiteNetLib.NetPacketReader::_evt
	NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * ____evt_6;

public:
	inline static int32_t get_offset_of__packet_4() { return static_cast<int32_t>(offsetof(NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5, ____packet_4)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__packet_4() const { return ____packet_4; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__packet_4() { return &____packet_4; }
	inline void set__packet_4(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____packet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packet_4), (void*)value);
	}

	inline static int32_t get_offset_of__manager_5() { return static_cast<int32_t>(offsetof(NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5, ____manager_5)); }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * get__manager_5() const { return ____manager_5; }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 ** get_address_of__manager_5() { return &____manager_5; }
	inline void set__manager_5(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * value)
	{
		____manager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manager_5), (void*)value);
	}

	inline static int32_t get_offset_of__evt_6() { return static_cast<int32_t>(offsetof(NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5, ____evt_6)); }
	inline NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * get__evt_6() const { return ____evt_6; }
	inline NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 ** get_address_of__evt_6() { return &____evt_6; }
	inline void set__evt_6(NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * value)
	{
		____evt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evt_6), (void*)value);
	}
};


// LiteNetLib.SequencedChannel
struct SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3  : public BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6
{
public:
	// System.Int32 LiteNetLib.SequencedChannel::_localSequence
	int32_t ____localSequence_3;
	// System.UInt16 LiteNetLib.SequencedChannel::_remoteSequence
	uint16_t ____remoteSequence_4;
	// System.Boolean LiteNetLib.SequencedChannel::_reliable
	bool ____reliable_5;
	// LiteNetLib.NetPacket LiteNetLib.SequencedChannel::_lastPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____lastPacket_6;
	// LiteNetLib.NetPacket LiteNetLib.SequencedChannel::_ackPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____ackPacket_7;
	// System.Boolean LiteNetLib.SequencedChannel::_mustSendAck
	bool ____mustSendAck_8;
	// System.Byte LiteNetLib.SequencedChannel::_id
	uint8_t ____id_9;
	// System.Int64 LiteNetLib.SequencedChannel::_lastPacketSendTime
	int64_t ____lastPacketSendTime_10;

public:
	inline static int32_t get_offset_of__localSequence_3() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____localSequence_3)); }
	inline int32_t get__localSequence_3() const { return ____localSequence_3; }
	inline int32_t* get_address_of__localSequence_3() { return &____localSequence_3; }
	inline void set__localSequence_3(int32_t value)
	{
		____localSequence_3 = value;
	}

	inline static int32_t get_offset_of__remoteSequence_4() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____remoteSequence_4)); }
	inline uint16_t get__remoteSequence_4() const { return ____remoteSequence_4; }
	inline uint16_t* get_address_of__remoteSequence_4() { return &____remoteSequence_4; }
	inline void set__remoteSequence_4(uint16_t value)
	{
		____remoteSequence_4 = value;
	}

	inline static int32_t get_offset_of__reliable_5() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____reliable_5)); }
	inline bool get__reliable_5() const { return ____reliable_5; }
	inline bool* get_address_of__reliable_5() { return &____reliable_5; }
	inline void set__reliable_5(bool value)
	{
		____reliable_5 = value;
	}

	inline static int32_t get_offset_of__lastPacket_6() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____lastPacket_6)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__lastPacket_6() const { return ____lastPacket_6; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__lastPacket_6() { return &____lastPacket_6; }
	inline void set__lastPacket_6(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____lastPacket_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastPacket_6), (void*)value);
	}

	inline static int32_t get_offset_of__ackPacket_7() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____ackPacket_7)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__ackPacket_7() const { return ____ackPacket_7; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__ackPacket_7() { return &____ackPacket_7; }
	inline void set__ackPacket_7(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____ackPacket_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ackPacket_7), (void*)value);
	}

	inline static int32_t get_offset_of__mustSendAck_8() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____mustSendAck_8)); }
	inline bool get__mustSendAck_8() const { return ____mustSendAck_8; }
	inline bool* get_address_of__mustSendAck_8() { return &____mustSendAck_8; }
	inline void set__mustSendAck_8(bool value)
	{
		____mustSendAck_8 = value;
	}

	inline static int32_t get_offset_of__id_9() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____id_9)); }
	inline uint8_t get__id_9() const { return ____id_9; }
	inline uint8_t* get_address_of__id_9() { return &____id_9; }
	inline void set__id_9(uint8_t value)
	{
		____id_9 = value;
	}

	inline static int32_t get_offset_of__lastPacketSendTime_10() { return static_cast<int32_t>(offsetof(SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3, ____lastPacketSendTime_10)); }
	inline int64_t get__lastPacketSendTime_10() const { return ____lastPacketSendTime_10; }
	inline int64_t* get_address_of__lastPacketSendTime_10() { return &____lastPacketSendTime_10; }
	inline void set__lastPacketSendTime_10(int64_t value)
	{
		____lastPacketSendTime_10 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Net.NetworkInformation.UnicastIPAddressInformation
struct UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB  : public IPAddressInformation_tE19E2BA66975A1B471377EE585DB7AC4247F3EC5
{
public:

public:
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


// LiteNetLib.Layers.XorEncryptLayer
struct XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226  : public PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2
{
public:
	// System.Byte[] LiteNetLib.Layers.XorEncryptLayer::_byteKey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____byteKey_1;

public:
	inline static int32_t get_offset_of__byteKey_1() { return static_cast<int32_t>(offsetof(XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226, ____byteKey_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__byteKey_1() const { return ____byteKey_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__byteKey_1() { return &____byteKey_1; }
	inline void set__byteKey_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____byteKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byteKey_1), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_tD3D9EECB639B4CEBC826C4C942BCB53D7371CBC9 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_tD3D9EECB639B4CEBC826C4C942BCB53D7371CBC9__padding[28];
	};

public:
};


// LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
struct ConverterHelperDouble_t4D03EE28178EC0DFE645971A4CA48585BCCFE2C6 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Along
			uint64_t ___Along_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Along_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Adouble
			double ___Adouble_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Adouble_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Along_0() { return static_cast<int32_t>(offsetof(ConverterHelperDouble_t4D03EE28178EC0DFE645971A4CA48585BCCFE2C6, ___Along_0)); }
	inline uint64_t get_Along_0() const { return ___Along_0; }
	inline uint64_t* get_address_of_Along_0() { return &___Along_0; }
	inline void set_Along_0(uint64_t value)
	{
		___Along_0 = value;
	}

	inline static int32_t get_offset_of_Adouble_1() { return static_cast<int32_t>(offsetof(ConverterHelperDouble_t4D03EE28178EC0DFE645971A4CA48585BCCFE2C6, ___Adouble_1)); }
	inline double get_Adouble_1() const { return ___Adouble_1; }
	inline double* get_address_of_Adouble_1() { return &___Adouble_1; }
	inline void set_Adouble_1(double value)
	{
		___Adouble_1 = value;
	}
};


// LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat
struct ConverterHelperFloat_t9AFD8CCB5226BC3B452B554485E8E58ED8B7D006 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Aint
			int32_t ___Aint_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Aint_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Afloat
			float ___Afloat_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Afloat_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Aint_0() { return static_cast<int32_t>(offsetof(ConverterHelperFloat_t9AFD8CCB5226BC3B452B554485E8E58ED8B7D006, ___Aint_0)); }
	inline int32_t get_Aint_0() const { return ___Aint_0; }
	inline int32_t* get_address_of_Aint_0() { return &___Aint_0; }
	inline void set_Aint_0(int32_t value)
	{
		___Aint_0 = value;
	}

	inline static int32_t get_offset_of_Afloat_1() { return static_cast<int32_t>(offsetof(ConverterHelperFloat_t9AFD8CCB5226BC3B452B554485E8E58ED8B7D006, ___Afloat_1)); }
	inline float get_Afloat_1() const { return ___Afloat_1; }
	inline float* get_address_of_Afloat_1() { return &___Afloat_1; }
	inline void set_Afloat_1(float value)
	{
		___Afloat_1 = value;
	}
};


// LiteNetLib.NatPunchModule/RequestEventData
struct RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763 
{
public:
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/RequestEventData::LocalEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___LocalEndPoint_0;
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/RequestEventData::RemoteEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___RemoteEndPoint_1;
	// System.String LiteNetLib.NatPunchModule/RequestEventData::Token
	String_t* ___Token_2;

public:
	inline static int32_t get_offset_of_LocalEndPoint_0() { return static_cast<int32_t>(offsetof(RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763, ___LocalEndPoint_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_LocalEndPoint_0() const { return ___LocalEndPoint_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_LocalEndPoint_0() { return &___LocalEndPoint_0; }
	inline void set_LocalEndPoint_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___LocalEndPoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalEndPoint_0), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteEndPoint_1() { return static_cast<int32_t>(offsetof(RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763, ___RemoteEndPoint_1)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_RemoteEndPoint_1() const { return ___RemoteEndPoint_1; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_RemoteEndPoint_1() { return &___RemoteEndPoint_1; }
	inline void set_RemoteEndPoint_1(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___RemoteEndPoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteEndPoint_1), (void*)value);
	}

	inline static int32_t get_offset_of_Token_2() { return static_cast<int32_t>(offsetof(RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763, ___Token_2)); }
	inline String_t* get_Token_2() const { return ___Token_2; }
	inline String_t** get_address_of_Token_2() { return &___Token_2; }
	inline void set_Token_2(String_t* value)
	{
		___Token_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Token_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LiteNetLib.NatPunchModule/RequestEventData
struct RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_pinvoke
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___LocalEndPoint_0;
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___RemoteEndPoint_1;
	char* ___Token_2;
};
// Native definition for COM marshalling of LiteNetLib.NatPunchModule/RequestEventData
struct RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_com
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___LocalEndPoint_0;
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___RemoteEndPoint_1;
	Il2CppChar* ___Token_2;
};

// LiteNetLib.NetManager/NetPeerEnumerator
struct NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E 
{
public:
	// LiteNetLib.NetPeer LiteNetLib.NetManager/NetPeerEnumerator::_initialPeer
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____initialPeer_0;
	// LiteNetLib.NetPeer LiteNetLib.NetManager/NetPeerEnumerator::_p
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____p_1;

public:
	inline static int32_t get_offset_of__initialPeer_0() { return static_cast<int32_t>(offsetof(NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E, ____initialPeer_0)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get__initialPeer_0() const { return ____initialPeer_0; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of__initialPeer_0() { return &____initialPeer_0; }
	inline void set__initialPeer_0(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		____initialPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of__p_1() { return static_cast<int32_t>(offsetof(NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E, ____p_1)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get__p_1() const { return ____p_1; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of__p_1() { return &____p_1; }
	inline void set__p_1(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		____p_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____p_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LiteNetLib.NetManager/NetPeerEnumerator
struct NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_pinvoke
{
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____initialPeer_0;
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____p_1;
};
// Native definition for COM marshalling of LiteNetLib.NetManager/NetPeerEnumerator
struct NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_com
{
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____initialPeer_0;
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____p_1;
};

// LiteNetLib.ReliableChannel/PendingPacket
struct PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 
{
public:
	// LiteNetLib.NetPacket LiteNetLib.ReliableChannel/PendingPacket::_packet
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____packet_0;
	// System.Int64 LiteNetLib.ReliableChannel/PendingPacket::_timeStamp
	int64_t ____timeStamp_1;
	// System.Boolean LiteNetLib.ReliableChannel/PendingPacket::_isSent
	bool ____isSent_2;

public:
	inline static int32_t get_offset_of__packet_0() { return static_cast<int32_t>(offsetof(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4, ____packet_0)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__packet_0() const { return ____packet_0; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__packet_0() { return &____packet_0; }
	inline void set__packet_0(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____packet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packet_0), (void*)value);
	}

	inline static int32_t get_offset_of__timeStamp_1() { return static_cast<int32_t>(offsetof(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4, ____timeStamp_1)); }
	inline int64_t get__timeStamp_1() const { return ____timeStamp_1; }
	inline int64_t* get_address_of__timeStamp_1() { return &____timeStamp_1; }
	inline void set__timeStamp_1(int64_t value)
	{
		____timeStamp_1 = value;
	}

	inline static int32_t get_offset_of__isSent_2() { return static_cast<int32_t>(offsetof(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4, ____isSent_2)); }
	inline bool get__isSent_2() const { return ____isSent_2; }
	inline bool* get_address_of__isSent_2() { return &____isSent_2; }
	inline void set__isSent_2(bool value)
	{
		____isSent_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LiteNetLib.ReliableChannel/PendingPacket
struct PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_pinvoke
{
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____packet_0;
	int64_t ____timeStamp_1;
	int32_t ____isSent_2;
};
// Native definition for COM marshalling of LiteNetLib.ReliableChannel/PendingPacket
struct PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_com
{
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____packet_0;
	int64_t ____timeStamp_1;
	int32_t ____isSent_2;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.ConnectionRequestResult
struct ConnectionRequestResult_t639F155DB666BF7707D99E11E4167C6589830BA2 
{
public:
	// System.Int32 LiteNetLib.ConnectionRequestResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionRequestResult_t639F155DB666BF7707D99E11E4167C6589830BA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.ConnectionState
struct ConnectionState_t4BCD2501A24AA283394E024CC50074AE38CDC14D 
{
public:
	// System.Byte LiteNetLib.ConnectionState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_t4BCD2501A24AA283394E024CC50074AE38CDC14D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// LiteNetLib.DeliveryMethod
struct DeliveryMethod_tCB0FD0BF5C7FB339F354DA50DE890884D687C2B0 
{
public:
	// System.Byte LiteNetLib.DeliveryMethod::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMethod_tCB0FD0BF5C7FB339F354DA50DE890884D687C2B0, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.DisconnectReason
struct DisconnectReason_tD0F048764CF23C1AA206FF8BEA6D82F156C187ED 
{
public:
	// System.Int32 LiteNetLib.DisconnectReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectReason_tD0F048764CF23C1AA206FF8BEA6D82F156C187ED, ___value___2)); }
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

// LiteNetLib.IPv6Mode
struct IPv6Mode_t0ECEE8BB7AAC528AD224106E4DD6ACC474875A00 
{
public:
	// System.Int32 LiteNetLib.IPv6Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPv6Mode_t0ECEE8BB7AAC528AD224106E4DD6ACC474875A00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.LocalAddrType
struct LocalAddrType_t76A172B56D0CFF051D85EFB1D267DA8360D0DD9B 
{
public:
	// System.Int32 LiteNetLib.LocalAddrType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocalAddrType_t76A172B56D0CFF051D85EFB1D267DA8360D0DD9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.NatAddressType
struct NatAddressType_t6031FFF07D83807BA99E7B84BD7ECCF36936B810 
{
public:
	// System.Int32 LiteNetLib.NatAddressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NatAddressType_t6031FFF07D83807BA99E7B84BD7ECCF36936B810, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.NetSocket
struct NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket LiteNetLib.NetSocket::_udpSocketv4
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ____udpSocketv4_1;
	// System.Net.Sockets.Socket LiteNetLib.NetSocket::_udpSocketv6
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ____udpSocketv6_2;
	// System.Threading.Thread LiteNetLib.NetSocket::_threadv4
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____threadv4_3;
	// System.Threading.Thread LiteNetLib.NetSocket::_threadv6
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____threadv6_4;
	// System.Net.IPEndPoint LiteNetLib.NetSocket::_bufferEndPointv4
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____bufferEndPointv4_5;
	// System.Net.IPEndPoint LiteNetLib.NetSocket::_bufferEndPointv6
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____bufferEndPointv6_6;
	// LiteNetLib.NetManager LiteNetLib.NetSocket::_listener
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * ____listener_9;
	// System.Boolean LiteNetLib.NetSocket::_useNativeSockets
	bool ____useNativeSockets_10;
	// System.Collections.Generic.Dictionary`2<LiteNetLib.NativeAddr,System.Net.IPEndPoint> LiteNetLib.NetSocket::_nativeAddrMap
	Dictionary_2_tE96A989187C5F494A0FB8BB711FC3CB2447B3469 * ____nativeAddrMap_11;
	// LiteNetLib.UnitySocketFix LiteNetLib.NetSocket::_unitySocketFix
	UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * ____unitySocketFix_15;
	// System.Int32 LiteNetLib.NetSocket::<LocalPort>k__BackingField
	int32_t ___U3CLocalPortU3Ek__BackingField_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) LiteNetLib.NetSocket::IsRunning
	bool ___IsRunning_17;

public:
	inline static int32_t get_offset_of__udpSocketv4_1() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____udpSocketv4_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get__udpSocketv4_1() const { return ____udpSocketv4_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of__udpSocketv4_1() { return &____udpSocketv4_1; }
	inline void set__udpSocketv4_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		____udpSocketv4_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____udpSocketv4_1), (void*)value);
	}

	inline static int32_t get_offset_of__udpSocketv6_2() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____udpSocketv6_2)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get__udpSocketv6_2() const { return ____udpSocketv6_2; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of__udpSocketv6_2() { return &____udpSocketv6_2; }
	inline void set__udpSocketv6_2(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		____udpSocketv6_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____udpSocketv6_2), (void*)value);
	}

	inline static int32_t get_offset_of__threadv4_3() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____threadv4_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__threadv4_3() const { return ____threadv4_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__threadv4_3() { return &____threadv4_3; }
	inline void set__threadv4_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____threadv4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadv4_3), (void*)value);
	}

	inline static int32_t get_offset_of__threadv6_4() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____threadv6_4)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__threadv6_4() const { return ____threadv6_4; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__threadv6_4() { return &____threadv6_4; }
	inline void set__threadv6_4(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____threadv6_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadv6_4), (void*)value);
	}

	inline static int32_t get_offset_of__bufferEndPointv4_5() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____bufferEndPointv4_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get__bufferEndPointv4_5() const { return ____bufferEndPointv4_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of__bufferEndPointv4_5() { return &____bufferEndPointv4_5; }
	inline void set__bufferEndPointv4_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		____bufferEndPointv4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferEndPointv4_5), (void*)value);
	}

	inline static int32_t get_offset_of__bufferEndPointv6_6() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____bufferEndPointv6_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get__bufferEndPointv6_6() const { return ____bufferEndPointv6_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of__bufferEndPointv6_6() { return &____bufferEndPointv6_6; }
	inline void set__bufferEndPointv6_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		____bufferEndPointv6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferEndPointv6_6), (void*)value);
	}

	inline static int32_t get_offset_of__listener_9() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____listener_9)); }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * get__listener_9() const { return ____listener_9; }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 ** get_address_of__listener_9() { return &____listener_9; }
	inline void set__listener_9(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * value)
	{
		____listener_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listener_9), (void*)value);
	}

	inline static int32_t get_offset_of__useNativeSockets_10() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____useNativeSockets_10)); }
	inline bool get__useNativeSockets_10() const { return ____useNativeSockets_10; }
	inline bool* get_address_of__useNativeSockets_10() { return &____useNativeSockets_10; }
	inline void set__useNativeSockets_10(bool value)
	{
		____useNativeSockets_10 = value;
	}

	inline static int32_t get_offset_of__nativeAddrMap_11() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____nativeAddrMap_11)); }
	inline Dictionary_2_tE96A989187C5F494A0FB8BB711FC3CB2447B3469 * get__nativeAddrMap_11() const { return ____nativeAddrMap_11; }
	inline Dictionary_2_tE96A989187C5F494A0FB8BB711FC3CB2447B3469 ** get_address_of__nativeAddrMap_11() { return &____nativeAddrMap_11; }
	inline void set__nativeAddrMap_11(Dictionary_2_tE96A989187C5F494A0FB8BB711FC3CB2447B3469 * value)
	{
		____nativeAddrMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeAddrMap_11), (void*)value);
	}

	inline static int32_t get_offset_of__unitySocketFix_15() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ____unitySocketFix_15)); }
	inline UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * get__unitySocketFix_15() const { return ____unitySocketFix_15; }
	inline UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD ** get_address_of__unitySocketFix_15() { return &____unitySocketFix_15; }
	inline void set__unitySocketFix_15(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * value)
	{
		____unitySocketFix_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitySocketFix_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPortU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ___U3CLocalPortU3Ek__BackingField_16)); }
	inline int32_t get_U3CLocalPortU3Ek__BackingField_16() const { return ___U3CLocalPortU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CLocalPortU3Ek__BackingField_16() { return &___U3CLocalPortU3Ek__BackingField_16; }
	inline void set_U3CLocalPortU3Ek__BackingField_16(int32_t value)
	{
		___U3CLocalPortU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_IsRunning_17() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58, ___IsRunning_17)); }
	inline bool get_IsRunning_17() const { return ___IsRunning_17; }
	inline bool* get_address_of_IsRunning_17() { return &___IsRunning_17; }
	inline void set_IsRunning_17(bool value)
	{
		___IsRunning_17 = value;
	}
};

struct NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_StaticFields
{
public:
	// System.Net.IPAddress LiteNetLib.NetSocket::MulticastAddressV6
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___MulticastAddressV6_13;
	// System.Boolean LiteNetLib.NetSocket::IPv6Support
	bool ___IPv6Support_14;

public:
	inline static int32_t get_offset_of_MulticastAddressV6_13() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_StaticFields, ___MulticastAddressV6_13)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_MulticastAddressV6_13() const { return ___MulticastAddressV6_13; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_MulticastAddressV6_13() { return &___MulticastAddressV6_13; }
	inline void set_MulticastAddressV6_13(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___MulticastAddressV6_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MulticastAddressV6_13), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Support_14() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_StaticFields, ___IPv6Support_14)); }
	inline bool get_IPv6Support_14() const { return ___IPv6Support_14; }
	inline bool* get_address_of_IPv6Support_14() { return &___IPv6Support_14; }
	inline void set_IPv6Support_14(bool value)
	{
		___IPv6Support_14 = value;
	}
};

struct NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_ThreadStaticFields
{
public:
	// System.Byte[] LiteNetLib.NetSocket::_sendToBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____sendToBuffer_7;
	// System.Byte[] LiteNetLib.NetSocket::_endPointBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____endPointBuffer_8;

public:
	inline static int32_t get_offset_of__sendToBuffer_7() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_ThreadStaticFields, ____sendToBuffer_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__sendToBuffer_7() const { return ____sendToBuffer_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__sendToBuffer_7() { return &____sendToBuffer_7; }
	inline void set__sendToBuffer_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____sendToBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendToBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__endPointBuffer_8() { return static_cast<int32_t>(offsetof(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_ThreadStaticFields, ____endPointBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__endPointBuffer_8() const { return ____endPointBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__endPointBuffer_8() { return &____endPointBuffer_8; }
	inline void set__endPointBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____endPointBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPointBuffer_8), (void*)value);
	}
};


// System.Net.NetworkInformation.NetworkInterfaceType
struct NetworkInterfaceType_t9E0B7B4B57991C57AA4C3972434A69B956396F74 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t9E0B7B4B57991C57AA4C3972434A69B956396F74, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NtpLeapIndicator
struct NtpLeapIndicator_t85ACA55A405A65BE2FFD4E2D462EB8F98D4F0B59 
{
public:
	// System.Int32 LiteNetLib.Utils.NtpLeapIndicator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtpLeapIndicator_t85ACA55A405A65BE2FFD4E2D462EB8F98D4F0B59, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NtpMode
struct NtpMode_t1362A45F40B1057069D86B9EF4192F0CF21CCEA5 
{
public:
	// System.Int32 LiteNetLib.Utils.NtpMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtpMode_t1362A45F40B1057069D86B9EF4192F0CF21CCEA5, ___value___2)); }
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

// System.Net.NetworkInformation.OperationalStatus
struct OperationalStatus_t42068F42C093E9D43B005B395CA86028F1A85F8A 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t42068F42C093E9D43B005B395CA86028F1A85F8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.PacketProperty
struct PacketProperty_t035F992106C14C2B8F53E7852685BD0B01259364 
{
public:
	// System.Byte LiteNetLib.PacketProperty::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PacketProperty_t035F992106C14C2B8F53E7852685BD0B01259364, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.ShutdownResult
struct ShutdownResult_t5C3979668ECF836664E515ECA8AF68EC468EB7D6 
{
public:
	// System.Int32 LiteNetLib.ShutdownResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShutdownResult_t5C3979668ECF836664E515ECA8AF68EC468EB7D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
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
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// LiteNetLib.UnconnectedMessageType
struct UnconnectedMessageType_t6DD38578F0D2AEAB7FBA61ADAE334685E292853D 
{
public:
	// System.Int32 LiteNetLib.UnconnectedMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnconnectedMessageType_t6DD38578F0D2AEAB7FBA61ADAE334685E292853D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.NetEvent/EType
struct EType_t9BA009A0993D5F0AC9D2AF277580132AFB367990 
{
public:
	// System.Int32 LiteNetLib.NetEvent/EType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EType_t9BA009A0993D5F0AC9D2AF277580132AFB367990, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NetSerializer/CallType
struct CallType_tFF7B96BBED6D5DD2506F4466F5060A9D0F5D715A 
{
public:
	// System.Int32 LiteNetLib.Utils.NetSerializer/CallType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallType_tFF7B96BBED6D5DD2506F4466F5060A9D0F5D715A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// LiteNetLib.ConnectionRequest
struct ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52  : public RuntimeObject
{
public:
	// LiteNetLib.NetManager LiteNetLib.ConnectionRequest::_listener
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * ____listener_0;
	// System.Int32 LiteNetLib.ConnectionRequest::_used
	int32_t ____used_1;
	// LiteNetLib.Utils.NetDataReader LiteNetLib.ConnectionRequest::Data
	NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD * ___Data_2;
	// LiteNetLib.ConnectionRequestResult LiteNetLib.ConnectionRequest::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_3;
	// System.Int64 LiteNetLib.ConnectionRequest::ConnectionTime
	int64_t ___ConnectionTime_4;
	// System.Byte LiteNetLib.ConnectionRequest::ConnectionNumber
	uint8_t ___ConnectionNumber_5;
	// System.Net.IPEndPoint LiteNetLib.ConnectionRequest::RemoteEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___RemoteEndPoint_6;

public:
	inline static int32_t get_offset_of__listener_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ____listener_0)); }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * get__listener_0() const { return ____listener_0; }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 ** get_address_of__listener_0() { return &____listener_0; }
	inline void set__listener_0(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * value)
	{
		____listener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listener_0), (void*)value);
	}

	inline static int32_t get_offset_of__used_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ____used_1)); }
	inline int32_t get__used_1() const { return ____used_1; }
	inline int32_t* get_address_of__used_1() { return &____used_1; }
	inline void set__used_1(int32_t value)
	{
		____used_1 = value;
	}

	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ___Data_2)); }
	inline NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD * get_Data_2() const { return ___Data_2; }
	inline NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ___U3CResultU3Ek__BackingField_3)); }
	inline int32_t get_U3CResultU3Ek__BackingField_3() const { return ___U3CResultU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_3() { return &___U3CResultU3Ek__BackingField_3; }
	inline void set_U3CResultU3Ek__BackingField_3(int32_t value)
	{
		___U3CResultU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectionTime_4() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ___ConnectionTime_4)); }
	inline int64_t get_ConnectionTime_4() const { return ___ConnectionTime_4; }
	inline int64_t* get_address_of_ConnectionTime_4() { return &___ConnectionTime_4; }
	inline void set_ConnectionTime_4(int64_t value)
	{
		___ConnectionTime_4 = value;
	}

	inline static int32_t get_offset_of_ConnectionNumber_5() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ___ConnectionNumber_5)); }
	inline uint8_t get_ConnectionNumber_5() const { return ___ConnectionNumber_5; }
	inline uint8_t* get_address_of_ConnectionNumber_5() { return &___ConnectionNumber_5; }
	inline void set_ConnectionNumber_5(uint8_t value)
	{
		___ConnectionNumber_5 = value;
	}

	inline static int32_t get_offset_of_RemoteEndPoint_6() { return static_cast<int32_t>(offsetof(ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52, ___RemoteEndPoint_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_RemoteEndPoint_6() const { return ___RemoteEndPoint_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_RemoteEndPoint_6() { return &___RemoteEndPoint_6; }
	inline void set_RemoteEndPoint_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___RemoteEndPoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteEndPoint_6), (void*)value);
	}
};


// LiteNetLib.DisconnectInfo
struct DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F 
{
public:
	// LiteNetLib.DisconnectReason LiteNetLib.DisconnectInfo::Reason
	int32_t ___Reason_0;
	// System.Net.Sockets.SocketError LiteNetLib.DisconnectInfo::SocketErrorCode
	int32_t ___SocketErrorCode_1;
	// LiteNetLib.NetPacketReader LiteNetLib.DisconnectInfo::AdditionalData
	NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___AdditionalData_2;

public:
	inline static int32_t get_offset_of_Reason_0() { return static_cast<int32_t>(offsetof(DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F, ___Reason_0)); }
	inline int32_t get_Reason_0() const { return ___Reason_0; }
	inline int32_t* get_address_of_Reason_0() { return &___Reason_0; }
	inline void set_Reason_0(int32_t value)
	{
		___Reason_0 = value;
	}

	inline static int32_t get_offset_of_SocketErrorCode_1() { return static_cast<int32_t>(offsetof(DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F, ___SocketErrorCode_1)); }
	inline int32_t get_SocketErrorCode_1() const { return ___SocketErrorCode_1; }
	inline int32_t* get_address_of_SocketErrorCode_1() { return &___SocketErrorCode_1; }
	inline void set_SocketErrorCode_1(int32_t value)
	{
		___SocketErrorCode_1 = value;
	}

	inline static int32_t get_offset_of_AdditionalData_2() { return static_cast<int32_t>(offsetof(DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F, ___AdditionalData_2)); }
	inline NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * get_AdditionalData_2() const { return ___AdditionalData_2; }
	inline NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 ** get_address_of_AdditionalData_2() { return &___AdditionalData_2; }
	inline void set_AdditionalData_2(NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * value)
	{
		___AdditionalData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdditionalData_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LiteNetLib.DisconnectInfo
struct DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F_marshaled_pinvoke
{
	int32_t ___Reason_0;
	int32_t ___SocketErrorCode_1;
	NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___AdditionalData_2;
};
// Native definition for COM marshalling of LiteNetLib.DisconnectInfo
struct DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F_marshaled_com
{
	int32_t ___Reason_0;
	int32_t ___SocketErrorCode_1;
	NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___AdditionalData_2;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
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

// LiteNetLib.NetManager
struct NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20  : public RuntimeObject
{
public:
	// LiteNetLib.NetSocket LiteNetLib.NetManager::_socket
	NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * ____socket_0;
	// System.Threading.Thread LiteNetLib.NetManager::_logicThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____logicThread_1;
	// System.Boolean LiteNetLib.NetManager::_manualMode
	bool ____manualMode_2;
	// System.Threading.AutoResetEvent LiteNetLib.NetManager::_updateTriggerEvent
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ____updateTriggerEvent_3;
	// System.Collections.Generic.Queue`1<LiteNetLib.NetEvent> LiteNetLib.NetManager::_netEventsProduceQueue
	Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * ____netEventsProduceQueue_4;
	// System.Collections.Generic.Queue`1<LiteNetLib.NetEvent> LiteNetLib.NetManager::_netEventsConsumeQueue
	Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * ____netEventsConsumeQueue_5;
	// LiteNetLib.NetEvent LiteNetLib.NetManager::_netEventPoolHead
	NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * ____netEventPoolHead_6;
	// LiteNetLib.INetEventListener LiteNetLib.NetManager::_netEventListener
	RuntimeObject* ____netEventListener_7;
	// LiteNetLib.IDeliveryEventListener LiteNetLib.NetManager::_deliveryEventListener
	RuntimeObject* ____deliveryEventListener_8;
	// LiteNetLib.INtpEventListener LiteNetLib.NetManager::_ntpEventListener
	RuntimeObject* ____ntpEventListener_9;
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.NetPeer> LiteNetLib.NetManager::_peersDict
	Dictionary_2_t611518B729B5F14DC35A8C943D4BB9EDF4367C89 * ____peersDict_10;
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.ConnectionRequest> LiteNetLib.NetManager::_requestsDict
	Dictionary_2_tA962D0D4427C5A99CFFAA35B025DA5303F171132 * ____requestsDict_11;
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,LiteNetLib.Utils.NtpRequest> LiteNetLib.NetManager::_ntpRequests
	Dictionary_2_tF7979284F15FB28C130E547175D11C750B3CC1CB * ____ntpRequests_12;
	// System.Threading.ReaderWriterLockSlim LiteNetLib.NetManager::_peersLock
	ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * ____peersLock_13;
	// LiteNetLib.NetPeer modreq(System.Runtime.CompilerServices.IsVolatile) LiteNetLib.NetManager::_headPeer
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ____headPeer_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) LiteNetLib.NetManager::_connectedPeersCount
	int32_t ____connectedPeersCount_15;
	// System.Collections.Generic.List`1<LiteNetLib.NetPeer> LiteNetLib.NetManager::_connectedPeerListCache
	List_1_tA0AE79E99C04F71CA6BC030ED3EB474B9E42AE89 * ____connectedPeerListCache_16;
	// LiteNetLib.NetPeer[] LiteNetLib.NetManager::_peersArray
	NetPeerU5BU5D_tC9FAD3DEDF5AD75602BF6313FB6CB11F99EAF6E8* ____peersArray_17;
	// LiteNetLib.Layers.PacketLayerBase LiteNetLib.NetManager::_extraPacketLayer
	PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 * ____extraPacketLayer_18;
	// System.Int32 LiteNetLib.NetManager::_lastPeerId
	int32_t ____lastPeerId_19;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Int32> LiteNetLib.NetManager::_peerIds
	ConcurrentQueue_1_tD37D02579EC1107E5AF793B4EF10A88E7E5CC383 * ____peerIds_20;
	// System.Byte LiteNetLib.NetManager::_channelsCount
	uint8_t ____channelsCount_21;
	// System.Object LiteNetLib.NetManager::_eventLock
	RuntimeObject * ____eventLock_22;
	// LiteNetLib.NetPacketPool LiteNetLib.NetManager::NetPacketPool
	NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * ___NetPacketPool_23;
	// System.Boolean LiteNetLib.NetManager::UnconnectedMessagesEnabled
	bool ___UnconnectedMessagesEnabled_24;
	// System.Boolean LiteNetLib.NetManager::NatPunchEnabled
	bool ___NatPunchEnabled_25;
	// System.Int32 LiteNetLib.NetManager::UpdateTime
	int32_t ___UpdateTime_26;
	// System.Int32 LiteNetLib.NetManager::PingInterval
	int32_t ___PingInterval_27;
	// System.Int32 LiteNetLib.NetManager::DisconnectTimeout
	int32_t ___DisconnectTimeout_28;
	// System.Boolean LiteNetLib.NetManager::SimulatePacketLoss
	bool ___SimulatePacketLoss_29;
	// System.Boolean LiteNetLib.NetManager::SimulateLatency
	bool ___SimulateLatency_30;
	// System.Int32 LiteNetLib.NetManager::SimulationPacketLossChance
	int32_t ___SimulationPacketLossChance_31;
	// System.Int32 LiteNetLib.NetManager::SimulationMinLatency
	int32_t ___SimulationMinLatency_32;
	// System.Int32 LiteNetLib.NetManager::SimulationMaxLatency
	int32_t ___SimulationMaxLatency_33;
	// System.Boolean LiteNetLib.NetManager::UnsyncedEvents
	bool ___UnsyncedEvents_34;
	// System.Boolean LiteNetLib.NetManager::UnsyncedReceiveEvent
	bool ___UnsyncedReceiveEvent_35;
	// System.Boolean LiteNetLib.NetManager::UnsyncedDeliveryEvent
	bool ___UnsyncedDeliveryEvent_36;
	// System.Boolean LiteNetLib.NetManager::BroadcastReceiveEnabled
	bool ___BroadcastReceiveEnabled_37;
	// System.Int32 LiteNetLib.NetManager::ReconnectDelay
	int32_t ___ReconnectDelay_38;
	// System.Int32 LiteNetLib.NetManager::MaxConnectAttempts
	int32_t ___MaxConnectAttempts_39;
	// System.Boolean LiteNetLib.NetManager::ReuseAddress
	bool ___ReuseAddress_40;
	// LiteNetLib.NetStatistics LiteNetLib.NetManager::Statistics
	NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * ___Statistics_41;
	// System.Boolean LiteNetLib.NetManager::EnableStatistics
	bool ___EnableStatistics_42;
	// LiteNetLib.NatPunchModule LiteNetLib.NetManager::NatPunchModule
	NatPunchModule_t8D9DB85ABD528690BDC9B7F69F0920C31520288D * ___NatPunchModule_43;
	// System.Boolean LiteNetLib.NetManager::AutoRecycle
	bool ___AutoRecycle_44;
	// LiteNetLib.IPv6Mode LiteNetLib.NetManager::IPv6Mode
	int32_t ___IPv6Mode_45;
	// System.Int32 LiteNetLib.NetManager::MtuOverride
	int32_t ___MtuOverride_46;
	// System.Boolean LiteNetLib.NetManager::UseSafeMtu
	bool ___UseSafeMtu_47;
	// System.Boolean LiteNetLib.NetManager::UseNativeSockets
	bool ___UseNativeSockets_48;
	// System.Boolean LiteNetLib.NetManager::DisconnectOnUnreachable
	bool ___DisconnectOnUnreachable_49;

public:
	inline static int32_t get_offset_of__socket_0() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____socket_0)); }
	inline NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * get__socket_0() const { return ____socket_0; }
	inline NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 ** get_address_of__socket_0() { return &____socket_0; }
	inline void set__socket_0(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * value)
	{
		____socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____socket_0), (void*)value);
	}

	inline static int32_t get_offset_of__logicThread_1() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____logicThread_1)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__logicThread_1() const { return ____logicThread_1; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__logicThread_1() { return &____logicThread_1; }
	inline void set__logicThread_1(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____logicThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicThread_1), (void*)value);
	}

	inline static int32_t get_offset_of__manualMode_2() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____manualMode_2)); }
	inline bool get__manualMode_2() const { return ____manualMode_2; }
	inline bool* get_address_of__manualMode_2() { return &____manualMode_2; }
	inline void set__manualMode_2(bool value)
	{
		____manualMode_2 = value;
	}

	inline static int32_t get_offset_of__updateTriggerEvent_3() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____updateTriggerEvent_3)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get__updateTriggerEvent_3() const { return ____updateTriggerEvent_3; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of__updateTriggerEvent_3() { return &____updateTriggerEvent_3; }
	inline void set__updateTriggerEvent_3(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		____updateTriggerEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateTriggerEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of__netEventsProduceQueue_4() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____netEventsProduceQueue_4)); }
	inline Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * get__netEventsProduceQueue_4() const { return ____netEventsProduceQueue_4; }
	inline Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA ** get_address_of__netEventsProduceQueue_4() { return &____netEventsProduceQueue_4; }
	inline void set__netEventsProduceQueue_4(Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * value)
	{
		____netEventsProduceQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netEventsProduceQueue_4), (void*)value);
	}

	inline static int32_t get_offset_of__netEventsConsumeQueue_5() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____netEventsConsumeQueue_5)); }
	inline Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * get__netEventsConsumeQueue_5() const { return ____netEventsConsumeQueue_5; }
	inline Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA ** get_address_of__netEventsConsumeQueue_5() { return &____netEventsConsumeQueue_5; }
	inline void set__netEventsConsumeQueue_5(Queue_1_tA3299805A14A20B6009C033E1355D468B588C9FA * value)
	{
		____netEventsConsumeQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netEventsConsumeQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of__netEventPoolHead_6() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____netEventPoolHead_6)); }
	inline NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * get__netEventPoolHead_6() const { return ____netEventPoolHead_6; }
	inline NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 ** get_address_of__netEventPoolHead_6() { return &____netEventPoolHead_6; }
	inline void set__netEventPoolHead_6(NetEvent_tC4531B902D1639E41103DB67C3A3BCDF5DB9F316 * value)
	{
		____netEventPoolHead_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netEventPoolHead_6), (void*)value);
	}

	inline static int32_t get_offset_of__netEventListener_7() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____netEventListener_7)); }
	inline RuntimeObject* get__netEventListener_7() const { return ____netEventListener_7; }
	inline RuntimeObject** get_address_of__netEventListener_7() { return &____netEventListener_7; }
	inline void set__netEventListener_7(RuntimeObject* value)
	{
		____netEventListener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netEventListener_7), (void*)value);
	}

	inline static int32_t get_offset_of__deliveryEventListener_8() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____deliveryEventListener_8)); }
	inline RuntimeObject* get__deliveryEventListener_8() const { return ____deliveryEventListener_8; }
	inline RuntimeObject** get_address_of__deliveryEventListener_8() { return &____deliveryEventListener_8; }
	inline void set__deliveryEventListener_8(RuntimeObject* value)
	{
		____deliveryEventListener_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deliveryEventListener_8), (void*)value);
	}

	inline static int32_t get_offset_of__ntpEventListener_9() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____ntpEventListener_9)); }
	inline RuntimeObject* get__ntpEventListener_9() const { return ____ntpEventListener_9; }
	inline RuntimeObject** get_address_of__ntpEventListener_9() { return &____ntpEventListener_9; }
	inline void set__ntpEventListener_9(RuntimeObject* value)
	{
		____ntpEventListener_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ntpEventListener_9), (void*)value);
	}

	inline static int32_t get_offset_of__peersDict_10() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____peersDict_10)); }
	inline Dictionary_2_t611518B729B5F14DC35A8C943D4BB9EDF4367C89 * get__peersDict_10() const { return ____peersDict_10; }
	inline Dictionary_2_t611518B729B5F14DC35A8C943D4BB9EDF4367C89 ** get_address_of__peersDict_10() { return &____peersDict_10; }
	inline void set__peersDict_10(Dictionary_2_t611518B729B5F14DC35A8C943D4BB9EDF4367C89 * value)
	{
		____peersDict_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____peersDict_10), (void*)value);
	}

	inline static int32_t get_offset_of__requestsDict_11() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____requestsDict_11)); }
	inline Dictionary_2_tA962D0D4427C5A99CFFAA35B025DA5303F171132 * get__requestsDict_11() const { return ____requestsDict_11; }
	inline Dictionary_2_tA962D0D4427C5A99CFFAA35B025DA5303F171132 ** get_address_of__requestsDict_11() { return &____requestsDict_11; }
	inline void set__requestsDict_11(Dictionary_2_tA962D0D4427C5A99CFFAA35B025DA5303F171132 * value)
	{
		____requestsDict_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requestsDict_11), (void*)value);
	}

	inline static int32_t get_offset_of__ntpRequests_12() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____ntpRequests_12)); }
	inline Dictionary_2_tF7979284F15FB28C130E547175D11C750B3CC1CB * get__ntpRequests_12() const { return ____ntpRequests_12; }
	inline Dictionary_2_tF7979284F15FB28C130E547175D11C750B3CC1CB ** get_address_of__ntpRequests_12() { return &____ntpRequests_12; }
	inline void set__ntpRequests_12(Dictionary_2_tF7979284F15FB28C130E547175D11C750B3CC1CB * value)
	{
		____ntpRequests_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ntpRequests_12), (void*)value);
	}

	inline static int32_t get_offset_of__peersLock_13() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____peersLock_13)); }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * get__peersLock_13() const { return ____peersLock_13; }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F ** get_address_of__peersLock_13() { return &____peersLock_13; }
	inline void set__peersLock_13(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * value)
	{
		____peersLock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____peersLock_13), (void*)value);
	}

	inline static int32_t get_offset_of__headPeer_14() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____headPeer_14)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get__headPeer_14() const { return ____headPeer_14; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of__headPeer_14() { return &____headPeer_14; }
	inline void set__headPeer_14(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		____headPeer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____headPeer_14), (void*)value);
	}

	inline static int32_t get_offset_of__connectedPeersCount_15() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____connectedPeersCount_15)); }
	inline int32_t get__connectedPeersCount_15() const { return ____connectedPeersCount_15; }
	inline int32_t* get_address_of__connectedPeersCount_15() { return &____connectedPeersCount_15; }
	inline void set__connectedPeersCount_15(int32_t value)
	{
		____connectedPeersCount_15 = value;
	}

	inline static int32_t get_offset_of__connectedPeerListCache_16() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____connectedPeerListCache_16)); }
	inline List_1_tA0AE79E99C04F71CA6BC030ED3EB474B9E42AE89 * get__connectedPeerListCache_16() const { return ____connectedPeerListCache_16; }
	inline List_1_tA0AE79E99C04F71CA6BC030ED3EB474B9E42AE89 ** get_address_of__connectedPeerListCache_16() { return &____connectedPeerListCache_16; }
	inline void set__connectedPeerListCache_16(List_1_tA0AE79E99C04F71CA6BC030ED3EB474B9E42AE89 * value)
	{
		____connectedPeerListCache_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectedPeerListCache_16), (void*)value);
	}

	inline static int32_t get_offset_of__peersArray_17() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____peersArray_17)); }
	inline NetPeerU5BU5D_tC9FAD3DEDF5AD75602BF6313FB6CB11F99EAF6E8* get__peersArray_17() const { return ____peersArray_17; }
	inline NetPeerU5BU5D_tC9FAD3DEDF5AD75602BF6313FB6CB11F99EAF6E8** get_address_of__peersArray_17() { return &____peersArray_17; }
	inline void set__peersArray_17(NetPeerU5BU5D_tC9FAD3DEDF5AD75602BF6313FB6CB11F99EAF6E8* value)
	{
		____peersArray_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____peersArray_17), (void*)value);
	}

	inline static int32_t get_offset_of__extraPacketLayer_18() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____extraPacketLayer_18)); }
	inline PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 * get__extraPacketLayer_18() const { return ____extraPacketLayer_18; }
	inline PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 ** get_address_of__extraPacketLayer_18() { return &____extraPacketLayer_18; }
	inline void set__extraPacketLayer_18(PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 * value)
	{
		____extraPacketLayer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extraPacketLayer_18), (void*)value);
	}

	inline static int32_t get_offset_of__lastPeerId_19() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____lastPeerId_19)); }
	inline int32_t get__lastPeerId_19() const { return ____lastPeerId_19; }
	inline int32_t* get_address_of__lastPeerId_19() { return &____lastPeerId_19; }
	inline void set__lastPeerId_19(int32_t value)
	{
		____lastPeerId_19 = value;
	}

	inline static int32_t get_offset_of__peerIds_20() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____peerIds_20)); }
	inline ConcurrentQueue_1_tD37D02579EC1107E5AF793B4EF10A88E7E5CC383 * get__peerIds_20() const { return ____peerIds_20; }
	inline ConcurrentQueue_1_tD37D02579EC1107E5AF793B4EF10A88E7E5CC383 ** get_address_of__peerIds_20() { return &____peerIds_20; }
	inline void set__peerIds_20(ConcurrentQueue_1_tD37D02579EC1107E5AF793B4EF10A88E7E5CC383 * value)
	{
		____peerIds_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____peerIds_20), (void*)value);
	}

	inline static int32_t get_offset_of__channelsCount_21() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____channelsCount_21)); }
	inline uint8_t get__channelsCount_21() const { return ____channelsCount_21; }
	inline uint8_t* get_address_of__channelsCount_21() { return &____channelsCount_21; }
	inline void set__channelsCount_21(uint8_t value)
	{
		____channelsCount_21 = value;
	}

	inline static int32_t get_offset_of__eventLock_22() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ____eventLock_22)); }
	inline RuntimeObject * get__eventLock_22() const { return ____eventLock_22; }
	inline RuntimeObject ** get_address_of__eventLock_22() { return &____eventLock_22; }
	inline void set__eventLock_22(RuntimeObject * value)
	{
		____eventLock_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eventLock_22), (void*)value);
	}

	inline static int32_t get_offset_of_NetPacketPool_23() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___NetPacketPool_23)); }
	inline NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * get_NetPacketPool_23() const { return ___NetPacketPool_23; }
	inline NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E ** get_address_of_NetPacketPool_23() { return &___NetPacketPool_23; }
	inline void set_NetPacketPool_23(NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * value)
	{
		___NetPacketPool_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPacketPool_23), (void*)value);
	}

	inline static int32_t get_offset_of_UnconnectedMessagesEnabled_24() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UnconnectedMessagesEnabled_24)); }
	inline bool get_UnconnectedMessagesEnabled_24() const { return ___UnconnectedMessagesEnabled_24; }
	inline bool* get_address_of_UnconnectedMessagesEnabled_24() { return &___UnconnectedMessagesEnabled_24; }
	inline void set_UnconnectedMessagesEnabled_24(bool value)
	{
		___UnconnectedMessagesEnabled_24 = value;
	}

	inline static int32_t get_offset_of_NatPunchEnabled_25() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___NatPunchEnabled_25)); }
	inline bool get_NatPunchEnabled_25() const { return ___NatPunchEnabled_25; }
	inline bool* get_address_of_NatPunchEnabled_25() { return &___NatPunchEnabled_25; }
	inline void set_NatPunchEnabled_25(bool value)
	{
		___NatPunchEnabled_25 = value;
	}

	inline static int32_t get_offset_of_UpdateTime_26() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UpdateTime_26)); }
	inline int32_t get_UpdateTime_26() const { return ___UpdateTime_26; }
	inline int32_t* get_address_of_UpdateTime_26() { return &___UpdateTime_26; }
	inline void set_UpdateTime_26(int32_t value)
	{
		___UpdateTime_26 = value;
	}

	inline static int32_t get_offset_of_PingInterval_27() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___PingInterval_27)); }
	inline int32_t get_PingInterval_27() const { return ___PingInterval_27; }
	inline int32_t* get_address_of_PingInterval_27() { return &___PingInterval_27; }
	inline void set_PingInterval_27(int32_t value)
	{
		___PingInterval_27 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_28() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___DisconnectTimeout_28)); }
	inline int32_t get_DisconnectTimeout_28() const { return ___DisconnectTimeout_28; }
	inline int32_t* get_address_of_DisconnectTimeout_28() { return &___DisconnectTimeout_28; }
	inline void set_DisconnectTimeout_28(int32_t value)
	{
		___DisconnectTimeout_28 = value;
	}

	inline static int32_t get_offset_of_SimulatePacketLoss_29() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___SimulatePacketLoss_29)); }
	inline bool get_SimulatePacketLoss_29() const { return ___SimulatePacketLoss_29; }
	inline bool* get_address_of_SimulatePacketLoss_29() { return &___SimulatePacketLoss_29; }
	inline void set_SimulatePacketLoss_29(bool value)
	{
		___SimulatePacketLoss_29 = value;
	}

	inline static int32_t get_offset_of_SimulateLatency_30() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___SimulateLatency_30)); }
	inline bool get_SimulateLatency_30() const { return ___SimulateLatency_30; }
	inline bool* get_address_of_SimulateLatency_30() { return &___SimulateLatency_30; }
	inline void set_SimulateLatency_30(bool value)
	{
		___SimulateLatency_30 = value;
	}

	inline static int32_t get_offset_of_SimulationPacketLossChance_31() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___SimulationPacketLossChance_31)); }
	inline int32_t get_SimulationPacketLossChance_31() const { return ___SimulationPacketLossChance_31; }
	inline int32_t* get_address_of_SimulationPacketLossChance_31() { return &___SimulationPacketLossChance_31; }
	inline void set_SimulationPacketLossChance_31(int32_t value)
	{
		___SimulationPacketLossChance_31 = value;
	}

	inline static int32_t get_offset_of_SimulationMinLatency_32() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___SimulationMinLatency_32)); }
	inline int32_t get_SimulationMinLatency_32() const { return ___SimulationMinLatency_32; }
	inline int32_t* get_address_of_SimulationMinLatency_32() { return &___SimulationMinLatency_32; }
	inline void set_SimulationMinLatency_32(int32_t value)
	{
		___SimulationMinLatency_32 = value;
	}

	inline static int32_t get_offset_of_SimulationMaxLatency_33() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___SimulationMaxLatency_33)); }
	inline int32_t get_SimulationMaxLatency_33() const { return ___SimulationMaxLatency_33; }
	inline int32_t* get_address_of_SimulationMaxLatency_33() { return &___SimulationMaxLatency_33; }
	inline void set_SimulationMaxLatency_33(int32_t value)
	{
		___SimulationMaxLatency_33 = value;
	}

	inline static int32_t get_offset_of_UnsyncedEvents_34() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UnsyncedEvents_34)); }
	inline bool get_UnsyncedEvents_34() const { return ___UnsyncedEvents_34; }
	inline bool* get_address_of_UnsyncedEvents_34() { return &___UnsyncedEvents_34; }
	inline void set_UnsyncedEvents_34(bool value)
	{
		___UnsyncedEvents_34 = value;
	}

	inline static int32_t get_offset_of_UnsyncedReceiveEvent_35() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UnsyncedReceiveEvent_35)); }
	inline bool get_UnsyncedReceiveEvent_35() const { return ___UnsyncedReceiveEvent_35; }
	inline bool* get_address_of_UnsyncedReceiveEvent_35() { return &___UnsyncedReceiveEvent_35; }
	inline void set_UnsyncedReceiveEvent_35(bool value)
	{
		___UnsyncedReceiveEvent_35 = value;
	}

	inline static int32_t get_offset_of_UnsyncedDeliveryEvent_36() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UnsyncedDeliveryEvent_36)); }
	inline bool get_UnsyncedDeliveryEvent_36() const { return ___UnsyncedDeliveryEvent_36; }
	inline bool* get_address_of_UnsyncedDeliveryEvent_36() { return &___UnsyncedDeliveryEvent_36; }
	inline void set_UnsyncedDeliveryEvent_36(bool value)
	{
		___UnsyncedDeliveryEvent_36 = value;
	}

	inline static int32_t get_offset_of_BroadcastReceiveEnabled_37() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___BroadcastReceiveEnabled_37)); }
	inline bool get_BroadcastReceiveEnabled_37() const { return ___BroadcastReceiveEnabled_37; }
	inline bool* get_address_of_BroadcastReceiveEnabled_37() { return &___BroadcastReceiveEnabled_37; }
	inline void set_BroadcastReceiveEnabled_37(bool value)
	{
		___BroadcastReceiveEnabled_37 = value;
	}

	inline static int32_t get_offset_of_ReconnectDelay_38() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___ReconnectDelay_38)); }
	inline int32_t get_ReconnectDelay_38() const { return ___ReconnectDelay_38; }
	inline int32_t* get_address_of_ReconnectDelay_38() { return &___ReconnectDelay_38; }
	inline void set_ReconnectDelay_38(int32_t value)
	{
		___ReconnectDelay_38 = value;
	}

	inline static int32_t get_offset_of_MaxConnectAttempts_39() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___MaxConnectAttempts_39)); }
	inline int32_t get_MaxConnectAttempts_39() const { return ___MaxConnectAttempts_39; }
	inline int32_t* get_address_of_MaxConnectAttempts_39() { return &___MaxConnectAttempts_39; }
	inline void set_MaxConnectAttempts_39(int32_t value)
	{
		___MaxConnectAttempts_39 = value;
	}

	inline static int32_t get_offset_of_ReuseAddress_40() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___ReuseAddress_40)); }
	inline bool get_ReuseAddress_40() const { return ___ReuseAddress_40; }
	inline bool* get_address_of_ReuseAddress_40() { return &___ReuseAddress_40; }
	inline void set_ReuseAddress_40(bool value)
	{
		___ReuseAddress_40 = value;
	}

	inline static int32_t get_offset_of_Statistics_41() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___Statistics_41)); }
	inline NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * get_Statistics_41() const { return ___Statistics_41; }
	inline NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 ** get_address_of_Statistics_41() { return &___Statistics_41; }
	inline void set_Statistics_41(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * value)
	{
		___Statistics_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Statistics_41), (void*)value);
	}

	inline static int32_t get_offset_of_EnableStatistics_42() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___EnableStatistics_42)); }
	inline bool get_EnableStatistics_42() const { return ___EnableStatistics_42; }
	inline bool* get_address_of_EnableStatistics_42() { return &___EnableStatistics_42; }
	inline void set_EnableStatistics_42(bool value)
	{
		___EnableStatistics_42 = value;
	}

	inline static int32_t get_offset_of_NatPunchModule_43() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___NatPunchModule_43)); }
	inline NatPunchModule_t8D9DB85ABD528690BDC9B7F69F0920C31520288D * get_NatPunchModule_43() const { return ___NatPunchModule_43; }
	inline NatPunchModule_t8D9DB85ABD528690BDC9B7F69F0920C31520288D ** get_address_of_NatPunchModule_43() { return &___NatPunchModule_43; }
	inline void set_NatPunchModule_43(NatPunchModule_t8D9DB85ABD528690BDC9B7F69F0920C31520288D * value)
	{
		___NatPunchModule_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NatPunchModule_43), (void*)value);
	}

	inline static int32_t get_offset_of_AutoRecycle_44() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___AutoRecycle_44)); }
	inline bool get_AutoRecycle_44() const { return ___AutoRecycle_44; }
	inline bool* get_address_of_AutoRecycle_44() { return &___AutoRecycle_44; }
	inline void set_AutoRecycle_44(bool value)
	{
		___AutoRecycle_44 = value;
	}

	inline static int32_t get_offset_of_IPv6Mode_45() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___IPv6Mode_45)); }
	inline int32_t get_IPv6Mode_45() const { return ___IPv6Mode_45; }
	inline int32_t* get_address_of_IPv6Mode_45() { return &___IPv6Mode_45; }
	inline void set_IPv6Mode_45(int32_t value)
	{
		___IPv6Mode_45 = value;
	}

	inline static int32_t get_offset_of_MtuOverride_46() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___MtuOverride_46)); }
	inline int32_t get_MtuOverride_46() const { return ___MtuOverride_46; }
	inline int32_t* get_address_of_MtuOverride_46() { return &___MtuOverride_46; }
	inline void set_MtuOverride_46(int32_t value)
	{
		___MtuOverride_46 = value;
	}

	inline static int32_t get_offset_of_UseSafeMtu_47() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UseSafeMtu_47)); }
	inline bool get_UseSafeMtu_47() const { return ___UseSafeMtu_47; }
	inline bool* get_address_of_UseSafeMtu_47() { return &___UseSafeMtu_47; }
	inline void set_UseSafeMtu_47(bool value)
	{
		___UseSafeMtu_47 = value;
	}

	inline static int32_t get_offset_of_UseNativeSockets_48() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___UseNativeSockets_48)); }
	inline bool get_UseNativeSockets_48() const { return ___UseNativeSockets_48; }
	inline bool* get_address_of_UseNativeSockets_48() { return &___UseNativeSockets_48; }
	inline void set_UseNativeSockets_48(bool value)
	{
		___UseNativeSockets_48 = value;
	}

	inline static int32_t get_offset_of_DisconnectOnUnreachable_49() { return static_cast<int32_t>(offsetof(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20, ___DisconnectOnUnreachable_49)); }
	inline bool get_DisconnectOnUnreachable_49() const { return ___DisconnectOnUnreachable_49; }
	inline bool* get_address_of_DisconnectOnUnreachable_49() { return &___DisconnectOnUnreachable_49; }
	inline void set_DisconnectOnUnreachable_49(bool value)
	{
		___DisconnectOnUnreachable_49 = value;
	}
};


// LiteNetLib.NetPeer
struct NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6  : public RuntimeObject
{
public:
	// System.Int32 LiteNetLib.NetPeer::_rtt
	int32_t ____rtt_0;
	// System.Int32 LiteNetLib.NetPeer::_avgRtt
	int32_t ____avgRtt_1;
	// System.Int32 LiteNetLib.NetPeer::_rttCount
	int32_t ____rttCount_2;
	// System.Double LiteNetLib.NetPeer::_resendDelay
	double ____resendDelay_3;
	// System.Int32 LiteNetLib.NetPeer::_pingSendTimer
	int32_t ____pingSendTimer_4;
	// System.Int32 LiteNetLib.NetPeer::_rttResetTimer
	int32_t ____rttResetTimer_5;
	// System.Diagnostics.Stopwatch LiteNetLib.NetPeer::_pingTimer
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ____pingTimer_6;
	// System.Int32 LiteNetLib.NetPeer::_timeSinceLastPacket
	int32_t ____timeSinceLastPacket_7;
	// System.Int64 LiteNetLib.NetPeer::_remoteDelta
	int64_t ____remoteDelta_8;
	// LiteNetLib.NetPacketPool LiteNetLib.NetPeer::_packetPool
	NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * ____packetPool_9;
	// System.Object LiteNetLib.NetPeer::_shutdownLock
	RuntimeObject * ____shutdownLock_10;
	// LiteNetLib.NetPeer modreq(System.Runtime.CompilerServices.IsVolatile) LiteNetLib.NetPeer::NextPeer
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___NextPeer_11;
	// LiteNetLib.NetPeer LiteNetLib.NetPeer::PrevPeer
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___PrevPeer_12;
	// System.Collections.Generic.Queue`1<LiteNetLib.NetPacket> LiteNetLib.NetPeer::_unreliableChannel
	Queue_1_t45BA0F1D5FC5D0AB22C8C0D39C3A3C24A7427237 * ____unreliableChannel_13;
	// System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.BaseChannel> LiteNetLib.NetPeer::_channelSendQueue
	ConcurrentQueue_1_tA39436033D544C709FB8F6B59E6ACEEC84CCCE0B * ____channelSendQueue_14;
	// LiteNetLib.BaseChannel[] LiteNetLib.NetPeer::_channels
	BaseChannelU5BU5D_tF5F6EB1B1A722D64890C4A299125629ABE6DE248* ____channels_15;
	// System.Int32 LiteNetLib.NetPeer::_mtu
	int32_t ____mtu_16;
	// System.Int32 LiteNetLib.NetPeer::_mtuIdx
	int32_t ____mtuIdx_17;
	// System.Boolean LiteNetLib.NetPeer::_finishMtu
	bool ____finishMtu_18;
	// System.Int32 LiteNetLib.NetPeer::_mtuCheckTimer
	int32_t ____mtuCheckTimer_19;
	// System.Int32 LiteNetLib.NetPeer::_mtuCheckAttempts
	int32_t ____mtuCheckAttempts_20;
	// System.Object LiteNetLib.NetPeer::_mtuMutex
	RuntimeObject * ____mtuMutex_23;
	// System.Int32 LiteNetLib.NetPeer::_fragmentId
	int32_t ____fragmentId_24;
	// System.Collections.Generic.Dictionary`2<System.UInt16,LiteNetLib.NetPeer/IncomingFragments> LiteNetLib.NetPeer::_holdedFragments
	Dictionary_2_tD7B56EDB7CAA4109FAE2750489A7C75C942E6895 * ____holdedFragments_25;
	// System.Collections.Generic.Dictionary`2<System.UInt16,System.UInt16> LiteNetLib.NetPeer::_deliveredFragments
	Dictionary_2_t80B7B4B3AEDA76D5DD88079CB6E37BD360BA02C1 * ____deliveredFragments_26;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_mergeData
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____mergeData_27;
	// System.Int32 LiteNetLib.NetPeer::_mergePos
	int32_t ____mergePos_28;
	// System.Int32 LiteNetLib.NetPeer::_mergeCount
	int32_t ____mergeCount_29;
	// System.Int32 LiteNetLib.NetPeer::_connectAttempts
	int32_t ____connectAttempts_30;
	// System.Int32 LiteNetLib.NetPeer::_connectTimer
	int32_t ____connectTimer_31;
	// System.Int64 LiteNetLib.NetPeer::_connectTime
	int64_t ____connectTime_32;
	// System.Byte LiteNetLib.NetPeer::_connectNum
	uint8_t ____connectNum_33;
	// LiteNetLib.ConnectionState LiteNetLib.NetPeer::_connectionState
	uint8_t ____connectionState_34;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_shutdownPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____shutdownPacket_35;
	// System.Int32 LiteNetLib.NetPeer::_shutdownTimer
	int32_t ____shutdownTimer_37;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_pingPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____pingPacket_38;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_pongPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____pongPacket_39;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_connectRequestPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____connectRequestPacket_40;
	// LiteNetLib.NetPacket LiteNetLib.NetPeer::_connectAcceptPacket
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____connectAcceptPacket_41;
	// System.Net.IPEndPoint LiteNetLib.NetPeer::EndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___EndPoint_42;
	// LiteNetLib.NetManager LiteNetLib.NetPeer::NetManager
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * ___NetManager_43;
	// System.Int32 LiteNetLib.NetPeer::Id
	int32_t ___Id_44;
	// System.Object LiteNetLib.NetPeer::Tag
	RuntimeObject * ___Tag_45;
	// LiteNetLib.NetStatistics LiteNetLib.NetPeer::Statistics
	NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * ___Statistics_46;

public:
	inline static int32_t get_offset_of__rtt_0() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____rtt_0)); }
	inline int32_t get__rtt_0() const { return ____rtt_0; }
	inline int32_t* get_address_of__rtt_0() { return &____rtt_0; }
	inline void set__rtt_0(int32_t value)
	{
		____rtt_0 = value;
	}

	inline static int32_t get_offset_of__avgRtt_1() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____avgRtt_1)); }
	inline int32_t get__avgRtt_1() const { return ____avgRtt_1; }
	inline int32_t* get_address_of__avgRtt_1() { return &____avgRtt_1; }
	inline void set__avgRtt_1(int32_t value)
	{
		____avgRtt_1 = value;
	}

	inline static int32_t get_offset_of__rttCount_2() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____rttCount_2)); }
	inline int32_t get__rttCount_2() const { return ____rttCount_2; }
	inline int32_t* get_address_of__rttCount_2() { return &____rttCount_2; }
	inline void set__rttCount_2(int32_t value)
	{
		____rttCount_2 = value;
	}

	inline static int32_t get_offset_of__resendDelay_3() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____resendDelay_3)); }
	inline double get__resendDelay_3() const { return ____resendDelay_3; }
	inline double* get_address_of__resendDelay_3() { return &____resendDelay_3; }
	inline void set__resendDelay_3(double value)
	{
		____resendDelay_3 = value;
	}

	inline static int32_t get_offset_of__pingSendTimer_4() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____pingSendTimer_4)); }
	inline int32_t get__pingSendTimer_4() const { return ____pingSendTimer_4; }
	inline int32_t* get_address_of__pingSendTimer_4() { return &____pingSendTimer_4; }
	inline void set__pingSendTimer_4(int32_t value)
	{
		____pingSendTimer_4 = value;
	}

	inline static int32_t get_offset_of__rttResetTimer_5() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____rttResetTimer_5)); }
	inline int32_t get__rttResetTimer_5() const { return ____rttResetTimer_5; }
	inline int32_t* get_address_of__rttResetTimer_5() { return &____rttResetTimer_5; }
	inline void set__rttResetTimer_5(int32_t value)
	{
		____rttResetTimer_5 = value;
	}

	inline static int32_t get_offset_of__pingTimer_6() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____pingTimer_6)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get__pingTimer_6() const { return ____pingTimer_6; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of__pingTimer_6() { return &____pingTimer_6; }
	inline void set__pingTimer_6(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		____pingTimer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pingTimer_6), (void*)value);
	}

	inline static int32_t get_offset_of__timeSinceLastPacket_7() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____timeSinceLastPacket_7)); }
	inline int32_t get__timeSinceLastPacket_7() const { return ____timeSinceLastPacket_7; }
	inline int32_t* get_address_of__timeSinceLastPacket_7() { return &____timeSinceLastPacket_7; }
	inline void set__timeSinceLastPacket_7(int32_t value)
	{
		____timeSinceLastPacket_7 = value;
	}

	inline static int32_t get_offset_of__remoteDelta_8() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____remoteDelta_8)); }
	inline int64_t get__remoteDelta_8() const { return ____remoteDelta_8; }
	inline int64_t* get_address_of__remoteDelta_8() { return &____remoteDelta_8; }
	inline void set__remoteDelta_8(int64_t value)
	{
		____remoteDelta_8 = value;
	}

	inline static int32_t get_offset_of__packetPool_9() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____packetPool_9)); }
	inline NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * get__packetPool_9() const { return ____packetPool_9; }
	inline NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E ** get_address_of__packetPool_9() { return &____packetPool_9; }
	inline void set__packetPool_9(NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * value)
	{
		____packetPool_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packetPool_9), (void*)value);
	}

	inline static int32_t get_offset_of__shutdownLock_10() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____shutdownLock_10)); }
	inline RuntimeObject * get__shutdownLock_10() const { return ____shutdownLock_10; }
	inline RuntimeObject ** get_address_of__shutdownLock_10() { return &____shutdownLock_10; }
	inline void set__shutdownLock_10(RuntimeObject * value)
	{
		____shutdownLock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shutdownLock_10), (void*)value);
	}

	inline static int32_t get_offset_of_NextPeer_11() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___NextPeer_11)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get_NextPeer_11() const { return ___NextPeer_11; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of_NextPeer_11() { return &___NextPeer_11; }
	inline void set_NextPeer_11(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		___NextPeer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextPeer_11), (void*)value);
	}

	inline static int32_t get_offset_of_PrevPeer_12() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___PrevPeer_12)); }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * get_PrevPeer_12() const { return ___PrevPeer_12; }
	inline NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 ** get_address_of_PrevPeer_12() { return &___PrevPeer_12; }
	inline void set_PrevPeer_12(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * value)
	{
		___PrevPeer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrevPeer_12), (void*)value);
	}

	inline static int32_t get_offset_of__unreliableChannel_13() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____unreliableChannel_13)); }
	inline Queue_1_t45BA0F1D5FC5D0AB22C8C0D39C3A3C24A7427237 * get__unreliableChannel_13() const { return ____unreliableChannel_13; }
	inline Queue_1_t45BA0F1D5FC5D0AB22C8C0D39C3A3C24A7427237 ** get_address_of__unreliableChannel_13() { return &____unreliableChannel_13; }
	inline void set__unreliableChannel_13(Queue_1_t45BA0F1D5FC5D0AB22C8C0D39C3A3C24A7427237 * value)
	{
		____unreliableChannel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unreliableChannel_13), (void*)value);
	}

	inline static int32_t get_offset_of__channelSendQueue_14() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____channelSendQueue_14)); }
	inline ConcurrentQueue_1_tA39436033D544C709FB8F6B59E6ACEEC84CCCE0B * get__channelSendQueue_14() const { return ____channelSendQueue_14; }
	inline ConcurrentQueue_1_tA39436033D544C709FB8F6B59E6ACEEC84CCCE0B ** get_address_of__channelSendQueue_14() { return &____channelSendQueue_14; }
	inline void set__channelSendQueue_14(ConcurrentQueue_1_tA39436033D544C709FB8F6B59E6ACEEC84CCCE0B * value)
	{
		____channelSendQueue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channelSendQueue_14), (void*)value);
	}

	inline static int32_t get_offset_of__channels_15() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____channels_15)); }
	inline BaseChannelU5BU5D_tF5F6EB1B1A722D64890C4A299125629ABE6DE248* get__channels_15() const { return ____channels_15; }
	inline BaseChannelU5BU5D_tF5F6EB1B1A722D64890C4A299125629ABE6DE248** get_address_of__channels_15() { return &____channels_15; }
	inline void set__channels_15(BaseChannelU5BU5D_tF5F6EB1B1A722D64890C4A299125629ABE6DE248* value)
	{
		____channels_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channels_15), (void*)value);
	}

	inline static int32_t get_offset_of__mtu_16() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mtu_16)); }
	inline int32_t get__mtu_16() const { return ____mtu_16; }
	inline int32_t* get_address_of__mtu_16() { return &____mtu_16; }
	inline void set__mtu_16(int32_t value)
	{
		____mtu_16 = value;
	}

	inline static int32_t get_offset_of__mtuIdx_17() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mtuIdx_17)); }
	inline int32_t get__mtuIdx_17() const { return ____mtuIdx_17; }
	inline int32_t* get_address_of__mtuIdx_17() { return &____mtuIdx_17; }
	inline void set__mtuIdx_17(int32_t value)
	{
		____mtuIdx_17 = value;
	}

	inline static int32_t get_offset_of__finishMtu_18() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____finishMtu_18)); }
	inline bool get__finishMtu_18() const { return ____finishMtu_18; }
	inline bool* get_address_of__finishMtu_18() { return &____finishMtu_18; }
	inline void set__finishMtu_18(bool value)
	{
		____finishMtu_18 = value;
	}

	inline static int32_t get_offset_of__mtuCheckTimer_19() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mtuCheckTimer_19)); }
	inline int32_t get__mtuCheckTimer_19() const { return ____mtuCheckTimer_19; }
	inline int32_t* get_address_of__mtuCheckTimer_19() { return &____mtuCheckTimer_19; }
	inline void set__mtuCheckTimer_19(int32_t value)
	{
		____mtuCheckTimer_19 = value;
	}

	inline static int32_t get_offset_of__mtuCheckAttempts_20() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mtuCheckAttempts_20)); }
	inline int32_t get__mtuCheckAttempts_20() const { return ____mtuCheckAttempts_20; }
	inline int32_t* get_address_of__mtuCheckAttempts_20() { return &____mtuCheckAttempts_20; }
	inline void set__mtuCheckAttempts_20(int32_t value)
	{
		____mtuCheckAttempts_20 = value;
	}

	inline static int32_t get_offset_of__mtuMutex_23() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mtuMutex_23)); }
	inline RuntimeObject * get__mtuMutex_23() const { return ____mtuMutex_23; }
	inline RuntimeObject ** get_address_of__mtuMutex_23() { return &____mtuMutex_23; }
	inline void set__mtuMutex_23(RuntimeObject * value)
	{
		____mtuMutex_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mtuMutex_23), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentId_24() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____fragmentId_24)); }
	inline int32_t get__fragmentId_24() const { return ____fragmentId_24; }
	inline int32_t* get_address_of__fragmentId_24() { return &____fragmentId_24; }
	inline void set__fragmentId_24(int32_t value)
	{
		____fragmentId_24 = value;
	}

	inline static int32_t get_offset_of__holdedFragments_25() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____holdedFragments_25)); }
	inline Dictionary_2_tD7B56EDB7CAA4109FAE2750489A7C75C942E6895 * get__holdedFragments_25() const { return ____holdedFragments_25; }
	inline Dictionary_2_tD7B56EDB7CAA4109FAE2750489A7C75C942E6895 ** get_address_of__holdedFragments_25() { return &____holdedFragments_25; }
	inline void set__holdedFragments_25(Dictionary_2_tD7B56EDB7CAA4109FAE2750489A7C75C942E6895 * value)
	{
		____holdedFragments_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____holdedFragments_25), (void*)value);
	}

	inline static int32_t get_offset_of__deliveredFragments_26() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____deliveredFragments_26)); }
	inline Dictionary_2_t80B7B4B3AEDA76D5DD88079CB6E37BD360BA02C1 * get__deliveredFragments_26() const { return ____deliveredFragments_26; }
	inline Dictionary_2_t80B7B4B3AEDA76D5DD88079CB6E37BD360BA02C1 ** get_address_of__deliveredFragments_26() { return &____deliveredFragments_26; }
	inline void set__deliveredFragments_26(Dictionary_2_t80B7B4B3AEDA76D5DD88079CB6E37BD360BA02C1 * value)
	{
		____deliveredFragments_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deliveredFragments_26), (void*)value);
	}

	inline static int32_t get_offset_of__mergeData_27() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mergeData_27)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__mergeData_27() const { return ____mergeData_27; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__mergeData_27() { return &____mergeData_27; }
	inline void set__mergeData_27(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____mergeData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mergeData_27), (void*)value);
	}

	inline static int32_t get_offset_of__mergePos_28() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mergePos_28)); }
	inline int32_t get__mergePos_28() const { return ____mergePos_28; }
	inline int32_t* get_address_of__mergePos_28() { return &____mergePos_28; }
	inline void set__mergePos_28(int32_t value)
	{
		____mergePos_28 = value;
	}

	inline static int32_t get_offset_of__mergeCount_29() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____mergeCount_29)); }
	inline int32_t get__mergeCount_29() const { return ____mergeCount_29; }
	inline int32_t* get_address_of__mergeCount_29() { return &____mergeCount_29; }
	inline void set__mergeCount_29(int32_t value)
	{
		____mergeCount_29 = value;
	}

	inline static int32_t get_offset_of__connectAttempts_30() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectAttempts_30)); }
	inline int32_t get__connectAttempts_30() const { return ____connectAttempts_30; }
	inline int32_t* get_address_of__connectAttempts_30() { return &____connectAttempts_30; }
	inline void set__connectAttempts_30(int32_t value)
	{
		____connectAttempts_30 = value;
	}

	inline static int32_t get_offset_of__connectTimer_31() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectTimer_31)); }
	inline int32_t get__connectTimer_31() const { return ____connectTimer_31; }
	inline int32_t* get_address_of__connectTimer_31() { return &____connectTimer_31; }
	inline void set__connectTimer_31(int32_t value)
	{
		____connectTimer_31 = value;
	}

	inline static int32_t get_offset_of__connectTime_32() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectTime_32)); }
	inline int64_t get__connectTime_32() const { return ____connectTime_32; }
	inline int64_t* get_address_of__connectTime_32() { return &____connectTime_32; }
	inline void set__connectTime_32(int64_t value)
	{
		____connectTime_32 = value;
	}

	inline static int32_t get_offset_of__connectNum_33() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectNum_33)); }
	inline uint8_t get__connectNum_33() const { return ____connectNum_33; }
	inline uint8_t* get_address_of__connectNum_33() { return &____connectNum_33; }
	inline void set__connectNum_33(uint8_t value)
	{
		____connectNum_33 = value;
	}

	inline static int32_t get_offset_of__connectionState_34() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectionState_34)); }
	inline uint8_t get__connectionState_34() const { return ____connectionState_34; }
	inline uint8_t* get_address_of__connectionState_34() { return &____connectionState_34; }
	inline void set__connectionState_34(uint8_t value)
	{
		____connectionState_34 = value;
	}

	inline static int32_t get_offset_of__shutdownPacket_35() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____shutdownPacket_35)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__shutdownPacket_35() const { return ____shutdownPacket_35; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__shutdownPacket_35() { return &____shutdownPacket_35; }
	inline void set__shutdownPacket_35(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____shutdownPacket_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shutdownPacket_35), (void*)value);
	}

	inline static int32_t get_offset_of__shutdownTimer_37() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____shutdownTimer_37)); }
	inline int32_t get__shutdownTimer_37() const { return ____shutdownTimer_37; }
	inline int32_t* get_address_of__shutdownTimer_37() { return &____shutdownTimer_37; }
	inline void set__shutdownTimer_37(int32_t value)
	{
		____shutdownTimer_37 = value;
	}

	inline static int32_t get_offset_of__pingPacket_38() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____pingPacket_38)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__pingPacket_38() const { return ____pingPacket_38; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__pingPacket_38() { return &____pingPacket_38; }
	inline void set__pingPacket_38(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____pingPacket_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pingPacket_38), (void*)value);
	}

	inline static int32_t get_offset_of__pongPacket_39() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____pongPacket_39)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__pongPacket_39() const { return ____pongPacket_39; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__pongPacket_39() { return &____pongPacket_39; }
	inline void set__pongPacket_39(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____pongPacket_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pongPacket_39), (void*)value);
	}

	inline static int32_t get_offset_of__connectRequestPacket_40() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectRequestPacket_40)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__connectRequestPacket_40() const { return ____connectRequestPacket_40; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__connectRequestPacket_40() { return &____connectRequestPacket_40; }
	inline void set__connectRequestPacket_40(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____connectRequestPacket_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectRequestPacket_40), (void*)value);
	}

	inline static int32_t get_offset_of__connectAcceptPacket_41() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ____connectAcceptPacket_41)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__connectAcceptPacket_41() const { return ____connectAcceptPacket_41; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__connectAcceptPacket_41() { return &____connectAcceptPacket_41; }
	inline void set__connectAcceptPacket_41(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____connectAcceptPacket_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectAcceptPacket_41), (void*)value);
	}

	inline static int32_t get_offset_of_EndPoint_42() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___EndPoint_42)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_EndPoint_42() const { return ___EndPoint_42; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_EndPoint_42() { return &___EndPoint_42; }
	inline void set_EndPoint_42(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___EndPoint_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndPoint_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetManager_43() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___NetManager_43)); }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * get_NetManager_43() const { return ___NetManager_43; }
	inline NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 ** get_address_of_NetManager_43() { return &___NetManager_43; }
	inline void set_NetManager_43(NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * value)
	{
		___NetManager_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetManager_43), (void*)value);
	}

	inline static int32_t get_offset_of_Id_44() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___Id_44)); }
	inline int32_t get_Id_44() const { return ___Id_44; }
	inline int32_t* get_address_of_Id_44() { return &___Id_44; }
	inline void set_Id_44(int32_t value)
	{
		___Id_44 = value;
	}

	inline static int32_t get_offset_of_Tag_45() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___Tag_45)); }
	inline RuntimeObject * get_Tag_45() const { return ___Tag_45; }
	inline RuntimeObject ** get_address_of_Tag_45() { return &___Tag_45; }
	inline void set_Tag_45(RuntimeObject * value)
	{
		___Tag_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_45), (void*)value);
	}

	inline static int32_t get_offset_of_Statistics_46() { return static_cast<int32_t>(offsetof(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6, ___Statistics_46)); }
	inline NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * get_Statistics_46() const { return ___Statistics_46; }
	inline NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 ** get_address_of_Statistics_46() { return &___Statistics_46; }
	inline void set_Statistics_46(NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * value)
	{
		___Statistics_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Statistics_46), (void*)value);
	}
};


// LiteNetLib.Utils.NtpPacket
struct NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.Utils.NtpPacket::<Bytes>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CBytesU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::<DestinationTimestamp>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CDestinationTimestampU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895, ___U3CBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CBytesU3Ek__BackingField_1() const { return ___U3CBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CBytesU3Ek__BackingField_1() { return &___U3CBytesU3Ek__BackingField_1; }
	inline void set_U3CBytesU3Ek__BackingField_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBytesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDestinationTimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895, ___U3CDestinationTimestampU3Ek__BackingField_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CDestinationTimestampU3Ek__BackingField_2() const { return ___U3CDestinationTimestampU3Ek__BackingField_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CDestinationTimestampU3Ek__BackingField_2() { return &___U3CDestinationTimestampU3Ek__BackingField_2; }
	inline void set_U3CDestinationTimestampU3Ek__BackingField_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CDestinationTimestampU3Ek__BackingField_2 = value;
	}
};

struct NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_StaticFields
{
public:
	// System.DateTime LiteNetLib.Utils.NtpPacket::Epoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___Epoch_0;

public:
	inline static int32_t get_offset_of_Epoch_0() { return static_cast<int32_t>(offsetof(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_StaticFields, ___Epoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_Epoch_0() const { return ___Epoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_Epoch_0() { return &___Epoch_0; }
	inline void set_Epoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___Epoch_0 = value;
	}
};


// LiteNetLib.Utils.ParseException
struct ParseException_t625A20EE142D7498B4F30B7F09210BDB5DBB7DDF  : public Exception_t
{
public:

public:
};


// LiteNetLib.ReliableChannel
struct ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584  : public BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6
{
public:
	// LiteNetLib.NetPacket LiteNetLib.ReliableChannel::_outgoingAcks
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ____outgoingAcks_3;
	// LiteNetLib.ReliableChannel/PendingPacket[] LiteNetLib.ReliableChannel::_pendingPackets
	PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* ____pendingPackets_4;
	// LiteNetLib.NetPacket[] LiteNetLib.ReliableChannel::_receivedPackets
	NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* ____receivedPackets_5;
	// System.Boolean[] LiteNetLib.ReliableChannel::_earlyReceived
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____earlyReceived_6;
	// System.Int32 LiteNetLib.ReliableChannel::_localSeqence
	int32_t ____localSeqence_7;
	// System.Int32 LiteNetLib.ReliableChannel::_remoteSequence
	int32_t ____remoteSequence_8;
	// System.Int32 LiteNetLib.ReliableChannel::_localWindowStart
	int32_t ____localWindowStart_9;
	// System.Int32 LiteNetLib.ReliableChannel::_remoteWindowStart
	int32_t ____remoteWindowStart_10;
	// System.Boolean LiteNetLib.ReliableChannel::_mustSendAcks
	bool ____mustSendAcks_11;
	// LiteNetLib.DeliveryMethod LiteNetLib.ReliableChannel::_deliveryMethod
	uint8_t ____deliveryMethod_12;
	// System.Boolean LiteNetLib.ReliableChannel::_ordered
	bool ____ordered_13;
	// System.Int32 LiteNetLib.ReliableChannel::_windowSize
	int32_t ____windowSize_14;
	// System.Byte LiteNetLib.ReliableChannel::_id
	uint8_t ____id_16;

public:
	inline static int32_t get_offset_of__outgoingAcks_3() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____outgoingAcks_3)); }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * get__outgoingAcks_3() const { return ____outgoingAcks_3; }
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** get_address_of__outgoingAcks_3() { return &____outgoingAcks_3; }
	inline void set__outgoingAcks_3(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		____outgoingAcks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outgoingAcks_3), (void*)value);
	}

	inline static int32_t get_offset_of__pendingPackets_4() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____pendingPackets_4)); }
	inline PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* get__pendingPackets_4() const { return ____pendingPackets_4; }
	inline PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3** get_address_of__pendingPackets_4() { return &____pendingPackets_4; }
	inline void set__pendingPackets_4(PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* value)
	{
		____pendingPackets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingPackets_4), (void*)value);
	}

	inline static int32_t get_offset_of__receivedPackets_5() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____receivedPackets_5)); }
	inline NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* get__receivedPackets_5() const { return ____receivedPackets_5; }
	inline NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF** get_address_of__receivedPackets_5() { return &____receivedPackets_5; }
	inline void set__receivedPackets_5(NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* value)
	{
		____receivedPackets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivedPackets_5), (void*)value);
	}

	inline static int32_t get_offset_of__earlyReceived_6() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____earlyReceived_6)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__earlyReceived_6() const { return ____earlyReceived_6; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__earlyReceived_6() { return &____earlyReceived_6; }
	inline void set__earlyReceived_6(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____earlyReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____earlyReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of__localSeqence_7() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____localSeqence_7)); }
	inline int32_t get__localSeqence_7() const { return ____localSeqence_7; }
	inline int32_t* get_address_of__localSeqence_7() { return &____localSeqence_7; }
	inline void set__localSeqence_7(int32_t value)
	{
		____localSeqence_7 = value;
	}

	inline static int32_t get_offset_of__remoteSequence_8() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____remoteSequence_8)); }
	inline int32_t get__remoteSequence_8() const { return ____remoteSequence_8; }
	inline int32_t* get_address_of__remoteSequence_8() { return &____remoteSequence_8; }
	inline void set__remoteSequence_8(int32_t value)
	{
		____remoteSequence_8 = value;
	}

	inline static int32_t get_offset_of__localWindowStart_9() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____localWindowStart_9)); }
	inline int32_t get__localWindowStart_9() const { return ____localWindowStart_9; }
	inline int32_t* get_address_of__localWindowStart_9() { return &____localWindowStart_9; }
	inline void set__localWindowStart_9(int32_t value)
	{
		____localWindowStart_9 = value;
	}

	inline static int32_t get_offset_of__remoteWindowStart_10() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____remoteWindowStart_10)); }
	inline int32_t get__remoteWindowStart_10() const { return ____remoteWindowStart_10; }
	inline int32_t* get_address_of__remoteWindowStart_10() { return &____remoteWindowStart_10; }
	inline void set__remoteWindowStart_10(int32_t value)
	{
		____remoteWindowStart_10 = value;
	}

	inline static int32_t get_offset_of__mustSendAcks_11() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____mustSendAcks_11)); }
	inline bool get__mustSendAcks_11() const { return ____mustSendAcks_11; }
	inline bool* get_address_of__mustSendAcks_11() { return &____mustSendAcks_11; }
	inline void set__mustSendAcks_11(bool value)
	{
		____mustSendAcks_11 = value;
	}

	inline static int32_t get_offset_of__deliveryMethod_12() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____deliveryMethod_12)); }
	inline uint8_t get__deliveryMethod_12() const { return ____deliveryMethod_12; }
	inline uint8_t* get_address_of__deliveryMethod_12() { return &____deliveryMethod_12; }
	inline void set__deliveryMethod_12(uint8_t value)
	{
		____deliveryMethod_12 = value;
	}

	inline static int32_t get_offset_of__ordered_13() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____ordered_13)); }
	inline bool get__ordered_13() const { return ____ordered_13; }
	inline bool* get_address_of__ordered_13() { return &____ordered_13; }
	inline void set__ordered_13(bool value)
	{
		____ordered_13 = value;
	}

	inline static int32_t get_offset_of__windowSize_14() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____windowSize_14)); }
	inline int32_t get__windowSize_14() const { return ____windowSize_14; }
	inline int32_t* get_address_of__windowSize_14() { return &____windowSize_14; }
	inline void set__windowSize_14(int32_t value)
	{
		____windowSize_14 = value;
	}

	inline static int32_t get_offset_of__id_16() { return static_cast<int32_t>(offsetof(ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584, ____id_16)); }
	inline uint8_t get__id_16() const { return ____id_16; }
	inline uint8_t* get_address_of__id_16() { return &____id_16; }
	inline void set__id_16(uint8_t value)
	{
		____id_16 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// LiteNetLib.NatPunchModule/SuccessEventData
struct SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091 
{
public:
	// System.Net.IPEndPoint LiteNetLib.NatPunchModule/SuccessEventData::TargetEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___TargetEndPoint_0;
	// LiteNetLib.NatAddressType LiteNetLib.NatPunchModule/SuccessEventData::Type
	int32_t ___Type_1;
	// System.String LiteNetLib.NatPunchModule/SuccessEventData::Token
	String_t* ___Token_2;

public:
	inline static int32_t get_offset_of_TargetEndPoint_0() { return static_cast<int32_t>(offsetof(SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091, ___TargetEndPoint_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_TargetEndPoint_0() const { return ___TargetEndPoint_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_TargetEndPoint_0() { return &___TargetEndPoint_0; }
	inline void set_TargetEndPoint_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___TargetEndPoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetEndPoint_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Token_2() { return static_cast<int32_t>(offsetof(SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091, ___Token_2)); }
	inline String_t* get_Token_2() const { return ___Token_2; }
	inline String_t** get_address_of_Token_2() { return &___Token_2; }
	inline void set_Token_2(String_t* value)
	{
		___Token_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Token_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LiteNetLib.NatPunchModule/SuccessEventData
struct SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_pinvoke
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___TargetEndPoint_0;
	int32_t ___Type_1;
	char* ___Token_2;
};
// Native definition for COM marshalling of LiteNetLib.NatPunchModule/SuccessEventData
struct SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_com
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___TargetEndPoint_0;
	int32_t ___Type_1;
	Il2CppChar* ___Token_2;
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest
struct OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
struct OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnConnectionRequest
struct OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnDeliveryEvent
struct OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnNetworkError
struct OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate
struct OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnNetworkReceive
struct OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
struct OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnNtpResponseEvent
struct OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnPeerConnected
struct OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.EventBasedNetListener/OnPeerDisconnected
struct OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D  : public MulticastDelegate_t
{
public:

public:
};


// LiteNetLib.InvalidPacketException
struct InvalidPacketException_t6FCDFEDA0E482D30439ACEEA41E5DDB17DDF0769  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// LiteNetLib.TooBigPacketException
struct TooBigPacketException_t4F4DB4223CA3BE7FB9AB8779F089A161A337BC45  : public InvalidPacketException_t6FCDFEDA0E482D30439ACEEA41E5DDB17DDF0769
{
public:

public:
};


// LiteNetLib.UnitySocketFix
struct UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Net.IPAddress LiteNetLib.UnitySocketFix::BindAddrIPv4
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___BindAddrIPv4_4;
	// System.Net.IPAddress LiteNetLib.UnitySocketFix::BindAddrIPv6
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___BindAddrIPv6_5;
	// System.Boolean LiteNetLib.UnitySocketFix::Reuse
	bool ___Reuse_6;
	// LiteNetLib.IPv6Mode LiteNetLib.UnitySocketFix::IPv6
	int32_t ___IPv6_7;
	// System.Int32 LiteNetLib.UnitySocketFix::Port
	int32_t ___Port_8;
	// System.Boolean LiteNetLib.UnitySocketFix::Paused
	bool ___Paused_9;
	// LiteNetLib.NetSocket LiteNetLib.UnitySocketFix::Socket
	NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * ___Socket_10;
	// System.Boolean LiteNetLib.UnitySocketFix::ManualMode
	bool ___ManualMode_11;

public:
	inline static int32_t get_offset_of_BindAddrIPv4_4() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___BindAddrIPv4_4)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_BindAddrIPv4_4() const { return ___BindAddrIPv4_4; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_BindAddrIPv4_4() { return &___BindAddrIPv4_4; }
	inline void set_BindAddrIPv4_4(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___BindAddrIPv4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BindAddrIPv4_4), (void*)value);
	}

	inline static int32_t get_offset_of_BindAddrIPv6_5() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___BindAddrIPv6_5)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_BindAddrIPv6_5() const { return ___BindAddrIPv6_5; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_BindAddrIPv6_5() { return &___BindAddrIPv6_5; }
	inline void set_BindAddrIPv6_5(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___BindAddrIPv6_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BindAddrIPv6_5), (void*)value);
	}

	inline static int32_t get_offset_of_Reuse_6() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___Reuse_6)); }
	inline bool get_Reuse_6() const { return ___Reuse_6; }
	inline bool* get_address_of_Reuse_6() { return &___Reuse_6; }
	inline void set_Reuse_6(bool value)
	{
		___Reuse_6 = value;
	}

	inline static int32_t get_offset_of_IPv6_7() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___IPv6_7)); }
	inline int32_t get_IPv6_7() const { return ___IPv6_7; }
	inline int32_t* get_address_of_IPv6_7() { return &___IPv6_7; }
	inline void set_IPv6_7(int32_t value)
	{
		___IPv6_7 = value;
	}

	inline static int32_t get_offset_of_Port_8() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___Port_8)); }
	inline int32_t get_Port_8() const { return ___Port_8; }
	inline int32_t* get_address_of_Port_8() { return &___Port_8; }
	inline void set_Port_8(int32_t value)
	{
		___Port_8 = value;
	}

	inline static int32_t get_offset_of_Paused_9() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___Paused_9)); }
	inline bool get_Paused_9() const { return ___Paused_9; }
	inline bool* get_address_of_Paused_9() { return &___Paused_9; }
	inline void set_Paused_9(bool value)
	{
		___Paused_9 = value;
	}

	inline static int32_t get_offset_of_Socket_10() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___Socket_10)); }
	inline NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * get_Socket_10() const { return ___Socket_10; }
	inline NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 ** get_address_of_Socket_10() { return &___Socket_10; }
	inline void set_Socket_10(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * value)
	{
		___Socket_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Socket_10), (void*)value);
	}

	inline static int32_t get_offset_of_ManualMode_11() { return static_cast<int32_t>(offsetof(UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD, ___ManualMode_11)); }
	inline bool get_ManualMode_11() const { return ___ManualMode_11; }
	inline bool* get_address_of_ManualMode_11() { return &___ManualMode_11; }
	inline void set_ManualMode_11(bool value)
	{
		___ManualMode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * m_Items[1];

public:
	inline NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// LiteNetLib.ReliableChannel/PendingPacket[]
struct PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4  m_Items[1];

public:
	inline PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____packet_0), (void*)NULL);
	}
	inline PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____packet_0), (void*)NULL);
	}
};
// LiteNetLib.NetPacket[]
struct NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * m_Items[1];

public:
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_get_IsEmpty_m00CFC7F76647C3E49D255A3570C9AEC901EF0BAA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);

// System.Int64 System.Threading.Interlocked::Read(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A (int64_t* ___location0, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_PacketsSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketsSent_mD45A2B743A7AD2D42690D6140E9B8AD4EC864FA0 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_PacketLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketLoss_mEEE952C1C6F4AFFFF39E451E43D7DC8E8106386E (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Int64 System.Threading.Interlocked::Exchange(System.Int64&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF (int64_t* ___location10, int64_t ___value1, const RuntimeMethod* method);
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B (int64_t* ___location0, const RuntimeMethod* method);
// System.Int64 System.Threading.Interlocked::Add(System.Int64&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Add_m18AE0DFA0EFDBA489FB069BE464E81A6DF9B0AF2 (int64_t* ___location10, int64_t ___value1, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_BytesReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_BytesReceived_mD08EB24924F63D0C21024311D4256CBB46D23E56 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_PacketsReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketsReceived_m1EB10406FFCBB5199B46FE4B6FF94B4213F3090C (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_BytesSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_BytesSent_m60FC33AC74449F8E36FF2065AF2B51AAF56FBDE4 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Int64 LiteNetLib.NetStatistics::get_PacketLossPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketLossPercent_m8AFD9D230C61981A3C0A49B5BF520DB680E5B95D (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Net.IPAddress LiteNetLib.NetUtils::ResolveAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * NetUtils_ResolveAddress_mCCA97866D03534089846A64A54BFE426322BED1D (String_t* ___hostStr0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E (String_t* ___ipString0, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** ___address1, const RuntimeMethod* method);
// System.Net.IPAddress LiteNetLib.NetUtils::ResolveAddress(System.String,System.Net.Sockets.AddressFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * NetUtils_ResolveAddress_m67E8BCB872C1DDFE6B1D8F5165189F5CAFBFF660 (String_t* ___hostStr0, int32_t ___addressFamily1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline (IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LiteNetLib.NetUtils::GetLocalIpList(System.Collections.Generic.IList`1<System.String>,LiteNetLib.LocalAddrType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetUtils_GetLocalIpList_m157331556CA29CBD6782328B30C604C3005A6F9D (RuntimeObject* ___targetList0, int32_t ___addrType1, const RuntimeMethod* method);
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* NetworkInterface_GetAllNetworkInterfaces_mC0EF91AC837841CDC0ED9E040745F215079235B1 (const RuntimeMethod* method);
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706 (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Byte[] LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.TimeSpan LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_GetTimeSpan32_m51BE3B9C83FBBA832834C2B8471DAC26A3512D11 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m8BA53FC67B4E07CD1176F13063778180879E0BA7 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_m1FB333C610A80437E1FE8C4492D8E282A766AD1F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_ReceiveTimestamp_mA64637A61FD79F52F8881C4C75C855A1CD4749DB (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7 (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_gshared)(__this, method);
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_OriginTimestamp_mDAA20B0AD8E38C4C28848B8CA0E5B4980CFDFB7D (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_op_Addition_mBF0190F67F6882232A9E20DDB5F0ACF25D2F6327 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_op_Subtraction_mA4ACA1A4349FA026D9F3DE12E4E1DC180832CA62 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromTicks_m25E4ADCCCC583B8D5A08B77577DE8E46CEBF7F9C (int64_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_Mode(LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m1CF58B95231BF47DAA49EBB1864FA21757B26B64 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_m32BE8A579D678CC3D43305FB4D8877A469B137BB (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// System.Void LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_m4864C5EFC3E31B31A9CDD37C0A337ABC1EE586B8 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_m7892C379763FB79666F67C4475E8317F70810AC9_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method);
// LiteNetLib.Utils.NtpMode LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_mA7FBE4FBFC6BCD414B12BBB74270CDEE1A376FCE (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m237046FC4C5E60BA031A9CC381A79A87EB91777F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline)(__this, method);
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_m21EFCFBFED3956809322A858F69D884F4B81A54D (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_m087B3907088BA07F1801A9630CB067E18DDEDD61 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// LiteNetLib.Utils.NtpLeapIndicator LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_mE78460DC4E89D5F99C29FFF6583BAB942CF3577E (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.UInt64 LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m6EC9A74D55F4BB532379E926E036E2E2534B3D10 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m72C3430B5EAFCA5952038A56340DAF4E5D8A2908 (double ___value0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int64_t ___ticks0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m43D8321B04B4743CBEE87E0FC9880168E0DF70D8 (double ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_m414A6F2B1E30F6158787B7898F1B295B18AC87A4 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m31D7FB749D09C5B3DC96202836FB07F69A617E40 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt64 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_mFCA786B039D12A3082A186A0EA269426409635C2 (uint64_t ___x0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mEFF8BC5659E2D1A39A1CF812FEADEA4CFD524577_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___startIndex1, uint64_t ___value2, const RuntimeMethod* method);
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m0C9F3D9840110CC82D4C18FD882AC5C7EA595366 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_m15624432A67AFFB982330B588F87042E157CB72A (uint32_t ___x0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1AD9E79A671864DFB1AABDB75D207C688B868D88 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_mB4A0FFC1CC04D7DFC687EA803474BF2260A6B168 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method);
// System.Int32 LiteNetLib.NetSocket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.IPEndPoint,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSocket_SendTo_m4A1DC3954B86BEC03867D4EA549531F8BBE82B71 (NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___size2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint3, int32_t* ___errorCode4, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LiteNetLib.BaseChannel::.ctor(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseChannel__ctor_m4767F1DFAF0F1CD6CE285324BA31820EB5361F06 (BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPacket::.ctor(LiteNetLib.PacketProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacket__ctor_m2F22762D43F4D8F7A6D095692E08DD37A08AAC0E (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, uint8_t ___property0, int32_t ___size1, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPacket::set_ChannelId(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacket_set_ChannelId_m9DF839F57502F274D7A22CAA85D3448914D9787F (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt16 LiteNetLib.NetPacket::get_Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0 (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, const RuntimeMethod* method);
// System.Int32 LiteNetLib.NetUtils::RelativeSequenceNumber(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507 (int32_t ___number0, int32_t ___expected1, const RuntimeMethod* method);
// System.Void LiteNetLib.NetStatistics::IncrementPacketLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_IncrementPacketLoss_m3DEB611494E87B086B689085747EA66049BAA411 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method);
// System.Boolean LiteNetLib.ReliableChannel/PendingPacket::Clear(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PendingPacket_Clear_m75268CF6037A4519281CA969D386B0B3DC30C751 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPeer::SendUserData(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343 (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 *, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared)(__this, ___result0, method);
}
// System.Void LiteNetLib.NetPacket::set_Sequence(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacket_set_Sequence_m0F5435B8CC9139B18DAB00C0B299EC4EBFEF2CF4 (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.ReliableChannel/PendingPacket::Init(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingPacket_Init_mF68FA054F319D8E5571BC18E8BD7E535E4DA75D2 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket>::get_IsEmpty()
inline bool ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744 (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 *, const RuntimeMethod*))ConcurrentQueue_1_get_IsEmpty_m00CFC7F76647C3E49D255A3570C9AEC901EF0BAA_gshared)(__this, method);
}
// System.Boolean LiteNetLib.ReliableChannel/PendingPacket::TrySend(System.Int64,LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PendingPacket_TrySend_m64574EF3A35EF2CC0550592199CEAE748B99220D (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, int64_t ___currentTime0, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer1, const RuntimeMethod* method);
// LiteNetLib.PacketProperty LiteNetLib.NetPacket::get_Property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetPacket_get_Property_m93E6B1868AFC308E34C56E1E8B1791EC464236FD (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.ReliableChannel::ProcessAck(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableChannel_ProcessAck_m26E70549FAB1EF5D7EE45F493FEF0400A839BC3D (ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method);
// System.Void LiteNetLib.BaseChannel::AddToPeerChannelSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseChannel_AddToPeerChannelSendQueue_m2BAD5CBA4E9E776D8AD68B797DD8F0A0266E9504 (BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPeer::AddReliablePacket(LiteNetLib.DeliveryMethod,LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeer_AddReliablePacket_m3D0CEE6FCFA44F315CD7FA4F99338E6008B33D3E (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * __this, uint8_t ___method0, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<LiteNetLib.NetPacket>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared)(__this, method);
}
// System.Double LiteNetLib.NetPeer::get_ResendDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetPeer_get_ResendDelay_m756E0CF135BF9B4DF21A5FF28699A67778A8013E_inline (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPacketPool::Recycle(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketPool_Recycle_m70D538E6D25E3ADE4CD8E3B3417356350A862C78 (NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method);
// System.Boolean LiteNetLib.NetPacket::get_IsFragmented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetPacket_get_IsFragmented_m3998EDB726F11A1A8272594E1FD5E8A347407A11 (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetStatistics::AddPacketLoss(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_AddPacketLoss_m8C5F67E2A2DC65040CF0D03E915B49C4DEC67A5E (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, int64_t ___packetLoss0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetManager::CreateReceiveEvent(LiteNetLib.NetPacket,LiteNetLib.DeliveryMethod,System.Int32,LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetManager_CreateReceiveEvent_mD6D8490C4A77C7BAF9275E1B4F2B7005A2E5DFD1 (NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, uint8_t ___method1, int32_t ___headerSize2, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___fromPeer3, const RuntimeMethod* method);
// System.Void LiteNetLib.InvalidPacketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPacketException__ctor_m4E3C5220739A3A88BC32EB00A1A4DC8344FF3132 (InvalidPacketException_t6FCDFEDA0E482D30439ACEEA41E5DDB17DDF0769 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetSocket::Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocket_Close_mFF8944D3559B381C7BB06CE03136A6C4DFF4CAA1 (NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * __this, bool ___suspend0, const RuntimeMethod* method);
// System.Boolean LiteNetLib.NetSocket::Bind(System.Net.IPAddress,System.Net.IPAddress,System.Int32,System.Boolean,LiteNetLib.IPv6Mode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetSocket_Bind_mB1F9BE0EB351E0BDC8D10A3BC426BEC5C13F5638 (NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___addressIPv40, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___addressIPv61, int32_t ___port2, bool ___reuseAddress3, int32_t ___ipv6Mode4, bool ___manualMode5, const RuntimeMethod* method);
// System.Void LiteNetLib.NetDebug::WriteError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDebug_WriteError_m78209E2DF5CD8796257F900840A154C66A68D2A4 (String_t* ___str0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void LiteNetLib.NetSocket::OnErrorRestore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocket_OnErrorRestore_m4506FB47F592D216DA4B47BC1F5374A1BD20927B (NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Layers.PacketLayerBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketLayerBase__ctor_m4B4B991268B7002613D87B4F89C32DDF1EB8B15D (PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 * __this, int32_t ___extraPacketSizeForLayer0, const RuntimeMethod* method);
// System.Void LiteNetLib.Layers.XorEncryptLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m303FFC4FF9E950CCE6EC7B7748189A4B224A3421 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Layers.XorEncryptLayer::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mA4E094228ADBF00C6BA26748A97B00EADE91CCC5 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, const RuntimeMethod* method);
// System.Void LiteNetLib.Layers.XorEncryptLayer::SetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mA9AC7216AEB12BDE6CB2CB53A7FB7F6E89107A72 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::.ctor(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator__ctor_m568BA319F150982FAEE33AB83D316478847F889A (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___p0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator_Dispose_m7E6D5D5394C3E012BEAF83848EA9B585F33FA007 (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method);
// System.Boolean LiteNetLib.NetManager/NetPeerEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetPeerEnumerator_MoveNext_m79FF2EA6ECB9CFB57CBB86064B843AC460B24BEE (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863 (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method);
// LiteNetLib.NetPeer LiteNetLib.NetManager/NetPeerEnumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * NetPeerEnumerator_get_Current_mD6AEBA4B933167111CB6E1E89CBED9E3A9F148C6_inline (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method);
// System.Object LiteNetLib.NetManager/NetPeerEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * NetPeerEnumerator_System_Collections_IEnumerator_get_Current_m4AA282EA22359278EBB804F0A80EA29A3AF9DCEA_inline (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method);
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mCD21CDBE273387A21683B6C00EF5EBEEFF7A8F6D (uint16_t* __this, const RuntimeMethod* method);
// System.String LiteNetLib.ReliableChannel/PendingPacket::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PendingPacket_ToString_m5462F21A93AF26F33E7D4FCA7321844CD096D3F3 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.NetPeer::RecycleAndDeliver(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeer_RecycleAndDeliver_mF5E3FAFAA0C3F3E1DA1853C4F245D46F7AA3723E (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m193FFB5D72BAD874770735AB3B1D4BC645B7A4B5_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, uint64_t ___data2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL recvfrom(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL sendto(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 LiteNetLib.NetStatistics::get_PacketsSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketsSent_mD45A2B743A7AD2D42690D6140E9B8AD4EC864FA0 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// public long PacketsSent => Interlocked.Read(ref _packetsSent);
		int64_t* L_0 = __this->get_address_of__packetsSent_0();
		int64_t L_1;
		L_1 = Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 LiteNetLib.NetStatistics::get_PacketsReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketsReceived_m1EB10406FFCBB5199B46FE4B6FF94B4213F3090C (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// public long PacketsReceived => Interlocked.Read(ref _packetsReceived);
		int64_t* L_0 = __this->get_address_of__packetsReceived_1();
		int64_t L_1;
		L_1 = Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 LiteNetLib.NetStatistics::get_BytesSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_BytesSent_m60FC33AC74449F8E36FF2065AF2B51AAF56FBDE4 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesSent => Interlocked.Read(ref _bytesSent);
		int64_t* L_0 = __this->get_address_of__bytesSent_2();
		int64_t L_1;
		L_1 = Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 LiteNetLib.NetStatistics::get_BytesReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_BytesReceived_mD08EB24924F63D0C21024311D4256CBB46D23E56 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesReceived => Interlocked.Read(ref _bytesReceived);
		int64_t* L_0 = __this->get_address_of__bytesReceived_3();
		int64_t L_1;
		L_1 = Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 LiteNetLib.NetStatistics::get_PacketLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketLoss_mEEE952C1C6F4AFFFF39E451E43D7DC8E8106386E (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// public long PacketLoss => Interlocked.Read(ref _packetLoss);
		int64_t* L_0 = __this->get_address_of__packetLoss_4();
		int64_t L_1;
		L_1 = Interlocked_Read_mBFC0A4421F88CFC8CC0D04735B6FDD38C9C0CE7A((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 LiteNetLib.NetStatistics::get_PacketLossPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetStatistics_get_PacketLossPercent_m8AFD9D230C61981A3C0A49B5BF520DB680E5B95D (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// long sent = PacketsSent, loss = PacketLoss;
		int64_t L_0;
		L_0 = NetStatistics_get_PacketsSent_mD45A2B743A7AD2D42690D6140E9B8AD4EC864FA0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// long sent = PacketsSent, loss = PacketLoss;
		int64_t L_1;
		L_1 = NetStatistics_get_PacketLoss_mEEE952C1C6F4AFFFF39E451E43D7DC8E8106386E(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// return sent == 0 ? 0 : loss * 100 / sent;
		int64_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int64_t L_3 = V_1;
		int64_t L_4 = V_0;
		return ((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)((int32_t)100)))))/(int64_t)L_4));
	}

IL_0019:
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void LiteNetLib.NetStatistics::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_Reset_m6DCB79B4F9CFC761AFB967BDFE6554129EA172C9 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// Interlocked.Exchange(ref _packetsSent, 0);
		int64_t* L_0 = __this->get_address_of__packetsSent_0();
		int64_t L_1;
		L_1 = Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF((int64_t*)L_0, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// Interlocked.Exchange(ref _packetsReceived, 0);
		int64_t* L_2 = __this->get_address_of__packetsReceived_1();
		int64_t L_3;
		L_3 = Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF((int64_t*)L_2, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// Interlocked.Exchange(ref _bytesSent, 0);
		int64_t* L_4 = __this->get_address_of__bytesSent_2();
		int64_t L_5;
		L_5 = Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF((int64_t*)L_4, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// Interlocked.Exchange(ref _bytesReceived, 0);
		int64_t* L_6 = __this->get_address_of__bytesReceived_3();
		int64_t L_7;
		L_7 = Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF((int64_t*)L_6, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// Interlocked.Exchange(ref _packetLoss, 0);
		int64_t* L_8 = __this->get_address_of__packetLoss_4();
		int64_t L_9;
		L_9 = Interlocked_Exchange_m27AE4B51786B02DDFC140D70BD18E980BADA80EF((int64_t*)L_8, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::IncrementPacketsSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_IncrementPacketsSent_mE773F05FAAB70B287F50D508417B0354B29B1423 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// Interlocked.Increment(ref _packetsSent);
		int64_t* L_0 = __this->get_address_of__packetsSent_0();
		int64_t L_1;
		L_1 = Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B((int64_t*)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::IncrementPacketsReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_IncrementPacketsReceived_m202EA692583283D696FDBDB41E93C12BD11C4D5F (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// Interlocked.Increment(ref _packetsReceived);
		int64_t* L_0 = __this->get_address_of__packetsReceived_1();
		int64_t L_1;
		L_1 = Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B((int64_t*)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::AddBytesSent(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_AddBytesSent_mB39DD822C0F1DA6C3B69B9584A79E8C99A1B474D (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, int64_t ___bytesSent0, const RuntimeMethod* method)
{
	{
		// Interlocked.Add(ref _bytesSent, bytesSent);
		int64_t* L_0 = __this->get_address_of__bytesSent_2();
		int64_t L_1 = ___bytesSent0;
		int64_t L_2;
		L_2 = Interlocked_Add_m18AE0DFA0EFDBA489FB069BE464E81A6DF9B0AF2((int64_t*)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::AddBytesReceived(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_AddBytesReceived_mFCCD6664F7BEF2C89501CF3234406977DAC61C12 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, int64_t ___bytesReceived0, const RuntimeMethod* method)
{
	{
		// Interlocked.Add(ref _bytesReceived, bytesReceived);
		int64_t* L_0 = __this->get_address_of__bytesReceived_3();
		int64_t L_1 = ___bytesReceived0;
		int64_t L_2;
		L_2 = Interlocked_Add_m18AE0DFA0EFDBA489FB069BE464E81A6DF9B0AF2((int64_t*)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::IncrementPacketLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_IncrementPacketLoss_m3DEB611494E87B086B689085747EA66049BAA411 (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	{
		// Interlocked.Increment(ref _packetLoss);
		int64_t* L_0 = __this->get_address_of__packetLoss_4();
		int64_t L_1;
		L_1 = Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B((int64_t*)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.NetStatistics::AddPacketLoss(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics_AddPacketLoss_m8C5F67E2A2DC65040CF0D03E915B49C4DEC67A5E (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, int64_t ___packetLoss0, const RuntimeMethod* method)
{
	{
		// Interlocked.Add(ref _packetLoss, packetLoss);
		int64_t* L_0 = __this->get_address_of__packetLoss_4();
		int64_t L_1 = ___packetLoss0;
		int64_t L_2;
		L_2 = Interlocked_Add_m18AE0DFA0EFDBA489FB069BE464E81A6DF9B0AF2((int64_t*)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String LiteNetLib.NetStatistics::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetStatistics_ToString_m055FBB35401DE344FD539A396984A66A6780454C (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA333AC28D289B0B3DAAF2AF1E2CD4188F6ACF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     string.Format(
		//         "BytesReceived: {0}\nPacketsReceived: {1}\nBytesSent: {2}\nPacketsSent: {3}\nPacketLoss: {4}\nPacketLossPercent: {5}\n",
		//         BytesReceived,
		//         PacketsReceived,
		//         BytesSent,
		//         PacketsSent,
		//         PacketLoss,
		//         PacketLossPercent);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int64_t L_2;
		L_2 = NetStatistics_get_BytesReceived_mD08EB24924F63D0C21024311D4256CBB46D23E56(__this, /*hidden argument*/NULL);
		int64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int64_t L_6;
		L_6 = NetStatistics_get_PacketsReceived_m1EB10406FFCBB5199B46FE4B6FF94B4213F3090C(__this, /*hidden argument*/NULL);
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int64_t L_10;
		L_10 = NetStatistics_get_BytesSent_m60FC33AC74449F8E36FF2065AF2B51AAF56FBDE4(__this, /*hidden argument*/NULL);
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int64_t L_14;
		L_14 = NetStatistics_get_PacketsSent_mD45A2B743A7AD2D42690D6140E9B8AD4EC864FA0(__this, /*hidden argument*/NULL);
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int64_t L_18;
		L_18 = NetStatistics_get_PacketLoss_mEEE952C1C6F4AFFFF39E451E43D7DC8E8106386E(__this, /*hidden argument*/NULL);
		int64_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		int64_t L_22;
		L_22 = NetStatistics_get_PacketLossPercent_m8AFD9D230C61981A3C0A49B5BF520DB680E5B95D(__this, /*hidden argument*/NULL);
		int64_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		String_t* L_25;
		L_25 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral1DA333AC28D289B0B3DAAF2AF1E2CD4188F6ACF2, L_21, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void LiteNetLib.NetStatistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatistics__ctor_m5BDDA8577D4ED7766FB00C46B1C8A0EA2EF740AA (NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * __this, const RuntimeMethod* method)
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
// System.Net.IPEndPoint LiteNetLib.NetUtils::MakeEndPoint(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NetUtils_MakeEndPoint_m7602E8DC184F2E080AE92AC3363284CD3A454E17 (String_t* ___hostStr0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new IPEndPoint(ResolveAddress(hostStr), port);
		String_t* L_0 = ___hostStr0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_1;
		L_1 = NetUtils_ResolveAddress_mCCA97866D03534089846A64A54BFE426322BED1D(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___port1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_3 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Net.IPAddress LiteNetLib.NetUtils::ResolveAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * NetUtils_ResolveAddress_mCCA97866D03534089846A64A54BFE426322BED1D (String_t* ___hostStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_0 = NULL;
	{
		// if(hostStr == "localhost")
		String_t* L_0 = ___hostStr0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return IPAddress.Loopback;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_Loopback_1();
		return L_2;
	}

IL_0013:
	{
		// if (!IPAddress.TryParse(hostStr, out var ipAddress))
		String_t* L_3 = ___hostStr0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E(L_3, (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE **)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// if (NetSocket.IPv6Support)
		IL2CPP_RUNTIME_CLASS_INIT(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_il2cpp_TypeInfo_var);
		bool L_5 = ((NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_StaticFields*)il2cpp_codegen_static_fields_for(NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58_il2cpp_TypeInfo_var))->get_IPv6Support_14();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// ipAddress = ResolveAddress(hostStr, AddressFamily.InterNetworkV6);
		String_t* L_6 = ___hostStr0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7;
		L_7 = NetUtils_ResolveAddress_m67E8BCB872C1DDFE6B1D8F5165189F5CAFBFF660(L_6, ((int32_t)23), /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002d:
	{
		// if (ipAddress == null)
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_8 = V_0;
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		// ipAddress = ResolveAddress(hostStr, AddressFamily.InterNetwork);
		String_t* L_9 = ___hostStr0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10;
		L_10 = NetUtils_ResolveAddress_m67E8BCB872C1DDFE6B1D8F5165189F5CAFBFF660(L_9, 2, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0038:
	{
		// if (ipAddress == null)
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_11 = V_0;
		if (L_11)
		{
			goto IL_004c;
		}
	}
	{
		// throw new ArgumentException("Invalid address: " + hostStr);
		String_t* L_12 = ___hostStr0;
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDCAEAC0EC16DAB2B94EB8085B3301CCA8654423)), L_12, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetUtils_ResolveAddress_mCCA97866D03534089846A64A54BFE426322BED1D_RuntimeMethod_var)));
	}

IL_004c:
	{
		// return ipAddress;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_15 = V_0;
		return L_15;
	}
}
// System.Net.IPAddress LiteNetLib.NetUtils::ResolveAddress(System.String,System.Net.Sockets.AddressFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * NetUtils_ResolveAddress_m67E8BCB872C1DDFE6B1D8F5165189F5CAFBFF660 (String_t* ___hostStr0, int32_t ___addressFamily1, const RuntimeMethod* method)
{
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	int32_t V_1 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_2 = NULL;
	{
		// IPAddress[] addresses = Dns.GetHostEntry(hostStr).AddressList;
		String_t* L_0 = ___hostStr0;
		IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * L_1;
		L_1 = Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2;
		L_2 = IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline(L_1, /*hidden argument*/NULL);
		// foreach (IPAddress ip in addresses)
		V_0 = L_2;
		V_1 = 0;
		goto IL_0023;
	}

IL_0010:
	{
		// foreach (IPAddress ip in addresses)
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (ip.AddressFamily == addressFamily)
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___addressFamily1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_001f;
		}
	}
	{
		// return ip;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10 = V_2;
		return L_10;
	}

IL_001f:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0023:
	{
		// foreach (IPAddress ip in addresses)
		int32_t L_12 = V_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE *)NULL;
	}
}
// System.Collections.Generic.List`1<System.String> LiteNetLib.NetUtils::GetLocalIpList(LiteNetLib.LocalAddrType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * NetUtils_GetLocalIpList_mB0D1BB0185B8E765E69D5410EFBEBF9CB5A1C602 (int32_t ___addrType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<string> targetList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		// GetLocalIpList(targetList, addrType);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0;
		int32_t L_2 = ___addrType0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		NetUtils_GetLocalIpList_m157331556CA29CBD6782328B30C604C3005A6F9D(L_1, L_2, /*hidden argument*/NULL);
		// return targetList;
		return L_1;
	}
}
// System.Void LiteNetLib.NetUtils::GetLocalIpList(System.Collections.Generic.IList`1<System.String>,LiteNetLib.LocalAddrType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetUtils_GetLocalIpList_m157331556CA29CBD6782328B30C604C3005A6F9D (RuntimeObject* ___targetList0, int32_t ___addrType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3CAF9F1A7A27CCA8612D71B41B4C459F455F5D7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6474EBE79D288AAD27635D1581EA921D28D400BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* V_2 = NULL;
	int32_t V_3 = 0;
	NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * V_4 = NULL;
	IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_7 = NULL;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_8 = NULL;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// bool ipv4 = (addrType & LocalAddrType.IPv4) == LocalAddrType.IPv4;
		int32_t L_0 = ___addrType1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		// bool ipv6 = (addrType & LocalAddrType.IPv6) == LocalAddrType.IPv6;
		int32_t L_1 = ___addrType1;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)2))) == ((int32_t)2))? 1 : 0);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_2;
			L_2 = NetworkInterface_GetAllNetworkInterfaces_mC0EF91AC837841CDC0ED9E040745F215079235B1(/*hidden argument*/NULL);
			V_2 = L_2;
			V_3 = 0;
			goto IL_00ad;
		}

IL_001b:
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_3 = V_2;
			int32_t L_4 = V_3;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_4 = L_6;
			// if (ni.NetworkInterfaceType == NetworkInterfaceType.Loopback ||
			//     ni.OperationalStatus != OperationalStatus.Up)
			NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_7 = V_4;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_7);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)24))))
			{
				goto IL_00a9;
			}
		}

IL_002b:
		{
			NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_9 = V_4;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_00a9;
			}
		}

IL_0035:
		{
			// var ipProps = ni.GetIPProperties();
			NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_11 = V_4;
			NullCheck(L_11);
			IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * L_12;
			L_12 = VirtFuncInvoker0< IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * >::Invoke(5 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_11);
			V_5 = L_12;
			// if (ipProps.GatewayAddresses.Count == 0)
			IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * L_13 = V_5;
			NullCheck(L_13);
			GatewayIPAddressInformationCollection_tBDC10C4DDCA6274C2112B907A324D8C2DC6F856C * L_14;
			L_14 = VirtFuncInvoker0< GatewayIPAddressInformationCollection_tBDC10C4DDCA6274C2112B907A324D8C2DC6F856C * >::Invoke(5 /* System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_GatewayAddresses() */, L_13);
			NullCheck(L_14);
			int32_t L_15;
			L_15 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Net.NetworkInformation.GatewayIPAddressInformationCollection::get_Count() */, L_14);
			if (!L_15)
			{
				goto IL_00a9;
			}
		}

IL_004c:
		{
			// foreach (UnicastIPAddressInformation ip in ipProps.UnicastAddresses)
			IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * L_16 = V_5;
			NullCheck(L_16);
			UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF * L_17;
			L_17 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_16);
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_17);
			V_6 = L_18;
		}

IL_005a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0092;
			}

IL_005c:
			{
				// foreach (UnicastIPAddressInformation ip in ipProps.UnicastAddresses)
				RuntimeObject* L_19 = V_6;
				NullCheck(L_19);
				UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * L_20;
				L_20 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t3CAF9F1A7A27CCA8612D71B41B4C459F455F5D7F_il2cpp_TypeInfo_var, L_19);
				// var address = ip.Address;
				NullCheck(L_20);
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_21;
				L_21 = VirtFuncInvoker0< IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_20);
				V_7 = L_21;
				// if ((ipv4 && address.AddressFamily == AddressFamily.InterNetwork) ||
				//     (ipv6 && address.AddressFamily == AddressFamily.InterNetworkV6))
				bool L_22 = V_0;
				if (!L_22)
				{
					goto IL_0077;
				}
			}

IL_006d:
			{
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_23 = V_7;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_23, /*hidden argument*/NULL);
				if ((((int32_t)L_24) == ((int32_t)2)))
				{
					goto IL_0085;
				}
			}

IL_0077:
			{
				bool L_25 = V_1;
				if (!L_25)
				{
					goto IL_0092;
				}
			}

IL_007a:
			{
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_26 = V_7;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_26, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)23)))))
				{
					goto IL_0092;
				}
			}

IL_0085:
			{
				// targetList.Add(address.ToString());
				RuntimeObject* L_28 = ___targetList0;
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_29 = V_7;
				NullCheck(L_29);
				String_t* L_30;
				L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
				NullCheck(L_28);
				InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_28, L_30);
			}

IL_0092:
			{
				// foreach (UnicastIPAddressInformation ip in ipProps.UnicastAddresses)
				RuntimeObject* L_31 = V_6;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_005c;
				}
			}

IL_009b:
			{
				IL2CPP_LEAVE(0xA9, FINALLY_009d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009d;
		}

FINALLY_009d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_33 = V_6;
				if (!L_33)
				{
					goto IL_00a8;
				}
			}

IL_00a1:
			{
				RuntimeObject* L_34 = V_6;
				NullCheck(L_34);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_34);
			}

IL_00a8:
			{
				IL2CPP_END_FINALLY(157)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(157)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		}

IL_00a9:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		}

IL_00ad:
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			int32_t L_36 = V_3;
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_37 = V_2;
			NullCheck(L_37);
			if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
			{
				goto IL_001b;
			}
		}

IL_00b6:
		{
			// }
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b8;
		}
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		// if (targetList.Count == 0)
		RuntimeObject* L_38 = ___targetList0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_38);
		if (L_39)
		{
			goto IL_0111;
		}
	}
	{
		// IPAddress[] addresses = Dns.GetHostEntry(Dns.GetHostName()).AddressList;
		String_t* L_40;
		L_40 = Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706(/*hidden argument*/NULL);
		IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * L_41;
		L_41 = Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_42;
		L_42 = IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline(L_41, /*hidden argument*/NULL);
		// foreach (IPAddress ip in addresses)
		V_8 = L_42;
		V_3 = 0;
		goto IL_010a;
	}

IL_00d8:
	{
		// foreach (IPAddress ip in addresses)
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_43 = V_8;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_9 = L_46;
		// if((ipv4 && ip.AddressFamily == AddressFamily.InterNetwork) ||
		//    (ipv6 && ip.AddressFamily == AddressFamily.InterNetworkV6))
		bool L_47 = V_0;
		if (!L_47)
		{
			goto IL_00eb;
		}
	}
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_48 = V_9;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_48, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)2)))
		{
			goto IL_00f9;
		}
	}

IL_00eb:
	{
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_0106;
		}
	}
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_51 = V_9;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_51, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0106;
		}
	}

IL_00f9:
	{
		// targetList.Add(ip.ToString());
		RuntimeObject* L_53 = ___targetList0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_54 = V_9;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		NullCheck(L_53);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_53, L_55);
	}

IL_0106:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_010a:
	{
		// foreach (IPAddress ip in addresses)
		int32_t L_57 = V_3;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_58 = V_8;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_00d8;
		}
	}

IL_0111:
	{
		// if (targetList.Count == 0)
		RuntimeObject* L_59 = ___targetList0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_59);
		if (L_60)
		{
			goto IL_0135;
		}
	}
	{
		// if(ipv4)
		bool L_61 = V_0;
		if (!L_61)
		{
			goto IL_0127;
		}
	}
	{
		// targetList.Add("127.0.0.1");
		RuntimeObject* L_62 = ___targetList0;
		NullCheck(L_62);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_62, _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
	}

IL_0127:
	{
		// if(ipv6)
		bool L_63 = V_1;
		if (!L_63)
		{
			goto IL_0135;
		}
	}
	{
		// targetList.Add("::1");
		RuntimeObject* L_64 = ___targetList0;
		NullCheck(L_64);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_64, _stringLiteral6474EBE79D288AAD27635D1581EA921D28D400BC);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.String LiteNetLib.NetUtils::GetLocalIp(LiteNetLib.LocalAddrType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetUtils_GetLocalIp_m721B8B34CA4FD8E2DC78C7C632C415924CAB7D72 (int32_t ___addrType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B4_0 = NULL;
	{
		// lock (IpList)
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->get_IpList_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// IpList.Clear();
			IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = ((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->get_IpList_0();
			NullCheck(L_2);
			List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_2, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
			// GetLocalIpList(IpList, addrType);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = ((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->get_IpList_0();
			int32_t L_4 = ___addrType0;
			NetUtils_GetLocalIpList_m157331556CA29CBD6782328B30C604C3005A6F9D(L_3, L_4, /*hidden argument*/NULL);
			// return IpList.Count == 0 ? string.Empty : IpList[0];
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = ((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->get_IpList_0();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_5, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_003e;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = ((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->get_IpList_0();
			NullCheck(L_7);
			String_t* L_8;
			L_8 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_7, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			G_B4_0 = L_8;
			goto IL_0043;
		}

IL_003e:
		{
			String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			G_B4_0 = L_9;
		}

IL_0043:
		{
			V_2 = G_B4_0;
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Void LiteNetLib.NetUtils::PrintInterfaceInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetUtils_PrintInterfaceInfos_m320C84EF0640BC0049C182DB851E54E55A752B6B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3CAF9F1A7A27CCA8612D71B41B4C459F455F5D7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_0;
			L_0 = NetworkInterface_GetAllNetworkInterfaces_mC0EF91AC837841CDC0ED9E040745F215079235B1(/*hidden argument*/NULL);
			V_0 = L_0;
			V_1 = 0;
			goto IL_005b;
		}

IL_000a:
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_1 = V_0;
			int32_t L_2 = V_1;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			// foreach (UnicastIPAddressInformation ip in ni.GetIPProperties().UnicastAddresses)
			NullCheck(L_4);
			IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * L_5;
			L_5 = VirtFuncInvoker0< IPInterfaceProperties_t5A3B96DA9D1A76F86DC1DB3020A6C16900FDE9FD * >::Invoke(5 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_4);
			NullCheck(L_5);
			UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF * L_6;
			L_6 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_t15AF157DAE9E3867DB3D9472526A0FC229578FBF * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_5);
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_6);
			V_2 = L_7;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0043;
			}

IL_001f:
			{
				// foreach (UnicastIPAddressInformation ip in ni.GetIPProperties().UnicastAddresses)
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * L_9;
				L_9 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t3CAF9F1A7A27CCA8612D71B41B4C459F455F5D7F_il2cpp_TypeInfo_var, L_8);
				V_3 = L_9;
				// if (ip.Address.AddressFamily == AddressFamily.InterNetwork ||
				//     ip.Address.AddressFamily == AddressFamily.InterNetworkV6)
				UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * L_10 = V_3;
				NullCheck(L_10);
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_11;
				L_11 = VirtFuncInvoker0< IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_10);
				NullCheck(L_11);
				int32_t L_12;
				L_12 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_11, /*hidden argument*/NULL);
				if ((((int32_t)L_12) == ((int32_t)2)))
				{
					goto IL_0043;
				}
			}

IL_0034:
			{
				UnicastIPAddressInformation_tD8970655AAA456A5DBA000CC18F17F33F89C86CB * L_13 = V_3;
				NullCheck(L_13);
				IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_14;
				L_14 = VirtFuncInvoker0< IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_13);
				NullCheck(L_14);
				int32_t L_15;
				L_15 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_14, /*hidden argument*/NULL);
			}

IL_0043:
			{
				// foreach (UnicastIPAddressInformation ip in ni.GetIPProperties().UnicastAddresses)
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_001f;
				}
			}

IL_004b:
			{
				IL2CPP_LEAVE(0x57, FINALLY_004d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004d;
		}

FINALLY_004d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_18 = V_2;
				if (!L_18)
				{
					goto IL_0056;
				}
			}

IL_0050:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0056:
			{
				IL2CPP_END_FINALLY(77)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(77)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x57, IL_0057)
		}

IL_0057:
		{
			int32_t L_20 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		}

IL_005b:
		{
			// foreach (NetworkInterface ni in NetworkInterface.GetAllNetworkInterfaces())
			int32_t L_21 = V_1;
			NetworkInterfaceU5BU5D_t3FBA31630FA64990195C96E0ED0D8B2395D750CC* L_22 = V_0;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
			{
				goto IL_000a;
			}
		}

IL_0061:
		{
			// }
			goto IL_0066;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0066;
	} // end catch (depth: 1)

IL_0066:
	{
		// }
		return;
	}
}
// System.Int32 LiteNetLib.NetUtils::RelativeSequenceNumber(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507 (int32_t ___number0, int32_t ___expected1, const RuntimeMethod* method)
{
	{
		// return (number - expected + NetConstants.MaxSequence + NetConstants.HalfMaxSequence) % NetConstants.MaxSequence - NetConstants.HalfMaxSequence;
		int32_t L_0 = ___number0;
		int32_t L_1 = ___expected1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)32768))), (int32_t)((int32_t)16384)))%(int32_t)((int32_t)32768))), (int32_t)((int32_t)16384)));
	}
}
// System.Void LiteNetLib.NetUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetUtils__cctor_m5A1CEC32243272F19906ECC541BEC2302A1E4B60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<string> IpList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		((NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_StaticFields*)il2cpp_codegen_static_fields_for(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var))->set_IpList_0(L_0);
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
// System.Byte[] LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Bytes { get; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CBytesU3Ek__BackingField_1();
		return L_0;
	}
}
// LiteNetLib.Utils.NtpLeapIndicator LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_mE78460DC4E89D5F99C29FFF6583BAB942CF3577E (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public NtpLeapIndicator LeapIndicator => (NtpLeapIndicator)((Bytes[0] & 0xC0) >> 6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)))>>(int32_t)6)));
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m237046FC4C5E60BA031A9CC381A79A87EB91777F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// get => (Bytes[0] & 0x38) >> 3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)56)))>>(int32_t)3));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_m32BE8A579D678CC3D43305FB4D8877A469B137BB (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set => Bytes[0] = (byte)((Bytes[0] & ~0x38) | value << 3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-57)))|(int32_t)((int32_t)((int32_t)L_4<<(int32_t)3)))))));
		return;
	}
}
// LiteNetLib.Utils.NtpMode LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_mA7FBE4FBFC6BCD414B12BBB74270CDEE1A376FCE (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// get => (NtpMode)(Bytes[0] & 0x07);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)((int32_t)L_2&(int32_t)7)));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_Mode(LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m1CF58B95231BF47DAA49EBB1864FA21757B26B64 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set => Bytes[0] = (byte)((Bytes[0] & ~0x07) | (int)value);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-8)))|(int32_t)L_4)))));
		return;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_m21EFCFBFED3956809322A858F69D884F4B81A54D (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public int Stratum => Bytes[1];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 1;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Poll_m289CD4F41FB21389C7449BFD6E187C5C93546BDF (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public int Poll => Bytes[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Precision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Precision_m967D9AB85306ED13A45A5BC78CA00772D804BCF7 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public int Precision => (sbyte)Bytes[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 3;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int8_t)((int8_t)L_2));
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RootDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_get_RootDelay_m2B161D8DA6E1D1831AA8FBBA5E0B307A07C13718 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public TimeSpan RootDelay => GetTimeSpan32(4);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		L_0 = NtpPacket_GetTimeSpan32_m51BE3B9C83FBBA832834C2B8471DAC26A3512D11(__this, 4, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RootDispersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_get_RootDispersion_m22F5A5256BE190D5F8C31DC5690DA7558B782710 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public TimeSpan RootDispersion => GetTimeSpan32(8);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		L_0 = NtpPacket_GetTimeSpan32_m51BE3B9C83FBBA832834C2B8471DAC26A3512D11(__this, 8, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_m087B3907088BA07F1801A9630CB067E18DDEDD61 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public uint ReferenceId => GetUInt32BE(12);
		uint32_t L_0;
		L_0 = NtpPacket_GetUInt32BE_m8BA53FC67B4E07CD1176F13063778180879E0BA7(__this, ((int32_t)12), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReferenceTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_ReferenceTimestamp_mD64F07452A2DFF31C476D6EEE0A1EB4F3053121F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ReferenceTimestamp => GetDateTime64(16);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646(__this, ((int32_t)16), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_OriginTimestamp_mDAA20B0AD8E38C4C28848B8CA0E5B4980CFDFB7D (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? OriginTimestamp => GetDateTime64(24);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646(__this, ((int32_t)24), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_ReceiveTimestamp_mA64637A61FD79F52F8881C4C75C855A1CD4749DB (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ReceiveTimestamp => GetDateTime64(32);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646(__this, ((int32_t)32), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646(__this, ((int32_t)40), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_m4864C5EFC3E31B31A9CDD37C0A337ABC1EE586B8 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		NtpPacket_SetDateTime64_m1FB333C610A80437E1FE8C4492D8E282A766AD1F(__this, ((int32_t)40), L_0, /*hidden argument*/NULL);
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		return;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CDestinationTimestampU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_m7892C379763FB79666F67C4475E8317F70810AC9 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CDestinationTimestampU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_get_RoundTripTime_mC751EDD87ED1079E0E88BCDBEC0EC201CFB5D19D (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F(__this, /*hidden argument*/NULL);
		// return (ReceiveTimestamp.Value - OriginTimestamp.Value) + (DestinationTimestamp.Value - TransmitTimestamp.Value);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_get_ReceiveTimestamp_mA64637A61FD79F52F8881C4C75C855A1CD4749DB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_2;
		L_2 = NtpPacket_get_OriginTimestamp_mDAA20B0AD8E38C4C28848B8CA0E5B4980CFDFB7D(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4;
		L_4 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_1, L_3, /*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_5;
		L_5 = NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559_inline(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
		L_6 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_7;
		L_7 = NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_9;
		L_9 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10;
		L_10 = TimeSpan_op_Addition_mBF0190F67F6882232A9E20DDB5F0ACF25D2F6327(L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_CorrectionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_get_CorrectionOffset_mEB28E4E2791801ECF139CB6D69EB6C4411F6EE25 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F(__this, /*hidden argument*/NULL);
		// return TimeSpan.FromTicks(((ReceiveTimestamp.Value - OriginTimestamp.Value) - (DestinationTimestamp.Value - TransmitTimestamp.Value)).Ticks / 2);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_get_ReceiveTimestamp_mA64637A61FD79F52F8881C4C75C855A1CD4749DB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_2;
		L_2 = NtpPacket_get_OriginTimestamp_mDAA20B0AD8E38C4C28848B8CA0E5B4980CFDFB7D(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4;
		L_4 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_1, L_3, /*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_5;
		L_5 = NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559_inline(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
		L_6 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_7;
		L_7 = NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_9;
		L_9 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10;
		L_10 = TimeSpan_op_Subtraction_mA4ACA1A4349FA026D9F3DE12E4E1DC180832CA62(L_4, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int64_t L_11;
		L_11 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_12;
		L_12 = TimeSpan_FromTicks_m25E4ADCCCC583B8D5A08B77577DE8E46CEBF7F9C(((int64_t)((int64_t)L_11/(int64_t)((int64_t)((int64_t)2)))), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_mB4A0FFC1CC04D7DFC687EA803474BF2260A6B168 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NtpPacket() : this(new byte[48])
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839(__this, L_0, /*hidden argument*/NULL);
		// Mode = NtpMode.Client;
		NtpPacket_set_Mode_m1CF58B95231BF47DAA49EBB1864FA21757B26B64(__this, 3, /*hidden argument*/NULL);
		// VersionNumber = 4;
		NtpPacket_set_VersionNumber_m32BE8A579D678CC3D43305FB4D8877A469B137BB(__this, 4, /*hidden argument*/NULL);
		// TransmitTimestamp = DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		NtpPacket_set_TransmitTimestamp_m4864C5EFC3E31B31A9CDD37C0A337ABC1EE586B8(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		// internal NtpPacket(byte[] bytes)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (bytes.Length < 48)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("SNTP reply packet must be at least 48 bytes long.", "bytes");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A616A2BD726354344808434F427B73FA98BDD24)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839_RuntimeMethod_var)));
	}

IL_001d:
	{
		// Bytes = bytes;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		__this->set_U3CBytesU3Ek__BackingField_1(L_2);
		// }
		return;
	}
}
// LiteNetLib.Utils.NtpPacket LiteNetLib.Utils.NtpPacket::FromServerResponse(System.Byte[],System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * NtpPacket_FromServerResponse_m21D9AED7053FA904F79D0EEE3C5F96555C1AF793 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___destinationTimestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NtpPacket(bytes) { DestinationTimestamp = destinationTimestamp };
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_1 = (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *)il2cpp_codegen_object_new(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		NtpPacket__ctor_m27F5E634057F4EEE68E0213AE6583E481C9CF839(L_1, L_0, /*hidden argument*/NULL);
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_2 = L_1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = ___destinationTimestamp1;
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		NullCheck(L_2);
		NtpPacket_set_DestinationTimestamp_m7892C379763FB79666F67C4475E8317F70810AC9_inline(L_2, L_4, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::ValidateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateRequest_m0B433CCD667784DC829DC5EB687DEA9FD13F2C4F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mode != NtpMode.Client)
		int32_t L_0;
		L_0 = NtpPacket_get_Mode_mA7FBE4FBFC6BCD414B12BBB74270CDEE1A376FCE(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a request SNTP packet.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9FFA609F3AF81CBA0BEF31B92E98F7C0B64DA06)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m0B433CCD667784DC829DC5EB687DEA9FD13F2C4F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2;
		L_2 = NtpPacket_get_VersionNumber_m237046FC4C5E60BA031A9CC381A79A87EB91777F(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the request is not specified.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral868EE9733DC26168EACBAC88A44D9E3DE178486F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m0B433CCD667784DC829DC5EB687DEA9FD13F2C4F_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_4;
		L_4 = NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// throw new InvalidOperationException("TransmitTimestamp must be set in request packet.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC90CADE37127E5B15A609569628F61937A864B5A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m0B433CCD667784DC829DC5EB687DEA9FD13F2C4F_RuntimeMethod_var)));
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::ValidateReply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// if (Mode != NtpMode.Server)
		int32_t L_0;
		L_0 = NtpPacket_get_Mode_mA7FBE4FBFC6BCD414B12BBB74270CDEE1A376FCE(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a reply SNTP packet.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06C05B24B8AC51D50C3AA294D70C5E1E28E9A0E3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2;
		L_2 = NtpPacket_get_VersionNumber_m237046FC4C5E60BA031A9CC381A79A87EB91777F(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the reply is not specified.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88F1D02FAC5553C102E3A23C9A363D07A9C89238)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (Stratum == 0)
		int32_t L_4;
		L_4 = NtpPacket_get_Stratum_m21EFCFBFED3956809322A858F69D884F4B81A54D(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException(string.Format("Received Kiss-o'-Death SNTP packet with code 0x{0:x}.", ReferenceId));
		uint32_t L_5;
		L_5 = NtpPacket_get_ReferenceId_m087B3907088BA07F1801A9630CB067E18DDEDD61(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10F509F15EC5C6178F7787F554341A601F904E65)), L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (LeapIndicator == NtpLeapIndicator.AlarmCondition)
		int32_t L_10;
		L_10 = NtpPacket_get_LeapIndicator_mE78460DC4E89D5F99C29FFF6583BAB942CF3577E(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_005e;
		}
	}
	{
		// throw new InvalidOperationException("SNTP server has unsynchronized clock.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB77237BCD39404C795BCB8688C2D3153355EBA0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_mD7DA9A1C55065B152443F9FE08D59548D4220B89_RuntimeMethod_var)));
	}

IL_005e:
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OriginTimestamp == null)
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0;
		L_0 = NtpPacket_get_OriginTimestamp_mDAA20B0AD8E38C4C28848B8CA0E5B4980CFDFB7D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new InvalidOperationException("Origin timestamp is missing.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF39AFC06F0127ED41BF2DBB29047355062D8065C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (ReceiveTimestamp == null)
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_3;
		L_3 = NtpPacket_get_ReceiveTimestamp_mA64637A61FD79F52F8881C4C75C855A1CD4749DB(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		// throw new InvalidOperationException("Receive timestamp is missing.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF62357F27A8ABD4B2897C89CFE2ABB3A9468CB41)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_6;
		L_6 = NtpPacket_get_TransmitTimestamp_m29D676B03BF21D8C245BEE10EA561D894C3BFD89(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		// throw new InvalidOperationException("Transmit timestamp is missing.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49BEFE76EF933CC018C51D77F66B724C36F2CE09)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F_RuntimeMethod_var)));
	}

IL_0051:
	{
		// if (DestinationTimestamp == null)
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_9;
		L_9 = NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559_inline(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		// throw new InvalidOperationException("Destination timestamp is missing.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B19916E896E08666992C24EA969EE6DE3B95722)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m738E5CFCE64240F50CB8C7F06CDB5809BBF5640F_RuntimeMethod_var)));
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_GetDateTime64_m76704ED777203529C26A727A1919C8B0A9668646 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var field = GetUInt64BE(offset);
		int32_t L_0 = ___offset0;
		uint64_t L_1;
		L_1 = NtpPacket_GetUInt64BE_m6EC9A74D55F4BB532379E926E036E2E2534B3D10(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (field == 0)
		uint64_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D ));
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_3 = V_1;
		return L_3;
	}

IL_0015:
	{
		// return new DateTime(Epoch.Ticks + Convert.ToInt64(field * (1.0 / (1L << 32) * 10000000.0)));
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = ((NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var))->get_Epoch_0();
		V_2 = L_4;
		int64_t L_5;
		L_5 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
		uint64_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = Convert_ToInt64_m72C3430B5EAFCA5952038A56340DAF4E5D8A2908(((double)il2cpp_codegen_multiply((double)((double)((double)((double)((uint64_t)L_6)))), (double)(0.0023283064365386963))), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		memset((&L_8), 0, sizeof(L_8));
		DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A((&L_8), ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)L_7)), /*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_m1FB333C610A80437E1FE8C4492D8E282A766AD1F (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * G_B1_1 = NULL;
	uint64_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * G_B3_2 = NULL;
	{
		// SetUInt64BE(offset, value == null ? 0 : Convert.ToUInt64((value.Value.Ticks - Epoch.Ticks) * (0.0000001 * (1L << 32))));
		int32_t L_0 = ___offset0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&___value1), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_003a;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&___value1), /*hidden argument*/Nullable_1_get_Value_m84CC7B59823D30F1B4764D9C087B0A1035E75ED7_RuntimeMethod_var);
		V_0 = L_2;
		int64_t L_3;
		L_3 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = ((NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var))->get_Epoch_0();
		V_0 = L_4;
		int64_t L_5;
		L_5 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_6;
		L_6 = Convert_ToUInt64_m43D8321B04B4743CBEE87E0FC9880168E0DF70D8(((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5)))), (double)(429.49672959999998))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003c;
	}

IL_003a:
	{
		G_B3_0 = ((uint64_t)(((int64_t)((int64_t)0))));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003c:
	{
		NullCheck(G_B3_2);
		NtpPacket_SetUInt64BE_m414A6F2B1E30F6158787B7898F1B295B18AC87A4(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  NtpPacket_GetTimeSpan32_m51BE3B9C83FBBA832834C2B8471DAC26A3512D11 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromSeconds(GetInt32BE(offset) / (double)(1 << 16));
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = NtpPacket_GetInt32BE_m31D7FB749D09C5B3DC96202836FB07F69A617E40(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(((double)((double)((double)((double)L_1))/(double)(65536.0))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt64 LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m6EC9A74D55F4BB532379E926E036E2E2534B3D10 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt64(Bytes, offset));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = NtpPacket_SwapEndianness_mFCA786B039D12A3082A186A0EA269426409635C2(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_m414A6F2B1E30F6158787B7898F1B295B18AC87A4 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FastBitConverter.GetBytes(Bytes, offset, SwapEndianness(value));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		uint64_t L_2 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = NtpPacket_SwapEndianness_mFCA786B039D12A3082A186A0EA269426409635C2(L_2, /*hidden argument*/NULL);
		FastBitConverter_GetBytes_mEFF8BC5659E2D1A39A1CF812FEADEA4CFD524577_inline(L_0, L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m31D7FB749D09C5B3DC96202836FB07F69A617E40 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// return (int)GetUInt32BE(offset);
		int32_t L_0 = ___offset0;
		uint32_t L_1;
		L_1 = NtpPacket_GetUInt32BE_m8BA53FC67B4E07CD1176F13063778180879E0BA7(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m8BA53FC67B4E07CD1176F13063778180879E0BA7 (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt32(Bytes, offset));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = BitConverter_ToUInt32_m0C9F3D9840110CC82D4C18FD882AC5C7EA595366(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = NtpPacket_SwapEndianness_m15624432A67AFFB982330B588F87042E157CB72A(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_m15624432A67AFFB982330B588F87042E157CB72A (uint32_t ___x0, const RuntimeMethod* method)
{
	{
		// return ((x & 0xff) << 24) | ((x & 0xff00) << 8) | ((x & 0xff0000) >> 8) | ((x & 0xff000000) >> 24);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))<<(int32_t)8))))|(int32_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)16711680)))>>8))))|(int32_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-16777216)))>>((int32_t)24)))));
	}
}
// System.UInt64 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_mFCA786B039D12A3082A186A0EA269426409635C2 (uint64_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((ulong)SwapEndianness((uint)x) << 32) | SwapEndianness((uint)(x >> 32));
		uint64_t L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = NtpPacket_SwapEndianness_m15624432A67AFFB982330B588F87042E157CB72A(((int32_t)((uint32_t)L_0)), /*hidden argument*/NULL);
		uint64_t L_2 = ___x0;
		uint32_t L_3;
		L_3 = NtpPacket_SwapEndianness_m15624432A67AFFB982330B588F87042E157CB72A(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), /*hidden argument*/NULL);
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)L_3))));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__cctor_m410579B7484E2550EEEDD883B9100F18E7A4B2C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime Epoch = new DateTime(1900, 1, 1);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m1AD9E79A671864DFB1AABDB75D207C688B868D88((&L_0), ((int32_t)1900), 1, 1, /*hidden argument*/NULL);
		((NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var))->set_Epoch_0(L_0);
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
// System.Void LiteNetLib.Utils.NtpRequest::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpRequest__ctor_mB2C24D4758B1A0730C08FB1854FCA6179C984E20 (NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, const RuntimeMethod* method)
{
	{
		// private int _resendTime = ResendTimer;
		__this->set__resendTime_4(((int32_t)1000));
		// public NtpRequest(IPEndPoint endPoint)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _ntpEndPoint = endPoint;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___endPoint0;
		__this->set__ntpEndPoint_3(L_0);
		// }
		return;
	}
}
// System.Boolean LiteNetLib.Utils.NtpRequest::get_NeedToKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_get_NeedToKill_m8DBC5F9DDC07BC9357A4F18733BBA03F917B41EE (NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31 * __this, const RuntimeMethod* method)
{
	{
		// public bool NeedToKill => _killTime >= KillTimer;
		int32_t L_0 = __this->get__killTime_5();
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)10000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LiteNetLib.Utils.NtpRequest::Send(LiteNetLib.NetSocket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_Send_mBAB4FDFE24BD74669F3D49CC75F06FC9406C129A (NtpRequest_t8EB77592991480EEAEF5B5197226692D90F58A31 * __this, NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * ___socket0, int32_t ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// _resendTime += time;
		int32_t L_0 = __this->get__resendTime_4();
		int32_t L_1 = ___time1;
		__this->set__resendTime_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// _killTime += time;
		int32_t L_2 = __this->get__killTime_5();
		int32_t L_3 = ___time1;
		__this->set__killTime_5(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// if (_resendTime < ResendTimer)
		int32_t L_4 = __this->get__resendTime_4();
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// SocketError errorCode = 0;
		V_0 = 0;
		// var packet = new NtpPacket();
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_5 = (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *)il2cpp_codegen_object_new(NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895_il2cpp_TypeInfo_var);
		NtpPacket__ctor_mB4A0FFC1CC04D7DFC687EA803474BF2260A6B168(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		// var sendCount = socket.SendTo(packet.Bytes, 0, packet.Bytes.Length, _ntpEndPoint, ref errorCode);
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_6 = ___socket0;
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(L_7, /*hidden argument*/NULL);
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_11 = __this->get__ntpEndPoint_3();
		NullCheck(L_6);
		int32_t L_12;
		L_12 = NetSocket_SendTo_m4A1DC3954B86BEC03867D4EA549531F8BBE82B71(L_6, L_8, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_12;
		// return errorCode == 0 && sendCount == packet.Bytes.Length;
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_2;
		NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * L_15 = V_1;
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		return (bool)((((int32_t)L_14) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
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
// System.Void LiteNetLib.Layers.PacketLayerBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketLayerBase__ctor_m4B4B991268B7002613D87B4F89C32DDF1EB8B15D (PacketLayerBase_tB46A23EE05BEFDE9EF51953D2D3E8F88D4D489A2 * __this, int32_t ___extraPacketSizeForLayer0, const RuntimeMethod* method)
{
	{
		// protected PacketLayerBase(int extraPacketSizeForLayer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ExtraPacketSizeForLayer = extraPacketSizeForLayer;
		int32_t L_0 = ___extraPacketSizeForLayer0;
		__this->set_ExtraPacketSizeForLayer_0(L_0);
		// }
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
// System.Void LiteNetLib.Utils.ParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseException__ctor_m75898769B3594DB8962BB33E6597C44376F58976 (ParseException_t625A20EE142D7498B4F30B7F09210BDB5DBB7DDF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ParseException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public ParseException(string message) : base(message) { }
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
// System.Void LiteNetLib.ReliableChannel::.ctor(LiteNetLib.NetPeer,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableChannel__ctor_m6C832E54D1AA731F10FE7369179DBE65548A4CC9 (ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, bool ___ordered1, uint8_t ___id2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public ReliableChannel(NetPeer peer, bool ordered, byte id) : base(peer)
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = ___peer0;
		BaseChannel__ctor_m4767F1DFAF0F1CD6CE285324BA31820EB5361F06(__this, L_0, /*hidden argument*/NULL);
		// _id = id;
		uint8_t L_1 = ___id2;
		__this->set__id_16(L_1);
		// _windowSize = NetConstants.DefaultWindowSize;
		__this->set__windowSize_14(((int32_t)64));
		// _ordered = ordered;
		bool L_2 = ___ordered1;
		__this->set__ordered_13(L_2);
		// _pendingPackets = new PendingPacket[_windowSize];
		int32_t L_3 = __this->get__windowSize_14();
		PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_4 = (PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3*)(PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3*)SZArrayNew(PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set__pendingPackets_4(L_4);
		// for (int i = 0; i < _pendingPackets.Length; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0032:
	{
		// _pendingPackets[i] = new PendingPacket();
		PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_5 = __this->get__pendingPackets_4();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		il2cpp_codegen_initobj(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), sizeof(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 ));
		// for (int i = 0; i < _pendingPackets.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0048:
	{
		// for (int i = 0; i < _pendingPackets.Length; i++)
		int32_t L_8 = V_0;
		PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_9 = __this->get__pendingPackets_4();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		// if (_ordered)
		bool L_10 = __this->get__ordered_13();
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// _deliveryMethod = DeliveryMethod.ReliableOrdered;
		__this->set__deliveryMethod_12(2);
		// _receivedPackets = new NetPacket[_windowSize];
		int32_t L_11 = __this->get__windowSize_14();
		NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* L_12 = (NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF*)(NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF*)SZArrayNew(NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set__receivedPackets_5(L_12);
		// }
		goto IL_008d;
	}

IL_0075:
	{
		// _deliveryMethod = DeliveryMethod.ReliableUnordered;
		__this->set__deliveryMethod_12(0);
		// _earlyReceived = new bool[_windowSize];
		int32_t L_13 = __this->get__windowSize_14();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_14 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->set__earlyReceived_6(L_14);
	}

IL_008d:
	{
		// _localWindowStart = 0;
		__this->set__localWindowStart_9(0);
		// _localSeqence = 0;
		__this->set__localSeqence_7(0);
		// _remoteSequence = 0;
		__this->set__remoteSequence_8(0);
		// _remoteWindowStart = 0;
		__this->set__remoteWindowStart_10(0);
		// _outgoingAcks = new NetPacket(PacketProperty.Ack, (_windowSize - 1) / BitsInByte + 2) {ChannelId = id};
		int32_t L_15 = __this->get__windowSize_14();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_16 = (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)il2cpp_codegen_object_new(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_il2cpp_TypeInfo_var);
		NetPacket__ctor_m2F22762D43F4D8F7A6D095692E08DD37A08AAC0E(L_16, 2, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1))/(int32_t)8)), (int32_t)2)), /*hidden argument*/NULL);
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_17 = L_16;
		uint8_t L_18 = ___id2;
		NullCheck(L_17);
		NetPacket_set_ChannelId_m9DF839F57502F274D7A22CAA85D3448914D9787F(L_17, L_18, /*hidden argument*/NULL);
		__this->set__outgoingAcks_3(L_17);
		// }
		return;
	}
}
// System.Void LiteNetLib.ReliableChannel::ProcessAck(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableChannel_ProcessAck_m26E70549FAB1EF5D7EE45F493FEF0400A839BC3D (ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (packet.Size != _outgoingAcks.Size)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = ___packet0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Size_3();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_2 = __this->get__outgoingAcks_3();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Size_3();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// ushort ackWindowStart = packet.Sequence;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_4 = ___packet0;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// int windowRel = NetUtils.RelativeSequenceNumber(_localWindowStart, ackWindowStart);
		int32_t L_6 = __this->get__localWindowStart_9();
		uint16_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (ackWindowStart >= NetConstants.MaxSequence || windowRel < 0)
		uint16_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0034:
	{
		// return;
		return;
	}

IL_0035:
	{
		// if (windowRel >= _windowSize)
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get__windowSize_14();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003f;
		}
	}
	{
		// return;
		return;
	}

IL_003f:
	{
		// byte[] acksData = packet.RawData;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_13 = ___packet0;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13->get_RawData_2();
		V_2 = L_14;
		// lock (_pendingPackets)
		PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_15 = __this->get__pendingPackets_4();
		V_3 = L_15;
		V_4 = (bool)0;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_16 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)(RuntimeObject *)L_16, (bool*)(&V_4), /*hidden argument*/NULL);
			// for (int pendingSeq = _localWindowStart;
			int32_t L_17 = __this->get__localWindowStart_9();
			V_5 = L_17;
			goto IL_011d;
		}

IL_0065:
		{
			// int rel = NetUtils.RelativeSequenceNumber(pendingSeq, ackWindowStart);
			int32_t L_18 = V_5;
			uint16_t L_19 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
			int32_t L_20;
			L_20 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_18, L_19, /*hidden argument*/NULL);
			// if (rel >= _windowSize)
			int32_t L_21 = __this->get__windowSize_14();
			if ((((int32_t)L_20) < ((int32_t)L_21)))
			{
				goto IL_007a;
			}
		}

IL_0075:
		{
			// break;
			IL2CPP_LEAVE(0x137, FINALLY_012c);
		}

IL_007a:
		{
			// int pendingIdx = pendingSeq % _windowSize;
			int32_t L_22 = V_5;
			int32_t L_23 = __this->get__windowSize_14();
			V_6 = ((int32_t)((int32_t)L_22%(int32_t)L_23));
			// int currentByte = NetConstants.ChanneledHeaderSize + pendingIdx / BitsInByte;
			int32_t L_24 = V_6;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_24/(int32_t)8))));
			// int currentBit = pendingIdx % BitsInByte;
			int32_t L_25 = V_6;
			V_8 = ((int32_t)((int32_t)L_25%(int32_t)8));
			// if ((acksData[currentByte] & (1 << currentBit)) == 0)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_2;
			int32_t L_27 = V_7;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			int32_t L_30 = V_8;
			if (((int32_t)((int32_t)L_29&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31))))))))
			{
				goto IL_00da;
			}
		}

IL_00a1:
		{
			// if (Peer.NetManager.EnableStatistics)
			NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_31 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
			NullCheck(L_31);
			NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_32 = L_31->get_NetManager_43();
			NullCheck(L_32);
			bool L_33 = L_32->get_EnableStatistics_42();
			if (!L_33)
			{
				goto IL_0111;
			}
		}

IL_00b3:
		{
			// Peer.Statistics.IncrementPacketLoss();
			NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_34 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
			NullCheck(L_34);
			NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * L_35 = L_34->get_Statistics_46();
			NullCheck(L_35);
			NetStatistics_IncrementPacketLoss_m3DEB611494E87B086B689085747EA66049BAA411(L_35, /*hidden argument*/NULL);
			// Peer.NetManager.Statistics.IncrementPacketLoss();
			NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_36 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
			NullCheck(L_36);
			NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_37 = L_36->get_NetManager_43();
			NullCheck(L_37);
			NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * L_38 = L_37->get_Statistics_41();
			NullCheck(L_38);
			NetStatistics_IncrementPacketLoss_m3DEB611494E87B086B689085747EA66049BAA411(L_38, /*hidden argument*/NULL);
			// continue;
			goto IL_0111;
		}

IL_00da:
		{
			// if (pendingSeq == _localWindowStart)
			int32_t L_39 = V_5;
			int32_t L_40 = __this->get__localWindowStart_9();
			if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
			{
				goto IL_00f8;
			}
		}

IL_00e4:
		{
			// _localWindowStart = (_localWindowStart + 1) % NetConstants.MaxSequence;
			int32_t L_41 = __this->get__localWindowStart_9();
			__this->set__localWindowStart_9(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))%(int32_t)((int32_t)32768))));
		}

IL_00f8:
		{
			// if (_pendingPackets[pendingIdx].Clear(Peer))
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_42 = __this->get__pendingPackets_4();
			int32_t L_43 = V_6;
			NullCheck(L_42);
			NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_44 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
			bool L_45;
			L_45 = PendingPacket_Clear_m75268CF6037A4519281CA969D386B0B3DC30C751((PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *)((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), L_44, /*hidden argument*/NULL);
		}

IL_0111:
		{
			// pendingSeq = (pendingSeq + 1) % NetConstants.MaxSequence)
			int32_t L_46 = V_5;
			V_5 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))%(int32_t)((int32_t)32768)));
		}

IL_011d:
		{
			// pendingSeq != _localSeqence;
			int32_t L_47 = V_5;
			int32_t L_48 = __this->get__localSeqence_7();
			if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
			{
				goto IL_0065;
			}
		}

IL_012a:
		{
			// }
			IL2CPP_LEAVE(0x137, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		{
			bool L_49 = V_4;
			if (!L_49)
			{
				goto IL_0136;
			}
		}

IL_0130:
		{
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_50 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)(RuntimeObject *)L_50, /*hidden argument*/NULL);
		}

IL_0136:
		{
			IL2CPP_END_FINALLY(300)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x137, IL_0137)
	}

IL_0137:
	{
		// }
		return;
	}
}
// System.Boolean LiteNetLib.ReliableChannel::SendNextPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableChannel_SendNextPackets_m97CBA46FDF644239264CBDBA22A2FF29B245C9B7 (ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_2 = NULL;
	bool V_3 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* V_5 = NULL;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (_mustSendAcks)
		bool L_0 = __this->get__mustSendAcks_11();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// _mustSendAcks = false;
		__this->set__mustSendAcks_11((bool)0);
		// lock(_outgoingAcks)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_1 = __this->get__outgoingAcks_3();
		V_2 = L_1;
		V_3 = (bool)0;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_2 = V_2;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_3), /*hidden argument*/NULL);
		// Peer.SendUserData(_outgoingAcks);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_3 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_4 = __this->get__outgoingAcks_3();
		NullCheck(L_3);
		NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_6 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// long currentTime = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7;
		L_7 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_4 = L_7;
		int64_t L_8;
		L_8 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_4), /*hidden argument*/NULL);
		V_0 = L_8;
		// bool hasPendingPackets = false;
		V_1 = (bool)0;
		// lock (_pendingPackets)
		PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_9 = __this->get__pendingPackets_4();
		V_5 = L_9;
		V_3 = (bool)0;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_10 = V_5;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)(RuntimeObject *)L_10, (bool*)(&V_3), /*hidden argument*/NULL);
			goto IL_00d9;
		}

IL_0063:
		{
			// int relate = NetUtils.RelativeSequenceNumber(_localSeqence, _localWindowStart);
			int32_t L_11 = __this->get__localSeqence_7();
			int32_t L_12 = __this->get__localWindowStart_9();
			IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
			int32_t L_13;
			L_13 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_11, L_12, /*hidden argument*/NULL);
			// if (relate >= _windowSize)
			int32_t L_14 = __this->get__windowSize_14();
			if ((((int32_t)L_13) >= ((int32_t)L_14)))
			{
				goto IL_00e9;
			}
		}

IL_007c:
		{
			// if (!OutgoingQueue.TryDequeue(out var netPacket))
			ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_15 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
			NullCheck(L_15);
			bool L_16;
			L_16 = ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343(L_15, (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 **)(&V_6), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343_RuntimeMethod_var);
			if (!L_16)
			{
				goto IL_00e9;
			}
		}

IL_008b:
		{
			// netPacket.Sequence = (ushort) _localSeqence;
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_17 = V_6;
			int32_t L_18 = __this->get__localSeqence_7();
			NullCheck(L_17);
			NetPacket_set_Sequence_m0F5435B8CC9139B18DAB00C0B299EC4EBFEF2CF4(L_17, (uint16_t)((int32_t)((uint16_t)L_18)), /*hidden argument*/NULL);
			// netPacket.ChannelId = _id;
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_19 = V_6;
			uint8_t L_20 = __this->get__id_16();
			NullCheck(L_19);
			NetPacket_set_ChannelId_m9DF839F57502F274D7A22CAA85D3448914D9787F(L_19, L_20, /*hidden argument*/NULL);
			// _pendingPackets[_localSeqence % _windowSize].Init(netPacket);
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_21 = __this->get__pendingPackets_4();
			int32_t L_22 = __this->get__localSeqence_7();
			int32_t L_23 = __this->get__windowSize_14();
			NullCheck(L_21);
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_24 = V_6;
			PendingPacket_Init_mF68FA054F319D8E5571BC18E8BD7E535E4DA75D2((PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_22%(int32_t)L_23))))), L_24, /*hidden argument*/NULL);
			// _localSeqence = (_localSeqence + 1) % NetConstants.MaxSequence;
			int32_t L_25 = __this->get__localSeqence_7();
			__this->set__localSeqence_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))%(int32_t)((int32_t)32768))));
		}

IL_00d9:
		{
			// while (!OutgoingQueue.IsEmpty)
			ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_26 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
			NullCheck(L_26);
			bool L_27;
			L_27 = ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744(L_26, /*hidden argument*/ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744_RuntimeMethod_var);
			if (!L_27)
			{
				goto IL_0063;
			}
		}

IL_00e9:
		{
			// for (int pendingSeq = _localWindowStart; pendingSeq != _localSeqence; pendingSeq = (pendingSeq + 1) % NetConstants.MaxSequence)
			int32_t L_28 = __this->get__localWindowStart_9();
			V_7 = L_28;
			goto IL_0123;
		}

IL_00f3:
		{
			// if (_pendingPackets[pendingSeq % _windowSize].TrySend(currentTime, Peer))
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_29 = __this->get__pendingPackets_4();
			int32_t L_30 = V_7;
			int32_t L_31 = __this->get__windowSize_14();
			NullCheck(L_29);
			int64_t L_32 = V_0;
			NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_33 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
			bool L_34;
			L_34 = PendingPacket_TrySend_m64574EF3A35EF2CC0550592199CEAE748B99220D((PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30%(int32_t)L_31))))), L_32, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_0117;
			}
		}

IL_0115:
		{
			// hasPendingPackets = true;
			V_1 = (bool)1;
		}

IL_0117:
		{
			// for (int pendingSeq = _localWindowStart; pendingSeq != _localSeqence; pendingSeq = (pendingSeq + 1) % NetConstants.MaxSequence)
			int32_t L_35 = V_7;
			V_7 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))%(int32_t)((int32_t)32768)));
		}

IL_0123:
		{
			// for (int pendingSeq = _localWindowStart; pendingSeq != _localSeqence; pendingSeq = (pendingSeq + 1) % NetConstants.MaxSequence)
			int32_t L_36 = V_7;
			int32_t L_37 = __this->get__localSeqence_7();
			if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
			{
				goto IL_00f3;
			}
		}

IL_012d:
		{
			// }
			IL2CPP_LEAVE(0x13A, FINALLY_012f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012f;
	}

FINALLY_012f:
	{ // begin finally (depth: 1)
		{
			bool L_38 = V_3;
			if (!L_38)
			{
				goto IL_0139;
			}
		}

IL_0132:
		{
			PendingPacketU5BU5D_tB65282042BE263344FFB9E05BE0520E6E1F67FD3* L_39 = V_5;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)(RuntimeObject *)L_39, /*hidden argument*/NULL);
		}

IL_0139:
		{
			IL2CPP_END_FINALLY(303)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(303)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
	}

IL_013a:
	{
		// return hasPendingPackets || _mustSendAcks || !OutgoingQueue.IsEmpty;
		bool L_40 = V_1;
		if (L_40)
		{
			goto IL_0154;
		}
	}
	{
		bool L_41 = __this->get__mustSendAcks_11();
		if (L_41)
		{
			goto IL_0154;
		}
	}
	{
		ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_42 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
		NullCheck(L_42);
		bool L_43;
		L_43 = ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744(L_42, /*hidden argument*/ConcurrentQueue_1_get_IsEmpty_m5CD113BE921484FC2B51DD78353D78CE80BA5744_RuntimeMethod_var);
		return (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
	}

IL_0154:
	{
		return (bool)1;
	}
}
// System.Boolean LiteNetLib.ReliableChannel::ProcessPacket(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableChannel_ProcessPacket_mA0347B123B4DFE1E2D666F83845C8C3BB8FDBFBA (ReliableChannel_t6C292BE3C053510C5AA13FD8AC31976E7B735584 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (packet.Property == PacketProperty.Ack)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = ___packet0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = NetPacket_get_Property_m93E6B1868AFC308E34C56E1E8B1791EC464236FD(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		// ProcessAck(packet);
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_2 = ___packet0;
		ReliableChannel_ProcessAck_m26E70549FAB1EF5D7EE45F493FEF0400A839BC3D(__this, L_2, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// int seq = packet.Sequence;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_3 = ___packet0;
		NullCheck(L_3);
		uint16_t L_4;
		L_4 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (seq >= NetConstants.MaxSequence)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)32768))))
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// int relate = NetUtils.RelativeSequenceNumber(seq, _remoteWindowStart);
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get__remoteWindowStart_10();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// int relateSeq = NetUtils.RelativeSequenceNumber(seq, _remoteSequence);
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get__remoteSequence_8();
		int32_t L_11;
		L_11 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_9, L_10, /*hidden argument*/NULL);
		// if (relateSeq > _windowSize)
		int32_t L_12 = __this->get__windowSize_14();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0046;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0046:
	{
		// if (relate < 0)
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// if (relate >= _windowSize * 2)
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get__windowSize_14();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)))))
		{
			goto IL_0059;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// lock (_outgoingAcks)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_16 = __this->get__outgoingAcks_3();
		V_5 = L_16;
		V_6 = (bool)0;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_17 = V_5;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_17, (bool*)(&V_6), /*hidden argument*/NULL);
			// if (relate >= _windowSize)
			int32_t L_18 = V_1;
			int32_t L_19 = __this->get__windowSize_14();
			if ((((int32_t)L_18) < ((int32_t)L_19)))
			{
				goto IL_00f5;
			}
		}

IL_0076:
		{
			// int newWindowStart = (_remoteWindowStart + relate - _windowSize + 1) % NetConstants.MaxSequence;
			int32_t L_20 = __this->get__remoteWindowStart_10();
			int32_t L_21 = V_1;
			int32_t L_22 = __this->get__windowSize_14();
			V_7 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t)L_22)), (int32_t)1))%(int32_t)((int32_t)32768)));
			// _outgoingAcks.Sequence = (ushort) newWindowStart;
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_23 = __this->get__outgoingAcks_3();
			int32_t L_24 = V_7;
			NullCheck(L_23);
			NetPacket_set_Sequence_m0F5435B8CC9139B18DAB00C0B299EC4EBFEF2CF4(L_23, (uint16_t)((int32_t)((uint16_t)L_24)), /*hidden argument*/NULL);
			goto IL_00eb;
		}

IL_009f:
		{
			// ackIdx = _remoteWindowStart % _windowSize;
			int32_t L_25 = __this->get__remoteWindowStart_10();
			int32_t L_26 = __this->get__windowSize_14();
			V_2 = ((int32_t)((int32_t)L_25%(int32_t)L_26));
			// ackByte = NetConstants.ChanneledHeaderSize + ackIdx / BitsInByte;
			int32_t L_27 = V_2;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_27/(int32_t)8))));
			// ackBit = ackIdx % BitsInByte;
			int32_t L_28 = V_2;
			V_4 = ((int32_t)((int32_t)L_28%(int32_t)8));
			// _outgoingAcks.RawData[ackByte] &= (byte) ~(1 << ackBit);
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_29 = __this->get__outgoingAcks_3();
			NullCheck(L_29);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_RawData_2();
			int32_t L_31 = V_3;
			NullCheck(L_30);
			uint8_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)));
			int32_t L_33 = *((uint8_t*)L_32);
			int32_t L_34 = V_4;
			*((int8_t*)L_32) = (int8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)((uint8_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)31)))))))))))));
			// _remoteWindowStart = (_remoteWindowStart + 1) % NetConstants.MaxSequence;
			int32_t L_35 = __this->get__remoteWindowStart_10();
			__this->set__remoteWindowStart_10(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))%(int32_t)((int32_t)32768))));
		}

IL_00eb:
		{
			// while (_remoteWindowStart != newWindowStart)
			int32_t L_36 = __this->get__remoteWindowStart_10();
			int32_t L_37 = V_7;
			if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
			{
				goto IL_009f;
			}
		}

IL_00f5:
		{
			// _mustSendAcks = true;
			__this->set__mustSendAcks_11((bool)1);
			// ackIdx = seq % _windowSize;
			int32_t L_38 = V_0;
			int32_t L_39 = __this->get__windowSize_14();
			V_2 = ((int32_t)((int32_t)L_38%(int32_t)L_39));
			// ackByte = NetConstants.ChanneledHeaderSize + ackIdx / BitsInByte;
			int32_t L_40 = V_2;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_40/(int32_t)8))));
			// ackBit = ackIdx % BitsInByte;
			int32_t L_41 = V_2;
			V_4 = ((int32_t)((int32_t)L_41%(int32_t)8));
			// if ((_outgoingAcks.RawData[ackByte] & (1 << ackBit)) != 0)
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_42 = __this->get__outgoingAcks_3();
			NullCheck(L_42);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = L_42->get_RawData_2();
			int32_t L_44 = V_3;
			NullCheck(L_43);
			int32_t L_45 = L_44;
			uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
			int32_t L_47 = V_4;
			if (!((int32_t)((int32_t)L_46&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_47&(int32_t)((int32_t)31))))))))
			{
				goto IL_012f;
			}
		}

IL_0127:
		{
			// return false;
			V_8 = (bool)0;
			IL2CPP_LEAVE(0x268, FINALLY_014f);
		}

IL_012f:
		{
			// _outgoingAcks.RawData[ackByte] |= (byte) (1 << ackBit);
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_48 = __this->get__outgoingAcks_3();
			NullCheck(L_48);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = L_48->get_RawData_2();
			int32_t L_50 = V_3;
			NullCheck(L_49);
			uint8_t* L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)));
			int32_t L_52 = *((uint8_t*)L_51);
			int32_t L_53 = V_4;
			*((int8_t*)L_51) = (int8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_52|(int32_t)((int32_t)((uint8_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))))))))));
			// }
			IL2CPP_LEAVE(0x15B, FINALLY_014f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014f;
	}

FINALLY_014f:
	{ // begin finally (depth: 1)
		{
			bool L_54 = V_6;
			if (!L_54)
			{
				goto IL_015a;
			}
		}

IL_0153:
		{
			NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_55 = V_5;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_55, /*hidden argument*/NULL);
		}

IL_015a:
		{
			IL2CPP_END_FINALLY(335)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(335)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x268, IL_0268)
		IL2CPP_JUMP_TBL(0x15B, IL_015b)
	}

IL_015b:
	{
		// AddToPeerChannelSendQueue();
		BaseChannel_AddToPeerChannelSendQueue_m2BAD5CBA4E9E776D8AD68B797DD8F0A0266E9504(__this, /*hidden argument*/NULL);
		// if (seq == _remoteSequence)
		int32_t L_56 = V_0;
		int32_t L_57 = __this->get__remoteSequence_8();
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0238;
		}
	}
	{
		// Peer.AddReliablePacket(_deliveryMethod, packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_58 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		uint8_t L_59 = __this->get__deliveryMethod_12();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_60 = ___packet0;
		NullCheck(L_58);
		NetPeer_AddReliablePacket_m3D0CEE6FCFA44F315CD7FA4F99338E6008B33D3E(L_58, L_59, L_60, /*hidden argument*/NULL);
		// _remoteSequence = (_remoteSequence + 1) % NetConstants.MaxSequence;
		int32_t L_61 = __this->get__remoteSequence_8();
		__this->set__remoteSequence_8(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1))%(int32_t)((int32_t)32768))));
		// if (_ordered)
		bool L_62 = __this->get__ordered_13();
		if (!L_62)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_01dc;
	}

IL_01a0:
	{
		// _receivedPackets[_remoteSequence % _windowSize] = null;
		NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* L_63 = __this->get__receivedPackets_5();
		int32_t L_64 = __this->get__remoteSequence_8();
		int32_t L_65 = __this->get__windowSize_14();
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, NULL);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_64%(int32_t)L_65))), (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)NULL);
		// Peer.AddReliablePacket(_deliveryMethod, p);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_66 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		uint8_t L_67 = __this->get__deliveryMethod_12();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_68 = V_9;
		NullCheck(L_66);
		NetPeer_AddReliablePacket_m3D0CEE6FCFA44F315CD7FA4F99338E6008B33D3E(L_66, L_67, L_68, /*hidden argument*/NULL);
		// _remoteSequence = (_remoteSequence + 1) % NetConstants.MaxSequence;
		int32_t L_69 = __this->get__remoteSequence_8();
		__this->set__remoteSequence_8(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1))%(int32_t)((int32_t)32768))));
	}

IL_01dc:
	{
		// while ((p = _receivedPackets[_remoteSequence % _windowSize]) != null)
		NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* L_70 = __this->get__receivedPackets_5();
		int32_t L_71 = __this->get__remoteSequence_8();
		int32_t L_72 = __this->get__windowSize_14();
		NullCheck(L_70);
		int32_t L_73 = ((int32_t)((int32_t)L_71%(int32_t)L_72));
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_75 = L_74;
		V_9 = L_75;
		if (L_75)
		{
			goto IL_01a0;
		}
	}
	{
		// }
		goto IL_0236;
	}

IL_01f7:
	{
		// _earlyReceived[_remoteSequence % _windowSize] = false;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_76 = __this->get__earlyReceived_6();
		int32_t L_77 = __this->get__remoteSequence_8();
		int32_t L_78 = __this->get__windowSize_14();
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_77%(int32_t)L_78))), (bool)0);
		// _remoteSequence = (_remoteSequence + 1) % NetConstants.MaxSequence;
		int32_t L_79 = __this->get__remoteSequence_8();
		__this->set__remoteSequence_8(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1))%(int32_t)((int32_t)32768))));
	}

IL_0220:
	{
		// while (_earlyReceived[_remoteSequence % _windowSize])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_80 = __this->get__earlyReceived_6();
		int32_t L_81 = __this->get__remoteSequence_8();
		int32_t L_82 = __this->get__windowSize_14();
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)((int32_t)L_81%(int32_t)L_82));
		uint8_t L_84 = (uint8_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if (L_84)
		{
			goto IL_01f7;
		}
	}

IL_0236:
	{
		// return true;
		return (bool)1;
	}

IL_0238:
	{
		// if (_ordered)
		bool L_85 = __this->get__ordered_13();
		if (!L_85)
		{
			goto IL_024b;
		}
	}
	{
		// _receivedPackets[ackIdx] = packet;
		NetPacketU5BU5D_t03318EBB0692DAED365730E8FA6C6FBCB399FEFF* L_86 = __this->get__receivedPackets_5();
		int32_t L_87 = V_2;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_88 = ___packet0;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)L_88);
		// }
		goto IL_0266;
	}

IL_024b:
	{
		// _earlyReceived[ackIdx] = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_89 = __this->get__earlyReceived_6();
		int32_t L_90 = V_2;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (bool)1);
		// Peer.AddReliablePacket(_deliveryMethod, packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_91 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		uint8_t L_92 = __this->get__deliveryMethod_12();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_93 = ___packet0;
		NullCheck(L_91);
		NetPeer_AddReliablePacket_m3D0CEE6FCFA44F315CD7FA4F99338E6008B33D3E(L_91, L_92, L_93, /*hidden argument*/NULL);
	}

IL_0266:
	{
		// return true;
		return (bool)1;
	}

IL_0268:
	{
		// }
		bool L_94 = V_8;
		return L_94;
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
// System.Void LiteNetLib.SequencedChannel::.ctor(LiteNetLib.NetPeer,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencedChannel__ctor_m7E2614291E523233EE384E4EF43DCFD882117F2F (SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, bool ___reliable1, uint8_t ___id2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SequencedChannel(NetPeer peer, bool reliable, byte id) : base(peer)
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = ___peer0;
		BaseChannel__ctor_m4767F1DFAF0F1CD6CE285324BA31820EB5361F06(__this, L_0, /*hidden argument*/NULL);
		// _id = id;
		uint8_t L_1 = ___id2;
		__this->set__id_9(L_1);
		// _reliable = reliable;
		bool L_2 = ___reliable1;
		__this->set__reliable_5(L_2);
		// if (_reliable)
		bool L_3 = __this->get__reliable_5();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// _ackPacket = new NetPacket(PacketProperty.Ack, 0) {ChannelId = id};
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_4 = (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)il2cpp_codegen_object_new(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4_il2cpp_TypeInfo_var);
		NetPacket__ctor_m2F22762D43F4D8F7A6D095692E08DD37A08AAC0E(L_4, 2, 0, /*hidden argument*/NULL);
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_5 = L_4;
		uint8_t L_6 = ___id2;
		NullCheck(L_5);
		NetPacket_set_ChannelId_m9DF839F57502F274D7A22CAA85D3448914D9787F(L_5, L_6, /*hidden argument*/NULL);
		__this->set__ackPacket_7(L_5);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean LiteNetLib.SequencedChannel::SendNextPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencedChannel_SendNextPackets_m0FD94DFD94732867C081206AF350ACDA92B2EEC2 (SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_2 = NULL;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * V_3 = NULL;
	{
		// if (_reliable && OutgoingQueue.Count == 0)
		bool L_0 = __this->get__reliable_5();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_1 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B(L_1, /*hidden argument*/ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_006b;
		}
	}
	{
		// long currentTime = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_1 = L_3;
		int64_t L_4;
		L_4 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// long packetHoldTime = currentTime - _lastPacketSendTime;
		int64_t L_5 = V_0;
		int64_t L_6 = __this->get__lastPacketSendTime_10();
		// if (packetHoldTime >= Peer.ResendDelay * TimeSpan.TicksPerMillisecond)
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_7 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_7);
		double L_8;
		L_8 = NetPeer_get_ResendDelay_m756E0CF135BF9B4DF21A5FF28699A67778A8013E_inline(L_7, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_6))))) >= ((double)((double)il2cpp_codegen_multiply((double)L_8, (double)(10000.0)))))))
		{
			goto IL_0102;
		}
	}
	{
		// var packet = _lastPacket;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_9 = __this->get__lastPacket_6();
		V_2 = L_9;
		// if (packet != null)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0102;
		}
	}
	{
		// _lastPacketSendTime = currentTime;
		int64_t L_11 = V_0;
		__this->set__lastPacketSendTime_10(L_11);
		// Peer.SendUserData(packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_12 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_13 = V_2;
		NullCheck(L_12);
		NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC(L_12, L_13, /*hidden argument*/NULL);
		// }
		goto IL_0102;
	}

IL_006b:
	{
		// while (OutgoingQueue.TryDequeue(out var packet))
		ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_14 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
		NullCheck(L_14);
		bool L_15;
		L_15 = ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343(L_14, (NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 **)(&V_3), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mF84C168F7FA59119A5AE5EC26DC9C878A421D343_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0102;
		}
	}
	{
		// _localSequence = (_localSequence + 1) % NetConstants.MaxSequence;
		int32_t L_16 = __this->get__localSequence_3();
		__this->set__localSequence_3(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))%(int32_t)((int32_t)32768))));
		// packet.Sequence = (ushort)_localSequence;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_17 = V_3;
		int32_t L_18 = __this->get__localSequence_3();
		NullCheck(L_17);
		NetPacket_set_Sequence_m0F5435B8CC9139B18DAB00C0B299EC4EBFEF2CF4(L_17, (uint16_t)((int32_t)((uint16_t)L_18)), /*hidden argument*/NULL);
		// packet.ChannelId = _id;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_19 = V_3;
		uint8_t L_20 = __this->get__id_9();
		NullCheck(L_19);
		NetPacket_set_ChannelId_m9DF839F57502F274D7A22CAA85D3448914D9787F(L_19, L_20, /*hidden argument*/NULL);
		// Peer.SendUserData(packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_21 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_22 = V_3;
		NullCheck(L_21);
		NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC(L_21, L_22, /*hidden argument*/NULL);
		// if (_reliable && OutgoingQueue.Count == 0)
		bool L_23 = __this->get__reliable_5();
		if (!L_23)
		{
			goto IL_00e7;
		}
	}
	{
		ConcurrentQueue_1_t3E89FA14F5A57CEEB730FEF4769ED198625425F5 * L_24 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_OutgoingQueue_1();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B(L_24, /*hidden argument*/ConcurrentQueue_1_get_Count_m8B6615C63D6DD189B98E3854329276E0B6197F4B_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// _lastPacketSendTime = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_26;
		L_26 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_1 = L_26;
		int64_t L_27;
		L_27 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		__this->set__lastPacketSendTime_10(L_27);
		// _lastPacket = packet;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_28 = V_3;
		__this->set__lastPacket_6(L_28);
		// }
		goto IL_006b;
	}

IL_00e7:
	{
		// Peer.NetManager.NetPacketPool.Recycle(packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_29 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_29);
		NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_30 = L_29->get_NetManager_43();
		NullCheck(L_30);
		NetPacketPool_t828E8B9A7B3A2EDF49D910C551C04A6EDB42171E * L_31 = L_30->get_NetPacketPool_23();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_32 = V_3;
		NullCheck(L_31);
		NetPacketPool_Recycle_m70D538E6D25E3ADE4CD8E3B3417356350A862C78(L_31, L_32, /*hidden argument*/NULL);
		// }
		goto IL_006b;
	}

IL_0102:
	{
		// if (_reliable && _mustSendAck)
		bool L_33 = __this->get__reliable_5();
		if (!L_33)
		{
			goto IL_013b;
		}
	}
	{
		bool L_34 = __this->get__mustSendAck_8();
		if (!L_34)
		{
			goto IL_013b;
		}
	}
	{
		// _mustSendAck = false;
		__this->set__mustSendAck_8((bool)0);
		// _ackPacket.Sequence = _remoteSequence;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_35 = __this->get__ackPacket_7();
		uint16_t L_36 = __this->get__remoteSequence_4();
		NullCheck(L_35);
		NetPacket_set_Sequence_m0F5435B8CC9139B18DAB00C0B299EC4EBFEF2CF4(L_35, L_36, /*hidden argument*/NULL);
		// Peer.SendUserData(_ackPacket);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_37 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_38 = __this->get__ackPacket_7();
		NullCheck(L_37);
		NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC(L_37, L_38, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// return _lastPacket != null;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_39 = __this->get__lastPacket_6();
		return (bool)((!(((RuntimeObject*)(NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean LiteNetLib.SequencedChannel::ProcessPacket(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencedChannel_ProcessPacket_m5E437DCC1C7ECA9E0738ADFB5FCDCABA7DC76ED5 (SequencedChannel_tD744FEA05C4C45F2147B75075715B7EFE7FF12D3 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * G_B14_0 = NULL;
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * G_B14_1 = NULL;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * G_B13_0 = NULL;
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * G_B15_1 = NULL;
	NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * G_B15_2 = NULL;
	{
		// if (packet.IsFragmented)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = ___packet0;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetPacket_get_IsFragmented_m3998EDB726F11A1A8272594E1FD5E8A347407A11(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (packet.Property == PacketProperty.Ack)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_2 = ___packet0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = NetPacket_get_Property_m93E6B1868AFC308E34C56E1E8B1791EC464236FD(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		// if (_reliable && _lastPacket != null && packet.Sequence == _lastPacket.Sequence)
		bool L_4 = __this->get__reliable_5();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_5 = __this->get__lastPacket_6();
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_6 = ___packet0;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_6, /*hidden argument*/NULL);
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_8 = __this->get__lastPacket_6();
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_003d;
		}
	}
	{
		// _lastPacket = null;
		__this->set__lastPacket_6((NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)NULL);
	}

IL_003d:
	{
		// return false;
		return (bool)0;
	}

IL_003f:
	{
		// int relative = NetUtils.RelativeSequenceNumber(packet.Sequence, _remoteSequence);
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_10 = ___packet0;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_10, /*hidden argument*/NULL);
		uint16_t L_12 = __this->get__remoteSequence_4();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t474EA4BFC9D66C8F094098B7CFB44F61B454E0CF_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = NetUtils_RelativeSequenceNumber_mAF3F15B4E660EF079F91B90234CED9DCBB883507(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// bool packetProcessed = false;
		V_1 = (bool)0;
		// if (packet.Sequence < NetConstants.MaxSequence && relative > 0)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_14 = ___packet0;
		NullCheck(L_14);
		uint16_t L_15;
		L_15 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		// if (Peer.NetManager.EnableStatistics)
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_17 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_17);
		NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_18 = L_17->get_NetManager_43();
		NullCheck(L_18);
		bool L_19 = L_18->get_EnableStatistics_42();
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// Peer.Statistics.AddPacketLoss(relative - 1);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_20 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_20);
		NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * L_21 = L_20->get_Statistics_46();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		NetStatistics_AddPacketLoss_m8C5F67E2A2DC65040CF0D03E915B49C4DEC67A5E(L_21, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)))), /*hidden argument*/NULL);
		// Peer.NetManager.Statistics.AddPacketLoss(relative - 1);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_23 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_23);
		NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_24 = L_23->get_NetManager_43();
		NullCheck(L_24);
		NetStatistics_tFA1975B1AB4B895F1D6FE2BC8B6647DA72A03353 * L_25 = L_24->get_Statistics_41();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		NetStatistics_AddPacketLoss_m8C5F67E2A2DC65040CF0D03E915B49C4DEC67A5E(L_25, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))), /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// _remoteSequence = packet.Sequence;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_27 = ___packet0;
		NullCheck(L_27);
		uint16_t L_28;
		L_28 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_27, /*hidden argument*/NULL);
		__this->set__remoteSequence_4(L_28);
		// Peer.NetManager.CreateReceiveEvent(
		//     packet,
		//     _reliable ? DeliveryMethod.ReliableSequenced : DeliveryMethod.Sequenced,
		//     NetConstants.ChanneledHeaderSize,
		//     Peer);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_29 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(L_29);
		NetManager_t1B4700F44CC86FDA6D161C6E2C8D1791AAB46A20 * L_30 = L_29->get_NetManager_43();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_31 = ___packet0;
		bool L_32 = __this->get__reliable_5();
		G_B13_0 = L_31;
		G_B13_1 = L_30;
		if (L_32)
		{
			G_B14_0 = L_31;
			G_B14_1 = L_30;
			goto IL_00c6;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B15_0 = 3;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_00c7:
	{
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_33 = ((BaseChannel_t02162823FCB8F1B0E075202DCAB01B560005C8E6 *)__this)->get_Peer_0();
		NullCheck(G_B15_2);
		NetManager_CreateReceiveEvent_mD6D8490C4A77C7BAF9275E1B4F2B7005A2E5DFD1(G_B15_2, G_B15_1, G_B15_0, 4, L_33, /*hidden argument*/NULL);
		// packetProcessed = true;
		V_1 = (bool)1;
	}

IL_00d5:
	{
		// if (_reliable)
		bool L_34 = __this->get__reliable_5();
		if (!L_34)
		{
			goto IL_00ea;
		}
	}
	{
		// _mustSendAck = true;
		__this->set__mustSendAck_8((bool)1);
		// AddToPeerChannelSendQueue();
		BaseChannel_AddToPeerChannelSendQueue_m2BAD5CBA4E9E776D8AD68B797DD8F0A0266E9504(__this, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// return packetProcessed;
		bool L_35 = V_1;
		return L_35;
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
// System.Void LiteNetLib.TooBigPacketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooBigPacketException__ctor_m1036232DB5EFC0F4579289449EAE9AD16143AE1B (TooBigPacketException_t4F4DB4223CA3BE7FB9AB8779F089A161A337BC45 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public TooBigPacketException(string message) : base(message)
		String_t* L_0 = ___message0;
		InvalidPacketException__ctor_m4E3C5220739A3A88BC32EB00A1A4DC8344FF3132(__this, L_0, /*hidden argument*/NULL);
		// }
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
// System.Void LiteNetLib.UnitySocketFix::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix_Update_mE0B209A0123934A0E396E0C00E871551D028E051 (UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Socket == null)
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_0 = __this->get_Socket_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.UnitySocketFix::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix_OnApplicationPause_mA30BC796C7CC54074A800D1001EB9B3909E651F6 (UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDebug_t82550DCF49EB6A03ED21E6D41395BFD2ED2D750B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52439FA32A164EEC0DB5C0D160230161D4B7EC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Socket == null)
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_0 = __this->get_Socket_10();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (pause)
		bool L_1 = ___pause0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Paused = true;
		__this->set_Paused_9((bool)1);
		// Socket.Close(true);
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_2 = __this->get_Socket_10();
		NullCheck(L_2);
		NetSocket_Close_mFF8944D3559B381C7BB06CE03136A6C4DFF4CAA1(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// else if (Paused)
		bool L_3 = __this->get_Paused_9();
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if (!Socket.Bind(BindAddrIPv4, BindAddrIPv6, Port, Reuse, IPv6, ManualMode))
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_4 = __this->get_Socket_10();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_5 = __this->get_BindAddrIPv4_4();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = __this->get_BindAddrIPv6_5();
		int32_t L_7 = __this->get_Port_8();
		bool L_8 = __this->get_Reuse_6();
		int32_t L_9 = __this->get_IPv6_7();
		bool L_10 = __this->get_ManualMode_11();
		NullCheck(L_4);
		bool L_11;
		L_11 = NetSocket_Bind_mB1F9BE0EB351E0BDC8D10A3BC426BEC5C13F5638(L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0094;
		}
	}
	{
		// NetDebug.WriteError("[S] Cannot restore connection \"{0}\",\"{1}\" port {2}", BindAddrIPv4, BindAddrIPv6, Port);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_14 = __this->get_BindAddrIPv4_4();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_13;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_16 = __this->get_BindAddrIPv6_5();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_15;
		int32_t L_18 = __this->get_Port_8();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(NetDebug_t82550DCF49EB6A03ED21E6D41395BFD2ED2D750B_il2cpp_TypeInfo_var);
		NetDebug_WriteError_m78209E2DF5CD8796257F900840A154C66A68D2A4(_stringLiteral52439FA32A164EEC0DB5C0D160230161D4B7EC44, L_17, /*hidden argument*/NULL);
		// Socket.OnErrorRestore();
		NetSocket_t6582FD0254A6CE8CCEE6805AA22E0D122227CF58 * L_21 = __this->get_Socket_10();
		NullCheck(L_21);
		NetSocket_OnErrorRestore_m4506FB47F592D216DA4B47BC1F5374A1BD20927B(L_21, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.UnitySocketFix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix__ctor_m71B7CD46E4AD5F19BA5F91586DE54682C102D9C8 (UnitySocketFix_t85B96D8871F9853BBAEB2E2EDCB3F183BD2754DD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LiteNetLib.Layers.XorEncryptLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m303FFC4FF9E950CCE6EC7B7748189A4B224A3421 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, const RuntimeMethod* method)
{
	{
		// public XorEncryptLayer() : base(0)
		PacketLayerBase__ctor_m4B4B991268B7002613D87B4F89C32DDF1EB8B15D(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m5F911869E96D84DBA87EDAEB3C18313EAC629FE5 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, const RuntimeMethod* method)
{
	{
		// public XorEncryptLayer(byte[] key) : this()
		XorEncryptLayer__ctor_m303FFC4FF9E950CCE6EC7B7748189A4B224A3421(__this, /*hidden argument*/NULL);
		// SetKey(key);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___key0;
		XorEncryptLayer_SetKey_mA4E094228ADBF00C6BA26748A97B00EADE91CCC5(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m4D732FD06A71454BE25C04E0504F89C933DC9BFB (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// public XorEncryptLayer(string key) : this()
		XorEncryptLayer__ctor_m303FFC4FF9E950CCE6EC7B7748189A4B224A3421(__this, /*hidden argument*/NULL);
		// SetKey(key);
		String_t* L_0 = ___key0;
		XorEncryptLayer_SetKey_mA9AC7216AEB12BDE6CB2CB53A7FB7F6E89107A72(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::SetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mA9AC7216AEB12BDE6CB2CB53A7FB7F6E89107A72 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// _byteKey = Encoding.UTF8.GetBytes(key);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		__this->set__byteKey_1(L_2);
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mA4E094228ADBF00C6BA26748A97B00EADE91CCC5 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_byteKey == null || _byteKey.Length != key.Length)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__byteKey_1();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__byteKey_1();
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___key0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		// _byteKey = new byte[key.Length];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___key0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		__this->set__byteKey_1(L_4);
	}

IL_0023:
	{
		// Buffer.BlockCopy(key, 0, _byteKey, 0, key.Length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get__byteKey_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___key0;
		NullCheck(L_7);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::ProcessInboundPacket(System.Net.IPEndPoint&,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_ProcessInboundPacket_m261296C0E39B43483976AE4B12638622CA9BF575 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** ___endPoint0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data1, int32_t* ___offset2, int32_t* ___length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_byteKey == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__byteKey_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var cur = offset;
		int32_t* L_1 = ___offset2;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		// for (var i = 0; i < length; i++, cur++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// data[cur] = (byte)(data[cur] ^ _byteKey[i % _byteKey.Length]);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_3 = ___data1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_3);
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_6 = ___data1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get__byteKey_1();
		int32_t L_12 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get__byteKey_1();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)((int32_t)L_12%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15)))));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0033:
	{
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_18 = V_1;
		int32_t* L_19 = ___length3;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Layers.XorEncryptLayer::ProcessOutBoundPacket(System.Net.IPEndPoint&,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_ProcessOutBoundPacket_m94171359C25EF68BE2CD9FA7F5C17511F72DCC89 (XorEncryptLayer_t003CD1618793A17EFB36CCE7B416FAA4957DD226 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** ___endPoint0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data1, int32_t* ___offset2, int32_t* ___length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_byteKey == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__byteKey_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var cur = offset;
		int32_t* L_1 = ___offset2;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		// for (var i = 0; i < length; i++, cur++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// data[cur] = (byte)(data[cur] ^ _byteKey[i % _byteKey.Length]);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_3 = ___data1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_3);
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_6 = ___data1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get__byteKey_1();
		int32_t L_12 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get__byteKey_1();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)((int32_t)L_12%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15)))));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0033:
	{
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_18 = V_1;
		int32_t* L_19 = ___length3;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
		}
	}
	{
		// }
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
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionRequest__ctor_m7E91917F7052B865793483A18BD5E23D925E0C2E (OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest::Invoke(System.Net.IPEndPoint,System.Net.IPEndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionRequest_Invoke_mFC384DD6F4C3E87DC7E82F972BC1A35EE80DB618 (OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___localEndPoint0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint1, String_t* ___token2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___localEndPoint0, ___remoteEndPoint1, ___token2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(targetMethod, ___localEndPoint0, ___remoteEndPoint1, ___token2);
					else
						GenericVirtActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(targetMethod, ___localEndPoint0, ___remoteEndPoint1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___localEndPoint0, ___remoteEndPoint1, ___token2);
					else
						VirtActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___localEndPoint0, ___remoteEndPoint1, ___token2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___localEndPoint0, ___remoteEndPoint1, ___token2, targetMethod);
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
						GenericInterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(targetMethod, targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2);
					else
						GenericVirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(targetMethod, targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2);
					else
						VirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___localEndPoint0, ___remoteEndPoint1, ___token2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___localEndPoint0, ___remoteEndPoint1, ___token2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest::BeginInvoke(System.Net.IPEndPoint,System.Net.IPEndPoint,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNatIntroductionRequest_BeginInvoke_m1DF8B1D9A7503CEDE2C301D5EF60A1DC798492FA (OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___localEndPoint0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint1, String_t* ___token2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___localEndPoint0;
	__d_args[1] = ___remoteEndPoint1;
	__d_args[2] = ___token2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionRequest_EndInvoke_m0062A0C41E69944CF8A7A76492CA5A64225B3123 (OnNatIntroductionRequest_t2319E648F4BF049C4B513BD3D0D75F59DED706C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionSuccess__ctor_m588DAFB9181CAB4D02F8FBA922BE931AB48EB551 (OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess::Invoke(System.Net.IPEndPoint,LiteNetLib.NatAddressType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionSuccess_Invoke_m67D98C8A73EEE052645892978F3FD0E9B344F692 (OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___targetEndPoint0, int32_t ___type1, String_t* ___token2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetEndPoint0, ___type1, ___token2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___targetEndPoint0, ___type1, ___token2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___targetEndPoint0, ___type1, ___token2);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___targetEndPoint0, ___type1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___targetEndPoint0, ___type1, ___token2);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___targetEndPoint0, ___type1, ___token2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetEndPoint0, ___type1, ___token2, targetMethod);
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
						GenericInterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___targetEndPoint0, ___type1, ___token2);
					else
						GenericVirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___targetEndPoint0, ___type1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___targetEndPoint0, ___type1, ___token2);
					else
						VirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___targetEndPoint0, ___type1, ___token2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___targetEndPoint0, ___type1, ___token2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___targetEndPoint0, ___type1, ___token2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess::BeginInvoke(System.Net.IPEndPoint,LiteNetLib.NatAddressType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNatIntroductionSuccess_BeginInvoke_mCD8B127E43D6D92E896DFA91C89F5A97D52C79C2 (OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___targetEndPoint0, int32_t ___type1, String_t* ___token2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatAddressType_t6031FFF07D83807BA99E7B84BD7ECCF36936B810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___targetEndPoint0;
	__d_args[1] = Box(NatAddressType_t6031FFF07D83807BA99E7B84BD7ECCF36936B810_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___token2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNatIntroductionSuccess_EndInvoke_mD5DC75C950AC95BA535B1B9BF23539C7201EFBF6 (OnNatIntroductionSuccess_tB03944250FE16768E9AF3E8EF501252D9EDBBBCA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnConnectionRequest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectionRequest__ctor_m5E5DA199A5A24A46B66F30AC425897CA7144A32B (OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnConnectionRequest::Invoke(LiteNetLib.ConnectionRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectionRequest_Invoke_mDF457FDC0163D68C6CB8DA2E184688987C2A6538 (OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38 * __this, ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * ___request0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___request0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___request0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___request0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___request0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, targetMethod);
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
						GenericInterfaceActionInvoker1< ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * >::Invoke(targetMethod, targetThis, ___request0);
					else
						GenericVirtActionInvoker1< ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * >::Invoke(targetMethod, targetThis, ___request0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___request0);
					else
						VirtActionInvoker1< ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___request0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___request0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnConnectionRequest::BeginInvoke(LiteNetLib.ConnectionRequest,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnConnectionRequest_BeginInvoke_m9DFC2352339CD3F0B114292DEA4DC561C4579862 (OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38 * __this, ConnectionRequest_t448AFA0A5749550B0A8E7C5FFC00633E8B35DA52 * ___request0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___request0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnConnectionRequest::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectionRequest_EndInvoke_mC509FAE8947138A1FA1A177EEA0E3340D597D26A (OnConnectionRequest_tA03EC7A8164352FDB7B476423A4A6A9E79DDCC38 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnDeliveryEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeliveryEvent__ctor_m1558C35A95B4044833DA6A21E937CE5D2957F161 (OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnDeliveryEvent::Invoke(LiteNetLib.NetPeer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeliveryEvent_Invoke_m5C8F06AB730B710903CA58B7365C88531F9F9EC5 (OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, RuntimeObject * ___userData1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___userData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___userData1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___peer0, ___userData1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___peer0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___peer0, ___userData1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___peer0, ___userData1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___userData1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___peer0, ___userData1);
					else
						GenericVirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___peer0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___peer0, ___userData1);
					else
						VirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___peer0, ___userData1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___peer0, ___userData1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___userData1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnDeliveryEvent::BeginInvoke(LiteNetLib.NetPeer,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDeliveryEvent_BeginInvoke_m590D647B4B014198B66AF360D67A166898EAAB18 (OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, RuntimeObject * ___userData1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___peer0;
	__d_args[1] = ___userData1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnDeliveryEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeliveryEvent_EndInvoke_m05C0765135AAFDC0090426711A3B91DACEB67B2E (OnDeliveryEvent_t58FF42C20F82ACEAC712FCD43C2BC16537AAA885 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkError__ctor_m9004E5509DAD525BA1FD62E81A5C0BFBF9822CAB (OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkError::Invoke(System.Net.IPEndPoint,System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkError_Invoke_mB34935A072053BD4A1B0807004CC4A7F6AEF8189 (OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, int32_t ___socketError1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___endPoint0, ___socketError1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___endPoint0, ___socketError1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___endPoint0, ___socketError1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___endPoint0, ___socketError1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___endPoint0, ___socketError1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___endPoint0, ___socketError1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___endPoint0, ___socketError1, targetMethod);
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
						GenericInterfaceActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t >::Invoke(targetMethod, targetThis, ___endPoint0, ___socketError1);
					else
						GenericVirtActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t >::Invoke(targetMethod, targetThis, ___endPoint0, ___socketError1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___endPoint0, ___socketError1);
					else
						VirtActionInvoker2< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___endPoint0, ___socketError1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___endPoint0, ___socketError1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___endPoint0, ___socketError1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnNetworkError::BeginInvoke(System.Net.IPEndPoint,System.Net.Sockets.SocketError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNetworkError_BeginInvoke_mE5A3E3C1603E39B5D2483053DDD7EEF1903F4195 (OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, int32_t ___socketError1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___endPoint0;
	__d_args[1] = Box(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var, &___socketError1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkError::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkError_EndInvoke_mEBC53B7791B0ED43CEAE1C9BF603145B57E58A85 (OnNetworkError_t76C92E9A69C6F99C7A9246F159374C34BB4E53F4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkLatencyUpdate__ctor_mCE0D805FA543622174410D37ADA309FA3526E4AA (OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate::Invoke(LiteNetLib.NetPeer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkLatencyUpdate_Invoke_m8EF7C851E19164ED24E147ED42F4CB4F6D2D5048 (OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, int32_t ___latency1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___latency1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___latency1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___peer0, ___latency1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___peer0, ___latency1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___peer0, ___latency1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___peer0, ___latency1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___latency1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t >::Invoke(targetMethod, targetThis, ___peer0, ___latency1);
					else
						GenericVirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t >::Invoke(targetMethod, targetThis, ___peer0, ___latency1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___peer0, ___latency1);
					else
						VirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___peer0, ___latency1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___peer0, ___latency1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___latency1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate::BeginInvoke(LiteNetLib.NetPeer,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNetworkLatencyUpdate_BeginInvoke_m71890C2AC2796D7DE5D2D493DA1704FAE4F1E7C5 (OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, int32_t ___latency1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___peer0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___latency1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkLatencyUpdate_EndInvoke_mA9DE5D6248295AE311C55F9727FF9043CB399331 (OnNetworkLatencyUpdate_tAFC14F604DF5BEE93D87925993E2FF07E8FD8D2C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceive::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceive__ctor_m6E8E909E3F885D07A54AF62952E622D8003A055F (OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceive::Invoke(LiteNetLib.NetPeer,LiteNetLib.NetPacketReader,LiteNetLib.DeliveryMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceive_Invoke_mCF82E687093FFBB8D4494953CE6719F6E9EB7FD0 (OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___reader1, uint8_t ___deliveryMethod2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___reader1, ___deliveryMethod2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___reader1, ___deliveryMethod2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(targetMethod, ___peer0, ___reader1, ___deliveryMethod2);
					else
						GenericVirtActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(targetMethod, ___peer0, ___reader1, ___deliveryMethod2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___peer0, ___reader1, ___deliveryMethod2);
					else
						VirtActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___peer0, ___reader1, ___deliveryMethod2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___reader1, ___deliveryMethod2, targetMethod);
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
						GenericInterfaceActionInvoker3< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(targetMethod, targetThis, ___peer0, ___reader1, ___deliveryMethod2);
					else
						GenericVirtActionInvoker3< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(targetMethod, targetThis, ___peer0, ___reader1, ___deliveryMethod2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___peer0, ___reader1, ___deliveryMethod2);
					else
						VirtActionInvoker3< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___peer0, ___reader1, ___deliveryMethod2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___peer0, ___reader1, ___deliveryMethod2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, uint8_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___reader1, ___deliveryMethod2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnNetworkReceive::BeginInvoke(LiteNetLib.NetPeer,LiteNetLib.NetPacketReader,LiteNetLib.DeliveryMethod,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNetworkReceive_BeginInvoke_mAACA628B3F7149F8C1B7335A5372942D7D8D9A16 (OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___reader1, uint8_t ___deliveryMethod2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeliveryMethod_tCB0FD0BF5C7FB339F354DA50DE890884D687C2B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___peer0;
	__d_args[1] = ___reader1;
	__d_args[2] = Box(DeliveryMethod_tCB0FD0BF5C7FB339F354DA50DE890884D687C2B0_il2cpp_TypeInfo_var, &___deliveryMethod2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceive::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceive_EndInvoke_m74C81508E8D3FC96263E2B603DA4FF95507F22B3 (OnNetworkReceive_tA0DA028E1F6F562F17A6D42DB71A86401E95BFA7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceiveUnconnected__ctor_mF6D59175AA43A8FB86AECF4DF7A68CA493B97750 (OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected::Invoke(System.Net.IPEndPoint,LiteNetLib.NetPacketReader,LiteNetLib.UnconnectedMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceiveUnconnected_Invoke_mC868182222DF1063901378263F8EEAA474FBD3AB (OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint0, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___reader1, int32_t ___messageType2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___remoteEndPoint0, ___reader1, ___messageType2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteEndPoint0, ___reader1, ___messageType2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(targetMethod, ___remoteEndPoint0, ___reader1, ___messageType2);
					else
						GenericVirtActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(targetMethod, ___remoteEndPoint0, ___reader1, ___messageType2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___remoteEndPoint0, ___reader1, ___messageType2);
					else
						VirtActionInvoker2< NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___remoteEndPoint0, ___reader1, ___messageType2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___remoteEndPoint0, ___reader1, ___messageType2, targetMethod);
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
						GenericInterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(targetMethod, targetThis, ___remoteEndPoint0, ___reader1, ___messageType2);
					else
						GenericVirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(targetMethod, targetThis, ___remoteEndPoint0, ___reader1, ___messageType2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___remoteEndPoint0, ___reader1, ___messageType2);
					else
						VirtActionInvoker3< IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___remoteEndPoint0, ___reader1, ___messageType2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___remoteEndPoint0, ___reader1, ___messageType2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteEndPoint0, ___reader1, ___messageType2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected::BeginInvoke(System.Net.IPEndPoint,LiteNetLib.NetPacketReader,LiteNetLib.UnconnectedMessageType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNetworkReceiveUnconnected_BeginInvoke_m9F06CD40B932642A827E4FB4C5CD590587BD3934 (OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint0, NetPacketReader_tE7FB031A4932F4E4A421C87B30F0DAC7E1FC1BB5 * ___reader1, int32_t ___messageType2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnconnectedMessageType_t6DD38578F0D2AEAB7FBA61ADAE334685E292853D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___remoteEndPoint0;
	__d_args[1] = ___reader1;
	__d_args[2] = Box(UnconnectedMessageType_t6DD38578F0D2AEAB7FBA61ADAE334685E292853D_il2cpp_TypeInfo_var, &___messageType2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNetworkReceiveUnconnected_EndInvoke_m5C2E9AE2FD1BCAB1AF67BE2E6EAE35DA266428BB (OnNetworkReceiveUnconnected_tB7DA1F01CD2C2198F445AA79B90B776AE05A5C0F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnNtpResponseEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNtpResponseEvent__ctor_mC8272E87D76AA3A9590A25B32F8E59B02543CA8D (OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnNtpResponseEvent::Invoke(LiteNetLib.Utils.NtpPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNtpResponseEvent_Invoke_m683BD5F869630704FC7F4253034AFCBC031C082D (OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC * __this, NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * ___packet0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___packet0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___packet0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___packet0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___packet0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___packet0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___packet0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___packet0, targetMethod);
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
						GenericInterfaceActionInvoker1< NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * >::Invoke(targetMethod, targetThis, ___packet0);
					else
						GenericVirtActionInvoker1< NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * >::Invoke(targetMethod, targetThis, ___packet0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___packet0);
					else
						VirtActionInvoker1< NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___packet0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___packet0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___packet0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnNtpResponseEvent::BeginInvoke(LiteNetLib.Utils.NtpPacket,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNtpResponseEvent_BeginInvoke_m85CF799DB8EDC2CA43A221502D1E18A95A293917 (OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC * __this, NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * ___packet0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___packet0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnNtpResponseEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNtpResponseEvent_EndInvoke_m5A663535D3F5FC874ABDFFFC8C6EC740D0F89144 (OnNtpResponseEvent_tA7FA7FC093F264A03BFF7EC851EEC62C5975A1DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnPeerConnected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerConnected__ctor_m15B9F0FC15B620883E531A334B0B56DD5C0E406E (OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnPeerConnected::Invoke(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerConnected_Invoke_mE91BF03A26AF0388846D38DC503733DB971AB9AB (OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___peer0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___peer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___peer0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___peer0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, targetMethod);
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
						GenericInterfaceActionInvoker1< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * >::Invoke(targetMethod, targetThis, ___peer0);
					else
						GenericVirtActionInvoker1< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * >::Invoke(targetMethod, targetThis, ___peer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___peer0);
					else
						VirtActionInvoker1< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___peer0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___peer0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnPeerConnected::BeginInvoke(LiteNetLib.NetPeer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPeerConnected_BeginInvoke_mF1643ADB70E769DDA33BE5C4A1866E903B8632FB (OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___peer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnPeerConnected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerConnected_EndInvoke_m6C8F8E8BAFDFB7EE55515A2A99FF9C071FDE896C (OnPeerConnected_t4A456F56A9F9D2F84D19B39F66FC9B90C0116EE3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.EventBasedNetListener/OnPeerDisconnected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerDisconnected__ctor_m81DA08289CDBD91959CFD9AC68416E4A2810A183 (OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.EventBasedNetListener/OnPeerDisconnected::Invoke(LiteNetLib.NetPeer,LiteNetLib.DisconnectInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerDisconnected_Invoke_mCDE12A0FBE947E28DAA1A2EA9015B829281ED0B3 (OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  ___disconnectInfo1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___disconnectInfo1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___disconnectInfo1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(targetMethod, ___peer0, ___disconnectInfo1);
					else
						GenericVirtActionInvoker1< DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(targetMethod, ___peer0, ___disconnectInfo1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___peer0, ___disconnectInfo1);
					else
						VirtActionInvoker1< DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___peer0, ___disconnectInfo1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___peer0, ___disconnectInfo1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(targetMethod, targetThis, ___peer0, ___disconnectInfo1);
					else
						GenericVirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(targetMethod, targetThis, ___peer0, ___disconnectInfo1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___peer0, ___disconnectInfo1);
					else
						VirtActionInvoker2< NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___peer0, ___disconnectInfo1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___peer0, ___disconnectInfo1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___peer0, ___disconnectInfo1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.EventBasedNetListener/OnPeerDisconnected::BeginInvoke(LiteNetLib.NetPeer,LiteNetLib.DisconnectInfo,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPeerDisconnected_BeginInvoke_m93781E99FFB756D6497641F58FAA4EF6B4B40788 (OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F  ___disconnectInfo1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___peer0;
	__d_args[1] = Box(DisconnectInfo_t86D6CD5E91184FD5841D478B0D6DC2E04CEB9B2F_il2cpp_TypeInfo_var, &___disconnectInfo1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LiteNetLib.EventBasedNetListener/OnPeerDisconnected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPeerDisconnected_EndInvoke_mA032A96F443B493E84AC71B873017D8EC924EC6E (OnPeerDisconnected_tEE9B840C2614A3A32DE963A1148DE66D0DAF3B6C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NatIntroduceRequestPacket_get_Internal_m7CDC232965E806CF41B145D28ED28E3222B87BA7 (NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC * __this, const RuntimeMethod* method)
{
	{
		// public IPEndPoint Internal { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CInternalU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::set_Internal(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceRequestPacket_set_Internal_m37D477F895D05250D5E8B20E93E4CBCFD39F8ED5 (NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	{
		// public IPEndPoint Internal { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatIntroduceRequestPacket_get_Token_mF4B0A6C2B1800689501A3C68DC7A307D741D7F13 (NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceRequestPacket_set_Token_m8E5DE670EF0CC180BDE91E756417F4072583360D (NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceRequestPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceRequestPacket__ctor_mF04806295568706EB0A14F9E2DD8DECEA114B77D (NatIntroduceRequestPacket_t697378D063E58F135405AE6943ACB31E6A9CDFCC * __this, const RuntimeMethod* method)
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
// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NatIntroduceResponsePacket_get_Internal_m6BA8CB13C081D2D27151FFBFEC69F5BE9D9D45DF (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, const RuntimeMethod* method)
{
	{
		// public IPEndPoint Internal { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CInternalU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::set_Internal(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceResponsePacket_set_Internal_m573342AE78C9CACC46E12BF86A3931C703A8461A (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	{
		// public IPEndPoint Internal { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Net.IPEndPoint LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::get_External()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NatIntroduceResponsePacket_get_External_m2FC8CC6BE4C4E2DC81EDD2280987119C6A50FEDD (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, const RuntimeMethod* method)
{
	{
		// public IPEndPoint External { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CExternalU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::set_External(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceResponsePacket_set_External_m8FCD3677C48E6E25AA69452F95C7C9257D1D9B66 (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	{
		// public IPEndPoint External { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___value0;
		__this->set_U3CExternalU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatIntroduceResponsePacket_get_Token_m3A3106D6A20D44A9C37BF71D837D64CC1B7301E3 (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceResponsePacket_set_Token_m5D7FCF454CF52EFB7A43D05467324CD94809EE44 (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatIntroduceResponsePacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatIntroduceResponsePacket__ctor_m740AC72D87B05A6CDB952671D04E62CD0BE645EF (NatIntroduceResponsePacket_t6419CB1942F389D212C330168ACC966B9DC6C528 * __this, const RuntimeMethod* method)
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
// System.String LiteNetLib.NatPunchModule/NatPunchPacket::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatPunchPacket_get_Token_m0508713D9424CF7BFDCF52094DF8D0B7218D9C83 (NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84 * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatPunchPacket::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatPunchPacket_set_Token_m66CBF5D301E50DFBE123815602AC740A721DE8ED (NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean LiteNetLib.NatPunchModule/NatPunchPacket::get_IsExternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatPunchPacket_get_IsExternal_m84E9EB851D76DFE14A76DFA0034847614AAADEBE (NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsExternal { get; set; }
		bool L_0 = __this->get_U3CIsExternalU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatPunchPacket::set_IsExternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatPunchPacket_set_IsExternal_mFC57CBF430788042FA9860A252301DFB2E05DEE7 (NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsExternal { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsExternalU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void LiteNetLib.NatPunchModule/NatPunchPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatPunchPacket__ctor_mFB39C00B70638B620B3BA428C9818B01873F76F6 (NatPunchPacket_t150D8E2B0605521728244A9231A1FD53256F3F84 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: LiteNetLib.NatPunchModule/RequestEventData
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_pinvoke(const RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763& unmarshaled, RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_pinvoke& marshaled)
{
	Exception_t* ___LocalEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LocalEndPoint' of type 'RequestEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LocalEndPoint_0Exception, NULL);
}
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_pinvoke_back(const RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_pinvoke& marshaled, RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763& unmarshaled)
{
	Exception_t* ___LocalEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LocalEndPoint' of type 'RequestEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LocalEndPoint_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NatPunchModule/RequestEventData
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_pinvoke_cleanup(RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LiteNetLib.NatPunchModule/RequestEventData
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_com(const RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763& unmarshaled, RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_com& marshaled)
{
	Exception_t* ___LocalEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LocalEndPoint' of type 'RequestEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LocalEndPoint_0Exception, NULL);
}
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_com_back(const RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_com& marshaled, RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763& unmarshaled)
{
	Exception_t* ___LocalEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LocalEndPoint' of type 'RequestEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LocalEndPoint_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NatPunchModule/RequestEventData
IL2CPP_EXTERN_C void RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshal_com_cleanup(RequestEventData_t16C7765C8C766077661CBC028E6D89DE4EA86763_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LiteNetLib.NatPunchModule/SuccessEventData
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_pinvoke(const SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091& unmarshaled, SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_pinvoke& marshaled)
{
	Exception_t* ___TargetEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TargetEndPoint' of type 'SuccessEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TargetEndPoint_0Exception, NULL);
}
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_pinvoke_back(const SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_pinvoke& marshaled, SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091& unmarshaled)
{
	Exception_t* ___TargetEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TargetEndPoint' of type 'SuccessEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TargetEndPoint_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NatPunchModule/SuccessEventData
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_pinvoke_cleanup(SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LiteNetLib.NatPunchModule/SuccessEventData
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_com(const SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091& unmarshaled, SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_com& marshaled)
{
	Exception_t* ___TargetEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TargetEndPoint' of type 'SuccessEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TargetEndPoint_0Exception, NULL);
}
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_com_back(const SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_com& marshaled, SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091& unmarshaled)
{
	Exception_t* ___TargetEndPoint_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TargetEndPoint' of type 'SuccessEventData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TargetEndPoint_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NatPunchModule/SuccessEventData
IL2CPP_EXTERN_C void SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshal_com_cleanup(SuccessEventData_t6342863F17538B0658BBD3ED8F634B5F394B3091_marshaled_com& marshaled)
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
// System.Int32 LiteNetLib.NativeSocket/UnixSock::recvfrom(System.IntPtr,System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixSock_recvfrom_mF4D8982339AEFA75CA2D1A6431ACBFE44B05E462 (intptr_t ___socketHandle0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pinnedBuffer1, int32_t ___len2, int32_t ___socketFlags3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___socketAddress4, int32_t* ___socketAddressSize5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "recvfrom", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pinnedBuffer1' to native representation
	uint8_t* ____pinnedBuffer1_marshaled = NULL;
	if (___pinnedBuffer1 != NULL)
	{
		____pinnedBuffer1_marshaled = reinterpret_cast<uint8_t*>((___pinnedBuffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___socketAddress4' to native representation
	uint8_t* ____socketAddress4_marshaled = NULL;
	if (___socketAddress4 != NULL)
	{
		il2cpp_array_size_t ____socketAddress4_Length = (___socketAddress4)->max_length;
		____socketAddress4_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____socketAddress4_Length);
		memset(____socketAddress4_marshaled, 0, ____socketAddress4_Length * sizeof(uint8_t));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(recvfrom)(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___socketAddress4' back from native representation
	if (____socketAddress4_marshaled != NULL)
	{
		il2cpp_array_size_t ____socketAddress4_Length = (___socketAddress4)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____socketAddress4_Length); i++)
		{
			(___socketAddress4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____socketAddress4_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___socketAddress4' native representation
	il2cpp_codegen_marshal_free(____socketAddress4_marshaled);
	____socketAddress4_marshaled = NULL;

	return returnValue;
}
// System.Int32 LiteNetLib.NativeSocket/UnixSock::sendto(System.IntPtr,System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixSock_sendto_m57ADA6F79D96708B181359E08C633B5B64F918D3 (intptr_t ___socketHandle0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pinnedBuffer1, int32_t ___len2, int32_t ___socketFlags3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___socketAddress4, int32_t ___socketAddressSize5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "sendto", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pinnedBuffer1' to native representation
	uint8_t* ____pinnedBuffer1_marshaled = NULL;
	if (___pinnedBuffer1 != NULL)
	{
		____pinnedBuffer1_marshaled = reinterpret_cast<uint8_t*>((___pinnedBuffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___socketAddress4' to native representation
	uint8_t* ____socketAddress4_marshaled = NULL;
	if (___socketAddress4 != NULL)
	{
		____socketAddress4_marshaled = reinterpret_cast<uint8_t*>((___socketAddress4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sendto)(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LiteNetLib.NativeSocket/WinSock::recvfrom(System.IntPtr,System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinSock_recvfrom_mD76D27334CDCC3D3BF1306919259668C252339F8 (intptr_t ___socketHandle0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pinnedBuffer1, int32_t ___len2, int32_t ___socketFlags3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___socketAddress4, int32_t* ___socketAddressSize5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ws2_32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ws2_32.dll"), "recvfrom", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pinnedBuffer1' to native representation
	uint8_t* ____pinnedBuffer1_marshaled = NULL;
	if (___pinnedBuffer1 != NULL)
	{
		____pinnedBuffer1_marshaled = reinterpret_cast<uint8_t*>((___pinnedBuffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___socketAddress4' to native representation
	uint8_t* ____socketAddress4_marshaled = NULL;
	if (___socketAddress4 != NULL)
	{
		il2cpp_array_size_t ____socketAddress4_Length = (___socketAddress4)->max_length;
		____socketAddress4_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____socketAddress4_Length);
		memset(____socketAddress4_marshaled, 0, ____socketAddress4_Length * sizeof(uint8_t));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ws2_32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(recvfrom)(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___socketAddress4' back from native representation
	if (____socketAddress4_marshaled != NULL)
	{
		il2cpp_array_size_t ____socketAddress4_Length = (___socketAddress4)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____socketAddress4_Length); i++)
		{
			(___socketAddress4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____socketAddress4_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___socketAddress4' native representation
	il2cpp_codegen_marshal_free(____socketAddress4_marshaled);
	____socketAddress4_marshaled = NULL;

	return returnValue;
}
// System.Int32 LiteNetLib.NativeSocket/WinSock::sendto(System.IntPtr,System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinSock_sendto_mA397A06F4C3472658AA1398963ACB4DAEB198704 (intptr_t ___socketHandle0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pinnedBuffer1, int32_t ___len2, int32_t ___socketFlags3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___socketAddress4, int32_t ___socketAddressSize5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ws2_32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ws2_32.dll"), "sendto", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pinnedBuffer1' to native representation
	uint8_t* ____pinnedBuffer1_marshaled = NULL;
	if (___pinnedBuffer1 != NULL)
	{
		____pinnedBuffer1_marshaled = reinterpret_cast<uint8_t*>((___pinnedBuffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___socketAddress4' to native representation
	uint8_t* ____socketAddress4_marshaled = NULL;
	if (___socketAddress4 != NULL)
	{
		____socketAddress4_marshaled = reinterpret_cast<uint8_t*>((___socketAddress4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ws2_32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sendto)(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socketHandle0, ____pinnedBuffer1_marshaled, ___len2, ___socketFlags3, ____socketAddress4_marshaled, ___socketAddressSize5);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
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
// System.Boolean LiteNetLib.NetManager/IPEndPointComparer::Equals(System.Net.IPEndPoint,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPEndPointComparer_Equals_m904A52AC98649F02EDC2CCFFD613CEF972889D27 (IPEndPointComparer_tEE1C3D03E9B172E2D8806B97F9C36726FE45B9E6 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___x0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___y1, const RuntimeMethod* method)
{
	{
		// return x.Address.Equals(y.Address) && x.Port == y.Port;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___x0;
		NullCheck(L_0);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_1;
		L_1 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_0, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_2 = ___y1;
		NullCheck(L_2);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_3;
		L_3 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_5 = ___x0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline(L_5, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_7 = ___y1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline(L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 LiteNetLib.NetManager/IPEndPointComparer::GetHashCode(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPEndPointComparer_GetHashCode_mBB48432AD0C75C60FCB8AA226EE71B3AB1FB3430 (IPEndPointComparer_tEE1C3D03E9B172E2D8806B97F9C36726FE45B9E6 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___obj0, const RuntimeMethod* method)
{
	{
		// return obj.GetHashCode();
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void LiteNetLib.NetManager/IPEndPointComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPointComparer__ctor_m329861A6EC08923C82A06970D4E7D975E0E7318A (IPEndPointComparer_tEE1C3D03E9B172E2D8806B97F9C36726FE45B9E6 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: LiteNetLib.NetManager/NetPeerEnumerator
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_pinvoke(const NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E& unmarshaled, NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialPeer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialPeer' of type 'NetPeerEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialPeer_0Exception, NULL);
}
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_pinvoke_back(const NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_pinvoke& marshaled, NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E& unmarshaled)
{
	Exception_t* ____initialPeer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialPeer' of type 'NetPeerEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialPeer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NetManager/NetPeerEnumerator
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_pinvoke_cleanup(NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LiteNetLib.NetManager/NetPeerEnumerator
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_com(const NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E& unmarshaled, NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_com& marshaled)
{
	Exception_t* ____initialPeer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialPeer' of type 'NetPeerEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialPeer_0Exception, NULL);
}
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_com_back(const NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_com& marshaled, NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E& unmarshaled)
{
	Exception_t* ____initialPeer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialPeer' of type 'NetPeerEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialPeer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.NetManager/NetPeerEnumerator
IL2CPP_EXTERN_C void NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshal_com_cleanup(NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E_marshaled_com& marshaled)
{
}
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::.ctor(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator__ctor_m568BA319F150982FAEE33AB83D316478847F889A (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___p0, const RuntimeMethod* method)
{
	{
		// _initialPeer = p;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = ___p0;
		__this->set__initialPeer_0(L_0);
		// _p = null;
		__this->set__p_1((NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetPeerEnumerator__ctor_m568BA319F150982FAEE33AB83D316478847F889A_AdjustorThunk (RuntimeObject * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___p0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	NetPeerEnumerator__ctor_m568BA319F150982FAEE33AB83D316478847F889A(_thisAdjusted, ___p0, method);
}
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator_Dispose_m7E6D5D5394C3E012BEAF83848EA9B585F33FA007 (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetPeerEnumerator_Dispose_m7E6D5D5394C3E012BEAF83848EA9B585F33FA007_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	NetPeerEnumerator_Dispose_m7E6D5D5394C3E012BEAF83848EA9B585F33FA007(_thisAdjusted, method);
}
// System.Boolean LiteNetLib.NetManager/NetPeerEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetPeerEnumerator_MoveNext_m79FF2EA6ECB9CFB57CBB86064B843AC460B24BEE (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * G_B2_0 = NULL;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * G_B1_0 = NULL;
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * G_B3_0 = NULL;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * G_B3_1 = NULL;
	{
		// _p = _p == null ? _initialPeer : _p.NextPeer;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = __this->get__p_1();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_1 = __this->get__p_1();
		NullCheck(L_1);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_2 = L_1->get_NextPeer_11();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_3 = __this->get__initialPeer_0();
		G_B3_0 = ((NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *)(L_3));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		G_B3_1->set__p_1(G_B3_0);
		// return _p != null;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_4 = __this->get__p_1();
		return (bool)((!(((RuntimeObject*)(NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetPeerEnumerator_MoveNext_m79FF2EA6ECB9CFB57CBB86064B843AC460B24BEE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetPeerEnumerator_MoveNext_m79FF2EA6ECB9CFB57CBB86064B843AC460B24BEE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LiteNetLib.NetManager/NetPeerEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863 (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException();
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	NetPeerEnumerator_Reset_mFB8F0D2A29C0E338668C57647F236E1A3C822863(_thisAdjusted, method);
}
// LiteNetLib.NetPeer LiteNetLib.NetManager/NetPeerEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * NetPeerEnumerator_get_Current_mD6AEBA4B933167111CB6E1E89CBED9E3A9F148C6 (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// public NetPeer Current => _p;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = __this->get__p_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * NetPeerEnumerator_get_Current_mD6AEBA4B933167111CB6E1E89CBED9E3A9F148C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * _returnValue;
	_returnValue = NetPeerEnumerator_get_Current_mD6AEBA4B933167111CB6E1E89CBED9E3A9F148C6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object LiteNetLib.NetManager/NetPeerEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NetPeerEnumerator_System_Collections_IEnumerator_get_Current_m4AA282EA22359278EBB804F0A80EA29A3AF9DCEA (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current => _p;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = __this->get__p_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * NetPeerEnumerator_System_Collections_IEnumerator_get_Current_m4AA282EA22359278EBB804F0A80EA29A3AF9DCEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * _thisAdjusted = reinterpret_cast<NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = NetPeerEnumerator_System_Collections_IEnumerator_get_Current_m4AA282EA22359278EBB804F0A80EA29A3AF9DCEA_inline(_thisAdjusted, method);
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
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate__ctor_m1AEBD97E9BF4920ABA4BEC8D4B33517E0F844F66 (SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::Invoke(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m7BA24A7CAC4E2157976DC45C0A7DD9FB9448A76F (SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D * __this, NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___userData1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___reader0, ___userData1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___reader0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___reader0, ___userData1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___reader0, ___userData1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___reader0, ___userData1);
					else
						GenericVirtActionInvoker2< NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___reader0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___reader0, ___userData1);
					else
						VirtActionInvoker2< NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___reader0, ___userData1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___userData1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::BeginInvoke(LiteNetLib.Utils.NetDataReader,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscribeDelegate_BeginInvoke_m13D990061C3745C04C88CA25F1BA2DDF4D9C5B75 (SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D * __this, NetDataReader_tA747279B2F738EBE02786D365B2D7F0CC18438DD * ___reader0, RuntimeObject * ___userData1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___reader0;
	__d_args[1] = ___userData1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_EndInvoke_m6DE0C6AF3F2D041B662FBA5386A9FF75E3391D10 (SubscribeDelegate_t532ADC1BD40102ACF1A3422AACAC6D75C6B2252D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.NetPeer/IncomingFragments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncomingFragments__ctor_mD450002EB896B4D72D10450B117F3BFCA7F17074 (IncomingFragments_t5B14594E005630039C2C1B8A907F85B8C48F2C72 * __this, const RuntimeMethod* method)
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
// System.Void LiteNetLib.Utils.NetSerializer/CustomType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomType__ctor_m1FA3D446117535ADB65CCB83D9A37950C285B7D4 (CustomType_t35A6CE4F06DB662416E3A3759731ED826EAFC631 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: LiteNetLib.ReliableChannel/PendingPacket
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_pinvoke(const PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4& unmarshaled, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_pinvoke& marshaled)
{
	Exception_t* ____packet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_packet' of type 'PendingPacket': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____packet_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_pinvoke_back(const PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_pinvoke& marshaled, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4& unmarshaled)
{
	Exception_t* ____packet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_packet' of type 'PendingPacket': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____packet_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.ReliableChannel/PendingPacket
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_pinvoke_cleanup(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LiteNetLib.ReliableChannel/PendingPacket
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_com(const PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4& unmarshaled, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_com& marshaled)
{
	Exception_t* ____packet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_packet' of type 'PendingPacket': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____packet_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_com_back(const PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_com& marshaled, PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4& unmarshaled)
{
	Exception_t* ____packet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_packet' of type 'PendingPacket': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____packet_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LiteNetLib.ReliableChannel/PendingPacket
IL2CPP_EXTERN_C void PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshal_com_cleanup(PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4_marshaled_com& marshaled)
{
}
// System.String LiteNetLib.ReliableChannel/PendingPacket::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PendingPacket_ToString_m5462F21A93AF26F33E7D4FCA7321844CD096D3F3 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		// return _packet == null ? "Empty" : _packet.Sequence.ToString();
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = __this->get__packet_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_1 = __this->get__packet_0();
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = NetPacket_get_Sequence_m6527323A1E1FF70E42C20F0BD0862123B9387AF0(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = UInt16_ToString_mCD21CDBE273387A21683B6C00EF5EBEEFF7A8F6D((uint16_t*)(&V_0), /*hidden argument*/NULL);
		return L_3;
	}

IL_001c:
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}
}
IL2CPP_EXTERN_C  String_t* PendingPacket_ToString_m5462F21A93AF26F33E7D4FCA7321844CD096D3F3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * _thisAdjusted = reinterpret_cast<PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PendingPacket_ToString_m5462F21A93AF26F33E7D4FCA7321844CD096D3F3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LiteNetLib.ReliableChannel/PendingPacket::Init(LiteNetLib.NetPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingPacket_Init_mF68FA054F319D8E5571BC18E8BD7E535E4DA75D2 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method)
{
	{
		// _packet = packet;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = ___packet0;
		__this->set__packet_0(L_0);
		// _isSent = false;
		__this->set__isSent_2((bool)0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PendingPacket_Init_mF68FA054F319D8E5571BC18E8BD7E535E4DA75D2_AdjustorThunk (RuntimeObject * __this, NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * ___packet0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * _thisAdjusted = reinterpret_cast<PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *>(__this + _offset);
	PendingPacket_Init_mF68FA054F319D8E5571BC18E8BD7E535E4DA75D2(_thisAdjusted, ___packet0, method);
}
// System.Boolean LiteNetLib.ReliableChannel/PendingPacket::TrySend(System.Int64,LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PendingPacket_TrySend_m64574EF3A35EF2CC0550592199CEAE748B99220D (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, int64_t ___currentTime0, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// if (_packet == null)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = __this->get__packet_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (_isSent) //check send time
		bool L_1 = __this->get__isSent_2();
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// double resendDelay = peer.ResendDelay * TimeSpan.TicksPerMillisecond;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_2 = ___peer1;
		NullCheck(L_2);
		double L_3;
		L_3 = NetPeer_get_ResendDelay_m756E0CF135BF9B4DF21A5FF28699A67778A8013E_inline(L_2, /*hidden argument*/NULL);
		V_0 = ((double)il2cpp_codegen_multiply((double)L_3, (double)(10000.0)));
		// double packetHoldTime = currentTime - _timeStamp;
		int64_t L_4 = ___currentTime0;
		int64_t L_5 = __this->get__timeStamp_1();
		// if (packetHoldTime < resendDelay)
		double L_6 = V_0;
		if ((!(((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_5))))) < ((double)L_6))))
		{
			goto IL_0031;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0031:
	{
		// _timeStamp = currentTime;
		int64_t L_7 = ___currentTime0;
		__this->set__timeStamp_1(L_7);
		// _isSent = true;
		__this->set__isSent_2((bool)1);
		// peer.SendUserData(_packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_8 = ___peer1;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_9 = __this->get__packet_0();
		NullCheck(L_8);
		NetPeer_SendUserData_m02C0F0C9702D795181BF164BAFB9901EB60C77CC(L_8, L_9, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool PendingPacket_TrySend_m64574EF3A35EF2CC0550592199CEAE748B99220D_AdjustorThunk (RuntimeObject * __this, int64_t ___currentTime0, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * _thisAdjusted = reinterpret_cast<PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PendingPacket_TrySend_m64574EF3A35EF2CC0550592199CEAE748B99220D(_thisAdjusted, ___currentTime0, ___peer1, method);
	return _returnValue;
}
// System.Boolean LiteNetLib.ReliableChannel/PendingPacket::Clear(LiteNetLib.NetPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PendingPacket_Clear_m75268CF6037A4519281CA969D386B0B3DC30C751 (PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, const RuntimeMethod* method)
{
	{
		// if (_packet != null)
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_0 = __this->get__packet_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// peer.RecycleAndDeliver(_packet);
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_1 = ___peer0;
		NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 * L_2 = __this->get__packet_0();
		NullCheck(L_1);
		NetPeer_RecycleAndDeliver_mF5E3FAFAA0C3F3E1DA1853C4F245D46F7AA3723E(L_1, L_2, /*hidden argument*/NULL);
		// _packet = null;
		__this->set__packet_0((NetPacket_tB263A072AA8843F9B07C76145690AB94186B15C4 *)NULL);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PendingPacket_Clear_m75268CF6037A4519281CA969D386B0B3DC30C751_AdjustorThunk (RuntimeObject * __this, NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * ___peer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 * _thisAdjusted = reinterpret_cast<PendingPacket_tF832CD7B1555338F829509792CE17BC7EB8A83A4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PendingPacket_Clear_m75268CF6037A4519281CA969D386B0B3DC30C751(_thisAdjusted, ___peer0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline (IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = __this->get_addressList_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NtpPacket_get_Bytes_m26DAE9A1D9A3D5811B0334857BFAC00D5EF40532_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Bytes { get; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CBytesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  NtpPacket_get_DestinationTimestamp_mDAB44E274485DB66A6BD8B0A8783F266F8159559_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CDestinationTimestampU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_m7892C379763FB79666F67C4475E8317F70810AC9_inline (NtpPacket_t919C9F7E5EF45557B78BEFDD02B90A7120790895 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CDestinationTimestampU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mEFF8BC5659E2D1A39A1CF812FEADEA4CFD524577_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___startIndex1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint64_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m193FFB5D72BAD874770735AB3B1D4BC645B7A4B5_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetPeer_get_ResendDelay_m756E0CF135BF9B4DF21A5FF28699A67778A8013E_inline (NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * __this, const RuntimeMethod* method)
{
	{
		// internal double ResendDelay => _resendDelay;
		double L_0 = __this->get__resendDelay_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * NetPeerEnumerator_get_Current_mD6AEBA4B933167111CB6E1E89CBED9E3A9F148C6_inline (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// public NetPeer Current => _p;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = __this->get__p_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * NetPeerEnumerator_System_Collections_IEnumerator_get_Current_m4AA282EA22359278EBB804F0A80EA29A3AF9DCEA_inline (NetPeerEnumerator_t6883802B309C4B3821BA61D343D6C43D90750D9E * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current => _p;
		NetPeer_tB9232D3A6A637E5F2F6C26C7392235AB897917C6 * L_0 = __this->get__p_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m193FFB5D72BAD874770735AB3B1D4BC645B7A4B5_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, uint64_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		uint64_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		uint64_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_5>>8)))));
		// buffer[offset + 2] = (byte)(data >> 16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		uint64_t L_8 = ___data2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_8>>((int32_t)16))))));
		// buffer[offset + 3] = (byte)(data >> 24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		uint64_t L_11 = ___data2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_11>>((int32_t)24))))));
		// buffer[offset + 4] = (byte)(data >> 32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___buffer0;
		int32_t L_13 = ___offset1;
		uint64_t L_14 = ___data2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)4))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)32))))));
		// buffer[offset + 5] = (byte)(data >> 40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___buffer0;
		int32_t L_16 = ___offset1;
		uint64_t L_17 = ___data2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)5))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_17>>((int32_t)40))))));
		// buffer[offset + 6] = (byte)(data >> 48);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___buffer0;
		int32_t L_19 = ___offset1;
		uint64_t L_20 = ___data2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)6))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_20>>((int32_t)48))))));
		// buffer[offset + 7] = (byte)(data >> 56);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___buffer0;
		int32_t L_22 = ___offset1;
		uint64_t L_23 = ___data2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)7))), (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_23>>((int32_t)56))))));
		// }
		return;
	}
}
