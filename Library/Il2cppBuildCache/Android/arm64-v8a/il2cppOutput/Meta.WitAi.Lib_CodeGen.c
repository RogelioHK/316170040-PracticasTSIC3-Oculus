#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Meta.Voice.VoiceRequestState Meta.Voice.IVoiceRequest`4::get_State()
// 0x00000002 System.Single Meta.Voice.IVoiceRequest`4::get_DownloadProgress()
// 0x00000003 System.Single Meta.Voice.IVoiceRequest`4::get_UploadProgress()
// 0x00000004 TOptions Meta.Voice.IVoiceRequest`4::get_Options()
// 0x00000005 TEvents Meta.Voice.IVoiceRequest`4::get_Events()
// 0x00000006 TResults Meta.Voice.IVoiceRequest`4::get_Results()
// 0x00000007 System.Boolean Meta.Voice.IVoiceRequest`4::get_CanSend()
// 0x00000008 System.Void Meta.Voice.IVoiceRequest`4::Send()
// 0x00000009 System.Void Meta.Voice.IVoiceRequest`4::Cancel(System.String)
// 0x0000000A TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnStateChange()
// 0x0000000B TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x0000000C TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x0000000D TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnInit()
// 0x0000000E TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSend()
// 0x0000000F TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnCancel()
// 0x00000010 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnFailed()
// 0x00000011 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSuccess()
// 0x00000012 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnComplete()
// 0x00000013 System.String Meta.Voice.IVoiceRequestOptions::get_RequestId()
// 0x00000014 System.String Meta.Voice.IVoiceRequestResults::get_Message()
// 0x00000015 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000016 System.Void Meta.Voice.NLPRequestResponseEvent::.ctor()
extern void NLPRequestResponseEvent__ctor_mA6F0E55E6BFF432E1B231A85C53D2D94473106BD (void);
// 0x00000017 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPRequestEvents`1::get_OnFullResponse()
// 0x00000018 Meta.WitAi.Json.WitResponseNode Meta.Voice.INLPRequestResults::get_ResponseData()
// 0x00000019 System.Void Meta.Voice.INLPTextRequest`4::Send(System.String)
// 0x0000001A System.String Meta.Voice.INLPTextRequestOptions::get_Text()
// 0x0000001B System.Void Meta.Voice.INLPTextRequestOptions::set_Text(System.String)
// 0x0000001C System.Void Meta.Voice.NLPAudioRequest`4::.ctor(TOptions,TEvents)
// 0x0000001D Meta.WitAi.Json.WitResponseNode Meta.Voice.NLPAudioRequest`4::get_ResponseData()
// 0x0000001E System.Void Meta.Voice.NLPAudioRequest`4::set_ResponseData(Meta.WitAi.Json.WitResponseNode)
// 0x0000001F System.Void Meta.Voice.NLPAudioRequest`4::ApplyResultResponseData(Meta.WitAi.Json.WitResponseNode)
// 0x00000020 System.Void Meta.Voice.NLPAudioRequest`4::OnResponseDataChanged()
// 0x00000021 System.Void Meta.Voice.NLPAudioRequest`4::HandleNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
// 0x00000022 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000023 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnFullResponse()
// 0x00000024 System.Void Meta.Voice.NLPAudioRequestEvents`1::.ctor()
// 0x00000025 Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::get_InputType()
// 0x00000026 System.Void Meta.Voice.NLPRequest`4::set_InputType(Meta.Voice.NLPRequestInputType)
// 0x00000027 System.Void Meta.Voice.NLPRequest`4::.ctor(Meta.Voice.NLPRequestInputType,TOptions,TEvents)
// 0x00000028 System.Void Meta.Voice.NLPRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x00000029 System.Void Meta.Voice.NLPRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x0000002A System.String Meta.Voice.NLPRequest`4::GetActivateAudioError()
// 0x0000002B System.String Meta.Voice.NLPRequest`4::GetSendError()
// 0x0000002C System.Void Meta.Voice.NLPRequest`4::Send(System.String)
// 0x0000002D System.Void Meta.Voice.NLPRequestEvents`1::.ctor()
// 0x0000002E Meta.Voice.VoiceAudioInputState Meta.Voice.ITranscriptionRequest`4::get_AudioInputState()
// 0x0000002F System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000030 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsListening()
// 0x00000031 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanActivateAudio()
// 0x00000032 System.Void Meta.Voice.ITranscriptionRequest`4::ActivateAudio()
// 0x00000033 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000034 System.Void Meta.Voice.ITranscriptionRequest`4::DeactivateAudio()
// 0x00000035 System.Void Meta.Voice.TranscriptionRequestEvent::.ctor()
extern void TranscriptionRequestEvent__ctor_m09CF8691254B2858AAEA86DB4E55F29C9369FC4B (void);
// 0x00000036 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x00000037 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x00000038 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStartListening()
// 0x00000039 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x0000003A TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStopListening()
// 0x0000003B Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x0000003C Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x0000003D System.Single Meta.Voice.ITranscriptionRequestOptions::get_AudioThreshold()
// 0x0000003E System.String Meta.Voice.ITranscriptionRequestResults::get_Transcription()
// 0x0000003F Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::get_AudioInputState()
// 0x00000040 System.Void Meta.Voice.TranscriptionRequest`4::set_AudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x00000041 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000042 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsListening()
// 0x00000043 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanActivateAudio()
// 0x00000044 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000045 System.Void Meta.Voice.TranscriptionRequest`4::.ctor(TOptions,TEvents)
// 0x00000046 System.Void Meta.Voice.TranscriptionRequest`4::SetAudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x00000047 System.Void Meta.Voice.TranscriptionRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x00000048 System.String Meta.Voice.TranscriptionRequest`4::get_Transcription()
// 0x00000049 System.Void Meta.Voice.TranscriptionRequest`4::set_Transcription(System.String)
// 0x0000004A System.Void Meta.Voice.TranscriptionRequest`4::ApplyResultTranscription(System.String)
// 0x0000004B System.Void Meta.Voice.TranscriptionRequest`4::OnTranscriptionChanged()
// 0x0000004C System.String Meta.Voice.TranscriptionRequest`4::GetActivateAudioError()
// 0x0000004D System.Void Meta.Voice.TranscriptionRequest`4::ActivateAudio()
// 0x0000004E System.Void Meta.Voice.TranscriptionRequest`4::OnAudioActivation()
// 0x0000004F System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioActivation()
// 0x00000050 System.Void Meta.Voice.TranscriptionRequest`4::OnStartListening()
// 0x00000051 System.Void Meta.Voice.TranscriptionRequest`4::DeactivateAudio()
// 0x00000052 System.Void Meta.Voice.TranscriptionRequest`4::OnAudioDeactivation()
// 0x00000053 System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioDeactivation()
// 0x00000054 System.Void Meta.Voice.TranscriptionRequest`4::OnStopListening()
// 0x00000055 System.Void Meta.Voice.TranscriptionRequest`4::Send()
// 0x00000056 System.Void Meta.Voice.TranscriptionRequest`4::OnSuccess()
// 0x00000057 System.Void Meta.Voice.TranscriptionRequest`4::Cancel(System.String)
// 0x00000058 TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x00000059 TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x0000005A TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStartListening()
// 0x0000005B TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x0000005C TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStopListening()
// 0x0000005D Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x0000005E Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x0000005F System.Void Meta.Voice.TranscriptionRequestEvents`1::.ctor()
// 0x00000060 Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::get_State()
// 0x00000061 System.Void Meta.Voice.VoiceRequest`4::set_State(Meta.Voice.VoiceRequestState)
// 0x00000062 System.Boolean Meta.Voice.VoiceRequest`4::get_IsActive()
// 0x00000063 System.Single Meta.Voice.VoiceRequest`4::get_DownloadProgress()
// 0x00000064 System.Void Meta.Voice.VoiceRequest`4::set_DownloadProgress(System.Single)
// 0x00000065 System.Single Meta.Voice.VoiceRequest`4::get_UploadProgress()
// 0x00000066 System.Void Meta.Voice.VoiceRequest`4::set_UploadProgress(System.Single)
// 0x00000067 TOptions Meta.Voice.VoiceRequest`4::get_Options()
// 0x00000068 System.Void Meta.Voice.VoiceRequest`4::set_Options(TOptions)
// 0x00000069 TEvents Meta.Voice.VoiceRequest`4::get_Events()
// 0x0000006A System.Void Meta.Voice.VoiceRequest`4::set_Events(TEvents)
// 0x0000006B TResults Meta.Voice.VoiceRequest`4::get_Results()
// 0x0000006C System.Void Meta.Voice.VoiceRequest`4::set_Results(TResults)
// 0x0000006D System.Boolean Meta.Voice.VoiceRequest`4::get_CanSend()
// 0x0000006E System.Void Meta.Voice.VoiceRequest`4::.ctor(TOptions,TEvents)
// 0x0000006F System.Void Meta.Voice.VoiceRequest`4::OnInit()
// 0x00000070 System.Void Meta.Voice.VoiceRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x00000071 System.Void Meta.Voice.VoiceRequest`4::SetDownloadProgress(System.Single)
// 0x00000072 System.Void Meta.Voice.VoiceRequest`4::SetUploadProgress(System.Single)
// 0x00000073 System.Void Meta.Voice.VoiceRequest`4::RaiseEvent(TUnityEvent)
// 0x00000074 System.Void Meta.Voice.VoiceRequest`4::Log(System.String,System.Boolean)
// 0x00000075 System.Void Meta.Voice.VoiceRequest`4::LogW(System.String)
// 0x00000076 System.Void Meta.Voice.VoiceRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x00000077 System.String Meta.Voice.VoiceRequest`4::GetSendError()
// 0x00000078 System.Void Meta.Voice.VoiceRequest`4::Send()
// 0x00000079 System.Void Meta.Voice.VoiceRequest`4::OnSend()
// 0x0000007A System.Void Meta.Voice.VoiceRequest`4::HandleSend()
// 0x0000007B TResults Meta.Voice.VoiceRequest`4::GetResultsWithMessage(System.String)
// 0x0000007C System.Void Meta.Voice.VoiceRequest`4::HandleFailure(System.String)
// 0x0000007D System.Void Meta.Voice.VoiceRequest`4::HandleFailure(TResults)
// 0x0000007E System.Void Meta.Voice.VoiceRequest`4::OnFailed()
// 0x0000007F System.Void Meta.Voice.VoiceRequest`4::HandleSuccess(TResults)
// 0x00000080 System.Void Meta.Voice.VoiceRequest`4::OnSuccess()
// 0x00000081 System.Void Meta.Voice.VoiceRequest`4::Cancel(System.String)
// 0x00000082 System.Void Meta.Voice.VoiceRequest`4::HandleCancel()
// 0x00000083 System.Void Meta.Voice.VoiceRequest`4::OnCancel()
// 0x00000084 System.Void Meta.Voice.VoiceRequest`4::OnComplete()
// 0x00000085 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnStateChange()
// 0x00000086 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnInit()
// 0x00000087 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSend()
// 0x00000088 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnCancel()
// 0x00000089 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnFailed()
// 0x0000008A TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSuccess()
// 0x0000008B TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnComplete()
// 0x0000008C TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x0000008D TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x0000008E System.Void Meta.Voice.VoiceRequestEvents`1::.ctor()
// 0x0000008F System.String Meta.WitAi.IWitRequestConfiguration::GetConfigurationId()
// 0x00000090 System.String Meta.WitAi.IWitRequestConfiguration::GetApplicationId()
// 0x00000091 Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.IWitRequestConfiguration::GetApplicationInfo()
// 0x00000092 Meta.WitAi.WitRequestEndpointOverride Meta.WitAi.IWitRequestConfiguration::GetEndpointOverrides()
// 0x00000093 System.String Meta.WitAi.IWitRequestConfiguration::GetClientAccessToken()
// 0x00000094 System.Void Meta.WitAi.ComponentExtensions::Copy(T,T)
// 0x00000095 System.Void Meta.WitAi.ComponentExtensions::PreloadCopyData(T)
// 0x00000096 Meta.WitAi.ComponentExtensions/ComponentCopyData Meta.WitAi.ComponentExtensions::GetCopyData(T)
// 0x00000097 System.Boolean Meta.WitAi.ComponentExtensions::IsObsolete(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
extern void ComponentExtensions_IsObsolete_m6E25FCB40C8EC2A15E5F8A001B969A0B7AB484D1 (void);
// 0x00000098 System.Boolean Meta.WitAi.ComponentExtensions::HasCustomAttributes(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
// 0x00000099 System.Void Meta.WitAi.ComponentExtensions::.cctor()
extern void ComponentExtensions__cctor_mF4A72E2494ACFCF792779350185D54C6EA814009 (void);
// 0x0000009A Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
extern void CoroutineUtility_StartCoroutine_m95B3AB539C8070AEC773044E496B960B99B11581 (void);
// 0x0000009B Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::GetPerformer()
extern void CoroutineUtility_GetPerformer_m17B95AE9B95B5ECDB203A3B51483963E363CE9AE (void);
// 0x0000009C System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::get_IsRunning()
extern void CoroutinePerformer_get_IsRunning_m51CA799E88A0F2AE64D9B1957D66088F7E2DA276 (void);
// 0x0000009D System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::set_IsRunning(System.Boolean)
extern void CoroutinePerformer_set_IsRunning_m89265C3CD5F653D4A814DDC77B9B57197A183A13 (void);
// 0x0000009E System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Awake()
extern void CoroutinePerformer_Awake_m1EB4237ABDCBFA38F752802B9967EE0561317F7B (void);
// 0x0000009F System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineBegin(System.Collections.IEnumerator,System.Boolean)
extern void CoroutinePerformer_CoroutineBegin_mFFE1D09BF82755CCF8B423ED36C6F0F0134B582E (void);
// 0x000000A0 System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateEnumerator()
extern void CoroutinePerformer_CoroutineIterateEnumerator_m0016E8BB846582402945E6F6FF7E4DF123B1BD53 (void);
// 0x000000A1 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Update()
extern void CoroutinePerformer_Update_m40484607CE4E969EE64EF32137D015F1E0C8564E (void);
// 0x000000A2 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateUpdate()
extern void CoroutinePerformer_CoroutineIterateUpdate_m87DFD7D653EADCE550CAF746A97063FD1DAA89A6 (void);
// 0x000000A3 System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::MoveNext(System.Collections.IEnumerator)
extern void CoroutinePerformer_MoveNext_m8BFE01181F43AB0B6C2AF7589D15E111AB560096 (void);
// 0x000000A4 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::OnDestroy()
extern void CoroutinePerformer_OnDestroy_mF765316FC0B97441B30CF00CE2365C496BADFAF9 (void);
// 0x000000A5 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
extern void CoroutinePerformer_CoroutineCancel_m051105F4B6B79E92605DF13211FEADBE97FCEB37 (void);
// 0x000000A6 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
extern void CoroutinePerformer_CoroutineComplete_mC62A04595F9A19C0340B047DD657B735C8FA96D8 (void);
// 0x000000A7 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineUnload()
extern void CoroutinePerformer_CoroutineUnload_mCBA177DC50152C51A8B3915A8996ED3D6BBE70CB (void);
// 0x000000A8 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::.ctor()
extern void CoroutinePerformer__ctor_mE6B4A3F722F31684A62D8D408C6F7347B0D47457 (void);
// 0x000000A9 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::.ctor(System.Int32)
extern void U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m5DCCB712A6CE5FFFB27EF9DB847F594129D66ED3 (void);
// 0x000000AA System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.IDisposable.Dispose()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mAE604254076AC8D11B74C7F6552461BD1F4EC716 (void);
// 0x000000AB System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::MoveNext()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m9BA397F047925E51F2011CEC19B584A7EFF7D7E8 (void);
// 0x000000AC System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m120AA28857BF642183D122F04B1B00668D2CC8E3 (void);
// 0x000000AD System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.Reset()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mBB7ADFD9C96376F1C726C3F3FE8D092359EB3D01 (void);
// 0x000000AE System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_mEB96F63742F421D93ABD64C630F4DD44E2047339 (void);
// 0x000000AF System.Boolean Meta.WitAi.EnumerableExtensions::Equivalent(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x000000B0 Meta.WitAi.ThreadUtility/ThreadPerformer`1<T> Meta.WitAi.ThreadUtility::PerformInBackground(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x000000B1 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::get_IsRunning()
// 0x000000B2 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::set_IsRunning(System.Boolean)
// 0x000000B3 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::.ctor(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x000000B4 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Work()
// 0x000000B5 System.Collections.IEnumerator Meta.WitAi.ThreadUtility/ThreadPerformer`1::WaitForCompletion()
// 0x000000B6 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::IsTimedOut(System.DateTime)
// 0x000000B7 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Quit()
// 0x000000B8 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::.ctor(System.Int32)
// 0x000000B9 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.IDisposable.Dispose()
// 0x000000BA System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::MoveNext()
// 0x000000BB System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x000000BC System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.Reset()
// 0x000000BD System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.get_Current()
// 0x000000BE System.Void Meta.WitAi.UnityObjectExtensions::DestroySafely(UnityEngine.Object)
extern void UnityObjectExtensions_DestroySafely_mA60559E7DDF90A6D39B0346A3AD70BA81E72FE6F (void);
// 0x000000BF System.Void Meta.WitAi.VLog::add_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,UnityEngine.LogType>)
extern void VLog_add_OnPreLog_m3B38A4E3DC8E0205B8B6E140471F58D7741409B3 (void);
// 0x000000C0 System.Void Meta.WitAi.VLog::remove_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,UnityEngine.LogType>)
extern void VLog_remove_OnPreLog_m4A28A81C89372F689EC24612E1342694FC1330E3 (void);
// 0x000000C1 System.Void Meta.WitAi.VLog::D(System.Object)
extern void VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C (void);
// 0x000000C2 System.Void Meta.WitAi.VLog::D(System.String,System.Object)
extern void VLog_D_mEA74212E8356B4FB90717629E435413F90A4E871 (void);
// 0x000000C3 System.Void Meta.WitAi.VLog::W(System.Object)
extern void VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706 (void);
// 0x000000C4 System.Void Meta.WitAi.VLog::W(System.String,System.Object)
extern void VLog_W_m088CDA60732A09ABC03F3A29A3DA486A2AD82FFE (void);
// 0x000000C5 System.Void Meta.WitAi.VLog::E(System.Object)
extern void VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09 (void);
// 0x000000C6 System.Void Meta.WitAi.VLog::E(System.String,System.Object)
extern void VLog_E_m0B40A19A1CD5D28F205F547E632A7B393EC15B6A (void);
// 0x000000C7 System.Void Meta.WitAi.VLog::Log(UnityEngine.LogType,System.String,System.Object)
extern void VLog_Log_m68E128D0C57BDD8905760F2F40D37817E6DC978A (void);
// 0x000000C8 System.String Meta.WitAi.VLog::GetCallingCategory()
extern void VLog_GetCallingCategory_m1F5DD11D7B3EBADFBE5A31E3000E7F86C3A8DD2F (void);
// 0x000000C9 System.Void Meta.WitAi.VLog::WrapWithCallingLink(System.Text.StringBuilder,System.Int32)
extern void VLog_WrapWithCallingLink_mF2B5E176F63AC9B9573A1035C97495E06F840B1C (void);
// 0x000000CA System.Void Meta.WitAi.VLog::WrapWithLogColor(System.Text.StringBuilder,System.Int32,UnityEngine.LogType)
extern void VLog_WrapWithLogColor_mD0A5C2A7BBD6CC0D6C4B7662694011CA14F51B84 (void);
// 0x000000CB Meta.WitAi.Requests.AudioStreamData Meta.WitAi.Requests.AudioStreamHandler::get_StreamData()
extern void AudioStreamHandler_get_StreamData_m7D4028640B1E2DB1210B5D45CD3C97BF2F40D467 (void);
// 0x000000CC System.Void Meta.WitAi.Requests.AudioStreamHandler::set_StreamData(Meta.WitAi.Requests.AudioStreamData)
extern void AudioStreamHandler_set_StreamData_m6FB626F436F87F45893BD820DB5F3B8FB93C8902 (void);
// 0x000000CD UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::get_Clip()
extern void AudioStreamHandler_get_Clip_m1F1EE271EA135B4F1C110E8CE79E91B2496C47D9 (void);
// 0x000000CE System.Void Meta.WitAi.Requests.AudioStreamHandler::set_Clip(UnityEngine.AudioClip)
extern void AudioStreamHandler_set_Clip_m8B669A00EDF059F32E954EE70A03CB97564655D1 (void);
// 0x000000CF System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamReady()
extern void AudioStreamHandler_get_IsStreamReady_m48D1E8D812D9C021EC3C8221BDFE4F821A39F17E (void);
// 0x000000D0 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamReady(System.Boolean)
extern void AudioStreamHandler_set_IsStreamReady_mD1EA741A67C46AF756B7555D4947AF0BAC7DD11C (void);
// 0x000000D1 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamComplete()
extern void AudioStreamHandler_get_IsStreamComplete_m9DA0B1AB667159E4A6158735C4B7986671EE50C5 (void);
// 0x000000D2 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamComplete(System.Boolean)
extern void AudioStreamHandler_set_IsStreamComplete_mAE43D4712EEBF25F93251AFD40197DD2916B6E5B (void);
// 0x000000D3 System.Void Meta.WitAi.Requests.AudioStreamHandler::add_OnClipUpdated(Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate)
extern void AudioStreamHandler_add_OnClipUpdated_m4EDBE923C398E281C84854925E414ECC94A218DA (void);
// 0x000000D4 System.Void Meta.WitAi.Requests.AudioStreamHandler::remove_OnClipUpdated(Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate)
extern void AudioStreamHandler_remove_OnClipUpdated_mD483F7AB375586B7E448B88A236FB53E44711C23 (void);
// 0x000000D5 System.Void Meta.WitAi.Requests.AudioStreamHandler::add_OnStreamComplete(System.Action`1<UnityEngine.AudioClip>)
extern void AudioStreamHandler_add_OnStreamComplete_mA84F8A99C1C80AB89C88958E1A4D9218E6056BB8 (void);
// 0x000000D6 System.Void Meta.WitAi.Requests.AudioStreamHandler::remove_OnStreamComplete(System.Action`1<UnityEngine.AudioClip>)
extern void AudioStreamHandler_remove_OnStreamComplete_mC7FBF87F152BA23D1F8FF142A8C185BEF488B4F1 (void);
// 0x000000D7 System.Void Meta.WitAi.Requests.AudioStreamHandler::.ctor(Meta.WitAi.Requests.AudioStreamData)
extern void AudioStreamHandler__ctor_m2FFB83CD70702243F8EE03555CDE34A61645AA52 (void);
// 0x000000D8 System.Void Meta.WitAi.Requests.AudioStreamHandler::ReceiveContentLengthHeader(System.UInt64)
extern void AudioStreamHandler_ReceiveContentLengthHeader_mC400055D4CBBE8E59E699F0AA33C9096CD777C4A (void);
// 0x000000D9 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::ReceiveData(System.Byte[],System.Int32)
extern void AudioStreamHandler_ReceiveData_m0F650B530F4205EBABAFEBBD95C91545B117E7B8 (void);
// 0x000000DA System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeData(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeData_mEAB09ADE70AE3DC5371100A9F14E6458DD514308 (void);
// 0x000000DB System.Void Meta.WitAi.Requests.AudioStreamHandler::OnDecodeComplete(System.Single[],System.String)
extern void AudioStreamHandler_OnDecodeComplete_mDC0588557AE6F951A3B02059BB83CF3A604C7285 (void);
// 0x000000DC System.Void Meta.WitAi.Requests.AudioStreamHandler::CompleteContent()
extern void AudioStreamHandler_CompleteContent_m67AF753DF31138BF003A963B5D9B894026CD9DAE (void);
// 0x000000DD System.Void Meta.WitAi.Requests.AudioStreamHandler::TryToFinalize()
extern void AudioStreamHandler_TryToFinalize_mCA1865BB8891BD785EE5E2CD22C41F7D3D1AD638 (void);
// 0x000000DE System.Void Meta.WitAi.Requests.AudioStreamHandler::CleanUp()
extern void AudioStreamHandler_CleanUp_mE71E561C1755E82486235D6BDDE81C9E390CA3D0 (void);
// 0x000000DF System.Void Meta.WitAi.Requests.AudioStreamHandler::GenerateClip(System.Int32)
extern void AudioStreamHandler_GenerateClip_mD1E5E3EFA56E020B9F618D553983424D9760BC32 (void);
// 0x000000E0 System.Void Meta.WitAi.Requests.AudioStreamHandler::PreloadCachedClips(System.Int32,System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_PreloadCachedClips_mEA07ECB74C49EF0835F092F9853F193CBB5996F9 (void);
// 0x000000E1 System.Void Meta.WitAi.Requests.AudioStreamHandler::GenerateCacheClip(System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_GenerateCacheClip_mE77F311B0DFD73A058ACE399497D8A9A169840EB (void);
// 0x000000E2 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetCachedClip(System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_GetCachedClip_mCD6167271060DFAC769BC0EA7382412DA638482A (void);
// 0x000000E3 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::DoesClipMatch(UnityEngine.AudioClip,System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_DoesClipMatch_m93F1024BBB6D07E6A540BE9208682B9FE9AF5982 (void);
// 0x000000E4 System.Void Meta.WitAi.Requests.AudioStreamHandler::ReuseCachedClip(UnityEngine.AudioClip)
extern void AudioStreamHandler_ReuseCachedClip_m8CFE6A6ED8811D4FADE80A0F3F8399B0F361D05F (void);
// 0x000000E5 System.Void Meta.WitAi.Requests.AudioStreamHandler::DestroyCachedClips()
extern void AudioStreamHandler_DestroyCachedClips_m7FCDC9C0493E204B4F91B787B0A0818DE49ED057 (void);
// 0x000000E6 System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeAudio(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_DecodeAudio_m848EC3CA4A2C448917A8D6CE2FDEADF2AFE4863A (void);
// 0x000000E7 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromSamples(System.Single[],System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromSamples_mCBC57F0C2CBDA535A4A29E1D2E92D4243A1739C2 (void);
// 0x000000E8 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawData(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromRawData_m9DEB722F0D60D0F4FDEA97D94F740419D2DE353F (void);
// 0x000000E9 System.Void Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawDataAsync(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32,System.Action`2<UnityEngine.AudioClip,System.String>)
extern void AudioStreamHandler_GetClipFromRawDataAsync_mD02A1B7261B8D12AFEDDAB65B7E1B543D913F16B (void);
// 0x000000EA System.Int32 Meta.WitAi.Requests.AudioStreamHandler::GetClipSamplesFromContentLength(System.UInt64,Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_GetClipSamplesFromContentLength_mFE8E3D2084BC7646C4E2EC4658B1A43A15A571AB (void);
// 0x000000EB System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodePCM16(System.Byte[])
extern void AudioStreamHandler_DecodePCM16_m2CDCE4D102036F4C47B576DCA01F63FC3BD9DBB4 (void);
// 0x000000EC System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeChunkPCM16(System.Byte[],System.Int32,System.Boolean&,System.Byte[]&)
extern void AudioStreamHandler_DecodeChunkPCM16_m45A9FA991099C306B71F8C6F102C24ED1BDB8CCD (void);
// 0x000000ED System.Single Meta.WitAi.Requests.AudioStreamHandler::DecodeSamplePCM16(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeSamplePCM16_m6479E3C920148F072D2CABA6E8F949E3CEA009CB (void);
// 0x000000EE System.Void Meta.WitAi.Requests.AudioStreamHandler::.cctor()
extern void AudioStreamHandler__cctor_m605F379B468350E8DD79726C7AD6A28A8C196711 (void);
// 0x000000EF System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::.ctor(System.Object,System.IntPtr)
extern void AudioStreamClipUpdateDelegate__ctor_m54A4DA013F22D78FF97807203D45A0AAC0EC4999 (void);
// 0x000000F0 System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::Invoke(UnityEngine.AudioClip,UnityEngine.AudioClip)
extern void AudioStreamClipUpdateDelegate_Invoke_mD13429AFC74A3C2E7B4432ABF0EC4A62E0524C6B (void);
// 0x000000F1 System.IAsyncResult Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::BeginInvoke(UnityEngine.AudioClip,UnityEngine.AudioClip,System.AsyncCallback,System.Object)
extern void AudioStreamClipUpdateDelegate_BeginInvoke_mAF3469599274E6F0F9DED39E1DB30E8FFEA2FEA7 (void);
// 0x000000F2 System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::EndInvoke(System.IAsyncResult)
extern void AudioStreamClipUpdateDelegate_EndInvoke_mE53205B980E551AF26582735CE58F5752C6F8B6D (void);
// 0x000000F3 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_mF3CBBF6BEE2594C8E1C959B4727CE24A7A6559BC (void);
// 0x000000F4 System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass31_0::<ReceiveData>b__0()
extern void U3CU3Ec__DisplayClass31_0_U3CReceiveDataU3Eb__0_m4751229A8DCB7B36F1B783BEC9F52649D16A7C15 (void);
// 0x000000F5 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass42_0::.ctor()
extern void U3CU3Ec__DisplayClass42_0__ctor_m65D434152B88830A9E11406B3AC35469B5AB1F93 (void);
// 0x000000F6 System.Boolean Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass42_0::<GetCachedClip>b__0(UnityEngine.AudioClip)
extern void U3CU3Ec__DisplayClass42_0_U3CGetCachedClipU3Eb__0_mD6904FBADF89DF5FABF223C9F93A5E5F082283CC (void);
// 0x000000F7 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::.ctor()
extern void U3CU3Ec__DisplayClass49_0__ctor_m6C895B03125FDEE990B4F23F4A9F146C9BE45AA2 (void);
// 0x000000F8 System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::<GetClipFromRawDataAsync>b__0()
extern void U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__0_m1F19BDE11296A579386F96F4D5BD8891078F9F01 (void);
// 0x000000F9 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::<GetClipFromRawDataAsync>b__1(System.Single[],System.String)
extern void U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__1_m5A9459F0963567D1211720F5F3B6420E2C4BBB1A (void);
// 0x000000FA System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamReady()
// 0x000000FB System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamComplete()
// 0x000000FC System.Int32 Meta.WitAi.Requests.VRequest::get_Timeout()
extern void VRequest_get_Timeout_m03F009116C70B6B96C7DEDE504E5FD5AA49FBC7F (void);
// 0x000000FD System.Void Meta.WitAi.Requests.VRequest::set_Timeout(System.Int32)
extern void VRequest_set_Timeout_m3F2E5F02C61A8E4B1FFB722669D05C5D2B554650 (void);
// 0x000000FE System.Boolean Meta.WitAi.Requests.VRequest::get_IsPerforming()
extern void VRequest_get_IsPerforming_mD8C2A2A54C96AB3B9F1F66645F24298D410C1BC5 (void);
// 0x000000FF System.Void Meta.WitAi.Requests.VRequest::set_IsPerforming(System.Boolean)
extern void VRequest_set_IsPerforming_mC10E449CFC3DDE07D4092630543C65564168D050 (void);
// 0x00000100 System.Boolean Meta.WitAi.Requests.VRequest::get_IsComplete()
extern void VRequest_get_IsComplete_m3781924918754A98C2777F888FE00DB7811784C4 (void);
// 0x00000101 System.Void Meta.WitAi.Requests.VRequest::set_IsComplete(System.Boolean)
extern void VRequest_set_IsComplete_m910F649D3FC712AABA0DF23DF30EA149C80C82C9 (void);
// 0x00000102 System.Single Meta.WitAi.Requests.VRequest::get_UploadProgress()
extern void VRequest_get_UploadProgress_mCF73D499D5CD279E3E712D41D5AD6DB9B8D318CD (void);
// 0x00000103 System.Void Meta.WitAi.Requests.VRequest::set_UploadProgress(System.Single)
extern void VRequest_set_UploadProgress_mC1D6AB04AFF0F3272F3C198784BB1212522F00A8 (void);
// 0x00000104 System.Single Meta.WitAi.Requests.VRequest::get_DownloadProgress()
extern void VRequest_get_DownloadProgress_m2F798CC32BD31340DB75A3FA79BF74813EEA345E (void);
// 0x00000105 System.Void Meta.WitAi.Requests.VRequest::set_DownloadProgress(System.Single)
extern void VRequest_set_DownloadProgress_m456B92DE61C8AA463350F26B76F9FDF6D93AB8D7 (void);
// 0x00000106 System.Boolean Meta.WitAi.Requests.VRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_Request_m9FA9CDEB34E4150682E78BAA953B926A39AAD943 (void);
// 0x00000107 System.String Meta.WitAi.Requests.VRequest::CleanUrl(System.String)
extern void VRequest_CleanUrl_m745616E5CA15ADCEB002750F6953241286702FC9 (void);
// 0x00000108 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VRequest::GetHeaders()
extern void VRequest_GetHeaders_m4A5AD89E04AB6405391E8CC2FAF2DCEFA2AB71F0 (void);
// 0x00000109 System.Collections.IEnumerator Meta.WitAi.Requests.VRequest::PerformUpdate()
extern void VRequest_PerformUpdate_mC2BC5D008BF9C5C6E852088A18C8EE4CA6286CFD (void);
// 0x0000010A System.Void Meta.WitAi.Requests.VRequest::Begin()
extern void VRequest_Begin_mDD6371A35A092F5B7ED1309CEA44439C8D62807D (void);
// 0x0000010B System.Void Meta.WitAi.Requests.VRequest::Complete()
extern void VRequest_Complete_mB855280A07AAE339239C74A75E1B4D9723ECC832 (void);
// 0x0000010C System.Void Meta.WitAi.Requests.VRequest::Cancel()
extern void VRequest_Cancel_mBC45002E0F28DEB86417AB13A19AD9D3BFAB700E (void);
// 0x0000010D System.Void Meta.WitAi.Requests.VRequest::Unload()
extern void VRequest_Unload_m11FECA222143EC83EC39C53DE198B76C78D00D18 (void);
// 0x0000010E System.Boolean Meta.WitAi.Requests.VRequest::RequestFileHeaders(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void VRequest_RequestFileHeaders_m969B8183728F16508A4E7D81D3B2DBFBBCEA5711 (void);
// 0x0000010F System.Boolean Meta.WitAi.Requests.VRequest::RequestFile(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Byte[]>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestFile_m429264FF55861BFCFEB2CAD3B41F53830023F67C (void);
// 0x00000110 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileDownload(System.String,UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestFileDownload_mE20AE96FA8E75FCD75583B651CA87DE57A0026DC (void);
// 0x00000111 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileExists(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
extern void VRequest_RequestFileExists_m3641BF14A2039A47B7619C565D6E4680D418F313 (void);
// 0x00000112 System.Boolean Meta.WitAi.Requests.VRequest::RequestText(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.String>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestText_m67B5B557C6F8C1EEEFBD7A0AA0EF8A1D26A258BB (void);
// 0x00000113 System.Boolean Meta.WitAi.Requests.VRequest::RequestJson(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000114 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonGet(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000115 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000116 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000117 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000118 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000119 System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,System.Single,System.Single,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestAudioClip_mBE4BBE5354ADED5E80B76B1C3FBFF8E29CC65E3E (void);
// 0x0000011A System.Void Meta.WitAi.Requests.VRequest::OnRequestAudioReady(UnityEngine.Networking.UnityWebRequest,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>)
extern void VRequest_OnRequestAudioReady_m804EF4C52EA21B4AB121838C9A8B252ACD1DF364 (void);
// 0x0000011B System.Void Meta.WitAi.Requests.VRequest::OnRequestAudioDecoded(UnityEngine.AudioClip,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>)
extern void VRequest_OnRequestAudioDecoded_m359F622ECCC94D27085E2688213A5D486293F3C3 (void);
// 0x0000011C System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,System.Single,System.Single,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestAudioClip_m0CF685494AB6A6E42C1B99FDE8EEA5DCC93327B3 (void);
// 0x0000011D System.Void Meta.WitAi.Requests.VRequest::.ctor()
extern void VRequest__ctor_mF4BCAE61CB2829619C591FBEDDF62B7B0D15EA86 (void);
// 0x0000011E System.Void Meta.WitAi.Requests.VRequest::.cctor()
extern void VRequest__cctor_m26398CA4AC0E7E34494E5C7F907C2751EC9A3F23 (void);
// 0x0000011F System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestProgressDelegate__ctor_m28B696CB02837C016B6E4904AC7EEC4B792CF22C (void);
// 0x00000120 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::Invoke(System.Single)
extern void RequestProgressDelegate_Invoke_m3DF0ABF142BC50798A3EA715C1D70C43A119A08C (void);
// 0x00000121 System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void RequestProgressDelegate_BeginInvoke_mEA6AC0405C07C088027281E7275118343CDD9E8A (void);
// 0x00000122 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::EndInvoke(System.IAsyncResult)
extern void RequestProgressDelegate_EndInvoke_m1981132C27BCB9EFBBD08D6D6BB56CD0C7FCA947 (void);
// 0x00000123 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::.ctor(System.Object,System.IntPtr)
// 0x00000124 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::Invoke(TResult,System.String)
// 0x00000125 System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::BeginInvoke(TResult,System.String,System.AsyncCallback,System.Object)
// 0x00000126 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::EndInvoke(System.IAsyncResult)
// 0x00000127 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::.ctor(System.Int32)
extern void U3CPerformUpdateU3Ed__32__ctor_mF0CB2BF2346274C7D475E1E516FAEA17E35D0F99 (void);
// 0x00000128 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.IDisposable.Dispose()
extern void U3CPerformUpdateU3Ed__32_System_IDisposable_Dispose_m0D0020E993B7591C669CEAEDC9DAA12B8F0D7FF5 (void);
// 0x00000129 System.Boolean Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::MoveNext()
extern void U3CPerformUpdateU3Ed__32_MoveNext_mECBC91D162E89145030225074FBFDA8EC91ECB4A (void);
// 0x0000012A System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CPerformUpdateU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5DD0FAB735DC5C54F2103585D5C497BDC515DBF3 (void);
// 0x0000012B System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.IEnumerator.Reset()
extern void U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_Reset_m5ABF5A0FB0E29E1ECFDA0CEBE0063B2506FF5904 (void);
// 0x0000012C System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.IEnumerator.get_Current()
extern void U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_get_Current_m402CCC076B60665226788458EB1B05568AB0F651 (void);
// 0x0000012D System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_mEBBC01D7BF60F87AD789AEC68683CFE4292E1C9B (void);
// 0x0000012E System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass37_0::<RequestFileHeaders>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass37_0_U3CRequestFileHeadersU3Eb__0_mB7704F50D2507DC0A428F879B97CFB258C1F99BC (void);
// 0x0000012F System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_m3C46A1E7617042FF0E574A3EE413A025E7EAB6D0 (void);
// 0x00000130 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass38_0::<RequestFile>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass38_0_U3CRequestFileU3Eb__0_m717CE1B8C520FE64E4DBC51ED588209EF85C9DC5 (void);
// 0x00000131 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_m60DA58892AF1D7C7289382776EDA98BDEA4C4392 (void);
// 0x00000132 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass39_0::<RequestFileDownload>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass39_0_U3CRequestFileDownloadU3Eb__0_mD18C9EF7DD1A4F189CE056F45AD4F72EAB73BFB8 (void);
// 0x00000133 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_m1467B95339D9CBD5854A7BE2B651885DB6390C86 (void);
// 0x00000134 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__0(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__0_m3BA56636C11455FD4B921FE8B4224B8AFB983427 (void);
// 0x00000135 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__1(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__1_m32D6E4C84D9669AEDF19C758EDAAD9DE32FBEFDD (void);
// 0x00000136 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__2(System.Single)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__2_m48936F182EDBE8B89FC0BCBCAAC2F878CFBD44EA (void);
// 0x00000137 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_m1AF4398EF9E5D00ACB977E923EFBCEDE9E956EA8 (void);
// 0x00000138 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass41_0::<RequestText>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass41_0_U3CRequestTextU3Eb__0_mCF35D5B9B8A94DF823D2FDB60AD375690651AE23 (void);
// 0x00000139 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_0`1::.ctor()
// 0x0000013A System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_0`1::<RequestJson>b__0(System.String,System.String)
// 0x0000013B System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_1`1::.ctor()
// 0x0000013C System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_1`1::<RequestJson>b__1(TData,System.Boolean)
// 0x0000013D System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m586783B398256FA5CB466F388F667BC34E694118 (void);
// 0x0000013E System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::<RequestAudioClip>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass48_0_U3CRequestAudioClipU3Eb__0_m4630960D248C4823FA8946DE08B8358840A200DA (void);
// 0x0000013F System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::.ctor()
extern void U3CU3Ec__DisplayClass49_0__ctor_m23DDC87EDE8D308350432DEF00376783B5D87BA0 (void);
// 0x00000140 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::<OnRequestAudioReady>b__0(UnityEngine.AudioClip,System.String)
extern void U3CU3Ec__DisplayClass49_0_U3COnRequestAudioReadyU3Eb__0_m953A1DB6E79D4D83D4DC5A4B7EA778A0A4B2E3C6 (void);
// 0x00000141 System.Void Meta.WitAi.Requests.WitMessageVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String)
extern void WitMessageVRequest__ctor_m8C13B28C87B08CAD7761908E5AF5661C2D0F8064 (void);
// 0x00000142 System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitMessageVRequest_MessageRequest_m0572805D0A5FBBF7EEA1CC7D18807E13201726B3 (void);
// 0x00000143 System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitMessageVRequest_MessageRequest_mCB43E49F2932E670DFD716DCA3252FA5AA440D64 (void);
// 0x00000144 System.Void Meta.WitAi.Requests.WitTTSVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration)
extern void WitTTSVRequest__ctor_m3131E3EB772D3090D19D313A9262CBA3D9705131 (void);
// 0x00000145 UnityEngine.AudioType Meta.WitAi.Requests.WitTTSVRequest::GetAudioType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioType_m5CFF762C5BEAE513D39C9C6D349B366C050C3A32 (void);
// 0x00000146 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioMimeType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioMimeType_mF109EB3D8071B39637E32CE69AFA0ADF13D6C532 (void);
// 0x00000147 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioExtension_m78A0DFAB50A31D58E52422BEE9703358718A7679 (void);
// 0x00000148 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(UnityEngine.AudioType)
extern void WitTTSVRequest_GetAudioExtension_m1906FF22915557298EC730D7DF011882DF0217FF (void);
// 0x00000149 System.Boolean Meta.WitAi.Requests.WitTTSVRequest::CanStreamAudio(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_CanStreamAudio_mAB0A162BE3869C1E6609151768B4832C5DBA9C8E (void);
// 0x0000014A System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestStream(System.String,Meta.WitAi.Requests.TTSWitAudioType,System.Boolean,System.Single,System.Single,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitTTSVRequest_RequestStream_mBB71445ED5C39EC2071C4D7EBFC58947C58C6DB6 (void);
// 0x0000014B System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestDownload(System.String,System.String,Meta.WitAi.Requests.TTSWitAudioType,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitTTSVRequest_RequestDownload_mDD85F68206730AA7B236767078BCB1BAF61E79A8 (void);
// 0x0000014C System.Void Meta.WitAi.Requests.WitTTSVRequest::EncodePostBytesAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Byte[]>)
extern void WitTTSVRequest_EncodePostBytesAsync_m54A44675514FA3485FD761BDDBD28A7B2BE809F0 (void);
// 0x0000014D System.Byte[] Meta.WitAi.Requests.WitTTSVRequest::EncodePostData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitTTSVRequest_EncodePostData_mD65A6F815BA3EADDB2EFF920E33CD58DFFC1465D (void);
// 0x0000014E UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.WitTTSVRequest::GetUnityRequest(Meta.WitAi.Requests.TTSWitAudioType,System.Byte[])
extern void WitTTSVRequest_GetUnityRequest_m4D30CF1B6DBA6029AA2B7B1F6F251781664053D3 (void);
// 0x0000014F System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m727D7138BF5310AA934BE6C34B4089B3AFD5C9DA (void);
// 0x00000150 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass6_0::<RequestStream>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass6_0_U3CRequestStreamU3Eb__0_mB637ED830BE6EF9D1A5BE6B7919D7E548F21E1D9 (void);
// 0x00000151 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mF9D67FC1CE9065061BF05D1E97FB48CDBEDE6680 (void);
// 0x00000152 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass7_0::<RequestDownload>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass7_0_U3CRequestDownloadU3Eb__0_m01D2A52E3571805B1A35B77580F96EFE3BA2FF96 (void);
// 0x00000153 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m4DE63C2338A70C1682300069C4082F144EBB9315 (void);
// 0x00000154 System.Byte[] Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::<EncodePostBytesAsync>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__0_mC21CA2284106C027B2158EA8D6FA5D8C4E9271E4 (void);
// 0x00000155 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::<EncodePostBytesAsync>b__1(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__1_m30F39BBBE2874F2272A207E71EE2A9785D2E4DF4 (void);
// 0x00000156 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_add_OnProvideCustomUri_m5BD06AEA804B496E8B621DF6C3F053F7DDEA387A (void);
// 0x00000157 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_remove_OnProvideCustomUri_m1B9F975434D15BFC49B9669EE297848EC715B57E (void);
// 0x00000158 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_add_OnProvideCustomHeaders_mECE512FAD1FF646DDEA39FC296FAD993B6AED286 (void);
// 0x00000159 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_remove_OnProvideCustomHeaders_m6A2D44E7B8BF9ED4EB4FA2C819C118E428875ECD (void);
// 0x0000015A System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_add_OnProvideCustomUserAgent_m68EE4D15C386FF95DDC247BF142E00769F54EF47 (void);
// 0x0000015B System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_remove_OnProvideCustomUserAgent_m9D7A54162E406EEA482F0970663B3137C8857979 (void);
// 0x0000015C System.String Meta.WitAi.Requests.WitVRequest::get_RequestId()
extern void WitVRequest_get_RequestId_m9932C4ABF2485194D9F91D60355158E9C7D33964 (void);
// 0x0000015D System.Void Meta.WitAi.Requests.WitVRequest::set_RequestId(System.String)
extern void WitVRequest_set_RequestId_m8461BD2ADDFB9E8911A2B21FD722941F4D5F7616 (void);
// 0x0000015E Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::get_Configuration()
extern void WitVRequest_get_Configuration_m8F55B23BB5D7C8DE85C582730B66EF91C74EDD9F (void);
// 0x0000015F System.Void Meta.WitAi.Requests.WitVRequest::set_Configuration(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_set_Configuration_mC0F788F9244204081B6BB4AF2E24AE88AB6DAC01 (void);
// 0x00000160 System.Void Meta.WitAi.Requests.WitVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean)
extern void WitVRequest__ctor_m45B77C96A433DDC3F02508C96D5D25C4863351A7 (void);
// 0x00000161 System.Uri Meta.WitAi.Requests.WitVRequest::GetUri(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetUri_m1E2CE2F1D322E731C090E4FEA619AC5D8A0ABF7F (void);
// 0x00000162 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetHeaders()
extern void WitVRequest_GetHeaders_m0B570BD8EF6CC4F83C97422A5B2D2BA7067490CC (void);
// 0x00000163 System.Boolean Meta.WitAi.Requests.WitVRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitVRequest_Request_m4307FDCB76121EB9E79713642944DA8D4F68AC44 (void);
// 0x00000164 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitGet(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000165 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPost(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000166 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPut(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000167 System.Uri Meta.WitAi.Requests.WitVRequest::GetWitUri(Meta.WitAi.IWitRequestConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetWitUri_m99BBEF38685D3BDA3DB4966137C505E6B4AC6A5B (void);
// 0x00000168 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetWitHeaders(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean)
extern void WitVRequest_GetWitHeaders_m4E4216BA42F7F2240F74F57386CDEEAFB2138409 (void);
// 0x00000169 System.String Meta.WitAi.Requests.WitVRequest::GetAuthorizationHeader(Meta.WitAi.IWitRequestConfiguration,System.Boolean)
extern void WitVRequest_GetAuthorizationHeader_mFEFF86972F8BC7D936F1ED884DE5468C8EBD945D (void);
// 0x0000016A System.String Meta.WitAi.Requests.WitVRequest::GetUserAgentHeader(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_GetUserAgentHeader_m7944A3D357F22308DA6648B309DBB924BBFE500A (void);
// 0x0000016B System.Boolean Meta.WitAi.Json.ColorConverter::get_CanRead()
extern void ColorConverter_get_CanRead_m22E660731B056A77FC873F0DF5ED1B810BC3C7C0 (void);
// 0x0000016C System.Boolean Meta.WitAi.Json.ColorConverter::get_CanWrite()
extern void ColorConverter_get_CanWrite_mADE86E5A42E2C1D725F8BF8AE4997EACAA6A9E51 (void);
// 0x0000016D System.Boolean Meta.WitAi.Json.ColorConverter::CanConvert(System.Type)
extern void ColorConverter_CanConvert_mC792241D563AD0BCDBD65F55E628287845B8D929 (void);
// 0x0000016E System.Object Meta.WitAi.Json.ColorConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void ColorConverter_ReadJson_mB19B3537C3B3AB22C843E9178D104620B709F5A4 (void);
// 0x0000016F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.ColorConverter::WriteJson(System.Object)
extern void ColorConverter_WriteJson_mE88C33977E45F6C65F8627C7FD815F1CF17B2E9A (void);
// 0x00000170 System.Void Meta.WitAi.Json.ColorConverter::.ctor()
extern void ColorConverter__ctor_mB17F2603A14C3CC2FE94878DA85130D2BE6A8722 (void);
// 0x00000171 System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanRead()
extern void DateTimeConverter_get_CanRead_m4C97B6D804906607188F058922DB815AE3EDF57A (void);
// 0x00000172 System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanWrite()
extern void DateTimeConverter_get_CanWrite_mE7A541FEA2C720F34EF377590DA0C3FD1FE0294F (void);
// 0x00000173 System.Boolean Meta.WitAi.Json.DateTimeConverter::CanConvert(System.Type)
extern void DateTimeConverter_CanConvert_m2471EAFE4C135623782C3DCB88CCE8AAF6E98345 (void);
// 0x00000174 System.Object Meta.WitAi.Json.DateTimeConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void DateTimeConverter_ReadJson_mF2651AABB883200C21ACF55EAAEB3DE70C9EC9AB (void);
// 0x00000175 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.DateTimeConverter::WriteJson(System.Object)
extern void DateTimeConverter_WriteJson_mDBF4583C997AEBEE56613AF52FA8542448B0441B (void);
// 0x00000176 System.Void Meta.WitAi.Json.DateTimeConverter::.ctor()
extern void DateTimeConverter__ctor_m413347426E3E5677D24ADA7A2F84A00BE655A12F (void);
// 0x00000177 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanRead()
// 0x00000178 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanWrite()
// 0x00000179 System.Boolean Meta.WitAi.Json.HashSetConverter`1::CanConvert(System.Type)
// 0x0000017A System.Object Meta.WitAi.Json.HashSetConverter`1::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
// 0x0000017B Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.HashSetConverter`1::WriteJson(System.Object)
// 0x0000017C System.Void Meta.WitAi.Json.HashSetConverter`1::.ctor()
// 0x0000017D System.Boolean Meta.WitAi.Json.IJsonDeserializer::DeserializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000017E System.Boolean Meta.WitAi.Json.IJsonSerializer::SerializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000017F Meta.WitAi.Json.JsonConverter[] Meta.WitAi.Json.JsonConvert::get_DefaultConverters()
extern void JsonConvert_get_DefaultConverters_m60514B76ADF93346EF58E3D0139911B1AFBB42E7 (void);
// 0x00000180 System.Object Meta.WitAi.Json.JsonConvert::EnsureExists(System.Type,System.Object)
extern void JsonConvert_EnsureExists_m12AA98E9304ABA40F78696864301FDC12FF8A94B (void);
// 0x00000181 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::DeserializeToken(System.String)
extern void JsonConvert_DeserializeToken_m68F3C84F367812773DEB2C38F2FB8AB9819576F4 (void);
// 0x00000182 System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(System.String,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000183 System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(Meta.WitAi.Json.WitResponseNode,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000184 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000185 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000186 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000187 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000188 System.Object Meta.WitAi.Json.JsonConvert::DeserializeToken(System.Type,System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeToken_m03180FE03E68340492134A5FF8CEFC83ACF9CF8D (void);
// 0x00000189 System.Object Meta.WitAi.Json.JsonConvert::DeserializeEnum(System.Type,System.Object,System.String,System.Text.StringBuilder)
extern void JsonConvert_DeserializeEnum_mF7363B485F6AD293031F6A009B49029AD1BE9A3F (void);
// 0x0000018A ITEM_TYPE[] Meta.WitAi.Json.JsonConvert::DeserializeArray(System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
// 0x0000018B System.Object Meta.WitAi.Json.JsonConvert::DeserializeClass(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeClass_m0A787B2342405EB860A311B8CAF4E716DE6C3E52 (void);
// 0x0000018C System.Object Meta.WitAi.Json.JsonConvert::DeserializeDictionary(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeDictionary_m76AC67007F704D368F10238979406BED25C57D57 (void);
// 0x0000018D System.String Meta.WitAi.Json.JsonConvert::SerializeObject(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000018E Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000018F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(System.Type,System.Object,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeToken_m9368B3EC22603FDA9BF438076246C0C5D53545C3 (void);
// 0x00000190 System.Void Meta.WitAi.Json.JsonConvert::SerializeProperty(Meta.WitAi.Json.WitResponseClass,System.Type,System.String,System.Object,Meta.WitAi.Json.JsonPropertyAttribute[],System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeProperty_mD67BD4CC6EC3F70835A2C7C90749316BC840A7E7 (void);
// 0x00000191 System.Void Meta.WitAi.Json.JsonConvert::.cctor()
extern void JsonConvert__cctor_mFCB3CE46FB63F79312DA5E639AECC9DB12DCF828 (void);
// 0x00000192 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::.ctor()
// 0x00000193 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__0()
// 0x00000194 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000195 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::.ctor()
// 0x00000196 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__0()
// 0x00000197 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000198 System.Void Meta.WitAi.Json.JsonConvert/<>c::.cctor()
extern void U3CU3Ec__cctor_m2D355A7C6127E529D68FB6618A52BFF335E99E02 (void);
// 0x00000199 System.Void Meta.WitAi.Json.JsonConvert/<>c::.ctor()
extern void U3CU3Ec__ctor_m285FDCD377ABC1876F3F3B09040DB217D25C881C (void);
// 0x0000019A System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeEnum>b__14_0(System.Reflection.MethodInfo)
extern void U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m6F93C74F8BB2AFFA9A90D49263E018327C1B0A82 (void);
// 0x0000019B System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_0(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_0_m13D8BC90411CD6B073BB30053C4FEB29634D40AA (void);
// 0x0000019C System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_1(System.Reflection.PropertyInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_1_m25E49BBE6D72E8820C450F945A8034E299BDB334 (void);
// 0x0000019D System.Boolean Meta.WitAi.Json.JsonConverter::get_CanRead()
extern void JsonConverter_get_CanRead_m93664A79C426240476800EBDEED69DC2852EDD09 (void);
// 0x0000019E System.Boolean Meta.WitAi.Json.JsonConverter::get_CanWrite()
extern void JsonConverter_get_CanWrite_m3A7E81DC0EFB64913C4DC0E9836763FF34858733 (void);
// 0x0000019F System.Boolean Meta.WitAi.Json.JsonConverter::CanConvert(System.Type)
// 0x000001A0 System.Object Meta.WitAi.Json.JsonConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void JsonConverter_ReadJson_m7BA3538CF9984D2FAC74AFE2E822916FA232765E (void);
// 0x000001A1 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConverter::WriteJson(System.Object)
extern void JsonConverter_WriteJson_m556041329A1E1C6A9F411272EF5D945C5CC0A2B3 (void);
// 0x000001A2 System.Void Meta.WitAi.Json.JsonConverter::.ctor()
extern void JsonConverter__ctor_m5C27A94A949BCBBB92FACA659B7C4AD196F638F3 (void);
// 0x000001A3 System.Void Meta.WitAi.Json.JsonIgnoreAttribute::.ctor()
extern void JsonIgnoreAttribute__ctor_m81C52081DED21B8F7F33437053EFC60B4214B4E4 (void);
// 0x000001A4 System.String Meta.WitAi.Json.JsonPropertyAttribute::get_PropertyName()
extern void JsonPropertyAttribute_get_PropertyName_m555B9BE2AE2590F790088F079C6FD10B05F76687 (void);
// 0x000001A5 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_PropertyName(System.String)
extern void JsonPropertyAttribute_set_PropertyName_mDA3C637C31583CCFF3B30ED5CBEA5440D4A868CF (void);
// 0x000001A6 System.Object Meta.WitAi.Json.JsonPropertyAttribute::get_DefaultValue()
extern void JsonPropertyAttribute_get_DefaultValue_m8A1EE7899FF2A84A28C33F663F3F588B16ECAA85 (void);
// 0x000001A7 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_DefaultValue(System.Object)
extern void JsonPropertyAttribute_set_DefaultValue_m760114BC45EFDDF2A0708212E0DD05EFB09A4899 (void);
// 0x000001A8 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String)
extern void JsonPropertyAttribute__ctor_m3CBDD233210116A482C0415F3EA0F1CC3E84FC38 (void);
// 0x000001A9 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String,System.Object)
extern void JsonPropertyAttribute__ctor_mA72D488F6606129E3A3109F4C3C366FDB32E7F7B (void);
// 0x000001AA Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseJson::Parse(System.String)
extern void WitResponseJson_Parse_m14F74DC3E4D337E0F3E3423C8F9DCCD31D101790 (void);
// 0x000001AB System.Void Meta.WitAi.Json.WitResponseNode::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_mE5B65782DAFB86A9BBFBB1ABAF8A45DB304787CF (void);
// 0x000001AC Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32)
extern void WitResponseNode_get_Item_mBBEA092DD89AE16E199E5B01444290A70505653C (void);
// 0x000001AD System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_m4F02A3EBDA4F0265213202B1D6F0EF8BD565C94D (void);
// 0x000001AE Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String)
extern void WitResponseNode_get_Item_mF7F56C8BC956E17B2440F7DB2C3BD8C565F9FA86 (void);
// 0x000001AF System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_m8905F79079786F8A0CD3BF8A618757EE0C4D0964 (void);
// 0x000001B0 System.String Meta.WitAi.Json.WitResponseNode::get_Value()
extern void WitResponseNode_get_Value_m49EACCB04D37ECF03534108A0C561A02FE16D0E3 (void);
// 0x000001B1 System.Void Meta.WitAi.Json.WitResponseNode::set_Value(System.String)
extern void WitResponseNode_set_Value_m4B238B58BD32AA164C8AE67F7DCC5264045F0C10 (void);
// 0x000001B2 System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count()
extern void WitResponseNode_get_Count_m05F1CBAED68C1B38E8C2F6EE4E7AF50303E68CDB (void);
// 0x000001B3 System.Void Meta.WitAi.Json.WitResponseNode::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_m2028E030EEBCFC8BAB09AADE6CF8FC980F8852B4 (void);
// 0x000001B4 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.String)
extern void WitResponseNode_Remove_mBBF8C101E987525AF69F94743CAB64D43A084448 (void);
// 0x000001B5 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.Int32)
extern void WitResponseNode_Remove_m878EFA74DCFD0A72ABC8087350DD06752687086D (void);
// 0x000001B6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Remove_m919250100021CEC4C04293516EACC7845DFD63F2 (void);
// 0x000001B7 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_Childs()
extern void WitResponseNode_get_Childs_mF03238E69B6028364C78CF995161CFF7619E5621 (void);
// 0x000001B8 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_DeepChilds()
extern void WitResponseNode_get_DeepChilds_m3DB0998216597B0A50956507F698CF098CDD7F6D (void);
// 0x000001B9 System.String Meta.WitAi.Json.WitResponseNode::ToString()
extern void WitResponseNode_ToString_mF1033AA40A6BC1D9C9F96757AF49F26919F6D033 (void);
// 0x000001BA System.String Meta.WitAi.Json.WitResponseNode::ToString(System.String)
extern void WitResponseNode_ToString_m2BF5CABA8121EB4AA4C7111970BEAEFD781DEF6B (void);
// 0x000001BB System.Int32 Meta.WitAi.Json.WitResponseNode::get_AsInt()
extern void WitResponseNode_get_AsInt_m4A5BD5816B7E14B6AE67DFC82C23EAAF3670A529 (void);
// 0x000001BC System.Void Meta.WitAi.Json.WitResponseNode::set_AsInt(System.Int32)
extern void WitResponseNode_set_AsInt_m157687B6A0F8C03F33652BFB1A888E1EE13DBDEC (void);
// 0x000001BD System.Single Meta.WitAi.Json.WitResponseNode::get_AsFloat()
extern void WitResponseNode_get_AsFloat_mAAA6A295B4E0204F9D262A98C59130A0413B8547 (void);
// 0x000001BE System.Void Meta.WitAi.Json.WitResponseNode::set_AsFloat(System.Single)
extern void WitResponseNode_set_AsFloat_m6E87C78A2D80D170B9EDD72A06124E5F916E23F9 (void);
// 0x000001BF System.Double Meta.WitAi.Json.WitResponseNode::get_AsDouble()
extern void WitResponseNode_get_AsDouble_m14EC56C4C2D805E2F36D8C233C8AEB01AF03E52D (void);
// 0x000001C0 System.Void Meta.WitAi.Json.WitResponseNode::set_AsDouble(System.Double)
extern void WitResponseNode_set_AsDouble_m4138DD2589FE693E306EE77E0EEA9FADE6733266 (void);
// 0x000001C1 System.Boolean Meta.WitAi.Json.WitResponseNode::get_AsBool()
extern void WitResponseNode_get_AsBool_mBBE5BBA758E7F62EC106610C5BAB0347946B5BEF (void);
// 0x000001C2 System.Void Meta.WitAi.Json.WitResponseNode::set_AsBool(System.Boolean)
extern void WitResponseNode_set_AsBool_mB9F8E0662F67029D34F9CB9503E1FE01A575F346 (void);
// 0x000001C3 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseNode::get_AsArray()
extern void WitResponseNode_get_AsArray_m0750700B5D08F72331CFDE3F9113FE71D93A535B (void);
// 0x000001C4 System.String[] Meta.WitAi.Json.WitResponseNode::get_AsStringArray()
extern void WitResponseNode_get_AsStringArray_mE9B42A74B089857A2152B21B54DDEFC43D593064 (void);
// 0x000001C5 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseNode::get_AsObject()
extern void WitResponseNode_get_AsObject_m201FD13B32347F510B9E0586AE6E0118DADBB64D (void);
// 0x000001C6 T Meta.WitAi.Json.WitResponseNode::Cast(T)
// 0x000001C7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::op_Implicit(System.String)
extern void WitResponseNode_op_Implicit_mDDB5B103BA69F0E91DA0EBD7178545C7BFCCB536 (void);
// 0x000001C8 System.String Meta.WitAi.Json.WitResponseNode::op_Implicit(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_op_Implicit_mF9B60B90779F81933B04099F31D149366542011D (void);
// 0x000001C9 System.Boolean Meta.WitAi.Json.WitResponseNode::op_Equality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Equality_m8F5A9BB7AC703F2ED0B87386B4C50CB7A8BE9609 (void);
// 0x000001CA System.Boolean Meta.WitAi.Json.WitResponseNode::op_Inequality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Inequality_m0D737565985FFBB61652B34649F2EE312136E487 (void);
// 0x000001CB System.Boolean Meta.WitAi.Json.WitResponseNode::Equals(System.Object)
extern void WitResponseNode_Equals_mA865FE0335741B68F8882B67337434243EBA900A (void);
// 0x000001CC System.Int32 Meta.WitAi.Json.WitResponseNode::GetHashCode()
extern void WitResponseNode_GetHashCode_m657429A2D5D30C8BB8C39E8D645580787FDC16B8 (void);
// 0x000001CD System.String Meta.WitAi.Json.WitResponseNode::Escape(System.String)
extern void WitResponseNode_Escape_mF2C1F1D7A4526C1ECD2EC90CA5A53493BA1389C8 (void);
// 0x000001CE Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Parse(System.String)
extern void WitResponseNode_Parse_m6366F3E270DE18F43FE819DD23B61954B835E34F (void);
// 0x000001CF System.Void Meta.WitAi.Json.WitResponseNode::Serialize(System.IO.BinaryWriter)
extern void WitResponseNode_Serialize_m73B1C540E1C90138E1992968C78BE112420A5047 (void);
// 0x000001D0 System.Void Meta.WitAi.Json.WitResponseNode::SaveToStream(System.IO.Stream)
extern void WitResponseNode_SaveToStream_mA1CF17D09D7482398A623EF73331B2B3CFDC4AF7 (void);
// 0x000001D1 System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedStream(System.IO.Stream)
extern void WitResponseNode_SaveToCompressedStream_m40694A840C988351B5F36B4CDEE52D9B58DD87EF (void);
// 0x000001D2 System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedFile(System.String)
extern void WitResponseNode_SaveToCompressedFile_m2484433F3FFD7C9ACC24C587341C0D645F934252 (void);
// 0x000001D3 System.String Meta.WitAi.Json.WitResponseNode::SaveToCompressedBase64()
extern void WitResponseNode_SaveToCompressedBase64_mD0E10F8225464E299DA59382534745BB59DBC400 (void);
// 0x000001D4 System.Void Meta.WitAi.Json.WitResponseNode::SaveToFile(System.String)
extern void WitResponseNode_SaveToFile_m29A6F8B38B976FFF76226E231A02DD6DA9261CD0 (void);
// 0x000001D5 System.String Meta.WitAi.Json.WitResponseNode::SaveToBase64()
extern void WitResponseNode_SaveToBase64_mF58C61481188C352158103801F7AE87C5790D913 (void);
// 0x000001D6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Deserialize(System.IO.BinaryReader)
extern void WitResponseNode_Deserialize_mA3A7083C66AA20008637F8B580BBA8A6E75349A9 (void);
// 0x000001D7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedFile(System.String)
extern void WitResponseNode_LoadFromCompressedFile_m278A37A9A85D055A9D69CB88FB46EC42503EBE48 (void);
// 0x000001D8 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedStream(System.IO.Stream)
extern void WitResponseNode_LoadFromCompressedStream_m52DFA435C08FF3B904094B1B4AD3C4CF17B2B35B (void);
// 0x000001D9 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedBase64(System.String)
extern void WitResponseNode_LoadFromCompressedBase64_mCEBD096CFC41EA68C5239F4E4426357F6017E3D1 (void);
// 0x000001DA Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromStream(System.IO.Stream)
extern void WitResponseNode_LoadFromStream_m2A113D4340260B9AE153B737C9358CC0825F83D3 (void);
// 0x000001DB Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromFile(System.String)
extern void WitResponseNode_LoadFromFile_m899ECB57250F0B9BEFCF766134521A5FAE853586 (void);
// 0x000001DC Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromBase64(System.String)
extern void WitResponseNode_LoadFromBase64_m31CFBB09C506885766CCDB295A0663E619E57E36 (void);
// 0x000001DD System.Void Meta.WitAi.Json.WitResponseNode::.ctor()
extern void WitResponseNode__ctor_m280C179F044F3E870680B272C8AD383636E3F612 (void);
// 0x000001DE System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m14477C7210F503D869AC71FDEBF4A8F00BB273D9 (void);
// 0x000001DF System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_mBFB4B9A452426FC3698D2D4A22D5F84C6E02DA51 (void);
// 0x000001E0 System.Boolean Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m95DF101B91EA196079479D19CC9A9744635B429B (void);
// 0x000001E1 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mE4A168B5BB8B03F3237870B83AE34C8ABDBF7117 (void);
// 0x000001E2 System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mF05AE72F21FCD48E2D4EF684A19B57B626223D9E (void);
// 0x000001E3 System.Object Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCC267D069552F0FEF0BE7340EB097080DD8898EA (void);
// 0x000001E4 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m6DD329953A8238CC35E4662748E26402994966E9 (void);
// 0x000001E5 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m12E7617E3200286A15D6664142FE6EDE46D7AAD9 (void);
// 0x000001E6 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
extern void U3Cget_DeepChildsU3Ed__19__ctor_m86ADB4E4429CC808EE989B98DECAF42FF1111249 (void);
// 0x000001E7 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
extern void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mF6A5ED40EC12E627A9F7BCCF32FB01BB8872492B (void);
// 0x000001E8 System.Boolean Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::MoveNext()
extern void U3Cget_DeepChildsU3Ed__19_MoveNext_m4795DFC196DBC20146C6DE3C4AC364C7F124E9BD (void);
// 0x000001E9 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mB48ADD9B66D3427D49C69FEBE6DDA3F4A9A4FC55 (void);
// 0x000001EA System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA53B569706361AE6001DB51CC888EC1D991E499A (void);
// 0x000001EB Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m2F9FF505BDC3B9CEB8E5E5D93F0AA335F6206C6B (void);
// 0x000001EC System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m8BB321A1F4A2FD487D117281406F59F4CD8F6086 (void);
// 0x000001ED System.Object Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m47270A08451D6A76D3754A16BF5B655F2D8756E1 (void);
// 0x000001EE System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mF2C71319DF5BAFBE41BF8EFEEEE54745E6B6C40D (void);
// 0x000001EF System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m96D92CAF4535D8A51F57E5FB945F7E3A07677729 (void);
// 0x000001F0 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.Int32)
extern void WitResponseArray_get_Item_mCF7736F0963B8AD1A573C632C08968E128E423DB (void);
// 0x000001F1 System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_mEB3B369D18AF122A8F7F8D331F064F752E30B767 (void);
// 0x000001F2 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.String)
extern void WitResponseArray_get_Item_m5450B37FAB628F82C60F6A4580F2619DEA59E3E1 (void);
// 0x000001F3 System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_m68B321F03B2C01991917243E71AC1842BA2B21DE (void);
// 0x000001F4 System.Int32 Meta.WitAi.Json.WitResponseArray::get_Count()
extern void WitResponseArray_get_Count_mAEB92CE98B7ED014F2B580C99416AB5950A9A9FD (void);
// 0x000001F5 System.Void Meta.WitAi.Json.WitResponseArray::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Add_mDE63C5804BF1F0F0AF3A1A818934157BC1F80052 (void);
// 0x000001F6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(System.Int32)
extern void WitResponseArray_Remove_m9CD86D1DC344A0A41B5EFA5669055630C4689EFA (void);
// 0x000001F7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Remove_m6CA6956ACA3576F8081A9EF7BA6092069476C5FE (void);
// 0x000001F8 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray::get_Childs()
extern void WitResponseArray_get_Childs_mC1825219737DB390933D23DF57387585B2C37CF6 (void);
// 0x000001F9 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray::GetEnumerator()
extern void WitResponseArray_GetEnumerator_m247D19E59C15E67099FB3F6EF2D810F1A0DB662D (void);
// 0x000001FA System.String Meta.WitAi.Json.WitResponseArray::ToString()
extern void WitResponseArray_ToString_m855B5B17CFCEDB9E7275206CD3B5790C35700292 (void);
// 0x000001FB System.String Meta.WitAi.Json.WitResponseArray::ToString(System.String)
extern void WitResponseArray_ToString_m5707964C5BC2F8E112DF99546AF916311F02A312 (void);
// 0x000001FC System.Void Meta.WitAi.Json.WitResponseArray::Serialize(System.IO.BinaryWriter)
extern void WitResponseArray_Serialize_mF85D85FEB6A4C237C7A72F8308B0F81CFC88A9A4 (void);
// 0x000001FD System.Void Meta.WitAi.Json.WitResponseArray::.ctor()
extern void WitResponseArray__ctor_m0F777645965007FE324AF2F20458FC71091B19C3 (void);
// 0x000001FE System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__13__ctor_m7373F62ED897309A0F958F491EA67759D997DF49 (void);
// 0x000001FF System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m53AD080E999E995148BCE73FDF471207C381469D (void);
// 0x00000200 System.Boolean Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::MoveNext()
extern void U3Cget_ChildsU3Ed__13_MoveNext_mDEA22C8C8DC85784A31CD6631DDA96F64D8E6FA6 (void);
// 0x00000201 System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m2AEAAA9810CEA55FFC9C7320938473AEEB3854F6 (void);
// 0x00000202 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mE24FDFE04E32A62E0A0694226DCA6B3B0EDDAA6E (void);
// 0x00000203 System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m8249D976E9F652DD10A3CA750C0E2C511B7759EA (void);
// 0x00000204 System.Object Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_mBFC2B345A8D3FC7D0EACE8A43C038B8B7F544061 (void);
// 0x00000205 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mF045758BF8A9A4CC71858F0DA37335307BD43024 (void);
// 0x00000206 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_mF832704F429B84D0BB42FAACACAB8FB85364EDDB (void);
// 0x00000207 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_mEE1CD2BE4BF3414F1A14517556267C29E1EA3742 (void);
// 0x00000208 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m58E7790519A48C0C0A40CBF34ACB0C9B8271A873 (void);
// 0x00000209 System.Boolean Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_mEB8DC04090CADCDC87F70518AE5AC692B71F1992 (void);
// 0x0000020A System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m143103CCA101F5BB88CA8718AF0F976E3D7A6E0E (void);
// 0x0000020B System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C8548F38A4400299ED032C9DF67895886AED505 (void);
// 0x0000020C System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m1BCE3138D1D9B925014074E0875BB1943431A908 (void);
// 0x0000020D System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m1FEB39E4535855DBAD6651D4F3F90AF0C0B8A97F (void);
// 0x0000020E System.String[] Meta.WitAi.Json.WitResponseClass::get_ChildNodeNames()
extern void WitResponseClass_get_ChildNodeNames_m123366A6F87DD752F7E70204CEE82F61D16C5950 (void);
// 0x0000020F System.Boolean Meta.WitAi.Json.WitResponseClass::HasChild(System.String)
extern void WitResponseClass_HasChild_m159090C52942829D48062D1AEFA00CE4AFE513C3 (void);
// 0x00000210 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.String)
extern void WitResponseClass_get_Item_m5F2F74AC8828655D3AB3F072131AE1148A5B5637 (void);
// 0x00000211 System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_mB2A489861DDB2E8BDF7319BDDDFAD7B40713300B (void);
// 0x00000212 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.Int32)
extern void WitResponseClass_get_Item_m3CD2D1D2A00E876FE0336A75745C18D00BCEC55D (void);
// 0x00000213 System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_m1723BB8802D2CA18D3E232F9218E7FDC2D0D173F (void);
// 0x00000214 System.Int32 Meta.WitAi.Json.WitResponseClass::get_Count()
extern void WitResponseClass_get_Count_m80559856EA5C1C73F0B52972D47590ECDF6F1D18 (void);
// 0x00000215 System.Void Meta.WitAi.Json.WitResponseClass::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Add_m6A00E3A8F9D726064370AE99DD864007535151D9 (void);
// 0x00000216 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.String)
extern void WitResponseClass_Remove_mFCA0CBD075D3127A178CEE6E7FE7F11C6D4F882D (void);
// 0x00000217 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.Int32)
extern void WitResponseClass_Remove_m776468F5BD943D33E173D8FB6DDAF420AFF5CD4E (void);
// 0x00000218 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Remove_mB005F404984496A91C0FF510FBA6FF05B6A01EFB (void);
// 0x00000219 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::get_Childs()
extern void WitResponseClass_get_Childs_m889C90A509A95E8E2E2D82E6B188857F901F5285 (void);
// 0x0000021A System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass::GetEnumerator()
extern void WitResponseClass_GetEnumerator_m02BA5F72FACB665D80AF8E37AF0F217E83E6B97B (void);
// 0x0000021B T Meta.WitAi.Json.WitResponseClass::GetChild(System.String,T)
// 0x0000021C System.String Meta.WitAi.Json.WitResponseClass::ToString()
extern void WitResponseClass_ToString_m0ACA1E73C06949F23EC75BEF98D42A4CB9CEAB85 (void);
// 0x0000021D System.String Meta.WitAi.Json.WitResponseClass::ToString(System.String)
extern void WitResponseClass_ToString_mCC9A2431036517CEB2079F3297F35ED18809F871 (void);
// 0x0000021E System.Void Meta.WitAi.Json.WitResponseClass::Serialize(System.IO.BinaryWriter)
extern void WitResponseClass_Serialize_m1A5A8A284B57B9133B2375A127F83E7053D505F8 (void);
// 0x0000021F System.Void Meta.WitAi.Json.WitResponseClass::.ctor()
extern void WitResponseClass__ctor_mFE934954290C9C0E103F8E0CD7211B8BF9F98710 (void);
// 0x00000220 System.Void Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m3D3161FA2467D6E8B7DB93047F66C26AA2071CBB (void);
// 0x00000221 System.Boolean Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Meta.WitAi.Json.WitResponseNode>)
extern void U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_m7FCB13BA1C2B6313C337835CBCB1F3010B348938 (void);
// 0x00000222 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m878CA8A4479B22DA91DF27555BF6A12CC4EAB8A0 (void);
// 0x00000223 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m2205FD0282D9FC0312E66AE53A0920C422E70851 (void);
// 0x00000224 System.Boolean Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m2AFEF93D5DE44F4F77179976E986142A54409E8A (void);
// 0x00000225 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m90C423044FB2219DCC224DE783CBD3340C1319FF (void);
// 0x00000226 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m357D92B0A957556A640FE5978643C08A6E18B953 (void);
// 0x00000227 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m9BEA107EBA93D4BD6D400662610414E801040FF0 (void);
// 0x00000228 System.Object Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m5E3376268132BE0A11F4A7FE28BF361791923F82 (void);
// 0x00000229 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mD2D6FCCA34A17D62759A0997BC4C33AF95ACE934 (void);
// 0x0000022A System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m4B0C8C2A94AA6470BBF600D2C83B8292970F2DAE (void);
// 0x0000022B System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__18__ctor_mD16727AE6DF9B8076A0CA18144DD9FD0CEC56109 (void);
// 0x0000022C System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m70CE4908B6281B00CA1068DF1D82D976CEF65469 (void);
// 0x0000022D System.Boolean Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::MoveNext()
extern void U3CGetEnumeratorU3Ed__18_MoveNext_m6A621EA8FCA8F494E527BC589C08B3CF7EE16235 (void);
// 0x0000022E System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m39082BEB1D58A20BEB3A7237BB63ED1A9CC5F130 (void);
// 0x0000022F System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE43AD1AB88314EF69BBDF3FD450D4B9A03B9700 (void);
// 0x00000230 System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m3C26481E1563ED4E7BC690923EDF8BCA0BA09D17 (void);
// 0x00000231 System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m3328622013C4F081987D46EB9AB3E88191525A69 (void);
// 0x00000232 System.String Meta.WitAi.Json.WitResponseData::get_Value()
extern void WitResponseData_get_Value_mD89927766F0C3DF6D599D5462A7DCD399AB0442D (void);
// 0x00000233 System.Void Meta.WitAi.Json.WitResponseData::set_Value(System.String)
extern void WitResponseData_set_Value_mD8FA535750733317F4293AE54673C67DFB67BB68 (void);
// 0x00000234 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.String)
extern void WitResponseData__ctor_mBEE36DFD5553A75A4996DF20136993FF14D57C9A (void);
// 0x00000235 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Single)
extern void WitResponseData__ctor_m179696345C89652302B72964C1A667482D4D5624 (void);
// 0x00000236 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Double)
extern void WitResponseData__ctor_mE0A8D68001CA2A44F1C1C2E33E697394121D3AFA (void);
// 0x00000237 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Boolean)
extern void WitResponseData__ctor_m03CBFCBD570E28EDEC6E199A36B8C1282BE4A4E1 (void);
// 0x00000238 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Int32)
extern void WitResponseData__ctor_m36C8C908615663F6457BA80F5ABE715FABC920F5 (void);
// 0x00000239 System.String Meta.WitAi.Json.WitResponseData::ToString()
extern void WitResponseData_ToString_mB79A0EAE522D5F35EFDDE216C3683B0A4FBFEA74 (void);
// 0x0000023A System.String Meta.WitAi.Json.WitResponseData::ToString(System.String)
extern void WitResponseData_ToString_mA8A8FECD14EF8C39F5D925E05CAC4392EC3EC0EF (void);
// 0x0000023B System.Void Meta.WitAi.Json.WitResponseData::Serialize(System.IO.BinaryWriter)
extern void WitResponseData_Serialize_mED194E7AC3717F304EE49BB916F6B8B206C7E18F (void);
// 0x0000023C System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator__ctor_m6133CD129C1371BA924717353073F15322ABA923 (void);
// 0x0000023D System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode,System.String)
extern void WitResponseLazyCreator__ctor_mEF50A8FAB262787992626EFE1D0E1EE3939DDDAD (void);
// 0x0000023E System.Void Meta.WitAi.Json.WitResponseLazyCreator::Set(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Set_m7200DE5A782FE5B79AD704236F26F398A475584A (void);
// 0x0000023F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.Int32)
extern void WitResponseLazyCreator_get_Item_m2663A06F607F95DA39988E51492B0AE99AB2E485 (void);
// 0x00000240 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_mADDDBD1527CAD780F4A06B84D50C9440E252762B (void);
// 0x00000241 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.String)
extern void WitResponseLazyCreator_get_Item_mE38BC23D3F0E4C38340A1B1461E3407ADDAC376B (void);
// 0x00000242 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_mC983438BAC64DC625656CE080BF484850E98A81D (void);
// 0x00000243 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_mD7FD6E50E197C3589704CE84DC3112095AC84969 (void);
// 0x00000244 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_mBBD1A622EDB245764889AAAD22953E00FA8199FF (void);
// 0x00000245 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Equality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Equality_mFD5683B30108980BB0F2AFF65A239DE77208164A (void);
// 0x00000246 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Inequality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Inequality_mF2D00E0EF99601243505C2E4F41714A288469024 (void);
// 0x00000247 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::Equals(System.Object)
extern void WitResponseLazyCreator_Equals_m665405E84DE2D10F137FD93671D3653CE09843E4 (void);
// 0x00000248 System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::GetHashCode()
extern void WitResponseLazyCreator_GetHashCode_m881426AB82890C10136FDB4C644EE017A4298312 (void);
// 0x00000249 System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString()
extern void WitResponseLazyCreator_ToString_mCB7F178FC22E39FFAC425FE17F4233E47DFDF5EC (void);
// 0x0000024A System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString(System.String)
extern void WitResponseLazyCreator_ToString_mED734E4D60AB1963899D46CB86CBB2A834D0D176 (void);
// 0x0000024B System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::get_AsInt()
extern void WitResponseLazyCreator_get_AsInt_mF941C07CFF705D94F173FEC9B31AAED0537D5555 (void);
// 0x0000024C System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsInt(System.Int32)
extern void WitResponseLazyCreator_set_AsInt_mBD601EAE189182AD17AF2B1EFB8F9BC717257BC1 (void);
// 0x0000024D System.Single Meta.WitAi.Json.WitResponseLazyCreator::get_AsFloat()
extern void WitResponseLazyCreator_get_AsFloat_m50974844B2E0706289ABB0E562F0332DDC20DA1F (void);
// 0x0000024E System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsFloat(System.Single)
extern void WitResponseLazyCreator_set_AsFloat_m25920E9C5787FB7F851076CEFAF6BA0F491F8B31 (void);
// 0x0000024F System.Double Meta.WitAi.Json.WitResponseLazyCreator::get_AsDouble()
extern void WitResponseLazyCreator_get_AsDouble_m4813784247A027827BCCC4511A5340704DA428E8 (void);
// 0x00000250 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsDouble(System.Double)
extern void WitResponseLazyCreator_set_AsDouble_mB7420BE31F20A624470766AFA141950DE6058F96 (void);
// 0x00000251 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::get_AsBool()
extern void WitResponseLazyCreator_get_AsBool_mEF5CBE5157D3819752DC5CD1C5ACB0B365EC2C1C (void);
// 0x00000252 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsBool(System.Boolean)
extern void WitResponseLazyCreator_set_AsBool_m2CEB5C508829679A9C194D03F81C9A91499E3E62 (void);
// 0x00000253 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseLazyCreator::get_AsArray()
extern void WitResponseLazyCreator_get_AsArray_m2B760BD8F7D729C1722B87ECEDF953645B9DC6E5 (void);
// 0x00000254 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseLazyCreator::get_AsObject()
extern void WitResponseLazyCreator_get_AsObject_mFD5144AE687886DBA4444AE9E66CB32E3713C605 (void);
// 0x00000255 System.Void Meta.WitAi.Json.JSONParseException::.ctor(System.String)
extern void JSONParseException__ctor_mC8A01C21DBF7A0F398F0D7910117968FB879EA77 (void);
// 0x00000256 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(System.Object)
extern void WitEntityInfo_Equals_mA1FF208693482947DAAAF59C97EDC6EB7EBED99F (void);
// 0x00000257 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(Meta.WitAi.Data.Info.WitEntityInfo)
extern void WitEntityInfo_Equals_m8BE4B7D6D3C2A77083D4C1798F34789AB8DD3BA2 (void);
// 0x00000258 System.Int32 Meta.WitAi.Data.Info.WitEntityInfo::GetHashCode()
extern void WitEntityInfo_GetHashCode_mA8E2192E37F16DCBFB699D389CE23737C5910E20 (void);
// 0x00000259 System.Void Meta.WitAi.Data.Info.WitEntityKeywordInfo::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern void WitEntityKeywordInfo__ctor_m6669278091E4ED58AC70A0D14D056D3EE9964265 (void);
// 0x0000025A System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(System.Object)
extern void WitEntityKeywordInfo_Equals_mC883C6F7911AF46C951DD5DE9C95C3740EABC908 (void);
// 0x0000025B System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(Meta.WitAi.Data.Info.WitEntityKeywordInfo)
extern void WitEntityKeywordInfo_Equals_m025EA11D661BB006AAC77C9566CE2945558C08FC (void);
// 0x0000025C System.Int32 Meta.WitAi.Data.Info.WitEntityKeywordInfo::GetHashCode()
extern void WitEntityKeywordInfo_GetHashCode_m3E367DAA30F341FFE445007E891ECE87A9927D48 (void);
// 0x0000025D System.Void Meta.WitAi.Data.Info.WitTraitInfo::.ctor()
extern void WitTraitInfo__ctor_m5536BCE584630B87ED925A0B254250D54C51FAE4 (void);
static Il2CppMethodPointer s_methodPointers[605] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NLPRequestResponseEvent__ctor_mA6F0E55E6BFF432E1B231A85C53D2D94473106BD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TranscriptionRequestEvent__ctor_m09CF8691254B2858AAEA86DB4E55F29C9369FC4B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ComponentExtensions_IsObsolete_m6E25FCB40C8EC2A15E5F8A001B969A0B7AB484D1,
	NULL,
	ComponentExtensions__cctor_mF4A72E2494ACFCF792779350185D54C6EA814009,
	CoroutineUtility_StartCoroutine_m95B3AB539C8070AEC773044E496B960B99B11581,
	CoroutineUtility_GetPerformer_m17B95AE9B95B5ECDB203A3B51483963E363CE9AE,
	CoroutinePerformer_get_IsRunning_m51CA799E88A0F2AE64D9B1957D66088F7E2DA276,
	CoroutinePerformer_set_IsRunning_m89265C3CD5F653D4A814DDC77B9B57197A183A13,
	CoroutinePerformer_Awake_m1EB4237ABDCBFA38F752802B9967EE0561317F7B,
	CoroutinePerformer_CoroutineBegin_mFFE1D09BF82755CCF8B423ED36C6F0F0134B582E,
	CoroutinePerformer_CoroutineIterateEnumerator_m0016E8BB846582402945E6F6FF7E4DF123B1BD53,
	CoroutinePerformer_Update_m40484607CE4E969EE64EF32137D015F1E0C8564E,
	CoroutinePerformer_CoroutineIterateUpdate_m87DFD7D653EADCE550CAF746A97063FD1DAA89A6,
	CoroutinePerformer_MoveNext_m8BFE01181F43AB0B6C2AF7589D15E111AB560096,
	CoroutinePerformer_OnDestroy_mF765316FC0B97441B30CF00CE2365C496BADFAF9,
	CoroutinePerformer_CoroutineCancel_m051105F4B6B79E92605DF13211FEADBE97FCEB37,
	CoroutinePerformer_CoroutineComplete_mC62A04595F9A19C0340B047DD657B735C8FA96D8,
	CoroutinePerformer_CoroutineUnload_mCBA177DC50152C51A8B3915A8996ED3D6BBE70CB,
	CoroutinePerformer__ctor_mE6B4A3F722F31684A62D8D408C6F7347B0D47457,
	U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m5DCCB712A6CE5FFFB27EF9DB847F594129D66ED3,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mAE604254076AC8D11B74C7F6552461BD1F4EC716,
	U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m9BA397F047925E51F2011CEC19B584A7EFF7D7E8,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m120AA28857BF642183D122F04B1B00668D2CC8E3,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mBB7ADFD9C96376F1C726C3F3FE8D092359EB3D01,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_mEB96F63742F421D93ABD64C630F4DD44E2047339,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnityObjectExtensions_DestroySafely_mA60559E7DDF90A6D39B0346A3AD70BA81E72FE6F,
	VLog_add_OnPreLog_m3B38A4E3DC8E0205B8B6E140471F58D7741409B3,
	VLog_remove_OnPreLog_m4A28A81C89372F689EC24612E1342694FC1330E3,
	VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C,
	VLog_D_mEA74212E8356B4FB90717629E435413F90A4E871,
	VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706,
	VLog_W_m088CDA60732A09ABC03F3A29A3DA486A2AD82FFE,
	VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09,
	VLog_E_m0B40A19A1CD5D28F205F547E632A7B393EC15B6A,
	VLog_Log_m68E128D0C57BDD8905760F2F40D37817E6DC978A,
	VLog_GetCallingCategory_m1F5DD11D7B3EBADFBE5A31E3000E7F86C3A8DD2F,
	VLog_WrapWithCallingLink_mF2B5E176F63AC9B9573A1035C97495E06F840B1C,
	VLog_WrapWithLogColor_mD0A5C2A7BBD6CC0D6C4B7662694011CA14F51B84,
	AudioStreamHandler_get_StreamData_m7D4028640B1E2DB1210B5D45CD3C97BF2F40D467,
	AudioStreamHandler_set_StreamData_m6FB626F436F87F45893BD820DB5F3B8FB93C8902,
	AudioStreamHandler_get_Clip_m1F1EE271EA135B4F1C110E8CE79E91B2496C47D9,
	AudioStreamHandler_set_Clip_m8B669A00EDF059F32E954EE70A03CB97564655D1,
	AudioStreamHandler_get_IsStreamReady_m48D1E8D812D9C021EC3C8221BDFE4F821A39F17E,
	AudioStreamHandler_set_IsStreamReady_mD1EA741A67C46AF756B7555D4947AF0BAC7DD11C,
	AudioStreamHandler_get_IsStreamComplete_m9DA0B1AB667159E4A6158735C4B7986671EE50C5,
	AudioStreamHandler_set_IsStreamComplete_mAE43D4712EEBF25F93251AFD40197DD2916B6E5B,
	AudioStreamHandler_add_OnClipUpdated_m4EDBE923C398E281C84854925E414ECC94A218DA,
	AudioStreamHandler_remove_OnClipUpdated_mD483F7AB375586B7E448B88A236FB53E44711C23,
	AudioStreamHandler_add_OnStreamComplete_mA84F8A99C1C80AB89C88958E1A4D9218E6056BB8,
	AudioStreamHandler_remove_OnStreamComplete_mC7FBF87F152BA23D1F8FF142A8C185BEF488B4F1,
	AudioStreamHandler__ctor_m2FFB83CD70702243F8EE03555CDE34A61645AA52,
	AudioStreamHandler_ReceiveContentLengthHeader_mC400055D4CBBE8E59E699F0AA33C9096CD777C4A,
	AudioStreamHandler_ReceiveData_m0F650B530F4205EBABAFEBBD95C91545B117E7B8,
	AudioStreamHandler_DecodeData_mEAB09ADE70AE3DC5371100A9F14E6458DD514308,
	AudioStreamHandler_OnDecodeComplete_mDC0588557AE6F951A3B02059BB83CF3A604C7285,
	AudioStreamHandler_CompleteContent_m67AF753DF31138BF003A963B5D9B894026CD9DAE,
	AudioStreamHandler_TryToFinalize_mCA1865BB8891BD785EE5E2CD22C41F7D3D1AD638,
	AudioStreamHandler_CleanUp_mE71E561C1755E82486235D6BDDE81C9E390CA3D0,
	AudioStreamHandler_GenerateClip_mD1E5E3EFA56E020B9F618D553983424D9760BC32,
	AudioStreamHandler_PreloadCachedClips_mEA07ECB74C49EF0835F092F9853F193CBB5996F9,
	AudioStreamHandler_GenerateCacheClip_mE77F311B0DFD73A058ACE399497D8A9A169840EB,
	AudioStreamHandler_GetCachedClip_mCD6167271060DFAC769BC0EA7382412DA638482A,
	AudioStreamHandler_DoesClipMatch_m93F1024BBB6D07E6A540BE9208682B9FE9AF5982,
	AudioStreamHandler_ReuseCachedClip_m8CFE6A6ED8811D4FADE80A0F3F8399B0F361D05F,
	AudioStreamHandler_DestroyCachedClips_m7FCDC9C0493E204B4F91B787B0A0818DE49ED057,
	AudioStreamHandler_DecodeAudio_m848EC3CA4A2C448917A8D6CE2FDEADF2AFE4863A,
	AudioStreamHandler_GetClipFromSamples_mCBC57F0C2CBDA535A4A29E1D2E92D4243A1739C2,
	AudioStreamHandler_GetClipFromRawData_m9DEB722F0D60D0F4FDEA97D94F740419D2DE353F,
	AudioStreamHandler_GetClipFromRawDataAsync_mD02A1B7261B8D12AFEDDAB65B7E1B543D913F16B,
	AudioStreamHandler_GetClipSamplesFromContentLength_mFE8E3D2084BC7646C4E2EC4658B1A43A15A571AB,
	AudioStreamHandler_DecodePCM16_m2CDCE4D102036F4C47B576DCA01F63FC3BD9DBB4,
	AudioStreamHandler_DecodeChunkPCM16_m45A9FA991099C306B71F8C6F102C24ED1BDB8CCD,
	AudioStreamHandler_DecodeSamplePCM16_m6479E3C920148F072D2CABA6E8F949E3CEA009CB,
	AudioStreamHandler__cctor_m605F379B468350E8DD79726C7AD6A28A8C196711,
	AudioStreamClipUpdateDelegate__ctor_m54A4DA013F22D78FF97807203D45A0AAC0EC4999,
	AudioStreamClipUpdateDelegate_Invoke_mD13429AFC74A3C2E7B4432ABF0EC4A62E0524C6B,
	AudioStreamClipUpdateDelegate_BeginInvoke_mAF3469599274E6F0F9DED39E1DB30E8FFEA2FEA7,
	AudioStreamClipUpdateDelegate_EndInvoke_mE53205B980E551AF26582735CE58F5752C6F8B6D,
	U3CU3Ec__DisplayClass31_0__ctor_mF3CBBF6BEE2594C8E1C959B4727CE24A7A6559BC,
	U3CU3Ec__DisplayClass31_0_U3CReceiveDataU3Eb__0_m4751229A8DCB7B36F1B783BEC9F52649D16A7C15,
	U3CU3Ec__DisplayClass42_0__ctor_m65D434152B88830A9E11406B3AC35469B5AB1F93,
	U3CU3Ec__DisplayClass42_0_U3CGetCachedClipU3Eb__0_mD6904FBADF89DF5FABF223C9F93A5E5F082283CC,
	U3CU3Ec__DisplayClass49_0__ctor_m6C895B03125FDEE990B4F23F4A9F146C9BE45AA2,
	U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__0_m1F19BDE11296A579386F96F4D5BD8891078F9F01,
	U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__1_m5A9459F0963567D1211720F5F3B6420E2C4BBB1A,
	NULL,
	NULL,
	VRequest_get_Timeout_m03F009116C70B6B96C7DEDE504E5FD5AA49FBC7F,
	VRequest_set_Timeout_m3F2E5F02C61A8E4B1FFB722669D05C5D2B554650,
	VRequest_get_IsPerforming_mD8C2A2A54C96AB3B9F1F66645F24298D410C1BC5,
	VRequest_set_IsPerforming_mC10E449CFC3DDE07D4092630543C65564168D050,
	VRequest_get_IsComplete_m3781924918754A98C2777F888FE00DB7811784C4,
	VRequest_set_IsComplete_m910F649D3FC712AABA0DF23DF30EA149C80C82C9,
	VRequest_get_UploadProgress_mCF73D499D5CD279E3E712D41D5AD6DB9B8D318CD,
	VRequest_set_UploadProgress_mC1D6AB04AFF0F3272F3C198784BB1212522F00A8,
	VRequest_get_DownloadProgress_m2F798CC32BD31340DB75A3FA79BF74813EEA345E,
	VRequest_set_DownloadProgress_m456B92DE61C8AA463350F26B76F9FDF6D93AB8D7,
	VRequest_Request_m9FA9CDEB34E4150682E78BAA953B926A39AAD943,
	VRequest_CleanUrl_m745616E5CA15ADCEB002750F6953241286702FC9,
	VRequest_GetHeaders_m4A5AD89E04AB6405391E8CC2FAF2DCEFA2AB71F0,
	VRequest_PerformUpdate_mC2BC5D008BF9C5C6E852088A18C8EE4CA6286CFD,
	VRequest_Begin_mDD6371A35A092F5B7ED1309CEA44439C8D62807D,
	VRequest_Complete_mB855280A07AAE339239C74A75E1B4D9723ECC832,
	VRequest_Cancel_mBC45002E0F28DEB86417AB13A19AD9D3BFAB700E,
	VRequest_Unload_m11FECA222143EC83EC39C53DE198B76C78D00D18,
	VRequest_RequestFileHeaders_m969B8183728F16508A4E7D81D3B2DBFBBCEA5711,
	VRequest_RequestFile_m429264FF55861BFCFEB2CAD3B41F53830023F67C,
	VRequest_RequestFileDownload_mE20AE96FA8E75FCD75583B651CA87DE57A0026DC,
	VRequest_RequestFileExists_m3641BF14A2039A47B7619C565D6E4680D418F313,
	VRequest_RequestText_m67B5B557C6F8C1EEEFBD7A0AA0EF8A1D26A258BB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VRequest_RequestAudioClip_mBE4BBE5354ADED5E80B76B1C3FBFF8E29CC65E3E,
	VRequest_OnRequestAudioReady_m804EF4C52EA21B4AB121838C9A8B252ACD1DF364,
	VRequest_OnRequestAudioDecoded_m359F622ECCC94D27085E2688213A5D486293F3C3,
	VRequest_RequestAudioClip_m0CF685494AB6A6E42C1B99FDE8EEA5DCC93327B3,
	VRequest__ctor_mF4BCAE61CB2829619C591FBEDDF62B7B0D15EA86,
	VRequest__cctor_m26398CA4AC0E7E34494E5C7F907C2751EC9A3F23,
	RequestProgressDelegate__ctor_m28B696CB02837C016B6E4904AC7EEC4B792CF22C,
	RequestProgressDelegate_Invoke_m3DF0ABF142BC50798A3EA715C1D70C43A119A08C,
	RequestProgressDelegate_BeginInvoke_mEA6AC0405C07C088027281E7275118343CDD9E8A,
	RequestProgressDelegate_EndInvoke_m1981132C27BCB9EFBBD08D6D6BB56CD0C7FCA947,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CPerformUpdateU3Ed__32__ctor_mF0CB2BF2346274C7D475E1E516FAEA17E35D0F99,
	U3CPerformUpdateU3Ed__32_System_IDisposable_Dispose_m0D0020E993B7591C669CEAEDC9DAA12B8F0D7FF5,
	U3CPerformUpdateU3Ed__32_MoveNext_mECBC91D162E89145030225074FBFDA8EC91ECB4A,
	U3CPerformUpdateU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5DD0FAB735DC5C54F2103585D5C497BDC515DBF3,
	U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_Reset_m5ABF5A0FB0E29E1ECFDA0CEBE0063B2506FF5904,
	U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_get_Current_m402CCC076B60665226788458EB1B05568AB0F651,
	U3CU3Ec__DisplayClass37_0__ctor_mEBBC01D7BF60F87AD789AEC68683CFE4292E1C9B,
	U3CU3Ec__DisplayClass37_0_U3CRequestFileHeadersU3Eb__0_mB7704F50D2507DC0A428F879B97CFB258C1F99BC,
	U3CU3Ec__DisplayClass38_0__ctor_m3C46A1E7617042FF0E574A3EE413A025E7EAB6D0,
	U3CU3Ec__DisplayClass38_0_U3CRequestFileU3Eb__0_m717CE1B8C520FE64E4DBC51ED588209EF85C9DC5,
	U3CU3Ec__DisplayClass39_0__ctor_m60DA58892AF1D7C7289382776EDA98BDEA4C4392,
	U3CU3Ec__DisplayClass39_0_U3CRequestFileDownloadU3Eb__0_mD18C9EF7DD1A4F189CE056F45AD4F72EAB73BFB8,
	U3CU3Ec__DisplayClass40_0__ctor_m1467B95339D9CBD5854A7BE2B651885DB6390C86,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__0_m3BA56636C11455FD4B921FE8B4224B8AFB983427,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__1_m32D6E4C84D9669AEDF19C758EDAAD9DE32FBEFDD,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__2_m48936F182EDBE8B89FC0BCBCAAC2F878CFBD44EA,
	U3CU3Ec__DisplayClass41_0__ctor_m1AF4398EF9E5D00ACB977E923EFBCEDE9E956EA8,
	U3CU3Ec__DisplayClass41_0_U3CRequestTextU3Eb__0_mCF35D5B9B8A94DF823D2FDB60AD375690651AE23,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass48_0__ctor_m586783B398256FA5CB466F388F667BC34E694118,
	U3CU3Ec__DisplayClass48_0_U3CRequestAudioClipU3Eb__0_m4630960D248C4823FA8946DE08B8358840A200DA,
	U3CU3Ec__DisplayClass49_0__ctor_m23DDC87EDE8D308350432DEF00376783B5D87BA0,
	U3CU3Ec__DisplayClass49_0_U3COnRequestAudioReadyU3Eb__0_m953A1DB6E79D4D83D4DC5A4B7EA778A0A4B2E3C6,
	WitMessageVRequest__ctor_m8C13B28C87B08CAD7761908E5AF5661C2D0F8064,
	WitMessageVRequest_MessageRequest_m0572805D0A5FBBF7EEA1CC7D18807E13201726B3,
	WitMessageVRequest_MessageRequest_mCB43E49F2932E670DFD716DCA3252FA5AA440D64,
	WitTTSVRequest__ctor_m3131E3EB772D3090D19D313A9262CBA3D9705131,
	WitTTSVRequest_GetAudioType_m5CFF762C5BEAE513D39C9C6D349B366C050C3A32,
	WitTTSVRequest_GetAudioMimeType_mF109EB3D8071B39637E32CE69AFA0ADF13D6C532,
	WitTTSVRequest_GetAudioExtension_m78A0DFAB50A31D58E52422BEE9703358718A7679,
	WitTTSVRequest_GetAudioExtension_m1906FF22915557298EC730D7DF011882DF0217FF,
	WitTTSVRequest_CanStreamAudio_mAB0A162BE3869C1E6609151768B4832C5DBA9C8E,
	WitTTSVRequest_RequestStream_mBB71445ED5C39EC2071C4D7EBFC58947C58C6DB6,
	WitTTSVRequest_RequestDownload_mDD85F68206730AA7B236767078BCB1BAF61E79A8,
	WitTTSVRequest_EncodePostBytesAsync_m54A44675514FA3485FD761BDDBD28A7B2BE809F0,
	WitTTSVRequest_EncodePostData_mD65A6F815BA3EADDB2EFF920E33CD58DFFC1465D,
	WitTTSVRequest_GetUnityRequest_m4D30CF1B6DBA6029AA2B7B1F6F251781664053D3,
	U3CU3Ec__DisplayClass6_0__ctor_m727D7138BF5310AA934BE6C34B4089B3AFD5C9DA,
	U3CU3Ec__DisplayClass6_0_U3CRequestStreamU3Eb__0_mB637ED830BE6EF9D1A5BE6B7919D7E548F21E1D9,
	U3CU3Ec__DisplayClass7_0__ctor_mF9D67FC1CE9065061BF05D1E97FB48CDBEDE6680,
	U3CU3Ec__DisplayClass7_0_U3CRequestDownloadU3Eb__0_m01D2A52E3571805B1A35B77580F96EFE3BA2FF96,
	U3CU3Ec__DisplayClass8_0__ctor_m4DE63C2338A70C1682300069C4082F144EBB9315,
	U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__0_mC21CA2284106C027B2158EA8D6FA5D8C4E9271E4,
	U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__1_m30F39BBBE2874F2272A207E71EE2A9785D2E4DF4,
	WitVRequest_add_OnProvideCustomUri_m5BD06AEA804B496E8B621DF6C3F053F7DDEA387A,
	WitVRequest_remove_OnProvideCustomUri_m1B9F975434D15BFC49B9669EE297848EC715B57E,
	WitVRequest_add_OnProvideCustomHeaders_mECE512FAD1FF646DDEA39FC296FAD993B6AED286,
	WitVRequest_remove_OnProvideCustomHeaders_m6A2D44E7B8BF9ED4EB4FA2C819C118E428875ECD,
	WitVRequest_add_OnProvideCustomUserAgent_m68EE4D15C386FF95DDC247BF142E00769F54EF47,
	WitVRequest_remove_OnProvideCustomUserAgent_m9D7A54162E406EEA482F0970663B3137C8857979,
	WitVRequest_get_RequestId_m9932C4ABF2485194D9F91D60355158E9C7D33964,
	WitVRequest_set_RequestId_m8461BD2ADDFB9E8911A2B21FD722941F4D5F7616,
	WitVRequest_get_Configuration_m8F55B23BB5D7C8DE85C582730B66EF91C74EDD9F,
	WitVRequest_set_Configuration_mC0F788F9244204081B6BB4AF2E24AE88AB6DAC01,
	WitVRequest__ctor_m45B77C96A433DDC3F02508C96D5D25C4863351A7,
	WitVRequest_GetUri_m1E2CE2F1D322E731C090E4FEA619AC5D8A0ABF7F,
	WitVRequest_GetHeaders_m0B570BD8EF6CC4F83C97422A5B2D2BA7067490CC,
	WitVRequest_Request_m4307FDCB76121EB9E79713642944DA8D4F68AC44,
	NULL,
	NULL,
	NULL,
	WitVRequest_GetWitUri_m99BBEF38685D3BDA3DB4966137C505E6B4AC6A5B,
	WitVRequest_GetWitHeaders_m4E4216BA42F7F2240F74F57386CDEEAFB2138409,
	WitVRequest_GetAuthorizationHeader_mFEFF86972F8BC7D936F1ED884DE5468C8EBD945D,
	WitVRequest_GetUserAgentHeader_m7944A3D357F22308DA6648B309DBB924BBFE500A,
	ColorConverter_get_CanRead_m22E660731B056A77FC873F0DF5ED1B810BC3C7C0,
	ColorConverter_get_CanWrite_mADE86E5A42E2C1D725F8BF8AE4997EACAA6A9E51,
	ColorConverter_CanConvert_mC792241D563AD0BCDBD65F55E628287845B8D929,
	ColorConverter_ReadJson_mB19B3537C3B3AB22C843E9178D104620B709F5A4,
	ColorConverter_WriteJson_mE88C33977E45F6C65F8627C7FD815F1CF17B2E9A,
	ColorConverter__ctor_mB17F2603A14C3CC2FE94878DA85130D2BE6A8722,
	DateTimeConverter_get_CanRead_m4C97B6D804906607188F058922DB815AE3EDF57A,
	DateTimeConverter_get_CanWrite_mE7A541FEA2C720F34EF377590DA0C3FD1FE0294F,
	DateTimeConverter_CanConvert_m2471EAFE4C135623782C3DCB88CCE8AAF6E98345,
	DateTimeConverter_ReadJson_mF2651AABB883200C21ACF55EAAEB3DE70C9EC9AB,
	DateTimeConverter_WriteJson_mDBF4583C997AEBEE56613AF52FA8542448B0441B,
	DateTimeConverter__ctor_m413347426E3E5677D24ADA7A2F84A00BE655A12F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_get_DefaultConverters_m60514B76ADF93346EF58E3D0139911B1AFBB42E7,
	JsonConvert_EnsureExists_m12AA98E9304ABA40F78696864301FDC12FF8A94B,
	JsonConvert_DeserializeToken_m68F3C84F367812773DEB2C38F2FB8AB9819576F4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_DeserializeToken_m03180FE03E68340492134A5FF8CEFC83ACF9CF8D,
	JsonConvert_DeserializeEnum_mF7363B485F6AD293031F6A009B49029AD1BE9A3F,
	NULL,
	JsonConvert_DeserializeClass_m0A787B2342405EB860A311B8CAF4E716DE6C3E52,
	JsonConvert_DeserializeDictionary_m76AC67007F704D368F10238979406BED25C57D57,
	NULL,
	NULL,
	JsonConvert_SerializeToken_m9368B3EC22603FDA9BF438076246C0C5D53545C3,
	JsonConvert_SerializeProperty_mD67BD4CC6EC3F70835A2C7C90749316BC840A7E7,
	JsonConvert__cctor_mFCB3CE46FB63F79312DA5E639AECC9DB12DCF828,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__cctor_m2D355A7C6127E529D68FB6618A52BFF335E99E02,
	U3CU3Ec__ctor_m285FDCD377ABC1876F3F3B09040DB217D25C881C,
	U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m6F93C74F8BB2AFFA9A90D49263E018327C1B0A82,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_0_m13D8BC90411CD6B073BB30053C4FEB29634D40AA,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_1_m25E49BBE6D72E8820C450F945A8034E299BDB334,
	JsonConverter_get_CanRead_m93664A79C426240476800EBDEED69DC2852EDD09,
	JsonConverter_get_CanWrite_m3A7E81DC0EFB64913C4DC0E9836763FF34858733,
	NULL,
	JsonConverter_ReadJson_m7BA3538CF9984D2FAC74AFE2E822916FA232765E,
	JsonConverter_WriteJson_m556041329A1E1C6A9F411272EF5D945C5CC0A2B3,
	JsonConverter__ctor_m5C27A94A949BCBBB92FACA659B7C4AD196F638F3,
	JsonIgnoreAttribute__ctor_m81C52081DED21B8F7F33437053EFC60B4214B4E4,
	JsonPropertyAttribute_get_PropertyName_m555B9BE2AE2590F790088F079C6FD10B05F76687,
	JsonPropertyAttribute_set_PropertyName_mDA3C637C31583CCFF3B30ED5CBEA5440D4A868CF,
	JsonPropertyAttribute_get_DefaultValue_m8A1EE7899FF2A84A28C33F663F3F588B16ECAA85,
	JsonPropertyAttribute_set_DefaultValue_m760114BC45EFDDF2A0708212E0DD05EFB09A4899,
	JsonPropertyAttribute__ctor_m3CBDD233210116A482C0415F3EA0F1CC3E84FC38,
	JsonPropertyAttribute__ctor_mA72D488F6606129E3A3109F4C3C366FDB32E7F7B,
	WitResponseJson_Parse_m14F74DC3E4D337E0F3E3423C8F9DCCD31D101790,
	WitResponseNode_Add_mE5B65782DAFB86A9BBFBB1ABAF8A45DB304787CF,
	WitResponseNode_get_Item_mBBEA092DD89AE16E199E5B01444290A70505653C,
	WitResponseNode_set_Item_m4F02A3EBDA4F0265213202B1D6F0EF8BD565C94D,
	WitResponseNode_get_Item_mF7F56C8BC956E17B2440F7DB2C3BD8C565F9FA86,
	WitResponseNode_set_Item_m8905F79079786F8A0CD3BF8A618757EE0C4D0964,
	WitResponseNode_get_Value_m49EACCB04D37ECF03534108A0C561A02FE16D0E3,
	WitResponseNode_set_Value_m4B238B58BD32AA164C8AE67F7DCC5264045F0C10,
	WitResponseNode_get_Count_m05F1CBAED68C1B38E8C2F6EE4E7AF50303E68CDB,
	WitResponseNode_Add_m2028E030EEBCFC8BAB09AADE6CF8FC980F8852B4,
	WitResponseNode_Remove_mBBF8C101E987525AF69F94743CAB64D43A084448,
	WitResponseNode_Remove_m878EFA74DCFD0A72ABC8087350DD06752687086D,
	WitResponseNode_Remove_m919250100021CEC4C04293516EACC7845DFD63F2,
	WitResponseNode_get_Childs_mF03238E69B6028364C78CF995161CFF7619E5621,
	WitResponseNode_get_DeepChilds_m3DB0998216597B0A50956507F698CF098CDD7F6D,
	WitResponseNode_ToString_mF1033AA40A6BC1D9C9F96757AF49F26919F6D033,
	WitResponseNode_ToString_m2BF5CABA8121EB4AA4C7111970BEAEFD781DEF6B,
	WitResponseNode_get_AsInt_m4A5BD5816B7E14B6AE67DFC82C23EAAF3670A529,
	WitResponseNode_set_AsInt_m157687B6A0F8C03F33652BFB1A888E1EE13DBDEC,
	WitResponseNode_get_AsFloat_mAAA6A295B4E0204F9D262A98C59130A0413B8547,
	WitResponseNode_set_AsFloat_m6E87C78A2D80D170B9EDD72A06124E5F916E23F9,
	WitResponseNode_get_AsDouble_m14EC56C4C2D805E2F36D8C233C8AEB01AF03E52D,
	WitResponseNode_set_AsDouble_m4138DD2589FE693E306EE77E0EEA9FADE6733266,
	WitResponseNode_get_AsBool_mBBE5BBA758E7F62EC106610C5BAB0347946B5BEF,
	WitResponseNode_set_AsBool_mB9F8E0662F67029D34F9CB9503E1FE01A575F346,
	WitResponseNode_get_AsArray_m0750700B5D08F72331CFDE3F9113FE71D93A535B,
	WitResponseNode_get_AsStringArray_mE9B42A74B089857A2152B21B54DDEFC43D593064,
	WitResponseNode_get_AsObject_m201FD13B32347F510B9E0586AE6E0118DADBB64D,
	NULL,
	WitResponseNode_op_Implicit_mDDB5B103BA69F0E91DA0EBD7178545C7BFCCB536,
	WitResponseNode_op_Implicit_mF9B60B90779F81933B04099F31D149366542011D,
	WitResponseNode_op_Equality_m8F5A9BB7AC703F2ED0B87386B4C50CB7A8BE9609,
	WitResponseNode_op_Inequality_m0D737565985FFBB61652B34649F2EE312136E487,
	WitResponseNode_Equals_mA865FE0335741B68F8882B67337434243EBA900A,
	WitResponseNode_GetHashCode_m657429A2D5D30C8BB8C39E8D645580787FDC16B8,
	WitResponseNode_Escape_mF2C1F1D7A4526C1ECD2EC90CA5A53493BA1389C8,
	WitResponseNode_Parse_m6366F3E270DE18F43FE819DD23B61954B835E34F,
	WitResponseNode_Serialize_m73B1C540E1C90138E1992968C78BE112420A5047,
	WitResponseNode_SaveToStream_mA1CF17D09D7482398A623EF73331B2B3CFDC4AF7,
	WitResponseNode_SaveToCompressedStream_m40694A840C988351B5F36B4CDEE52D9B58DD87EF,
	WitResponseNode_SaveToCompressedFile_m2484433F3FFD7C9ACC24C587341C0D645F934252,
	WitResponseNode_SaveToCompressedBase64_mD0E10F8225464E299DA59382534745BB59DBC400,
	WitResponseNode_SaveToFile_m29A6F8B38B976FFF76226E231A02DD6DA9261CD0,
	WitResponseNode_SaveToBase64_mF58C61481188C352158103801F7AE87C5790D913,
	WitResponseNode_Deserialize_mA3A7083C66AA20008637F8B580BBA8A6E75349A9,
	WitResponseNode_LoadFromCompressedFile_m278A37A9A85D055A9D69CB88FB46EC42503EBE48,
	WitResponseNode_LoadFromCompressedStream_m52DFA435C08FF3B904094B1B4AD3C4CF17B2B35B,
	WitResponseNode_LoadFromCompressedBase64_mCEBD096CFC41EA68C5239F4E4426357F6017E3D1,
	WitResponseNode_LoadFromStream_m2A113D4340260B9AE153B737C9358CC0825F83D3,
	WitResponseNode_LoadFromFile_m899ECB57250F0B9BEFCF766134521A5FAE853586,
	WitResponseNode_LoadFromBase64_m31CFBB09C506885766CCDB295A0663E619E57E36,
	WitResponseNode__ctor_m280C179F044F3E870680B272C8AD383636E3F612,
	U3Cget_ChildsU3Ed__17__ctor_m14477C7210F503D869AC71FDEBF4A8F00BB273D9,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_mBFB4B9A452426FC3698D2D4A22D5F84C6E02DA51,
	U3Cget_ChildsU3Ed__17_MoveNext_m95DF101B91EA196079479D19CC9A9744635B429B,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mE4A168B5BB8B03F3237870B83AE34C8ABDBF7117,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mF05AE72F21FCD48E2D4EF684A19B57B626223D9E,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCC267D069552F0FEF0BE7340EB097080DD8898EA,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m6DD329953A8238CC35E4662748E26402994966E9,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m12E7617E3200286A15D6664142FE6EDE46D7AAD9,
	U3Cget_DeepChildsU3Ed__19__ctor_m86ADB4E4429CC808EE989B98DECAF42FF1111249,
	U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mF6A5ED40EC12E627A9F7BCCF32FB01BB8872492B,
	U3Cget_DeepChildsU3Ed__19_MoveNext_m4795DFC196DBC20146C6DE3C4AC364C7F124E9BD,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mB48ADD9B66D3427D49C69FEBE6DDA3F4A9A4FC55,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA53B569706361AE6001DB51CC888EC1D991E499A,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m2F9FF505BDC3B9CEB8E5E5D93F0AA335F6206C6B,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m8BB321A1F4A2FD487D117281406F59F4CD8F6086,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m47270A08451D6A76D3754A16BF5B655F2D8756E1,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mF2C71319DF5BAFBE41BF8EFEEEE54745E6B6C40D,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m96D92CAF4535D8A51F57E5FB945F7E3A07677729,
	WitResponseArray_get_Item_mCF7736F0963B8AD1A573C632C08968E128E423DB,
	WitResponseArray_set_Item_mEB3B369D18AF122A8F7F8D331F064F752E30B767,
	WitResponseArray_get_Item_m5450B37FAB628F82C60F6A4580F2619DEA59E3E1,
	WitResponseArray_set_Item_m68B321F03B2C01991917243E71AC1842BA2B21DE,
	WitResponseArray_get_Count_mAEB92CE98B7ED014F2B580C99416AB5950A9A9FD,
	WitResponseArray_Add_mDE63C5804BF1F0F0AF3A1A818934157BC1F80052,
	WitResponseArray_Remove_m9CD86D1DC344A0A41B5EFA5669055630C4689EFA,
	WitResponseArray_Remove_m6CA6956ACA3576F8081A9EF7BA6092069476C5FE,
	WitResponseArray_get_Childs_mC1825219737DB390933D23DF57387585B2C37CF6,
	WitResponseArray_GetEnumerator_m247D19E59C15E67099FB3F6EF2D810F1A0DB662D,
	WitResponseArray_ToString_m855B5B17CFCEDB9E7275206CD3B5790C35700292,
	WitResponseArray_ToString_m5707964C5BC2F8E112DF99546AF916311F02A312,
	WitResponseArray_Serialize_mF85D85FEB6A4C237C7A72F8308B0F81CFC88A9A4,
	WitResponseArray__ctor_m0F777645965007FE324AF2F20458FC71091B19C3,
	U3Cget_ChildsU3Ed__13__ctor_m7373F62ED897309A0F958F491EA67759D997DF49,
	U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m53AD080E999E995148BCE73FDF471207C381469D,
	U3Cget_ChildsU3Ed__13_MoveNext_mDEA22C8C8DC85784A31CD6631DDA96F64D8E6FA6,
	U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m2AEAAA9810CEA55FFC9C7320938473AEEB3854F6,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mE24FDFE04E32A62E0A0694226DCA6B3B0EDDAA6E,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m8249D976E9F652DD10A3CA750C0E2C511B7759EA,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_mBFC2B345A8D3FC7D0EACE8A43C038B8B7F544061,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mF045758BF8A9A4CC71858F0DA37335307BD43024,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_mF832704F429B84D0BB42FAACACAB8FB85364EDDB,
	U3CGetEnumeratorU3Ed__14__ctor_mEE1CD2BE4BF3414F1A14517556267C29E1EA3742,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m58E7790519A48C0C0A40CBF34ACB0C9B8271A873,
	U3CGetEnumeratorU3Ed__14_MoveNext_mEB8DC04090CADCDC87F70518AE5AC692B71F1992,
	U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m143103CCA101F5BB88CA8718AF0F976E3D7A6E0E,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C8548F38A4400299ED032C9DF67895886AED505,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m1BCE3138D1D9B925014074E0875BB1943431A908,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m1FEB39E4535855DBAD6651D4F3F90AF0C0B8A97F,
	WitResponseClass_get_ChildNodeNames_m123366A6F87DD752F7E70204CEE82F61D16C5950,
	WitResponseClass_HasChild_m159090C52942829D48062D1AEFA00CE4AFE513C3,
	WitResponseClass_get_Item_m5F2F74AC8828655D3AB3F072131AE1148A5B5637,
	WitResponseClass_set_Item_mB2A489861DDB2E8BDF7319BDDDFAD7B40713300B,
	WitResponseClass_get_Item_m3CD2D1D2A00E876FE0336A75745C18D00BCEC55D,
	WitResponseClass_set_Item_m1723BB8802D2CA18D3E232F9218E7FDC2D0D173F,
	WitResponseClass_get_Count_m80559856EA5C1C73F0B52972D47590ECDF6F1D18,
	WitResponseClass_Add_m6A00E3A8F9D726064370AE99DD864007535151D9,
	WitResponseClass_Remove_mFCA0CBD075D3127A178CEE6E7FE7F11C6D4F882D,
	WitResponseClass_Remove_m776468F5BD943D33E173D8FB6DDAF420AFF5CD4E,
	WitResponseClass_Remove_mB005F404984496A91C0FF510FBA6FF05B6A01EFB,
	WitResponseClass_get_Childs_m889C90A509A95E8E2E2D82E6B188857F901F5285,
	WitResponseClass_GetEnumerator_m02BA5F72FACB665D80AF8E37AF0F217E83E6B97B,
	NULL,
	WitResponseClass_ToString_m0ACA1E73C06949F23EC75BEF98D42A4CB9CEAB85,
	WitResponseClass_ToString_mCC9A2431036517CEB2079F3297F35ED18809F871,
	WitResponseClass_Serialize_m1A5A8A284B57B9133B2375A127F83E7053D505F8,
	WitResponseClass__ctor_mFE934954290C9C0E103F8E0CD7211B8BF9F98710,
	U3CU3Ec__DisplayClass15_0__ctor_m3D3161FA2467D6E8B7DB93047F66C26AA2071CBB,
	U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_m7FCB13BA1C2B6313C337835CBCB1F3010B348938,
	U3Cget_ChildsU3Ed__17__ctor_m878CA8A4479B22DA91DF27555BF6A12CC4EAB8A0,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m2205FD0282D9FC0312E66AE53A0920C422E70851,
	U3Cget_ChildsU3Ed__17_MoveNext_m2AFEF93D5DE44F4F77179976E986142A54409E8A,
	U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m90C423044FB2219DCC224DE783CBD3340C1319FF,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m357D92B0A957556A640FE5978643C08A6E18B953,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m9BEA107EBA93D4BD6D400662610414E801040FF0,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m5E3376268132BE0A11F4A7FE28BF361791923F82,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mD2D6FCCA34A17D62759A0997BC4C33AF95ACE934,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m4B0C8C2A94AA6470BBF600D2C83B8292970F2DAE,
	U3CGetEnumeratorU3Ed__18__ctor_mD16727AE6DF9B8076A0CA18144DD9FD0CEC56109,
	U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m70CE4908B6281B00CA1068DF1D82D976CEF65469,
	U3CGetEnumeratorU3Ed__18_MoveNext_m6A621EA8FCA8F494E527BC589C08B3CF7EE16235,
	U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m39082BEB1D58A20BEB3A7237BB63ED1A9CC5F130,
	U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE43AD1AB88314EF69BBDF3FD450D4B9A03B9700,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m3C26481E1563ED4E7BC690923EDF8BCA0BA09D17,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m3328622013C4F081987D46EB9AB3E88191525A69,
	WitResponseData_get_Value_mD89927766F0C3DF6D599D5462A7DCD399AB0442D,
	WitResponseData_set_Value_mD8FA535750733317F4293AE54673C67DFB67BB68,
	WitResponseData__ctor_mBEE36DFD5553A75A4996DF20136993FF14D57C9A,
	WitResponseData__ctor_m179696345C89652302B72964C1A667482D4D5624,
	WitResponseData__ctor_mE0A8D68001CA2A44F1C1C2E33E697394121D3AFA,
	WitResponseData__ctor_m03CBFCBD570E28EDEC6E199A36B8C1282BE4A4E1,
	WitResponseData__ctor_m36C8C908615663F6457BA80F5ABE715FABC920F5,
	WitResponseData_ToString_mB79A0EAE522D5F35EFDDE216C3683B0A4FBFEA74,
	WitResponseData_ToString_mA8A8FECD14EF8C39F5D925E05CAC4392EC3EC0EF,
	WitResponseData_Serialize_mED194E7AC3717F304EE49BB916F6B8B206C7E18F,
	WitResponseLazyCreator__ctor_m6133CD129C1371BA924717353073F15322ABA923,
	WitResponseLazyCreator__ctor_mEF50A8FAB262787992626EFE1D0E1EE3939DDDAD,
	WitResponseLazyCreator_Set_m7200DE5A782FE5B79AD704236F26F398A475584A,
	WitResponseLazyCreator_get_Item_m2663A06F607F95DA39988E51492B0AE99AB2E485,
	WitResponseLazyCreator_set_Item_mADDDBD1527CAD780F4A06B84D50C9440E252762B,
	WitResponseLazyCreator_get_Item_mE38BC23D3F0E4C38340A1B1461E3407ADDAC376B,
	WitResponseLazyCreator_set_Item_mC983438BAC64DC625656CE080BF484850E98A81D,
	WitResponseLazyCreator_Add_mD7FD6E50E197C3589704CE84DC3112095AC84969,
	WitResponseLazyCreator_Add_mBBD1A622EDB245764889AAAD22953E00FA8199FF,
	WitResponseLazyCreator_op_Equality_mFD5683B30108980BB0F2AFF65A239DE77208164A,
	WitResponseLazyCreator_op_Inequality_mF2D00E0EF99601243505C2E4F41714A288469024,
	WitResponseLazyCreator_Equals_m665405E84DE2D10F137FD93671D3653CE09843E4,
	WitResponseLazyCreator_GetHashCode_m881426AB82890C10136FDB4C644EE017A4298312,
	WitResponseLazyCreator_ToString_mCB7F178FC22E39FFAC425FE17F4233E47DFDF5EC,
	WitResponseLazyCreator_ToString_mED734E4D60AB1963899D46CB86CBB2A834D0D176,
	WitResponseLazyCreator_get_AsInt_mF941C07CFF705D94F173FEC9B31AAED0537D5555,
	WitResponseLazyCreator_set_AsInt_mBD601EAE189182AD17AF2B1EFB8F9BC717257BC1,
	WitResponseLazyCreator_get_AsFloat_m50974844B2E0706289ABB0E562F0332DDC20DA1F,
	WitResponseLazyCreator_set_AsFloat_m25920E9C5787FB7F851076CEFAF6BA0F491F8B31,
	WitResponseLazyCreator_get_AsDouble_m4813784247A027827BCCC4511A5340704DA428E8,
	WitResponseLazyCreator_set_AsDouble_mB7420BE31F20A624470766AFA141950DE6058F96,
	WitResponseLazyCreator_get_AsBool_mEF5CBE5157D3819752DC5CD1C5ACB0B365EC2C1C,
	WitResponseLazyCreator_set_AsBool_m2CEB5C508829679A9C194D03F81C9A91499E3E62,
	WitResponseLazyCreator_get_AsArray_m2B760BD8F7D729C1722B87ECEDF953645B9DC6E5,
	WitResponseLazyCreator_get_AsObject_mFD5144AE687886DBA4444AE9E66CB32E3713C605,
	JSONParseException__ctor_mC8A01C21DBF7A0F398F0D7910117968FB879EA77,
	WitEntityInfo_Equals_mA1FF208693482947DAAAF59C97EDC6EB7EBED99F,
	WitEntityInfo_Equals_m8BE4B7D6D3C2A77083D4C1798F34789AB8DD3BA2,
	WitEntityInfo_GetHashCode_mA8E2192E37F16DCBFB699D389CE23737C5910E20,
	WitEntityKeywordInfo__ctor_m6669278091E4ED58AC70A0D14D056D3EE9964265,
	WitEntityKeywordInfo_Equals_mC883C6F7911AF46C951DD5DE9C95C3740EABC908,
	WitEntityKeywordInfo_Equals_m025EA11D661BB006AAC77C9566CE2945558C08FC,
	WitEntityKeywordInfo_GetHashCode_m3E367DAA30F341FFE445007E891ECE87A9927D48,
	WitTraitInfo__ctor_m5536BCE584630B87ED925A0B254250D54C51FAE4,
};
extern void WitEntityInfo_Equals_mA1FF208693482947DAAAF59C97EDC6EB7EBED99F_AdjustorThunk (void);
extern void WitEntityInfo_Equals_m8BE4B7D6D3C2A77083D4C1798F34789AB8DD3BA2_AdjustorThunk (void);
extern void WitEntityInfo_GetHashCode_mA8E2192E37F16DCBFB699D389CE23737C5910E20_AdjustorThunk (void);
extern void WitEntityKeywordInfo__ctor_m6669278091E4ED58AC70A0D14D056D3EE9964265_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_mC883C6F7911AF46C951DD5DE9C95C3740EABC908_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_m025EA11D661BB006AAC77C9566CE2945558C08FC_AdjustorThunk (void);
extern void WitEntityKeywordInfo_GetHashCode_m3E367DAA30F341FFE445007E891ECE87A9927D48_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[7] = 
{
	{ 0x06000256, WitEntityInfo_Equals_mA1FF208693482947DAAAF59C97EDC6EB7EBED99F_AdjustorThunk },
	{ 0x06000257, WitEntityInfo_Equals_m8BE4B7D6D3C2A77083D4C1798F34789AB8DD3BA2_AdjustorThunk },
	{ 0x06000258, WitEntityInfo_GetHashCode_mA8E2192E37F16DCBFB699D389CE23737C5910E20_AdjustorThunk },
	{ 0x06000259, WitEntityKeywordInfo__ctor_m6669278091E4ED58AC70A0D14D056D3EE9964265_AdjustorThunk },
	{ 0x0600025A, WitEntityKeywordInfo_Equals_mC883C6F7911AF46C951DD5DE9C95C3740EABC908_AdjustorThunk },
	{ 0x0600025B, WitEntityKeywordInfo_Equals_m025EA11D661BB006AAC77C9566CE2945558C08FC_AdjustorThunk },
	{ 0x0600025C, WitEntityKeywordInfo_GetHashCode_m3E367DAA30F341FFE445007E891ECE87A9927D48_AdjustorThunk },
};
static const int32_t s_InvokerIndices[605] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4328,
	4328,
	-1,
	4392,
	-1,
	4328,
	-1,
	4328,
	3566,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4392,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4357,
	4328,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4328,
	4328,
	4394,
	4400,
	4328,
	-1,
	-1,
	-1,
	6176,
	-1,
	6569,
	5847,
	6547,
	4259,
	3491,
	4392,
	2060,
	4328,
	4392,
	4392,
	2633,
	4392,
	4392,
	4392,
	4392,
	4392,
	3537,
	4392,
	4259,
	4328,
	4392,
	4328,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6465,
	6465,
	6465,
	6465,
	6060,
	6465,
	6060,
	6465,
	6060,
	5531,
	6547,
	6055,
	5567,
	4254,
	3486,
	4328,
	3566,
	4259,
	3491,
	4259,
	3491,
	6465,
	6465,
	6465,
	6465,
	3486,
	3618,
	1416,
	1618,
	2073,
	4392,
	4392,
	4392,
	3537,
	5144,
	5528,
	5349,
	4915,
	6465,
	6569,
	5851,
	5093,
	4775,
	4657,
	5786,
	6321,
	5083,
	5902,
	6569,
	2070,
	2073,
	688,
	3566,
	4392,
	4328,
	4392,
	2633,
	4392,
	4328,
	2073,
	4259,
	4259,
	4300,
	3537,
	4259,
	3491,
	4259,
	3491,
	4357,
	3595,
	4357,
	3595,
	979,
	3207,
	4328,
	4328,
	4392,
	4392,
	4392,
	4392,
	1417,
	979,
	485,
	1417,
	979,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	75,
	1289,
	1289,
	75,
	4392,
	6569,
	2070,
	3595,
	1134,
	3566,
	-1,
	-1,
	-1,
	-1,
	3537,
	4392,
	4259,
	4328,
	4392,
	4328,
	4392,
	2073,
	4392,
	2073,
	4392,
	2073,
	4392,
	2073,
	2073,
	3595,
	4392,
	2073,
	-1,
	-1,
	-1,
	-1,
	4392,
	2073,
	4392,
	2073,
	2073,
	485,
	142,
	3566,
	6244,
	6318,
	6318,
	6318,
	6173,
	31,
	145,
	1289,
	1619,
	1608,
	4392,
	3566,
	4392,
	3566,
	4392,
	4328,
	2073,
	6465,
	6465,
	6465,
	6465,
	6465,
	6465,
	4328,
	3566,
	4328,
	3566,
	1287,
	1619,
	4328,
	979,
	-1,
	-1,
	-1,
	5376,
	5374,
	5847,
	6321,
	4259,
	4259,
	2633,
	1120,
	3207,
	4392,
	4259,
	4259,
	2633,
	1120,
	3207,
	4392,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2633,
	2633,
	6547,
	5856,
	6321,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4785,
	5098,
	-1,
	4785,
	4785,
	-1,
	-1,
	5098,
	4586,
	6569,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6569,
	4392,
	2633,
	2633,
	2633,
	4259,
	4259,
	2633,
	1120,
	3207,
	4392,
	4392,
	4328,
	3566,
	4328,
	3566,
	3566,
	2073,
	6321,
	2073,
	3201,
	1926,
	3207,
	2073,
	4328,
	3566,
	4300,
	3566,
	3207,
	3201,
	3207,
	4328,
	4328,
	4328,
	3207,
	4300,
	3537,
	4357,
	3595,
	4276,
	3513,
	4259,
	3491,
	4328,
	4328,
	4328,
	-1,
	6321,
	6321,
	5678,
	5678,
	2633,
	4300,
	6321,
	6321,
	3566,
	3566,
	3566,
	3566,
	4328,
	3566,
	4328,
	6321,
	6321,
	6321,
	6321,
	6321,
	6321,
	6321,
	4392,
	3537,
	4392,
	4259,
	4328,
	4392,
	4328,
	4328,
	4328,
	3537,
	4392,
	4259,
	4392,
	4392,
	4328,
	4392,
	4328,
	4328,
	4328,
	3201,
	1926,
	3207,
	2073,
	4300,
	2073,
	3201,
	3207,
	4328,
	4328,
	4328,
	3207,
	3566,
	4392,
	3537,
	4392,
	4259,
	4392,
	4328,
	4392,
	4328,
	4328,
	4328,
	3537,
	4392,
	4259,
	4392,
	4328,
	4392,
	4328,
	4328,
	2633,
	3207,
	2073,
	3201,
	1926,
	4300,
	2073,
	3207,
	3201,
	3207,
	4328,
	4328,
	-1,
	4328,
	3207,
	3566,
	4392,
	4392,
	2471,
	3537,
	4392,
	4259,
	4392,
	4328,
	4392,
	4328,
	4328,
	4328,
	3537,
	4392,
	4259,
	4392,
	4328,
	4392,
	4328,
	4328,
	3566,
	3566,
	3595,
	3513,
	3491,
	3537,
	4328,
	3207,
	3566,
	3566,
	2073,
	3566,
	3201,
	1926,
	3207,
	2073,
	3566,
	2073,
	5678,
	5678,
	2633,
	4300,
	4328,
	3207,
	4300,
	3537,
	4357,
	3595,
	4276,
	3513,
	4259,
	3491,
	4328,
	4328,
	3566,
	2633,
	2692,
	4300,
	2073,
	2633,
	2693,
	4300,
	4392,
};
static const Il2CppTokenRangePair s_rgctxIndices[41] = 
{
	{ 0x02000012, { 0, 15 } },
	{ 0x02000013, { 15, 3 } },
	{ 0x02000015, { 18, 15 } },
	{ 0x02000016, { 33, 4 } },
	{ 0x0200001C, { 37, 40 } },
	{ 0x0200001D, { 77, 3 } },
	{ 0x0200001F, { 80, 46 } },
	{ 0x02000020, { 126, 1 } },
	{ 0x0200002B, { 135, 7 } },
	{ 0x0200002C, { 142, 4 } },
	{ 0x02000041, { 154, 7 } },
	{ 0x02000042, { 161, 1 } },
	{ 0x0200004E, { 165, 10 } },
	{ 0x02000052, { 203, 2 } },
	{ 0x02000053, { 205, 2 } },
	{ 0x06000094, { 127, 2 } },
	{ 0x06000095, { 129, 1 } },
	{ 0x06000096, { 130, 1 } },
	{ 0x06000098, { 131, 1 } },
	{ 0x060000AF, { 132, 1 } },
	{ 0x060000B0, { 133, 2 } },
	{ 0x06000113, { 146, 3 } },
	{ 0x06000114, { 149, 1 } },
	{ 0x06000115, { 150, 1 } },
	{ 0x06000116, { 151, 1 } },
	{ 0x06000117, { 152, 1 } },
	{ 0x06000118, { 153, 1 } },
	{ 0x06000164, { 162, 1 } },
	{ 0x06000165, { 163, 1 } },
	{ 0x06000166, { 164, 1 } },
	{ 0x06000182, { 175, 6 } },
	{ 0x06000183, { 181, 6 } },
	{ 0x06000184, { 187, 3 } },
	{ 0x06000185, { 190, 3 } },
	{ 0x06000186, { 193, 1 } },
	{ 0x06000187, { 194, 2 } },
	{ 0x0600018A, { 196, 4 } },
	{ 0x0600018D, { 200, 1 } },
	{ 0x0600018E, { 201, 2 } },
	{ 0x060001C6, { 207, 2 } },
	{ 0x0600021B, { 209, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[210] = 
{
	{ (Il2CppRGCTXDataType)3, 25989 },
	{ (Il2CppRGCTXDataType)2, 4602 },
	{ (Il2CppRGCTXDataType)2, 4741 },
	{ (Il2CppRGCTXDataType)3, 27340 },
	{ (Il2CppRGCTXDataType)2, 924 },
	{ (Il2CppRGCTXDataType)3, 21233 },
	{ (Il2CppRGCTXDataType)3, 21234 },
	{ (Il2CppRGCTXDataType)3, 27338 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)3, 21224 },
	{ (Il2CppRGCTXDataType)3, 21235 },
	{ (Il2CppRGCTXDataType)3, 27328 },
	{ (Il2CppRGCTXDataType)3, 21236 },
	{ (Il2CppRGCTXDataType)3, 21223 },
	{ (Il2CppRGCTXDataType)3, 27329 },
	{ (Il2CppRGCTXDataType)3, 25952 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)2, 4737 },
	{ (Il2CppRGCTXDataType)3, 21237 },
	{ (Il2CppRGCTXDataType)2, 4109 },
	{ (Il2CppRGCTXDataType)2, 4603 },
	{ (Il2CppRGCTXDataType)2, 4742 },
	{ (Il2CppRGCTXDataType)3, 21252 },
	{ (Il2CppRGCTXDataType)3, 27354 },
	{ (Il2CppRGCTXDataType)3, 26008 },
	{ (Il2CppRGCTXDataType)3, 21251 },
	{ (Il2CppRGCTXDataType)3, 26022 },
	{ (Il2CppRGCTXDataType)3, 27343 },
	{ (Il2CppRGCTXDataType)3, 27347 },
	{ (Il2CppRGCTXDataType)3, 27355 },
	{ (Il2CppRGCTXDataType)3, 27358 },
	{ (Il2CppRGCTXDataType)2, 808 },
	{ (Il2CppRGCTXDataType)3, 27353 },
	{ (Il2CppRGCTXDataType)3, 21225 },
	{ (Il2CppRGCTXDataType)2, 4107 },
	{ (Il2CppRGCTXDataType)2, 4600 },
	{ (Il2CppRGCTXDataType)2, 4738 },
	{ (Il2CppRGCTXDataType)3, 26036 },
	{ (Il2CppRGCTXDataType)3, 26027 },
	{ (Il2CppRGCTXDataType)3, 26038 },
	{ (Il2CppRGCTXDataType)3, 27362 },
	{ (Il2CppRGCTXDataType)2, 4743 },
	{ (Il2CppRGCTXDataType)3, 26040 },
	{ (Il2CppRGCTXDataType)3, 27382 },
	{ (Il2CppRGCTXDataType)2, 896 },
	{ (Il2CppRGCTXDataType)3, 25969 },
	{ (Il2CppRGCTXDataType)3, 27377 },
	{ (Il2CppRGCTXDataType)3, 26030 },
	{ (Il2CppRGCTXDataType)3, 26028 },
	{ (Il2CppRGCTXDataType)3, 26032 },
	{ (Il2CppRGCTXDataType)3, 26031 },
	{ (Il2CppRGCTXDataType)3, 26029 },
	{ (Il2CppRGCTXDataType)3, 26033 },
	{ (Il2CppRGCTXDataType)3, 27363 },
	{ (Il2CppRGCTXDataType)3, 27384 },
	{ (Il2CppRGCTXDataType)2, 926 },
	{ (Il2CppRGCTXDataType)3, 26025 },
	{ (Il2CppRGCTXDataType)3, 26034 },
	{ (Il2CppRGCTXDataType)3, 25971 },
	{ (Il2CppRGCTXDataType)3, 26039 },
	{ (Il2CppRGCTXDataType)3, 27370 },
	{ (Il2CppRGCTXDataType)3, 27367 },
	{ (Il2CppRGCTXDataType)3, 26035 },
	{ (Il2CppRGCTXDataType)3, 27369 },
	{ (Il2CppRGCTXDataType)3, 25967 },
	{ (Il2CppRGCTXDataType)3, 25972 },
	{ (Il2CppRGCTXDataType)3, 25968 },
	{ (Il2CppRGCTXDataType)3, 25973 },
	{ (Il2CppRGCTXDataType)3, 27385 },
	{ (Il2CppRGCTXDataType)3, 27364 },
	{ (Il2CppRGCTXDataType)3, 26037 },
	{ (Il2CppRGCTXDataType)3, 27380 },
	{ (Il2CppRGCTXDataType)3, 26024 },
	{ (Il2CppRGCTXDataType)3, 27378 },
	{ (Il2CppRGCTXDataType)3, 25970 },
	{ (Il2CppRGCTXDataType)3, 27376 },
	{ (Il2CppRGCTXDataType)3, 26026 },
	{ (Il2CppRGCTXDataType)3, 27700 },
	{ (Il2CppRGCTXDataType)3, 27288 },
	{ (Il2CppRGCTXDataType)2, 4739 },
	{ (Il2CppRGCTXDataType)3, 27410 },
	{ (Il2CppRGCTXDataType)3, 27389 },
	{ (Il2CppRGCTXDataType)2, 833 },
	{ (Il2CppRGCTXDataType)3, 27702 },
	{ (Il2CppRGCTXDataType)3, 27414 },
	{ (Il2CppRGCTXDataType)2, 911 },
	{ (Il2CppRGCTXDataType)3, 27703 },
	{ (Il2CppRGCTXDataType)3, 27413 },
	{ (Il2CppRGCTXDataType)3, 27404 },
	{ (Il2CppRGCTXDataType)3, 27407 },
	{ (Il2CppRGCTXDataType)3, 27302 },
	{ (Il2CppRGCTXDataType)3, 27402 },
	{ (Il2CppRGCTXDataType)3, 27405 },
	{ (Il2CppRGCTXDataType)3, 27403 },
	{ (Il2CppRGCTXDataType)3, 27416 },
	{ (Il2CppRGCTXDataType)3, 27304 },
	{ (Il2CppRGCTXDataType)3, 27399 },
	{ (Il2CppRGCTXDataType)3, 27400 },
	{ (Il2CppRGCTXDataType)3, 27393 },
	{ (Il2CppRGCTXDataType)3, 27390 },
	{ (Il2CppRGCTXDataType)3, 27396 },
	{ (Il2CppRGCTXDataType)3, 27397 },
	{ (Il2CppRGCTXDataType)3, 27398 },
	{ (Il2CppRGCTXDataType)3, 27401 },
	{ (Il2CppRGCTXDataType)3, 27406 },
	{ (Il2CppRGCTXDataType)3, 27412 },
	{ (Il2CppRGCTXDataType)3, 27300 },
	{ (Il2CppRGCTXDataType)3, 27411 },
	{ (Il2CppRGCTXDataType)3, 27417 },
	{ (Il2CppRGCTXDataType)3, 27306 },
	{ (Il2CppRGCTXDataType)3, 27387 },
	{ (Il2CppRGCTXDataType)3, 27394 },
	{ (Il2CppRGCTXDataType)3, 27408 },
	{ (Il2CppRGCTXDataType)3, 27395 },
	{ (Il2CppRGCTXDataType)3, 27392 },
	{ (Il2CppRGCTXDataType)3, 27303 },
	{ (Il2CppRGCTXDataType)3, 27388 },
	{ (Il2CppRGCTXDataType)3, 27391 },
	{ (Il2CppRGCTXDataType)3, 27415 },
	{ (Il2CppRGCTXDataType)3, 27409 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)3, 27301 },
	{ (Il2CppRGCTXDataType)3, 27704 },
	{ (Il2CppRGCTXDataType)3, 27305 },
	{ (Il2CppRGCTXDataType)3, 27298 },
	{ (Il2CppRGCTXDataType)3, 27299 },
	{ (Il2CppRGCTXDataType)3, 27701 },
	{ (Il2CppRGCTXDataType)2, 98 },
	{ (Il2CppRGCTXDataType)3, 31628 },
	{ (Il2CppRGCTXDataType)3, 31629 },
	{ (Il2CppRGCTXDataType)1, 96 },
	{ (Il2CppRGCTXDataType)1, 97 },
	{ (Il2CppRGCTXDataType)3, 31758 },
	{ (Il2CppRGCTXDataType)2, 4597 },
	{ (Il2CppRGCTXDataType)3, 25930 },
	{ (Il2CppRGCTXDataType)3, 25934 },
	{ (Il2CppRGCTXDataType)3, 25931 },
	{ (Il2CppRGCTXDataType)3, 25932 },
	{ (Il2CppRGCTXDataType)3, 11393 },
	{ (Il2CppRGCTXDataType)2, 1004 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 25933 },
	{ (Il2CppRGCTXDataType)3, 25937 },
	{ (Il2CppRGCTXDataType)3, 25935 },
	{ (Il2CppRGCTXDataType)3, 521 },
	{ (Il2CppRGCTXDataType)3, 25936 },
	{ (Il2CppRGCTXDataType)2, 980 },
	{ (Il2CppRGCTXDataType)3, 179 },
	{ (Il2CppRGCTXDataType)3, 180 },
	{ (Il2CppRGCTXDataType)3, 32772 },
	{ (Il2CppRGCTXDataType)3, 32773 },
	{ (Il2CppRGCTXDataType)3, 32778 },
	{ (Il2CppRGCTXDataType)3, 32774 },
	{ (Il2CppRGCTXDataType)3, 32782 },
	{ (Il2CppRGCTXDataType)2, 982 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)3, 25104 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)3, 520 },
	{ (Il2CppRGCTXDataType)3, 32121 },
	{ (Il2CppRGCTXDataType)3, 25105 },
	{ (Il2CppRGCTXDataType)3, 32776 },
	{ (Il2CppRGCTXDataType)3, 32779 },
	{ (Il2CppRGCTXDataType)3, 32783 },
	{ (Il2CppRGCTXDataType)1, 2384 },
	{ (Il2CppRGCTXDataType)2, 2384 },
	{ (Il2CppRGCTXDataType)3, 12089 },
	{ (Il2CppRGCTXDataType)3, 32796 },
	{ (Il2CppRGCTXDataType)3, 12090 },
	{ (Il2CppRGCTXDataType)3, 12091 },
	{ (Il2CppRGCTXDataType)3, 8367 },
	{ (Il2CppRGCTXDataType)2, 453 },
	{ (Il2CppRGCTXDataType)3, 8366 },
	{ (Il2CppRGCTXDataType)2, 1952 },
	{ (Il2CppRGCTXDataType)2, 984 },
	{ (Il2CppRGCTXDataType)3, 189 },
	{ (Il2CppRGCTXDataType)1, 184 },
	{ (Il2CppRGCTXDataType)2, 184 },
	{ (Il2CppRGCTXDataType)3, 190 },
	{ (Il2CppRGCTXDataType)3, 191 },
	{ (Il2CppRGCTXDataType)2, 985 },
	{ (Il2CppRGCTXDataType)3, 207 },
	{ (Il2CppRGCTXDataType)1, 183 },
	{ (Il2CppRGCTXDataType)2, 183 },
	{ (Il2CppRGCTXDataType)3, 208 },
	{ (Il2CppRGCTXDataType)3, 209 },
	{ (Il2CppRGCTXDataType)1, 177 },
	{ (Il2CppRGCTXDataType)2, 177 },
	{ (Il2CppRGCTXDataType)3, 32110 },
	{ (Il2CppRGCTXDataType)1, 176 },
	{ (Il2CppRGCTXDataType)2, 176 },
	{ (Il2CppRGCTXDataType)3, 32109 },
	{ (Il2CppRGCTXDataType)3, 32111 },
	{ (Il2CppRGCTXDataType)1, 180 },
	{ (Il2CppRGCTXDataType)2, 180 },
	{ (Il2CppRGCTXDataType)2, 5382 },
	{ (Il2CppRGCTXDataType)2, 5382 },
	{ (Il2CppRGCTXDataType)1, 178 },
	{ (Il2CppRGCTXDataType)2, 178 },
	{ (Il2CppRGCTXDataType)3, 32128 },
	{ (Il2CppRGCTXDataType)1, 179 },
	{ (Il2CppRGCTXDataType)2, 179 },
	{ (Il2CppRGCTXDataType)3, 32112 },
	{ (Il2CppRGCTXDataType)3, 516 },
	{ (Il2CppRGCTXDataType)3, 32113 },
	{ (Il2CppRGCTXDataType)3, 517 },
	{ (Il2CppRGCTXDataType)2, 327 },
	{ (Il2CppRGCTXDataType)1, 327 },
	{ (Il2CppRGCTXDataType)3, 32795 },
};
extern const CustomAttributesCacheGenerator g_Meta_WitAi_Lib_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule;
const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule = 
{
	"Meta.WitAi.Lib.dll",
	605,
	s_methodPointers,
	7,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	41,
	s_rgctxIndices,
	210,
	s_rgctxValues,
	NULL,
	g_Meta_WitAi_Lib_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
