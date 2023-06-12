#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_t8956C826A49866445E54956164D36A98DE3362FF;
// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t7527D4AFC49170E0807BE8D3DC2CD791288BB98E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D;
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009;
// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8;
// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305;
// System.Predicate`1<Meta.WitAi.VoiceService>
struct Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F;
// Meta.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44;
// Meta.Voice.TranscriptionRequest`4<System.Object,System.Object,System.Object,System.Object>
struct TranscriptionRequest_4_t38EF07F38D1F8468DBCEC1EE48064DC6F33D84AE;
// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Component>[]
struct SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859;
// Meta.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558;
// Meta.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB;
// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F;
// Meta.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioClipAudioSource
struct AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Net.CookieContainer
struct CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t60BBCAD31980E43542AF8E98ECBAEE51A8AEC9B5;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC;
// Meta.WitAi.ITelemetryEventsProvider
struct ITelemetryEventsProvider_t9510930B2567003E15FEB5C0FC41099DB87E3845;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tA730F4FD31F9C16A7AC4D71C5C92C69712472DAF;
// Meta.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// Meta.WitAi.Interfaces.IWitRequestProvider
struct IWitRequestProvider_t5222C9320576E09C679C9B8609B7489656B8C01D;
// Meta.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D;
// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564;
// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B;
// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975;
// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D;
// Meta.WitAi.Data.WitValue
struct WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7;
// Meta.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E;
// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// AudioClipAudioSource/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7;
// AudioClipAudioSource/<ProcessClip>d__25
struct U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Meta.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A;
// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;
// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470;
// Meta.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E;
// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111
struct U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B;
// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83
struct U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE;

IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPAudioRequest_4_set_ResponseData_mD2317797C8469065EFCE40F40E0F4CD5E9A72F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequest_4_set_Transcription_m66C6B3AAA4C94521471BD7D0294F17DB324F71B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateDueToTimeLimitU3Ed__83_System_Collections_IEnumerator_Reset_m2AC3FD9A3D970AD71E45FE99550108B86A9DAAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformMainThreadCallbacksU3Ed__111_System_Collections_IEnumerator_Reset_m69AD3C7CC756D41CA491CD65B83C6016F2D795AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____tail_3)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__tail_3() const { return ____tail_3; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____head_4)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__head_4() const { return ____head_4; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


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


// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____slots_8)); }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009  : public RuntimeObject
{
public:
	// System.Int64 Meta.WitAi.Data.RingBuffer`1/Marker::bufferDataIndex
	int64_t ___bufferDataIndex_0;
	// System.Int32 Meta.WitAi.Data.RingBuffer`1/Marker::index
	int32_t ___index_1;
	// Meta.WitAi.Data.RingBuffer`1<T> Meta.WitAi.Data.RingBuffer`1/Marker::ringBuffer
	RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * ___ringBuffer_2;

public:
	inline static int32_t get_offset_of_bufferDataIndex_0() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___bufferDataIndex_0)); }
	inline int64_t get_bufferDataIndex_0() const { return ___bufferDataIndex_0; }
	inline int64_t* get_address_of_bufferDataIndex_0() { return &___bufferDataIndex_0; }
	inline void set_bufferDataIndex_0(int64_t value)
	{
		___bufferDataIndex_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_ringBuffer_2() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___ringBuffer_2)); }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * get_ringBuffer_2() const { return ___ringBuffer_2; }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 ** get_address_of_ringBuffer_2() { return &___ringBuffer_2; }
	inline void set_ringBuffer_2(RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * value)
	{
		___ringBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringBuffer_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Data.AudioBufferConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_0;
	// System.Single Meta.WitAi.Data.AudioBufferConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_1;

public:
	inline static int32_t get_offset_of_sampleLengthInMs_0() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F, ___sampleLengthInMs_0)); }
	inline int32_t get_sampleLengthInMs_0() const { return ___sampleLengthInMs_0; }
	inline int32_t* get_address_of_sampleLengthInMs_0() { return &___sampleLengthInMs_0; }
	inline void set_sampleLengthInMs_0(int32_t value)
	{
		___sampleLengthInMs_0 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_1() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F, ___micBufferLengthInSeconds_1)); }
	inline float get_micBufferLengthInSeconds_1() const { return ___micBufferLengthInSeconds_1; }
	inline float* get_address_of_micBufferLengthInSeconds_1() { return &___micBufferLengthInSeconds_1; }
	inline void set_micBufferLengthInSeconds_1(float value)
	{
		___micBufferLengthInSeconds_1 = value;
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____overriddenCallbacksHash_1;

public:
	inline static int32_t get_offset_of__overriddenCallbacks_0() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacks_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__overriddenCallbacks_0() const { return ____overriddenCallbacks_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__overriddenCallbacks_0() { return &____overriddenCallbacks_0; }
	inline void set__overriddenCallbacks_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____overriddenCallbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacks_0), (void*)value);
	}

	inline static int32_t get_offset_of__overriddenCallbacksHash_1() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacksHash_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__overriddenCallbacksHash_1() const { return ____overriddenCallbacksHash_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__overriddenCallbacksHash_1() { return &____overriddenCallbacksHash_1; }
	inline void set__overriddenCallbacksHash_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____overriddenCallbacksHash_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacksHash_1), (void*)value);
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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_16;

public:
	inline static int32_t get_offset_of__readOnly_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_8)); }
	inline bool get__readOnly_8() const { return ____readOnly_8; }
	inline bool* get_address_of__readOnly_8() { return &____readOnly_8; }
	inline void set__readOnly_8(bool value)
	{
		____readOnly_8 = value;
	}

	inline static int32_t get_offset_of__entriesArray_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_9)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_9() const { return ____entriesArray_9; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_9() { return &____entriesArray_9; }
	inline void set__entriesArray_9(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_9), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_10() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_10)); }
	inline RuntimeObject* get__keyComparer_10() const { return ____keyComparer_10; }
	inline RuntimeObject** get_address_of__keyComparer_10() { return &____keyComparer_10; }
	inline void set__keyComparer_10(RuntimeObject* value)
	{
		____keyComparer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_10), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_11() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_11)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_11() const { return ____entriesTable_11; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_11() { return &____entriesTable_11; }
	inline void set__entriesTable_11(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_11), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_12() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_12)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_12() const { return ____nullKeyEntry_12; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_12() { return &____nullKeyEntry_12; }
	inline void set__nullKeyEntry_12(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_12), (void*)value);
	}

	inline static int32_t get_offset_of__keys_13() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keys_13)); }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * get__keys_13() const { return ____keys_13; }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 ** get_address_of__keys_13() { return &____keys_13; }
	inline void set__keys_13(KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * value)
	{
		____keys_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_13), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_14() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_14() const { return ____serializationInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_14() { return &____serializationInfo_14; }
	inline void set__serializationInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_15)); }
	inline int32_t get__version_15() const { return ____version_15; }
	inline int32_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int32_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragment_1), (void*)value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_2), (void*)value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____query_6), (void*)value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scheme_7), (void*)value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemeDelimiter_8), (void*)value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____uri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_9() const { return ____uri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_9), (void*)value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____username_10), (void*)value);
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

// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> Meta.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * ___keywords_1;

public:
	inline static int32_t get_offset_of_entity_0() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B, ___entity_0)); }
	inline String_t* get_entity_0() const { return ___entity_0; }
	inline String_t** get_address_of_entity_0() { return &___entity_0; }
	inline void set_entity_0(String_t* value)
	{
		___entity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_0), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B, ___keywords_1)); }
	inline List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * get_keywords_1() const { return ___keywords_1; }
	inline List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D ** get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * value)
	{
		___keywords_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_1), (void*)value);
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A  : public RuntimeObject
{
public:
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_child_0() { return static_cast<int32_t>(offsetof(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A, ___child_0)); }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * get_child_0() const { return ___child_0; }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A ** get_address_of_child_0() { return &___child_0; }
	inline void set_child_0(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * value)
	{
		___child_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975  : public RuntimeObject
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___witConfiguration_0;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Meta.WitAi.Interfaces.CustomTranscriptionProvider Meta.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * ___customTranscriptionProvider_10;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___witConfiguration_0)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_minKeepAliveVolume_1() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveVolume_1)); }
	inline float get_minKeepAliveVolume_1() const { return ___minKeepAliveVolume_1; }
	inline float* get_address_of_minKeepAliveVolume_1() { return &___minKeepAliveVolume_1; }
	inline void set_minKeepAliveVolume_1(float value)
	{
		___minKeepAliveVolume_1 = value;
	}

	inline static int32_t get_offset_of_minKeepAliveTimeInSeconds_2() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveTimeInSeconds_2)); }
	inline float get_minKeepAliveTimeInSeconds_2() const { return ___minKeepAliveTimeInSeconds_2; }
	inline float* get_address_of_minKeepAliveTimeInSeconds_2() { return &___minKeepAliveTimeInSeconds_2; }
	inline void set_minKeepAliveTimeInSeconds_2(float value)
	{
		___minKeepAliveTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_minTranscriptionKeepAliveTimeInSeconds_3() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minTranscriptionKeepAliveTimeInSeconds_3)); }
	inline float get_minTranscriptionKeepAliveTimeInSeconds_3() const { return ___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline float* get_address_of_minTranscriptionKeepAliveTimeInSeconds_3() { return &___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline void set_minTranscriptionKeepAliveTimeInSeconds_3(float value)
	{
		___minTranscriptionKeepAliveTimeInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_maxRecordingTime_4() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxRecordingTime_4)); }
	inline float get_maxRecordingTime_4() const { return ___maxRecordingTime_4; }
	inline float* get_address_of_maxRecordingTime_4() { return &___maxRecordingTime_4; }
	inline void set_maxRecordingTime_4(float value)
	{
		___maxRecordingTime_4 = value;
	}

	inline static int32_t get_offset_of_soundWakeThreshold_5() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___soundWakeThreshold_5)); }
	inline float get_soundWakeThreshold_5() const { return ___soundWakeThreshold_5; }
	inline float* get_address_of_soundWakeThreshold_5() { return &___soundWakeThreshold_5; }
	inline void set_soundWakeThreshold_5(float value)
	{
		___soundWakeThreshold_5 = value;
	}

	inline static int32_t get_offset_of_sampleLengthInMs_6() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sampleLengthInMs_6)); }
	inline int32_t get_sampleLengthInMs_6() const { return ___sampleLengthInMs_6; }
	inline int32_t* get_address_of_sampleLengthInMs_6() { return &___sampleLengthInMs_6; }
	inline void set_sampleLengthInMs_6(int32_t value)
	{
		___sampleLengthInMs_6 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_7() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___micBufferLengthInSeconds_7)); }
	inline float get_micBufferLengthInSeconds_7() const { return ___micBufferLengthInSeconds_7; }
	inline float* get_address_of_micBufferLengthInSeconds_7() { return &___micBufferLengthInSeconds_7; }
	inline void set_micBufferLengthInSeconds_7(float value)
	{
		___micBufferLengthInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_maxConcurrentRequests_8() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxConcurrentRequests_8)); }
	inline int32_t get_maxConcurrentRequests_8() const { return ___maxConcurrentRequests_8; }
	inline int32_t* get_address_of_maxConcurrentRequests_8() { return &___maxConcurrentRequests_8; }
	inline void set_maxConcurrentRequests_8(int32_t value)
	{
		___maxConcurrentRequests_8 = value;
	}

	inline static int32_t get_offset_of_sendAudioToWit_9() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sendAudioToWit_9)); }
	inline bool get_sendAudioToWit_9() const { return ___sendAudioToWit_9; }
	inline bool* get_address_of_sendAudioToWit_9() { return &___sendAudioToWit_9; }
	inline void set_sendAudioToWit_9(bool value)
	{
		___sendAudioToWit_9 = value;
	}

	inline static int32_t get_offset_of_customTranscriptionProvider_10() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___customTranscriptionProvider_10)); }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * get_customTranscriptionProvider_10() const { return ___customTranscriptionProvider_10; }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 ** get_address_of_customTranscriptionProvider_10() { return &___customTranscriptionProvider_10; }
	inline void set_customTranscriptionProvider_10(CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * value)
	{
		___customTranscriptionProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTranscriptionProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysRecord_11() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___alwaysRecord_11)); }
	inline bool get_alwaysRecord_11() const { return ___alwaysRecord_11; }
	inline bool* get_address_of_alwaysRecord_11() { return &___alwaysRecord_11; }
	inline void set_alwaysRecord_11(bool value)
	{
		___alwaysRecord_11 = value;
	}

	inline static int32_t get_offset_of_preferredActivationOffset_12() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___preferredActivationOffset_12)); }
	inline float get_preferredActivationOffset_12() const { return ___preferredActivationOffset_12; }
	inline float* get_address_of_preferredActivationOffset_12() { return &___preferredActivationOffset_12; }
	inline void set_preferredActivationOffset_12(float value)
	{
		___preferredActivationOffset_12 = value;
	}
};


// Meta.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542  : public RuntimeObject
{
public:
	// System.Net.HttpWebRequest Meta.WitAi.WrapHttpWebRequest::_httpWebRequest
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____httpWebRequest_0;

public:
	inline static int32_t get_offset_of__httpWebRequest_0() { return static_cast<int32_t>(offsetof(WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542, ____httpWebRequest_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__httpWebRequest_0() const { return ____httpWebRequest_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__httpWebRequest_0() { return &____httpWebRequest_0; }
	inline void set__httpWebRequest_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____httpWebRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpWebRequest_0), (void*)value);
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

// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>4__this
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ___U3CU3E4__this_2;
	// UnityEngine.Component Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::component
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E4__this_2)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_component_3() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___component_3)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_component_3() const { return ___component_3; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_component_3() { return &___component_3; }
	inline void set_component_3(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___component_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___component_3), (void*)value);
	}
};


// AudioClipAudioSource/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7  : public RuntimeObject
{
public:
	// System.String AudioClipAudioSource/<>c__DisplayClass34_0::clipName
	String_t* ___clipName_0;

public:
	inline static int32_t get_offset_of_clipName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7, ___clipName_0)); }
	inline String_t* get_clipName_0() const { return ___clipName_0; }
	inline String_t** get_address_of_clipName_0() { return &___clipName_0; }
	inline void set_clipName_0(String_t* value)
	{
		___clipName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipName_0), (void*)value);
	}
};


// AudioClipAudioSource/<ProcessClip>d__25
struct U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2  : public RuntimeObject
{
public:
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AudioClipAudioSource/<ProcessClip>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single[] AudioClipAudioSource/<ProcessClip>d__25::clipData
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___clipData_2;
	// AudioClipAudioSource AudioClipAudioSource/<ProcessClip>d__25::<>4__this
	AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * ___U3CU3E4__this_3;
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<chunkSize>5__2
	int32_t ___U3CchunkSizeU3E5__2_4;
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<index>5__3
	int32_t ___U3CindexU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_clipData_2() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___clipData_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_clipData_2() const { return ___clipData_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_clipData_2() { return &___clipData_2; }
	inline void set_clipData_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___clipData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E4__this_3)); }
	inline AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchunkSizeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CchunkSizeU3E5__2_4)); }
	inline int32_t get_U3CchunkSizeU3E5__2_4() const { return ___U3CchunkSizeU3E5__2_4; }
	inline int32_t* get_address_of_U3CchunkSizeU3E5__2_4() { return &___U3CchunkSizeU3E5__2_4; }
	inline void set_U3CchunkSizeU3E5__2_4(int32_t value)
	{
		___U3CchunkSizeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CindexU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CindexU3E5__3_5)); }
	inline int32_t get_U3CindexU3E5__3_5() const { return ___U3CindexU3E5__3_5; }
	inline int32_t* get_address_of_U3CindexU3E5__3_5() { return &___U3CindexU3E5__3_5; }
	inline void set_U3CindexU3E5__3_5(int32_t value)
	{
		___U3CindexU3E5__3_5 = value;
	}
};


