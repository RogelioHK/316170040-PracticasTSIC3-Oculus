#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_t8956C826A49866445E54956164D36A98DE3362FF;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009;
// System.Predicate`1<Meta.WitAi.Dictation.DictationService>
struct Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Meta.WitAi.Dictation.DictationService[]
struct DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859;
// Meta.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558;
// Meta.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF;
// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C;
// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759;
// Meta.WitAi.ServiceReferences.AudioInputServiceReference
struct AudioInputServiceReference_t76AE9AB4D1E13CD137B0C39EC4F5FD3C57D64214;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC;
// Meta.WitAi.Dictation.DictationService
struct DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265;
// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference
struct DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425;
// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE;
// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6;
// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.WitAi.Interfaces.IAudioInputEvents
struct IAudioInputEvents_t1146B94C6C3729577B74162FB2E75EEBD4EC8054;
// Meta.WitAi.Dictation.IDictationService
struct IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tB305F307AFBA6FC6A9DE5ECBBDC2A2130C5B6FAD;
// Meta.WitAi.ITelemetryEventsProvider
struct ITelemetryEventsProvider_t9510930B2567003E15FEB5C0FC41099DB87E3845;
// Meta.WitAi.Interfaces.ITranscriptionEvent
struct ITranscriptionEvent_t294055FE73EE99A33B882E05B283BFBC34DBA0FF;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tA730F4FD31F9C16A7AC4D71C5C92C69712472DAF;
// Meta.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4;
// Meta.WitAi.Interfaces.IWitRequestProvider
struct IWitRequestProvider_t5222C9320576E09C679C9B8609B7489656B8C01D;
// Meta.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Meta.WitAi.Dictation.MultiRequestTranscription
struct MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56;
// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D;
// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D;
// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709;
// Meta.WitAi.Requests.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564;
// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F;
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
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975;
// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F;
// Meta.WitAi.Utilities.DictationServiceReference/<>c
struct U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B;

IL2CPP_EXTERN_C RuntimeClass* DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_mA5CACC242EBB4B2623D6497283197575BD0B346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m9DCDF8337BF59F6AF23CFBB1316E6D6920F7F6C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m79204FAECBFBF209A1F049837D69E007EC2877C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m26534CA22A167AAD3C43AB1BC9C96C4FB4633958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m3A63CD6CF728D0F76F3276AF7EB30C1CAA644F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C_m56886FB758C69FCDFA57C0CD8CCBA2C5E55171EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnCancelled_mF8C53D066DB792FDA6A72A5816668C326E7AF06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mB2EFEFDD4A389861A5F2A2D4BEA7C7CE81DC05A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mFAE040D83D23C778AA054956567613435FA0E48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_m6D8BCC7E2F9757148B5FE70B36421A0CB976F77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_mAAF2A275E43F07B16E070B87C4EBA2BD6BF0C12C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4947B0A1877C21D9031614439769A5A06BEC04E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m9F46A9BF8C55F06FCFE03D142CBFE58F18FB3AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC1A8D6A5F50B081F1A6D7AF0E61F8DCA29C13A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229;
struct IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4373D187D0974E4ADCEE799B0A721E646920BC85 
{
public:

public:
};


// System.Object


// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0  : public RuntimeObject
{
public:
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onStateChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStateChange_0;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onInit
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onInit_1;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSend
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onSend_2;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onCancel
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onCancel_3;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onFailed
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onFailed_4;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSuccess
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onSuccess_5;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onComplete
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onComplete_6;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onDownloadProgressChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onDownloadProgressChange_7;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onUploadProgressChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onUploadProgressChange_8;

public:
	inline static int32_t get_offset_of__onStateChange_0() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onStateChange_0)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStateChange_0() const { return ____onStateChange_0; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStateChange_0() { return &____onStateChange_0; }
	inline void set__onStateChange_0(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStateChange_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStateChange_0), (void*)value);
	}

	inline static int32_t get_offset_of__onInit_1() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onInit_1)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onInit_1() const { return ____onInit_1; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onInit_1() { return &____onInit_1; }
	inline void set__onInit_1(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onInit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInit_1), (void*)value);
	}

	inline static int32_t get_offset_of__onSend_2() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onSend_2)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onSend_2() const { return ____onSend_2; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onSend_2() { return &____onSend_2; }
	inline void set__onSend_2(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onSend_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSend_2), (void*)value);
	}

	inline static int32_t get_offset_of__onCancel_3() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onCancel_3)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onCancel_3() const { return ____onCancel_3; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onCancel_3() { return &____onCancel_3; }
	inline void set__onCancel_3(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onCancel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCancel_3), (void*)value);
	}

	inline static int32_t get_offset_of__onFailed_4() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onFailed_4)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onFailed_4() const { return ____onFailed_4; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onFailed_4() { return &____onFailed_4; }
	inline void set__onFailed_4(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onFailed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFailed_4), (void*)value);
	}

	inline static int32_t get_offset_of__onSuccess_5() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onSuccess_5)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onSuccess_5() const { return ____onSuccess_5; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onSuccess_5() { return &____onSuccess_5; }
	inline void set__onSuccess_5(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onSuccess_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSuccess_5), (void*)value);
	}

	inline static int32_t get_offset_of__onComplete_6() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onComplete_6)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onComplete_6() const { return ____onComplete_6; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onComplete_6() { return &____onComplete_6; }
	inline void set__onComplete_6(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of__onDownloadProgressChange_7() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onDownloadProgressChange_7)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onDownloadProgressChange_7() const { return ____onDownloadProgressChange_7; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onDownloadProgressChange_7() { return &____onDownloadProgressChange_7; }
	inline void set__onDownloadProgressChange_7(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onDownloadProgressChange_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDownloadProgressChange_7), (void*)value);
	}

	inline static int32_t get_offset_of__onUploadProgressChange_8() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onUploadProgressChange_8)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onUploadProgressChange_8() const { return ____onUploadProgressChange_8; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onUploadProgressChange_8() { return &____onUploadProgressChange_8; }
	inline void set__onUploadProgressChange_8(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onUploadProgressChange_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onUploadProgressChange_8), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56  : public RuntimeObject
{
public:
	// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent Meta.WitAi.Events.TelemetryEvents::OnAudioTrackerFinished
	AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * ___OnAudioTrackerFinished_0;

public:
	inline static int32_t get_offset_of_OnAudioTrackerFinished_0() { return static_cast<int32_t>(offsetof(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56, ___OnAudioTrackerFinished_0)); }
	inline AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * get_OnAudioTrackerFinished_0() const { return ___OnAudioTrackerFinished_0; }
	inline AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 ** get_address_of_OnAudioTrackerFinished_0() { return &___OnAudioTrackerFinished_0; }
	inline void set_OnAudioTrackerFinished_0(AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * value)
	{
		___OnAudioTrackerFinished_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioTrackerFinished_0), (void*)value);
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

// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::<QueryParams>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CQueryParamsU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Single Meta.WitAi.Requests.VoiceServiceRequestOptions::<AudioThreshold>k__BackingField
	float ___U3CAudioThresholdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRequestIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CRequestIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CRequestIdU3Ek__BackingField_0() const { return ___U3CRequestIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRequestIdU3Ek__BackingField_0() { return &___U3CRequestIdU3Ek__BackingField_0; }
	inline void set_U3CRequestIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CRequestIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQueryParamsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CQueryParamsU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CQueryParamsU3Ek__BackingField_1() const { return ___U3CQueryParamsU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CQueryParamsU3Ek__BackingField_1() { return &___U3CQueryParamsU3Ek__BackingField_1; }
	inline void set_U3CQueryParamsU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CQueryParamsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQueryParamsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAudioThresholdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CAudioThresholdU3Ek__BackingField_3)); }
	inline float get_U3CAudioThresholdU3Ek__BackingField_3() const { return ___U3CAudioThresholdU3Ek__BackingField_3; }
	inline float* get_address_of_U3CAudioThresholdU3Ek__BackingField_3() { return &___U3CAudioThresholdU3Ek__BackingField_3; }
	inline void set_U3CAudioThresholdU3Ek__BackingField_3(float value)
	{
		___U3CAudioThresholdU3Ek__BackingField_3 = value;
	}
};


// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F  : public RuntimeObject
{
public:
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;

public:
	inline static int32_t get_offset_of_service_0() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___service_0)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get_service_0() const { return ___service_0; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of_service_0() { return &___service_0; }
	inline void set_service_0(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		___service_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_0), (void*)value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___response_1)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_response_1() const { return ___response_1; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_1), (void*)value);
	}

	inline static int32_t get_offset_of_validResponse_2() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___validResponse_2)); }
	inline bool get_validResponse_2() const { return ___validResponse_2; }
	inline bool* get_address_of_validResponse_2() { return &___validResponse_2; }
	inline void set_validResponse_2(bool value)
	{
		___validResponse_2 = value;
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
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


// Meta.WitAi.Utilities.DictationServiceReference/<>c
struct U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC  : public RuntimeObject
{
public:

public:
};


// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E  : public VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0
{
public:
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioInputStateChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioInputStateChange_9;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioActivation
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioActivation_10;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStartListening
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStartListening_11;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioDeactivation
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioDeactivation_12;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStopListening
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStopListening_13;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onPartialTranscription
	TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * ____onPartialTranscription_14;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onFullTranscription
	TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * ____onFullTranscription_15;

public:
	inline static int32_t get_offset_of__onAudioInputStateChange_9() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioInputStateChange_9)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioInputStateChange_9() const { return ____onAudioInputStateChange_9; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioInputStateChange_9() { return &____onAudioInputStateChange_9; }
	inline void set__onAudioInputStateChange_9(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioInputStateChange_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioInputStateChange_9), (void*)value);
	}

	inline static int32_t get_offset_of__onAudioActivation_10() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioActivation_10)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioActivation_10() const { return ____onAudioActivation_10; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioActivation_10() { return &____onAudioActivation_10; }
	inline void set__onAudioActivation_10(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioActivation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioActivation_10), (void*)value);
	}

	inline static int32_t get_offset_of__onStartListening_11() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onStartListening_11)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStartListening_11() const { return ____onStartListening_11; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStartListening_11() { return &____onStartListening_11; }
	inline void set__onStartListening_11(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStartListening_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStartListening_11), (void*)value);
	}

	inline static int32_t get_offset_of__onAudioDeactivation_12() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioDeactivation_12)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioDeactivation_12() const { return ____onAudioDeactivation_12; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioDeactivation_12() { return &____onAudioDeactivation_12; }
	inline void set__onAudioDeactivation_12(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioDeactivation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioDeactivation_12), (void*)value);
	}

	inline static int32_t get_offset_of__onStopListening_13() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onStopListening_13)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStopListening_13() const { return ____onStopListening_13; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStopListening_13() { return &____onStopListening_13; }
	inline void set__onStopListening_13(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStopListening_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStopListening_13), (void*)value);
	}

	inline static int32_t get_offset_of__onPartialTranscription_14() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onPartialTranscription_14)); }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * get__onPartialTranscription_14() const { return ____onPartialTranscription_14; }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 ** get_address_of__onPartialTranscription_14() { return &____onPartialTranscription_14; }
	inline void set__onPartialTranscription_14(TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * value)
	{
		____onPartialTranscription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialTranscription_14), (void*)value);
	}

	inline static int32_t get_offset_of__onFullTranscription_15() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onFullTranscription_15)); }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * get__onFullTranscription_15() const { return ____onFullTranscription_15; }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 ** get_address_of__onFullTranscription_15() { return &____onFullTranscription_15; }
	inline void set__onFullTranscription_15(TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * value)
	{
		____onFullTranscription_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFullTranscription_15), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4, ___m_InvokeArray_3)); }
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


// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC  : public EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9
{
public:
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::onPartialTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onPartialTranscription_6;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::onFullTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onFullTranscription_7;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Dictation.Events.DictationEvents::onResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ___onResponse_8;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::OnAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborting_9;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::OnAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborted_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::OnRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRequestCompleted_11;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Dictation.Events.DictationEvents::OnRequestCreated
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * ___OnRequestCreated_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::onStart
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onStart_13;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::onStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onStopped_14;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Dictation.Events.DictationEvents::onError
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * ___onError_15;
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::onDictationSessionStarted
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * ___onDictationSessionStarted_16;
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::onDictationSessionStopped
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * ___onDictationSessionStopped_17;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Dictation.Events.DictationEvents::onMicAudioLevel
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * ___onMicAudioLevel_18;

public:
	inline static int32_t get_offset_of_onPartialTranscription_6() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onPartialTranscription_6)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onPartialTranscription_6() const { return ___onPartialTranscription_6; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onPartialTranscription_6() { return &___onPartialTranscription_6; }
	inline void set_onPartialTranscription_6(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onPartialTranscription_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_6), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_7() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onFullTranscription_7)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onFullTranscription_7() const { return ___onFullTranscription_7; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onFullTranscription_7() { return &___onFullTranscription_7; }
	inline void set_onFullTranscription_7(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onFullTranscription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_7), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_8() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onResponse_8)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get_onResponse_8() const { return ___onResponse_8; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of_onResponse_8() { return &___onResponse_8; }
	inline void set_onResponse_8(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		___onResponse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborting_9() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___OnAborting_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborting_9() const { return ___OnAborting_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborting_9() { return &___OnAborting_9; }
	inline void set_OnAborting_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborting_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborting_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborted_10() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___OnAborted_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborted_10() const { return ___OnAborted_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborted_10() { return &___OnAborted_10; }
	inline void set_OnAborted_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborted_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCompleted_11() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___OnRequestCompleted_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRequestCompleted_11() const { return ___OnRequestCompleted_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRequestCompleted_11() { return &___OnRequestCompleted_11; }
	inline void set_OnRequestCompleted_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRequestCompleted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCompleted_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCreated_12() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___OnRequestCreated_12)); }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * get_OnRequestCreated_12() const { return ___OnRequestCreated_12; }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 ** get_address_of_OnRequestCreated_12() { return &___OnRequestCreated_12; }
	inline void set_OnRequestCreated_12(WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * value)
	{
		___OnRequestCreated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCreated_12), (void*)value);
	}

	inline static int32_t get_offset_of_onStart_13() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onStart_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onStart_13() const { return ___onStart_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onStart_13() { return &___onStart_13; }
	inline void set_onStart_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onStart_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_13), (void*)value);
	}

	inline static int32_t get_offset_of_onStopped_14() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onStopped_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onStopped_14() const { return ___onStopped_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onStopped_14() { return &___onStopped_14; }
	inline void set_onStopped_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onStopped_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStopped_14), (void*)value);
	}

	inline static int32_t get_offset_of_onError_15() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onError_15)); }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * get_onError_15() const { return ___onError_15; }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B ** get_address_of_onError_15() { return &___onError_15; }
	inline void set_onError_15(WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * value)
	{
		___onError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onError_15), (void*)value);
	}

	inline static int32_t get_offset_of_onDictationSessionStarted_16() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onDictationSessionStarted_16)); }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * get_onDictationSessionStarted_16() const { return ___onDictationSessionStarted_16; }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 ** get_address_of_onDictationSessionStarted_16() { return &___onDictationSessionStarted_16; }
	inline void set_onDictationSessionStarted_16(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * value)
	{
		___onDictationSessionStarted_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDictationSessionStarted_16), (void*)value);
	}

	inline static int32_t get_offset_of_onDictationSessionStopped_17() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onDictationSessionStopped_17)); }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * get_onDictationSessionStopped_17() const { return ___onDictationSessionStopped_17; }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 ** get_address_of_onDictationSessionStopped_17() { return &___onDictationSessionStopped_17; }
	inline void set_onDictationSessionStopped_17(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * value)
	{
		___onDictationSessionStopped_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDictationSessionStopped_17), (void*)value);
	}

	inline static int32_t get_offset_of_onMicAudioLevel_18() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ___onMicAudioLevel_18)); }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * get_onMicAudioLevel_18() const { return ___onMicAudioLevel_18; }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B ** get_address_of_onMicAudioLevel_18() { return &___onMicAudioLevel_18; }
	inline void set_onMicAudioLevel_18(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * value)
	{
		___onMicAudioLevel_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMicAudioLevel_18), (void*)value);
	}
};


// Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 
{
public:
	// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::dictationService
	DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * ___dictationService_0;

public:
	inline static int32_t get_offset_of_dictationService_0() { return static_cast<int32_t>(offsetof(DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836, ___dictationService_0)); }
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * get_dictationService_0() const { return ___dictationService_0; }
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 ** get_address_of_dictationService_0() { return &___dictationService_0; }
	inline void set_dictationService_0(DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * value)
	{
		___dictationService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationService_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_pinvoke
{
	DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * ___dictationService_0;
};
// Native definition for COM marshalling of Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_com
{
	DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * ___dictationService_0;
};

// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE  : public VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F
{
public:
	// Meta.WitAi.Dictation.IDictationService Meta.WitAi.Dictation.Data.DictationSession::dictationService
	RuntimeObject* ___dictationService_3;
	// System.String[] Meta.WitAi.Dictation.Data.DictationSession::clientRequestId
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___clientRequestId_4;
	// System.String Meta.WitAi.Dictation.Data.DictationSession::sessionId
	String_t* ___sessionId_5;

public:
	inline static int32_t get_offset_of_dictationService_3() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___dictationService_3)); }
	inline RuntimeObject* get_dictationService_3() const { return ___dictationService_3; }
	inline RuntimeObject** get_address_of_dictationService_3() { return &___dictationService_3; }
	inline void set_dictationService_3(RuntimeObject* value)
	{
		___dictationService_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationService_3), (void*)value);
	}

	inline static int32_t get_offset_of_clientRequestId_4() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___clientRequestId_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_clientRequestId_4() const { return ___clientRequestId_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_clientRequestId_4() { return &___clientRequestId_4; }
	inline void set_clientRequestId_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___clientRequestId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientRequestId_4), (void*)value);
	}

	inline static int32_t get_offset_of_sessionId_5() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___sessionId_5)); }
	inline String_t* get_sessionId_5() const { return ___sessionId_5; }
	inline String_t** get_address_of_sessionId_5() { return &___sessionId_5; }
	inline void set_sessionId_5(String_t* value)
	{
		___sessionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_5), (void*)value);
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
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


// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F  : public VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825
{
public:
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider Meta.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_4;
	// System.Int32 Meta.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_5;
	// System.String Meta.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Configuration.WitRequestOptions::additionalParameters
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters_7;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onResponse_8;

public:
	inline static int32_t get_offset_of_dynamicEntities_4() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___dynamicEntities_4)); }
	inline RuntimeObject* get_dynamicEntities_4() const { return ___dynamicEntities_4; }
	inline RuntimeObject** get_address_of_dynamicEntities_4() { return &___dynamicEntities_4; }
	inline void set_dynamicEntities_4(RuntimeObject* value)
	{
		___dynamicEntities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntities_4), (void*)value);
	}

	inline static int32_t get_offset_of_nBestIntents_5() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___nBestIntents_5)); }
	inline int32_t get_nBestIntents_5() const { return ___nBestIntents_5; }
	inline int32_t* get_address_of_nBestIntents_5() { return &___nBestIntents_5; }
	inline void set_nBestIntents_5(int32_t value)
	{
		___nBestIntents_5 = value;
	}

	inline static int32_t get_offset_of_tag_6() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___tag_6)); }
	inline String_t* get_tag_6() const { return ___tag_6; }
	inline String_t** get_address_of_tag_6() { return &___tag_6; }
	inline void set_tag_6(String_t* value)
	{
		___tag_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_6), (void*)value);
	}

	inline static int32_t get_offset_of_additionalParameters_7() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___additionalParameters_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_additionalParameters_7() const { return ___additionalParameters_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_additionalParameters_7() { return &___additionalParameters_7; }
	inline void set_additionalParameters_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___additionalParameters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalParameters_7), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_8() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___onResponse_8)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onResponse_8() const { return ___onResponse_8; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onResponse_8() { return &___onResponse_8; }
	inline void set_onResponse_8(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onResponse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_8), (void*)value);
	}
};


// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83  : public TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E
{
public:
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onPartialResponse
	NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * ____onPartialResponse_16;
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onFullResponse
	NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * ____onFullResponse_17;

public:
	inline static int32_t get_offset_of__onPartialResponse_16() { return static_cast<int32_t>(offsetof(NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83, ____onPartialResponse_16)); }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * get__onPartialResponse_16() const { return ____onPartialResponse_16; }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC ** get_address_of__onPartialResponse_16() { return &____onPartialResponse_16; }
	inline void set__onPartialResponse_16(NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * value)
	{
		____onPartialResponse_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialResponse_16), (void*)value);
	}

	inline static int32_t get_offset_of__onFullResponse_17() { return static_cast<int32_t>(offsetof(NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83, ____onFullResponse_17)); }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * get__onFullResponse_17() const { return ____onFullResponse_17; }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC ** get_address_of__onFullResponse_17() { return &____onFullResponse_17; }
	inline void set__onFullResponse_17(NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * value)
	{
		____onFullResponse_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFullResponse_17), (void*)value);
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

// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6  : public UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2
{
public:

public:
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


// Meta.WitAi.Data.Info.WitAppTrainingStatus
struct WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6 
{
public:
	// System.Int32 Meta.WitAi.Data.Info.WitAppTrainingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B  : public UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4
{
public:

public:
};


// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759  : public UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015
{
public:

public:
};


// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705  : public UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C
{
public:

public:
};


// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPRequestEvents_1_t3FAF79BC8A9130B1F147A5CD3569332D1006E5B9  : public NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83
{
public:

public:
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

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F 
{
public:
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* ___voices_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_lang_2() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lang_2)); }
	inline String_t* get_lang_2() const { return ___lang_2; }
	inline String_t** get_address_of_lang_2() { return &___lang_2; }
	inline void set_lang_2(String_t* value)
	{
		___lang_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lang_2), (void*)value);
	}

	inline static int32_t get_offset_of_isPrivate_3() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___isPrivate_3)); }
	inline bool get_isPrivate_3() const { return ___isPrivate_3; }
	inline bool* get_address_of_isPrivate_3() { return &___isPrivate_3; }
	inline void set_isPrivate_3(bool value)
	{
		___isPrivate_3 = value;
	}

	inline static int32_t get_offset_of_createdAt_4() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___createdAt_4)); }
	inline String_t* get_createdAt_4() const { return ___createdAt_4; }
	inline String_t** get_address_of_createdAt_4() { return &___createdAt_4; }
	inline void set_createdAt_4(String_t* value)
	{
		___createdAt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createdAt_4), (void*)value);
	}

	inline static int32_t get_offset_of_trainingStatus_5() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___trainingStatus_5)); }
	inline int32_t get_trainingStatus_5() const { return ___trainingStatus_5; }
	inline int32_t* get_address_of_trainingStatus_5() { return &___trainingStatus_5; }
	inline void set_trainingStatus_5(int32_t value)
	{
		___trainingStatus_5 = value;
	}

	inline static int32_t get_offset_of_lastTrainDuration_6() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainDuration_6)); }
	inline int32_t get_lastTrainDuration_6() const { return ___lastTrainDuration_6; }
	inline int32_t* get_address_of_lastTrainDuration_6() { return &___lastTrainDuration_6; }
	inline void set_lastTrainDuration_6(int32_t value)
	{
		___lastTrainDuration_6 = value;
	}

	inline static int32_t get_offset_of_lastTrainedAt_7() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainedAt_7)); }
	inline String_t* get_lastTrainedAt_7() const { return ___lastTrainedAt_7; }
	inline String_t** get_address_of_lastTrainedAt_7() { return &___lastTrainedAt_7; }
	inline void set_lastTrainedAt_7(String_t* value)
	{
		___lastTrainedAt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTrainedAt_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextTrainAt_8() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___nextTrainAt_8)); }
	inline String_t* get_nextTrainAt_8() const { return ___nextTrainAt_8; }
	inline String_t** get_address_of_nextTrainAt_8() { return &___nextTrainAt_8; }
	inline void set_nextTrainAt_8(String_t* value)
	{
		___nextTrainAt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextTrainAt_8), (void*)value);
	}

	inline static int32_t get_offset_of_intents_9() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___intents_9)); }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* get_intents_9() const { return ___intents_9; }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB** get_address_of_intents_9() { return &___intents_9; }
	inline void set_intents_9(WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* value)
	{
		___intents_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intents_9), (void*)value);
	}

	inline static int32_t get_offset_of_entities_10() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___entities_10)); }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* get_entities_10() const { return ___entities_10; }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835** get_address_of_entities_10() { return &___entities_10; }
	inline void set_entities_10(WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* value)
	{
		___entities_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_10), (void*)value);
	}

	inline static int32_t get_offset_of_traits_11() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___traits_11)); }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* get_traits_11() const { return ___traits_11; }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5** get_address_of_traits_11() { return &___traits_11; }
	inline void set_traits_11(WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* value)
	{
		___traits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___traits_11), (void*)value);
	}

	inline static int32_t get_offset_of_voices_12() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___voices_12)); }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* get_voices_12() const { return ___voices_12; }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282** get_address_of_voices_12() { return &___voices_12; }
	inline void set_voices_12(WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* value)
	{
		___voices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voices_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke* ___voices_12;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com* ___voices_12;
};