// Meta.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::key
	String_t* ___key_0;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932  : public RuntimeObject
{
public:
	// Meta.WitAi.Data.Entities.WitDynamicEntity Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___dynamicEntity_0;

public:
	inline static int32_t get_offset_of_dynamicEntity_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932, ___dynamicEntity_0)); }
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * get_dynamicEntity_0() const { return ___dynamicEntity_0; }
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B ** get_address_of_dynamicEntity_0() { return &___dynamicEntity_0; }
	inline void set_dynamicEntity_0(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * value)
	{
		___dynamicEntity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntity_0), (void*)value);
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Meta.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E  : public RuntimeObject
{
public:
	// Meta.WitAi.WitRequest Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<>4__this
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___U3CU3E4__this_0;
	// System.String Meta.WitAi.WitRequest/<>c__DisplayClass99_0::stringResponse
	String_t* ___stringResponse_1;
	// System.String Meta.WitAi.WitRequest/<>c__DisplayClass99_0::transcription
	String_t* ___transcription_2;
	// System.Boolean Meta.WitAi.WitRequest/<>c__DisplayClass99_0::hasResponse
	bool ___hasResponse_3;
	// System.Boolean Meta.WitAi.WitRequest/<>c__DisplayClass99_0::isFinal
	bool ___isFinal_4;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest/<>c__DisplayClass99_0::responseNode
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseNode_5;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___U3CU3E4__this_0)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringResponse_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___stringResponse_1)); }
	inline String_t* get_stringResponse_1() const { return ___stringResponse_1; }
	inline String_t** get_address_of_stringResponse_1() { return &___stringResponse_1; }
	inline void set_stringResponse_1(String_t* value)
	{
		___stringResponse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringResponse_1), (void*)value);
	}

	inline static int32_t get_offset_of_transcription_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___transcription_2)); }
	inline String_t* get_transcription_2() const { return ___transcription_2; }
	inline String_t** get_address_of_transcription_2() { return &___transcription_2; }
	inline void set_transcription_2(String_t* value)
	{
		___transcription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transcription_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasResponse_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___hasResponse_3)); }
	inline bool get_hasResponse_3() const { return ___hasResponse_3; }
	inline bool* get_address_of_hasResponse_3() { return &___hasResponse_3; }
	inline void set_hasResponse_3(bool value)
	{
		___hasResponse_3 = value;
	}

	inline static int32_t get_offset_of_isFinal_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___isFinal_4)); }
	inline bool get_isFinal_4() const { return ___isFinal_4; }
	inline bool* get_address_of_isFinal_4() { return &___isFinal_4; }
	inline void set_isFinal_4(bool value)
	{
		___isFinal_4 = value;
	}

	inline static int32_t get_offset_of_responseNode_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___responseNode_5)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_responseNode_5() const { return ___responseNode_5; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_responseNode_5() { return &___responseNode_5; }
	inline void set_responseNode_5(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___responseNode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseNode_5), (void*)value);
	}
};


// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111
struct U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.WitRequest Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::<>4__this
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F, ___U3CU3E4__this_2)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83
struct U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.WitService Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::<>4__this
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE, ___U3CU3E4__this_2)); }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_19;

public:
	inline static int32_t get_offset_of__all_18() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_18() const { return ____all_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_18() { return &____all_18; }
	inline void set__all_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_18), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_19() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_19() const { return ____allKeys_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_19() { return &____allKeys_19; }
	inline void set__allKeys_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_19), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D  : public EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9
{
public:
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ___OnResponse_7;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnPartialResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ___OnPartialResponse_8;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::OnValidatePartialResponse
	WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * ___OnValidatePartialResponse_9;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * ___OnError_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborting_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborted_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRequestCompleted_13;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::OnCanceled
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___OnCanceled_14;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.VoiceEvents::OnComplete
	VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * ___OnComplete_15;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * ___OnMicLevelChanged_16;
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.VoiceEvents::OnRequestOptionSetup
	WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * ___OnRequestOptionSetup_17;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.VoiceEvents::OnRequestInitialized
	VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * ___OnRequestInitialized_18;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * ___OnRequestCreated_19;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStartListening_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListening_21;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToInactivity_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToTimeout_23;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToDeactivation_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMicDataSent_25;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMinimumWakeThresholdHit_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onPartialTranscription_27;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onFullTranscription_28;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ___OnByteDataReady_29;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ___OnByteDataSent_30;

public:
	inline static int32_t get_offset_of_OnResponse_7() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnResponse_7)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get_OnResponse_7() const { return ___OnResponse_7; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of_OnResponse_7() { return &___OnResponse_7; }
	inline void set_OnResponse_7(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		___OnResponse_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResponse_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnPartialResponse_8() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnPartialResponse_8)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get_OnPartialResponse_8() const { return ___OnPartialResponse_8; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of_OnPartialResponse_8() { return &___OnPartialResponse_8; }
	inline void set_OnPartialResponse_8(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		___OnPartialResponse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPartialResponse_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnValidatePartialResponse_9() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnValidatePartialResponse_9)); }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * get_OnValidatePartialResponse_9() const { return ___OnValidatePartialResponse_9; }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D ** get_address_of_OnValidatePartialResponse_9() { return &___OnValidatePartialResponse_9; }
	inline void set_OnValidatePartialResponse_9(WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * value)
	{
		___OnValidatePartialResponse_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValidatePartialResponse_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_10() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnError_10)); }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * get_OnError_10() const { return ___OnError_10; }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B ** get_address_of_OnError_10() { return &___OnError_10; }
	inline void set_OnError_10(WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * value)
	{
		___OnError_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborting_11() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnAborting_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborting_11() const { return ___OnAborting_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborting_11() { return &___OnAborting_11; }
	inline void set_OnAborting_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborting_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborting_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborted_12() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnAborted_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborted_12() const { return ___OnAborted_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborted_12() { return &___OnAborted_12; }
	inline void set_OnAborted_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborted_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborted_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCompleted_13() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestCompleted_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRequestCompleted_13() const { return ___OnRequestCompleted_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRequestCompleted_13() { return &___OnRequestCompleted_13; }
	inline void set_OnRequestCompleted_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRequestCompleted_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCompleted_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnCanceled_14() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnCanceled_14)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_OnCanceled_14() const { return ___OnCanceled_14; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_OnCanceled_14() { return &___OnCanceled_14; }
	inline void set_OnCanceled_14(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___OnCanceled_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCanceled_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnComplete_15() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnComplete_15)); }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * get_OnComplete_15() const { return ___OnComplete_15; }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 ** get_address_of_OnComplete_15() { return &___OnComplete_15; }
	inline void set_OnComplete_15(VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * value)
	{
		___OnComplete_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnComplete_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicLevelChanged_16() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMicLevelChanged_16)); }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * get_OnMicLevelChanged_16() const { return ___OnMicLevelChanged_16; }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B ** get_address_of_OnMicLevelChanged_16() { return &___OnMicLevelChanged_16; }
	inline void set_OnMicLevelChanged_16(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * value)
	{
		___OnMicLevelChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicLevelChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestOptionSetup_17() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestOptionSetup_17)); }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * get_OnRequestOptionSetup_17() const { return ___OnRequestOptionSetup_17; }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E ** get_address_of_OnRequestOptionSetup_17() { return &___OnRequestOptionSetup_17; }
	inline void set_OnRequestOptionSetup_17(WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * value)
	{
		___OnRequestOptionSetup_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestOptionSetup_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestInitialized_18() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestInitialized_18)); }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * get_OnRequestInitialized_18() const { return ___OnRequestInitialized_18; }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 ** get_address_of_OnRequestInitialized_18() { return &___OnRequestInitialized_18; }
	inline void set_OnRequestInitialized_18(VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * value)
	{
		___OnRequestInitialized_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestInitialized_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCreated_19() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestCreated_19)); }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * get_OnRequestCreated_19() const { return ___OnRequestCreated_19; }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 ** get_address_of_OnRequestCreated_19() { return &___OnRequestCreated_19; }
	inline void set_OnRequestCreated_19(WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * value)
	{
		___OnRequestCreated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCreated_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartListening_20() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStartListening_20)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStartListening_20() const { return ___OnStartListening_20; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStartListening_20() { return &___OnStartListening_20; }
	inline void set_OnStartListening_20(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStartListening_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartListening_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListening_21() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListening_21)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListening_21() const { return ___OnStoppedListening_21; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListening_21() { return &___OnStoppedListening_21; }
	inline void set_OnStoppedListening_21(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListening_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListening_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToInactivity_22() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToInactivity_22)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToInactivity_22() const { return ___OnStoppedListeningDueToInactivity_22; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToInactivity_22() { return &___OnStoppedListeningDueToInactivity_22; }
	inline void set_OnStoppedListeningDueToInactivity_22(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToInactivity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToInactivity_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToTimeout_23() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToTimeout_23)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToTimeout_23() const { return ___OnStoppedListeningDueToTimeout_23; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToTimeout_23() { return &___OnStoppedListeningDueToTimeout_23; }
	inline void set_OnStoppedListeningDueToTimeout_23(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToTimeout_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToTimeout_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToDeactivation_24() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToDeactivation_24)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToDeactivation_24() const { return ___OnStoppedListeningDueToDeactivation_24; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToDeactivation_24() { return &___OnStoppedListeningDueToDeactivation_24; }
	inline void set_OnStoppedListeningDueToDeactivation_24(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToDeactivation_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToDeactivation_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicDataSent_25() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMicDataSent_25)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMicDataSent_25() const { return ___OnMicDataSent_25; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMicDataSent_25() { return &___OnMicDataSent_25; }
	inline void set_OnMicDataSent_25(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMicDataSent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicDataSent_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnMinimumWakeThresholdHit_26() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMinimumWakeThresholdHit_26)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMinimumWakeThresholdHit_26() const { return ___OnMinimumWakeThresholdHit_26; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMinimumWakeThresholdHit_26() { return &___OnMinimumWakeThresholdHit_26; }
	inline void set_OnMinimumWakeThresholdHit_26(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMinimumWakeThresholdHit_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMinimumWakeThresholdHit_26), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_27() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___onPartialTranscription_27)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onPartialTranscription_27() const { return ___onPartialTranscription_27; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onPartialTranscription_27() { return &___onPartialTranscription_27; }
	inline void set_onPartialTranscription_27(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onPartialTranscription_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_27), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_28() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___onFullTranscription_28)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onFullTranscription_28() const { return ___onFullTranscription_28; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onFullTranscription_28() { return &___onFullTranscription_28; }
	inline void set_onFullTranscription_28(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onFullTranscription_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataReady_29() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnByteDataReady_29)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get_OnByteDataReady_29() const { return ___OnByteDataReady_29; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of_OnByteDataReady_29() { return &___OnByteDataReady_29; }
	inline void set_OnByteDataReady_29(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		___OnByteDataReady_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataReady_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataSent_30() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnByteDataSent_30)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get_OnByteDataSent_30() const { return ___OnByteDataSent_30; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of_OnByteDataSent_30() { return &___OnByteDataSent_30; }
	inline void set_OnByteDataSent_30(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		___OnByteDataSent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataSent_30), (void*)value);
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Boolean System.Net.WebResponse::m_IsCacheFresh
	bool ___m_IsCacheFresh_1;
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_2;

public:
	inline static int32_t get_offset_of_m_IsCacheFresh_1() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsCacheFresh_1)); }
	inline bool get_m_IsCacheFresh_1() const { return ___m_IsCacheFresh_1; }
	inline bool* get_address_of_m_IsCacheFresh_1() { return &___m_IsCacheFresh_1; }
	inline void set_m_IsCacheFresh_1(bool value)
	{
		___m_IsCacheFresh_1 = value;
	}

	inline static int32_t get_offset_of_m_IsFromCache_2() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsFromCache_2)); }
	inline bool get_m_IsFromCache_2() const { return ___m_IsFromCache_2; }
	inline bool* get_address_of_m_IsFromCache_2() { return &___m_IsFromCache_2; }
	inline void set_m_IsFromCache_2(bool value)
	{
		___m_IsFromCache_2 = value;
	}
};


// System.Net.Security.AuthenticationLevel
struct AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.DecompressionMethods
struct DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC, ___value___2)); }
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

// Meta.Voice.NLPRequestInputType
struct NLPRequestInputType_t7A6629AFA3FFCE9B1B71C453B0223F23FB5FDDFB 
{
public:
	// System.Int32 Meta.Voice.NLPRequestInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NLPRequestInputType_t7A6629AFA3FFCE9B1B71C453B0223F23FB5FDDFB, ___value___2)); }
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

// System.Security.Principal.TokenImpersonationLevel
struct TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.Voice.VoiceAudioInputState
struct VoiceAudioInputState_t043AF7B08F526F7498F9D056CFADF06D2A8613E2 
{
public:
	// System.Int32 Meta.Voice.VoiceAudioInputState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoiceAudioInputState_t043AF7B08F526F7498F9D056CFADF06D2A8613E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.Voice.VoiceRequestState
struct VoiceRequestState_t2D141E064B67ACB096E93544D6EDB53D70DA7A87 
{
public:
	// System.Int32 Meta.Voice.VoiceRequestState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoiceRequestState_t2D141E064B67ACB096E93544D6EDB53D70DA7A87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D  : public UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3
{
public:

public:
};


// System.Net.HttpWebRequest/NtlmAuthState
struct NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335  : public RuntimeObject
{
public:
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * ___U3CResultsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDownloadProgressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CDownloadProgressU3Ek__BackingField_1)); }
	inline float get_U3CDownloadProgressU3Ek__BackingField_1() const { return ___U3CDownloadProgressU3Ek__BackingField_1; }
	inline float* get_address_of_U3CDownloadProgressU3Ek__BackingField_1() { return &___U3CDownloadProgressU3Ek__BackingField_1; }
	inline void set_U3CDownloadProgressU3Ek__BackingField_1(float value)
	{
		___U3CDownloadProgressU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUploadProgressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CUploadProgressU3Ek__BackingField_2)); }
	inline float get_U3CUploadProgressU3Ek__BackingField_2() const { return ___U3CUploadProgressU3Ek__BackingField_2; }
	inline float* get_address_of_U3CUploadProgressU3Ek__BackingField_2() { return &___U3CUploadProgressU3Ek__BackingField_2; }
	inline void set_U3CUploadProgressU3Ek__BackingField_2(float value)
	{
		___U3CUploadProgressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3COptionsU3Ek__BackingField_3)); }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F ** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CEventsU3Ek__BackingField_4)); }
	inline VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * get_U3CEventsU3Ek__BackingField_4() const { return ___U3CEventsU3Ek__BackingField_4; }
	inline VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E ** get_address_of_U3CEventsU3Ek__BackingField_4() { return &___U3CEventsU3Ek__BackingField_4; }
	inline void set_U3CEventsU3Ek__BackingField_4(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * value)
	{
		___U3CEventsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CResultsU3Ek__BackingField_5)); }
	inline VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * get_U3CResultsU3Ek__BackingField_5() const { return ___U3CResultsU3Ek__BackingField_5; }
	inline VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA ** get_address_of_U3CResultsU3Ek__BackingField_5() { return &___U3CResultsU3Ek__BackingField_5; }
	inline void set_U3CResultsU3Ek__BackingField_5(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * value)
	{
		___U3CResultsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultsU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_23;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_24;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_45;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_46;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_23() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_23() const { return ___m_CommonHeaders_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_23() { return &___m_CommonHeaders_23; }
	inline void set_m_CommonHeaders_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_24() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_24)); }
	inline int32_t get_m_NumCommonHeaders_24() const { return ___m_NumCommonHeaders_24; }
	inline int32_t* get_address_of_m_NumCommonHeaders_24() { return &___m_NumCommonHeaders_24; }
	inline void set_m_NumCommonHeaders_24(int32_t value)
	{
		___m_NumCommonHeaders_24 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_45() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_45)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_45() const { return ___m_InnerCollection_45; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_45() { return &___m_InnerCollection_45; }
	inline void set_m_InnerCollection_45(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_46() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_46)); }
	inline uint16_t get_m_Type_46() const { return ___m_Type_46; }
	inline uint16_t* get_address_of_m_Type_46() { return &___m_Type_46; }
	inline void set_m_Type_46(uint16_t value)
	{
		___m_Type_46 = value;
	}
};


// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_5;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_6;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * ___m_CachePolicy_7;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * ___m_CacheProtocol_8;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * ___m_CacheBinding_9;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_AuthenticationLevel_5)); }
	inline int32_t get_m_AuthenticationLevel_5() const { return ___m_AuthenticationLevel_5; }
	inline int32_t* get_address_of_m_AuthenticationLevel_5() { return &___m_AuthenticationLevel_5; }
	inline void set_m_AuthenticationLevel_5(int32_t value)
	{
		___m_AuthenticationLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_6() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_ImpersonationLevel_6)); }
	inline int32_t get_m_ImpersonationLevel_6() const { return ___m_ImpersonationLevel_6; }
	inline int32_t* get_address_of_m_ImpersonationLevel_6() { return &___m_ImpersonationLevel_6; }
	inline void set_m_ImpersonationLevel_6(int32_t value)
	{
		___m_ImpersonationLevel_6 = value;
	}

	inline static int32_t get_offset_of_m_CachePolicy_7() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CachePolicy_7)); }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * get_m_CachePolicy_7() const { return ___m_CachePolicy_7; }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED ** get_address_of_m_CachePolicy_7() { return &___m_CachePolicy_7; }
	inline void set_m_CachePolicy_7(RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * value)
	{
		___m_CachePolicy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachePolicy_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheProtocol_8() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CacheProtocol_8)); }
	inline RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * get_m_CacheProtocol_8() const { return ___m_CacheProtocol_8; }
	inline RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 ** get_address_of_m_CacheProtocol_8() { return &___m_CacheProtocol_8; }
	inline void set_m_CacheProtocol_8(RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * value)
	{
		___m_CacheProtocol_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheProtocol_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheBinding_9() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CacheBinding_9)); }
	inline RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * get_m_CacheBinding_9() const { return ___m_CacheBinding_9; }
	inline RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 ** get_address_of_m_CacheBinding_9() { return &___m_CacheBinding_9; }
	inline void set_m_CacheBinding_9(RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * value)
	{
		___m_CacheBinding_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheBinding_9), (void*)value);
	}
};


// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___request_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_pinvoke
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_com
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17  : public VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335
{
public:
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CAudioInputStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17, ___U3CAudioInputStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CAudioInputStateU3Ek__BackingField_6() const { return ___U3CAudioInputStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAudioInputStateU3Ek__BackingField_6() { return &___U3CAudioInputStateU3Ek__BackingField_6; }
	inline void set_U3CAudioInputStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CAudioInputStateU3Ek__BackingField_6 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A  : public WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___requestUri_13;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___actualUri_14;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_15;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_16;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_17;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates_18;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_19;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_20;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_21;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * ___continueDelegate_22;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ___cookieContainer_23;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_24;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_25;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_26;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___webHeaders_27;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_28;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_29;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_30;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_31;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_32;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_33;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_34;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_35;
	// System.Version System.Net.HttpWebRequest::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_36;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_37;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___actualVersion_38;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_39;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_40;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___servicePoint_41;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_42;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___writeStream_43;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___webResponse_44;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___responseTask_45;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_46;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_47;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_48;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_49;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_50;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_51;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_52;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_53;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_54;
	// System.Int32 System.Net.HttpWebRequest::maxResponseHeadersLength
	int32_t ___maxResponseHeadersLength_55;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_57;
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::tlsProvider
	MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * ___tlsProvider_58;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * ___tlsSettings_59;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * ___certValidationCallback_60;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___auth_state_61;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___proxy_auth_state_62;
	// System.String System.Net.HttpWebRequest::host
	String_t* ___host_63;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * ___ResendContentFactory_64;
	// System.Int32 System.Net.HttpWebRequest::ID
	int32_t ___ID_65;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_66;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_67;
	// System.Boolean System.Net.HttpWebRequest::<ReuseConnection>k__BackingField
	bool ___U3CReuseConnectionU3Ek__BackingField_68;

public:
	inline static int32_t get_offset_of_requestUri_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestUri_13)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_requestUri_13() const { return ___requestUri_13; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_requestUri_13() { return &___requestUri_13; }
	inline void set_requestUri_13(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___requestUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_actualUri_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualUri_14)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_actualUri_14() const { return ___actualUri_14; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_actualUri_14() { return &___actualUri_14; }
	inline void set_actualUri_14(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___actualUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_hostChanged_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___hostChanged_15)); }
	inline bool get_hostChanged_15() const { return ___hostChanged_15; }
	inline bool* get_address_of_hostChanged_15() { return &___hostChanged_15; }
	inline void set_hostChanged_15(bool value)
	{
		___hostChanged_15 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowAutoRedirect_16)); }
	inline bool get_allowAutoRedirect_16() const { return ___allowAutoRedirect_16; }
	inline bool* get_address_of_allowAutoRedirect_16() { return &___allowAutoRedirect_16; }
	inline void set_allowAutoRedirect_16(bool value)
	{
		___allowAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_certificates_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certificates_18)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get_certificates_18() const { return ___certificates_18; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of_certificates_18() { return &___certificates_18; }
	inline void set_certificates_18(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		___certificates_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificates_18), (void*)value);
	}

	inline static int32_t get_offset_of_connectionGroup_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___connectionGroup_19)); }
	inline String_t* get_connectionGroup_19() const { return ___connectionGroup_19; }
	inline String_t** get_address_of_connectionGroup_19() { return &___connectionGroup_19; }
	inline void set_connectionGroup_19(String_t* value)
	{
		___connectionGroup_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionGroup_19), (void*)value);
	}

	inline static int32_t get_offset_of_haveContentLength_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveContentLength_20)); }
	inline bool get_haveContentLength_20() const { return ___haveContentLength_20; }
	inline bool* get_address_of_haveContentLength_20() { return &___haveContentLength_20; }
	inline void set_haveContentLength_20(bool value)
	{
		___haveContentLength_20 = value;
	}

	inline static int32_t get_offset_of_contentLength_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___contentLength_21)); }
	inline int64_t get_contentLength_21() const { return ___contentLength_21; }
	inline int64_t* get_address_of_contentLength_21() { return &___contentLength_21; }
	inline void set_contentLength_21(int64_t value)
	{
		___contentLength_21 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___continueDelegate_22)); }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * get_continueDelegate_22() const { return ___continueDelegate_22; }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F ** get_address_of_continueDelegate_22() { return &___continueDelegate_22; }
	inline void set_continueDelegate_22(HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * value)
	{
		___continueDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueDelegate_22), (void*)value);
	}

	inline static int32_t get_offset_of_cookieContainer_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___cookieContainer_23)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get_cookieContainer_23() const { return ___cookieContainer_23; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of_cookieContainer_23() { return &___cookieContainer_23; }
	inline void set_cookieContainer_23(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		___cookieContainer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieContainer_23), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___credentials_24)); }
	inline RuntimeObject* get_credentials_24() const { return ___credentials_24; }
	inline RuntimeObject** get_address_of_credentials_24() { return &___credentials_24; }
	inline void set_credentials_24(RuntimeObject* value)
	{
		___credentials_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_24), (void*)value);
	}

	inline static int32_t get_offset_of_haveResponse_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveResponse_25)); }
	inline bool get_haveResponse_25() const { return ___haveResponse_25; }
	inline bool* get_address_of_haveResponse_25() { return &___haveResponse_25; }
	inline void set_haveResponse_25(bool value)
	{
		___haveResponse_25 = value;
	}

	inline static int32_t get_offset_of_requestSent_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestSent_26)); }
	inline bool get_requestSent_26() const { return ___requestSent_26; }
	inline bool* get_address_of_requestSent_26() { return &___requestSent_26; }
	inline void set_requestSent_26(bool value)
	{
		___requestSent_26 = value;
	}

	inline static int32_t get_offset_of_webHeaders_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webHeaders_27)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_webHeaders_27() const { return ___webHeaders_27; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_webHeaders_27() { return &___webHeaders_27; }
	inline void set_webHeaders_27(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___webHeaders_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webHeaders_27), (void*)value);
	}

	inline static int32_t get_offset_of_keepAlive_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___keepAlive_28)); }
	inline bool get_keepAlive_28() const { return ___keepAlive_28; }
	inline bool* get_address_of_keepAlive_28() { return &___keepAlive_28; }
	inline void set_keepAlive_28(bool value)
	{
		___keepAlive_28 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxAutoRedirect_29)); }
	inline int32_t get_maxAutoRedirect_29() const { return ___maxAutoRedirect_29; }
	inline int32_t* get_address_of_maxAutoRedirect_29() { return &___maxAutoRedirect_29; }
	inline void set_maxAutoRedirect_29(int32_t value)
	{
		___maxAutoRedirect_29 = value;
	}

	inline static int32_t get_offset_of_mediaType_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___mediaType_30)); }
	inline String_t* get_mediaType_30() const { return ___mediaType_30; }
	inline String_t** get_address_of_mediaType_30() { return &___mediaType_30; }
	inline void set_mediaType_30(String_t* value)
	{
		___mediaType_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaType_30), (void*)value);
	}

	inline static int32_t get_offset_of_method_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___method_31)); }
	inline String_t* get_method_31() const { return ___method_31; }
	inline String_t** get_address_of_method_31() { return &___method_31; }
	inline void set_method_31(String_t* value)
	{
		___method_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_31), (void*)value);
	}

	inline static int32_t get_offset_of_initialMethod_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___initialMethod_32)); }
	inline String_t* get_initialMethod_32() const { return ___initialMethod_32; }
	inline String_t** get_address_of_initialMethod_32() { return &___initialMethod_32; }
	inline void set_initialMethod_32(String_t* value)
	{
		___initialMethod_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialMethod_32), (void*)value);
	}

	inline static int32_t get_offset_of_pipelined_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___pipelined_33)); }
	inline bool get_pipelined_33() const { return ___pipelined_33; }
	inline bool* get_address_of_pipelined_33() { return &___pipelined_33; }
	inline void set_pipelined_33(bool value)
	{
		___pipelined_33 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___preAuthenticate_34)); }
	inline bool get_preAuthenticate_34() const { return ___preAuthenticate_34; }
	inline bool* get_address_of_preAuthenticate_34() { return &___preAuthenticate_34; }
	inline void set_preAuthenticate_34(bool value)
	{
		___preAuthenticate_34 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___usedPreAuth_35)); }
	inline bool get_usedPreAuth_35() const { return ___usedPreAuth_35; }
	inline bool* get_address_of_usedPreAuth_35() { return &___usedPreAuth_35; }
	inline void set_usedPreAuth_35(bool value)
	{
		___usedPreAuth_35 = value;
	}

	inline static int32_t get_offset_of_version_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___version_36)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_36() const { return ___version_36; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_36() { return &___version_36; }
	inline void set_version_36(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_36), (void*)value);
	}

	inline static int32_t get_offset_of_force_version_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___force_version_37)); }
	inline bool get_force_version_37() const { return ___force_version_37; }
	inline bool* get_address_of_force_version_37() { return &___force_version_37; }
	inline void set_force_version_37(bool value)
	{
		___force_version_37 = value;
	}

	inline static int32_t get_offset_of_actualVersion_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualVersion_38)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_actualVersion_38() const { return ___actualVersion_38; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_actualVersion_38() { return &___actualVersion_38; }
	inline void set_actualVersion_38(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___actualVersion_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualVersion_38), (void*)value);
	}

	inline static int32_t get_offset_of_proxy_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_39)); }
	inline RuntimeObject* get_proxy_39() const { return ___proxy_39; }
	inline RuntimeObject** get_address_of_proxy_39() { return &___proxy_39; }
	inline void set_proxy_39(RuntimeObject* value)
	{
		___proxy_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_39), (void*)value);
	}

	inline static int32_t get_offset_of_sendChunked_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___sendChunked_40)); }
	inline bool get_sendChunked_40() const { return ___sendChunked_40; }
	inline bool* get_address_of_sendChunked_40() { return &___sendChunked_40; }
	inline void set_sendChunked_40(bool value)
	{
		___sendChunked_40 = value;
	}

	inline static int32_t get_offset_of_servicePoint_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___servicePoint_41)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_servicePoint_41() const { return ___servicePoint_41; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_servicePoint_41() { return &___servicePoint_41; }
	inline void set_servicePoint_41(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___servicePoint_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servicePoint_41), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___timeout_42)); }
	inline int32_t get_timeout_42() const { return ___timeout_42; }
	inline int32_t* get_address_of_timeout_42() { return &___timeout_42; }
	inline void set_timeout_42(int32_t value)
	{
		___timeout_42 = value;
	}

	inline static int32_t get_offset_of_writeStream_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___writeStream_43)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_writeStream_43() const { return ___writeStream_43; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_writeStream_43() { return &___writeStream_43; }
	inline void set_writeStream_43(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___writeStream_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_43), (void*)value);
	}

	inline static int32_t get_offset_of_webResponse_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webResponse_44)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_webResponse_44() const { return ___webResponse_44; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_webResponse_44() { return &___webResponse_44; }
	inline void set_webResponse_44(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___webResponse_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webResponse_44), (void*)value);
	}

	inline static int32_t get_offset_of_responseTask_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___responseTask_45)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_responseTask_45() const { return ___responseTask_45; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_responseTask_45() { return &___responseTask_45; }
	inline void set_responseTask_45(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___responseTask_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseTask_45), (void*)value);
	}

	inline static int32_t get_offset_of_currentOperation_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___currentOperation_46)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_46() const { return ___currentOperation_46; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_46() { return &___currentOperation_46; }
	inline void set_currentOperation_46(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_46), (void*)value);
	}

	inline static int32_t get_offset_of_aborted_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___aborted_47)); }
	inline int32_t get_aborted_47() const { return ___aborted_47; }
	inline int32_t* get_address_of_aborted_47() { return &___aborted_47; }
	inline void set_aborted_47(int32_t value)
	{
		___aborted_47 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___gotRequestStream_48)); }
	inline bool get_gotRequestStream_48() const { return ___gotRequestStream_48; }
	inline bool* get_address_of_gotRequestStream_48() { return &___gotRequestStream_48; }
	inline void set_gotRequestStream_48(bool value)
	{
		___gotRequestStream_48 = value;
	}

	inline static int32_t get_offset_of_redirects_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___redirects_49)); }
	inline int32_t get_redirects_49() const { return ___redirects_49; }
	inline int32_t* get_address_of_redirects_49() { return &___redirects_49; }
	inline void set_redirects_49(int32_t value)
	{
		___redirects_49 = value;
	}

	inline static int32_t get_offset_of_expectContinue_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___expectContinue_50)); }
	inline bool get_expectContinue_50() const { return ___expectContinue_50; }
	inline bool* get_address_of_expectContinue_50() { return &___expectContinue_50; }
	inline void set_expectContinue_50(bool value)
	{
		___expectContinue_50 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___getResponseCalled_51)); }
	inline bool get_getResponseCalled_51() const { return ___getResponseCalled_51; }
	inline bool* get_address_of_getResponseCalled_51() { return &___getResponseCalled_51; }
	inline void set_getResponseCalled_51(bool value)
	{
		___getResponseCalled_51 = value;
	}

	inline static int32_t get_offset_of_locker_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___locker_52)); }
	inline RuntimeObject * get_locker_52() const { return ___locker_52; }
	inline RuntimeObject ** get_address_of_locker_52() { return &___locker_52; }
	inline void set_locker_52(RuntimeObject * value)
	{
		___locker_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_52), (void*)value);
	}

	inline static int32_t get_offset_of_finished_reading_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___finished_reading_53)); }
	inline bool get_finished_reading_53() const { return ___finished_reading_53; }
	inline bool* get_address_of_finished_reading_53() { return &___finished_reading_53; }
	inline void set_finished_reading_53(bool value)
	{
		___finished_reading_53 = value;
	}

	inline static int32_t get_offset_of_auto_decomp_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auto_decomp_54)); }
	inline int32_t get_auto_decomp_54() const { return ___auto_decomp_54; }
	inline int32_t* get_address_of_auto_decomp_54() { return &___auto_decomp_54; }
	inline void set_auto_decomp_54(int32_t value)
	{
		___auto_decomp_54 = value;
	}

	inline static int32_t get_offset_of_maxResponseHeadersLength_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxResponseHeadersLength_55)); }
	inline int32_t get_maxResponseHeadersLength_55() const { return ___maxResponseHeadersLength_55; }
	inline int32_t* get_address_of_maxResponseHeadersLength_55() { return &___maxResponseHeadersLength_55; }
	inline void set_maxResponseHeadersLength_55(int32_t value)
	{
		___maxResponseHeadersLength_55 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_57() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___readWriteTimeout_57)); }
	inline int32_t get_readWriteTimeout_57() const { return ___readWriteTimeout_57; }
	inline int32_t* get_address_of_readWriteTimeout_57() { return &___readWriteTimeout_57; }
	inline void set_readWriteTimeout_57(int32_t value)
	{
		___readWriteTimeout_57 = value;
	}

	inline static int32_t get_offset_of_tlsProvider_58() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsProvider_58)); }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * get_tlsProvider_58() const { return ___tlsProvider_58; }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 ** get_address_of_tlsProvider_58() { return &___tlsProvider_58; }
	inline void set_tlsProvider_58(MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * value)
	{
		___tlsProvider_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsProvider_58), (void*)value);
	}

	inline static int32_t get_offset_of_tlsSettings_59() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsSettings_59)); }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * get_tlsSettings_59() const { return ___tlsSettings_59; }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 ** get_address_of_tlsSettings_59() { return &___tlsSettings_59; }
	inline void set_tlsSettings_59(MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * value)
	{
		___tlsSettings_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsSettings_59), (void*)value);
	}

	inline static int32_t get_offset_of_certValidationCallback_60() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certValidationCallback_60)); }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * get_certValidationCallback_60() const { return ___certValidationCallback_60; }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA ** get_address_of_certValidationCallback_60() { return &___certValidationCallback_60; }
	inline void set_certValidationCallback_60(ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * value)
	{
		___certValidationCallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certValidationCallback_60), (void*)value);
	}

	inline static int32_t get_offset_of_auth_state_61() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auth_state_61)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_auth_state_61() const { return ___auth_state_61; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_auth_state_61() { return &___auth_state_61; }
	inline void set_auth_state_61(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___auth_state_61 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___auth_state_61))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_proxy_auth_state_62() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_auth_state_62)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_proxy_auth_state_62() const { return ___proxy_auth_state_62; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_proxy_auth_state_62() { return &___proxy_auth_state_62; }
	inline void set_proxy_auth_state_62(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___proxy_auth_state_62 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___proxy_auth_state_62))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_host_63() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___host_63)); }
	inline String_t* get_host_63() const { return ___host_63; }
	inline String_t** get_address_of_host_63() { return &___host_63; }
	inline void set_host_63(String_t* value)
	{
		___host_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_63), (void*)value);
	}

	inline static int32_t get_offset_of_ResendContentFactory_64() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ResendContentFactory_64)); }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * get_ResendContentFactory_64() const { return ___ResendContentFactory_64; }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 ** get_address_of_ResendContentFactory_64() { return &___ResendContentFactory_64; }
	inline void set_ResendContentFactory_64(Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * value)
	{
		___ResendContentFactory_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResendContentFactory_64), (void*)value);
	}

	inline static int32_t get_offset_of_ID_65() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ID_65)); }
	inline int32_t get_ID_65() const { return ___ID_65; }
	inline int32_t* get_address_of_ID_65() { return &___ID_65; }
	inline void set_ID_65(int32_t value)
	{
		___ID_65 = value;
	}

	inline static int32_t get_offset_of_U3CThrowOnErrorU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CThrowOnErrorU3Ek__BackingField_66)); }
	inline bool get_U3CThrowOnErrorU3Ek__BackingField_66() const { return ___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline bool* get_address_of_U3CThrowOnErrorU3Ek__BackingField_66() { return &___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline void set_U3CThrowOnErrorU3Ek__BackingField_66(bool value)
	{
		___U3CThrowOnErrorU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_67() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___unsafe_auth_blah_67)); }
	inline bool get_unsafe_auth_blah_67() const { return ___unsafe_auth_blah_67; }
	inline bool* get_address_of_unsafe_auth_blah_67() { return &___unsafe_auth_blah_67; }
	inline void set_unsafe_auth_blah_67(bool value)
	{
		___unsafe_auth_blah_67 = value;
	}

	inline static int32_t get_offset_of_U3CReuseConnectionU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CReuseConnectionU3Ek__BackingField_68)); }
	inline bool get_U3CReuseConnectionU3Ek__BackingField_68() const { return ___U3CReuseConnectionU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CReuseConnectionU3Ek__BackingField_68() { return &___U3CReuseConnectionU3Ek__BackingField_68; }
	inline void set_U3CReuseConnectionU3Ek__BackingField_68(bool value)
	{
		___U3CReuseConnectionU3Ek__BackingField_68 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Meta.WitAi.Data.WitValue
struct WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * ___reference_5;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_reference_5() { return static_cast<int32_t>(offsetof(WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7, ___reference_5)); }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * get_reference_5() const { return ___reference_5; }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A ** get_address_of_reference_5() { return &___reference_5; }
	inline void set_reference_5(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * value)
	{
		___reference_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_5), (void*)value);
	}
};


// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B  : public MulticastDelegate_t
{
public:

public:
};


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305  : public TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17
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


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884  : public NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305
{
public:
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_7;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_8;

public:
	inline static int32_t get_offset_of_U3CInputTypeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884, ___U3CInputTypeU3Ek__BackingField_7)); }
	inline int32_t get_U3CInputTypeU3Ek__BackingField_7() const { return ___U3CInputTypeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CInputTypeU3Ek__BackingField_7() { return &___U3CInputTypeU3Ek__BackingField_7; }
	inline void set_U3CInputTypeU3Ek__BackingField_7(int32_t value)
	{
		___U3CInputTypeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__initialized_8() { return static_cast<int32_t>(offsetof(NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884, ____initialized_8)); }
	inline bool get__initialized_8() const { return ____initialized_8; }
	inline bool* get_address_of__initialized_8() { return &____initialized_8; }
	inline void set__initialized_8(bool value)
	{
		____initialized_8 = value;
	}
};


// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Meta.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_5;
	// Meta.WitAi.Data.AudioBufferConfiguration Meta.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * ___audioBufferConfiguration_6;
	// Meta.WitAi.Events.AudioBufferEvents Meta.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * ___events_7;
	// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_8;
	// Meta.WitAi.Data.RingBuffer`1<System.Byte> Meta.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * ____micDataBuffer_9;
	// System.Byte[] Meta.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____byteDataBuffer_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_waitingRecorders
	HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * ____waitingRecorders_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * ____activeRecorders_12;

public:
	inline static int32_t get_offset_of_alwaysRecording_5() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___alwaysRecording_5)); }
	inline bool get_alwaysRecording_5() const { return ___alwaysRecording_5; }
	inline bool* get_address_of_alwaysRecording_5() { return &___alwaysRecording_5; }
	inline void set_alwaysRecording_5(bool value)
	{
		___alwaysRecording_5 = value;
	}

	inline static int32_t get_offset_of_audioBufferConfiguration_6() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___audioBufferConfiguration_6)); }
	inline AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * get_audioBufferConfiguration_6() const { return ___audioBufferConfiguration_6; }
	inline AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F ** get_address_of_audioBufferConfiguration_6() { return &___audioBufferConfiguration_6; }
	inline void set_audioBufferConfiguration_6(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * value)
	{
		___audioBufferConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioBufferConfiguration_6), (void*)value);
	}

	inline static int32_t get_offset_of_events_7() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___events_7)); }
	inline AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * get_events_7() const { return ___events_7; }
	inline AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E ** get_address_of_events_7() { return &___events_7; }
	inline void set_events_7(AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * value)
	{
		___events_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_7), (void*)value);
	}

	inline static int32_t get_offset_of__micInput_8() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____micInput_8)); }
	inline RuntimeObject* get__micInput_8() const { return ____micInput_8; }
	inline RuntimeObject** get_address_of__micInput_8() { return &____micInput_8; }
	inline void set__micInput_8(RuntimeObject* value)
	{
		____micInput_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micInput_8), (void*)value);
	}

	inline static int32_t get_offset_of__micDataBuffer_9() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____micDataBuffer_9)); }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * get__micDataBuffer_9() const { return ____micDataBuffer_9; }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 ** get_address_of__micDataBuffer_9() { return &____micDataBuffer_9; }
	inline void set__micDataBuffer_9(RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * value)
	{
		____micDataBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micDataBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__byteDataBuffer_10() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____byteDataBuffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__byteDataBuffer_10() const { return ____byteDataBuffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__byteDataBuffer_10() { return &____byteDataBuffer_10; }
	inline void set__byteDataBuffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____byteDataBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byteDataBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of__waitingRecorders_11() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____waitingRecorders_11)); }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * get__waitingRecorders_11() const { return ____waitingRecorders_11; }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 ** get_address_of__waitingRecorders_11() { return &____waitingRecorders_11; }
	inline void set__waitingRecorders_11(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * value)
	{
		____waitingRecorders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitingRecorders_11), (void*)value);
	}

	inline static int32_t get_offset_of__activeRecorders_12() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____activeRecorders_12)); }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * get__activeRecorders_12() const { return ____activeRecorders_12; }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 ** get_address_of__activeRecorders_12() { return &____activeRecorders_12; }
	inline void set__activeRecorders_12(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * value)
	{
		____activeRecorders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRecorders_12), (void*)value);
	}
};


// AudioClipAudioSource
struct AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource AudioClipAudioSource::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> AudioClipAudioSource::_audioClips
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ____audioClips_5;
	// System.Boolean AudioClipAudioSource::_loopRequests
	bool ____loopRequests_6;
	// System.Boolean AudioClipAudioSource::_isRecording
	bool ____isRecording_7;
	// System.Collections.Generic.Queue`1<System.Int32> AudioClipAudioSource::_audioQueue
	Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * ____audioQueue_8;
	// System.Int32 AudioClipAudioSource::clipIndex
	int32_t ___clipIndex_9;
	// System.Single[] AudioClipAudioSource::activeClip
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___activeClip_10;
	// System.Int32 AudioClipAudioSource::activeClipIndex
	int32_t ___activeClipIndex_11;
	// System.Single[] AudioClipAudioSource::activeClipBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___activeClipBuffer_12;
	// System.Collections.Generic.List`1<System.Single[]> AudioClipAudioSource::clipData
	List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___clipData_13;
	// System.Action AudioClipAudioSource::OnStartRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecording_14;
	// System.Action AudioClipAudioSource::OnStartRecordingFailed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecordingFailed_15;
	// System.Action`3<System.Int32,System.Single[],System.Single> AudioClipAudioSource::OnSampleReady
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___OnSampleReady_16;
	// System.Action AudioClipAudioSource::OnStopRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStopRecording_17;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of__audioClips_5() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioClips_5)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get__audioClips_5() const { return ____audioClips_5; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of__audioClips_5() { return &____audioClips_5; }
	inline void set__audioClips_5(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		____audioClips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioClips_5), (void*)value);
	}

	inline static int32_t get_offset_of__loopRequests_6() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____loopRequests_6)); }
	inline bool get__loopRequests_6() const { return ____loopRequests_6; }
	inline bool* get_address_of__loopRequests_6() { return &____loopRequests_6; }
	inline void set__loopRequests_6(bool value)
	{
		____loopRequests_6 = value;
	}

	inline static int32_t get_offset_of__isRecording_7() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____isRecording_7)); }
	inline bool get__isRecording_7() const { return ____isRecording_7; }
	inline bool* get_address_of__isRecording_7() { return &____isRecording_7; }
	inline void set__isRecording_7(bool value)
	{
		____isRecording_7 = value;
	}

	inline static int32_t get_offset_of__audioQueue_8() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioQueue_8)); }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * get__audioQueue_8() const { return ____audioQueue_8; }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F ** get_address_of__audioQueue_8() { return &____audioQueue_8; }
	inline void set__audioQueue_8(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * value)
	{
		____audioQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_clipIndex_9() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___clipIndex_9)); }
	inline int32_t get_clipIndex_9() const { return ___clipIndex_9; }
	inline int32_t* get_address_of_clipIndex_9() { return &___clipIndex_9; }
	inline void set_clipIndex_9(int32_t value)
	{
		___clipIndex_9 = value;
	}

	inline static int32_t get_offset_of_activeClip_10() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClip_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_activeClip_10() const { return ___activeClip_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_activeClip_10() { return &___activeClip_10; }
	inline void set_activeClip_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___activeClip_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeClip_10), (void*)value);
	}

	inline static int32_t get_offset_of_activeClipIndex_11() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClipIndex_11)); }
	inline int32_t get_activeClipIndex_11() const { return ___activeClipIndex_11; }
	inline int32_t* get_address_of_activeClipIndex_11() { return &___activeClipIndex_11; }
	inline void set_activeClipIndex_11(int32_t value)
	{
		___activeClipIndex_11 = value;
	}

	inline static int32_t get_offset_of_activeClipBuffer_12() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClipBuffer_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_activeClipBuffer_12() const { return ___activeClipBuffer_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_activeClipBuffer_12() { return &___activeClipBuffer_12; }
	inline void set_activeClipBuffer_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___activeClipBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeClipBuffer_12), (void*)value);
	}

	inline static int32_t get_offset_of_clipData_13() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___clipData_13)); }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * get_clipData_13() const { return ___clipData_13; }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 ** get_address_of_clipData_13() { return &___clipData_13; }
	inline void set_clipData_13(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * value)
	{
		___clipData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipData_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecording_14() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStartRecording_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecording_14() const { return ___OnStartRecording_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecording_14() { return &___OnStartRecording_14; }
	inline void set_OnStartRecording_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecording_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecording_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecordingFailed_15() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStartRecordingFailed_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecordingFailed_15() const { return ___OnStartRecordingFailed_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecordingFailed_15() { return &___OnStartRecordingFailed_15; }
	inline void set_OnStartRecordingFailed_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecordingFailed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecordingFailed_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnSampleReady_16() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnSampleReady_16)); }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * get_OnSampleReady_16() const { return ___OnSampleReady_16; }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** get_address_of_OnSampleReady_16() { return &___OnSampleReady_16; }
	inline void set_OnSampleReady_16(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * value)
	{
		___OnSampleReady_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSampleReady_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopRecording_17() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStopRecording_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStopRecording_17() const { return ___OnStopRecording_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStopRecording_17() { return &___OnStopRecording_17; }
	inline void set_OnStopRecording_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStopRecording_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopRecording_17), (void*)value);
	}
};


// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::_requests
	HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * ____requests_9;

public:
	inline static int32_t get_offset_of__witConfiguration_4() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____witConfiguration_4)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get__witConfiguration_4() const { return ____witConfiguration_4; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of__witConfiguration_4() { return &____witConfiguration_4; }
	inline void set__witConfiguration_4(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		____witConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witConfiguration_4), (void*)value);
	}

	inline static int32_t get_offset_of__conduitParameterProvider_5() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____conduitParameterProvider_5)); }
	inline RuntimeObject* get__conduitParameterProvider_5() const { return ____conduitParameterProvider_5; }
	inline RuntimeObject** get_address_of__conduitParameterProvider_5() { return &____conduitParameterProvider_5; }
	inline void set__conduitParameterProvider_5(RuntimeObject* value)
	{
		____conduitParameterProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conduitParameterProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_events_6() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___events_6)); }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * get_events_6() const { return ___events_6; }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D ** get_address_of_events_6() { return &___events_6; }
	inline void set_events_6(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * value)
	{
		___events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_6), (void*)value);
	}

	inline static int32_t get_offset_of_telemetryEvents_7() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___telemetryEvents_7)); }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * get_telemetryEvents_7() const { return ___telemetryEvents_7; }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 ** get_address_of_telemetryEvents_7() { return &___telemetryEvents_7; }
	inline void set_telemetryEvents_7(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * value)
	{
		___telemetryEvents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telemetryEvents_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConduitDispatcherU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___U3CConduitDispatcherU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CConduitDispatcherU3Ek__BackingField_8() const { return ___U3CConduitDispatcherU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CConduitDispatcherU3Ek__BackingField_8() { return &___U3CConduitDispatcherU3Ek__BackingField_8; }
	inline void set_U3CConduitDispatcherU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CConduitDispatcherU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConduitDispatcherU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of__requests_9() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____requests_9)); }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * get__requests_9() const { return ____requests_9; }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 ** get_address_of__requests_9() { return &____requests_9; }
	inline void set__requests_9(HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * value)
	{
		____requests_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requests_9), (void*)value);
	}
};


// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Meta.WitAi.WitService::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_4;
	// Meta.WitAi.WitRequest Meta.WitAi.WitService::_recordingRequest
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ____recordingRequest_5;
	// System.Boolean Meta.WitAi.WitService::_isSoundWakeActive
	bool ____isSoundWakeActive_6;
	// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.WitService::_lastSampleMarker
	Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ____lastSampleMarker_7;
	// System.Boolean Meta.WitAi.WitService::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_8;
	// System.Boolean Meta.WitAi.WitService::_isActive
	bool ____isActive_9;
	// System.Int64 Meta.WitAi.WitService::_minSampleByteCount
	int64_t ____minSampleByteCount_10;
	// Meta.WitAi.IVoiceEventProvider Meta.WitAi.WitService::_voiceEventProvider
	RuntimeObject* ____voiceEventProvider_11;
	// Meta.WitAi.ITelemetryEventsProvider Meta.WitAi.WitService::_telemetryEventsProvider
	RuntimeObject* ____telemetryEventsProvider_12;
	// Meta.WitAi.IWitRuntimeConfigProvider Meta.WitAi.WitService::_runtimeConfigProvider
	RuntimeObject* ____runtimeConfigProvider_13;
	// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.WitService::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_14;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_timeLimitCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____timeLimitCoroutine_15;
	// Meta.WitAi.Interfaces.IWitRequestProvider Meta.WitAi.WitService::_witRequestProvider
	RuntimeObject* ____witRequestProvider_16;
	// System.Boolean Meta.WitAi.WitService::_receivedTranscription
	bool ____receivedTranscription_17;
	// System.Single Meta.WitAi.WitService::_lastWordTime
	float ____lastWordTime_18;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.WitService::_transmitRequests
	HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * ____transmitRequests_19;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_queueHandler
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____queueHandler_20;
	// Meta.WitAi.Events.IWitByteDataReadyHandler[] Meta.WitAi.WitService::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* ____dataReadyHandlers_21;
	// Meta.WitAi.Events.IWitByteDataSentHandler[] Meta.WitAi.WitService::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* ____dataSentHandlers_22;
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[] Meta.WitAi.WitService::_dynamicEntityProviders
	IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* ____dynamicEntityProviders_23;
	// System.Single Meta.WitAi.WitService::_time
	float ____time_24;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.WitService::_buffer
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ____buffer_25;
	// System.Boolean Meta.WitAi.WitService::_bufferDelegates
	bool ____bufferDelegates_26;

public:
	inline static int32_t get_offset_of__lastMinVolumeLevelTime_4() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastMinVolumeLevelTime_4)); }
	inline float get__lastMinVolumeLevelTime_4() const { return ____lastMinVolumeLevelTime_4; }
	inline float* get_address_of__lastMinVolumeLevelTime_4() { return &____lastMinVolumeLevelTime_4; }
	inline void set__lastMinVolumeLevelTime_4(float value)
	{
		____lastMinVolumeLevelTime_4 = value;
	}

	inline static int32_t get_offset_of__recordingRequest_5() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____recordingRequest_5)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get__recordingRequest_5() const { return ____recordingRequest_5; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of__recordingRequest_5() { return &____recordingRequest_5; }
	inline void set__recordingRequest_5(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		____recordingRequest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingRequest_5), (void*)value);
	}

	inline static int32_t get_offset_of__isSoundWakeActive_6() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____isSoundWakeActive_6)); }
	inline bool get__isSoundWakeActive_6() const { return ____isSoundWakeActive_6; }
	inline bool* get_address_of__isSoundWakeActive_6() { return &____isSoundWakeActive_6; }
	inline void set__isSoundWakeActive_6(bool value)
	{
		____isSoundWakeActive_6 = value;
	}

	inline static int32_t get_offset_of__lastSampleMarker_7() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastSampleMarker_7)); }
	inline Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * get__lastSampleMarker_7() const { return ____lastSampleMarker_7; }
	inline Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 ** get_address_of__lastSampleMarker_7() { return &____lastSampleMarker_7; }
	inline void set__lastSampleMarker_7(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * value)
	{
		____lastSampleMarker_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSampleMarker_7), (void*)value);
	}

	inline static int32_t get_offset_of__minKeepAliveWasHit_8() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____minKeepAliveWasHit_8)); }
	inline bool get__minKeepAliveWasHit_8() const { return ____minKeepAliveWasHit_8; }
	inline bool* get_address_of__minKeepAliveWasHit_8() { return &____minKeepAliveWasHit_8; }
	inline void set__minKeepAliveWasHit_8(bool value)
	{
		____minKeepAliveWasHit_8 = value;
	}

	inline static int32_t get_offset_of__isActive_9() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____isActive_9)); }
	inline bool get__isActive_9() const { return ____isActive_9; }
	inline bool* get_address_of__isActive_9() { return &____isActive_9; }
	inline void set__isActive_9(bool value)
	{
		____isActive_9 = value;
	}

	inline static int32_t get_offset_of__minSampleByteCount_10() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____minSampleByteCount_10)); }
	inline int64_t get__minSampleByteCount_10() const { return ____minSampleByteCount_10; }
	inline int64_t* get_address_of__minSampleByteCount_10() { return &____minSampleByteCount_10; }
	inline void set__minSampleByteCount_10(int64_t value)
	{
		____minSampleByteCount_10 = value;
	}

	inline static int32_t get_offset_of__voiceEventProvider_11() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____voiceEventProvider_11)); }
	inline RuntimeObject* get__voiceEventProvider_11() const { return ____voiceEventProvider_11; }
	inline RuntimeObject** get_address_of__voiceEventProvider_11() { return &____voiceEventProvider_11; }
	inline void set__voiceEventProvider_11(RuntimeObject* value)
	{
		____voiceEventProvider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceEventProvider_11), (void*)value);
	}

	inline static int32_t get_offset_of__telemetryEventsProvider_12() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____telemetryEventsProvider_12)); }
	inline RuntimeObject* get__telemetryEventsProvider_12() const { return ____telemetryEventsProvider_12; }
	inline RuntimeObject** get_address_of__telemetryEventsProvider_12() { return &____telemetryEventsProvider_12; }
	inline void set__telemetryEventsProvider_12(RuntimeObject* value)
	{
		____telemetryEventsProvider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____telemetryEventsProvider_12), (void*)value);
	}

	inline static int32_t get_offset_of__runtimeConfigProvider_13() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____runtimeConfigProvider_13)); }
	inline RuntimeObject* get__runtimeConfigProvider_13() const { return ____runtimeConfigProvider_13; }
	inline RuntimeObject** get_address_of__runtimeConfigProvider_13() { return &____runtimeConfigProvider_13; }
	inline void set__runtimeConfigProvider_13(RuntimeObject* value)
	{
		____runtimeConfigProvider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeConfigProvider_13), (void*)value);
	}

	inline static int32_t get_offset_of__activeTranscriptionProvider_14() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____activeTranscriptionProvider_14)); }
	inline RuntimeObject* get__activeTranscriptionProvider_14() const { return ____activeTranscriptionProvider_14; }
	inline RuntimeObject** get_address_of__activeTranscriptionProvider_14() { return &____activeTranscriptionProvider_14; }
	inline void set__activeTranscriptionProvider_14(RuntimeObject* value)
	{
		____activeTranscriptionProvider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTranscriptionProvider_14), (void*)value);
	}

	inline static int32_t get_offset_of__timeLimitCoroutine_15() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____timeLimitCoroutine_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__timeLimitCoroutine_15() const { return ____timeLimitCoroutine_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__timeLimitCoroutine_15() { return &____timeLimitCoroutine_15; }
	inline void set__timeLimitCoroutine_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____timeLimitCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeLimitCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of__witRequestProvider_16() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____witRequestProvider_16)); }
	inline RuntimeObject* get__witRequestProvider_16() const { return ____witRequestProvider_16; }
	inline RuntimeObject** get_address_of__witRequestProvider_16() { return &____witRequestProvider_16; }
	inline void set__witRequestProvider_16(RuntimeObject* value)
	{
		____witRequestProvider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witRequestProvider_16), (void*)value);
	}

	inline static int32_t get_offset_of__receivedTranscription_17() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____receivedTranscription_17)); }
	inline bool get__receivedTranscription_17() const { return ____receivedTranscription_17; }
	inline bool* get_address_of__receivedTranscription_17() { return &____receivedTranscription_17; }
	inline void set__receivedTranscription_17(bool value)
	{
		____receivedTranscription_17 = value;
	}

	inline static int32_t get_offset_of__lastWordTime_18() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastWordTime_18)); }
	inline float get__lastWordTime_18() const { return ____lastWordTime_18; }
	inline float* get_address_of__lastWordTime_18() { return &____lastWordTime_18; }
	inline void set__lastWordTime_18(float value)
	{
		____lastWordTime_18 = value;
	}

	inline static int32_t get_offset_of__transmitRequests_19() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____transmitRequests_19)); }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * get__transmitRequests_19() const { return ____transmitRequests_19; }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 ** get_address_of__transmitRequests_19() { return &____transmitRequests_19; }
	inline void set__transmitRequests_19(HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * value)
	{
		____transmitRequests_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transmitRequests_19), (void*)value);
	}

	inline static int32_t get_offset_of__queueHandler_20() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____queueHandler_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__queueHandler_20() const { return ____queueHandler_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__queueHandler_20() { return &____queueHandler_20; }
	inline void set__queueHandler_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____queueHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queueHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of__dataReadyHandlers_21() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dataReadyHandlers_21)); }
	inline IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* get__dataReadyHandlers_21() const { return ____dataReadyHandlers_21; }
	inline IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558** get_address_of__dataReadyHandlers_21() { return &____dataReadyHandlers_21; }
	inline void set__dataReadyHandlers_21(IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* value)
	{
		____dataReadyHandlers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataReadyHandlers_21), (void*)value);
	}

	inline static int32_t get_offset_of__dataSentHandlers_22() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dataSentHandlers_22)); }
	inline IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* get__dataSentHandlers_22() const { return ____dataSentHandlers_22; }
	inline IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965** get_address_of__dataSentHandlers_22() { return &____dataSentHandlers_22; }
	inline void set__dataSentHandlers_22(IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* value)
	{
		____dataSentHandlers_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSentHandlers_22), (void*)value);
	}

	inline static int32_t get_offset_of__dynamicEntityProviders_23() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dynamicEntityProviders_23)); }
	inline IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* get__dynamicEntityProviders_23() const { return ____dynamicEntityProviders_23; }
	inline IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859** get_address_of__dynamicEntityProviders_23() { return &____dynamicEntityProviders_23; }
	inline void set__dynamicEntityProviders_23(IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* value)
	{
		____dynamicEntityProviders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicEntityProviders_23), (void*)value);
	}

	inline static int32_t get_offset_of__time_24() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____time_24)); }
	inline float get__time_24() const { return ____time_24; }
	inline float* get_address_of__time_24() { return &____time_24; }
	inline void set__time_24(float value)
	{
		____time_24 = value;
	}

	inline static int32_t get_offset_of__buffer_25() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____buffer_25)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get__buffer_25() const { return ____buffer_25; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of__buffer_25() { return &____buffer_25; }
	inline void set__buffer_25(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		____buffer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_25), (void*)value);
	}

	inline static int32_t get_offset_of__bufferDelegates_26() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____bufferDelegates_26)); }
	inline bool get__bufferDelegates_26() const { return ____bufferDelegates_26; }
	inline bool* get_address_of__bufferDelegates_26() { return &____bufferDelegates_26; }
	inline void set__bufferDelegates_26(bool value)
	{
		____bufferDelegates_26 = value;
	}
};


// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Meta.WitAi.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_7;

public:
	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ___U3CIsRunningU3Ek__BackingField_4)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_4() const { return ___U3CIsRunningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_4() { return &___U3CIsRunningU3Ek__BackingField_4; }
	inline void set_U3CIsRunningU3Ek__BackingField_4(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__useUpdate_5() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____useUpdate_5)); }
	inline bool get__useUpdate_5() const { return ____useUpdate_5; }
	inline bool* get_address_of__useUpdate_5() { return &____useUpdate_5; }
	inline void set__useUpdate_5(bool value)
	{
		____useUpdate_5 = value;
	}

	inline static int32_t get_offset_of__method_6() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____method_6)); }
	inline RuntimeObject* get__method_6() const { return ____method_6; }
	inline RuntimeObject** get_address_of__method_6() { return &____method_6; }
	inline void set__method_6(RuntimeObject* value)
	{
		____method_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____method_6), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_7() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____coroutine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_7() const { return ____coroutine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_7() { return &____coroutine_7; }
	inline void set__coroutine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_7), (void*)value);
	}
};


// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C  : public NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884
{
public:

public:
};


// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D  : public VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.WitRequest::<Configuration>k__BackingField
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___U3CConfigurationU3Ek__BackingField_9;
	// System.Int32 Meta.WitAi.WitRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_10;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.WitRequest::<AudioEncoding>k__BackingField
	AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * ___U3CAudioEncodingU3Ek__BackingField_11;
	// System.String Meta.WitAi.WitRequest::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_12;
	// System.String Meta.WitAi.WitRequest::<Command>k__BackingField
	String_t* ___U3CCommandU3Ek__BackingField_13;
	// System.Boolean Meta.WitAi.WitRequest::<IsPost>k__BackingField
	bool ___U3CIsPostU3Ek__BackingField_14;
	// System.Byte[] Meta.WitAi.WitRequest::postData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData_15;
	// System.String Meta.WitAi.WitRequest::postContentType
	String_t* ___postContentType_16;
	// System.String Meta.WitAi.WitRequest::forcedHttpMethodType
	String_t* ___forcedHttpMethodType_17;
	// System.Boolean Meta.WitAi.WitRequest::<HasResponseStarted>k__BackingField
	bool ___U3CHasResponseStartedU3Ek__BackingField_18;
	// System.Boolean Meta.WitAi.WitRequest::<IsInputStreamReady>k__BackingField
	bool ___U3CIsInputStreamReadyU3Ek__BackingField_19;
	// Meta.WitAi.AudioDurationTracker Meta.WitAi.WitRequest::audioDurationTracker
	AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * ___audioDurationTracker_20;
	// System.Net.HttpWebRequest Meta.WitAi.WitRequest::_request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____request_21;
	// System.IO.Stream Meta.WitAi.WitRequest::_writeStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____writeStream_22;
	// System.Object Meta.WitAi.WitRequest::_streamLock
	RuntimeObject * ____streamLock_23;
	// System.Int32 Meta.WitAi.WitRequest::_bytesWritten
	int32_t ____bytesWritten_24;
	// System.String Meta.WitAi.WitRequest::_stackTrace
	String_t* ____stackTrace_25;
	// System.DateTime Meta.WitAi.WitRequest::_requestStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____requestStartTime_26;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Meta.WitAi.WitRequest::_writeBuffer
	ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * ____writeBuffer_27;
	// System.String Meta.WitAi.WitRequest::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_28;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest::_lastResponseData
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ____lastResponseData_29;
	// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent Meta.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * ___onProvideCustomHeaders_30;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onInputStreamReady
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onInputStreamReady_31;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onRawResponse
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onRawResponse_32;
	// Meta.WitAi.WitRequest/OnCustomizeUriEvent Meta.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * ___onCustomizeUri_33;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onPartialTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPartialTranscription_35;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onFullTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onFullTranscription_36;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onPartialResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onPartialResponse_37;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onResponse_38;
	// System.Boolean Meta.WitAi.WitRequest::_initialized
	bool ____initialized_39;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.WitRequest::_performer
	CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * ____performer_40;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadCallbacks_41;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CConfigurationU3Ek__BackingField_9)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_U3CConfigurationU3Ek__BackingField_9() const { return ___U3CConfigurationU3Ek__BackingField_9; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_U3CConfigurationU3Ek__BackingField_9() { return &___U3CConfigurationU3Ek__BackingField_9; }
	inline void set_U3CConfigurationU3Ek__BackingField_9(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___U3CConfigurationU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CTimeoutU3Ek__BackingField_10)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_10() const { return ___U3CTimeoutU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_10() { return &___U3CTimeoutU3Ek__BackingField_10; }
	inline void set_U3CTimeoutU3Ek__BackingField_10(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CAudioEncodingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CAudioEncodingU3Ek__BackingField_11)); }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * get_U3CAudioEncodingU3Ek__BackingField_11() const { return ___U3CAudioEncodingU3Ek__BackingField_11; }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C ** get_address_of_U3CAudioEncodingU3Ek__BackingField_11() { return &___U3CAudioEncodingU3Ek__BackingField_11; }
	inline void set_U3CAudioEncodingU3Ek__BackingField_11(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * value)
	{
		___U3CAudioEncodingU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioEncodingU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CPathU3Ek__BackingField_12)); }
	inline String_t* get_U3CPathU3Ek__BackingField_12() const { return ___U3CPathU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_12() { return &___U3CPathU3Ek__BackingField_12; }
	inline void set_U3CPathU3Ek__BackingField_12(String_t* value)
	{
		___U3CPathU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CCommandU3Ek__BackingField_13)); }
	inline String_t* get_U3CCommandU3Ek__BackingField_13() const { return ___U3CCommandU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CCommandU3Ek__BackingField_13() { return &___U3CCommandU3Ek__BackingField_13; }
	inline void set_U3CCommandU3Ek__BackingField_13(String_t* value)
	{
		___U3CCommandU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommandU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPostU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CIsPostU3Ek__BackingField_14)); }
	inline bool get_U3CIsPostU3Ek__BackingField_14() const { return ___U3CIsPostU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsPostU3Ek__BackingField_14() { return &___U3CIsPostU3Ek__BackingField_14; }
	inline void set_U3CIsPostU3Ek__BackingField_14(bool value)
	{
		___U3CIsPostU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_postData_15() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postData_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_postData_15() const { return ___postData_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_postData_15() { return &___postData_15; }
	inline void set_postData_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___postData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postData_15), (void*)value);
	}

	inline static int32_t get_offset_of_postContentType_16() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postContentType_16)); }
	inline String_t* get_postContentType_16() const { return ___postContentType_16; }
	inline String_t** get_address_of_postContentType_16() { return &___postContentType_16; }
	inline void set_postContentType_16(String_t* value)
	{
		___postContentType_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postContentType_16), (void*)value);
	}

	inline static int32_t get_offset_of_forcedHttpMethodType_17() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___forcedHttpMethodType_17)); }
	inline String_t* get_forcedHttpMethodType_17() const { return ___forcedHttpMethodType_17; }
	inline String_t** get_address_of_forcedHttpMethodType_17() { return &___forcedHttpMethodType_17; }
	inline void set_forcedHttpMethodType_17(String_t* value)
	{
		___forcedHttpMethodType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forcedHttpMethodType_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasResponseStartedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CHasResponseStartedU3Ek__BackingField_18)); }
	inline bool get_U3CHasResponseStartedU3Ek__BackingField_18() const { return ___U3CHasResponseStartedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasResponseStartedU3Ek__BackingField_18() { return &___U3CHasResponseStartedU3Ek__BackingField_18; }
	inline void set_U3CHasResponseStartedU3Ek__BackingField_18(bool value)
	{
		___U3CHasResponseStartedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsInputStreamReadyU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CIsInputStreamReadyU3Ek__BackingField_19)); }
	inline bool get_U3CIsInputStreamReadyU3Ek__BackingField_19() const { return ___U3CIsInputStreamReadyU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsInputStreamReadyU3Ek__BackingField_19() { return &___U3CIsInputStreamReadyU3Ek__BackingField_19; }
	inline void set_U3CIsInputStreamReadyU3Ek__BackingField_19(bool value)
	{
		___U3CIsInputStreamReadyU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_audioDurationTracker_20() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___audioDurationTracker_20)); }
	inline AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * get_audioDurationTracker_20() const { return ___audioDurationTracker_20; }
	inline AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF ** get_address_of_audioDurationTracker_20() { return &___audioDurationTracker_20; }
	inline void set_audioDurationTracker_20(AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * value)
	{
		___audioDurationTracker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioDurationTracker_20), (void*)value);
	}

	inline static int32_t get_offset_of__request_21() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____request_21)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__request_21() const { return ____request_21; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__request_21() { return &____request_21; }
	inline void set__request_21(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____request_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_21), (void*)value);
	}

	inline static int32_t get_offset_of__writeStream_22() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____writeStream_22)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__writeStream_22() const { return ____writeStream_22; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__writeStream_22() { return &____writeStream_22; }
	inline void set__writeStream_22(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____writeStream_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeStream_22), (void*)value);
	}

	inline static int32_t get_offset_of__streamLock_23() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____streamLock_23)); }
	inline RuntimeObject * get__streamLock_23() const { return ____streamLock_23; }
	inline RuntimeObject ** get_address_of__streamLock_23() { return &____streamLock_23; }
	inline void set__streamLock_23(RuntimeObject * value)
	{
		____streamLock_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamLock_23), (void*)value);
	}

	inline static int32_t get_offset_of__bytesWritten_24() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____bytesWritten_24)); }
	inline int32_t get__bytesWritten_24() const { return ____bytesWritten_24; }
	inline int32_t* get_address_of__bytesWritten_24() { return &____bytesWritten_24; }
	inline void set__bytesWritten_24(int32_t value)
	{
		____bytesWritten_24 = value;
	}

	inline static int32_t get_offset_of__stackTrace_25() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____stackTrace_25)); }
	inline String_t* get__stackTrace_25() const { return ____stackTrace_25; }
	inline String_t** get_address_of__stackTrace_25() { return &____stackTrace_25; }
	inline void set__stackTrace_25(String_t* value)
	{
		____stackTrace_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_25), (void*)value);
	}

	inline static int32_t get_offset_of__requestStartTime_26() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____requestStartTime_26)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__requestStartTime_26() const { return ____requestStartTime_26; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__requestStartTime_26() { return &____requestStartTime_26; }
	inline void set__requestStartTime_26(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____requestStartTime_26 = value;
	}

	inline static int32_t get_offset_of__writeBuffer_27() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____writeBuffer_27)); }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * get__writeBuffer_27() const { return ____writeBuffer_27; }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 ** get_address_of__writeBuffer_27() { return &____writeBuffer_27; }
	inline void set__writeBuffer_27(ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * value)
	{
		____writeBuffer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeBuffer_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CStatusDescriptionU3Ek__BackingField_28)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_28() const { return ___U3CStatusDescriptionU3Ek__BackingField_28; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_28() { return &___U3CStatusDescriptionU3Ek__BackingField_28; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_28(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of__lastResponseData_29() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____lastResponseData_29)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get__lastResponseData_29() const { return ____lastResponseData_29; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of__lastResponseData_29() { return &____lastResponseData_29; }
	inline void set__lastResponseData_29(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		____lastResponseData_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastResponseData_29), (void*)value);
	}

	inline static int32_t get_offset_of_onProvideCustomHeaders_30() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onProvideCustomHeaders_30)); }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * get_onProvideCustomHeaders_30() const { return ___onProvideCustomHeaders_30; }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB ** get_address_of_onProvideCustomHeaders_30() { return &___onProvideCustomHeaders_30; }
	inline void set_onProvideCustomHeaders_30(OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * value)
	{
		___onProvideCustomHeaders_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProvideCustomHeaders_30), (void*)value);
	}

	inline static int32_t get_offset_of_onInputStreamReady_31() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onInputStreamReady_31)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onInputStreamReady_31() const { return ___onInputStreamReady_31; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onInputStreamReady_31() { return &___onInputStreamReady_31; }
	inline void set_onInputStreamReady_31(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onInputStreamReady_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInputStreamReady_31), (void*)value);
	}

	inline static int32_t get_offset_of_onRawResponse_32() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onRawResponse_32)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onRawResponse_32() const { return ___onRawResponse_32; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onRawResponse_32() { return &___onRawResponse_32; }
	inline void set_onRawResponse_32(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onRawResponse_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRawResponse_32), (void*)value);
	}

	inline static int32_t get_offset_of_onCustomizeUri_33() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onCustomizeUri_33)); }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * get_onCustomizeUri_33() const { return ___onCustomizeUri_33; }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 ** get_address_of_onCustomizeUri_33() { return &___onCustomizeUri_33; }
	inline void set_onCustomizeUri_33(OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * value)
	{
		___onCustomizeUri_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCustomizeUri_33), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_35() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialTranscription_35)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPartialTranscription_35() const { return ___onPartialTranscription_35; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPartialTranscription_35() { return &___onPartialTranscription_35; }
	inline void set_onPartialTranscription_35(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPartialTranscription_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_35), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_36() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onFullTranscription_36)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onFullTranscription_36() const { return ___onFullTranscription_36; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onFullTranscription_36() { return &___onFullTranscription_36; }
	inline void set_onFullTranscription_36(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onFullTranscription_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_36), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialResponse_37() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialResponse_37)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onPartialResponse_37() const { return ___onPartialResponse_37; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onPartialResponse_37() { return &___onPartialResponse_37; }
	inline void set_onPartialResponse_37(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onPartialResponse_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialResponse_37), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_38() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onResponse_38)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onResponse_38() const { return ___onResponse_38; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onResponse_38() { return &___onResponse_38; }
	inline void set_onResponse_38(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onResponse_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_38), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_39() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____initialized_39)); }
	inline bool get__initialized_39() const { return ____initialized_39; }
	inline bool* get_address_of__initialized_39() { return &____initialized_39; }
	inline void set__initialized_39(bool value)
	{
		____initialized_39 = value;
	}

	inline static int32_t get_offset_of__performer_40() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____performer_40)); }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * get__performer_40() const { return ____performer_40; }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F ** get_address_of__performer_40() { return &____performer_40; }
	inline void set__performer_40(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * value)
	{
		____performer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____performer_40), (void*)value);
	}

	inline static int32_t get_offset_of__mainThreadCallbacks_41() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____mainThreadCallbacks_41)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadCallbacks_41() const { return ____mainThreadCallbacks_41; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadCallbacks_41() { return &____mainThreadCallbacks_41; }
	inline void set__mainThreadCallbacks_41(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadCallbacks_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadCallbacks_41), (void*)value);
	}
};


// System.Object


// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.Collections.Generic.HashSet`1<UnityEngine.Component>


// System.Collections.Generic.HashSet`1<UnityEngine.Component>


// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>


// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Meta.WitAi.Data.AudioBufferConfiguration


// Meta.WitAi.Data.AudioBufferConfiguration


// UnityEngine.CustomYieldInstruction


// UnityEngine.CustomYieldInstruction


// Meta.WitAi.Events.EventRegistry


// Meta.WitAi.Events.EventRegistry


// System.MarshalByRefObject


// System.MarshalByRefObject


// System.Collections.Specialized.NameObjectCollectionBase

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_17;

public:
	inline static int32_t get_offset_of_defaultComparer_17() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_17)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_17() const { return ___defaultComparer_17; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_17() { return &___defaultComparer_17; }
	inline void set_defaultComparer_17(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_17), (void*)value);
	}
};


// System.Collections.Specialized.NameObjectCollectionBase


// System.String

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


// System.String


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.UriBuilder


// System.UriBuilder


// System.ValueType


// System.ValueType


// Meta.WitAi.Data.Entities.WitDynamicEntity


// Meta.WitAi.Data.Entities.WitDynamicEntity


// Meta.WitAi.Json.WitResponseNode


// Meta.WitAi.Json.WitResponseNode


// Meta.WitAi.WitResponseReference


// Meta.WitAi.WitResponseReference


// Meta.WitAi.Configuration.WitRuntimeConfiguration


// Meta.WitAi.Configuration.WitRuntimeConfiguration


// Meta.WitAi.WrapHttpWebRequest


// Meta.WitAi.WrapHttpWebRequest


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30


// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30


// AudioClipAudioSource/<>c__DisplayClass34_0


// AudioClipAudioSource/<>c__DisplayClass34_0


// AudioClipAudioSource/<ProcessClip>d__25


// AudioClipAudioSource/<ProcessClip>d__25


// Meta.WitAi.Utilities.VoiceServiceReference/<>c

struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields
{
public:
	// Meta.WitAi.Utilities.VoiceServiceReference/<>c Meta.WitAi.Utilities.VoiceServiceReference/<>c::<>9
	U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.VoiceService> Meta.WitAi.Utilities.VoiceServiceReference/<>c::<>9__2_0
	Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Meta.WitAi.Utilities.VoiceServiceReference/<>c


// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam


// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam


// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider


// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0


// Meta.WitAi.WitRequest/<>c__DisplayClass99_0


// Meta.WitAi.WitRequest/<>c__DisplayClass99_0


// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111


// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111


// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83


// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>


// System.Boolean

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


// System.Boolean


// System.DateTime

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


// System.DateTime


// System.Enum

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


// System.Enum


// System.Int32


// System.Int32


// System.Int64


// System.Int64


// System.IntPtr

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


// System.IntPtr


// System.Collections.Specialized.NameValueCollection


// System.Collections.Specialized.NameValueCollection


// UnityEngine.SceneManagement.Scene


// UnityEngine.SceneManagement.Scene


// System.Single


// System.Single


// System.IO.Stream

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


// System.IO.Stream


// UnityEngine.Events.UnityEvent


// UnityEngine.Events.UnityEvent


// Meta.WitAi.Events.VoiceEvents


// Meta.WitAi.Events.VoiceEvents


// System.Void


// System.Void


// UnityEngine.WaitForEndOfFrame


// UnityEngine.WaitForEndOfFrame


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// UnityEngine.WaitUntil


// UnityEngine.WaitUntil


// System.Net.WebResponse


// System.Net.WebResponse


// System.Net.Security.AuthenticationLevel


// System.Net.Security.AuthenticationLevel


// System.Net.DecompressionMethods


// System.Net.DecompressionMethods


// System.Delegate


// System.Delegate


// System.Exception

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


// System.Exception


// Meta.Voice.NLPRequestInputType


// Meta.Voice.NLPRequestInputType


// UnityEngine.Object

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


// UnityEngine.Object


// System.Security.Principal.TokenImpersonationLevel


// System.Security.Principal.TokenImpersonationLevel


// System.UriFormat


// System.UriFormat


// System.UriIdnScope


// System.UriIdnScope


// System.UriKind


// System.UriKind


// Meta.Voice.VoiceAudioInputState


// Meta.Voice.VoiceAudioInputState


// Meta.Voice.VoiceRequestState


// Meta.Voice.VoiceRequestState


// System.Net.WebHeaderCollectionType


// System.Net.WebHeaderCollectionType


// Meta.WitAi.Events.WitValidationEvent


// Meta.WitAi.Events.WitValidationEvent


// System.Net.HttpWebRequest/NtlmAuthState


// System.Net.HttpWebRequest/NtlmAuthState


// System.Uri/Flags


// System.Uri/Flags


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// UnityEngine.AudioClip


// UnityEngine.AudioClip


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// System.SystemException


// System.SystemException


// System.Uri

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Uri


// System.Net.WebHeaderCollection

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_22;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_25;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_26;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_47;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_48;

public:
	inline static int32_t get_offset_of_HInfo_22() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_22)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_22() const { return ___HInfo_22; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_22() { return &___HInfo_22; }
	inline void set_HInfo_22(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_25() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_25() const { return ___s_CommonHeaderNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_25() { return &___s_CommonHeaderNames_25; }
	inline void set_s_CommonHeaderNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_26() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_26)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_26() const { return ___s_CommonHeaderHints_26; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_26() { return &___s_CommonHeaderHints_26; }
	inline void set_s_CommonHeaderHints_26(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_26), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_47() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_47)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_47() const { return ___HttpTrimCharacters_47; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_47() { return &___HttpTrimCharacters_47; }
	inline void set_HttpTrimCharacters_47(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_47), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_48() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_48)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_48() const { return ___RfcCharMap_48; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_48() { return &___RfcCharMap_48; }
	inline void set_RfcCharMap_48(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_48), (void*)value);
	}
};


// System.Net.WebHeaderCollection


// System.Net.WebRequest

struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___s_PrefixList_2;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * ___s_DefaultTimerQueue_4;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * ___webRequestCreate_10;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_12;