// System.Predicate`1<Meta.WitAi.Dictation.DictationService>
struct Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E  : public NLPRequestEvents_1_t3FAF79BC8A9130B1F147A5CD3569332D1006E5B9
{
public:

public:
};


// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___excludedAssemblies_12;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_13;

public:
	inline static int32_t get_offset_of__clientAccessToken_4() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____clientAccessToken_4)); }
	inline String_t* get__clientAccessToken_4() const { return ____clientAccessToken_4; }
	inline String_t** get_address_of__clientAccessToken_4() { return &____clientAccessToken_4; }
	inline void set__clientAccessToken_4(String_t* value)
	{
		____clientAccessToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clientAccessToken_4), (void*)value);
	}

	inline static int32_t get_offset_of__appInfo_5() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____appInfo_5)); }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  get__appInfo_5() const { return ____appInfo_5; }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F * get_address_of__appInfo_5() { return &____appInfo_5; }
	inline void set__appInfo_5(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  value)
	{
		____appInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lang_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___createdAt_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lastTrainedAt_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___nextTrainAt_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___intents_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___entities_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___traits_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___voices_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__configurationId_6() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____configurationId_6)); }
	inline String_t* get__configurationId_6() const { return ____configurationId_6; }
	inline String_t** get_address_of__configurationId_6() { return &____configurationId_6; }
	inline void set__configurationId_6(String_t* value)
	{
		____configurationId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configurationId_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutMS_7() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___timeoutMS_7)); }
	inline int32_t get_timeoutMS_7() const { return ___timeoutMS_7; }
	inline int32_t* get_address_of_timeoutMS_7() { return &___timeoutMS_7; }
	inline void set_timeoutMS_7(int32_t value)
	{
		___timeoutMS_7 = value;
	}

	inline static int32_t get_offset_of_endpointConfiguration_8() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___endpointConfiguration_8)); }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * get_endpointConfiguration_8() const { return ___endpointConfiguration_8; }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F ** get_address_of_endpointConfiguration_8() { return &___endpointConfiguration_8; }
	inline void set_endpointConfiguration_8(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * value)
	{
		___endpointConfiguration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointConfiguration_8), (void*)value);
	}

	inline static int32_t get_offset_of_isDemoOnly_9() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___isDemoOnly_9)); }
	inline bool get_isDemoOnly_9() const { return ___isDemoOnly_9; }
	inline bool* get_address_of_isDemoOnly_9() { return &___isDemoOnly_9; }
	inline void set_isDemoOnly_9(bool value)
	{
		___isDemoOnly_9 = value;
	}

	inline static int32_t get_offset_of_useConduit_10() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___useConduit_10)); }
	inline bool get_useConduit_10() const { return ___useConduit_10; }
	inline bool* get_address_of_useConduit_10() { return &___useConduit_10; }
	inline void set_useConduit_10(bool value)
	{
		___useConduit_10 = value;
	}

	inline static int32_t get_offset_of__manifestLocalPath_11() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____manifestLocalPath_11)); }
	inline String_t* get__manifestLocalPath_11() const { return ____manifestLocalPath_11; }
	inline String_t** get_address_of__manifestLocalPath_11() { return &____manifestLocalPath_11; }
	inline void set__manifestLocalPath_11(String_t* value)
	{
		____manifestLocalPath_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manifestLocalPath_11), (void*)value);
	}

	inline static int32_t get_offset_of_excludedAssemblies_12() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___excludedAssemblies_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_excludedAssemblies_12() const { return ___excludedAssemblies_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_excludedAssemblies_12() { return &___excludedAssemblies_12; }
	inline void set_excludedAssemblies_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___excludedAssemblies_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___excludedAssemblies_12), (void*)value);
	}

	inline static int32_t get_offset_of_relaxedResolution_13() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___relaxedResolution_13)); }
	inline bool get_relaxedResolution_13() const { return ___relaxedResolution_13; }
	inline bool* get_address_of_relaxedResolution_13() { return &___relaxedResolution_13; }
	inline void set_relaxedResolution_13(bool value)
	{
		___relaxedResolution_13 = value;
	}
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


// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicAudioLevelChanged
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * ___onMicAudioLevelChanged_4;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStartedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onMicStartedListening_5;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onMicStoppedListening_6;
	// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Events.UnityEventListeners.AudioEventListener::_events
	RuntimeObject* ____events_7;

public:
	inline static int32_t get_offset_of_onMicAudioLevelChanged_4() { return static_cast<int32_t>(offsetof(AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759, ___onMicAudioLevelChanged_4)); }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * get_onMicAudioLevelChanged_4() const { return ___onMicAudioLevelChanged_4; }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B ** get_address_of_onMicAudioLevelChanged_4() { return &___onMicAudioLevelChanged_4; }
	inline void set_onMicAudioLevelChanged_4(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * value)
	{
		___onMicAudioLevelChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMicAudioLevelChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_onMicStartedListening_5() { return static_cast<int32_t>(offsetof(AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759, ___onMicStartedListening_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onMicStartedListening_5() const { return ___onMicStartedListening_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onMicStartedListening_5() { return &___onMicStartedListening_5; }
	inline void set_onMicStartedListening_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onMicStartedListening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMicStartedListening_5), (void*)value);
	}

	inline static int32_t get_offset_of_onMicStoppedListening_6() { return static_cast<int32_t>(offsetof(AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759, ___onMicStoppedListening_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onMicStoppedListening_6() const { return ___onMicStoppedListening_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onMicStoppedListening_6() { return &___onMicStoppedListening_6; }
	inline void set_onMicStoppedListening_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onMicStoppedListening_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMicStoppedListening_6), (void*)value);
	}

	inline static int32_t get_offset_of__events_7() { return static_cast<int32_t>(offsetof(AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759, ____events_7)); }
	inline RuntimeObject* get__events_7() const { return ____events_7; }
	inline RuntimeObject** get_address_of__events_7() { return &____events_7; }
	inline void set__events_7(RuntimeObject* value)
	{
		____events_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____events_7), (void*)value);
	}
};


// Meta.WitAi.ServiceReferences.AudioInputServiceReference
struct AudioInputServiceReference_t76AE9AB4D1E13CD137B0C39EC4F5FD3C57D64214  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Meta.WitAi.Dictation.DictationService
struct DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::dictationEvents
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * ___dictationEvents_4;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::telemetryEvents
	TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___telemetryEvents_5;

public:
	inline static int32_t get_offset_of_dictationEvents_4() { return static_cast<int32_t>(offsetof(DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265, ___dictationEvents_4)); }
	inline DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * get_dictationEvents_4() const { return ___dictationEvents_4; }
	inline DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC ** get_address_of_dictationEvents_4() { return &___dictationEvents_4; }
	inline void set_dictationEvents_4(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * value)
	{
		___dictationEvents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEvents_4), (void*)value);
	}

	inline static int32_t get_offset_of_telemetryEvents_5() { return static_cast<int32_t>(offsetof(DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265, ___telemetryEvents_5)); }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * get_telemetryEvents_5() const { return ___telemetryEvents_5; }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 ** get_address_of_telemetryEvents_5() { return &___telemetryEvents_5; }
	inline void set_telemetryEvents_5(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * value)
	{
		___telemetryEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telemetryEvents_5), (void*)value);
	}
};


// Meta.WitAi.Dictation.MultiRequestTranscription
struct MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Dictation.WitDictation Meta.WitAi.Dictation.MultiRequestTranscription::witDictation
	WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * ___witDictation_4;
	// System.Int32 Meta.WitAi.Dictation.MultiRequestTranscription::linesBetweenActivations
	int32_t ___linesBetweenActivations_5;
	// System.String Meta.WitAi.Dictation.MultiRequestTranscription::activationSeparator
	String_t* ___activationSeparator_6;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.MultiRequestTranscription::onTranscriptionUpdated
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onTranscriptionUpdated_7;
	// System.Text.StringBuilder Meta.WitAi.Dictation.MultiRequestTranscription::_text
	StringBuilder_t * ____text_8;
	// System.String Meta.WitAi.Dictation.MultiRequestTranscription::_activeText
	String_t* ____activeText_9;
	// System.Boolean Meta.WitAi.Dictation.MultiRequestTranscription::_newSection
	bool ____newSection_10;
	// System.Text.StringBuilder Meta.WitAi.Dictation.MultiRequestTranscription::_separator
	StringBuilder_t * ____separator_11;

public:
	inline static int32_t get_offset_of_witDictation_4() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ___witDictation_4)); }
	inline WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * get_witDictation_4() const { return ___witDictation_4; }
	inline WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 ** get_address_of_witDictation_4() { return &___witDictation_4; }
	inline void set_witDictation_4(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * value)
	{
		___witDictation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witDictation_4), (void*)value);
	}

	inline static int32_t get_offset_of_linesBetweenActivations_5() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ___linesBetweenActivations_5)); }
	inline int32_t get_linesBetweenActivations_5() const { return ___linesBetweenActivations_5; }
	inline int32_t* get_address_of_linesBetweenActivations_5() { return &___linesBetweenActivations_5; }
	inline void set_linesBetweenActivations_5(int32_t value)
	{
		___linesBetweenActivations_5 = value;
	}

	inline static int32_t get_offset_of_activationSeparator_6() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ___activationSeparator_6)); }
	inline String_t* get_activationSeparator_6() const { return ___activationSeparator_6; }
	inline String_t** get_address_of_activationSeparator_6() { return &___activationSeparator_6; }
	inline void set_activationSeparator_6(String_t* value)
	{
		___activationSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_onTranscriptionUpdated_7() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ___onTranscriptionUpdated_7)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onTranscriptionUpdated_7() const { return ___onTranscriptionUpdated_7; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onTranscriptionUpdated_7() { return &___onTranscriptionUpdated_7; }
	inline void set_onTranscriptionUpdated_7(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onTranscriptionUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTranscriptionUpdated_7), (void*)value);
	}

	inline static int32_t get_offset_of__text_8() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ____text_8)); }
	inline StringBuilder_t * get__text_8() const { return ____text_8; }
	inline StringBuilder_t ** get_address_of__text_8() { return &____text_8; }
	inline void set__text_8(StringBuilder_t * value)
	{
		____text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_8), (void*)value);
	}

	inline static int32_t get_offset_of__activeText_9() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ____activeText_9)); }
	inline String_t* get__activeText_9() const { return ____activeText_9; }
	inline String_t** get_address_of__activeText_9() { return &____activeText_9; }
	inline void set__activeText_9(String_t* value)
	{
		____activeText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeText_9), (void*)value);
	}

	inline static int32_t get_offset_of__newSection_10() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ____newSection_10)); }
	inline bool get__newSection_10() const { return ____newSection_10; }
	inline bool* get_address_of__newSection_10() { return &____newSection_10; }
	inline void set__newSection_10(bool value)
	{
		____newSection_10 = value;
	}

	inline static int32_t get_offset_of__separator_11() { return static_cast<int32_t>(offsetof(MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B, ____separator_11)); }
	inline StringBuilder_t * get__separator_11() const { return ____separator_11; }
	inline StringBuilder_t ** get_address_of__separator_11() { return &____separator_11; }
	inline void set__separator_11(StringBuilder_t * value)
	{
		____separator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____separator_11), (void*)value);
	}
};


// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onPartialTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onPartialTranscription_4;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onFullTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onFullTranscription_5;
	// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::_events
	RuntimeObject* ____events_6;