public:
	inline static int32_t get_offset_of_s_PrefixList_2() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_PrefixList_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_s_PrefixList_2() const { return ___s_PrefixList_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_s_PrefixList_2() { return &___s_PrefixList_2; }
	inline void set_s_PrefixList_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___s_PrefixList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_4() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultTimerQueue_4)); }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * get_s_DefaultTimerQueue_4() const { return ___s_DefaultTimerQueue_4; }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB ** get_address_of_s_DefaultTimerQueue_4() { return &___s_DefaultTimerQueue_4; }
	inline void set_s_DefaultTimerQueue_4(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * value)
	{
		___s_DefaultTimerQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_4), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_10() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___webRequestCreate_10)); }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * get_webRequestCreate_10() const { return ___webRequestCreate_10; }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A ** get_address_of_webRequestCreate_10() { return &___webRequestCreate_10; }
	inline void set_webRequestCreate_10(DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * value)
	{
		___webRequestCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_11() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxy_11)); }
	inline RuntimeObject* get_s_DefaultWebProxy_11() const { return ___s_DefaultWebProxy_11; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_11() { return &___s_DefaultWebProxy_11; }
	inline void set_s_DefaultWebProxy_11(RuntimeObject* value)
	{
		___s_DefaultWebProxy_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_12() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxyInitialized_12)); }
	inline bool get_s_DefaultWebProxyInitialized_12() const { return ___s_DefaultWebProxyInitialized_12; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_12() { return &___s_DefaultWebProxyInitialized_12; }
	inline void set_s_DefaultWebProxyInitialized_12(bool value)
	{
		___s_DefaultWebProxyInitialized_12 = value;
	}
};


// System.Net.WebRequest


// System.Net.HttpWebRequest/AuthorizationState


// System.Net.HttpWebRequest/AuthorizationState


// System.Action`1<System.String>


// System.Action`1<System.String>


// System.Action`3<System.Int32,System.Single[],System.Single>


// System.Action`3<System.Int32,System.Single[],System.Single>


// System.Func`1<System.Boolean>


// System.Func`1<System.Boolean>


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// System.Action


// System.Action


// System.AsyncCallback


// System.AsyncCallback


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.Net.HttpWebRequest

struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_56;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields, ___defaultMaxResponseHeadersLength_56)); }
	inline int32_t get_defaultMaxResponseHeadersLength_56() const { return ___defaultMaxResponseHeadersLength_56; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_56() { return &___defaultMaxResponseHeadersLength_56; }
	inline void set_defaultMaxResponseHeadersLength_56(int32_t value)
	{
		___defaultMaxResponseHeadersLength_56 = value;
	}
};


// System.Net.HttpWebRequest


// System.NotSupportedException


// System.NotSupportedException


// Meta.WitAi.Data.WitValue


// Meta.WitAi.Data.WitValue


// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent


// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent


// Meta.WitAi.WitRequest/OnCustomizeUriEvent


// Meta.WitAi.WitRequest/OnCustomizeUriEvent


// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent


// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent


// Meta.WitAi.WitRequest/PreSendRequestDelegate


// Meta.WitAi.WitRequest/PreSendRequestDelegate


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.WitAi.Data.AudioBuffer

struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB_StaticFields
{
public:
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB_StaticFields, ____instance_4)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get__instance_4() const { return ____instance_4; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// Meta.WitAi.Data.AudioBuffer


// AudioClipAudioSource


// AudioClipAudioSource


// Meta.WitAi.VoiceService


// Meta.WitAi.VoiceService


// Meta.WitAi.WitService


// Meta.WitAi.WitService


// Meta.WitAi.CoroutineUtility/CoroutinePerformer


// Meta.WitAi.CoroutineUtility/CoroutinePerformer


// Meta.WitAi.Requests.VoiceServiceRequest


// Meta.WitAi.Requests.VoiceServiceRequest


// Meta.WitAi.WitRequest

struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields
{
public:
	// Meta.WitAi.WitRequest/PreSendRequestDelegate Meta.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * ___onPreSendRequest_34;

public:
	inline static int32_t get_offset_of_onPreSendRequest_34() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields, ___onPreSendRequest_34)); }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * get_onPreSendRequest_34() const { return ___onPreSendRequest_34; }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B ** get_address_of_onPreSendRequest_34() { return &___onPreSendRequest_34; }
	inline void set_onPreSendRequest_34(PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * value)
	{
		___onPreSendRequest_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreSendRequest_34), (void*)value);
	}
};


// Meta.WitAi.WitRequest

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared (Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35 * __this, int32_t ___arg10, RuntimeObject * ___arg21, float ___arg32, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Meta.Voice.TranscriptionRequest`4<System.Object,System.Object,System.Object,System.Object>::set_Transcription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionRequest_4_set_Transcription_mF2A6C699AE2152CEE1802D0B1A31918376103FE8_gshared (TranscriptionRequest_4_t38EF07F38D1F8468DBCEC1EE48064DC6F33D84AE * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>::set_ResponseData(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPAudioRequest_4_set_ResponseData_mFF7C24AFBEBAAB3A95DD57CC845466FE6A081D30_gshared (NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::.ctor()
inline void UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C (UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitResultUtilities_GetWitResponseReference_mBDF0394832303DFF65ED47D3291618FE5DD87B66 (String_t* ___path0, const RuntimeMethod* method);
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isBatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40 (const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_KeepAlive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Net.HttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Add(!0)
inline bool HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Contains(!0)
inline bool HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Remove(!0)
inline bool HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::get_MicInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD (AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2 (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * __this, int32_t ___arg10, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___arg21, float ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, float, const RuntimeMethod*))Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___serverToken0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::set_Transcription(System.String)
inline void TranscriptionRequest_4_set_Transcription_m66C6B3AAA4C94521471BD7D0294F17DB324F71B6 (TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17 *, String_t*, const RuntimeMethod*))TranscriptionRequest_4_set_Transcription_mF2A6C699AE2152CEE1802D0B1A31918376103FE8_gshared)(__this, ___value0, method);
}
// System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::set_ResponseData(Meta.WitAi.Json.WitResponseNode)
inline void NLPAudioRequest_4_set_ResponseData_mD2317797C8469065EFCE40F40E0F4CD5E9A72F69 (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 *, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, const RuntimeMethod*))NLPAudioRequest_4_set_ResponseData_mFF7C24AFBEBAAB3A95DD57CC845466FE6A081D30_gshared)(__this, ___value0, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared)(__this, ___result0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitRequest::HasMainThreadCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitRequest_HasMainThreadCallbacks_m14EED027D8EC177BCCADEBF45C6E3B0524F35D0C (WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * __this, const RuntimeMethod* method);
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.WitService::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.WitService::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * WitService_get_VoiceEvents_m39556CBC342B47004B4BE374302707A67CECC52B (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::DeactivateRequest(UnityEngine.Events.UnityEvent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateRequest_mD63B22CC85D4D7FE06D82F391A5968CD2A4791B1 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onComplete0, bool ___abort1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m811B34123CDD68F73B77D88C6BAA772D8B490EC6 (WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C(__this, /*hidden argument*/UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method)
{
	{
		// if (null == reference)
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_0 = __this->get_reference_5();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_1 = __this->get_path_4();
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_2;
		L_2 = WitResultUtilities_GetWitResponseReference_mBDF0394832303DFF65ED47D3291618FE5DD87B66(L_1, /*hidden argument*/NULL);
		__this->set_reference_5(L_2);
	}

IL_0019:
	{
		// return reference;
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_3 = __this->get_reference_5();
		return L_3;
	}
}
// System.String Meta.WitAi.Data.WitValue::ToString(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_m67BA6AFFA40AFE6E4277A7677CA073FE69DE43B0 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_0;
		L_0 = WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990(__this, /*hidden argument*/NULL);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_m6A9496058E8AB67727BE1658EDFD9ABBFFE454AC (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.WrapHttpWebRequest::.ctor(System.Net.HttpWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest__ctor_m0F2EB86CA250E06B096EEA39B44B879DC209F924 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___httpWebRequest0, const RuntimeMethod* method)
{
	{
		// public WrapHttpWebRequest(HttpWebRequest httpWebRequest)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (Application.isBatchMode)
		bool L_0;
		L_0 = Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// httpWebRequest.KeepAlive = false;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_1 = ___httpWebRequest0;
		NullCheck(L_1);
		HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _httpWebRequest = httpWebRequest;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_2 = ___httpWebRequest0;
		__this->set__httpWebRequest_0(L_2);
		// }
		return;
	}
}
// System.Net.WebHeaderCollection Meta.WitAi.WrapHttpWebRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * WrapHttpWebRequest_get_Headers_m4BAF82519D6E3221BADE13AA1C79ACE5070273C4 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1;
		L_1 = VirtFuncInvoker0< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Headers_mAB9226AD989ED153800F2114A3E721E1B2CABC03 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___value0, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(12 /* System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection) */, L_0, L_1);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_Method_m06DD0BDA216AA7737D7C80DA2A46D7DF1221BA05 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Net.WebRequest::get_Method() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Method_m24F0945CE867A7CB1593BF3F80104EB1394F9578 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_0, L_1);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_ContentType_mC58AA28A2A3E6D10D890797A266585221FCEB97B (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Net.WebRequest::get_ContentType() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentType_m1A5FDD24B629D16710E538BD8C4C894799D44DA3 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_0, L_1);
		return;
	}
}
// System.Int64 Meta.WitAi.WrapHttpWebRequest::get_ContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WrapHttpWebRequest_get_ContentLength_m8BDE0D989EDFCCFEA8CC65BB6F1B5856669FCF81 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(13 /* System.Int64 System.Net.WebRequest::get_ContentLength() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_ContentLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentLength_mA9F10744EBC995F838E0867B24A3DD68E699BE98 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Boolean Meta.WitAi.WrapHttpWebRequest::get_SendChunked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrapHttpWebRequest_get_SendChunked_m28638FA59DD527D4A57C28091D599840CDA0CBA9 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_SendChunked_mA7F0B843755E33983D7B338FF9EA230125059CDF (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		bool L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_UserAgent_m68D1672C0E1D5894B2FB62A2D77E20AE4BC45E64 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_UserAgent_m1A7D0A196E1F8EE379C37BDE8683B7FB95F67D2F (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Meta.WitAi.WrapHttpWebRequest::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrapHttpWebRequest_get_Timeout_mC01D2A62E0117E88E028DF96E097639B430ABE6D (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Net.WebRequest::get_Timeout() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Timeout_m27B8C207B2163E91866568D8FAB70462D54D7C2D (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Net.WebRequest::set_Timeout(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_Abort_mCF118A6B06FCF30C22DD896210A00DF3F5142DD8 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// _httpWebRequest.Abort();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Net.WebRequest::Abort() */, L_0);
		// }
		return;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_Dispose_m59DBAE8B29B6DBAC0BFD292E1F6138AAD5402B3C (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// _httpWebRequest.Abort();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Net.WebRequest::Abort() */, L_0);
		// _httpWebRequest = null;
		__this->set__httpWebRequest_0((HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A *)NULL);
		// }
		return;
	}
}
// System.IAsyncResult Meta.WitAi.WrapHttpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetRequestStream_m6254840FB0CDD6A3731DA23EB37E854457119311 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetRequestStream(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(26 /* System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IAsyncResult Meta.WitAi.WrapHttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetResponse_m83D2EB344729ACC92C740EDD8AA964FF2D25322C (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetResponse(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(24 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IO.Stream Meta.WitAi.WrapHttpWebRequest::EndGetRequestStream(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WrapHttpWebRequest_EndGetRequestStream_m9A4D032013B19CCDE42D7B8E4277DF54A5B3A795 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.EndGetRequestStream(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2;
		L_2 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject* >::Invoke(27 /* System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult) */, L_0, L_1);
		return L_2;
	}
}
// System.Net.WebResponse Meta.WitAi.WrapHttpWebRequest::EndGetResponse(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * WrapHttpWebRequest_EndGetResponse_mFC5429EC01C3623A61F54A32EF7766446A6D1D54 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return (_httpWebRequest).EndGetResponse(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * L_2;
		L_2 = VirtFuncInvoker1< WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 *, RuntimeObject* >::Invoke(25 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
		return L_2;
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
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30__ctor_m0365B77F9CD992C5F713C82902FF562232A309F2 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_IDisposable_Dispose_mAFE9050776A09DE2706E1EB1FC98562C5208DBA6 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForMicToStartU3Ed__30_MoveNext_m1B77FB822B99AFCA83704ED43F45B7CC041D6FA9 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B11_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B10_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _waitingRecorders.Add(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_4 = V_1;
		NullCheck(L_4);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_5 = L_4->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6 = __this->get_component_3();
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7(L_5, L_6, /*hidden argument*/HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		// yield return new WaitUntil(() => null != MicInput && MicInput.IsInputAvailable);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_8 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!_waitingRecorders.Contains(component))
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_11 = V_1;
		NullCheck(L_11);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_12 = L_11->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13 = __this->get_component_3();
		NullCheck(L_12);
		bool L_14;
		L_14 = HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536(L_12, L_13, /*hidden argument*/HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_006c:
	{
		// _waitingRecorders.Remove(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_15 = V_1;
		NullCheck(L_15);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_16 = L_15->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_17 = __this->get_component_3();
		NullCheck(L_16);
		bool L_18;
		L_18 = HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2(L_16, L_17, /*hidden argument*/HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var);
		// _activeRecorders.Add(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_19 = V_1;
		NullCheck(L_19);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_20 = L_19->get__activeRecorders_12();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_21 = __this->get_component_3();
		NullCheck(L_20);
		bool L_22;
		L_22 = HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7(L_20, L_21, /*hidden argument*/HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		// if (!MicInput.IsRecording)
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Meta.WitAi.Interfaces.IAudioInputSource::get_IsRecording() */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_24);
		if (L_25)
		{
			goto IL_00b3;
		}
	}
	{
		// MicInput.StartRecording(audioBufferConfiguration.sampleLengthInMs);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD(L_26, /*hidden argument*/NULL);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_28 = V_1;
		NullCheck(L_28);
		AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * L_29 = L_28->get_audioBufferConfiguration_6();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_sampleLengthInMs_0();
		NullCheck(L_27);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::StartRecording(System.Int32) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_27, L_30);
	}

IL_00b3:
	{
		// if (component is IVoiceEventProvider v)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_31 = __this->get_component_3();
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var));
		RuntimeObject* L_32 = V_2;
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		// v.VoiceEvents.OnStartListening?.Invoke();
		RuntimeObject* L_33 = V_2;
		NullCheck(L_33);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_34;
		L_34 = InterfaceFuncInvoker0< VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * >::Invoke(0 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_35 = L_34->get_OnStartListening_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_00d3;
		}
	}
	{
		goto IL_00d8;
	}

IL_00d3:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B11_0, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08F570CF16B1F55C1845DC974FA72AAC6DD2F018 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_get_Current_m8869853019EA9831E197C5C8BCB660C233E1552A (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent__ctor_m15B88F6003BF1CC7E54F1CA42A954C16D1BFAFFF (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_mA971F17F482AB6E66A9B718661BA40DC7C9F5E6D (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ___marker0, float ___levelMax1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
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
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___marker0, ___levelMax1);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___marker0, ___levelMax1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
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
						GenericInterfaceActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(targetMethod, targetThis, ___marker0, ___levelMax1);
					else
						GenericVirtActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(targetMethod, targetThis, ___marker0, ___levelMax1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___marker0, ___levelMax1);
					else
						VirtActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___marker0, ___levelMax1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::BeginInvoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSampleReadyEvent_BeginInvoke_m47963337BE0FDA3722BAEB8E3CE1FF2C5A515397 (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ___marker0, float ___levelMax1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___marker0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___levelMax1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_EndInvoke_mB914654E7267919BEB860BD7CEEF9A9EDE12DCF1 (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void AudioClipAudioSource/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mD5AE075E4E2B660BC589BF52D25FDA77B5BEDE26 (U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AudioClipAudioSource/<>c__DisplayClass34_0::<SetActiveClip>b__0(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CSetActiveClipU3Eb__0_m7FCE806757C1438B24A9AD94217971752D2EDE76 (U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// if (clip.name == clipName)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_clipName_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// return false;
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
// System.Void AudioClipAudioSource/<ProcessClip>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25__ctor_m2E9E66750029DC894AB4C46A7E9A9B88563908C7 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AudioClipAudioSource/<ProcessClip>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25_System_IDisposable_Dispose_mA3E201D6F79B0F1C49AD302131623955F71944D8 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AudioClipAudioSource/<ProcessClip>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessClipU3Ed__25_MoveNext_m41F19178AD571B382BCB4B3A8C71A7D95957CA73 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * V_1 = NULL;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	float V_4 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_5 = NULL;
	int32_t V_6 = 0;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B9_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int chunkSize = 0;
		__this->set_U3CchunkSizeU3E5__2_4(0);
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		__this->set_U3CindexU3E5__3_5(0);
		goto IL_0135;
	}

IL_0034:
	{
		// chunkSize = (int) (16000 * Time.deltaTime);
		float L_4;
		L_4 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CchunkSizeU3E5__2_4(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(16000.0f), (float)L_4))));
		// int len = Math.Min(chunkSize, clipData.Length - index);
		int32_t L_5 = __this->get_U3CchunkSizeU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_clipData_2();
		NullCheck(L_6);
		int32_t L_7 = __this->get_U3CindexU3E5__3_5();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)L_7)), /*hidden argument*/NULL);
		V_2 = L_8;
		// var data = new float[chunkSize];
		int32_t L_9 = __this->get_U3CchunkSizeU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_3 = L_10;
		// Array.Copy(clipData, index, data, 0, len);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_clipData_2();
		int32_t L_12 = __this->get_U3CindexU3E5__3_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_3;
		int32_t L_14 = V_2;
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_11, L_12, (RuntimeArray *)(RuntimeArray *)L_13, 0, L_14, /*hidden argument*/NULL);
		// var max = float.MinValue;
		V_4 = (-(std::numeric_limits<float>::max)());
		// foreach (var f in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = V_3;
		V_5 = L_15;
		V_6 = 0;
		goto IL_00a4;
	}

IL_0090:
	{
		// foreach (var f in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// max = Mathf.Max(f, max);
		float L_20 = V_4;
		float L_21;
		L_21 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a4:
	{
		// foreach (var f in data)
		int32_t L_23 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = V_5;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0090;
		}
	}
	{
		// VLog.D($"Sending {index}/{clipData.Length} [{data.Length}] samples with a max volume of {max}");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		int32_t L_27 = __this->get_U3CindexU3E5__3_5();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = __this->get_clipData_2();
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)));
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = V_3;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)));
		RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		float L_39 = V_4;
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		String_t* L_42;
		L_42 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8, L_38, /*hidden argument*/NULL);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(L_42, /*hidden argument*/NULL);
		// OnSampleReady?.Invoke(data.Length, data, max);
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_43 = V_1;
		NullCheck(L_43);
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_44 = L_43->get_OnSampleReady_16();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_45 = L_44;
		G_B8_0 = L_45;
		if (L_45)
		{
			G_B9_0 = L_45;
			goto IL_0100;
		}
	}
	{
		goto IL_010b;
	}

IL_0100:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = V_3;
		NullCheck(L_46);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = V_3;
		float L_48 = V_4;
		NullCheck(G_B9_0);
		Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2(G_B9_0, ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))), L_47, L_48, /*hidden argument*/Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
	}

IL_010b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_011b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		int32_t L_49 = __this->get_U3CindexU3E5__3_5();
		int32_t L_50 = __this->get_U3CchunkSizeU3E5__2_4();
		__this->set_U3CindexU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)));
	}

IL_0135:
	{
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		int32_t L_51 = __this->get_U3CindexU3E5__3_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = __this->get_clipData_2();
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// _isRecording = false;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_53 = V_1;
		NullCheck(L_53);
		L_53->set__isRecording_7((bool)0);
		// clipIndex++;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_54 = V_1;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = L_55->get_clipIndex_9();
		NullCheck(L_54);
		L_54->set_clipIndex_9(((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)));
		// }
		return (bool)0;
	}
}
// System.Object AudioClipAudioSource/<ProcessClip>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessClipU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m342A6D29672C6C8E2C9251A6807B07C329E6CA89 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AudioClipAudioSource/<ProcessClip>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7_RuntimeMethod_var)));
	}
}
// System.Object AudioClipAudioSource/<ProcessClip>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessClipU3Ed__25_System_Collections_IEnumerator_get_Current_m8D9F80624B4FD2EFD6F488E063564A7A6895B066 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m43164CDAD234E3C114353DE9C3F2E9FC0A823262 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * L_0 = (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A *)il2cpp_codegen_object_new(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Utilities.VoiceServiceReference/<>c::<get_VoiceService>b__2_0(Meta.WitAi.VoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_VoiceServiceU3Eb__2_0_mE9B0C26B990DB7F6D13E66B0E51A0AFCA3EC3C43 (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___o0, const RuntimeMethod* method)
{
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// voiceService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_0 = ___o0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryParam__ctor_m381178ADDE8F85B16CB8CB85AB64D083C53C7639 (QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90 * __this, const RuntimeMethod* method)
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
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsTokenValid(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsTokenValid_m67332A407DCFECE8D82FB87F91F210064A21E76E (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___appId0, String_t* ___token1, const RuntimeMethod* method)
{
	{
		// return IsServerTokenValid(token);
		String_t* L_0 = ___token1;
		bool L_1;
		L_1 = DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___serverToken0, const RuntimeMethod* method)
{
	{
		// return null != serverToken && serverToken.Length == 32;
		String_t* L_0 = ___serverToken0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___serverToken0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)32)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
// System.Void Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTokenValidatorProvider__ctor_m9979CDB0D9DF6E034E7AA320222D83A33BF15685 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, const RuntimeMethod* method)
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA0E771E7B752B465F834379F0CF18113BE52D702 (U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m56AC29E52C414F58627D0E87ABFE4A887DCCA852 (U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_2 = __this->get_dynamicEntity_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_entity_0();
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m73C6C44D91F8ED61EA117752003B65D84DFFE753 (U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mF62DA96E859B2EBE4767BB41F443B313E4ED5109 (U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->get_entityName_0();
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_entity_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mEBB765D7FE26A17A7A8D48CBF6D495C7DC00878B (U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_m45B93EBFFF73C778D4B344BDFA4640E3E6DC0F8F (U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		String_t* L_2 = __this->get_entityName_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_m000BB6E67730BD87F0432B5E69D6B7465CB6FF1D (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<ProcessStringResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CProcessStringResponseU3Eb__0_mEB207027090DA22C0D2D7D9F66D11BBB94FE5187 (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onRawResponse?.Invoke(stringResponse));
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onRawResponse_32();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_stringResponse_1();
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<ProcessStringResponse>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CProcessStringResponseU3Eb__1_m6F407C0FFE3EF6A14F4E40D4A6DD85C237D04D48 (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPAudioRequest_4_set_ResponseData_mD2317797C8469065EFCE40F40E0F4CD5E9A72F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequest_4_set_Transcription_m66C6B3AAA4C94521471BD7D0294F17DB324F71B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(transcription) && (!hasResponse || isFinal))
		String_t* L_0 = __this->get_transcription_2();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		bool L_2 = __this->get_hasResponse_3();
		bool L_3 = __this->get_isFinal_4();
		if (!((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_0054;
		}
	}
	{
		// Transcription = transcription;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_4 = __this->get_U3CU3E4__this_0();
		String_t* L_5 = __this->get_transcription_2();
		NullCheck(L_4);
		TranscriptionRequest_4_set_Transcription_m66C6B3AAA4C94521471BD7D0294F17DB324F71B6(L_4, L_5, /*hidden argument*/TranscriptionRequest_4_set_Transcription_m66C6B3AAA4C94521471BD7D0294F17DB324F71B6_RuntimeMethod_var);
		// if (isFinal)
		bool L_6 = __this->get_isFinal_4();
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// onFullTranscription?.Invoke(transcription);
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_7 = __this->get_U3CU3E4__this_0();
		NullCheck(L_7);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = L_7->get_onFullTranscription_36();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0049;
		}
	}
	{
		goto IL_0054;
	}

IL_0049:
	{
		String_t* L_10 = __this->get_transcription_2();
		NullCheck(G_B5_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_10, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0054:
	{
		// if (hasResponse)
		bool L_11 = __this->get_hasResponse_3();
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// ResponseData = responseNode;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_12 = __this->get_U3CU3E4__this_0();
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_13 = __this->get_responseNode_5();
		NullCheck(L_12);
		NLPAudioRequest_4_set_ResponseData_mD2317797C8469065EFCE40F40E0F4CD5E9A72F69(L_12, L_13, /*hidden argument*/NLPAudioRequest_4_set_ResponseData_mD2317797C8469065EFCE40F40E0F4CD5E9A72F69_RuntimeMethod_var);
	}

IL_006d:
	{
		// });
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
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__111__ctor_m11FE2E52BA76CB7A43C864EAA79BB1E1063B5532 (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__111_System_IDisposable_Dispose_m63D54BF2D483C462927E9993815A3418318DB260 (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformMainThreadCallbacksU3Ed__111_MoveNext_mC9A989C7F89299C49CB2A4376BA78B02C5F7F78F (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0092;
	}

IL_002b:
	{
		// if (Application.isPlaying && !Application.isBatchMode)
		bool L_3;
		L_3 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_5 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (_mainThreadCallbacks.Count > 0 && _mainThreadCallbacks.TryDequeue(out var result))
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_6 = V_1;
		NullCheck(L_6);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_7 = L_6->get__mainThreadCallbacks_41();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274(L_7, /*hidden argument*/ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_9 = V_1;
		NullCheck(L_9);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_10 = L_9->get__mainThreadCallbacks_41();
		NullCheck(L_10);
		bool L_11;
		L_11 = ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1(L_10, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_2), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// result();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = V_2;
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		// }
		goto IL_006d;
	}

IL_0092:
	{
		// while (HasMainThreadCallbacks())
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = WitRequest_HasMainThreadCallbacks_m14EED027D8EC177BCCADEBF45C6E3B0524F35D0C(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		// _performer = null;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_15 = V_1;
		NullCheck(L_15);
		L_15->set__performer_40((CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__111_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0956ED3839262E64D76A7F7BB738F52375C903D (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__111_System_Collections_IEnumerator_Reset_m69AD3C7CC756D41CA491CD65B83C6016F2D795AF (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformMainThreadCallbacksU3Ed__111_System_Collections_IEnumerator_Reset_m69AD3C7CC756D41CA491CD65B83C6016F2D795AF_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__111::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__111_System_Collections_IEnumerator_get_Current_m8E6AFFADD9B561E879A256B74DDA086FF462497A (U3CPerformMainThreadCallbacksU3Ed__111_t4746B5407253CAA3457DBD5FAAC3E4A6D18E487F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Meta.WitAi.WitRequest/OnCustomizeUriEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCustomizeUriEvent__ctor_mC1C64DC1C658BBC16790517F193D7FB0FAAA4ADF (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Uri Meta.WitAi.WitRequest/OnCustomizeUriEvent::Invoke(System.UriBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_Invoke_m9E983D87746589B7BBF4440099FC511E369B0B86 (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, const RuntimeMethod* method)
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * result = NULL;
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
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
			}
			else
			{
				// closed
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
					else
						result = GenericVirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___uriBuilder0);
					else
						result = VirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___uriBuilder0);
				}
			}
			else
			{
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(targetMethod, targetThis, ___uriBuilder0);
					else
						result = GenericVirtFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(targetMethod, targetThis, ___uriBuilder0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uriBuilder0);
					else
						result = VirtFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uriBuilder0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
				}
				else
				{
					typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Meta.WitAi.WitRequest/OnCustomizeUriEvent::BeginInvoke(System.UriBuilder,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCustomizeUriEvent_BeginInvoke_mC5E289E858A1797F4D3E0A30BF3313D896F7FE46 (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___uriBuilder0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Uri Meta.WitAi.WitRequest/OnCustomizeUriEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_EndInvoke_m97973E6239BBCE9D6ED449B43646AFEAEB1F413D (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProvideCustomHeadersEvent__ctor_m0F5EDB11FEE43CA702C12A0AEAF4E489C5CAB30C (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_Invoke_mC239B53BA92C2223CA6C5BA3C0C11E0DF882C55C (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, const RuntimeMethod* method)
{
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * result = NULL;
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
			if (___parameterCount == 0)
			{
				// open
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProvideCustomHeadersEvent_BeginInvoke_m91D9909B0F436694478FDD9465AF0EE4E6806E03 (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_EndInvoke_mC38D9BF78CEB7E356A0AC7FB36A717DD051D6721 (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate__ctor_mC270E82E20060EA46A124094624B5A36F8133C30 (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::Invoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_Invoke_m948696DE23F81DD44834EE4563B8A19CBA4F90BC (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src_uri0, ___headers1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
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
						GenericInterfaceActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(targetMethod, targetThis, ___src_uri0, ___headers1);
					else
						GenericVirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(targetMethod, targetThis, ___src_uri0, ___headers1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___src_uri0, ___headers1);
					else
						VirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___src_uri0, ___headers1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___src_uri0, ___headers1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Meta.WitAi.WitRequest/PreSendRequestDelegate::BeginInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreSendRequestDelegate_BeginInvoke_m88693F309A9F2CF6A0D473A00BF7E36135E2BECF (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___src_uri0;
	__d_args[1] = *___headers1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::EndInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_EndInvoke_mEBA6B1335DAF87ED4EA3C7167203E20E1074AE12 (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___src_uri0,
	___headers1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__83__ctor_m0064457959714789DA116DA7CB412CC9CD90FDCC (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__83_System_IDisposable_Dispose_mB1EC7F5DE22548FEB8F529766C0ABE3420C67E18 (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateDueToTimeLimitU3Ed__83_MoveNext_m44D8207ED2A75C02602BC0007A9AB626A4D6B03A (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * V_1 = NULL;
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * G_B7_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B7_1 = NULL;
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * G_B6_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B6_1 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(RuntimeConfiguration.maxRecordingTime);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_4 = V_1;
		NullCheck(L_4);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_5;
		L_5 = WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = L_5->get_maxRecordingTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (IsRequestActive)
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// VLog.D($"Deactivated input due to timeout.\nMax Record Time: {RuntimeConfiguration.maxRecordingTime}");
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_10 = V_1;
		NullCheck(L_10);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_11;
		L_11 = WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = L_11->get_maxRecordingTime_4();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA, L_14, /*hidden argument*/NULL);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(L_15, /*hidden argument*/NULL);
		// DeactivateRequest(VoiceEvents?.OnStoppedListeningDueToTimeout, false);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_16 = V_1;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_17 = V_1;
		NullCheck(L_17);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_18;
		L_18 = WitService_get_VoiceEvents_m39556CBC342B47004B4BE374302707A67CECC52B(L_17, /*hidden argument*/NULL);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_19 = L_18;
		G_B6_0 = L_19;
		G_B6_1 = L_16;
		if (L_19)
		{
			G_B7_0 = L_19;
			G_B7_1 = L_16;
			goto IL_0079;
		}
	}
	{
		G_B8_0 = ((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_007e;
	}

IL_0079:
	{
		NullCheck(G_B7_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20 = G_B7_0->get_OnStoppedListeningDueToTimeout_23();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
	}

IL_007e:
	{
		NullCheck(G_B8_1);
		WitService_DeactivateRequest_mD63B22CC85D4D7FE06D82F391A5968CD2A4791B1(G_B8_1, G_B8_0, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__83_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m643E5E47E05407C60CF0EBE39783FC08C393425E (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__83_System_Collections_IEnumerator_Reset_m2AC3FD9A3D970AD71E45FE99550108B86A9DAAE6 (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateDueToTimeLimitU3Ed__83_System_Collections_IEnumerator_Reset_m2AC3FD9A3D970AD71E45FE99550108B86A9DAAE6_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__83::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__83_System_Collections_IEnumerator_get_Current_mAC3A84A226F7EF8AE98413847152AFD1DC08739F (U3CDeactivateDueToTimeLimitU3Ed__83_t70BA2558707EAB402606CAE1BD3734CA1EAC7CCE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_keepAlive_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_sendChunked_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