public:
	inline static int32_t get_offset_of_onPartialTranscription_4() { return static_cast<int32_t>(offsetof(TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F, ___onPartialTranscription_4)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onPartialTranscription_4() const { return ___onPartialTranscription_4; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onPartialTranscription_4() { return &___onPartialTranscription_4; }
	inline void set_onPartialTranscription_4(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onPartialTranscription_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_4), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_5() { return static_cast<int32_t>(offsetof(TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F, ___onFullTranscription_5)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onFullTranscription_5() const { return ___onFullTranscription_5; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onFullTranscription_5() { return &___onFullTranscription_5; }
	inline void set_onFullTranscription_5(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onFullTranscription_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_5), (void*)value);
	}

	inline static int32_t get_offset_of__events_6() { return static_cast<int32_t>(offsetof(TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F, ____events_6)); }
	inline RuntimeObject* get__events_6() const { return ____events_6; }
	inline RuntimeObject** get_address_of__events_6() { return &____events_6; }
	inline void set__events_6(RuntimeObject* value)
	{
		____events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____events_6), (void*)value);
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


// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference
struct DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425  : public AudioInputServiceReference_t76AE9AB4D1E13CD137B0C39EC4F5FD3C57D64214
{
public:
	// Meta.WitAi.Utilities.DictationServiceReference Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::_dictationServiceReference
	DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836  ____dictationServiceReference_4;

public:
	inline static int32_t get_offset_of__dictationServiceReference_4() { return static_cast<int32_t>(offsetof(DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425, ____dictationServiceReference_4)); }
	inline DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836  get__dictationServiceReference_4() const { return ____dictationServiceReference_4; }
	inline DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * get_address_of__dictationServiceReference_4() { return &____dictationServiceReference_4; }
	inline void set__dictationServiceReference_4(DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836  value)
	{
		____dictationServiceReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____dictationServiceReference_4))->___dictationService_0), (void*)NULL);
	}
};


// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C  : public NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884
{
public:

public:
};


// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79  : public DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265
{
public:
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::witRuntimeConfiguration
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___witRuntimeConfiguration_6;
	// Meta.WitAi.WitService Meta.WitAi.Dictation.WitDictation::witService
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * ___witService_7;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::voiceEvents
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * ___voiceEvents_8;

public:
	inline static int32_t get_offset_of_witRuntimeConfiguration_6() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ___witRuntimeConfiguration_6)); }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * get_witRuntimeConfiguration_6() const { return ___witRuntimeConfiguration_6; }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 ** get_address_of_witRuntimeConfiguration_6() { return &___witRuntimeConfiguration_6; }
	inline void set_witRuntimeConfiguration_6(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * value)
	{
		___witRuntimeConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witRuntimeConfiguration_6), (void*)value);
	}

	inline static int32_t get_offset_of_witService_7() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ___witService_7)); }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * get_witService_7() const { return ___witService_7; }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C ** get_address_of_witService_7() { return &___witService_7; }
	inline void set_witService_7(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * value)
	{
		___witService_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witService_7), (void*)value);
	}

	inline static int32_t get_offset_of_voiceEvents_8() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ___voiceEvents_8)); }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * get_voiceEvents_8() const { return ___voiceEvents_8; }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D ** get_address_of_voiceEvents_8() { return &___voiceEvents_8; }
	inline void set_voiceEvents_8(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * value)
	{
		___voiceEvents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceEvents_8), (void*)value);
	}
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


// <Module>


// <Module>


// System.Object


// System.Object


// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Meta.WitAi.Events.EventRegistry


// Meta.WitAi.Events.EventRegistry


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


// System.Text.StringBuilder


// System.Text.StringBuilder


// Meta.WitAi.Events.TelemetryEvents


// Meta.WitAi.Events.TelemetryEvents


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.ValueType


// System.ValueType


// Meta.WitAi.Requests.VoiceServiceRequestOptions


// Meta.WitAi.Requests.VoiceServiceRequestOptions


// Meta.WitAi.Data.VoiceSession


// Meta.WitAi.Data.VoiceSession


// Meta.WitAi.Json.WitResponseNode


// Meta.WitAi.Json.WitResponseNode


// Meta.WitAi.Configuration.WitRuntimeConfiguration


// Meta.WitAi.Configuration.WitRuntimeConfiguration


// Meta.WitAi.Utilities.DictationServiceReference/<>c

struct U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields
{
public:
	// Meta.WitAi.Utilities.DictationServiceReference/<>c Meta.WitAi.Utilities.DictationServiceReference/<>c::<>9
	U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.Dictation.DictationService> Meta.WitAi.Utilities.DictationServiceReference/<>c::<>9__2_0
	Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Meta.WitAi.Utilities.DictationServiceReference/<>c


// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>


// UnityEngine.Events.UnityEvent`1<System.Single>


// UnityEngine.Events.UnityEvent`1<System.Single>


// UnityEngine.Events.UnityEvent`1<System.String>


// UnityEngine.Events.UnityEvent`1<System.String>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>


// UnityEngine.Events.UnityEvent`2<System.String,System.String>


// UnityEngine.Events.UnityEvent`2<System.String,System.String>


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


// System.Byte


// System.Byte


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


// Meta.WitAi.Dictation.Events.DictationEvents


// Meta.WitAi.Dictation.Events.DictationEvents


// Meta.WitAi.Utilities.DictationServiceReference


// Meta.WitAi.Utilities.DictationServiceReference


// Meta.WitAi.Dictation.Data.DictationSession


// Meta.WitAi.Dictation.Data.DictationSession


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


// System.Guid

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Guid


// System.Int32


// System.Int32


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


// UnityEngine.SceneManagement.Scene


// UnityEngine.SceneManagement.Scene


// System.Single


// System.Single


// UnityEngine.Events.UnityEvent


// UnityEngine.Events.UnityEvent


// Meta.WitAi.Events.VoiceEvents


// Meta.WitAi.Events.VoiceEvents


// System.Void


// System.Void


// Meta.WitAi.Configuration.WitRequestOptions


// Meta.WitAi.Configuration.WitRequestOptions


// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// System.Delegate


// System.Delegate


// Meta.WitAi.Dictation.Events.DictationSessionEvent


// Meta.WitAi.Dictation.Events.DictationSessionEvent


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


// Meta.Voice.VoiceAudioInputState


// Meta.Voice.VoiceAudioInputState


// Meta.Voice.VoiceRequestState


// Meta.Voice.VoiceRequestState


// Meta.WitAi.Data.Info.WitAppTrainingStatus


// Meta.WitAi.Data.Info.WitAppTrainingStatus


// Meta.WitAi.Events.WitErrorEvent


// Meta.WitAi.Events.WitErrorEvent


// Meta.WitAi.Events.WitMicLevelChangedEvent


// Meta.WitAi.Events.WitMicLevelChangedEvent


// Meta.WitAi.Events.WitRequestCreatedEvent


// Meta.WitAi.Events.WitRequestCreatedEvent


// Meta.WitAi.Events.WitResponseEvent


// Meta.WitAi.Events.WitResponseEvent


// Meta.WitAi.Events.WitTranscriptionEvent


// Meta.WitAi.Events.WitTranscriptionEvent


// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// Meta.WitAi.Data.Info.WitAppInfo


// Meta.WitAi.Data.Info.WitAppInfo


// System.Predicate`1<Meta.WitAi.Dictation.DictationService>


// System.Predicate`1<Meta.WitAi.Dictation.DictationService>


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// UnityEngine.Events.UnityAction`1<System.Single>


// UnityEngine.Events.UnityAction`1<System.Single>


// UnityEngine.Events.UnityAction`1<System.String>


// UnityEngine.Events.UnityAction`1<System.String>


// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>


// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>


// UnityEngine.Events.UnityAction`2<System.String,System.String>


// UnityEngine.Events.UnityAction`2<System.String,System.String>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.Events.UnityAction


// UnityEngine.Events.UnityAction


// Meta.WitAi.Requests.VoiceServiceRequestEvents


// Meta.WitAi.Requests.VoiceServiceRequestEvents


// Meta.WitAi.Data.Configuration.WitConfiguration


// Meta.WitAi.Data.Configuration.WitConfiguration


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>


// Meta.WitAi.Events.UnityEventListeners.AudioEventListener


// Meta.WitAi.Events.UnityEventListeners.AudioEventListener


// Meta.WitAi.ServiceReferences.AudioInputServiceReference


// Meta.WitAi.ServiceReferences.AudioInputServiceReference


// Meta.WitAi.Dictation.DictationService


// Meta.WitAi.Dictation.DictationService


// Meta.WitAi.Dictation.MultiRequestTranscription


// Meta.WitAi.Dictation.MultiRequestTranscription


// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener


// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener


// Meta.WitAi.WitService


// Meta.WitAi.WitService


// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference


// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference


// Meta.WitAi.Requests.VoiceServiceRequest


// Meta.WitAi.Requests.VoiceServiceRequest


// Meta.WitAi.Dictation.WitDictation


// Meta.WitAi.Dictation.WitDictation


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
// Meta.WitAi.Dictation.DictationService[]
struct DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * m_Items[1];

public:
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m8D2DBE0C15FEBF6C7B9706DBF52503080ADFC14F_gshared (const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Array::Find<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Find_TisRuntimeObject_m5F5DB46E68DD5A65AFC4306E2F3052D000135CB4_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);

// System.Void Meta.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m745D154FDAA3D2BF8CD8EB78D82D322BBDF6D743 (WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_m66735D24DD905FCBEF38E6BC9C6C3313ECA29B2C (WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.WitRequestCreatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestCreatedEvent__ctor_m480579CE5442BD1F1E60449622EB5909F42C5C02 (WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.WitErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitErrorEvent__ctor_m4C4C5F01ED1C0C702FE55AEA5EB761BBBA2974BA (WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.Events.DictationSessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSessionEvent__ctor_m215D7432E80948BF0510DFDB35CCE3451514A8A6 (DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.WitMicLevelChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMicLevelChangedEvent__ctor_mE959EFF45693D6451832141F4AE7949B0B219F52 (WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.EventRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry__ctor_m81A20F6449CB54DC144E31BA4EFD6D2A418F9872 (EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9 * __this, const RuntimeMethod* method);
// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Configuration.WitRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VoiceServiceRequestEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3 (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Meta.WitAi.Events.UnityEventListeners.AudioEventListener>()
inline AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * Component_GetComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m9DCDF8337BF59F6AF23CFBB1316E6D6920F7F6C8 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Meta.WitAi.Events.UnityEventListeners.AudioEventListener>()
inline AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * GameObject_AddComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m26534CA22A167AAD3C43AB1BC9C96C4FB4633958 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener>()
inline TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * Component_GetComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m79204FAECBFBF209A1F049837D69E007EC2877C6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener>()
inline TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * GameObject_AddComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m3A63CD6CF728D0F76F3276AF7EB30C1CAA644F0B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Meta.WitAi.Dictation.Events.DictationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationEvents__ctor_mD09503E208E3EE507AFF5B28DB5F02F4166F8A6C (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.TelemetryEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryEvents__ctor_m6F75A0D2A8D9CB5B34113C767D5C6EB92E5320A3 (TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::get_DictationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * DictationServiceReference_get_DictationService_m9AF6D5B8CD021CA5423156CBD665A9F0724300D9 (DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * __this, const RuntimeMethod* method);
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Dictation.DictationService::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_AudioEvents_m51B50A7E2774C873D16002CC691F117A5C2D7188 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.ServiceReferences.AudioInputServiceReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputServiceReference__ctor_mDD16C592DEA963FC801F33EAEBFC5AEAB1B619BF (AudioInputServiceReference_t76AE9AB4D1E13CD137B0C39EC4F5FD3C57D64214 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<Meta.WitAi.Dictation.DictationService>()
inline DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* Resources_FindObjectsOfTypeAll_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_m6D8BCC7E2F9757148B5FE70B36421A0CB976F77A (const RuntimeMethod* method)
{
	return ((  DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_m8D2DBE0C15FEBF6C7B9706DBF52503080ADFC14F_gshared)(method);
}
// System.Void System.Predicate`1<Meta.WitAi.Dictation.DictationService>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mFAE040D83D23C778AA054956567613435FA0E48D (Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Array::Find<Meta.WitAi.Dictation.DictationService>(!!0[],System.Predicate`1<!!0>)
inline DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * Array_Find_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_mA5CACC242EBB4B2623D6497283197575BD0B346C (DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* ___array0, Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * ___match1, const RuntimeMethod* method)
{
	return ((  DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * (*) (DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229*, Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 *, const RuntimeMethod*))Array_Find_TisRuntimeObject_m5F5DB46E68DD5A65AFC4306E2F3052D000135CB4_gshared)(___array0, ___match1, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_mA7DA3F652640919C3C83918D48310941AF3FCED4 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Data.VoiceSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSession__ctor_m532BA4D1C114BA389D8F81458A05BA9A3C91FD25 (VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>::.ctor()
inline void UnityEvent_1__ctor_mC1A8D6A5F50B081F1A6D7AF0E61F8DCA29C13A16 (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Meta.WitAi.Dictation.WitDictation>()
inline WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * Object_FindObjectOfType_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mB2EFEFDD4A389861A5F2A2D4BEA7C7CE81DC05A5 (const RuntimeMethod* method)
{
	return ((  WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::get_VoiceEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnTranscriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnTranscriptionUpdated_mE4A06EA170E705AB0F943A34B7EB1E2A49F92E9B (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::get_RuntimeConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * WitDictation_get_RuntimeConfiguration_m058587969B490A5B70450EBEA4EFF6B9040F7F20_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitService::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_Active_mD6CE27612358C32973CEACCB8168D7CDED327757 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.WitService::get_TranscriptionProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitService_get_TranscriptionProvider_m5BE5B6567B11DC21100D9AC0F454C813FCE0F931_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_set_TranscriptionProvider_mEBC16C60777F224A975E08FC839A66AE56945119 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitService::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_MicActive_mD5BE1EDC582683193E6A3BCA4A125B1A015B8FA6 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// Meta.WitAi.WitRequest Meta.WitAi.WitRequestFactory::CreateDictationRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * WitRequestFactory_CreateDictationRequest_m77B744C0228B933FCF3CC78F94D144B9F7CDD689 (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___config0, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions1, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents2, const RuntimeMethod* method);
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.WitService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * WitService_Activate_m1CE234B9B159BCB65375527FF642C3DEFE008422 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method);
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.WitService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * WitService_ActivateImmediately_mDDC747389103F9F9228A0E37A99F032551D3D634 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_Deactivate_mA6C8AD3ED0BFB9EE7771718A38B65147AF80D140 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateAndAbortRequest_m51EB98EC62192C86480D8BA1F4743E46C1FD40B4 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Awake_m8A0AE4C01A3750AE7035A30E43B58D12AAB2772F (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Meta.WitAi.WitService>()
inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * GameObject_AddComponent_TisWitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C_m56886FB758C69FCDFA57C0CD8CCBA2C5E55171EA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Meta.WitAi.WitService::set_VoiceEventProvider(Meta.WitAi.IVoiceEventProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_VoiceEventProvider_mCA357E836C695D6C86AFAE7C1A72605061D23D29_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::set_ConfigurationProvider(Meta.WitAi.IWitRuntimeConfigProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_ConfigurationProvider_m24B5EB3AF18805173C5859EF275C56A5BDFEBF45_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::set_WitRequestProvider(Meta.WitAi.Interfaces.IWitRequestProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_WitRequestProvider_m9916096C81C6A25FABCBC77ED82E0822B210D322_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::set_TelemetryEventsProvider(Meta.WitAi.ITelemetryEventsProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_TelemetryEventsProvider_m09BDB27534D91D3927E4B550B34570E70737B98A_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnEnable_m82D4D22C1A335882E75944EFFF8962F07E0CD703 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627 (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * __this, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78 (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9 (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * __this, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void Meta.WitAi.Dictation.DictationService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnDisable_mBD73CB4950AB0BF3994138B11CFFA3EBE2869514 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3 (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959 (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * __this, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164 (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * __this, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::Invoke(!0)
inline void UnityEvent_1_Invoke_m4947B0A1877C21D9031614439769A5A06BEC04E2 (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * __this, WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *, WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnFullTranscription_m7B606CFB5B59BFF8FA0C3C3DCACE8A9339DF75E7_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnPartialTranscription_m7486C1C7A0085484D320AA47DC96A23BFE7001FA_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, float, const RuntimeMethod*))UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, String_t* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, String_t*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::Invoke(!0)
inline void UnityEvent_1_Invoke_m9F46A9BF8C55F06FCFE03D142CBFE58F18FB3AF0 (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// Meta.WitAi.WitRequest Meta.WitAi.Dictation.WitDictation::CreateWitRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Interfaces.IDynamicEntitiesProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * WitDictation_CreateWitRequest_m91A7FE83B99E744CE3C9F1D8846B19CEBDFD3F9F (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___config0, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions1, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents2, IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* ___additionalEntityProviders3, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* File_ReadAllBytes_m065D4CF7082DFE91967B3B41D644D01501817148 (String_t* ___path0, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::ExecuteRequest(Meta.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_ExecuteRequest_m44FB873956965EE47AEFDD52FFB1CC39719B0C34 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___newRequest0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.VoiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvents__ctor_mFF0F17F51E9F2C4BA4FF120B06E138A9F164BB84 (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService__ctor_mABED0C167D00728B58F67E85B4C51C595DD4C43D (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5EFB90E53499A81EB9E576B24BA3311DACF0682E (U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
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
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnPartialTranscription_m7486C1C7A0085484D320AA47DC96A23BFE7001FA (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onPartialTranscription_6();
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnFullTranscription_m7B606CFB5B59BFF8FA0C3C3DCACE8A9339DF75E7 (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onFullTranscription_7();
		return L_0;
	}
}
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * DictationEvents_get_OnMicAudioLevelChanged_mA213B120CCB1D34097AB82C953F48DA05BF38DA8 (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public WitMicLevelChangedEvent OnMicAudioLevelChanged => onMicAudioLevel;
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_0 = __this->get_onMicAudioLevel_18();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnMicStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * DictationEvents_get_OnMicStartedListening_m4DD96B317A458BF9E2820465D061490E1C105A0E (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent OnMicStartedListening => onStart;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onStart_13();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnMicStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * DictationEvents_get_OnMicStoppedListening_mCE021DA353667B2410767E597E2EE81E26BE701A (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent OnMicStoppedListening => onStopped;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onStopped_14();
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.Events.DictationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationEvents__ctor_mD09503E208E3EE507AFF5B28DB5F02F4166F8A6C (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitTranscriptionEvent onPartialTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = (WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 *)il2cpp_codegen_object_new(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var);
		WitTranscriptionEvent__ctor_m745D154FDAA3D2BF8CD8EB78D82D322BBDF6D743(L_0, /*hidden argument*/NULL);
		__this->set_onPartialTranscription_6(L_0);
		// public WitTranscriptionEvent onFullTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1 = (WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 *)il2cpp_codegen_object_new(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var);
		WitTranscriptionEvent__ctor_m745D154FDAA3D2BF8CD8EB78D82D322BBDF6D743(L_1, /*hidden argument*/NULL);
		__this->set_onFullTranscription_7(L_1);
		// public WitResponseEvent onResponse = new WitResponseEvent();
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_2 = (WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 *)il2cpp_codegen_object_new(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705_il2cpp_TypeInfo_var);
		WitResponseEvent__ctor_m66735D24DD905FCBEF38E6BC9C6C3313ECA29B2C(L_2, /*hidden argument*/NULL);
		__this->set_onResponse_8(L_2);
		// public UnityEvent OnAborting = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set_OnAborting_9(L_3);
		// public UnityEvent OnAborted = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_4, /*hidden argument*/NULL);
		__this->set_OnAborted_10(L_4);
		// public UnityEvent OnRequestCompleted = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_5, /*hidden argument*/NULL);
		__this->set_OnRequestCompleted_11(L_5);
		// public WitRequestCreatedEvent OnRequestCreated = new WitRequestCreatedEvent();
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_6 = (WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 *)il2cpp_codegen_object_new(WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759_il2cpp_TypeInfo_var);
		WitRequestCreatedEvent__ctor_m480579CE5442BD1F1E60449622EB5909F42C5C02(L_6, /*hidden argument*/NULL);
		__this->set_OnRequestCreated_12(L_6);
		// public UnityEvent onStart = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_7, /*hidden argument*/NULL);
		__this->set_onStart_13(L_7);
		// public UnityEvent onStopped = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_8, /*hidden argument*/NULL);
		__this->set_onStopped_14(L_8);
		// public WitErrorEvent onError = new WitErrorEvent();
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_9 = (WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B *)il2cpp_codegen_object_new(WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B_il2cpp_TypeInfo_var);
		WitErrorEvent__ctor_m4C4C5F01ED1C0C702FE55AEA5EB761BBBA2974BA(L_9, /*hidden argument*/NULL);
		__this->set_onError_15(L_9);
		// public DictationSessionEvent onDictationSessionStarted = new DictationSessionEvent();
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_10 = (DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 *)il2cpp_codegen_object_new(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6_il2cpp_TypeInfo_var);
		DictationSessionEvent__ctor_m215D7432E80948BF0510DFDB35CCE3451514A8A6(L_10, /*hidden argument*/NULL);
		__this->set_onDictationSessionStarted_16(L_10);
		// public DictationSessionEvent onDictationSessionStopped = new DictationSessionEvent();
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_11 = (DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 *)il2cpp_codegen_object_new(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6_il2cpp_TypeInfo_var);
		DictationSessionEvent__ctor_m215D7432E80948BF0510DFDB35CCE3451514A8A6(L_11, /*hidden argument*/NULL);
		__this->set_onDictationSessionStopped_17(L_11);
		// public WitMicLevelChangedEvent onMicAudioLevel = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_12 = (WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B *)il2cpp_codegen_object_new(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B_il2cpp_TypeInfo_var);
		WitMicLevelChangedEvent__ctor_mE959EFF45693D6451832141F4AE7949B0B219F52(L_12, /*hidden argument*/NULL);
		__this->set_onMicAudioLevel_18(L_12);
		EventRegistry__ctor_m81A20F6449CB54DC144E31BA4EFD6D2A418F9872(__this, /*hidden argument*/NULL);
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
// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// get => dictationEvents;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0 = __this->get_dictationEvents_4();
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_set_DictationEvents_m3082BB0D179824970559A746D9351A9DE689A423 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * ___value0, const RuntimeMethod* method)
{
	{
		// set => dictationEvents = value;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0 = ___value0;
		__this->set_dictationEvents_4(L_0);
		return;
	}
}
// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_0 = __this->get_telemetryEvents_5();
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_set_TelemetryEvents_m789E53BB9079641B4C2D9687A069D3699272274F (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___value0, const RuntimeMethod* method)
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_0 = ___value0;
		__this->set_telemetryEvents_5(L_0);
		return;
	}
}
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Dictation.DictationService::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_AudioEvents_m51B50A7E2774C873D16002CC691F117A5C2D7188 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// public IAudioInputEvents AudioEvents => DictationEvents;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Dictation.DictationService::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_TranscriptionEvents_m0D45F607E468F2127989453278908877AF690B94 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// public ITranscriptionEvent TranscriptionEvents => DictationEvents;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_m076772499022A423D93D5E51CAE31AEFA58A3EED (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Activate() => Activate(new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)il2cpp_codegen_object_new(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B(L_0, /*hidden argument*/NULL);
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E *)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3(L_1, /*hidden argument*/NULL);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(26 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_m3E80868C8F2533FC509823968FFBBA74957BC853 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Activate(WitRequestOptions requestOptions) => Activate(requestOptions, new VoiceServiceRequestEvents());
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E *)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3(L_1, /*hidden argument*/NULL);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(26 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * DictationService_Activate_m242BE983981583FFFB22B941CDA840D526FFD9B2 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceServiceRequest Activate(VoiceServiceRequestEvents requestEvents) => Activate(new WitRequestOptions(), requestEvents);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)il2cpp_codegen_object_new(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B(L_0, /*hidden argument*/NULL);
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = ___requestEvents0;
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(26 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_ActivateImmediately_mE1BF11C68241A7E1244B02717DB411E910358D7F (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ActivateImmediately() => ActivateImmediately(new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)il2cpp_codegen_object_new(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B(L_0, /*hidden argument*/NULL);
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E *)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3(L_1, /*hidden argument*/NULL);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(27 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_ActivateImmediately_m00B76D453366EC0526D13D68C10902D36583CD01 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ActivateImmediately(WitRequestOptions requestOptions) => ActivateImmediately(requestOptions, new VoiceServiceRequestEvents());
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E *)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3(L_1, /*hidden argument*/NULL);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(27 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * DictationService_ActivateImmediately_mF3A9F8529818BAE61B9E0BA689ADB1CC3AACC2A7 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceServiceRequest ActivateImmediately(VoiceServiceRequestEvents requestEvents) => ActivateImmediately(new WitRequestOptions(), requestEvents);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)il2cpp_codegen_object_new(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B(L_0, /*hidden argument*/NULL);
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_1 = ___requestEvents0;
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2;
		L_2 = VirtFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(27 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Awake_m8A0AE4C01A3750AE7035A30E43B58D12AAB2772F (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m9DCDF8337BF59F6AF23CFBB1316E6D6920F7F6C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m79204FAECBFBF209A1F049837D69E007EC2877C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m26534CA22A167AAD3C43AB1BC9C96C4FB4633958_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m3A63CD6CF728D0F76F3276AF7EB30C1CAA644F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var audioEventListener = GetComponent<AudioEventListener>();
		AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * L_0;
		L_0 = Component_GetComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m9DCDF8337BF59F6AF23CFBB1316E6D6920F7F6C8(__this, /*hidden argument*/Component_GetComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m9DCDF8337BF59F6AF23CFBB1316E6D6920F7F6C8_RuntimeMethod_var);
		// if (!audioEventListener)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// gameObject.AddComponent<AudioEventListener>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759 * L_3;
		L_3 = GameObject_AddComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m26534CA22A167AAD3C43AB1BC9C96C4FB4633958(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioEventListener_t7898D9511E448E66BE8B7961DFC3BD9F2C05F759_m26534CA22A167AAD3C43AB1BC9C96C4FB4633958_RuntimeMethod_var);
	}

IL_0019:
	{
		// var transcriptionEventListener = GetComponent<TranscriptionEventListener>();
		TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * L_4;
		L_4 = Component_GetComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m79204FAECBFBF209A1F049837D69E007EC2877C6(__this, /*hidden argument*/Component_GetComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m79204FAECBFBF209A1F049837D69E007EC2877C6_RuntimeMethod_var);
		// if (!transcriptionEventListener)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		// gameObject.AddComponent<TranscriptionEventListener>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F * L_7;
		L_7 = GameObject_AddComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m3A63CD6CF728D0F76F3276AF7EB30C1CAA644F0B(L_6, /*hidden argument*/GameObject_AddComponent_TisTranscriptionEventListener_t812DE175E2886DE9A04A1C3828E9A16ADCA1BC6F_m3A63CD6CF728D0F76F3276AF7EB30C1CAA644F0B_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnEnable_m82D4D22C1A335882E75944EFFF8962F07E0CD703 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnDisable_mBD73CB4950AB0BF3994138B11CFFA3EBE2869514 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService__ctor_mABED0C167D00728B58F67E85B4C51C595DD4C43D (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] protected DictationEvents dictationEvents = new DictationEvents();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0 = (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC *)il2cpp_codegen_object_new(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_il2cpp_TypeInfo_var);
		DictationEvents__ctor_mD09503E208E3EE507AFF5B28DB5F02F4166F8A6C(L_0, /*hidden argument*/NULL);
		__this->set_dictationEvents_4(L_0);
		// protected TelemetryEvents telemetryEvents = new TelemetryEvents();
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_1 = (TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 *)il2cpp_codegen_object_new(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56_il2cpp_TypeInfo_var);
		TelemetryEvents__ctor_m6F75A0D2A8D9CB5B34113C767D5C6EB92E5320A3(L_1, /*hidden argument*/NULL);
		__this->set_telemetryEvents_5(L_1);
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
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationServiceAudioEventReference_get_AudioEvents_m5690CBA4F2856648994D6E4C7B851F279682B4D8 (DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425 * __this, const RuntimeMethod* method)
{
	{
		// _dictationServiceReference.DictationService.AudioEvents;
		DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * L_0 = __this->get_address_of__dictationServiceReference_4();
		DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * L_1;
		L_1 = DictationServiceReference_get_DictationService_m9AF6D5B8CD021CA5423156CBD665A9F0724300D9((DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 *)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DictationService_get_AudioEvents_m51B50A7E2774C873D16002CC691F117A5C2D7188(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationServiceAudioEventReference__ctor_m61CAFBE5872E334789146A5608F8FFAEA46E19AF (DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425 * __this, const RuntimeMethod* method)
{
	{
		AudioInputServiceReference__ctor_mDD16C592DEA963FC801F33EAEBFC5AEAB1B619BF(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_pinvoke(const DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836& unmarshaled, DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_pinvoke& marshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_pinvoke_back(const DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_pinvoke& marshaled, DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836& unmarshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_pinvoke_cleanup(DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_com(const DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836& unmarshaled, DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_com& marshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_com_back(const DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_com& marshaled, DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836& unmarshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshal_com_cleanup(DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_marshaled_com& marshaled)
{
}
// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::get_DictationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * DictationServiceReference_get_DictationService_m9AF6D5B8CD021CA5423156CBD665A9F0724300D9 (DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_mA5CACC242EBB4B2623D6497283197575BD0B346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mFAE040D83D23C778AA054956567613435FA0E48D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_m6D8BCC7E2F9757148B5FE70B36421A0CB976F77A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_mAAF2A275E43F07B16E070B87C4EBA2BD6BF0C12C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* V_0 = NULL;
	Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * G_B4_0 = NULL;
	DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* G_B4_1 = NULL;
	DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * G_B4_2 = NULL;
	Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * G_B3_0 = NULL;
	DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* G_B3_1 = NULL;
	DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * G_B3_2 = NULL;
	{
		// if (!dictationService)
		DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * L_0 = __this->get_dictationService_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// DictationService[] services = Resources.FindObjectsOfTypeAll<DictationService>();
		DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_m6D8BCC7E2F9757148B5FE70B36421A0CB976F77A(/*hidden argument*/Resources_FindObjectsOfTypeAll_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_m6D8BCC7E2F9757148B5FE70B36421A0CB976F77A_RuntimeMethod_var);
		V_0 = L_2;
		// if (services != null)
		DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// dictationService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		DictationServiceU5BU5D_t36866934B033C9C38A2CDAFCC87FC5F50F9E2229* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var);
		Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * L_5 = ((U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = __this;
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var);
		U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * L_7 = ((U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * L_8 = (Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 *)il2cpp_codegen_object_new(Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mFAE040D83D23C778AA054956567613435FA0E48D(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_mAAF2A275E43F07B16E070B87C4EBA2BD6BF0C12C_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mFAE040D83D23C778AA054956567613435FA0E48D_RuntimeMethod_var);
		Predicate_1_t34400554E74DB424B6E26C52FEBA1D341ADCC7B5 * L_9 = L_8;
		((U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0037:
	{
		DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * L_10;
		L_10 = Array_Find_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_mA5CACC242EBB4B2623D6497283197575BD0B346C(G_B4_1, G_B4_0, /*hidden argument*/Array_Find_TisDictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_mA5CACC242EBB4B2623D6497283197575BD0B346C_RuntimeMethod_var);
		G_B4_2->set_dictationService_0(L_10);
	}

IL_0041:
	{
		// return dictationService;
		DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * L_11 = __this->get_dictationService_0();
		return L_11;
	}
}
IL2CPP_EXTERN_C  DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * DictationServiceReference_get_DictationService_m9AF6D5B8CD021CA5423156CBD665A9F0724300D9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 * _thisAdjusted = reinterpret_cast<DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836 *>(__this + _offset);
	DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * _returnValue;
	_returnValue = DictationServiceReference_get_DictationService_m9AF6D5B8CD021CA5423156CBD665A9F0724300D9(_thisAdjusted, method);
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
// System.Void Meta.WitAi.Dictation.Data.DictationSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSession__ctor_m432FF4594E38E9969D4E45436407A53D5DC90F37 (DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string sessionId = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_mA7DA3F652640919C3C83918D48310941AF3FCED4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		__this->set_sessionId_5(L_1);
		VoiceSession__ctor_m532BA4D1C114BA389D8F81458A05BA9A3C91FD25(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Dictation.Events.DictationSessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSessionEvent__ctor_m215D7432E80948BF0510DFDB35CCE3451514A8A6 (DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC1A8D6A5F50B081F1A6D7AF0E61F8DCA29C13A16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC1A8D6A5F50B081F1A6D7AF0E61F8DCA29C13A16(__this, /*hidden argument*/UnityEvent_1__ctor_mC1A8D6A5F50B081F1A6D7AF0E61F8DCA29C13A16_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_Awake_m205C183426AF7EF2DB051D2AF0E40433A8B57A5D (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mB2EFEFDD4A389861A5F2A2D4BEA7C7CE81DC05A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!witDictation) witDictation = FindObjectOfType<WitDictation>();
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_0 = __this->get_witDictation_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!witDictation) witDictation = FindObjectOfType<WitDictation>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_2;
		L_2 = Object_FindObjectOfType_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mB2EFEFDD4A389861A5F2A2D4BEA7C7CE81DC05A5(/*hidden argument*/Object_FindObjectOfType_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mB2EFEFDD4A389861A5F2A2D4BEA7C7CE81DC05A5_RuntimeMethod_var);
		__this->set_witDictation_4(L_2);
	}

IL_0018:
	{
		// _text = new StringBuilder();
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_3, /*hidden argument*/NULL);
		__this->set__text_8(L_3);
		// _separator = new StringBuilder();
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_4, /*hidden argument*/NULL);
		__this->set__separator_11(L_4);
		// for (int i = 0; i < linesBetweenActivations; i++)
		V_0 = 0;
		goto IL_0042;
	}

IL_0032:
	{
		// _separator.AppendLine();
		StringBuilder_t * L_5 = __this->get__separator_11();
		NullCheck(L_5);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < linesBetweenActivations; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < linesBetweenActivations; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_linesBetweenActivations_5();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0032;
		}
	}
	{
		// if (!string.IsNullOrEmpty(activationSeparator))
		String_t* L_10 = __this->get_activationSeparator_6();
		bool L_11;
		L_11 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		// _separator.Append(activationSeparator);
		StringBuilder_t * L_12 = __this->get__separator_11();
		String_t* L_13 = __this->get_activationSeparator_6();
		NullCheck(L_12);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, L_13, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnEnable_mC911BD6427744D9CE011520BC3F9ABD8ADAEFBCD (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnCancelled_mF8C53D066DB792FDA6A72A5816668C326E7AF06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// witDictation.VoiceEvents.OnFullTranscription.AddListener(OnFullTranscription);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_0 = __this->get_witDictation_4();
		NullCheck(L_0);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_1;
		L_1 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2;
		L_2 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_1, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_3 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_3, __this, (intptr_t)((intptr_t)MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_2, L_3, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// witDictation.VoiceEvents.OnPartialTranscription.AddListener(OnPartialTranscription);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_4 = __this->get_witDictation_4();
		NullCheck(L_4);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_5;
		L_5 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_6;
		L_6 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_5, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_7 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_7, __this, (intptr_t)((intptr_t)MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_6, L_7, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// witDictation.VoiceEvents.OnAborting.AddListener(OnCancelled);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_8 = __this->get_witDictation_4();
		NullCheck(L_8);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_9;
		L_9 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = L_9->get_OnAborting_11();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)MultiRequestTranscription_OnCancelled_mF8C53D066DB792FDA6A72A5816668C326E7AF06E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnDisable_m902F40230D23D11C3A1CB3CFDB8E71DC38E65F26 (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__activeText_9(L_0);
		// witDictation.VoiceEvents.OnFullTranscription.RemoveListener(OnFullTranscription);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_1 = __this->get_witDictation_4();
		NullCheck(L_1);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_2;
		L_2 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_3;
		L_3 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_4 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_4, __this, (intptr_t)((intptr_t)MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_3, L_4, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// witDictation.VoiceEvents.OnPartialTranscription.RemoveListener(OnPartialTranscription);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_5 = __this->get_witDictation_4();
		NullCheck(L_5);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_6;
		L_6 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_7;
		L_7 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_8 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_8, __this, (intptr_t)((intptr_t)MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_7, L_8, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnCancelled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnCancelled_mF8C53D066DB792FDA6A72A5816668C326E7AF06E (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__activeText_9(L_0);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mE4A06EA170E705AB0F943A34B7EB1E2A49F92E9B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnFullTranscription_m9134B8C591334E7732D4C4F23568748A91A26788 (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__activeText_9(L_0);
		// if (_text.Length > 0)
		StringBuilder_t * L_1 = __this->get__text_8();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// _text.Append(_separator);
		StringBuilder_t * L_3 = __this->get__text_8();
		StringBuilder_t * L_4 = __this->get__separator_11();
		NullCheck(L_3);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// _text.Append(text);
		StringBuilder_t * L_6 = __this->get__text_8();
		String_t* L_7 = ___text0;
		NullCheck(L_6);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, L_7, /*hidden argument*/NULL);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mE4A06EA170E705AB0F943A34B7EB1E2A49F92E9B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnPartialTranscription_mCAF999C327D20A6BD893CB8DC12FEE5196091910 (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// _activeText = text;
		String_t* L_0 = ___text0;
		__this->set__activeText_9(L_0);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mE4A06EA170E705AB0F943A34B7EB1E2A49F92E9B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_Clear_mF3A0AD2B8CB97C9E4825E8ACEE48B70BECDBF30D (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text.Clear();
		StringBuilder_t * L_0 = __this->get__text_8();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// onTranscriptionUpdated.Invoke(string.Empty);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = __this->get_onTranscriptionUpdated_7();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_2, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnTranscriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnTranscriptionUpdated_mE4A06EA170E705AB0F943A34B7EB1E2A49F92E9B (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// var transcription = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// transcription.Append(_text);
		StringBuilder_t * L_1 = V_0;
		StringBuilder_t * L_2 = __this->get__text_8();
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_1, L_2, /*hidden argument*/NULL);
		// if (!string.IsNullOrEmpty(_activeText))
		String_t* L_4 = __this->get__activeText_9();
		bool L_5;
		L_5 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		// if (transcription.Length > 0)
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// transcription.Append(_separator);
		StringBuilder_t * L_8 = V_0;
		StringBuilder_t * L_9 = __this->get__separator_11();
		NullCheck(L_8);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (!string.IsNullOrEmpty(_activeText))
		String_t* L_11 = __this->get__activeText_9();
		bool L_12;
		L_12 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		// transcription.Append(_activeText);
		StringBuilder_t * L_13 = V_0;
		String_t* L_14 = __this->get__activeText_9();
		NullCheck(L_13);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// onTranscriptionUpdated.Invoke(transcription.ToString());
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_16 = __this->get_onTranscriptionUpdated_7();
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		NullCheck(L_16);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_16, L_18, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription__ctor_m043C88C1E4E3119204D3BC7C0EFAEA32B926663E (MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int linesBetweenActivations = 2;
		__this->set_linesBetweenActivations_5(2);
		// [SerializeField] private string activationSeparator = String.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_activationSeparator_6(L_0);
		// [SerializeField] private WitTranscriptionEvent onTranscriptionUpdated = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1 = (WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 *)il2cpp_codegen_object_new(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8_il2cpp_TypeInfo_var);
		WitTranscriptionEvent__ctor_m745D154FDAA3D2BF8CD8EB78D82D322BBDF6D743(L_1, /*hidden argument*/NULL);
		__this->set_onTranscriptionUpdated_7(L_1);
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
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * WitDictation_get_RuntimeConfiguration_m058587969B490A5B70450EBEA4EFF6B9040F7F20 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = __this->get_witRuntimeConfiguration_6();
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_set_RuntimeConfiguration_mC8A920F2CDEDCAF2E51D8FA9634F3DFD070D897E (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___value0, const RuntimeMethod* method)
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = ___value0;
		__this->set_witRuntimeConfiguration_6(L_0);
		return;
	}
}
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Dictation.WitDictation::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * WitDictation_get_Configuration_mD642C5736FD6BE3CE465D3384B57C9593CF7238D (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B2_0 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B1_0 = NULL;
	{
		// public WitConfiguration Configuration => RuntimeConfiguration?.witConfiguration;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0;
		L_0 = WitDictation_get_RuntimeConfiguration_m058587969B490A5B70450EBEA4EFF6B9040F7F20_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 *)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_2 = G_B2_0->get_witConfiguration_0();
		return L_2;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_Active_mECFCFEE977D180879518A8FB198DEC214AAA156B (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => null != witService && witService.Active;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_2 = __this->get_witService_7();
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_Active_mD6CE27612358C32973CEACCB8168D7CDED327757(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_IsRequestActive_mC06521144D0402F66924F6C998D8BC0CB8B760E3 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => null != witService && witService.IsRequestActive;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_2 = __this->get_witService_7();
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.WitDictation::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDictation_get_TranscriptionProvider_mABABB2D2A3EABB529382221F00C0FFC96F95E538 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// get => witService.TranscriptionProvider;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = WitService_get_TranscriptionProvider_m5BE5B6567B11DC21100D9AC0F454C813FCE0F931_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_set_TranscriptionProvider_m79F2E1DC3FD48831FCA1ADD33D007A6B6295B49C (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => witService.TranscriptionProvider = value;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		WitService_set_TranscriptionProvider_mEBC16C60777F224A975E08FC839A66AE56945119(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_MicActive_m30128BE040E8A28EECD9407ED7E4EC51C4D1B117 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != witService && witService.MicActive;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_2 = __this->get_witService_7();
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_MicActive_mD5BE1EDC582683193E6A3BCA4A125B1A015B8FA6(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_ShouldSendMicData_m7F4DE9B87328631D6AD11293483605A2F62C8924 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// protected override bool ShouldSendMicData => witRuntimeConfiguration.sendAudioToWit ||
		//                                              null == TranscriptionProvider;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = __this->get_witRuntimeConfiguration_6();
		NullCheck(L_0);
		bool L_1 = L_0->get_sendAudioToWit_9();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.DictationService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// public VoiceEvents VoiceEvents => voiceEvents;
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_0 = __this->get_voiceEvents_8();
		return L_0;
	}
}
// Meta.WitAi.WitRequest Meta.WitAi.Dictation.WitDictation::CreateWitRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Interfaces.IDynamicEntitiesProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * WitDictation_CreateWitRequest_m91A7FE83B99E744CE3C9F1D8846B19CEBDFD3F9F (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___config0, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions1, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents2, IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* ___additionalEntityProviders3, const RuntimeMethod* method)
{
	{
		// return config.CreateDictationRequest(requestOptions, requestEvents);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0 = ___config0;
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_1 = ___requestOptions1;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_2 = ___requestEvents2;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_3;
		L_3 = WitRequestFactory_CreateDictationRequest_m77B744C0228B933FCF3CC78F94D144B9F7CDD689(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.WitDictation::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * WitDictation_Activate_mE5B1902E51358EBA4120895162A5DE51FAC4DC25 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	{
		// return witService.Activate(requestOptions, requestEvents);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_1 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_2 = ___requestEvents1;
		NullCheck(L_0);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_3;
		L_3 = WitService_Activate_m1CE234B9B159BCB65375527FF642C3DEFE008422(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.WitDictation::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * WitDictation_ActivateImmediately_mEB10E26274AE027E597DF4BE1D9FF55CD78266C8 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	{
		// return witService.ActivateImmediately(requestOptions, requestEvents);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_1 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_2 = ___requestEvents1;
		NullCheck(L_0);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_3;
		L_3 = WitService_ActivateImmediately_mDDC747389103F9F9228A0E37A99F032551D3D634(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Deactivate_m83653C3A61695D25C51FD8E567E2DECCE67201AC (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// witService.Deactivate();
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		NullCheck(L_0);
		WitService_Deactivate_mA6C8AD3ED0BFB9EE7771718A38B65147AF80D140(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Cancel_m2A5852D1155F0F64BD6E29FEEA1FE1E34AF9B47D (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// witService.DeactivateAndAbortRequest();
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_0 = __this->get_witService_7();
		NullCheck(L_0);
		WitService_DeactivateAndAbortRequest_m51EB98EC62192C86480D8BA1F4743E46C1FD40B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Awake_m6C7FC04FB22BC834FEB006528D64EAEC7A74B2B1 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C_m56886FB758C69FCDFA57C0CD8CCBA2C5E55171EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		DictationService_Awake_m8A0AE4C01A3750AE7035A30E43B58D12AAB2772F(__this, /*hidden argument*/NULL);
		// witService = gameObject.AddComponent<WitService>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_1;
		L_1 = GameObject_AddComponent_TisWitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C_m56886FB758C69FCDFA57C0CD8CCBA2C5E55171EA(L_0, /*hidden argument*/GameObject_AddComponent_TisWitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C_m56886FB758C69FCDFA57C0CD8CCBA2C5E55171EA_RuntimeMethod_var);
		__this->set_witService_7(L_1);
		// witService.VoiceEventProvider = this;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_2 = __this->get_witService_7();
		NullCheck(L_2);
		WitService_set_VoiceEventProvider_mCA357E836C695D6C86AFAE7C1A72605061D23D29_inline(L_2, __this, /*hidden argument*/NULL);
		// witService.ConfigurationProvider = this;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_3 = __this->get_witService_7();
		NullCheck(L_3);
		WitService_set_ConfigurationProvider_m24B5EB3AF18805173C5859EF275C56A5BDFEBF45_inline(L_3, __this, /*hidden argument*/NULL);
		// witService.WitRequestProvider = this;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_4 = __this->get_witService_7();
		NullCheck(L_4);
		WitService_set_WitRequestProvider_m9916096C81C6A25FABCBC77ED82E0822B210D322_inline(L_4, __this, /*hidden argument*/NULL);
		// witService.TelemetryEventsProvider = this;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_5 = __this->get_witService_7();
		NullCheck(L_5);
		WitService_set_TelemetryEventsProvider_m09BDB27534D91D3927E4B550B34570E70737B98A_inline(L_5, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnEnable_m579208720C5CCA8BC13A371620F7D16B7DAA3480 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DictationService_OnEnable_m82D4D22C1A335882E75944EFFF8962F07E0CD703(__this, /*hidden argument*/NULL);
		// VoiceEvents.OnFullTranscription.AddListener(OnFullTranscription);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_0;
		L_0 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_0, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_2 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_2, __this, (intptr_t)((intptr_t)WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// VoiceEvents.OnPartialTranscription.AddListener(OnPartialTranscription);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_3;
		L_3 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_4;
		L_4 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_3, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_5 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_5, __this, (intptr_t)((intptr_t)WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// VoiceEvents.OnStartListening.AddListener(OnStartedListening);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_6;
		L_6 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = L_6->get_OnStartListening_20();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// VoiceEvents.OnStoppedListening.AddListener(OnStoppedListening);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_9;
		L_9 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = L_9->get_OnStoppedListening_21();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// VoiceEvents.OnMicLevelChanged.AddListener(OnMicLevelChanged);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_12;
		L_12 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_13 = L_12->get_OnMicLevelChanged_16();
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_14 = (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)il2cpp_codegen_object_new(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B(L_14, __this, (intptr_t)((intptr_t)WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C(L_13, L_14, /*hidden argument*/UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		// VoiceEvents.OnError.AddListener(OnError);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_15;
		L_15 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_16 = L_15->get_OnError_10();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_17 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_17, __this, (intptr_t)((intptr_t)WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_16);
		UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06(L_16, L_17, /*hidden argument*/UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		// VoiceEvents.OnResponse.AddListener(OnResponse);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_18;
		L_18 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_19 = L_18->get_OnResponse_7();
		UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * L_20 = (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *)il2cpp_codegen_object_new(UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E(L_20, __this, (intptr_t)((intptr_t)WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		NullCheck(L_19);
		UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB(L_19, L_20, /*hidden argument*/UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var);
		// VoiceEvents.OnRequestCompleted.AddListener(OnCompleted);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_21;
		L_21 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_22 = L_21->get_OnRequestCompleted_13();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_22, L_23, /*hidden argument*/NULL);
		// VoiceEvents.OnAborting.AddListener(OnAborting);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_24;
		L_24 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_25 = L_24->get_OnAborting_11();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_26 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_26, __this, (intptr_t)((intptr_t)WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_25, L_26, /*hidden argument*/NULL);
		// VoiceEvents.OnAborted.AddListener(OnAborted);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_27;
		L_27 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_28 = L_27->get_OnAborted_12();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_29 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_29, __this, (intptr_t)((intptr_t)WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_28, L_29, /*hidden argument*/NULL);
		// VoiceEvents.OnRequestCreated.AddListener(OnRequestCreated);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_30;
		L_30 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_31 = L_30->get_OnRequestCreated_19();
		UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * L_32 = (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *)il2cpp_codegen_object_new(UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78(L_32, __this, (intptr_t)((intptr_t)WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		NullCheck(L_31);
		UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9(L_31, L_32, /*hidden argument*/UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnDisable_m89EB479BE5B4801C635E9C179AEB5B81CBBE4CA7 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		DictationService_OnDisable_mBD73CB4950AB0BF3994138B11CFFA3EBE2869514(__this, /*hidden argument*/NULL);
		// VoiceEvents.OnFullTranscription.RemoveListener(OnFullTranscription);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_0;
		L_0 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_0, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_2 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_2, __this, (intptr_t)((intptr_t)WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_1, L_2, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// VoiceEvents.OnPartialTranscription.RemoveListener(OnPartialTranscription);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_3;
		L_3 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_4;
		L_4 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_3, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_5 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_5, __this, (intptr_t)((intptr_t)WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_4, L_5, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// VoiceEvents.OnStartListening.RemoveListener(OnStartedListening);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_6;
		L_6 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = L_6->get_OnStartListening_20();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_7, L_8, /*hidden argument*/NULL);
		// VoiceEvents.OnStoppedListening.RemoveListener(OnStoppedListening);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_9;
		L_9 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = L_9->get_OnStoppedListening_21();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_10, L_11, /*hidden argument*/NULL);
		// VoiceEvents.OnMicLevelChanged.RemoveListener(OnMicLevelChanged);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_12;
		L_12 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_13 = L_12->get_OnMicLevelChanged_16();
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_14 = (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)il2cpp_codegen_object_new(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B(L_14, __this, (intptr_t)((intptr_t)WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3(L_13, L_14, /*hidden argument*/UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_RuntimeMethod_var);
		// VoiceEvents.OnError.RemoveListener(OnError);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_15;
		L_15 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_16 = L_15->get_OnError_10();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_17 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_17, __this, (intptr_t)((intptr_t)WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_16);
		UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73(L_16, L_17, /*hidden argument*/UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		// VoiceEvents.OnResponse.RemoveListener(OnResponse);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_18;
		L_18 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_19 = L_18->get_OnResponse_7();
		UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * L_20 = (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *)il2cpp_codegen_object_new(UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E(L_20, __this, (intptr_t)((intptr_t)WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959(L_19, L_20, /*hidden argument*/UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var);
		// VoiceEvents.OnRequestCompleted.RemoveListener(OnCompleted);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_21;
		L_21 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_22 = L_21->get_OnRequestCompleted_13();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_22, L_23, /*hidden argument*/NULL);
		// VoiceEvents.OnAborting.RemoveListener(OnAborting);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_24;
		L_24 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_25 = L_24->get_OnAborting_11();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_26 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_26, __this, (intptr_t)((intptr_t)WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_25, L_26, /*hidden argument*/NULL);
		// VoiceEvents.OnAborted.RemoveListener(OnAborted);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_27;
		L_27 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_28 = L_27->get_OnAborted_12();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_29 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_29, __this, (intptr_t)((intptr_t)WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_28, L_29, /*hidden argument*/NULL);
		// VoiceEvents.OnRequestCreated.RemoveListener(OnRequestCreated);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_30;
		L_30 = WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_31 = L_30->get_OnRequestCreated_19();
		UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * L_32 = (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *)il2cpp_codegen_object_new(UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78(L_32, __this, (intptr_t)((intptr_t)WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		NullCheck(L_31);
		UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164(L_31, L_32, /*hidden argument*/UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnRequestCreated(Meta.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnRequestCreated_m98A1835F6E08633D2B194A7624881B2D4CE9A066 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___requestCreated0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4947B0A1877C21D9031614439769A5A06BEC04E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * G_B2_0 = NULL;
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * G_B1_0 = NULL;
	{
		// DictationEvents.OnRequestCreated?.Invoke(requestCreated);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_1 = L_0->get_OnRequestCreated_12();
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_2 = L_1;
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
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_3 = ___requestCreated0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m4947B0A1877C21D9031614439769A5A06BEC04E2(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m4947B0A1877C21D9031614439769A5A06BEC04E2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnCompleted_m33AD08CA31E583733B5296CF7F878E3E3C017602 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.OnRequestCompleted?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnRequestCompleted_11();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
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
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnAborted_m045490C7FC4FB4EAE0A70EC5F6F2E851F763257B (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.OnAborted?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnAborted_10();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
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
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnAborting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnAborting_m281BBA8BAA6C2A0D26FECF622C6B240EAE57A8A5 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.OnAborting?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnAborting_9();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
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
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnFullTranscription_m50BB19743F979F006ABB86E59202AE22FFEB704C (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, String_t* ___transcription0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B2_0 = NULL;
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B1_0 = NULL;
	{
		// DictationEvents.OnFullTranscription?.Invoke(transcription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = DictationEvents_get_OnFullTranscription_m7B606CFB5B59BFF8FA0C3C3DCACE8A9339DF75E7_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1;
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
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnPartialTranscription_m25F44DCD988973EB9E2A7779C097F71CBBF55A54 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, String_t* ___transcription0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B2_0 = NULL;
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B1_0 = NULL;
	{
		// DictationEvents.OnPartialTranscription?.Invoke(transcription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = DictationEvents_get_OnPartialTranscription_m7486C1C7A0085484D320AA47DC96A23BFE7001FA_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1;
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
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnStartedListening_mBE78044F027C0B26A9261F481DA3E59E00BF2137 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.onStart?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_onStart_13();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
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
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnStoppedListening_m3458F30A4C5EA37D21B5AC52F637A4E251B17549 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.onStopped?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_onStopped_14();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
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
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnMicLevelChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnMicLevelChanged_m517AE7FD0CA1EF1D2FB699CF4B19EA1387B2B3AF (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, float ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * G_B2_0 = NULL;
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * G_B1_0 = NULL;
	{
		// DictationEvents.onMicAudioLevel?.Invoke(level);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_1 = L_0->get_onMicAudioLevel_18();
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_2 = L_1;
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
		float L_3 = ___level0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnError(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnError_m81E112CC1411D18F8F08254DF1A88B1C9438301D (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B2_0 = NULL;
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B1_0 = NULL;
	{
		// DictationEvents.onError?.Invoke(error, message);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_1 = L_0->get_onError_15();
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_2 = L_1;
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
		String_t* L_3 = ___error0;
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1(G_B2_0, L_3, L_4, /*hidden argument*/UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnResponse_mDD6E304CE50D2F6561FA5EE510E70410E263C8DB (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9F46A9BF8C55F06FCFE03D142CBFE58F18FB3AF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * G_B2_0 = NULL;
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * G_B1_0 = NULL;
	{
		// DictationEvents.onResponse?.Invoke(response);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_1 = L_0->get_onResponse_8();
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_2 = L_1;
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
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_3 = ___response0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m9F46A9BF8C55F06FCFE03D142CBFE58F18FB3AF0(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m9F46A9BF8C55F06FCFE03D142CBFE58F18FB3AF0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::TranscribeFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_TranscribeFile_m5FE7BB97BA7D3811961D60ECDADD059954B8CD5A (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// var request = CreateWitRequest(witRuntimeConfiguration.witConfiguration, new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = __this->get_witRuntimeConfiguration_6();
		NullCheck(L_0);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_1 = L_0->get_witConfiguration_0();
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_2 = (WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)il2cpp_codegen_object_new(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F_il2cpp_TypeInfo_var);
		WitRequestOptions__ctor_m654EB8BEBF4083728C864B02D5043DAB5444D00B(L_2, /*hidden argument*/NULL);
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_3 = (VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E *)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E_il2cpp_TypeInfo_var);
		VoiceServiceRequestEvents__ctor_mD7E53BFE9736678126947F61EF35298BF39032F3(L_3, /*hidden argument*/NULL);
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_4;
		L_4 = WitDictation_CreateWitRequest_m91A7FE83B99E744CE3C9F1D8846B19CEBDFD3F9F(__this, L_1, L_2, L_3, (IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859*)(IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859*)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		// var data = File.ReadAllBytes(fileName);
		String_t* L_5 = ___fileName0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = File_ReadAllBytes_m065D4CF7082DFE91967B3B41D644D01501817148(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// request.postData = data;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		NullCheck(L_7);
		L_7->set_postData_15(L_8);
		// witService.ExecuteRequest(request);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_9 = __this->get_witService_7();
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_10 = V_0;
		NullCheck(L_9);
		WitService_ExecuteRequest_m44FB873956965EE47AEFDD52FFB1CC39719B0C34(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation__ctor_mCEF4143B50D59E96B3874C046A607C3E0AEF36B0 (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly VoiceEvents voiceEvents = new VoiceEvents();
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_0 = (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D *)il2cpp_codegen_object_new(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D_il2cpp_TypeInfo_var);
		VoiceEvents__ctor_mFF0F17F51E9F2C4BA4FF120B06E138A9F164BB84(L_0, /*hidden argument*/NULL);
		__this->set_voiceEvents_8(L_0);
		DictationService__ctor_mABED0C167D00728B58F67E85B4C51C595DD4C43D(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4A101405E4DFBFD90C50DF4D84312C6971F24E35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * L_0 = (U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC *)il2cpp_codegen_object_new(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5EFB90E53499A81EB9E576B24BA3311DACF0682E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5EFB90E53499A81EB9E576B24BA3311DACF0682E (U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Utilities.DictationServiceReference/<>c::<get_DictationService>b__2_0(Meta.WitAi.Dictation.DictationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_mAAF2A275E43F07B16E070B87C4EBA2BD6BF0C12C (U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC * __this, DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * ___o0, const RuntimeMethod* method)
{
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// dictationService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * L_0 = ___o0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * DictationService_get_DictationEvents_m236734CB7BE23F1F3B2FB957D9BAB994544394A0_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// get => dictationEvents;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0 = __this->get_dictationEvents_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * WitDictation_get_VoiceEvents_m448EC3C6BDF4A2C6CE738D93673F931EF5D51BA7_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// public VoiceEvents VoiceEvents => voiceEvents;
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_0 = __this->get_voiceEvents_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onFullTranscription_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onPartialTranscription_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * WitDictation_get_RuntimeConfiguration_m058587969B490A5B70450EBEA4EFF6B9040F7F20_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, const RuntimeMethod* method)
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = __this->get_witRuntimeConfiguration_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitService_get_TranscriptionProvider_m5BE5B6567B11DC21100D9AC0F454C813FCE0F931_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method)
{
	{
		// get => _activeTranscriptionProvider;
		RuntimeObject* L_0 = __this->get__activeTranscriptionProvider_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_VoiceEventProvider_mCA357E836C695D6C86AFAE7C1A72605061D23D29_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => _voiceEventProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__voiceEventProvider_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_ConfigurationProvider_m24B5EB3AF18805173C5859EF275C56A5BDFEBF45_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => _runtimeConfigProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__runtimeConfigProvider_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_WitRequestProvider_m9916096C81C6A25FABCBC77ED82E0822B210D322_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => _witRequestProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__witRequestProvider_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_TelemetryEventsProvider_m09BDB27534D91D3927E4B550B34570E70737B98A_inline (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => _telemetryEventsProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__telemetryEventsProvider_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnFullTranscription_m7B606CFB5B59BFF8FA0C3C3DCACE8A9339DF75E7_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onFullTranscription_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * DictationEvents_get_OnPartialTranscription_m7486C1C7A0085484D320AA47DC96A23BFE7001FA_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onPartialTranscription_6();
		return L_0;
	}
}
